// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FRayTracingVisualizationData @ 1483e46f0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRayTracingVisualizationData * __thiscall
FRayTracingVisualizationData::FRayTracingVisualizationData(FRayTracingVisualizationData *this)

{
  bool bVar1;
  FText *pFVar2;
  FText local_18;
  
  *(undefined8 *)&this->ModeMap = 0;
  *(undefined8 *)&(this->ModeMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModeMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModeMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModeMap).field_0x34 = 0;
  *(undefined8 *)&(this->ModeMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModeMap).field_0x48 = 0;
  (this->ConsoleDocumentationVisualizationMode).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConsoleDocumentationVisualizationMode).Data.ArrayNum = 0;
  (this->ConsoleDocumentationVisualizationMode).Data.ArrayMax = 0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Barycentrics",L"Barycentrics");
  AddVisualizationMode(this,L"Barycentrics",pFVar2,Standard,0x12,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"PrimaryRays",L"Primary Rays");
  AddVisualizationMode(this,L"PrimaryRays",pFVar2,Standard,0x13,true,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Radiance",L"Radiance");
  AddVisualizationMode(this,L"Radiance",pFVar2,Other,0,true,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"WorldNormal",L"World Normal");
  AddVisualizationMode(this,L"WorldNormal",pFVar2,Standard,1,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"BaseColor",L"Base Color");
  AddVisualizationMode(this,L"BaseColor",pFVar2,Standard,2,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"DiffuseColor",L"Diffuse Color");
  AddVisualizationMode(this,L"DiffuseColor",pFVar2,Other,3,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"SpecularColor",L"Specular Color");
  AddVisualizationMode(this,L"SpecularColor",pFVar2,Other,4,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Opacity",L"Opacity");
  AddVisualizationMode(this,L"Opacity",pFVar2,Other,5,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Metallic",L"Metallic");
  AddVisualizationMode(this,L"Metallic",pFVar2,Other,6,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Specular",L"Specular");
  AddVisualizationMode(this,L"Specular",pFVar2,Other,7,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Roughness",L"Roughness");
  AddVisualizationMode(this,L"Roughness",pFVar2,Other,8,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Ior",L"Ior");
  AddVisualizationMode(this,L"Ior",pFVar2,Other,9,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"ShadingModelID",
                      L"Shading Model ID");
  AddVisualizationMode(this,L"ShadingModelID",pFVar2,Other,10,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"BlendingMode",L"Blending Mode");
  AddVisualizationMode(this,L"BlendingMode",pFVar2,Other,0xb,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"PrimitiveLightingChannelMask",
                      L"Primitive Lighting Channel Mask");
  AddVisualizationMode(this,L"PrimitiveLightingChannelMask",pFVar2,Other,0xc,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"CustomData",L"Custom Data");
  AddVisualizationMode(this,L"CustomData",pFVar2,Other,0xd,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"GBufferAO",L"GBuffer AO");
  AddVisualizationMode(this,L"GBufferAO",pFVar2,Other,0xe,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"IndirectIrradiance",
                      L"Indirect Irradiance");
  AddVisualizationMode(this,L"IndirectIrradiance",pFVar2,Other,0xf,true,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"WorldPosition",L"World Position");
  AddVisualizationMode(this,L"WorldPosition",pFVar2,Other,0x10,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"HitKind",L"Hit Kind");
  AddVisualizationMode(this,L"HitKind",pFVar2,Other,0x11,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"WorldTangent",L"World Tangent");
  AddVisualizationMode(this,L"WorldTangent",pFVar2,Other,0x14,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Anisotropy",L"Anisotropy");
  AddVisualizationMode(this,L"Anisotropy",pFVar2,Other,0x15,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Instances",L"Instances");
  AddVisualizationMode(this,L"Instances",pFVar2,Standard,0x16,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Triangles",L"Triangles");
  AddVisualizationMode(this,L"Triangles",pFVar2,Standard,0x1a,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"FarField",L"Far Field");
  AddVisualizationMode(this,L"FarField",pFVar2,Standard,0x1b,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"DynamicInstances",
                      L"Dynamic Instances");
  AddVisualizationMode(this,L"DynamicInstances",pFVar2,Standard,0x26,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"ProxyType",L"Proxy Type");
  AddVisualizationMode(this,L"ProxyType",pFVar2,Standard,0x27,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"Picker",L"Picker");
  AddVisualizationMode(this,L"Picker",pFVar2,Standard,0x28,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"LightGridOccupancy",
                      L"Light Grid Occupancy");
  AddVisualizationMode(this,L"LightGridOccupancy",pFVar2,Standard,0x2c,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"InstanceOverlap",
                      L"Instance Overlap");
  AddVisualizationMode(this,L"InstanceOverlap",pFVar2,Performance,0x29,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TriangleHitCount",
                      L"Triangle Hit Count");
  AddVisualizationMode(this,L"TriangleHitCount",pFVar2,Performance,0x2a,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"HitCountPerInstance",
                      L"Hit Count Per Instance");
  AddVisualizationMode(this,L"HitCountPerInstance",pFVar2,Performance,0x2b,false,false);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalPrimaryNode",
                      L"Traversal Primary Node");
  AddVisualizationMode(this,L"Traversal Primary Node",pFVar2,Performance,0x1c,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalPrimaryCluster",
                      L"Traversal Primary Cluster");
  AddVisualizationMode(this,L"Traversal Primary Cluster",pFVar2,Performance,0x1d,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalPrimaryTriangle",
                      L"Traversal Primary Triangle");
  AddVisualizationMode(this,L"Traversal Primary Triangle",pFVar2,Performance,0x1e,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalPrimaryAll",
                      L"Traversal Primary All");
  AddVisualizationMode(this,L"Traversal Primary All",pFVar2,Performance,0x1f,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalPrimaryStatistics",
                      L"Traversal Primary Statistics");
  AddVisualizationMode(this,L"Traversal Primary Statistics",pFVar2,Performance,0x20,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalSecondaryNode",
                      L"Traversal Secondary Node");
  AddVisualizationMode(this,L"Traversal Secondary Node",pFVar2,Performance,0x21,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalSecondaryCluster",
                      L"Traversal Secondary Cluster");
  AddVisualizationMode(this,L"Traversal Secondary Cluster",pFVar2,Performance,0x22,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalSecondaryTriangle",
                      L"Traversal Secondary Triangle");
  AddVisualizationMode(this,L"Traversal Secondary Triangle",pFVar2,Performance,0x23,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalSecondaryAll",
                      L"Traversal Secondary All");
  AddVisualizationMode(this,L"Traversal Secondary All",pFVar2,Performance,0x24,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"FRayTracingVisualizationData",L"TraversalSecondaryStatistics",
                      L"Traversal Secondary Statistics");
  AddVisualizationMode(this,L"Traversal Secondary Statistics",pFVar2,Performance,0x25,false,true);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (GRHIGlobals.SupportsShaderTimestamp != false) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FRayTracingVisualizationData",L"TimingTraversal",
                        L"Timing - Traversal");
    AddVisualizationMode(this,L"Timing Traversal",pFVar2,Timing,0x17,false,false);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FRayTracingVisualizationData",L"TimingMaterial",
                        L"Timing - Material");
    AddVisualizationMode(this,L"Timing Material",pFVar2,Timing,0x19,false,false);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FRayTracingVisualizationData",L"TimingAHS",
                        L"Timing - Material (Alpha Only)");
    AddVisualizationMode(this,L"Timing AHS",pFVar2,Timing,0x18,false,false);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  bVar1 = Substrate::IsSubstrateEnabled();
  if (bVar1) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FRayTracingVisualizationData",L"SubstrateMaterialProperties",
                        L"Substrate Material Properties");
    AddVisualizationMode(this,L"SubstrateMaterialProperties",pFVar2,Other,0x2d,true,false);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  ConfigureConsoleCommand(this);
  return this;
}

// AddVisualizationMode @ 1483ef760

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRayTracingVisualizationData::AddVisualizationMode
          (FRayTracingVisualizationData *this,wchar_t *param_1,FText *param_2,FModeType param_3,
          int param_4,bool param_5,bool param_6)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  bool bVar4;
  FString *pFVar5;
  FText *pFVar6;
  FString *pFVar7;
  TKeyInitializer<FName_const_&> local_28;
  FName local_20;
  FString local_18;
  
  if (!GRHIGlobals.RayTracing.SupportsShaders) {
    if (!GRHIGlobals.RayTracing.SupportsInlineRayTracing) {
      return;
    }
    if (((uint)param_4 < 0x2a) && ((0x3c004400000U >> ((ulonglong)(uint)param_4 & 0x3f) & 1) != 0))
    {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((((0x28 < (uint)param_4) || ((0x10000040002U >> ((ulonglong)(uint)param_4 & 0x3f) & 1) == 0)
         ) && (!bVar4)) && (9 < param_4 - 0x1cU)) {
      return;
    }
  }
  ::FName::FName(&local_20,param_1);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_20;
  TSet<TTuple<FName,FRayTracingVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FRayTracingVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>,FDefaultSetAllocator>
              *)this,&local_28,(bool *)&local_18);
  pFVar7 = (FString *)(*(longlong *)&this->ModeMap + (longlong)(int)local_28.Key * 0x58 + 8);
  pFVar5 = ::FString::FString(&local_18,param_1);
  if (pFVar7 != pFVar5) {
    pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar7->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (pFVar7->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if ((FName *)local_18.Data.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(FName *)(pFVar7 + 1) = local_20;
  pIVar2 = (param_2->TextData).Reference;
  pIVar3 = *(ITextData **)&pFVar7[1].Data.ArrayNum;
  if (pIVar3 != pIVar2) {
    *(ITextData **)&pFVar7[1].Data.ArrayNum = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_28);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)&pFVar7[2].Data.AllocatorInstance.Data = param_2->Flags;
  pFVar6 = FText::GetEmpty();
  pIVar2 = *(ITextData **)&pFVar7[2].Data.ArrayNum;
  pIVar3 = (pFVar6->TextData).Reference;
  if (pIVar2 != pIVar3) {
    *(ITextData **)&pFVar7[2].Data.ArrayNum = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_28);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)&pFVar7[3].Data.AllocatorInstance.Data = pFVar6->Flags;
  *(bool *)&pFVar7[4].Data.AllocatorInstance.Data = param_5;
  *(bool *)((longlong)&pFVar7[4].Data.AllocatorInstance.Data + 1) = param_6;
  *(FModeType *)&pFVar7[3].Data.ArrayNum = param_3;
  pFVar7[3].Data.ArrayMax = param_4;
  return;
}

// ApplyOverrides @ 1483efc50

FName __thiscall
FRayTracingVisualizationData::ApplyOverrides(FRayTracingVisualizationData *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName *in_R8;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RayTracingVisualizationData.cpp"
                       ,0xa5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  if (GRayTracingVisualizeMode != (FName)0x0) {
    in_R8 = &GRayTracingVisualizeMode;
  }
  *param_1 = *in_R8;
  return (FName)param_1;
}

// ConfigureConsoleCommand @ 1483f8850

void __thiscall
FRayTracingVisualizationData::ConfigureConsoleCommand(FRayTracingVisualizationData *this)

{
  ulonglong uVar1;
  uint uVar2;
  FString *pFVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  FString local_88;
  FString local_78;
  undefined1 *local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  FRayTracingVisualizationData *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  iVar9 = 0;
  local_68 = &(this->ModeMap).field_0x10;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_78.Data.ArrayNum = 0;
  iVar7 = *(int *)&(this->ModeMap).field_0x28;
  local_78.Data.ArrayMax = 1;
  local_58 = local_78.Data.ArrayNum;
  iStack_5c = 0;
  if (iVar7 != 0) {
    puVar8 = *(uint **)&(this->ModeMap).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)local_68;
    }
    uVar2 = *puVar8;
    local_58 = iVar9;
    local_78.Data.ArrayNum = iVar9;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_78.Data.ArrayNum;
      local_58 = local_58 + 0x20;
      local_78.Data.ArrayNum = local_78.Data.ArrayNum + 1;
      iStack_5c = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Data.ArrayNum)
      goto LAB_1483f88fa;
      uVar2 = puVar8[lVar4 + 1];
    }
    local_78.Data.ArrayMax = -uVar2 & uVar2;
    uVar1 = (ulonglong)(uint)local_78.Data.ArrayMax * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_5c = local_58 + -1 + (int)lVar4;
    if (iVar7 < iStack_5c) {
      iStack_5c = iVar7;
    }
  }
