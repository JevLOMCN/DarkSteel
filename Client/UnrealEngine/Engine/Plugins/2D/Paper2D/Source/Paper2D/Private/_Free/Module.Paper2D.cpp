// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 484

// AdditionalTextureParameterRootName'' @ 1411de190

void __cdecl
`dynamic_initializer_for_'FSpriteTextureOverrideRenderProxy::AdditionalTextureParameterRootName__
          (void)

{
  ::FName::FName(&FSpriteTextureOverrideRenderProxy::AdditionalTextureParameterRootName,
                 L"SpriteAdditionalTexture");
  return;
}

// PackedNormalX'' @ 1411de1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FPaperSpriteTangents::PackedNormalX__(void)

{
  int iVar1;
  
  iVar1 = 0x7f;
  if ((int)ROUND(___real_406fd00000000000) >> 1 < 0x7f) {
    iVar1 = (int)ROUND(___real_406fd00000000000) >> 1;
  }
  FPaperSpriteTangents::PackedNormalX.Vector._s_0.X = -0x80;
  if (-0x80 < iVar1) {
    FPaperSpriteTangents::PackedNormalX.Vector._s_0.X = (schar)iVar1;
  }
  iVar1 = 0x7f;
  if ((int)ROUND(__real_3fe0000000000000) >> 1 < 0x7f) {
    iVar1 = (int)ROUND(__real_3fe0000000000000) >> 1;
  }
  FPaperSpriteTangents::PackedNormalX.Vector._s_0.Y = -0x80;
  if (-0x80 < iVar1) {
    FPaperSpriteTangents::PackedNormalX.Vector._s_0.Y = (schar)iVar1;
  }
  FPaperSpriteTangents::PackedNormalX.Vector._s_0.Z =
       FPaperSpriteTangents::PackedNormalX.Vector._s_0.Y;
  return;
}

// PackedNormalZ'' @ 1411de220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FPaperSpriteTangents::PackedNormalZ__(void)

{
  int iVar1;
  
  iVar1 = 0x7f;
  if ((int)ROUND(__real_3fe0000000000000) >> 1 < 0x7f) {
    iVar1 = (int)ROUND(__real_3fe0000000000000) >> 1;
  }
  FPaperSpriteTangents::PackedNormalZ.Vector._s_0.X = -0x80;
  if (-0x80 < iVar1) {
    FPaperSpriteTangents::PackedNormalZ.Vector._s_0.X = (schar)iVar1;
  }
  FPaperSpriteTangents::PackedNormalZ.Vector._s_0.Z =
       FPaperSpriteTangents::PackedNormalZ.Vector._s_0.X;
  iVar1 = 0x7f;
  if ((int)ROUND(___real_c06fb00000000000) >> 1 < 0x7f) {
    iVar1 = (int)ROUND(___real_c06fb00000000000) >> 1;
  }
  FPaperSpriteTangents::PackedNormalZ.Vector._s_0.Y = -0x80;
  if (-0x80 < iVar1) {
    FPaperSpriteTangents::PackedNormalZ.Vector._s_0.Y = (schar)iVar1;
  }
  return;
}

// PositionCurve'' @ 1411de290

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 1411de2b0

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 1411de2d0

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// SpriteComponentName'' @ 1411de2f0

void __cdecl `dynamic_initializer_for_'APaperCharacter::SpriteComponentName__(void)

{
  ::FName::FName(&APaperCharacter::SpriteComponentName,L"Sprite0");
  return;
}

// TextureParameterName'' @ 1411de310

void __cdecl
`dynamic_initializer_for_'FSpriteTextureOverrideRenderProxy::TextureParameterName__(void)

{
  ::FName::FName(&FSpriteTextureOverrideRenderProxy::TextureParameterName,L"SpriteTexture");
  return;
}

// `dynamic_initializer_for_'CVarDrawSpritesAsTwoSided'' @ 1411de330

void __cdecl _dynamic_initializer_for__CVarDrawSpritesAsTwoSided__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDrawSpritesAsTwoSided,L"r.Paper2D.DrawTwoSided",local_res8,
             L"Draw sprites as two sided.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawSpritesAsTwoSided__);
  return;
}

// `dynamic_initializer_for_'CVarDrawSpritesUsingPrebuiltVertexBuffers'' @ 1411de380

void __cdecl _dynamic_initializer_for__CVarDrawSpritesUsingPrebuiltVertexBuffers__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDrawSpritesUsingPrebuiltVertexBuffers,L"r.Paper2D.UsePrebuiltVertexBuffers",
             local_res8,L"Draw sprites using prebuilt vertex buffers.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawSpritesUsingPrebuiltVertexBuffers__);
  return;
}

// `dynamic_initializer_for_'GRegisterPaperCustomVersion'' @ 1411de3d0

void __cdecl _dynamic_initializer_for__GRegisterPaperCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FPaperCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,0x11,L"Paper2DVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterPaperCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogPaper2D'' @ 1411de410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPaper2D__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPaper2D,L"LogPaper2D",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogPaper2D__);
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 1411de450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPaper2D'' @ 1411de490

void __cdecl _dynamic_initializer_for__ModuleRegistrantPaper2D__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Paper2D";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Paper2D",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FPaper2DModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1411de4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1411de570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1411de600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1411de690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1411de720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1411de7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1411de840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1411de8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1411de960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1411de9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PaperRenderSceneProxy_GetDynamicMeshElements'' @ 1411dea80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_PaperRenderSceneProxy_GetDynamicMeshElements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PaperRenderSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_PaperRenderSceneProxy_GetDynamicMeshElements>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PaperRenderSceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_PaperRenderSceneProxy_GetDynamicMeshElements,*pFVar1,
               L"SpriteProxy GDME","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PaperRender_GetNewBatchMeshes'' @ 1411deb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PaperRender_GetNewBatchMeshes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PaperRender_GetNewBatchMeshes ==
      (FThreadSafeStaticStat<FStat_STAT_PaperRender_GetNewBatchMeshes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PaperRender_GetNewBatchMeshes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PaperRender_GetNewBatchMeshes,*pFVar1,
               L"Get New Batch Meshes","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PaperRender_SetSpriteRT'' @ 1411deba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PaperRender_SetSpriteRT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PaperRender_SetSpriteRT ==
      (FThreadSafeStaticStat<FStat_STAT_PaperRender_SetSpriteRT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PaperRender_SetSpriteRT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PaperRender_SetSpriteRT,*pFVar1,
               L"SetSprite (RT)","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PaperRender_TileMapRebuild'' @ 1411dec30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PaperRender_TileMapRebuild__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PaperRender_TileMapRebuild ==
      (FThreadSafeStaticStat<FStat_STAT_PaperRender_TileMapRebuild>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PaperRender_TileMapRebuild");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PaperRender_TileMapRebuild,*pFVar1,
               L"Rebuild Tile Map","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TickFlipbook'' @ 1411decc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TickFlipbook__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TickFlipbook == (FThreadSafeStaticStat<FStat_STAT_TickFlipbook>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TickFlipbook");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickFlipbook,*pFVar1,L"Tick Flipbook",
               "STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TileMap_EditorWireDrawing'' @ 1411ded50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TileMap_EditorWireDrawing__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TileMap_EditorWireDrawing ==
      (FThreadSafeStaticStat<FStat_STAT_TileMap_EditorWireDrawing>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TileMap_EditorWireDrawing");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TileMap_EditorWireDrawing,*pFVar1,
               L"Tile Map Editor Grid","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TileMap_GetDynamicMeshElements'' @ 1411dede0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TileMap_GetDynamicMeshElements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TileMap_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_TileMap_GetDynamicMeshElements>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TileMap_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TileMap_GetDynamicMeshElements,*pFVar1,
               L"Tile Map Proxy","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h__Script_Paper2D_3048357949'' @ 1411dee70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h__Script_Paper2D_3048357949__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h__Script_Paper2D_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h__Script_Paper2D_2225625761'' @ 1411deeb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h__Script_Paper2D_2225625761__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookActor_h__Script_Paper2D_846117901'' @ 1411deef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookActor_h__Script_Paper2D_846117901__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookActor_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h__Script_Paper2D_1937439093'' @ 1411def30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h__Script_Paper2D_1937439093__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h__Script_Paper2D_1979684343'' @ 1411def70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h__Script_Paper2D_1979684343__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h__Script_Paper2D_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h__Script_Paper2D_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h__Script_Paper2D_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h__Script_Paper2D_2846491996'' @ 1411defc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h__Script_Paper2D_2846491996__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h__Script_Paper2D_1433883800'' @ 1411df000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h__Script_Paper2D_1433883800__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h__Script_Paper2D_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h__Script_Paper2D_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h__Script_Paper2D_594296160'' @ 1411df050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h__Script_Paper2D_594296160__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteActor_h__Script_Paper2D_1679488795'' @ 1411df090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteActor_h__Script_Paper2D_1679488795__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteActor_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h__Script_Paper2D_348991496'' @ 1411df0d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h__Script_Paper2D_348991496__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h__Script_Paper2D_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h__Script_Paper2D_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h__Script_Paper2D_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h__Script_Paper2D_2468831789'' @ 1411df120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h__Script_Paper2D_2468831789__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h__Script_Paper2D_3202576459'' @ 1411df160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h__Script_Paper2D_3202576459__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h__Script_Paper2D_2871605185'' @ 1411df1a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h__Script_Paper2D_2871605185__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h__Script_Paper2D_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSprite_h__Script_Paper2D_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h__Script_Paper2D_2086261718'' @ 1411df1f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h__Script_Paper2D_2086261718__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h__Script_Paper2D_3828361778'' @ 1411df230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h__Script_Paper2D_3828361778__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainComponent_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h__Script_Paper2D_2365445570'' @ 1411df270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h__Script_Paper2D_2365445570__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h__Script_Paper2D_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h__Script_Paper2D_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainSplineComponent_h__Script_Paper2D_2450575246'' @ 1411df2c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainSplineComponent_h__Script_Paper2D_2450575246__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainSplineComponent_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h__Script_Paper2D_1643012696'' @ 1411df300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h__Script_Paper2D_1643012696__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h__Script_Paper2D_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h__Script_Paper2D_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h__Script_Paper2D_973682484'' @ 1411df350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h__Script_Paper2D_973682484__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h__Script_Paper2D_459606112'' @ 1411df390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h__Script_Paper2D_459606112__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h__Script_Paper2D_709009542'' @ 1411df3d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h__Script_Paper2D_709009542__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h__Script_Paper2D_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h__Script_Paper2D_1836581510'' @ 1411df420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h__Script_Paper2D_1836581510__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h__Script_Paper2D_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h__Script_Paper2D_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h__Script_Paper2D_3622386919'' @ 1411df470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h__Script_Paper2D_3622386919__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteDrawCall_h__Script_Paper2D_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h__Script_Paper2D_22783862'' @ 1411df4b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h__Script_Paper2D_22783862__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h__Script_Paper2D_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h__Script_Paper2D_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h__Script_Paper2D_141829606'' @ 1411df500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h__Script_Paper2D_141829606__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h__Script_Paper2D_1230866378'' @ 1411df540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h__Script_Paper2D_1230866378__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Paper2D",
             Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h__Script_Paper2D_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Paper2D'' @ 1411df580

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Paper2D__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x57a300a2;
  local_res8[0].DeclarationsHash = 0x1d6ea280;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Paper2D,L"/Script/Paper2D",
             &Z_Registration_Info_UPackage__Script_Paper2D,local_res8);
  return;
}

// Z_Construct_UClass_UPaperTerrainComponent_NoRegister @ 14acdc9e0

UClass * __cdecl Z_Construct_UClass_UPaperTerrainComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTerrainComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainComponent",
               &Z_Registration_Info_UClass_UPaperTerrainComponent.InnerSingleton,
               UPaperTerrainComponent::StaticRegisterNativesUPaperTerrainComponent,0x5a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTerrainComponent>,
               InternalVTableHelperCtorCaller<UPaperTerrainComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTerrainComponent.InnerSingleton;
}

// Z_Construct_UClass_UPaperTileMap @ 14acdcb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperTileMap(void)

{
  if (Z_Registration_Info_UClass_UPaperTileMap.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperTileMap.OuterSingleton,
               &Z_Construct_UClass_UPaperTileMap_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperTileMap.OuterSingleton;
}

// Z_Construct_UEnum_Paper2D_ETileMapProjectionMode @ 14acdcba0

UEnum * __cdecl Z_Construct_UEnum_Paper2D_ETileMapProjectionMode(void)

{
  if (Z_Registration_Info_UEnum_ETileMapProjectionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETileMapProjectionMode.InnerSingleton,
               &Z_Construct_UEnum_Paper2D_ETileMapProjectionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETileMapProjectionMode.InnerSingleton;
}

// ETileMapProjectionMode_StaticEnum @ 14acdcbe0

UEnum * __cdecl ETileMapProjectionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETileMapProjectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ETileMapProjectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ETileMapProjectionMode,(UObject *)pUVar1,
                       L"ETileMapProjectionMode");
  }
  return Z_Registration_Info_UEnum_ETileMapProjectionMode.OuterSingleton;
}

// Z_Construct_UClass_APaperSpriteActor @ 14acdce20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APaperSpriteActor(void)

{
  if (Z_Registration_Info_UClass_APaperSpriteActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APaperSpriteActor.OuterSingleton,
               &Z_Construct_UClass_APaperSpriteActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APaperSpriteActor.OuterSingleton;
}

// Z_Construct_UClass_UPaperSpriteAtlas @ 14acdd050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperSpriteAtlas(void)

{
  if (Z_Registration_Info_UClass_UPaperSpriteAtlas.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperSpriteAtlas.OuterSingleton,
               &Z_Construct_UClass_UPaperSpriteAtlas_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperSpriteAtlas.OuterSingleton;
}

// NewStructOps @ 14acdd090

void * __cdecl Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPaperSpriteAtlasSlot,&UE::CoreUObject::Private::Construct<FPaperSpriteAtlasSlot>,&UE::CoreUObject::Private::ConstructForTests<FPaperSpriteAtlasSlot>,&UE::CoreUObject::Private::Destruct<FPaperSpriteAtlasSlot>,&UE::CoreUObject::Private::Copy<FPaperSpriteAtlasSlot>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FIntMargin @ 14acdd0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIntMargin(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIntMargin.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIntMargin.InnerSingleton,
               &Z_Construct_UScriptStruct_FIntMargin_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIntMargin.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIntMargin.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UPackage__Script_Paper2D @ 14acdd150

UPackage * __cdecl Z_Construct_UPackage__Script_Paper2D(void)

{
  if (Z_Registration_Info_UPackage__Script_Paper2D.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Paper2D.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Paper2D.OuterSingleton;
}

// NewStructOps @ 14acdd190

void * __cdecl Z_Construct_UScriptStruct_FIntMargin_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIntMargin,&UE::CoreUObject::Private::Construct<FIntMargin>,&UE::CoreUObject::Private::ConstructForTests<FIntMargin>,&UE::CoreUObject::Private::Destruct<FIntMargin>,&UE::CoreUObject::Private::Copy<FIntMargin>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EPaperSpriteAtlasPadding_StaticEnum @ 14acdd1d0

UEnum * __cdecl EPaperSpriteAtlasPadding_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding,(UObject *)pUVar1,
                       L"EPaperSpriteAtlasPadding");
  }
  return Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton;
}

// Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature @ 14acdd210

UFunction * __cdecl
Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister @ 14acdd4f0

UClass * __cdecl Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperGroupedSpriteComponent",
               &Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.InnerSingleton,
               UPaperGroupedSpriteComponent::StaticRegisterNativesUPaperGroupedSpriteComponent,0x5c0
               ,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperGroupedSpriteComponent>,
               InternalVTableHelperCtorCaller<UPaperGroupedSpriteComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.InnerSingleton;
}

// Z_Construct_UClass_UPaperTileMapComponent_NoRegister @ 14acdd5f0

UClass * __cdecl Z_Construct_UClass_UPaperTileMapComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileMapComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileMapComponent",
               &Z_Registration_Info_UClass_UPaperTileMapComponent.InnerSingleton,
               UPaperTileMapComponent::StaticRegisterNativesUPaperTileMapComponent,0x5e0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTileMapComponent>,
               InternalVTableHelperCtorCaller<UPaperTileMapComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileMapComponent.InnerSingleton;
}

// Z_Construct_UClass_UPaperFlipbookComponent @ 14acdd870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperFlipbookComponent(void)

