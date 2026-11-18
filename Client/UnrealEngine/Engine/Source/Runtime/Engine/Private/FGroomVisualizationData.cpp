// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetModeDefaultComposited @ 147d092c0

bool __thiscall
FGroomVisualizationData::GetModeDefaultComposited(FGroomVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FGroomVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGroomVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FGroomVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGroomVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->DefaultComposited;
  }
  return false;
}

// GetModeDisplayName @ 147d09390

FText * __thiscall
FGroomVisualizationData::GetModeDisplayName
          (FGroomVisualizationData *this,FText *__return_storage_ptr__,FName *param_1)

{
  ITextData *pIVar1;
  FModeRecord *pFVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = TMapBase<FName,FGroomVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGroomVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FGroomVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGroomVisualizationData::FModeRecord,1>_>
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

// GetViewMode @ 147d13810

EGroomViewMode __thiscall
FGroomVisualizationData::GetViewMode(FGroomVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FGroomVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGroomVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FGroomVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGroomVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->Mode;
  }
  return None;
}

// Initialize @ 147d186e0

void __thiscall FGroomVisualizationData::Initialize(FGroomVisualizationData *this)

{
  FMutex *this_00;
  FString *pFVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  longlong lVar7;
  FText *pFVar8;
  FText *pFVar9;
  FString *pFVar10;
  FText local_4c8;
  FText local_4b8;
  FText local_4a8;
  FText local_498;
  FText local_488;
  FText local_478;
  FText local_468;
  FText local_458;
  FText local_448;
  FText local_438;
  FText local_428;
  FText local_418;
  FText local_408;
  FText local_3f8;
  FText local_3e8;
  FText local_3d8;
  FText local_3c8;
  FText local_3b8;
  FText local_3a8;
  FText local_398;
  FText local_388;
  FText local_378;
  FText local_368;
  FText local_358;
  FText local_348;
  FText local_338;
  FText local_328;
  FText local_318;
  FText local_308;
  FText local_2f8;
  FText local_2e8;
  FText local_2d8;
  FText local_2c8;
  FText local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FText local_268;
  FText local_258;
  FText local_248;
  FText local_238;
  FText local_228;
  FText local_218;
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FString local_28;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this_00);
  }
  pTVar5 = CVarHairStrandsGlobalEnable.Ref;
  if ((this->bIsInitialized == (atomic<bool>)0x0) && (0 < GHairStrandsPluginEnable)) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    if (0 < *(int *)((longlong)pTVar5->ShadowedValue + lVar7)) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_4b8,L"FGroomVisualizationData",L"NoneDebugDesc",L"No debug mode");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_4c8,L"FGroomVisualizationData",L"NoneDebug",L"None");
      AddVisualizationMode(&this->ModeMap,true,None,pFVar9,pFVar8);
      if (local_4c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4c8.TextData.Reference + 0x10))();
      }
      if (local_4b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_498,L"FGroomVisualizationData",L"MacroGroupsDesc",L"Instances info"
                         );
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_4a8,L"FGroomVisualizationData",L"MacroGroups",L"Instances");
      AddVisualizationMode(&this->ModeMap,true,MacroGroups,pFVar9,pFVar8);
      if (local_4a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4a8.TextData.Reference + 0x10))();
      }
      if (local_498.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_478,L"FGroomVisualizationData",L"LightBoundsDesc",
                          L"All DOMs light bounds");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_488,L"FGroomVisualizationData",L"LightBounds",L"Light Bound");
      AddVisualizationMode(&this->ModeMap,true,LightBounds,pFVar9,pFVar8);
      if (local_488.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_488.TextData.Reference + 0x10))();
      }
      if (local_478.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_458,L"FGroomVisualizationData",L"MacroGroupScreenRectDesc",
                          L"Screen projected instances");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_468,L"FGroomVisualizationData",L"MacroGroupScreenRect",
                          L"Screen Bounds");
      AddVisualizationMode(&this->ModeMap,true,MacroGroupScreenRect,pFVar9,pFVar8);
      if (local_468.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
      }
      if (local_458.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_438,L"FGroomVisualizationData",L"DeepOpacityMapsDesc",
                          L"Deep opacity maps");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_448,L"FGroomVisualizationData",L"DeepOpacityMaps",L"Deep Shadows");
      AddVisualizationMode(&this->ModeMap,true,DeepOpacityMaps,pFVar9,pFVar8);
      if (local_448.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
      }
      if (local_438.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_418,L"FGroomVisualizationData",L"SamplePerPixelDesc",
                          L"Sub-pixel sample count");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_428,L"FGroomVisualizationData",L"SamplePerPixel",
                          L"Sample Per Pixel");
      AddVisualizationMode(&this->ModeMap,true,SamplePerPixel,pFVar9,pFVar8);
      if (local_428.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
      }
      if (local_418.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_3f8,L"FGroomVisualizationData",L"TAAResolveTypeDesc",
                          L"TAA resolve type (regular/responsive)");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_408,L"FGroomVisualizationData",L"TAAResolveType",L"AA Type");
      AddVisualizationMode(&this->ModeMap,true,TAAResolveType,pFVar9,pFVar8);
      if (local_408.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
      }
      if (local_3f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_3d8,L"FGroomVisualizationData",L"CoverageTypeDesc",
                          L"Type of hair coverage - Fully covered : Green / Partially covered : Red"
                         );
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_3e8,L"FGroomVisualizationData",L"CoverageType",L"Coverage Type");
      AddVisualizationMode(&this->ModeMap,true,CoverageType,pFVar9,pFVar8);
      if (local_3e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
      }
      if (local_3d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_3b8,L"FGroomVisualizationData",L"VoxelsDensityDesc",
                          L"Hair density volume");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_3c8,L"FGroomVisualizationData",L"VoxelsDensity",L"Voxels");
      AddVisualizationMode(&this->ModeMap,true,VoxelsDensity,pFVar9,pFVar8);
      if (local_3c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
      }
      if (local_3b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_398,L"FGroomVisualizationData",L"MeshProjectionDesc",
                          L"Hair mesh projection");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_3a8,L"FGroomVisualizationData",L"MeshProjection",L"Root Bindings");
      AddVisualizationMode(&this->ModeMap,true,MeshProjection,pFVar9,pFVar8);
      if (local_3a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
      }
      if (local_398.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_378,L"FGroomVisualizationData",L"CoverageDesc",L"Hair coverage");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_388,L"FGroomVisualizationData",L"Coverage",L"Coverage");
      AddVisualizationMode(&this->ModeMap,true,Coverage,pFVar9,pFVar8);
      if (local_388.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
      }
      if (local_378.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_358,L"FGroomVisualizationData",L"MaterialDepthDesc",
                          L"Hair material depth");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_368,L"FGroomVisualizationData",L"MaterialDepth",L"Depth");
      AddVisualizationMode(&this->ModeMap,true,MaterialDepth,pFVar9,pFVar8);
      if (local_368.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
      }
      if (local_358.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_338,L"FGroomVisualizationData",L"MaterialBaseColorDesc",
                          L"Hair material base color");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_348,L"FGroomVisualizationData",L"MaterialBaseColor",L"BaseColor");
      AddVisualizationMode(&this->ModeMap,true,MaterialBaseColor,pFVar9,pFVar8);
      if (local_348.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
      }
      if (local_338.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_318,L"FGroomVisualizationData",L"MaterialRoughnessDesc",
                          L"Hair material roughness");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_328,L"FGroomVisualizationData",L"MaterialRoughness",L"Roughness");
      AddVisualizationMode(&this->ModeMap,true,MaterialRoughness,pFVar9,pFVar8);
      if (local_328.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
      }
      if (local_318.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_2f8,L"FGroomVisualizationData",L"MaterialSpecularDesc",
                          L"Hair material specular");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_308,L"FGroomVisualizationData",L"MaterialSpecular",L"Specular");
      AddVisualizationMode(&this->ModeMap,true,MaterialSpecular,pFVar9,pFVar8);
      if (local_308.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
      }
      if (local_2f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_2d8,L"FGroomVisualizationData",L"MaterialTangentDesc",
                          L"Hair material tangent");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_2e8,L"FGroomVisualizationData",L"MaterialTangent",L"Tangent");
      AddVisualizationMode(&this->ModeMap,true,MaterialTangent,pFVar9,pFVar8);
      if (local_2e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
      }
      if (local_2d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_2b8,L"FGroomVisualizationData",L"TileDesc",
                          L"Hair tile cotegorization");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_2c8,L"FGroomVisualizationData",L"Tile",L"Tile");
      AddVisualizationMode(&this->ModeMap,true,Tile,pFVar9,pFVar8);
      if (local_2c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
      }
      if (local_2b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_298,L"FGroomVisualizationData",L"SimHairStrandsDesc",
                          L"Simulation strands");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_2a8,L"FGroomVisualizationData",L"SimHairStrands",L"Guides");
      AddVisualizationMode(&this->ModeMap,true,SimHairStrands,pFVar9,pFVar8);
      if (local_2a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
      }
      if (local_298.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_278,L"FGroomVisualizationData",L"RenderHairStrandsDesc",
                          L"Rendering strands influences");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_288,L"FGroomVisualizationData",L"RenderHairStrands",
                          L"Strands Guides Influences");
      AddVisualizationMode(&this->ModeMap,true,RenderHairStrands,pFVar9,pFVar8);
      if (local_288.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
      }
      if (local_278.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_258,L"FGroomVisualizationData",L"CardGuidesDesc",L"Cards Guides");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_268,L"FGroomVisualizationData",L"CardGuides",L"Cards Guides");
      AddVisualizationMode(&this->ModeMap,true,CardGuides,pFVar9,pFVar8);
      if (local_268.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
      }
      if (local_258.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_238,L"FGroomVisualizationData",L"RootUVDesc",L"Roots UV");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_248,L"FGroomVisualizationData",L"RootUV",L"Root UV");
      AddVisualizationMode(&this->ModeMap,true,RootUV,pFVar9,pFVar8);
      if (local_248.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
      }
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_218,L"FGroomVisualizationData",L"RootUDIMDesc",
                          L"Roots UV UDIM texture index");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_228,L"FGroomVisualizationData",L"RootUDIM",L"Root UDIM");
      AddVisualizationMode(&this->ModeMap,true,RootUDIM,pFVar9,pFVar8);
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      if (local_218.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_1f8,L"FGroomVisualizationData",L"UVDesc",L"Hair UV");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_208,L"FGroomVisualizationData",L"UV",L"UV");
      AddVisualizationMode(&this->ModeMap,true,UV,pFVar9,pFVar8);
      if (local_208.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
      }
      if (local_1f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_1d8,L"FGroomVisualizationData",L"SeedDesc",L"Hair seed");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_1e8,L"FGroomVisualizationData",L"Seed",L"Seed");
      AddVisualizationMode(&this->ModeMap,true,Seed,pFVar9,pFVar8);
      if (local_1e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
      }
      if (local_1d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_1b8,L"FGroomVisualizationData",L"DimensionDesc",L"Hair dimensions")
      ;
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_1c8,L"FGroomVisualizationData",L"Dimension",L"Dimension");
      AddVisualizationMode(&this->ModeMap,true,Dimension,pFVar9,pFVar8);
      if (local_1c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
      }
      if (local_1b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_198,L"FGroomVisualizationData",L"RadiusVariationDesc",
                          L"Hair radius variation");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_1a8,L"FGroomVisualizationData",L"RadiusVariation",
                          L"Radius Variation");
      AddVisualizationMode(&this->ModeMap,true,RadiusVariation,pFVar9,pFVar8);
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_178,L"FGroomVisualizationData",L"TangentDesc",L"Hair tangent");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_188,L"FGroomVisualizationData",L"Tangent",L"Tangent");
      AddVisualizationMode(&this->ModeMap,true,Tangent,pFVar9,pFVar8);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_158,L"FGroomVisualizationData",L"ControlPointsDesc",
                          L"Hair control points");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_168,L"FGroomVisualizationData",L"ControlPoints",L"Control Points");
      AddVisualizationMode(&this->ModeMap,true,ControlPoints,pFVar9,pFVar8);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_138,L"FGroomVisualizationData",L"ColorDesc",
                          L"Control point color (optional)");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_148,L"FGroomVisualizationData",L"Color",L"Per-CV Color");
      AddVisualizationMode(&this->ModeMap,true,Color,pFVar9,pFVar8);
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_118,L"FGroomVisualizationData",L"RoughnessDesc",
                          L"Control point roughness  (optional)");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_128,L"FGroomVisualizationData",L"Roughness",L"Per-CV Roughness");
      AddVisualizationMode(&this->ModeMap,true,Roughness,pFVar9,pFVar8);
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_f8,L"FGroomVisualizationData",L"ClusterDesc",L"Hair clusters");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_108,L"FGroomVisualizationData",L"Cluster",L"Clusters");
      AddVisualizationMode(&this->ModeMap,true,Cluster,pFVar9,pFVar8);
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_d8,L"FGroomVisualizationData",L"ClusterAABBDesc",
                          L"Hair clusters AABBs");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_e8,L"FGroomVisualizationData",L"ClusterAABB",L"Clusters Bounds");
      AddVisualizationMode(&this->ModeMap,true,ClusterAABB,pFVar9,pFVar8);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_b8,L"FGroomVisualizationData",L"GroupDesc",L"Hair groups");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_c8,L"FGroomVisualizationData",L"Group",L"Groups");
      AddVisualizationMode(&this->ModeMap,true,Group,pFVar9,pFVar8);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_98,L"FGroomVisualizationData",L"LODColorationDesc",
                          L"Hair LOD coloring");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"FGroomVisualizationData",L"LODColoration",L"LOD Color");
      AddVisualizationMode(&this->ModeMap,true,LODColoration,pFVar9,pFVar8);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"FGroomVisualizationData",L"AODesc",
                          L"Control point AO  (optional)");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"FGroomVisualizationData",L"AO",L"Per-CV AO");
      AddVisualizationMode(&this->ModeMap,true,AO,pFVar9,pFVar8);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"FGroomVisualizationData",L"ClumpIDDesc",
                          L"Curve clumpID  (optional)");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"FGroomVisualizationData",L"ClumpID",L"Clump ID");
      AddVisualizationMode(&this->ModeMap,true,ClumpID,pFVar9,pFVar8);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"FGroomVisualizationData",L"MemoryDesc",L"Memory");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"FGroomVisualizationData",L"Memory",L"Memory");
      AddVisualizationMode(&this->ModeMap,true,Memory,pFVar9,pFVar8);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      pFVar10 = ConfigureConsoleCommand(&local_28,&this->ModeMap);
      pFVar1 = &this->ConsoleDocumentationVisualizationMode;
      if (pFVar1 != pFVar10) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->ConsoleDocumentationVisualizationMode).Data.ArrayNum = (pFVar10->Data).ArrayNum;
        (this->ConsoleDocumentationVisualizationMode).Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  LOCK();
  this->bIsInitialized = (atomic<bool>)0x1;
  UNLOCK();
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