LAB_1483f88fa:
  uStack_60 = 0xffffffff;
  TStack_40._padding_ = CONCAT44(local_78.Data.ArrayMax,local_78.Data.ArrayNum);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = iStack_5c;
  TStack_40.BaseBitIndex = local_58;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  iStack_54 = iStack_5c;
  local_48 = this;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_68;
  TStack_40.CurrentBitIndex = iStack_5c;
  if (iStack_5c < iVar7) {
    do {
      lVar4 = (longlong)TStack_40.CurrentBitIndex * 0x58 + *(longlong *)&local_48->ModeMap;
      pFVar3 = ::FString::FString(&local_78,L"\n  ");
      iVar7 = (pFVar3->Data).ArrayNum;
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar6 = iVar9;
      }
      ::FString::AppendChars(&local_88,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar6);
      if ((FRayTracingVisualizationData *)local_78.Data.AllocatorInstance.Data !=
          (FRayTracingVisualizationData *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      iVar7 = *(int *)(lVar4 + 0x10);
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar6 = iVar9;
      }
      ::FString::AppendChars(&local_88,*(wchar_t **)(lVar4 + 8),iVar6);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  ::FString::operator=
            (&this->ConsoleDocumentationVisualizationMode,
             L"When the viewport view-mode is set to \'Ray Tracing Debug\', this command specifies which of the various modes to display. Values entered other than the allowed values shown below will be ignored."
            );
  iVar7 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar7 = iVar9;
  }
  ::FString::AppendChars
            (&this->ConsoleDocumentationVisualizationMode,
             (wchar_t *)local_88.Data.AllocatorInstance.Data,iVar7);
  if ((this->ConsoleDocumentationVisualizationMode).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->ConsoleDocumentationVisualizationMode).Data.AllocatorInstance.Data;
  }
  (**(code **)(*(longlong *)CVarRayTracingVisualize._8_8_ + 0x10))
            (CVarRayTracingVisualize._8_8_,pwVar5);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// GetModeDisplayName @ 148409290