{
  if (Z_Registration_Info_UClass_UPaperFlipbookComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperFlipbookComponent.OuterSingleton,
               &Z_Construct_UClass_UPaperFlipbookComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperFlipbookComponent.OuterSingleton;
}

// Z_Construct_UClass_APaperTileMapActor @ 14acdd8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APaperTileMapActor(void)

{
  if (Z_Registration_Info_UClass_APaperTileMapActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APaperTileMapActor.OuterSingleton,
               &Z_Construct_UClass_APaperTileMapActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APaperTileMapActor.OuterSingleton;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook @ 14acdd8f0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate @ 14acdd9f0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength @ 14acdda30

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPaperSpriteBlueprintLibrary @ 14acdda70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperSpriteBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames @ 14acddab0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPaperTerrainMaterial @ 14acddaf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperTerrainMaterial(void)

{
  if (Z_Registration_Info_UClass_UPaperTerrainMaterial.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperTerrainMaterial.OuterSingleton,
               &Z_Construct_UClass_UPaperTerrainMaterial_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperTerrainMaterial.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPaperTerrainMaterialRule @ 14acddb30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPaperTerrainMaterialRule(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPaperTerrainMaterialRule.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPaperTerrainMaterialRule.InnerSingleton,
               &Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPaperTerrainMaterialRule.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPaperTerrainMaterialRule.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bEnableCollision_SetBit @ 14acddbb0

void __cdecl
Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite @ 14acddbc0

UFunction * __cdecl Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14acddc00

void * __cdecl Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPaperTerrainMaterialRule,&UE::CoreUObject::Private::Construct<FPaperTerrainMaterialRule>,&UE::CoreUObject::Private::ConstructForTests<FPaperTerrainMaterialRule>,&UE::CoreUObject::Private::Destruct<FPaperTerrainMaterialRule>,&UE::CoreUObject::Private::Copy<FPaperTerrainMaterialRule>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition @ 14acddc80

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPaperTileMapComponent @ 14acddcc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperTileMapComponent(void)

{
  if (Z_Registration_Info_UClass_UPaperTileMapComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperTileMapComponent.OuterSingleton,
               &Z_Construct_UClass_UPaperTileMapComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperTileMapComponent.OuterSingleton;
}

// Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer @ 14acddd00

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_AddNewLayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames @ 14acddd40

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCreateLayer_SetBit @ 14acddd80

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::NewProp_bCreateLayer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate @ 14acddd90

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap @ 14acdddd0

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_CreateNewTileMap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor @ 14acdde10

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14acdde50

void __cdecl
Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UPaperSprite_NoRegister @ 14acdde60

UClass * __cdecl Z_Construct_UClass_UPaperSprite_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSprite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSprite",
               &Z_Registration_Info_UClass_UPaperSprite.InnerSingleton,
               UPaperSprite::StaticRegisterNativesUPaperSprite,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPaperSprite>,
               InternalVTableHelperCtorCaller<UPaperSprite>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSprite.InnerSingleton;
}

// Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor @ 14acddf10

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_GetLayerColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping @ 14acddf90

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14acde080

void __cdecl
Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize @ 14acde090

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_GetMapSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying @ 14acde180

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14acde1c0

void __cdecl
Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UPaperTerrainSplineComponent @ 14acde1d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperTerrainSplineComponent(void)

{
  if (Z_Registration_Info_UClass_UPaperTerrainSplineComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperTerrainSplineComponent.OuterSingleton,
               &Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperTerrainSplineComponent.OuterSingleton;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing @ 14acde210

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_GetTile @ 14acde250

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_GetTile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_GetTile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPaperRuntimeSettings @ 14acde290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperRuntimeSettings(void)

{
  if (Z_Registration_Info_UClass_UPaperRuntimeSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperRuntimeSettings.OuterSingleton,
               &Z_Construct_UClass_UPaperRuntimeSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperRuntimeSettings.OuterSingleton;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook @ 14acde2d0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableSpriteAtlasGroups_SetBit @ 14acde310

void __cdecl
Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bWorldSpace_SetBit @ 14acde320

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::
NewProp_bWorldSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bEnableTerrainSplineEditing_SetBit @ 14acde330

void __cdecl
Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UClass_UPaperSpriteComponent @ 14acde340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperSpriteComponent(void)

{
  if (Z_Registration_Info_UClass_UPaperSpriteComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperSpriteComponent.OuterSingleton,
               &Z_Construct_UClass_UPaperSpriteComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperSpriteComponent.OuterSingleton;
}

// NewProp_bResizeSpriteDataToMatchTextures_SetBit @ 14acde380

void __cdecl
Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_Play @ 14acde390

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperSpriteComponent_GetSprite @ 14acde3d0

UFunction * __cdecl Z_Construct_UFunction_UPaperSpriteComponent_GetSprite(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperSpriteComponent_GetSprite_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition @ 14acde410

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCenterPosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart @ 14acde450

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14acde550

void __cdecl
Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_Reverse @ 14acde560

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_Reverse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWorldSpace_SetBit @ 14acde5a0

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::
NewProp_bWorldSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UPaperSpriteComponent_SetSprite @ 14acde5b0

UFunction * __cdecl Z_Construct_UFunction_UPaperSpriteComponent_SetSprite(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperSpriteComponent_SetSprite_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd @ 14acde5f0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition @ 14acde630

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_GetTileCornerPosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14acde670

void __cdecl
Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor @ 14acde680

UFunction * __cdecl Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperSpriteComponent_SetSpriteColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook @ 14acde6c0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTileMapBlueprintLibrary @ 14acde700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTileMapBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UTileMapBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTileMapBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTileMapBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor @ 14acde740

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_GetTileMapColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewLooping_SetBit @ 14acde780

void __cdecl
Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bFlipH_SetBit @ 14acde790

void __cdecl
Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipH_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bFlipV_SetBit @ 14acde7a0

void __cdecl
Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipV_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_bFlipD_SetBit @ 14acde7b0

void __cdecl
Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipD_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// NewProp_bWorldSpace_SetBit @ 14acde7c0

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::NewProp_bWorldSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping @ 14acde7d0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile @ 14acde810

UFunction * __cdecl Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon @ 14acde850

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_GetTilePolygon_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime @ 14acde890

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFireEvents_SetBit @ 14acdea30

void __cdecl
Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::
NewProp_bFireEvents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable @ 14acdea40

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_MakeTileMapEditable_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14acdea80

void * __thiscall FPaper2DModule::_scalar_deleting_destructor_(FPaper2DModule *this,uint param_1)

{
  *this = (FPaper2DModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 14acdeac0

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition @ 14acdead0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap @ 14acdeb10

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_OwnsTileMap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFireEvents_SetBit @ 14acdeb50

void __cdecl
Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::
NewProp_bFireEvents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UClass_UPaperFlipbookComponent_NoRegister @ 14acdeb60

UClass * __cdecl Z_Construct_UClass_UPaperFlipbookComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperFlipbookComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperFlipbookComponent",
               &Z_Registration_Info_UClass_UPaperFlipbookComponent.InnerSingleton,
               UPaperFlipbookComponent::StaticRegisterNativesUPaperFlipbookComponent,0x5e0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperFlipbookComponent>,
               InternalVTableHelperCtorCaller<UPaperFlipbookComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperFlipbookComponent.InnerSingleton;
}

// Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision @ 14acdec50

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_RebuildCollision_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames @ 14acdecc0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform @ 14acded20

UFunction * __cdecl Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap @ 14acdeea0

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_ResizeMap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate @ 14acdeee0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData @ 14acdef20

UFunction * __cdecl Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRebuildCollision_SetBit @ 14acdef60

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::
NewProp_bRebuildCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bFlipH_SetBit @ 14acdef70

void __cdecl
Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipH_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bFlipV_SetBit @ 14acdef80

void __cdecl
Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipV_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bFlipD_SetBit @ 14acdef90

void __cdecl
Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipD_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor @ 14acdefa0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness @ 14acdf0a0

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_SetDefaultCollisionThickness_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbookComponent_Stop @ 14acdf0e0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbookComponent_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasCollision_SetBit @ 14acdf120

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::NewProp_bHasCollision_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bOverrideThickness_SetBit @ 14acdf130

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::
NewProp_bOverrideThickness_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bOverrideOffset_SetBit @ 14acdf140

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::
NewProp_bOverrideOffset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile @ 14acdf150

UFunction * __cdecl Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRebuildCollision_SetBit @ 14acdf190

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::
NewProp_bRebuildCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bLooping_SetBit @ 14acdf1a0

void __cdecl
Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5a4) = *(uint *)((longlong)param_1 + 0x5a4) | 1;
  return;
}

// NewProp_bReversePlayback_SetBit @ 14acdf1b0

void __cdecl
Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5a4) = *(uint *)((longlong)param_1 + 0x5a4) | 2;
  return;
}

// NewProp_bPlaying_SetBit @ 14acdf1c0

void __cdecl
Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5a4) = *(uint *)((longlong)param_1 + 0x5a4) | 4;
  return;
}

// Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision @ 14acdf370

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerCollision_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor @ 14acdf3b0

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_SetLayerColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_SetTile @ 14acdf3f0

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_SetTile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_SetTile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14acdf430

void __cdecl
Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_APaperCharacter @ 14acdf440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APaperCharacter(void)

{
  if (Z_Registration_Info_UClass_APaperCharacter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APaperCharacter.OuterSingleton,
               &Z_Construct_UClass_APaperCharacter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APaperCharacter.OuterSingleton;
}

// Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap @ 14acdf480

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_SetTileMap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor @ 14acdf4c0

UFunction * __cdecl Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTileMapComponent_SetTileMapColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseSingleLayer_SetBit @ 14acdf500

void __cdecl
Z_Construct_UClass_UPaperTileMapComponent_Statics::NewProp_bUseSingleLayer_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5d4) = 1;
  return;
}

// Z_Construct_UClass_UPaperFlipbook_NoRegister @ 14acdf6f0

UClass * __cdecl Z_Construct_UClass_UPaperFlipbook_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperFlipbook.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperFlipbook",
               &Z_Registration_Info_UClass_UPaperFlipbook.InnerSingleton,
               UPaperFlipbook::StaticRegisterNativesUPaperFlipbook,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperFlipbook>,
               InternalVTableHelperCtorCaller<UPaperFlipbook>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperFlipbook.InnerSingleton;
}

// Z_Construct_UClass_UPaperTileLayer_NoRegister @ 14acdf7e0

UClass * __cdecl Z_Construct_UClass_UPaperTileLayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileLayer",
               &Z_Registration_Info_UClass_UPaperTileLayer.InnerSingleton,
               UPaperTileLayer::StaticRegisterNativesUPaperTileLayer,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperTileLayer>,
               InternalVTableHelperCtorCaller<UPaperTileLayer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileLayer.InnerSingleton;
}

// Z_Construct_UClass_UPaperFlipbook @ 14acdfc10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperFlipbook(void)

{
  if (Z_Registration_Info_UClass_UPaperFlipbook.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperFlipbook.OuterSingleton,
               &Z_Construct_UClass_UPaperFlipbook_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperFlipbook.OuterSingleton;
}

// Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode @ 14acdfc50

UEnum * __cdecl Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode(void)

{
  if (Z_Registration_Info_UEnum_EFlipbookCollisionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFlipbookCollisionMode.InnerSingleton,
               &Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFlipbookCollisionMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame @ 14acdfc90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPaperFlipbookKeyFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPaperFlipbookKeyFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPaperFlipbookKeyFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPaperFlipbookKeyFrame.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14acdfd10

void * __cdecl Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPaperFlipbookKeyFrame,&UE::CoreUObject::Private::Construct<FPaperFlipbookKeyFrame>,&UE::CoreUObject::Private::ConstructForTests<FPaperFlipbookKeyFrame>,&UE::CoreUObject::Private::Destruct<FPaperFlipbookKeyFrame>,&UE::CoreUObject::Private::Copy<FPaperFlipbookKeyFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EFlipbookCollisionMode_StaticEnum @ 14acdffa0

UEnum * __cdecl EFlipbookCollisionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFlipbookCollisionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_EFlipbookCollisionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode,(UObject *)pUVar1,
                       L"EFlipbookCollisionMode");
  }
  return Z_Registration_Info_UEnum_EFlipbookCollisionMode.OuterSingleton;
}

// NewProp_bClampToEnds_SetBit @ 14ace0040

void __cdecl
Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_bClampToEnds_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime @ 14ace0130

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbook_GetNumFrames @ 14ace0170

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbook_GetNumFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPaperGroupedSpriteComponent @ 14ace01b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperGroupedSpriteComponent(void)

{
  if (Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.OuterSingleton,
               &Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSpriteInstanceData @ 14ace01f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpriteInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpriteInstanceData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpriteInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpriteInstanceData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSpriteInstanceData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14ace0270

void * __cdecl Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpriteInstanceData,&UE::CoreUObject::Private::Construct<FSpriteInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FSpriteInstanceData>,&UE::CoreUObject::Private::Destruct<FSpriteInstanceData>,&UE::CoreUObject::Private::Copy<FSpriteInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames @ 14ace02b0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame @ 14ace02f0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bClampToEnds_SetBit @ 14ace0330

void __cdecl
Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_bClampToEnds_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UClass_UPaperTileMap_NoRegister @ 14ace0340

UClass * __cdecl Z_Construct_UClass_UPaperTileMap_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileMap",
               &Z_Registration_Info_UClass_UPaperTileMap.InnerSingleton,
               UPaperTileMap::StaticRegisterNativesUPaperTileMap,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperTileMap>,
               InternalVTableHelperCtorCaller<UPaperTileMap>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileMap.InnerSingleton;
}

// NewProp_bWorldSpace_SetBit @ 14ace04a0

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime @ 14ace04b0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance @ 14ace04f0

UFunction * __cdecl Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration @ 14ace0530

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ace0570

void __cdecl
Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances @ 14ace0580

UFunction * __cdecl Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex @ 14ace05c0

UFunction * __cdecl Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount @ 14ace0600

UFunction * __cdecl Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWorldSpace_SetBit @ 14ace0720

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::
NewProp_bWorldSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14ace0730

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform @ 14ace0800

UFunction * __cdecl Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ace0840

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance @ 14ace0850

UFunction * __cdecl Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis @ 14ace0890

UFunction * __cdecl Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bMarkRenderStateDirty_SetBit @ 14ace08d0

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::
NewProp_bMarkRenderStateDirty_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14ace08e0

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewStructOps @ 14ace08f0

void * __cdecl Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpriteDrawCallRecord,&UE::CoreUObject::Private::Construct<FSpriteDrawCallRecord>,&UE::CoreUObject::Private::ConstructForTests<FSpriteDrawCallRecord>,&UE::CoreUObject::Private::Destruct<FSpriteDrawCallRecord>,&UE::CoreUObject::Private::Copy<FSpriteDrawCallRecord>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor @ 14ace0930

UFunction * __cdecl Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister @ 14ace0a30

UClass * __cdecl Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTerrainSplineComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainSplineComponent",
               &Z_Registration_Info_UClass_UPaperTerrainSplineComponent.InnerSingleton,
               UPaperTerrainSplineComponent::StaticRegisterNativesUPaperTerrainSplineComponent,0x720
               ,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTerrainSplineComponent>,
               InternalVTableHelperCtorCaller<UPaperTerrainSplineComponent>,local_res8,
               USplineComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTerrainSplineComponent.InnerSingleton;
}

// NewProp_bWorldSpace_SetBit @ 14ace0bb0

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::
NewProp_bWorldSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bMarkRenderStateDirty_SetBit @ 14ace0bc0

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::
NewProp_bMarkRenderStateDirty_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 14ace0bd0

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::
NewProp_bTeleport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14ace0be0

void __cdecl
Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  return;
}

// Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform @ 14ace0bf0

UFunction * __cdecl Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPaperTerrainMaterial_NoRegister @ 14ace0c30

UClass * __cdecl Z_Construct_UClass_UPaperTerrainMaterial_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTerrainMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainMaterial",
               &Z_Registration_Info_UClass_UPaperTerrainMaterial.InnerSingleton,
               UPaperTerrainMaterial::StaticRegisterNativesUPaperTerrainMaterial,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPaperTerrainMaterial>,
               InternalVTableHelperCtorCaller<UPaperTerrainMaterial>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTerrainMaterial.InnerSingleton;
}

// Z_Construct_UEnum_Paper2D_ESpriteCollisionMode @ 14ace0d30

UEnum * __cdecl Z_Construct_UEnum_Paper2D_ESpriteCollisionMode(void)

{
  if (Z_Registration_Info_UEnum_ESpriteCollisionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpriteCollisionMode.InnerSingleton,
               &Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpriteCollisionMode.InnerSingleton;
}

// Z_Construct_UEnum_Paper2D_ESpritePolygonMode @ 14ace0d70

UEnum * __cdecl Z_Construct_UEnum_Paper2D_ESpritePolygonMode(void)

{
  if (Z_Registration_Info_UEnum_ESpritePolygonMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpritePolygonMode.InnerSingleton,
               &Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpritePolygonMode.InnerSingleton;
}

// Z_Construct_UEnum_Paper2D_ESpriteShapeType @ 14ace0db0

UEnum * __cdecl Z_Construct_UEnum_Paper2D_ESpriteShapeType(void)

{
  if (Z_Registration_Info_UEnum_ESpriteShapeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpriteShapeType.InnerSingleton,
               &Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpriteShapeType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSpriteGeometryCollection @ 14ace0df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpriteGeometryCollection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpriteGeometryCollection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpriteGeometryCollection.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpriteGeometryCollection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpriteGeometryCollection.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSpriteGeometryShape @ 14ace0e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpriteGeometryShape(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpriteGeometryShape.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpriteGeometryShape.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpriteGeometryShape.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSpriteGeometryShape.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ESpriteCollisionMode_StaticEnum @ 14ace0f00

UEnum * __cdecl ESpriteCollisionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpriteCollisionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ESpriteCollisionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpriteCollisionMode,(UObject *)pUVar1,
                       L"ESpriteCollisionMode");
  }
  return Z_Registration_Info_UEnum_ESpriteCollisionMode.OuterSingleton;
}

// Z_Construct_UClass_APaperGroupedSpriteActor @ 14ace0f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APaperGroupedSpriteActor(void)

{
  if (Z_Registration_Info_UClass_APaperGroupedSpriteActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APaperGroupedSpriteActor.OuterSingleton,
               &Z_Construct_UClass_APaperGroupedSpriteActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APaperGroupedSpriteActor.OuterSingleton;
}

// ESpriteShapeType_StaticEnum @ 14ace0fd0

UEnum * __cdecl ESpriteShapeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpriteShapeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ESpriteShapeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpriteShapeType,(UObject *)pUVar1,
                       L"ESpriteShapeType");
  }
  return Z_Registration_Info_UEnum_ESpriteShapeType.OuterSingleton;
}

// NewProp_bNegativeWinding_SetBit @ 14ace10f0

void __cdecl
Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// NewStructOps @ 14ace1100

void * __cdecl Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpriteGeometryShape,&UE::CoreUObject::Private::Construct<FSpriteGeometryShape>,&UE::CoreUObject::Private::ConstructForTests<FSpriteGeometryShape>,&UE::CoreUObject::Private::Destruct<FSpriteGeometryShape>,&UE::CoreUObject::Private::Copy<FSpriteGeometryShape>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPaperTileSet @ 14ace1150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperTileSet(void)

{
  if (Z_Registration_Info_UClass_UPaperTileSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperTileSet.OuterSingleton,
               &Z_Construct_UClass_UPaperTileSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperTileSet.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPaperTileMetadata @ 14ace1190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPaperTileMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPaperTileMetadata.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPaperTileMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPaperTileMetadata.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPaperTileMetadata.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPaperTileSetTerrain @ 14ace1210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPaperTileSetTerrain(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPaperTileSetTerrain.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPaperTileSetTerrain.InnerSingleton,
               &Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPaperTileSetTerrain.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPaperTileSetTerrain.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14ace1290

void * __cdecl Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPaperTileMetadata,&UE::CoreUObject::Private::Construct<FPaperTileMetadata>,&UE::CoreUObject::Private::ConstructForTests<FPaperTileMetadata>,&UE::CoreUObject::Private::Destruct<FPaperTileMetadata>,&UE::CoreUObject::Private::Copy<FPaperTileMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPaperTileSet_NoRegister @ 14ace12d0

UClass * __cdecl Z_Construct_UClass_UPaperTileSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileSet",
               &Z_Registration_Info_UClass_UPaperTileSet.InnerSingleton,
               UPaperTileSet::StaticRegisterNativesUPaperTileSet,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperTileSet>,
               InternalVTableHelperCtorCaller<UPaperTileSet>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileSet.InnerSingleton;
}

// ESpritePolygonMode_StaticEnum @ 14ace1400

UEnum * __cdecl ESpritePolygonMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpritePolygonMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ESpritePolygonMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpritePolygonMode,(UObject *)pUVar1,
                       L"ESpritePolygonMode");
  }
  return Z_Registration_Info_UEnum_ESpritePolygonMode.OuterSingleton;
}

// NewProp_bAvoidVertexMerging_SetBit @ 14ace14f0

void __cdecl
Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewStructOps @ 14ace1500

void * __cdecl Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPaperTileSetTerrain,&UE::CoreUObject::Private::Construct<FPaperTileSetTerrain>,&UE::CoreUObject::Private::ConstructForTests<FPaperTileSetTerrain>,&UE::CoreUObject::Private::Destruct<FPaperTileSetTerrain>,&UE::CoreUObject::Private::Copy<FPaperTileSetTerrain>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ace1540

void * __cdecl Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpriteGeometryCollection,&UE::CoreUObject::Private::Construct<FSpriteGeometryCollection>,&UE::CoreUObject::Private::ConstructForTests<FSpriteGeometryCollection>,&UE::CoreUObject::Private::Destruct<FSpriteGeometryCollection>,&UE::CoreUObject::Private::Copy<FSpriteGeometryCollection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ace1580

void * __cdecl Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpriteAssetInitParameters,&UE::CoreUObject::Private::Construct<FSpriteAssetInitParameters>,&UE::CoreUObject::Private::ConstructForTests<FSpriteAssetInitParameters>,&UE::CoreUObject::Private::Destruct<FSpriteAssetInitParameters>,&UE::CoreUObject::Private::Copy<FSpriteAssetInitParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ESpritePivotMode_StaticEnum @ 14ace1680

UEnum * __cdecl ESpritePivotMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpritePivotMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ESpritePivotMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpritePivotMode,(UObject *)pUVar1,
                       L"ESpritePivotMode");
  }
  return Z_Registration_Info_UEnum_ESpritePivotMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ace16c0

void * __thiscall
IPaper2DModuleInterface::_scalar_deleting_destructor_(IPaper2DModuleInterface *this,uint param_1)

{
  *this = (IPaper2DModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UPaperSpriteComponent_NoRegister @ 14ace1700

UClass * __cdecl Z_Construct_UClass_UPaperSpriteComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSpriteComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteComponent",
               &Z_Registration_Info_UClass_UPaperSpriteComponent.InnerSingleton,
               UPaperSpriteComponent::StaticRegisterNativesUPaperSpriteComponent,0x5b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperSpriteComponent>,
               InternalVTableHelperCtorCaller<UPaperSpriteComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSpriteComponent.InnerSingleton;
}

// Z_Construct_UClass_APaperTerrainActor @ 14ace1880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APaperTerrainActor(void)

{
  if (Z_Registration_Info_UClass_APaperTerrainActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APaperTerrainActor.OuterSingleton,
               &Z_Construct_UClass_APaperTerrainActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APaperTerrainActor.OuterSingleton;
}

// Z_Construct_UClass_UPaperSprite @ 14ace1980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperSprite(void)

{
  if (Z_Registration_Info_UClass_UPaperSprite.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperSprite.OuterSingleton,
               &Z_Construct_UClass_UPaperSprite_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperSprite.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPaperSpriteSocket @ 14ace19c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPaperSpriteSocket(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPaperSpriteSocket.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPaperSpriteSocket.InnerSingleton,
               &Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPaperSpriteSocket.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPaperSpriteSocket.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14ace1a40

void * __cdecl Z_Construct_UScriptStruct_FPaperSpriteSocket_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPaperSpriteSocket,&UE::CoreUObject::Private::Construct<FPaperSpriteSocket>,&UE::CoreUObject::Private::ConstructForTests<FPaperSpriteSocket>,&UE::CoreUObject::Private::Destruct<FPaperSpriteSocket>,&UE::CoreUObject::Private::Copy<FPaperSpriteSocket>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_APaperFlipbookActor @ 14ace1a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APaperFlipbookActor(void)

{
  if (Z_Registration_Info_UClass_APaperFlipbookActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APaperFlipbookActor.OuterSingleton,
               &Z_Construct_UClass_APaperFlipbookActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APaperFlipbookActor.OuterSingleton;
}

// Z_Construct_UClass_UPaperTerrainComponent @ 14ace1ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperTerrainComponent(void)

{
  if (Z_Registration_Info_UClass_UPaperTerrainComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperTerrainComponent.OuterSingleton,
               &Z_Construct_UClass_UPaperTerrainComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperTerrainComponent.OuterSingleton;
}

// Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor @ 14ace1b00

UFunction * __cdecl Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPaperTerrainComponent_SetTerrainColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bClosedSpline_SetBit @ 14ace1b40

void __cdecl
Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bClosedSpline_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x550) = 1;
  return;
}

// NewProp_bFilledSpline_SetBit @ 14ace1b50

void __cdecl
Z_Construct_UClass_UPaperTerrainComponent_Statics::NewProp_bFilledSpline_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x551) = 1;
  return;
}

// Z_Construct_UClass_UPaperTileLayer @ 14ace1b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPaperTileLayer(void)

{
  if (Z_Registration_Info_UClass_UPaperTileLayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPaperTileLayer.OuterSingleton,
               &Z_Construct_UClass_UPaperTileLayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPaperTileLayer.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPaperTileInfo @ 14ace1ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPaperTileInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPaperTileInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPaperTileInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FPaperTileInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPaperTileInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPaperTileInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14ace1c20

void * __cdecl Z_Construct_UScriptStruct_FPaperTileInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPaperTileInfo,&UE::CoreUObject::Private::Construct<FPaperTileInfo>,&UE::CoreUObject::Private::ConstructForTests<FPaperTileInfo>,&UE::CoreUObject::Private::Destruct<FPaperTileInfo>,&UE::CoreUObject::Private::Copy<FPaperTileInfo>,&UE::CoreUObject::Private::GetStructTypeHash<FPaperTileInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler @ 14ace1e80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.OuterSingleton;
}

// NewProp_bHiddenInGame_SetBit @ 14ace1ec0

void __cdecl Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bHiddenInGame_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 1;
  return;
}

// NewProp_bLayerCollides_SetBit @ 14ace1ed0

void __cdecl
Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bLayerCollides_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 2;
  return;
}

// NewProp_bSampleAdditionalTextures_SetBit @ 14ace1ee0

void __cdecl
Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::
NewProp_bSampleAdditionalTextures_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x228) = 1;
  return;
}

// NewProp_bOverrideCollisionThickness_SetBit @ 14ace1ef0

void __cdecl
Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionThickness_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 4;
  return;
}

// NewProp_bOverrideCollisionOffset_SetBit @ 14ace1f00

void __cdecl
Z_Construct_UClass_UPaperTileLayer_Statics::NewProp_bOverrideCollisionOffset_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 8;
  return;
}

// operator_new<FSpriteDrawCallRecord,TSizedDefaultAllocator<32>_> @ 14ace20a0

void * __cdecl
operator_new<FSpriteDrawCallRecord,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TArray<FSpriteDrawCallRecord,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 != 0x140) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Size == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xfba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  uVar3 = param_2->ArrayNum;
  if (uVar3 == param_2->ArrayMax) {
    uVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x140,0x10,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = uVar3 + 1;
  uVar5 = 0;
  if ((int)uVar3 < (int)(uVar3 + 1)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x140;
}

// operator_new<FTerrainSegment,TSizedDefaultAllocator<32>_> @ 14ace2170

void * __cdecl
operator_new<FTerrainSegment,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TArray<FTerrainSegment,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 != 0x20) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Size == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xfba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  uVar3 = param_2->ArrayNum;
  if (uVar3 == param_2->ArrayMax) {
    uVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = uVar3 + 1;
  uVar5 = 0;
  if ((int)uVar3 < (int)(uVar3 + 1)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x20;
}

// CastChecked<UPaperTileMap,UObject> @ 14ace2800

UPaperTileMap * __cdecl CastChecked<UPaperTileMap,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPaperTileMap>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPaperTileMap::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPaperTileMap *)param_1;
  }
  pFVar3 = GetTypeName<UPaperTileMap>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UPaperSprite>,TObjectPtr<UPaperSprite>,int> @ 14ace28c0

void __cdecl
ConstructItems<TObjectPtr<UPaperSprite>,TObjectPtr<UPaperSprite>,int>
          (void *param_1,TObjectPtr<UPaperSprite> *param_2,int param_3)

{
  TObjectPtr<UPaperSprite> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UPaperSprite>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UPaperSprite>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UPaperSprite *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UPaperSprite *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UPaperTileLayer>,TObjectPtr<UPaperTileLayer>,int> @ 14ace2920

void __cdecl
ConstructItems<TObjectPtr<UPaperTileLayer>,TObjectPtr<UPaperTileLayer>,int>
          (void *param_1,TObjectPtr<UPaperTileLayer> *param_2,int param_3)

{
  TObjectPtr<UPaperTileLayer> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UPaperTileLayer>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UPaperTileLayer>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UPaperTileLayer *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UPaperTileLayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPaperTileInfo,FPaperTileInfo,int> @ 14ace2980

void __cdecl
ConstructItems<FPaperTileInfo,FPaperTileInfo,int>(void *param_1,FPaperTileInfo *param_2,int param_3)

{
  UPaperTileSet *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->TileSet).field0_0x0.DebugPtr;
      *(UPaperTileSet **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPaperTileSet *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(int *)(lVar2 + 8 + (longlong)param_2) = param_2->PackedTileIndex;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPaperTileMetadata,FPaperTileMetadata,int> @ 14ace29e0

void __cdecl
ConstructItems<FPaperTileMetadata,FPaperTileMetadata,int>
          (void *param_1,FPaperTileMetadata *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  FSpriteGeometryShape *pFVar4;
  ForAnyElementType *pFVar5;
  TEnumAsByte<ESpritePolygonMode::Type> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
    pTVar6 = &(param_2->CollisionData).GeometryType;
    do {
      *(undefined8 *)(pTVar6 + (longlong)param_1 + (-0x18 - (longlong)param_2)) =
           *(undefined8 *)(pTVar6 + -0x18);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)(pTVar6 + -8);
      pFVar4 = (FSpriteGeometryShape *)
               (((FSpriteGeometryCollection *)(pTVar6 + -0x10))->Shapes).AllocatorInstance.Data;
      *(int *)&pFVar5[1].Data = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar3,0,pFVar5,iVar3,piVar1);
        ConstructItems<FSpriteGeometryShape,FSpriteGeometryShape,int>(pFVar5->Data,pFVar4,iVar3);
      }
      *(uchar *)&pFVar5[2].Data = pTVar6->Value;
      *(int *)((longlong)&pFVar5[2].Data + 4) = *(int *)(pTVar6 + 4);
      *(int *)&pFVar5[3].Data = *(int *)(pTVar6 + 8);
      *(bool *)((longlong)&pFVar5[3].Data + 4) = *(bool *)(pTVar6 + 0xc);
      *(float *)&pFVar5[4].Data = *(float *)(pTVar6 + 0x10);
      *(float *)((longlong)&pFVar5[4].Data + 4) = *(float *)(pTVar6 + 0x14);
      *(float *)&pFVar5[5].Data = *(float *)(pTVar6 + 0x18);
      puVar2 = (undefined4 *)(pTVar6 + 0x20);
      pTVar6 = pTVar6 + 0x40;
      *(undefined4 *)&pFVar5[6].Data = *puVar2;
      pFVar5 = pFVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSpriteGeometryShape,FSpriteGeometryShape,int> @ 14ace2ae0

void __cdecl
ConstructItems<FSpriteGeometryShape,FSpriteGeometryShape,int>
          (void *param_1,FSpriteGeometryShape *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  float *pfVar4;
  ForAnyElementType *pFVar5;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
    pTVar6 = &param_2->Vertices;
    do {
      *(undefined1 *)((longlong)pTVar6 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           *(undefined1 *)((longlong)(pTVar6 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar6->ArrayNum;
      pFVar3 = (pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,pFVar5,iVar2,piVar1);
        memcpy(pFVar5->Data,pFVar3,(longlong)iVar2 << 4);
      }
      pFVar3 = (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 1))->field0_0x0)._s_0.Y;
      pFVar5[2].Data =
           (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 1))->field0_0x0)._s_0.X;
      pFVar5[3].Data = pFVar3;
      pFVar3 = (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 2))->field0_0x0)._s_0.Y;
      pFVar5[4].Data =
           (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 2))->field0_0x0)._s_0.X;
      pFVar5[5].Data = pFVar3;
      *(float *)&pFVar5[6].Data = *(float *)(pTVar6 + 3);
      pfVar4 = (float *)(pTVar6 + 3);
      pTVar6 = pTVar6 + 4;
      *(bool *)((longlong)&pFVar5[6].Data + 4) = *(bool *)(pfVar4 + 1);
      pFVar5 = pFVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSpriteInstanceData,FSpriteInstanceData,int> @ 14ace2bd0

void __cdecl
ConstructItems<FSpriteInstanceData,FSpriteInstanceData,int>
          (void *param_1,FSpriteInstanceData *param_2,int param_3)