FText * __thiscall
FRayTracingVisualizationData::GetModeDisplayName
          (FRayTracingVisualizationData *this,FText *__return_storage_ptr__,FName *param_1)

{
  ITextData *pIVar1;
  FModeRecord *pFVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar2 != (FModeRecord *)0x0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar2->ModeText).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = (pFVar2->ModeText).Flags;
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// GetModeID @ 148409330

int __thiscall
FRayTracingVisualizationData::GetModeID(FRayTracingVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->ModeID;
  }
  return -1;
}

// GetModeTonemapped @ 148409360

bool __thiscall
FRayTracingVisualizationData::GetModeTonemapped(FRayTracingVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->bTonemapped;
  }
  return false;
}

// HasOverrides @ 14840bdd0

bool __thiscall FRayTracingVisualizationData::HasOverrides(FRayTracingVisualizationData *this)

{
  FModeRecord *pFVar1;
  
  if (GRayTracingVisualizeMode != (FName)0x0) {
    pFVar1 = TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
             ::Find((TMapBase<FName,FRayTracingVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRayTracingVisualizationData::FModeRecord,1>_>
                     *)this,GRayTracingVisualizeMode);
    if ((pFVar1 != (FModeRecord *)0x0) && (pFVar1->ModeID != -1)) {
      return true;
    }
  }
  return false;
}