{
  FColor_u_0 *pFVar1;
  undefined8 *puVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  FColor_u_0 *pFVar5;
  FColor_u_0 *pFVar6;
  
  if (param_3 != 0) {
    pFVar5 = (FColor_u_0 *)((longlong)param_1 + 0x88);
    pFVar6 = &(param_2->VertexColor).field0_0x0;
    do {
      puVar2 = (undefined8 *)((longlong)pFVar5 + (longlong)param_2 + (-0x88 - (longlong)param_1));
      uVar4 = puVar2[1];
      *(undefined8 *)(pFVar5 + -0x22) = *puVar2;
      *(undefined8 *)(pFVar5 + -0x20) = uVar4;
      puVar2 = (undefined8 *)((longlong)pFVar5 + (longlong)param_2 + (-0x78 - (longlong)param_1));
      uVar4 = puVar2[1];
      *(undefined8 *)(pFVar5 + -0x1e) = *puVar2;
      *(undefined8 *)(pFVar5 + -0x1c) = uVar4;
      puVar2 = (undefined8 *)((longlong)pFVar5 + (longlong)param_2 + (-0x68 - (longlong)param_1));
      uVar4 = puVar2[1];
      *(undefined8 *)(pFVar5 + -0x1a) = *puVar2;
      *(undefined8 *)(pFVar5 + -0x18) = uVar4;
      puVar2 = (undefined8 *)((longlong)pFVar5 + (longlong)param_2 + (-0x58 - (longlong)param_1));
      uVar4 = puVar2[1];
      *(undefined8 *)(pFVar5 + -0x16) = *puVar2;
      *(undefined8 *)(pFVar5 + -0x14) = uVar4;
      puVar2 = (undefined8 *)((longlong)pFVar5 + (longlong)param_2 + (-0x48 - (longlong)param_1));
      uVar4 = puVar2[1];
      *(undefined8 *)(pFVar5 + -0x12) = *puVar2;
      *(undefined8 *)(pFVar5 + -0x10) = uVar4;
      puVar2 = (undefined8 *)((longlong)pFVar5 + (longlong)param_2 + (-0x38 - (longlong)param_1));
      uVar4 = puVar2[1];
      *(undefined8 *)(pFVar5 + -0xe) = *puVar2;
      *(undefined8 *)(pFVar5 + -0xc) = uVar4;
      puVar2 = (undefined8 *)((longlong)pFVar5 + (longlong)param_2 + (-0x28 - (longlong)param_1));
      uVar4 = puVar2[1];
      *(undefined8 *)(pFVar5 + -10) = *puVar2;
      *(undefined8 *)(pFVar5 + -8) = uVar4;
      puVar2 = (undefined8 *)((longlong)pFVar5 + (longlong)param_2 + (-0x18 - (longlong)param_1));
      uVar4 = puVar2[1];
      *(undefined8 *)(pFVar5 + -6) = *puVar2;
      *(undefined8 *)(pFVar5 + -4) = uVar4;
      pUVar3 = *(UObject **)(pFVar6 + -2);
      *(UObject **)(pFVar5 + -2) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      *pFVar5 = *pFVar6;
      pFVar1 = pFVar6 + 1;
      pFVar6 = pFVar6 + 0x24;
      pFVar5[1] = *pFVar1;
      pFVar5 = pFVar5 + 0x24;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FPaperTileInfo,int> @ 14ace2cd0

void __cdecl DefaultConstructItems<FPaperTileInfo,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FSpriteRenderSection,int> @ 14ace2d00

void __cdecl DefaultConstructItems<FSpriteRenderSection,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x30);
    do {
      *puVar1 = 0;
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
      *(undefined4 *)(puVar1 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPaperTerrainMaterialRule,int> @ 14ace2d80

void __cdecl
DestructItems<FPaperTerrainMaterialRule,int>(FPaperTerrainMaterialRule *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Body).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FPaperTerrainMaterialRule *)(&param_1->Body + 3);
  }
  return;
}

// DestructItems<FPaperTerrainSpriteGeometry,int> @ 14ace2dc0

void __cdecl
DestructItems<FPaperTerrainSpriteGeometry,int>(FPaperTerrainSpriteGeometry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FSpriteDrawCallRecord,int>
              ((FSpriteDrawCallRecord *)(param_1->Records).AllocatorInstance.Data,
               (param_1->Records).ArrayNum);
    pFVar1 = (param_1->Records).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPaperTileMetadata,int> @ 14ace2e10

void __cdecl DestructItems<FPaperTileMetadata,int>(FPaperTileMetadata *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FSpriteGeometryCollection *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->CollisionData;
    do {
      DestructItems<FSpriteGeometryShape,int>
                ((FSpriteGeometryShape *)(pFVar2->Shapes).AllocatorInstance.Data,
                 (pFVar2->Shapes).ArrayNum);
      pFVar1 = (pFVar2->Shapes).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FSpriteGeometryCollection *)((longlong)(pFVar2 + 1) + 0x10);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPaperTileSetTerrain,int> @ 14ace2e60

void __cdecl DestructItems<FPaperTileSetTerrain,int>(FPaperTileSetTerrain *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->TerrainName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSpriteDrawCallRecord,int> @ 14ace2ea0

void __cdecl DestructItems<FSpriteDrawCallRecord,int>(FSpriteDrawCallRecord *param_1,int param_2)

{
  ForElementType<UTexture_*> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AdditionalTextures).AllocatorInstance.SecondaryData;
    do {
      if (pFVar1[0x1c] != (ForElementType<UTexture_*>)0x0) {
        FMemory::Free((void *)pFVar1[0x1c]);
      }
      if (*pFVar1 != (ForElementType<UTexture_*>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSpriteGeometryShape,int> @ 14ace2ef0

void __cdecl DestructItems<FSpriteGeometryShape,int>(FSpriteGeometryShape *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Vertices;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSpriteRenderSection,int> @ 14ace2f30

void __cdecl DestructItems<FSpriteRenderSection,int>(FSpriteRenderSection *param_1,int param_2)

{
  ForElementType<UTexture_*> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AdditionalTextures).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<UTexture_*>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTerrainSegment,int> @ 14ace2f70

void __cdecl DestructItems<FTerrainSegment,int>(FTerrainSegment *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FTerrainSpriteStamp,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Stamps;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::TSTR_FCreatePaperFlipbookProxy_SetSprite103>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ace2fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UPaperFlipbookComponent::CreateSceneProxy_::__l2::TSTR_FCreatePaperFlipbookProxy_SetSprite103>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::TSTR_FCreatePaperFlipbookProxy_SetSprite103>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14ace3101;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14ace32f5;
  }
LAB_14ace3101:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14ace31df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ace31df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14ace32f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UPaperSpriteComponent::CreateSceneProxy'::__l5::TSTR_FCreatePaperSpriteProxy_SetSprite81>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ace3330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UPaperSpriteComponent::CreateSceneProxy_::__l5::TSTR_FCreatePaperSpriteProxy_SetSprite81>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UPaperSpriteComponent::CreateSceneProxy'::__l5::TSTR_FCreatePaperSpriteProxy_SetSprite81>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14ace3481;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14ace3675;
  }
LAB_14ace3481:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14ace355f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ace355f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14ace3675:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendPaperRenderComponentDynamicData370>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ace36b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UPaperFlipbookComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendPaperRenderComponentDynamicData370>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendPaperRenderComponentDynamicData370>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14ace3801;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14ace39f5;
  }
LAB_14ace3801:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14ace38df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ace38df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14ace39f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendPaperSpriteComponentDynamicData129>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ace3a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UPaperSpriteComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendPaperSpriteComponentDynamicData129>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendPaperSpriteComponentDynamicData129>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14ace3b81;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14ace3d75;
  }
LAB_14ace3b81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14ace3c5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ace3c5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14ace3d75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindOrLoadObject<UPaperTerrainMaterial> @ 14ace3db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPaperTerrainMaterial * __cdecl
ConstructorHelpersInternal::FindOrLoadObject<UPaperTerrainMaterial>(FString *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  size_t sVar3;
  UPaperTerrainMaterial *pUVar4;
  FUObjectItem *this;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  pFVar6 = pFVar1 + (longlong)(param_1->Data).ArrayNum * 2;
  pFVar7 = pFVar1;
  if (pFVar6 != pFVar1) {
    do {
      if (*(short *)pFVar7 == 0x2e) {
        if ((int)((longlong)pFVar7 - (longlong)pFVar1 >> 1) != -1) goto LAB_14ace3e66;
        break;
      }
      pFVar7 = pFVar7 + 2;
    } while (pFVar7 != pFVar6);
    do {
      if (pFVar6 == pFVar1) goto LAB_14ace3e66;
      pFVar6 = pFVar6 + -2;
    } while (*(short *)pFVar6 != 0x2f);
    iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 1);
    if (iVar5 != -1) {
      ::FString::RightChop(param_1,(FString *)&local_28,iVar5 + 1);
      ::FString::AppendChar(param_1,L'.');
      iVar5 = local_28.Size + -1;
      if (local_28.Size == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(param_1,local_28.DataPtr,iVar5);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
LAB_14ace3e66:
  pUVar2 = UPaperTerrainMaterial::StaticClass();
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  local_18.DataPtr = (wchar_t *)0x0;
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  if ((param_1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14ace3eac;
  }
  sVar3 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar3;
LAB_14ace3eac:
  pUVar2 = UPaperTerrainMaterial::StaticClass();
  pUVar4 = (UPaperTerrainMaterial *)
           StaticLoadObject(pUVar2,(UObject *)0x0,&local_28,&local_18,param_2,(UPackageMap *)0x0,
                            true,(FLinkerInstancingContext *)0x0);
  if (pUVar4 != (UPaperTerrainMaterial *)0x0) {
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
  }
  return pUVar4;
}

// GetTypeName<UPaperTileMap> @ 14ace3f30

FString * __cdecl GetTypeName<UPaperTileMap>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPaperTileMap::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FPaperTerrainSpriteGeometry,int,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,`UPaperTerrainComponent::SpawnSegments'::__l2::<lambda_1>_>_> @ 14ace3f70

void __cdecl
AlgoImpl::
HeapSortInternal<FPaperTerrainSpriteGeometry,int,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,_UPaperTerrainComponent::SpawnSegments_::__l2::<lambda_1>_>_>
          (FPaperTerrainSpriteGeometry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPaperTerrainSpriteGeometry,_protected:_void___cdecl_UPaperTerrainComponent::SpawnSegments(TArray<FTerrainSegment,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  UMaterialInterface *pUVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FPaperTerrainSpriteGeometry *pFVar15;
  FPaperTerrainSpriteGeometry *pFVar16;
  int iVar17;
  int iVar18;
  FPaperTerrainSpriteGeometry *pFVar19;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar12 = iVar11;
  iVar18 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14ace4076:
      if (iVar18 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar19 = param_1 + lVar14;
          do {
            iVar12 = (pFVar19->Records).ArrayNum;
            iVar10 = (pFVar19->Records).ArrayMax;
            iVar17 = 0;
            pFVar2 = (param_1->Records).AllocatorInstance.Data;
            iVar18 = (param_1->Records).ArrayNum;
            iVar13 = (param_1->Records).ArrayMax;
            pUVar3 = param_1->Material;
            iVar4 = param_1->DrawOrder;
            uVar8 = *(undefined4 *)&param_1->field_0x1c;
            (param_1->Records).AllocatorInstance.Data = (pFVar19->Records).AllocatorInstance.Data;
            (param_1->Records).ArrayNum = iVar12;
            (param_1->Records).ArrayMax = iVar10;
            iVar12 = pFVar19->DrawOrder;
            uVar5 = *(undefined4 *)&pFVar19->field_0x1c;
            param_1->Material = pFVar19->Material;
            param_1->DrawOrder = iVar12;
            *(undefined4 *)&param_1->field_0x1c = uVar5;
            (pFVar19->Records).AllocatorInstance.Data = pFVar2;
            (pFVar19->Records).ArrayNum = iVar18;
            (pFVar19->Records).ArrayMax = iVar13;
            pFVar19->Material = pUVar3;
            pFVar19->DrawOrder = iVar4;
            *(undefined4 *)&pFVar19->field_0x1c = uVar8;
            if (1 < iVar11) {
              do {
                iVar10 = iVar17 * 2;
                iVar12 = iVar10 + 1;
                if (iVar10 + 2 < iVar11) {
                  if (param_1[(longlong)iVar10 + 2].DrawOrder < param_1[iVar12].DrawOrder) {
                    iVar12 = iVar10;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar16 = param_1 + iVar17;
                pFVar15 = param_1 + iVar12;
                if (pFVar15->DrawOrder <= pFVar16->DrawOrder) break;
                iVar10 = (pFVar15->Records).ArrayNum;
                iVar18 = (pFVar15->Records).ArrayMax;
                pFVar2 = (pFVar16->Records).AllocatorInstance.Data;
                iVar13 = (pFVar16->Records).ArrayNum;
                iVar4 = (pFVar16->Records).ArrayMax;
                pUVar3 = pFVar16->Material;
                iVar17 = pFVar16->DrawOrder;
                uVar8 = *(undefined4 *)&pFVar16->field_0x1c;
                (pFVar16->Records).AllocatorInstance.Data =
                     (pFVar15->Records).AllocatorInstance.Data;
                (pFVar16->Records).ArrayNum = iVar10;
                (pFVar16->Records).ArrayMax = iVar18;
                iVar10 = pFVar15->DrawOrder;
                uVar5 = *(undefined4 *)&pFVar15->field_0x1c;
                pFVar16->Material = pFVar15->Material;
                pFVar16->DrawOrder = iVar10;
                *(undefined4 *)&pFVar16->field_0x1c = uVar5;
                (pFVar15->Records).AllocatorInstance.Data = pFVar2;
                (pFVar15->Records).ArrayNum = iVar13;
                (pFVar15->Records).ArrayMax = iVar4;
                pFVar15->Material = pUVar3;
                pFVar15->DrawOrder = iVar17;
                *(undefined4 *)&pFVar15->field_0x1c = uVar8;
                iVar17 = iVar12;
              } while (iVar12 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar19 = pFVar19 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar18 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar18 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].DrawOrder < param_1[iVar13].DrawOrder) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar15 = param_1 + iVar10;
    pFVar19 = param_1 + iVar13;
    if (pFVar19->DrawOrder <= pFVar15->DrawOrder) goto LAB_14ace4076;
    iVar10 = (pFVar19->Records).ArrayNum;
    iVar4 = (pFVar19->Records).ArrayMax;
    iVar11 = iVar13 * 2 + 1;
    pFVar2 = (pFVar15->Records).AllocatorInstance.Data;
    iVar17 = (pFVar15->Records).ArrayNum;
    iVar6 = (pFVar15->Records).ArrayMax;
    pUVar3 = pFVar15->Material;
    iVar7 = pFVar15->DrawOrder;
    uVar8 = *(undefined4 *)&pFVar15->field_0x1c;
    (pFVar15->Records).AllocatorInstance.Data = (pFVar19->Records).AllocatorInstance.Data;
    (pFVar15->Records).ArrayNum = iVar10;
    (pFVar15->Records).ArrayMax = iVar4;
    iVar10 = pFVar19->DrawOrder;
    uVar5 = *(undefined4 *)&pFVar19->field_0x1c;
    pFVar15->Material = pFVar19->Material;
    pFVar15->DrawOrder = iVar10;
    *(undefined4 *)&pFVar15->field_0x1c = uVar5;
    (pFVar19->Records).AllocatorInstance.Data = pFVar2;
    (pFVar19->Records).ArrayNum = iVar17;
    (pFVar19->Records).ArrayMax = iVar6;
    pFVar19->Material = pUVar3;
    pFVar19->DrawOrder = iVar7;
    *(undefined4 *)&pFVar19->field_0x1c = uVar8;
    iVar10 = iVar13;
  } while( true );
}

// HeapSortInternal<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::__l2::FSortStruct,int,FIdentityFunctor,TDereferenceWrapper<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::__l2::FSortStruct,`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::__l2::<lambda_1>_>_> @ 14ace4170

void __cdecl
AlgoImpl::
HeapSortInternal<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::FSortStruct,int,FIdentityFunctor,TDereferenceWrapper<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::FSortStruct,_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::<lambda_1>_>_>
          (FSortStruct *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_UPaperGroupedSpriteComponent::SortInstancesAlongAxis(UE::Math::TVector<double>)_::_2_::FSortStruct,_public:_void___cdecl_UPaperGroupedSpriteComponent::SortInstancesAlongAxis(UE::Math::TVector<double>)_::_2_::<lambda_1>_>
          param_4)

{
  FSortStruct FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14ace4259:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = FVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if (param_1[iVar4].SortKey <= param_1[(longlong)iVar8 + 2].SortKey &&
                      param_1[(longlong)iVar8 + 2].SortKey != param_1[iVar4].SortKey) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (param_1[iVar7].SortKey <= param_1[iVar4].SortKey) break;
                FVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[iVar6].SortKey <= param_1[(longlong)iVar5 + 2].SortKey &&
          param_1[(longlong)iVar5 + 2].SortKey != param_1[iVar6].SortKey) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if (param_1[iVar4].SortKey <= param_1[iVar6].SortKey) goto LAB_14ace4259;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = FVar1;
    iVar4 = iVar6;
  } while( true );
}

// InternalConstructor<APaperCharacter> @ 14ace4320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<APaperCharacter>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  ACharacter *this;
  FName FVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  
  FVar2 = ACharacter::MeshComponentName;
  this = (ACharacter *)param_1->Obj;
  if (this != (ACharacter *)0x0) {
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,ACharacter::MeshComponentName);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar2,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0)
    ;
    ACharacter::ACharacter(this,param_1);
    *(undefined ***)this = &APaperCharacter::_vftable__for__AActor__;
    *(undefined ***)&this->field_0x2c0 = &APaperCharacter::_vftable__for__INavAgentInterface__;
    *(undefined8 *)&this->field_0x678 = 0;
    FVar2 = APaperCharacter::SpriteComponentName;
    pUVar3 = UPaperFlipbookComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar3,pUVar3,false,false);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UObject *)0x0)) {
      *(UObject **)&this->field_0x678 = pUVar4;
      if (pUVar4 == (UObject *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar4);
      *(UObject **)&this->field_0x678 = pUVar4;
    }
    pUVar4[0x10].field_0x1 = pUVar4[0x10].field_0x1 | 4;
    pbVar1 = (byte *)(*(longlong *)&this->field_0x678 + 0x281);
    *pbVar1 = *pbVar1 | 8;
    pbVar1 = (byte *)(*(longlong *)&this->field_0x678 + 0x27d);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)(*(longlong *)&this->field_0x678 + 0x27e);
    *pbVar1 = *pbVar1 | 4;
    *(undefined1 *)(*(longlong *)&this->field_0x678 + 0x40) = 0;
    USceneComponent::SetupAttachment
              (*(USceneComponent **)&this->field_0x678,
               (USceneComponent *)(this->CapsuleComponent).field0_0x0.DebugPtr,(FName)0x0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      FName::FName(&CollisionProfileName,L"CharacterMesh");
      _Init_thread_footer(&_TSS0);
    }
    (**(code **)(**(longlong **)&this->field_0x678 + 0x788))
              (*(longlong **)&this->field_0x678,CollisionProfileName,1);
    UPrimitiveComponent::SetGenerateOverlapEvents(*(UPrimitiveComponent **)&this->field_0x678,false)
    ;
  }
  return;
}

// InternalConstructor<APaperFlipbookActor> @ 14ace44e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APaperFlipbookActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APaperFlipbookActor__6B_;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"RenderComponent");
    FVar1 = *pFVar2;
    pUVar3 = UPaperFlipbookComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
  }
  return;
}

// InternalConstructor<APaperGroupedSpriteActor> @ 14ace45a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APaperGroupedSpriteActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APaperGroupedSpriteActor__6B_;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"RenderComponent");
    FVar1 = *pFVar2;
    pUVar3 = UPaperGroupedSpriteComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
  }
  return;
}

// InternalConstructor<APaperSpriteActor> @ 14ace4660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APaperSpriteActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APaperSpriteActor__6B_;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"RenderComponent");
    FVar1 = *pFVar2;
    pUVar3 = UPaperSpriteComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    (**(code **)(*(longlong *)pUVar4 + 0x788))(pUVar4,UCollisionProfile::BlockAll_ProfileName,1);
    *(undefined1 *)(this[1]._padding_ + 0x1ab) = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)this[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this[1]._padding_);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
  }
  return;
}

// InternalConstructor<APaperTerrainActor> @ 14ace4750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APaperTerrainActor>(FObjectInitializer *param_1)

{
  if ((APaperTerrainActor *)param_1->Obj != (APaperTerrainActor *)0x0) {
    APaperTerrainActor::APaperTerrainActor((APaperTerrainActor *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<APaperTileMapActor> @ 14ace4770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APaperTileMapActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APaperTileMapActor__6B_;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"RenderComponent");
    FVar1 = *pFVar2;
    pUVar3 = UPaperTileMapComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
  }
  return;
}

// InternalConstructor<UMaterialExpressionSpriteTextureSampler> @ 14ace4830

void __cdecl
InternalConstructor<UMaterialExpressionSpriteTextureSampler>(FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSampleParameter2D *this;
  FName local_res8 [4];
  
  this = (UMaterialExpressionTextureSampleParameter2D *)param_1->Obj;
  if (this != (UMaterialExpressionTextureSampleParameter2D *)0x0) {
    UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
              (this,param_1);
    *(undefined ***)this = &___7UMaterialExpressionSpriteTextureSampler__6B_;
    FText::FText((FText *)&this[1].field_0x8);
    FName::FName(local_res8,L"SpriteTexture");
    *(uint *)&this->field_0x200 = local_res8[0].ComparisonIndex.Value;
    *(uint *)&this->field_0x204 = local_res8[0].Number;
    *(undefined1 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x4 = 0;
  }
  return;
}

// InternalConstructor<UPaperFlipbook> @ 14ace48a0

void __cdecl InternalConstructor<UPaperFlipbook>(FObjectInitializer *param_1)

{
  UObject *this;
  void *pvVar1;
  ulonglong uVar2;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    uVar2 = (ulonglong)_tls_index;
    *(undefined ***)this = &___7UPaperFlipbook__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    pvVar1 = ThreadLocalStoragePointer;
    *(undefined4 *)(this + 1) = 0x41700000;
    if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                  (&MaskedMaterialRef,L"/Paper2D/MaskedUnlitSpriteMaterial",0);
        atexit(`UPaperFlipbook::UPaperFlipbook'::__l2::
               _dynamic_atexit_destructor_for__MaskedMaterialRef__);
        _Init_thread_footer(&_TSS0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (MaskedMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)MaskedMaterialRef.Object.field0_0x0);
    }
    *(TObjectPtr<UMaterialInterface>_u_0 *)&this[1].field_0x18 =
         (FObjectPtr)MaskedMaterialRef.Object.field0_0x0;
  }
  return;
}

// InternalConstructor<UPaperFlipbookComponent> @ 14ace4980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UPaperFlipbookComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint uVar2;
  UMeshComponent *this;
  FLinearColor FVar3;
  
  this = (UMeshComponent *)param_1->Obj;
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperFlipbookComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPaperFlipbookComponent::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UPaperFlipbookComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UPaperFlipbookComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPaperFlipbookComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPaperFlipbookComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UPrimitiveComponent::SetCollisionProfileName
              ((UPrimitiveComponent *)this,UCollisionProfile::BlockAllDynamic_ProfileName,true);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 & 0xf7;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0x7f;
    this[1]._padding_ = 0;
    FVar3 = FLinearColor::White;
    uVar2 = *(uint *)((longlong)&this[1]._padding_ + 4);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 0x80;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(uint *)((longlong)&this[1]._padding_ + 4) = uVar2 & 0xfffffffd | 5;
    *(FLinearColor_u_0 *)&this[1]._padding_ = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
    *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
    *(undefined1 *)&this->_padding_ = 2;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
  }
  return;
}

// InternalConstructor<UPaperGroupedSpriteComponent> @ 14ace4ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UPaperGroupedSpriteComponent>(FObjectInitializer *param_1)

{
  UMeshComponent *this;
  
  this = (UMeshComponent *)param_1->Obj;
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperGroupedSpriteComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPaperGroupedSpriteComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPaperGroupedSpriteComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UPaperGroupedSpriteComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPaperGroupedSpriteComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPaperGroupedSpriteComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UPrimitiveComponent::SetCollisionProfileName
              ((UPrimitiveComponent *)this,UCollisionProfile::BlockAllDynamic_ProfileName,true);
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
    *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  }
  return;
}

// InternalConstructor<UPaperRuntimeSettings> @ 14ace4b80

void __cdecl InternalConstructor<UPaperRuntimeSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined ***)this = &___7UPaperRuntimeSettings__6B_;
    this[1].field_0x2 = 1;
  }
  return;
}

// InternalConstructor<UPaperSprite> @ 14ace4bc0

void __cdecl InternalConstructor<UPaperSprite>(FObjectInitializer *param_1)

{
  UObject *this;
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    uVar3 = (ulonglong)_tls_index;
    *(undefined ***)this = &UPaperSprite::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UPaperSprite::_vftable__for__IInterface_CollisionDataProvider__;
    *(undefined ***)&this[1].field_0x8 = &UPaperSprite::_vftable__for__ISlateTextureAtlasInterface__
    ;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    pvVar2 = ThreadLocalStoragePointer;
    this[3].field_0x18 = 2;
    *(undefined4 *)(this + 4) = 0xffffffff;
    *(undefined4 *)&this[3].field_0x1c = 0x4023d70a;
    lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
    if (*(int *)(lVar1 + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                  (&MaskedMaterialRef,L"/Paper2D/MaskedUnlitSpriteMaterial",0);
        atexit(`UPaperSprite::UPaperSprite'::__l2::
               _dynamic_atexit_destructor_for__MaskedMaterialRef__);
        _Init_thread_footer(&_TSS0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (MaskedMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)MaskedMaterialRef.Object.field0_0x0);
    }
    *(TObjectPtr<UMaterialInterface>_u_0 *)&this[2].field_0x20 =
         (FObjectPtr)MaskedMaterialRef.Object.field0_0x0;
    if (*(int *)(lVar1 + 0x9d4c) < _TSS1) {
      _Init_thread_header(&_TSS1);
      if (_TSS1 == -1) {
        ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                  (&OpaqueMaterialRef,L"/Paper2D/OpaqueUnlitSpriteMaterial",0);
        atexit(`UPaperSprite::UPaperSprite'::__l2::
               _dynamic_atexit_destructor_for__OpaqueMaterialRef__);
        _Init_thread_footer(&_TSS1);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (OpaqueMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)OpaqueMaterialRef.Object.field0_0x0);
    }
    *(TObjectPtr<UMaterialInterface>_u_0 *)&this[3].field_0x0 =
         (FObjectPtr)OpaqueMaterialRef.Object.field0_0x0;
  }
  return;
}

// InternalConstructor<UPaperSpriteAtlas> @ 14ace4d90

void __cdecl InternalConstructor<UPaperSpriteAtlas>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPaperSpriteAtlas__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UPaperSpriteBlueprintLibrary> @ 14ace4dd0

void __cdecl InternalConstructor<UPaperSpriteBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPaperSpriteBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPaperSpriteComponent> @ 14ace4e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UPaperSpriteComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UMeshComponent *this;
  FLinearColor FVar2;
  
  this = (UMeshComponent *)param_1->Obj;
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__IInterface_AsyncCompilation__
    ;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    UPrimitiveComponent::SetCollisionProfileName
              ((UPrimitiveComponent *)this,UCollisionProfile::BlockAllDynamic_ProfileName,true);
    this[1]._padding_ = 0;
    FVar2 = FLinearColor::White;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 & 0xf7;
    *(FLinearColor_u_0 *)&this[1]._padding_ = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  }
  return;
}

// InternalConstructor<UPaperTerrainComponent> @ 14ace4ed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UPaperTerrainComponent>(FObjectInitializer *param_1)

{
  UPrimitiveComponent *this;
  longlong lVar1;
  FLinearColor FVar2;
  void *pvVar3;
  TObjectPtr<UPaperTerrainMaterial>_u_0 TVar4;
  ulonglong uVar5;
  FString local_18;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    uVar5 = (ulonglong)_tls_index;
    *(undefined ***)this = &UPaperTerrainComponent::_vftable__for__UObject__;
    *(undefined8 *)&this->field_0x548 = 0;
    *(undefined ***)&this->field_0x28 =
         &UPaperTerrainComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UPaperTerrainComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UPaperTerrainComponent::_vftable__for__INavRelevantInterface__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)&this->field_0x258 =
         &UPaperTerrainComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &UPaperTerrainComponent::_vftable__for__IPhysicsComponent__
    ;
    pvVar3 = ThreadLocalStoragePointer;
    this[1].field_0x1 = 1;
    *(undefined4 *)&this[1].field_0x14 = 0x42c80000;
    FVar2 = FLinearColor::White;
    this->field_0x9a = this->field_0x9a | 0x80;
    lVar1 = *(longlong *)((longlong)pvVar3 + uVar5 * 8);
    *(FLinearColor_u_0 *)&this[1].field_0x18 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
    *(undefined4 *)&this[1].field_0x28 = 8;
    this[1].field_0x2c = 2;
    *(undefined4 *)&this[1].field_0x30 = 0x43480000;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    if (*(int *)(lVar1 + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        DefaultMaterialRef._padding_._0_2_ = 0;
        DefaultMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
        FGCObject::RegisterGCObject((FGCObject *)&DefaultMaterialRef);
        DefaultMaterialRef.Object.field0_0x0 =
             (TObjectPtr<UPaperTerrainMaterial>_u_0)(FObjectPtr)0x0;
        DefaultMaterialRef._padding_ =
             (longlong)&___7__FObjectFinder_VUPaperTerrainMaterial___ConstructorHelpers__6B_;
        ConstructorHelpers::CheckIfIsInConstructor(L"/Paper2D/DefaultPaperTerrainMaterial");
        FString::FString(&local_18,L"/Paper2D/DefaultPaperTerrainMaterial");
        ConstructorHelpers::StripObjectClass(&local_18,true);
        TVar4.DebugPtr =
             ConstructorHelpersInternal::FindOrLoadObject<UPaperTerrainMaterial>(&local_18,0);
        if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
           (TVar4.DebugPtr == (UPaperTerrainMaterial *)0x0)) {
          DefaultMaterialRef.Object.field0_0x0 =
               (TObjectPtr<UPaperTerrainMaterial>_u_0)
               (TObjectPtr<UPaperTerrainMaterial>_u_0)TVar4.DebugPtr;
          if (TVar4.DebugPtr == (UPaperTerrainMaterial *)0x0) {
            ConstructorHelpers::FailedToFind(L"/Paper2D/DefaultPaperTerrainMaterial");
          }
        }
        else {
          UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
          DefaultMaterialRef.Object.field0_0x0 =
               (TObjectPtr<UPaperTerrainMaterial>_u_0)
               (TObjectPtr<UPaperTerrainMaterial>_u_0)TVar4.DebugPtr;
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        atexit(`UPaperTerrainComponent::UPaperTerrainComponent'::__l2::
               _dynamic_atexit_destructor_for__DefaultMaterialRef__);
        _Init_thread_footer(&_TSS0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (DefaultMaterialRef.Object.field0_0x0 != (UPaperTerrainMaterial *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)DefaultMaterialRef.Object.field0_0x0);
    }
    *(TObjectPtr<UPaperTerrainMaterial>_u_0 *)&this->field_0x548 =
         (FObjectPtr)DefaultMaterialRef.Object.field0_0x0;
  }
  return;
}

// InternalConstructor<UPaperTerrainMaterial> @ 14ace50f0

void __cdecl InternalConstructor<UPaperTerrainMaterial>(FObjectInitializer *param_1)

{
  UDataAsset *pUVar1;
  int *piVar2;
  UDataAsset *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    pUVar1 = this + 1;
    pFVar8 = (FScriptContainerElement *)0x0;
    this->_padding_ = (longlong)&___7UPaperTerrainMaterial__6B_;
    piVar2 = (int *)((longlong)&this[1]._padding_ + 4);
    pUVar1->_padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *piVar2 = 0;
    this[1]._padding_ = 0;
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,(ForAnyElementType *)pUVar1,piVar2);
    *(uint *)&this[1]._padding_ = uVar5 + 1;
    uVar6 = 0;
    if ((int)uVar5 < (int)(uVar5 + 1)) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = (FScriptContainerElement *)pUVar1->_padding_ + (longlong)(int)uVar5 * 0x38;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      *(undefined8 *)(pFVar7 + 0x10) = 0;
      *(undefined8 *)(pFVar7 + 0x18) = 0;
      pFVar7[0x28] = (FScriptContainerElement)0x1;
      *(undefined8 *)(pFVar7 + 0x2c) = 0;
      pFVar8 = pFVar7;
    }
    *(undefined4 *)(pFVar8 + 0x20) = 0;
    *(undefined4 *)(pFVar8 + 0x24) = 0x43b40000;
  }
  return;
}

// InternalConstructor<UPaperTerrainSplineComponent> @ 14ace51e0

void __cdecl InternalConstructor<UPaperTerrainSplineComponent>(FObjectInitializer *param_1)

{
  USplineComponent *this;
  
  this = (USplineComponent *)param_1->Obj;
  if (this != (USplineComponent *)0x0) {
    USplineComponent::USplineComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperTerrainSplineComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPaperTerrainSplineComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPaperTerrainSplineComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UPaperTerrainSplineComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPaperTerrainSplineComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPaperTerrainSplineComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPaperTileLayer> @ 14ace5270

void __cdecl InternalConstructor<UPaperTileLayer>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UPaperTileLayer *this;
  
  this = (UPaperTileLayer *)param_1->Obj;
  if (this != (UPaperTileLayer *)0x0) {
    UObject::UObject((UObject *)this,param_1);
    this->_padding_ = (longlong)&___7UPaperTileLayer__6B_;
    FText::FText(&this->LayerName);
    this->CollisionThicknessOverride = 50.0;
    this->CollisionOffsetOverride = 0.0;
    this->LayerWidth = 4;
    puVar2 = &this->field_0x40;
    this->bHiddenInGame = 0;
    this->bOverrideCollisionOffset = 0;
    this->bOverrideCollisionThickness = 0;
    this->bLayerCollides = 1;
    this->LayerHeight = 4;
    (this->LayerColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    (this->AllocatedCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AllocatedCells).ArrayNum = 0;
    (this->AllocatedCells).ArrayMax = 0;
    (this->TileSet_DEPRECATED).field0_0x0.DebugPtr = (UPaperTileSet *)0x0;
    (this->AllocatedGrid_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AllocatedGrid_DEPRECATED).ArrayNum = 0;
    (this->AllocatedGrid_DEPRECATED).ArrayMax = 0;
    UPaperTileLayer::DestructiveAllocateMap(this,4,4);
    return;
  }
  return;
}

// InternalConstructor<UPaperTileMap> @ 14ace5310

void __cdecl InternalConstructor<UPaperTileMap>(FObjectInitializer *param_1)

{
  UObject *this;
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPaperTileMap__6B_;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)(this + 2) = 0;
    FUtf8String::Reset((FUtf8String *)&this[2].field_0x10,0);
    pvVar2 = ThreadLocalStoragePointer;
    uVar3 = (ulonglong)_tls_index;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 1) = 4;
    *(undefined4 *)&this[1].field_0x4 = 4;
    *(undefined4 *)&this[1].field_0x8 = 0x20;
    *(undefined4 *)&this[1].field_0xc = 0x20;
    *(undefined8 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x1c = 0x40800000;
    *(undefined4 *)&this[3].field_0x10 = 0x42480000;
    this[3].field_0x14 = 2;
    if (*(int *)(lVar1 + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                  (&DefaultMaterial,L"/Paper2D/MaskedUnlitSpriteMaterial",0);
        atexit(`UPaperTileMap::UPaperTileMap'::__l2::
               _dynamic_atexit_destructor_for__DefaultMaterial__);
        _Init_thread_footer(&_TSS0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (DefaultMaterial.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)DefaultMaterial.Object.field0_0x0);
    }
    *(TObjectPtr<UMaterialInterface>_u_0 *)&this[2].field_0x20 =
         (FObjectPtr)DefaultMaterial.Object.field0_0x0;
  }
  return;
}

// InternalConstructor<UPaperTileMapComponent> @ 14ace5460

void __cdecl InternalConstructor<UPaperTileMapComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UMeshComponent *this;
  longlong lVar2;
  FLinearColor FVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  this = (UMeshComponent *)param_1->Obj;
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperTileMapComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPaperTileMapComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPaperTileMapComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UPaperTileMapComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPaperTileMapComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPaperTileMapComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FVar3 = FLinearColor::White;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(FLinearColor_u_0 *)&this[1]._padding_ = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
    this[1]._padding_ = 0;
    FBodyInstance::SetCollisionEnabled((FBodyInstance *)&this->_padding_,QueryAndPhysics,true);
    pvVar4 = ThreadLocalStoragePointer;
    uVar5 = (ulonglong)_tls_index;
    *(undefined4 *)&this[1]._padding_ = 4;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 4;
    *(undefined4 *)&this[1]._padding_ = 0x20;
    lVar2 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x20;
    if (*(int *)(lVar2 + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                  (&DefaultMaterial,L"/Paper2D/MaskedUnlitSpriteMaterial",0);
        atexit(`UPaperTileMapComponent::UPaperTileMapComponent'::__l2::
               _dynamic_atexit_destructor_for__DefaultMaterial__);
        _Init_thread_footer(&_TSS0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (DefaultMaterial.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)DefaultMaterial.Object.field0_0x0);
    }
    this[1]._padding_ = (longlong)DefaultMaterial.Object.field0_0x0;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 & 0xf7;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 0x80;
  }
  return;
}

// InternalConstructor<UPaperTileSet> @ 14ace5600

void __cdecl InternalConstructor<UPaperTileSet>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[3].field_0x20 = 0x20;
    *(undefined ***)this = &___7UPaperTileSet__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)(this + 1) = 0x20;
    *(undefined4 *)&this[1].field_0x4 = 0x20;
    *(undefined4 *)&this[3].field_0x24 = 0x20;
  }
  return;
}

// InternalConstructor<UTileMapBlueprintLibrary> @ 14ace5680

void __cdecl InternalConstructor<UTileMapBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UTileMapBlueprintLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<APaperCharacter> @ 14ace56b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APaperCharacter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ACharacter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APaperCharacter::GetPrivateStaticClass();
  this = (ACharacter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ACharacter *)0x0) {
    ACharacter::ACharacter(this,param_1);
    *(undefined ***)this = &APaperCharacter::_vftable__for__AActor__;
    *(undefined ***)&this->field_0x2c0 = &APaperCharacter::_vftable__for__INavAgentInterface__;
    *(undefined8 *)&this->field_0x678 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APaperFlipbookActor> @ 14ace5770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APaperFlipbookActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APaperFlipbookActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APaperFlipbookActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APaperGroupedSpriteActor> @ 14ace5830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APaperGroupedSpriteActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APaperGroupedSpriteActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APaperGroupedSpriteActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APaperSpriteActor> @ 14ace58f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APaperSpriteActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APaperSpriteActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APaperSpriteActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APaperTerrainActor> @ 14ace59b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APaperTerrainActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APaperTerrainActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APaperTerrainActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APaperTileMapActor> @ 14ace5a70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APaperTileMapActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APaperTileMapActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APaperTileMapActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionSpriteTextureSampler> @ 14ace5b30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionSpriteTextureSampler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpressionTextureSampleParameter2D *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionSpriteTextureSampler::GetPrivateStaticClass();
  this = (UMaterialExpressionTextureSampleParameter2D *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpressionTextureSampleParameter2D *)0x0) {
    UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
              (this,param_1);
    *(undefined ***)this = &___7UMaterialExpressionSpriteTextureSampler__6B_;
    FText::FText((FText *)&this[1].field_0x8);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperFlipbook> @ 14ace5bf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperFlipbook>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperFlipbook::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPaperFlipbook__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperFlipbookComponent> @ 14ace5cb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperFlipbookComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperFlipbookComponent::GetPrivateStaticClass();
  this = (UMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperFlipbookComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPaperFlipbookComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPaperFlipbookComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UPaperFlipbookComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPaperFlipbookComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPaperFlipbookComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperGroupedSpriteComponent> @ 14ace5dd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPaperGroupedSpriteComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperGroupedSpriteComponent::GetPrivateStaticClass();
  this = (UMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperGroupedSpriteComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPaperGroupedSpriteComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPaperGroupedSpriteComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UPaperGroupedSpriteComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPaperGroupedSpriteComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPaperGroupedSpriteComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperRuntimeSettings> @ 14ace5ef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperRuntimeSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperRuntimeSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPaperRuntimeSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperSprite> @ 14ace5fa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperSprite>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperSprite::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &UPaperSprite::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UPaperSprite::_vftable__for__IInterface_CollisionDataProvider__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UPaperSprite::_vftable__for__ISlateTextureAtlasInterface__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperSpriteAtlas> @ 14ace60a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperSpriteAtlas>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperSpriteAtlas::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPaperSpriteAtlas__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperSpriteBlueprintLibrary> @ 14ace6160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPaperSpriteBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperSpriteBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPaperSpriteBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperSpriteComponent> @ 14ace6210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperSpriteComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperSpriteComponent::GetPrivateStaticClass();
  this = (UMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__IInterface_AsyncCompilation__
    ;
    this->_padding_ = (longlong)&UPaperSpriteComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperTerrainComponent> @ 14ace6310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperTerrainComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimitiveComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperTerrainComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UPaperTerrainComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UPaperTerrainComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UPaperTerrainComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UPaperTerrainComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UPaperTerrainComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &UPaperTerrainComponent::_vftable__for__IPhysicsComponent__
    ;
    *(undefined8 *)&this->field_0x548 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperTerrainMaterial> @ 14ace6430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperTerrainMaterial>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperTerrainMaterial::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UPaperTerrainMaterial__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperTerrainSplineComponent> @ 14ace64f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPaperTerrainSplineComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USplineComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperTerrainSplineComponent::GetPrivateStaticClass();
  this = (USplineComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USplineComponent *)0x0) {
    USplineComponent::USplineComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperTerrainSplineComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPaperTerrainSplineComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPaperTerrainSplineComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UPaperTerrainSplineComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPaperTerrainSplineComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPaperTerrainSplineComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperTileLayer> @ 14ace65f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperTileLayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperTileLayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPaperTileLayer__6B_;
    FText::FText((FText *)(pUVar1 + 1));
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperTileMap> @ 14ace66c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperTileMap>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperTileMap::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPaperTileMap__6B_;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[2].field_0x10,0);
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperTileMapComponent> @ 14ace67a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperTileMapComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperTileMapComponent::GetPrivateStaticClass();
  this = (UMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UPaperTileMapComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPaperTileMapComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPaperTileMapComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UPaperTileMapComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPaperTileMapComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPaperTileMapComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPaperTileSet> @ 14ace68c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPaperTileSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPaperTileSet::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPaperTileSet__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTileMapBlueprintLibrary> @ 14ace69a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTileMapBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTileMapBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTileMapBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FPaperTerrainSpriteGeometry,int,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,`UPaperTerrainComponent::SpawnSegments'::__l2::<lambda_1>_>_> @ 14ace6a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FPaperTerrainSpriteGeometry,int,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,_UPaperTerrainComponent::SpawnSegments_::__l2::<lambda_1>_>_>
          (FPaperTerrainSpriteGeometry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPaperTerrainSpriteGeometry,_protected:_void___cdecl_UPaperTerrainComponent::SpawnSegments(TArray<FTerrainSegment,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::<lambda_1>_>
          param_4)

{
  FPaperTerrainSpriteGeometry *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UMaterialInterface *pUVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  FPaperTerrainSpriteGeometry *pFVar15;
  FPaperTerrainSpriteGeometry **ppFVar16;
  FPaperTerrainSpriteGeometry *pFVar17;
  FPaperTerrainSpriteGeometry *pFVar18;
  FPaperTerrainSpriteGeometry *pFVar19;
  FPaperTerrainSpriteGeometry *pFVar20;
  FPaperTerrainSpriteGeometry *pFVar21;
  float fVar22;
  undefined1 auStack_368 [48];
  FPaperTerrainSpriteGeometry *local_338;
  FPaperTerrainSpriteGeometry *local_328;
  FPaperTerrainSpriteGeometry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar22;
    memset(local_310,0,0x2e8);
    ppFVar16 = &local_328;
    do {
      pFVar19 = ppFVar16[1];
      pFVar21 = *ppFVar16;
      pFVar1 = ppFVar16[2];
      iVar14 = (int)((longlong)pFVar19 - (longlong)pFVar21 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar20 = pFVar21;
      if ((int)local_338 != 0) {
LAB_14ace6b00:
        if (8 < iVar14) {
          iVar7 = (pFVar20->Records).ArrayNum;
          iVar8 = (pFVar20->Records).ArrayMax;
          pFVar17 = pFVar19 + 1;
          pFVar21 = pFVar20 + iVar14 / 2;
          pFVar2 = (pFVar21->Records).AllocatorInstance.Data;
          iVar10 = (pFVar21->Records).ArrayNum;
          iVar11 = (pFVar21->Records).ArrayMax;
          pUVar5 = pFVar21->Material;
          iVar12 = pFVar21->DrawOrder;
          uVar13 = *(undefined4 *)&pFVar21->field_0x1c;
          (pFVar21->Records).AllocatorInstance.Data = (pFVar20->Records).AllocatorInstance.Data;
          (pFVar21->Records).ArrayNum = iVar7;
          (pFVar21->Records).ArrayMax = iVar8;
          iVar14 = pFVar20->DrawOrder;
          uVar9 = *(undefined4 *)&pFVar20->field_0x1c;
          pFVar21->Material = pFVar20->Material;
          pFVar21->DrawOrder = iVar14;
          *(undefined4 *)&pFVar21->field_0x1c = uVar9;
          (pFVar20->Records).AllocatorInstance.Data = pFVar2;
          (pFVar20->Records).ArrayNum = iVar10;
          (pFVar20->Records).ArrayMax = iVar11;
          pFVar20->Material = pUVar5;
          pFVar20->DrawOrder = iVar12;
          *(undefined4 *)&pFVar20->field_0x1c = uVar13;
          pFVar21 = pFVar20;
LAB_14ace6b40:
          pFVar15 = pFVar21;
          pFVar21 = pFVar15 + 1;
          if (pFVar21 <= pFVar19) goto code_r0x00014ace6b49;
          goto LAB_14ace6b52;
        }
        for (; pFVar21 = pFVar20, pFVar1 = pFVar20, pFVar20 < pFVar19; pFVar19 = pFVar19 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar19) {
            if (pFVar21->DrawOrder < pFVar1->DrawOrder) {
              pFVar21 = pFVar1;
            }
          }
          pFVar2 = (pFVar21->Records).AllocatorInstance.Data;
          iVar8 = (pFVar21->Records).ArrayNum;
          iVar10 = (pFVar21->Records).ArrayMax;
          pUVar5 = pFVar21->Material;
          iVar11 = pFVar21->DrawOrder;
          uVar13 = *(undefined4 *)&pFVar21->field_0x1c;
          iVar14 = (pFVar19->Records).ArrayNum;
          iVar7 = (pFVar19->Records).ArrayMax;
          (pFVar21->Records).AllocatorInstance.Data = (pFVar19->Records).AllocatorInstance.Data;
          (pFVar21->Records).ArrayNum = iVar14;
          (pFVar21->Records).ArrayMax = iVar7;
          iVar14 = pFVar19->DrawOrder;
          uVar9 = *(undefined4 *)&pFVar19->field_0x1c;
          pFVar21->Material = pFVar19->Material;
          pFVar21->DrawOrder = iVar14;
          *(undefined4 *)&pFVar21->field_0x1c = uVar9;
          (pFVar19->Records).AllocatorInstance.Data = pFVar2;
          (pFVar19->Records).ArrayNum = iVar8;
          (pFVar19->Records).ArrayMax = iVar10;
          pFVar19->Material = pUVar5;
          pFVar19->DrawOrder = iVar11;
          *(undefined4 *)&pFVar19->field_0x1c = uVar13;
        }
        goto LAB_14ace6c39;
      }
LAB_14ace6c28:
      local_338 = pFVar1;
      HeapSortInternal<FPaperTerrainSpriteGeometry,int,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,_UPaperTerrainComponent::SpawnSegments_::__l2::<lambda_1>_>_>
                (pFVar21,iVar14,param_3,param_4);
LAB_14ace6c39:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_328 <= ppFVar16);
  }
  return;
code_r0x00014ace6b49:
  if (pFVar15[1].DrawOrder <= pFVar20->DrawOrder) goto LAB_14ace6b40;
LAB_14ace6b52:
  do {
    pFVar18 = pFVar17;
    pFVar17 = pFVar18 + -1;
    if (pFVar17 <= pFVar20) break;
  } while (pFVar20->DrawOrder <= pFVar18[-1].DrawOrder);
  pFVar2 = (pFVar17->Records).AllocatorInstance.Data;
  uVar3 = pFVar18[-1].Records.ArrayNum;
  uVar4 = pFVar18[-1].Records.ArrayMax;
  if (pFVar21 <= pFVar17) {
    pFVar6 = (pFVar21->Records).AllocatorInstance.Data;
    iVar7 = pFVar15[1].Records.ArrayNum;
    iVar8 = pFVar15[1].Records.ArrayMax;
    pUVar5 = pFVar15[1].Material;
    iVar10 = pFVar15[1].DrawOrder;
    uVar13 = *(undefined4 *)&pFVar15[1].field_0x1c;
    (pFVar21->Records).AllocatorInstance.Data = pFVar2;
    pFVar15[1].Records.ArrayNum = uVar3;
    pFVar15[1].Records.ArrayMax = uVar4;
    iVar14 = pFVar18[-1].DrawOrder;
    uVar9 = *(undefined4 *)&pFVar18[-1].field_0x1c;
    pFVar15[1].Material = pFVar18[-1].Material;
    pFVar15[1].DrawOrder = iVar14;
    *(undefined4 *)&pFVar15[1].field_0x1c = uVar9;
    (pFVar17->Records).AllocatorInstance.Data = pFVar6;
    pFVar18[-1].Records.ArrayNum = iVar7;
    pFVar18[-1].Records.ArrayMax = iVar8;
    pFVar18[-1].Material = pUVar5;
    pFVar18[-1].DrawOrder = iVar10;
    *(undefined4 *)&pFVar18[-1].field_0x1c = uVar13;
    goto LAB_14ace6b40;
  }
  pFVar6 = (pFVar20->Records).AllocatorInstance.Data;
  iVar7 = (pFVar20->Records).ArrayNum;
  iVar8 = (pFVar20->Records).ArrayMax;
  pUVar5 = pFVar20->Material;
  iVar10 = pFVar20->DrawOrder;
  uVar13 = *(undefined4 *)&pFVar20->field_0x1c;
  (pFVar20->Records).AllocatorInstance.Data = pFVar2;
  (pFVar20->Records).ArrayNum = uVar3;
  (pFVar20->Records).ArrayMax = uVar4;
  local_338._0_4_ = (int)local_338 + -1;
  iVar14 = pFVar18[-1].DrawOrder;
  uVar9 = *(undefined4 *)&pFVar18[-1].field_0x1c;
  pFVar20->Material = pFVar18[-1].Material;
  pFVar20->DrawOrder = iVar14;
  *(undefined4 *)&pFVar20->field_0x1c = uVar9;
  (pFVar17->Records).AllocatorInstance.Data = pFVar6;
  pFVar18[-1].Records.ArrayNum = iVar7;
  pFVar18[-1].Records.ArrayMax = iVar8;
  pFVar18[-1].Material = pUVar5;
  pFVar18[-1].DrawOrder = iVar10;
  *(undefined4 *)&pFVar18[-1].field_0x1c = uVar13;
  if ((longlong)((longlong)pFVar17 + (-0x20 - (longlong)pFVar20) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar19 - (longlong)pFVar21 & 0xffffffffffffffe0U)) {
    if (pFVar21 < pFVar19) {
      *ppFVar16 = pFVar21;
      ppFVar16[1] = pFVar19;
      *(int *)(ppFVar16 + 2) = (int)local_338;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar17 <= pFVar20 + 1) goto LAB_14ace6c39;
    pFVar19 = pFVar18 + -2;
    pFVar21 = pFVar20;
  }
  else {
    if (pFVar20 + 1 < pFVar17) {
      *ppFVar16 = pFVar20;
      ppFVar16[1] = pFVar18 + -2;
      *(int *)(ppFVar16 + 2) = (int)local_338;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar19 <= pFVar21) goto LAB_14ace6c39;
  }
  iVar14 = (int)((longlong)pFVar19 - (longlong)pFVar21 >> 5) + 1;
  pFVar20 = pFVar21;
  if ((int)local_338 == 0) goto LAB_14ace6c28;
  goto LAB_14ace6b00;
}

// IntroSortInternal<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::__l2::FSortStruct,int,FIdentityFunctor,TDereferenceWrapper<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::__l2::FSortStruct,`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::__l2::<lambda_1>_>_> @ 14ace6ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::FSortStruct,int,FIdentityFunctor,TDereferenceWrapper<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::FSortStruct,_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::<lambda_1>_>_>
          (FSortStruct *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_UPaperGroupedSpriteComponent::SortInstancesAlongAxis(UE::Math::TVector<double>)_::_2_::FSortStruct,_public:_void___cdecl_UPaperGroupedSpriteComponent::SortInstancesAlongAxis(UE::Math::TVector<double>)_::_2_::<lambda_1>_>
          param_4)

{
  FSortStruct *pFVar1;
  FSortStruct FVar2;
  FSortStruct *pFVar3;
  int iVar4;
  FSortStruct *pFVar5;
  FSortStruct *pFVar6;
  FSortStruct **ppFVar7;
  FSortStruct *pFVar8;
  FSortStruct *pFVar9;
  FSortStruct *pFVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  FSortStruct *local_338;
  FSortStruct *local_328;
  FSortStruct *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar11;
    memset(local_310,0,0x2e8);
    ppFVar7 = &local_328;
    do {
      pFVar9 = ppFVar7[1];
      pFVar8 = *ppFVar7;
      pFVar1 = ppFVar7[2];
      iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar8 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar10 = pFVar8;
      if ((int)local_338 != 0) {
LAB_14ace6d90:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          pFVar5 = pFVar9 + 1;
          FVar2 = pFVar10[iVar4 >> 1];
          pFVar10[iVar4 >> 1] = *pFVar10;
          *pFVar10 = FVar2;
          pFVar6 = pFVar10;
LAB_14ace6dc0:
          pFVar8 = pFVar6 + 1;
          if (pFVar8 <= pFVar9) goto code_r0x00014ace6dc9;
          goto LAB_14ace6dd5;
        }
        if (pFVar10 < pFVar9) {
          pFVar1 = pFVar10 + 1;
          do {
            pFVar8 = pFVar10;
            if (pFVar1 <= pFVar9) {
              pFVar5 = pFVar1;
              if (0x1f < ((longlong)pFVar9 + (8 - (longlong)pFVar1) & 0xfffffffffffffff8U)) {
                do {
                  if (pFVar5->SortKey < pFVar8->SortKey) {
                    pFVar8 = pFVar5;
                  }
                  if (pFVar5[1].SortKey < pFVar8->SortKey) {
                    pFVar8 = pFVar5 + 1;
                  }
                  if (pFVar5[2].SortKey < pFVar8->SortKey) {
                    pFVar8 = pFVar5 + 2;
                  }
                  if (pFVar5[3].SortKey < pFVar8->SortKey) {
                    pFVar8 = pFVar5 + 3;
                  }
                  pFVar5 = pFVar5 + 4;
                } while (pFVar5 <= pFVar9 + -3);
              }
              for (; pFVar5 <= pFVar9; pFVar5 = pFVar5 + 1) {
                if (pFVar5->SortKey < pFVar8->SortKey) {
                  pFVar8 = pFVar5;
                }
              }
            }
            FVar2 = *pFVar8;
            pFVar5 = pFVar9 + -1;
            *pFVar8 = *pFVar9;
            *pFVar9 = FVar2;
            pFVar9 = pFVar5;
          } while (pFVar10 < pFVar5);
        }
        goto LAB_14ace6e94;
      }
LAB_14ace6e83:
      local_338 = pFVar1;
      HeapSortInternal<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::FSortStruct,int,FIdentityFunctor,TDereferenceWrapper<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::FSortStruct,_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::<lambda_1>_>_>
                (pFVar8,iVar4,param_3,param_4);
LAB_14ace6e94:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_328 <= ppFVar7);
  }
  return;
code_r0x00014ace6dc9:
  pFVar3 = pFVar6 + 1;
  pFVar6 = pFVar8;
  if (pFVar10->SortKey <= pFVar3->SortKey) goto LAB_14ace6dc0;
LAB_14ace6dd5:
  do {
    pFVar6 = pFVar5;
    pFVar5 = pFVar6 + -1;
    if (pFVar5 <= pFVar10) break;
  } while (pFVar6[-1].SortKey <= pFVar10->SortKey);
  if (pFVar8 <= pFVar5) {
    FVar2 = *pFVar8;
    *pFVar8 = *pFVar5;
    *pFVar5 = FVar2;
    pFVar6 = pFVar8;
    goto LAB_14ace6dc0;
  }
  FVar2 = *pFVar10;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar10 = *pFVar5;
  *pFVar5 = FVar2;
  if ((longlong)((longlong)pFVar5 + (-8 - (longlong)pFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar9 - (longlong)pFVar8 & 0xfffffffffffffff8U)) {
    if (pFVar8 < pFVar9) {
      *ppFVar7 = pFVar8;
      ppFVar7[1] = pFVar9;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar5 <= pFVar10 + 1) goto LAB_14ace6e94;
    pFVar9 = pFVar6 + -2;
    pFVar8 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar5) {
      *ppFVar7 = pFVar10;
      ppFVar7[1] = pFVar6 + -2;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar9 <= pFVar8) goto LAB_14ace6e94;
  }
  iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar8 >> 3) + 1;
  pFVar10 = pFVar8;
  if ((int)local_338 == 0) goto LAB_14ace6e83;
  goto LAB_14ace6d90;
}

// IsObjectPtrEqual<UPaperFlipbook,UPaperFlipbook_*,0> @ 14ace6f80

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPaperFlipbook,UPaperFlipbook_*,0>
          (TObjectPtr<UPaperFlipbook> *param_1,UPaperFlipbook **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPaperFlipbook *)0x0) {
    return *param_2 == (UPaperFlipbook *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UPaperSprite,UPaperSprite_*,0> @ 14ace6fa0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPaperSprite,UPaperSprite_*,0>
          (TObjectPtr<UPaperSprite> *param_1,UPaperSprite **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPaperSprite *)0x0) {
    return *param_2 == (UPaperSprite *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UPaperTileMap,UPaperTileMap_*,0> @ 14ace6fc0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPaperTileMap,UPaperTileMap_*,0>
          (TObjectPtr<UPaperTileMap> *param_1,UPaperTileMap **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPaperTileMap *)0x0) {
    return *param_2 == (UPaperTileMap *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UPaperTileSet,UPaperTileSet_*,0> @ 14ace6fe0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPaperTileSet,UPaperTileSet_*,0>
          (TObjectPtr<UPaperTileSet> *param_1,UPaperTileSet **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPaperTileSet *)0x0) {
    return *param_2 == (UPaperTileSet *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MutableView<TObjectPtr<UPaperTileSet>_> @ 14ace7000

TMutableView<TObjectPtr<UPaperTileSet>_> __cdecl
MutableView<TObjectPtr<UPaperTileSet>_>(TObjectPtr<UPaperTileSet> *param_1)

{
  TObjectPtr<UPaperTileSet>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UPaperTileSet>_>)(UPaperTileSet **)param_1;
}

// NewObject<UPaperTileLayer> @ 14ace7010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPaperTileLayer * __cdecl NewObject<UPaperTileLayer>(UObject *param_1)

{
  UClass *pUVar1;
  UPaperTileLayer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPaperTileLayer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPaperTileLayer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPaperTileMap> @ 14ace70b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPaperTileMap * __cdecl NewObject<UPaperTileMap>(UObject *param_1)

{
  UClass *pUVar1;
  UPaperTileMap *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPaperTileMap::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPaperTileMap *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPaperTileMap> @ 14ace7150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPaperTileMap * __cdecl
NewObject<UPaperTileMap>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPaperTileMap *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UPaperTileMap::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPaperTileMap *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ObjectPtrWrap<UPaperTileSet_*,TObjectPtr<UPaperTileSet>_> @ 14ace7240

TObjectPtr<UPaperTileSet> * __cdecl
ObjectPtrWrap<UPaperTileSet_*,TObjectPtr<UPaperTileSet>_>(UPaperTileSet **param_1)

{
  return (TObjectPtr<UPaperTileSet> *)param_1;
}

// StaticEnum<enum_EPaperSpriteAtlasPadding> @ 14ace74f0

UEnum * __cdecl StaticEnum<enum_EPaperSpriteAtlasPadding>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding,(UObject *)pUVar1,
                       L"EPaperSpriteAtlasPadding");
  }
  return Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton;
}

// StaticEnum<enum_ESpriteShapeType> @ 14ace7530

UEnum * __cdecl StaticEnum<enum_ESpriteShapeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpriteShapeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ESpriteShapeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpriteShapeType,(UObject *)pUVar1,
                       L"ESpriteShapeType");
  }
  return Z_Registration_Info_UEnum_ESpriteShapeType.OuterSingleton;
}

// StaticEnum<enum_EFlipbookCollisionMode::Type> @ 14ace7570

UEnum * __cdecl StaticEnum<enum_EFlipbookCollisionMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFlipbookCollisionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_EFlipbookCollisionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode,(UObject *)pUVar1,
                       L"EFlipbookCollisionMode");
  }
  return Z_Registration_Info_UEnum_EFlipbookCollisionMode.OuterSingleton;
}

// StaticEnum<enum_ESpriteCollisionMode::Type> @ 14ace75b0

UEnum * __cdecl StaticEnum<enum_ESpriteCollisionMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpriteCollisionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ESpriteCollisionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpriteCollisionMode,(UObject *)pUVar1,
                       L"ESpriteCollisionMode");
  }
  return Z_Registration_Info_UEnum_ESpriteCollisionMode.OuterSingleton;
}

// StaticEnum<enum_ESpritePivotMode::Type> @ 14ace75f0

UEnum * __cdecl StaticEnum<enum_ESpritePivotMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpritePivotMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ESpritePivotMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpritePivotMode,(UObject *)pUVar1,
                       L"ESpritePivotMode");
  }
  return Z_Registration_Info_UEnum_ESpritePivotMode.OuterSingleton;
}

// StaticEnum<enum_ESpritePolygonMode::Type> @ 14ace7630

UEnum * __cdecl StaticEnum<enum_ESpritePolygonMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpritePolygonMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ESpritePolygonMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpritePolygonMode,(UObject *)pUVar1,
                       L"ESpritePolygonMode");
  }
  return Z_Registration_Info_UEnum_ESpritePolygonMode.OuterSingleton;
}

// StaticEnum<enum_ETileMapProjectionMode::Type> @ 14ace7670

UEnum * __cdecl StaticEnum<enum_ETileMapProjectionMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETileMapProjectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UEnum_ETileMapProjectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Paper2D_ETileMapProjectionMode,(UObject *)pUVar1,
                       L"ETileMapProjectionMode");
  }
  return Z_Registration_Info_UEnum_ETileMapProjectionMode.OuterSingleton;
}

// ToRawPtrTArrayUnsafe<TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_>_const_> @ 14ace76b0

TArray<UTexture_*,TSizedDefaultAllocator<32>_> * __cdecl
ToRawPtrTArrayUnsafe<TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_>_const_>
          (TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// ~TFunction_OwnedObject<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::<lambda_1>,1,1> @ 14aceb5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UPaperFlipbookComponent::CreateSceneProxy_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPaperFlipbookComponent::CreateSceneProxy'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x140));
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UPaperSpriteComponent::CreateSceneProxy'::__l5::<lambda_1>,1,1> @ 14aceb610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::CreateSceneProxy'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UPaperSpriteComponent::CreateSceneProxy_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPaperSpriteComponent::CreateSceneProxy'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x140));
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1> @ 14aceb660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UPaperFlipbookComponent::SendRenderDynamicData_Concurrent_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x140));
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1> @ 14aceb6b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UPaperSpriteComponent::SendRenderDynamicData_Concurrent_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x140));
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
    return;
  }
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14acec190

/* [thunk]:public: virtual void * __ptr64 __cdecl APaperCharacter::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
APaperCharacter::_vector_deleting_destructor__adjustor_704__(APaperCharacter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((APaperCharacter *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14acec1a4

/* [thunk]:public: virtual void * __ptr64 __cdecl FSpriteTextureOverrideRenderProxy::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FSpriteTextureOverrideRenderProxy::_vector_deleting_destructor__adjustor_8__
          (FSpriteTextureOverrideRenderProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSpriteTextureOverrideRenderProxy *)&this[-1].ParentMaterialSerialNumber,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14acec1b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperFlipbookComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UPaperFlipbookComponent::_vector_deleting_destructor__adjustor_592__
          (UPaperFlipbookComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperFlipbookComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14acec1c8

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperFlipbookComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UPaperFlipbookComponent::_vector_deleting_destructor__adjustor_600__
          (UPaperFlipbookComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperFlipbookComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14acec1dc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperFlipbookComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UPaperFlipbookComponent::_vector_deleting_destructor__adjustor_608__
          (UPaperFlipbookComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperFlipbookComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14acec1f0

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperFlipbookComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPaperFlipbookComponent::_vector_deleting_destructor__adjustor_40__
          (UPaperFlipbookComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPaperFlipbookComponent *)((longlong)&this[-1].SpriteColor.field0_0x0 + 8),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14acec200

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperGroupedSpriteComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UPaperGroupedSpriteComponent::_vector_deleting_destructor__adjustor_592__
          (UPaperGroupedSpriteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperGroupedSpriteComponent *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14acec214

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperGroupedSpriteComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UPaperGroupedSpriteComponent::_vector_deleting_destructor__adjustor_600__
          (UPaperGroupedSpriteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperGroupedSpriteComponent *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14acec228

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperGroupedSpriteComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UPaperGroupedSpriteComponent::_vector_deleting_destructor__adjustor_608__
          (UPaperGroupedSpriteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperGroupedSpriteComponent *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14acec23c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperGroupedSpriteComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPaperGroupedSpriteComponent::_vector_deleting_destructor__adjustor_40__
          (UPaperGroupedSpriteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPaperGroupedSpriteComponent *)&this[-1].InstanceMaterials.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14acec24c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperSprite::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPaperSprite::_vector_deleting_destructor__adjustor_40__(UPaperSprite *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperSprite *)&this[-1].SpriteCollisionDomain,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14acec25c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperSprite::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPaperSprite::_vector_deleting_destructor__adjustor_48__(UPaperSprite *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperSprite *)&this[-1].Sockets.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14acec26c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperSpriteComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UPaperSpriteComponent::_vector_deleting_destructor__adjustor_592__
          (UPaperSpriteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperSpriteComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14acec280

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperSpriteComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UPaperSpriteComponent::_vector_deleting_destructor__adjustor_600__
          (UPaperSpriteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperSpriteComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14acec294

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperSpriteComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UPaperSpriteComponent::_vector_deleting_destructor__adjustor_608__
          (UPaperSpriteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperSpriteComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14acec2a8

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperSpriteComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPaperSpriteComponent::_vector_deleting_destructor__adjustor_40__
          (UPaperSpriteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperSpriteComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14acec2b8

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTerrainComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTerrainComponent::_vector_deleting_destructor__adjustor_592__
          (UPaperTerrainComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperTerrainComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14acec2cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTerrainComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTerrainComponent::_vector_deleting_destructor__adjustor_600__
          (UPaperTerrainComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperTerrainComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14acec2e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTerrainComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTerrainComponent::_vector_deleting_destructor__adjustor_608__
          (UPaperTerrainComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperTerrainComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14acec2f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTerrainComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTerrainComponent::_vector_deleting_destructor__adjustor_40__
          (UPaperTerrainComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPaperTerrainComponent *)&this[-1].ReparamStepsPerSegment,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14acec304

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTerrainSplineComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTerrainSplineComponent::_vector_deleting_destructor__adjustor_592__
          (UPaperTerrainSplineComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPaperTerrainSplineComponent *)&this[-1].field_0x4d0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14acec318

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTerrainSplineComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTerrainSplineComponent::_vector_deleting_destructor__adjustor_600__
          (UPaperTerrainSplineComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPaperTerrainSplineComponent *)&this[-1].field_0x4c8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14acec32c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTerrainSplineComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTerrainSplineComponent::_vector_deleting_destructor__adjustor_608__
          (UPaperTerrainSplineComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPaperTerrainSplineComponent *)&this[-1].field_0x4c0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14acec340

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTerrainSplineComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTerrainSplineComponent::_vector_deleting_destructor__adjustor_40__
          (UPaperTerrainSplineComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPaperTerrainSplineComponent *)&this[-1].field_0x6f8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14acec350

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTileMapComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTileMapComponent::_vector_deleting_destructor__adjustor_592__
          (UPaperTileMapComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperTileMapComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14acec364

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTileMapComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTileMapComponent::_vector_deleting_destructor__adjustor_600__
          (UPaperTileMapComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperTileMapComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14acec378

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTileMapComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTileMapComponent::_vector_deleting_destructor__adjustor_608__
          (UPaperTileMapComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPaperTileMapComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14acec38c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPaperTileMapComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPaperTileMapComponent::_vector_deleting_destructor__adjustor_40__
          (UPaperTileMapComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPaperTileMapComponent *)&this[-1].TileLayers_DEPRECATED.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14acec3a0

void * __thiscall
ConstructorHelpers::FObjectFinder<UPaperTerrainMaterial>::_scalar_deleting_destructor_
          (FObjectFinder<UPaperTerrainMaterial> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec3f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UPaperGroupedSpriteComponent_const_,void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UPaperGroupedSpriteComponent_const_,void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec420

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPaperTerrainComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPaperTerrainComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::CreateSceneProxy'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPaperFlipbookComponent::CreateSceneProxy'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x140));
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::CreateSceneProxy'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPaperSpriteComponent::CreateSceneProxy'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x140));
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPaperFlipbookComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x140));
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPaperSpriteComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x140));
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall APaperCharacter::_scalar_deleting_destructor_(APaperCharacter *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  ACharacter::~ACharacter((ACharacter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x680);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
APaperFlipbookActor::_scalar_deleting_destructor_(APaperFlipbookActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APaperFlipbookActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec6a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
APaperGroupedSpriteActor::_scalar_deleting_destructor_(APaperGroupedSpriteActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APaperGroupedSpriteActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
APaperSpriteActor::_scalar_deleting_destructor_(APaperSpriteActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APaperSpriteActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
APaperTerrainActor::_scalar_deleting_destructor_(APaperTerrainActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APaperTerrainActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
APaperTileMapActor::_scalar_deleting_destructor_(APaperTileMapActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APaperTileMapActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FGroupedSpriteSceneProxy::_scalar_deleting_destructor_(FGroupedSpriteSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BodySetups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BodySetupTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PerInstanceRenderData).SharedReferenceCount.ReferenceController);
  FPaperRenderSceneProxy::~FPaperRenderSceneProxy((FPaperRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FPaperFlipbookSceneProxy::_scalar_deleting_destructor_(FPaperFlipbookSceneProxy *this,uint param_1)

{
  FPaperRenderSceneProxy::~FPaperRenderSceneProxy((FPaperRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x670);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec8d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FPaperRenderSceneProxy::_scalar_deleting_destructor_(FPaperRenderSceneProxy *this,uint param_1)

{
  ~FPaperRenderSceneProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x660);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FPaperRenderSceneProxy_SpriteBase::_scalar_deleting_destructor_
          (FPaperRenderSceneProxy_SpriteBase *this,uint param_1)

{
  FPaperRenderSceneProxy::~FPaperRenderSceneProxy((FPaperRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x670);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FPaperSpriteSceneProxy::_scalar_deleting_destructor_(FPaperSpriteSceneProxy *this,uint param_1)

{
  FPaperRenderSceneProxy::~FPaperRenderSceneProxy((FPaperRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x670);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec990

void * __thiscall
FPaperSpriteVertexBuffer::_scalar_deleting_destructor_(FPaperSpriteVertexBuffer *this,uint param_1)

{
  ~FPaperSpriteVertexBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acec9d0

void * __thiscall
FPaperSpriteVertexFactory::_scalar_deleting_destructor_
          (FPaperSpriteVertexFactory *this,uint param_1)

{
  FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aceca10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FPaperTerrainSceneProxy::_scalar_deleting_destructor_(FPaperTerrainSceneProxy *this,uint param_1)

{
  FPaperRenderSceneProxy::~FPaperRenderSceneProxy((FPaperRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x660);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aceca50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FPaperTileMapRenderSceneProxy::_scalar_deleting_destructor_
          (FPaperTileMapRenderSceneProxy *this,uint param_1)

{
  FPaperRenderSceneProxy::~FPaperRenderSceneProxy((FPaperRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x670);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aceca90

void * __thiscall
FSpriteTextureOverrideRenderProxy::_scalar_deleting_destructor_
          (FSpriteTextureOverrideRenderProxy *this,uint param_1)

{
  ForElementType<UTexture_*> FVar1;
  
  FVar1 = (this->AdditionalTextures).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UTexture_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acecae0

void * __thiscall
ISlateTextureAtlasInterface::_scalar_deleting_destructor_
          (ISlateTextureAtlasInterface *this,uint param_1)

{
  *this = (ISlateTextureAtlasInterface)&___7ISlateTextureAtlasInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acecb20

void * __thiscall
UMaterialExpressionSpriteTextureSampler::_scalar_deleting_destructor_
          (UMaterialExpressionSpriteTextureSampler *this,uint param_1)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionSpriteTextureSampler__6B_;
  pIVar1 = (this->SlotDisplayName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UMaterialExpressionTextureSampleParameter2D::~UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acecba0

void * __thiscall UPaperFlipbook::_scalar_deleting_destructor_(UPaperFlipbook *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPaperFlipbook__6B_;
  pFVar1 = (this->KeyFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acecc10

void * __thiscall
UPaperFlipbookComponent::_scalar_deleting_destructor_(UPaperFlipbookComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pvVar1 = *(void **)&(this->OnFinishedPlaying).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinishedPlaying);
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acecce0

void * __thiscall
UPaperGroupedSpriteComponent::_scalar_deleting_destructor_
          (UPaperGroupedSpriteComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->InstanceBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceSpriteData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acecdc0

void * __thiscall
UPaperRuntimeSettings::_scalar_deleting_destructor_(UPaperRuntimeSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPaperRuntimeSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acece20

void * __thiscall UPaperSprite::_scalar_deleting_destructor_(UPaperSprite *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__ISlateTextureAtlasInterface__;
  pFVar1 = (this->BakedRenderData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalSourceTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISlateTextureAtlasInterface__6B_;
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acecee0

void * __thiscall
UPaperSpriteAtlas::_scalar_deleting_destructor_(UPaperSpriteAtlas *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPaperSpriteAtlas__6B_;
  pFVar1 = (this->ChildTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acecf50

void * __thiscall
UPaperSpriteBlueprintLibrary::_scalar_deleting_destructor_
          (UPaperSpriteBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPaperSpriteBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acecfb0

void * __thiscall
UPaperSpriteComponent::_scalar_deleting_destructor_(UPaperSpriteComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aced050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UPaperTerrainComponent::_scalar_deleting_destructor_(UPaperTerrainComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  DestructItems<FPaperTerrainSpriteGeometry,int>
            ((FPaperTerrainSpriteGeometry *)(this->GeneratedSpriteGeometry).AllocatorInstance.Data,
             (this->GeneratedSpriteGeometry).ArrayNum);
  pFVar1 = (this->GeneratedSpriteGeometry).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aced120

void * __thiscall
UPaperTerrainMaterial::_scalar_deleting_destructor_(UPaperTerrainMaterial *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPaperTerrainMaterial__6B_;
  DestructItems<FPaperTerrainMaterialRule,int>
            ((FPaperTerrainMaterialRule *)(this->Rules).AllocatorInstance.Data,
             (this->Rules).ArrayNum);
  pFVar1 = (this->Rules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aced1a0

void * __thiscall
UPaperTerrainSplineComponent::_scalar_deleting_destructor_
          (UPaperTerrainSplineComponent *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSplineEdited);
  pvVar1 = *(void **)&(this->OnSplineEdited).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSplineEdited);
  USplineComponent::~USplineComponent((USplineComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x720);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aced280

void * __thiscall UPaperTileLayer::_scalar_deleting_destructor_(UPaperTileLayer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UPaperTileLayer__6B_;
  pFVar1 = (this->AllocatedGrid_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllocatedCells).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->LayerName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aced310

void * __thiscall UPaperTileMap::_scalar_deleting_destructor_(UPaperTileMap *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPaperTileMap__6B_;
  pFVar1 = (this->TileLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SelectedTileSet).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aced390

void * __thiscall
UPaperTileMapComponent::_scalar_deleting_destructor_(UPaperTileMapComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->TileLayers_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aced450

void * __thiscall UPaperTileSet::_scalar_deleting_destructor_(UPaperTileSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPaperTileSet__6B_;
  DestructItems<FPaperTileSetTerrain,int>
            ((FPaperTileSetTerrain *)(this->Terrains).AllocatorInstance.Data,
             (this->Terrains).ArrayNum);
  pFVar1 = (this->Terrains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPaperTileMetadata,int>
            ((FPaperTileMetadata *)(this->PerTileData).AllocatorInstance.Data,
             (this->PerTileData).ArrayNum);
  pFVar1 = (this->PerTileData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalSourceTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aced500

void * __thiscall
UTileMapBlueprintLibrary::_scalar_deleting_destructor_(UTileMapBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UTileMapBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// AreVectorsParallel @ 14acef090

bool __cdecl AreVectorsParallel(TVector2<double> *param_1,TVector2<double> *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  auVar5._0_8_ = dVar2 * dVar3;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (dVar1 * dVar1 + dVar2 * dVar2) * (dVar4 * dVar4 + dVar3 * dVar3);
  auVar6 = sqrtpd(auVar5,auVar6);
  return (float)((uint)((float)((uint)((float)(dVar1 * dVar4 + auVar5._0_8_) / (float)auVar6._0_8_)
                               & __xmm_7fffffff7fffffff7fffffff7fffffff) - __real_3f800000) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_3;
}

// AreVectorsPerpendicular @ 14acef120

bool __cdecl
AreVectorsPerpendicular(TVector2<double> *param_1,TVector2<double> *param_2,float param_3)

{
  return (float)((uint)(float)((param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
                              (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_3;
}

// CreateExtrudedConvexHull @ 14acf3aa0

void __cdecl
CreateExtrudedConvexHull
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  
  dVar7 = __real_3e45798ee0000000;
  dVar6 = __real_3ff0000000000000;
  iVar2 = param_2->ArrayNum;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  if (0 < iVar2) {
    lVar15 = 0;
    lVar16 = 0;
    uVar14 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      uVar9 = uVar14 + 1;
      uVar12 = (int)uVar9 % iVar2;
      lVar13 = (longlong)(int)uVar12;
      uVar10 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      dVar18 = *(double *)(pFVar4 + lVar13 * 0x10 + 8) - *(double *)(pFVar3 + lVar15 + 8);
      dVar19 = *(double *)(pFVar3 + lVar15) - *(double *)(pFVar4 + lVar13 * 0x10);
      dVar17 = dVar19 * dVar19 + dVar18 * dVar18;
      if (dVar17 <= dVar7) {
        dVar18 = 0.0;
        dVar17 = 0.0;
      }
      else {
        dVar17 = dVar6 / SQRT(dVar17);
        dVar18 = dVar17 * dVar18;
        dVar17 = dVar17 * dVar19;
      }
      uVar10 = 0;
      if ((int)uVar14 < param_3->ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar19 = (double)*(float *)((param_3->AllocatorInstance).Data + lVar16 * 4);
      dVar17 = dVar19 * dVar17;
      dVar19 = dVar19 * dVar18;
      dStack_f0 = dVar17 + *(double *)(pFVar3 + lVar15 + 8);
      local_f8 = dVar19 + *(double *)(pFVar3 + lVar15);
      if (((local_108.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 <
           local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_108.ArrayNum == local_108.ArrayMax) {
        local_108.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      lVar11 = (longlong)local_108.ArrayNum;
      local_108.ArrayNum = local_108.ArrayNum + 1;
      *(double *)(local_108.AllocatorInstance.Data + lVar11 * 0x10) = local_f8;
      *(double *)(local_108.AllocatorInstance.Data + lVar11 * 0x10 + 8) = dStack_f0;
      local_e8 = *(double *)(pFVar3 + lVar15) - dVar19;
      dStack_e0 = *(double *)(pFVar3 + lVar15 + 8) - dVar17;
      if (((local_108.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_108.ArrayNum == local_108.ArrayMax) {
        local_108.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      iVar1 = local_108.ArrayNum + 1;
      *(double *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10) = local_e8
      ;
      *(double *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10 + 8) =
           dStack_e0;
      dStack_d0 = dVar17 + *(double *)(pFVar4 + lVar13 * 0x10 + 8);
      local_d8 = dVar19 + *(double *)(pFVar4 + lVar13 * 0x10);
      local_108.ArrayNum = iVar1;
      if (((local_108.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_108.ArrayNum == local_108.ArrayMax) {
        local_108.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      iVar1 = local_108.ArrayNum + 1;
      *(double *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10) = local_d8
      ;
      *(double *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10 + 8) =
           dStack_d0;
      local_c8 = *(double *)(pFVar4 + lVar13 * 0x10) - dVar19;
      dStack_c0 = *(double *)(pFVar4 + lVar13 * 0x10 + 8) - dVar17;
      local_108.ArrayNum = iVar1;
      if (((local_108.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_108.ArrayNum == local_108.ArrayMax) {
        local_108.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      iVar1 = local_108.ArrayNum + 1;
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x10;
      *(double *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10) = local_c8
      ;
      *(double *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10 + 8) =
           dStack_c0;
      uVar14 = uVar9;
      local_108.ArrayNum = iVar1;
    } while ((int)uVar9 < iVar2);
  }
  FGeomTools2D::GenerateConvexHullFromPoints(param_1,&local_108);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  pFVar3 = (param_3->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeIntMargin @ 14acf7480

void __cdecl EmptyLinkFunctionForGeneratedCodeIntMargin(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionSpriteTextureSampler @ 14acf7490

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionSpriteTextureSampler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaper2D_init @ 14acf74a0

void __cdecl EmptyLinkFunctionForGeneratedCodePaper2D_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperCharacter @ 14acf74b0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperCharacter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperFlipbook @ 14acf74c0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperFlipbook(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperFlipbookActor @ 14acf74d0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperFlipbookActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperFlipbookComponent @ 14acf74e0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperFlipbookComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperGroupedSpriteActor @ 14acf74f0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperGroupedSpriteActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperGroupedSpriteComponent @ 14acf7500

void __cdecl EmptyLinkFunctionForGeneratedCodePaperGroupedSpriteComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperRuntimeSettings @ 14acf7510

void __cdecl EmptyLinkFunctionForGeneratedCodePaperRuntimeSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperSprite @ 14acf7520

void __cdecl EmptyLinkFunctionForGeneratedCodePaperSprite(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperSpriteActor @ 14acf7530

void __cdecl EmptyLinkFunctionForGeneratedCodePaperSpriteActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperSpriteAtlas @ 14acf7540

void __cdecl EmptyLinkFunctionForGeneratedCodePaperSpriteAtlas(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperSpriteBlueprintLibrary @ 14acf7550

void __cdecl EmptyLinkFunctionForGeneratedCodePaperSpriteBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperSpriteComponent @ 14acf7560

void __cdecl EmptyLinkFunctionForGeneratedCodePaperSpriteComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperTerrainActor @ 14acf7570

void __cdecl EmptyLinkFunctionForGeneratedCodePaperTerrainActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperTerrainComponent @ 14acf7580

void __cdecl EmptyLinkFunctionForGeneratedCodePaperTerrainComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperTerrainMaterial @ 14acf7590

void __cdecl EmptyLinkFunctionForGeneratedCodePaperTerrainMaterial(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperTerrainSplineComponent @ 14acf75a0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperTerrainSplineComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperTileLayer @ 14acf75b0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperTileLayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperTileMap @ 14acf75c0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperTileMap(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperTileMapActor @ 14acf75d0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperTileMapActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperTileMapComponent @ 14acf75e0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperTileMapComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePaperTileSet @ 14acf75f0

void __cdecl EmptyLinkFunctionForGeneratedCodePaperTileSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpriteDrawCall @ 14acf7600

void __cdecl EmptyLinkFunctionForGeneratedCodeSpriteDrawCall(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpriteEditorOnlyTypes @ 14acf7610

void __cdecl EmptyLinkFunctionForGeneratedCodeSpriteEditorOnlyTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTileMapBlueprintLibrary @ 14acf7620

void __cdecl EmptyLinkFunctionForGeneratedCodeTileMapBlueprintLibrary(void)

{
  return;
}

// FFlipbookFinishedPlaySignature_DelegateWrapper @ 14acf7890

void __cdecl
FFlipbookFinishedPlaySignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetSpriteRenderDataBounds2D @ 14acfec30

TBox2<double> * __cdecl
GetSpriteRenderDataBounds2D
          (TBox2<double> *__return_storage_ptr__,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined1 local_res8 [8];
  
  iVar3 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  pFVar4 = pFVar5 + (longlong)iVar3 * 0x20;
  *(undefined8 *)&__return_storage_ptr__->bIsValid = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TVector4<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    dVar9 = *(double *)pFVar5;
    dVar1 = *(double *)(pFVar5 + 8);
    if (__return_storage_ptr__->bIsValid == false) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar9;
      pFVar5 = pFVar5 + 0x20;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
      dVar9 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
      dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      __return_storage_ptr__->bIsValid = true;
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar9;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
    }
    else {
      dVar2 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
      uVar6 = SUB84(dVar2,0);
      uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
      pFVar5 = pFVar5 + 0x20;
      dVar8 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
      if (dVar9 <= dVar2) {
        uVar6 = SUB84(dVar9,0);
        uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
      }
      dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
      if (dVar9 <= dVar2) {
        dVar9 = dVar2;
      }
      if (dVar1 <= dVar8) {
        dVar8 = dVar1;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar7,uVar6);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
      uVar6 = SUB84(dVar2,0);
      uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= dVar1) {
        uVar6 = SUB84(dVar1,0);
        uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar9;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar7,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 14ad01ca0

uint __cdecl GetTypeHash(FPaperTileInfo *param_1)

{
  UPaperTileSet *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1->PackedTileIndex;
  pUVar1 = (param_1->TileSet).field0_0x0.DebugPtr;
  uVar2 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar4 = (uVar2 >> 0x10 ^ uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  return (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// SimplifyPolygon @ 14ad0b820

void __cdecl
SimplifyPolygon(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
               TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  uint local_res8;
  uint local_res18;
  longlong local_b0;
  longlong local_a8;
  
  iVar6 = param_1->ArrayNum;
  iVar1 = param_2->ArrayNum;
  local_res18 = 0;
  if (0 < iVar6) {
    local_b0 = 0;
    local_a8 = 0;
    iVar5 = iVar6;
    while (3 < iVar5) {
      uVar8 = (int)(local_res18 + 1) % iVar5;
      uVar14 = 0;
      if ((int)local_res18 < iVar5) {
        uVar14 = ~local_res18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      if (iVar1 == iVar6) {
        uVar14 = 0;
        if ((int)local_res18 < param_2->ArrayNum) {
          uVar14 = ~local_res18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar21 = *(float *)((param_2->AllocatorInstance).Data + local_a8 * 4);
      }
      else {
        fVar21 = 0.0;
      }
      iVar5 = param_1->ArrayNum;
      uVar14 = local_res18;
      local_res8 = uVar8;
      if ((int)local_res18 < iVar5) {
        do {
          uVar9 = (int)(uVar14 + 2) % iVar5;
          uVar11 = 0;
          if ((int)uVar9 < iVar5) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar13 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
          if (iVar1 == iVar6) {
            uVar11 = 0;
            if ((int)uVar9 < param_2->ArrayNum) {
              uVar11 = ~uVar9 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            fVar16 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
          }
          else {
            fVar16 = 0.0;
          }
          if ((int)uVar14 < (int)local_res18) {
            if (fVar21 != fVar16) break;
          }
          else {
            uVar11 = local_res18;
            if (fVar21 != fVar16) break;
            do {
              uVar11 = uVar11 + 1;
              uVar10 = (int)uVar11 % param_1->ArrayNum;
              uVar9 = 0;
              if ((int)uVar10 < param_1->ArrayNum) {
                uVar9 = ~uVar10 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar12 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
              if (iVar1 == iVar6) {
                uVar9 = 0;
                if ((int)uVar10 < param_2->ArrayNum) {
                  uVar9 = ~uVar10 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar4 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                fVar16 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
              }
              else {
                fVar16 = 0.0;
              }
              if (fVar21 != fVar16) goto LAB_14ad0bbfe;
              dVar20 = *(double *)(pFVar12 + 8) - *(double *)(pFVar7 + local_b0 + 8);
              dVar3 = *(double *)pFVar12 - *(double *)(pFVar7 + local_b0);
              dVar18 = *(double *)pFVar13 - *(double *)(pFVar7 + local_b0);
              dVar19 = *(double *)(pFVar13 + 8) - *(double *)(pFVar7 + local_b0 + 8);
              dVar17 = (dVar20 * dVar19 + dVar3 * dVar18) / (dVar19 * dVar19 + dVar18 * dVar18);
              dVar20 = dVar20 - dVar17 * dVar19;
              dVar3 = dVar3 - dVar17 * dVar18;
              if (param_3 * param_3 < (float)(dVar20 * dVar20 + dVar3 * dVar3)) goto LAB_14ad0bbfe;
            } while ((int)uVar11 <= (int)uVar14);
          }
          uVar14 = uVar14 + 1;
          iVar5 = param_1->ArrayNum;
          local_res8 = (int)(local_res8 + 1) % iVar5;
        } while ((int)uVar14 < iVar5);
LAB_14ad0bbfe:
        lVar15 = (longlong)(int)uVar8;
        if ((int)uVar8 < (int)local_res8) {
          uVar11 = local_res8 - uVar8;
          uVar9 = ~(uVar11 | uVar8) >> 0x1f;
          uVar14 = 0;
          if ((int)local_res8 <= param_1->ArrayNum) {
            uVar14 = uVar9;
          }
          if ((uVar14 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar11 != 0) {
            pFVar7 = (param_1->AllocatorInstance).Data + lVar15 * 0x10;
            iVar5 = (param_1->ArrayNum - uVar11) - uVar8;
            if (iVar5 != 0) {
              memmove(pFVar7,pFVar7 + (longlong)(int)uVar11 * 0x10,(longlong)iVar5 << 4);
            }
            param_1->ArrayNum = param_1->ArrayNum - uVar11;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
          }
          if (iVar1 == iVar6) {
            uVar14 = 0;
            if ((int)local_res8 <= param_2->ArrayNum) {
              uVar14 = uVar9;
            }
            if ((uVar14 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (uVar11 != 0) {
              pFVar7 = (param_2->AllocatorInstance).Data + lVar15 * 4;
              iVar5 = (param_2->ArrayNum - uVar11) - uVar8;
              if (iVar5 != 0) {
                memmove(pFVar7,pFVar7 + (longlong)(int)uVar11 * 4,(longlong)iVar5 << 2);
              }
              param_2->ArrayNum = param_2->ArrayNum - uVar11;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
            }
          }
        }
        else if ((int)local_res8 < (int)uVar8) {
          uVar14 = param_1->ArrayNum - uVar8;
          if (((int)(uVar14 | uVar8) < 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar14 != 0) {
            pFVar7 = (param_1->AllocatorInstance).Data + lVar15 * 0x10;
            iVar5 = (param_1->ArrayNum - uVar14) - uVar8;
            if (iVar5 != 0) {
              memmove(pFVar7,pFVar7 + (longlong)(int)uVar14 * 0x10,(longlong)iVar5 << 4);
            }
            iVar5 = param_1->ArrayNum - uVar14;
            param_1->ArrayNum = iVar5;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&param_1->AllocatorInstance,iVar5,&param_1->ArrayMax);
          }
          uVar14 = 0;
          if ((int)local_res8 <= param_1->ArrayNum) {
            uVar14 = ~local_res8 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_res8 != 0) {
            pFVar7 = (param_1->AllocatorInstance).Data;
            iVar5 = param_1->ArrayNum - local_res8;
            if (iVar5 != 0) {
              memmove(pFVar7,pFVar7 + (longlong)(int)local_res8 * 0x10,(longlong)iVar5 << 4);
            }
            iVar5 = param_1->ArrayNum - local_res8;
            param_1->ArrayNum = iVar5;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&param_1->AllocatorInstance,iVar5,&param_1->ArrayMax);
          }
          if (iVar1 != iVar6) {
            return;
          }
          uVar14 = param_2->ArrayNum - uVar8;
          if (((int)(uVar14 | uVar8) < 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar14 != 0) {
            pFVar7 = (param_2->AllocatorInstance).Data + lVar15 * 4;
            iVar6 = (param_2->ArrayNum - uVar14) - uVar8;
            if (iVar6 != 0) {
              memmove(pFVar7,pFVar7 + (longlong)(int)uVar14 * 4,(longlong)iVar6 << 2);
            }
            iVar6 = param_2->ArrayNum - uVar14;
            param_2->ArrayNum = iVar6;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&param_2->AllocatorInstance,iVar6,&param_2->ArrayMax);
          }
          uVar14 = 0;
          if ((int)local_res8 <= param_2->ArrayNum) {
            uVar14 = ~local_res8 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_res8 == 0) {
            return;
          }
          pFVar7 = (param_2->AllocatorInstance).Data;
          iVar6 = param_2->ArrayNum - local_res8;
          if (iVar6 != 0) {
            memmove(pFVar7,pFVar7 + (longlong)(int)local_res8 * 4,(longlong)iVar6 << 2);
          }
          iVar6 = param_2->ArrayNum - local_res8;
          param_2->ArrayNum = iVar6;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&param_2->AllocatorInstance,iVar6,&param_2->ArrayMax);
          return;
        }
      }
      local_res18 = local_res18 + 1;
      iVar5 = param_1->ArrayNum;
      local_a8 = local_a8 + 1;
      local_b0 = local_b0 + 0x10;
      if (iVar5 <= (int)local_res18) {
        return;
      }
    }
  }
  return;
}

// Z_Construct_UClass_APaperCharacter_NoRegister @ 14ad0f800

UClass * __cdecl Z_Construct_UClass_APaperCharacter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperCharacter",
               &Z_Registration_Info_UClass_APaperCharacter.InnerSingleton,
               APaperCharacter::StaticRegisterNativesAPaperCharacter,0x680,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<APaperCharacter>,InternalVTableHelperCtorCaller<APaperCharacter>,
               local_res8,ACharacter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperCharacter.InnerSingleton;
}

// Z_Construct_UClass_APaperFlipbookActor_NoRegister @ 14ad0f8c0

UClass * __cdecl Z_Construct_UClass_APaperFlipbookActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperFlipbookActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperFlipbookActor",
               &Z_Registration_Info_UClass_APaperFlipbookActor.InnerSingleton,
               APaperFlipbookActor::StaticRegisterNativesAPaperFlipbookActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APaperFlipbookActor>,
               InternalVTableHelperCtorCaller<APaperFlipbookActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperFlipbookActor.InnerSingleton;
}

// Z_Construct_UClass_APaperGroupedSpriteActor_NoRegister @ 14ad0f980

UClass * __cdecl Z_Construct_UClass_APaperGroupedSpriteActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperGroupedSpriteActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperGroupedSpriteActor",
               &Z_Registration_Info_UClass_APaperGroupedSpriteActor.InnerSingleton,
               APaperGroupedSpriteActor::StaticRegisterNativesAPaperGroupedSpriteActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APaperGroupedSpriteActor>,
               InternalVTableHelperCtorCaller<APaperGroupedSpriteActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperGroupedSpriteActor.InnerSingleton;
}

// Z_Construct_UClass_APaperSpriteActor_NoRegister @ 14ad0fa40

UClass * __cdecl Z_Construct_UClass_APaperSpriteActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperSpriteActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteActor",
               &Z_Registration_Info_UClass_APaperSpriteActor.InnerSingleton,
               APaperSpriteActor::StaticRegisterNativesAPaperSpriteActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APaperSpriteActor>,
               InternalVTableHelperCtorCaller<APaperSpriteActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperSpriteActor.InnerSingleton;
}

// Z_Construct_UClass_APaperTerrainActor_NoRegister @ 14ad0fb00

UClass * __cdecl Z_Construct_UClass_APaperTerrainActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperTerrainActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainActor",
               &Z_Registration_Info_UClass_APaperTerrainActor.InnerSingleton,
               APaperTerrainActor::StaticRegisterNativesAPaperTerrainActor,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APaperTerrainActor>,
               InternalVTableHelperCtorCaller<APaperTerrainActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperTerrainActor.InnerSingleton;
}

// Z_Construct_UClass_APaperTileMapActor_NoRegister @ 14ad0fbc0

UClass * __cdecl Z_Construct_UClass_APaperTileMapActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperTileMapActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileMapActor",
               &Z_Registration_Info_UClass_APaperTileMapActor.InnerSingleton,
               APaperTileMapActor::StaticRegisterNativesAPaperTileMapActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APaperTileMapActor>,
               InternalVTableHelperCtorCaller<APaperTileMapActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperTileMapActor.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_NoRegister @ 14ad0fc80

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"MaterialExpressionSpriteTextureSampler",
               &Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.InnerSingleton,
               UMaterialExpressionSpriteTextureSampler::
               StaticRegisterNativesUMaterialExpressionSpriteTextureSampler,0x240,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSpriteTextureSampler>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSpriteTextureSampler>,local_res8,
               UMaterialExpressionTextureSampleParameter2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.InnerSingleton;
}

// Z_Construct_UClass_UPaperRuntimeSettings_NoRegister @ 14ad0fd40

UClass * __cdecl Z_Construct_UClass_UPaperRuntimeSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperRuntimeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperRuntimeSettings",
               &Z_Registration_Info_UClass_UPaperRuntimeSettings.InnerSingleton,
               UPaperRuntimeSettings::StaticRegisterNativesUPaperRuntimeSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperRuntimeSettings>,
               InternalVTableHelperCtorCaller<UPaperRuntimeSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperRuntimeSettings.InnerSingleton;
}

// Z_Construct_UClass_UPaperSpriteAtlas_NoRegister @ 14ad0fdf0

UClass * __cdecl Z_Construct_UClass_UPaperSpriteAtlas_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSpriteAtlas.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPaperSpriteAtlas::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteAtlas",
               &Z_Registration_Info_UClass_UPaperSpriteAtlas.InnerSingleton,
               UPaperSpriteAtlas::StaticRegisterNativesUPaperSpriteAtlas,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperSpriteAtlas>,
               InternalVTableHelperCtorCaller<UPaperSpriteAtlas>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSpriteAtlas.InnerSingleton;
}

// Z_Construct_UClass_UPaperSpriteBlueprintLibrary_NoRegister @ 14ad0fea0

UClass * __cdecl Z_Construct_UClass_UPaperSpriteBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteBlueprintLibrary",
               &Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.InnerSingleton,
               UPaperSpriteBlueprintLibrary::StaticRegisterNativesUPaperSpriteBlueprintLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperSpriteBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UPaperSpriteBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UTileMapBlueprintLibrary_NoRegister @ 14ad0ff60

UClass * __cdecl Z_Construct_UClass_UTileMapBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTileMapBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"TileMapBlueprintLibrary",
               &Z_Registration_Info_UClass_UTileMapBlueprintLibrary.InnerSingleton,
               UTileMapBlueprintLibrary::StaticRegisterNativesUTileMapBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTileMapBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTileMapBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTileMapBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding @ 14ad10020

UEnum * __cdecl Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding(void)

{
  if (Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.InnerSingleton,
               &Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.InnerSingleton;
}

// Z_Construct_UEnum_Paper2D_ESpritePivotMode @ 14ad10060

UEnum * __cdecl Z_Construct_UEnum_Paper2D_ESpritePivotMode(void)

{
  if (Z_Registration_Info_UEnum_ESpritePivotMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpritePivotMode.InnerSingleton,
               &Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpritePivotMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot @ 14ad100a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPaperSpriteAtlasSlot.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPaperSpriteAtlasSlot.InnerSingleton,
               &Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPaperSpriteAtlasSlot.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPaperSpriteAtlasSlot.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSpriteAssetInitParameters @ 14ad10120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpriteAssetInitParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpriteAssetInitParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpriteAssetInitParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpriteAssetInitParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpriteAssetInitParameters.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSpriteDrawCallRecord @ 14ad101a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpriteDrawCallRecord(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpriteDrawCallRecord.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpriteDrawCallRecord.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpriteDrawCallRecord_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpriteDrawCallRecord.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FSpriteDrawCallRecord.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_Paper2D @ 14ad14380

void __cdecl IMPLEMENT_MODULE_Paper2D(void)

{
  return;
}

// PositionCurve'' @ 150422b50

void __cdecl `dynamic_atexit_destructor_for_'FSpline::PositionCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::PositionCurve._0_8_;
  if (FSpline::PositionCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::PositionCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// RotationCurve'' @ 150422b70

void __cdecl `dynamic_atexit_destructor_for_'FSpline::RotationCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::RotationCurve._0_8_;
  if (FSpline::RotationCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::RotationCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// ScaleCurve'' @ 150422b90

void __cdecl `dynamic_atexit_destructor_for_'FSpline::ScaleCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::ScaleCurve._0_8_;
  if (FSpline::ScaleCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::ScaleCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawSpritesAsTwoSided'' @ 150422bb0

void __cdecl _dynamic_atexit_destructor_for__CVarDrawSpritesAsTwoSided__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawSpritesAsTwoSided);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawSpritesUsingPrebuiltVertexBuffers'' @ 150422bd0

void __cdecl _dynamic_atexit_destructor_for__CVarDrawSpritesUsingPrebuiltVertexBuffers__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDrawSpritesUsingPrebuiltVertexBuffers);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultMaterial'' @ 150422bf0

void __cdecl
`UPaperTileMap::UPaperTileMap'::__l2::_dynamic_atexit_destructor_for__DefaultMaterial__(void)

{
  DefaultMaterial._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&DefaultMaterial);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultMaterial'' @ 150422c10

void __cdecl
`UPaperTileMapComponent::UPaperTileMapComponent'::__l2::
_dynamic_atexit_destructor_for__DefaultMaterial__(void)

{
  DefaultMaterial._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&DefaultMaterial);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultMaterialRef'' @ 150422c30

void __cdecl
`UPaperTerrainComponent::UPaperTerrainComponent'::__l2::
_dynamic_atexit_destructor_for__DefaultMaterialRef__(void)

{
  DefaultMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&DefaultMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterPaperCustomVersion'' @ 150422c50

void __cdecl _dynamic_atexit_destructor_for__GRegisterPaperCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterPaperCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogPaper2D'' @ 150422c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPaper2D__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPaper2D);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 150422c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'MaskedMaterialRef'' @ 150422cb0

void __cdecl
`UPaperFlipbook::UPaperFlipbook'::__l2::_dynamic_atexit_destructor_for__MaskedMaterialRef__(void)

{
  MaskedMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&MaskedMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'MaskedMaterialRef'' @ 150422cd0

void __cdecl
`UPaperSprite::UPaperSprite'::__l2::_dynamic_atexit_destructor_for__MaskedMaterialRef__(void)

{
  MaskedMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&MaskedMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'OpaqueMaterialRef'' @ 150422cf0

void __cdecl
`UPaperSprite::UPaperSprite'::__l2::_dynamic_atexit_destructor_for__OpaqueMaterialRef__(void)

{
  OpaqueMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&OpaqueMaterialRef);
  return;
}

