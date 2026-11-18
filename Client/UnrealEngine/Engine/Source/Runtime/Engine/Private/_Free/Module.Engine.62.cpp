// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 525

// Null'' @ 14114ce70

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValue::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__);
  return;
}

// Null'' @ 14114ce90

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__);
  return;
}

// OnIsPostLoadThreadSafe'' @ 14114ceb0

void __cdecl `dynamic_initializer_for_'UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe__);
  return;
}

// OnIsReadyForAsyncPostLoad'' @ 14114ced0

void __cdecl `dynamic_initializer_for_'UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad__);
  return;
}

// OnPostLoad'' @ 14114cef0

void __cdecl `dynamic_initializer_for_'UAsyncLoadingTests_Shared::OnPostLoad__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UAsyncLoadingTests_Shared::OnPostLoad__);
  return;
}

// OnSerialize'' @ 14114cf10

void __cdecl `dynamic_initializer_for_'UAsyncLoadingTests_Shared::OnSerialize__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UAsyncLoadingTests_Shared::OnSerialize__);
  return;
}

// PreSaveEvent'' @ 14114cf30

void __cdecl `dynamic_initializer_for_'UTexture::PreSaveEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UTexture::PreSaveEvent__);
  return;
}

// TextureGroupStatFNames'' @ 14114cf50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FTextureResource::TextureGroupStatFNames__(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_World> FVar2;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WorldNormalMap> FVar3;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WorldSpecular> FVar4;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Character> FVar5;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_CharacterNormalMap> FVar6;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_CharacterSpecular> FVar7;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Weapon> FVar8;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WeaponNormalMap> FVar9;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WeaponSpecular> FVar10;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Vehicle> FVar11;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_VehicleNormalMap> FVar12;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_VehicleSpecular> FVar13;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Cinematic> FVar14;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Effects> FVar15;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_EffectsNotFiltered> FVar16;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Skybox> FVar17;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_UI> FVar18;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Lightmap> FVar19;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_RenderTarget> FVar20;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_MobileFlattened> FVar21;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ProcBuilding_Face> FVar22;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ProcBuilding_LightMap> FVar23;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Shadowmap> FVar24;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ColorLookupTable> FVar25;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Terrain_Heightmap> FVar26;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Terrain_Weightmap> FVar27;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Bokeh> FVar28;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_IESLightProfile> FVar29;
  FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Pixels2D> FVar30;
  TStatId TVar31;
  FName local_res8;
  
  FVar2 = StatPtr_STAT_TEXTUREGROUP_World;
  if (StatPtr_STAT_TEXTUREGROUP_World == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_World>)0x0)
  {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_World");
    FVar2 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_World>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_World,*pFVar1,
                       L"TEXTUREGROUP_World","STATGROUP_TextureGroup","STATCAT_Advanced",
                       L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0].ComparisonIndex.Value = (uint)*(undefined8 *)FVar2;
  FTextureResource::TextureGroupStatFNames[0].Number =
       (uint)((ulonglong)*(undefined8 *)FVar2 >> 0x20);
  FVar3 = StatPtr_STAT_TEXTUREGROUP_WorldNormalMap;
  if (StatPtr_STAT_TEXTUREGROUP_WorldNormalMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WorldNormalMap>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_WorldNormalMap");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WorldNormalMap>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_WorldNormalMap,
                       *pFVar1,L"TEXTUREGROUP_WorldNormalMap","STATGROUP_TextureGroup",
                       "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                       MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[1].ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  FTextureResource::TextureGroupStatFNames[1].Number =
       (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  FVar4 = StatPtr_STAT_TEXTUREGROUP_WorldSpecular;
  if (StatPtr_STAT_TEXTUREGROUP_WorldSpecular ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WorldSpecular>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_WorldSpecular");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WorldSpecular>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_WorldSpecular,*pFVar1
                       ,L"TEXTUREGROUP_WorldSpecular","STATGROUP_TextureGroup","STATCAT_Advanced",
                       L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[2].ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  FTextureResource::TextureGroupStatFNames[2].Number =
       (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_TEXTUREGROUP_Character;
  if (StatPtr_STAT_TEXTUREGROUP_Character ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Character>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Character");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Character>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Character,*pFVar1,
                       L"TEXTUREGROUP_Character","STATGROUP_TextureGroup","STATCAT_Advanced",
                       L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[3].ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  FTextureResource::TextureGroupStatFNames[3].Number =
       (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_TEXTUREGROUP_CharacterNormalMap;
  if (StatPtr_STAT_TEXTUREGROUP_CharacterNormalMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_CharacterNormalMap>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_CharacterNormalMap");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_CharacterNormalMap>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_CharacterNormalMap,
                       *pFVar1,L"TEXTUREGROUP_CharacterNormalMap","STATGROUP_TextureGroup",
                       "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                       MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[4].ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  FTextureResource::TextureGroupStatFNames[4].Number =
       (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  FVar7 = StatPtr_STAT_TEXTUREGROUP_CharacterSpecular;
  if (StatPtr_STAT_TEXTUREGROUP_CharacterSpecular ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_CharacterSpecular>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_CharacterSpecular");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_CharacterSpecular>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_CharacterSpecular,
                       *pFVar1,L"TEXTUREGROUP_CharacterSpecular","STATGROUP_TextureGroup",
                       "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                       MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[5].ComparisonIndex.Value = (uint)*(undefined8 *)FVar7;
  FTextureResource::TextureGroupStatFNames[5].Number =
       (uint)((ulonglong)*(undefined8 *)FVar7 >> 0x20);
  FVar8 = StatPtr_STAT_TEXTUREGROUP_Weapon;
  if (StatPtr_STAT_TEXTUREGROUP_Weapon == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Weapon>)0x0
     ) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Weapon");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Weapon>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Weapon,*pFVar1,
                       L"TEXTUREGROUP_Weapon","STATGROUP_TextureGroup","STATCAT_Advanced",
                       L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[6].ComparisonIndex.Value = (uint)*(undefined8 *)FVar8;
  FTextureResource::TextureGroupStatFNames[6].Number =
       (uint)((ulonglong)*(undefined8 *)FVar8 >> 0x20);
  FVar9 = StatPtr_STAT_TEXTUREGROUP_WeaponNormalMap;
  if (StatPtr_STAT_TEXTUREGROUP_WeaponNormalMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WeaponNormalMap>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_WeaponNormalMap");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WeaponNormalMap>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_WeaponNormalMap,
                       *pFVar1,L"TEXTUREGROUP_WeaponNormalMap","STATGROUP_TextureGroup",
                       "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                       MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[7].ComparisonIndex.Value = (uint)*(undefined8 *)FVar9;
  FTextureResource::TextureGroupStatFNames[7].Number =
       (uint)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
  FVar10 = StatPtr_STAT_TEXTUREGROUP_WeaponSpecular;
  if (StatPtr_STAT_TEXTUREGROUP_WeaponSpecular ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WeaponSpecular>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_WeaponSpecular");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WeaponSpecular>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_WeaponSpecular,
                        *pFVar1,L"TEXTUREGROUP_WeaponSpecular","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[8].ComparisonIndex.Value = (uint)*(undefined8 *)FVar10;
  FTextureResource::TextureGroupStatFNames[8].Number =
       (uint)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
  FVar11 = StatPtr_STAT_TEXTUREGROUP_Vehicle;
  if (StatPtr_STAT_TEXTUREGROUP_Vehicle ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Vehicle>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Vehicle");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Vehicle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Vehicle,*pFVar1,
                        L"TEXTUREGROUP_Vehicle","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[9].ComparisonIndex.Value = (uint)*(undefined8 *)FVar11;
  FTextureResource::TextureGroupStatFNames[9].Number =
       (uint)((ulonglong)*(undefined8 *)FVar11 >> 0x20);
  FVar12 = StatPtr_STAT_TEXTUREGROUP_VehicleNormalMap;
  if (StatPtr_STAT_TEXTUREGROUP_VehicleNormalMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_VehicleNormalMap>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_VehicleNormalMap");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_VehicleNormalMap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_VehicleNormalMap,
                        *pFVar1,L"TEXTUREGROUP_VehicleNormalMap","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[10].ComparisonIndex.Value = (uint)*(undefined8 *)FVar12;
  FTextureResource::TextureGroupStatFNames[10].Number =
       (uint)((ulonglong)*(undefined8 *)FVar12 >> 0x20);
  FVar13 = StatPtr_STAT_TEXTUREGROUP_VehicleSpecular;
  if (StatPtr_STAT_TEXTUREGROUP_VehicleSpecular ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_VehicleSpecular>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_VehicleSpecular");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_VehicleSpecular>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_VehicleSpecular,
                        *pFVar1,L"TEXTUREGROUP_VehicleSpecular","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0xb].ComparisonIndex.Value = (uint)*(undefined8 *)FVar13;
  FTextureResource::TextureGroupStatFNames[0xb].Number =
       (uint)((ulonglong)*(undefined8 *)FVar13 >> 0x20);
  FVar14 = StatPtr_STAT_TEXTUREGROUP_Cinematic;
  if (StatPtr_STAT_TEXTUREGROUP_Cinematic ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Cinematic>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Cinematic");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Cinematic>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Cinematic,*pFVar1,
                        L"TEXTUREGROUP_Cinematic","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0xc].ComparisonIndex.Value = (uint)*(undefined8 *)FVar14;
  FTextureResource::TextureGroupStatFNames[0xc].Number =
       (uint)((ulonglong)*(undefined8 *)FVar14 >> 0x20);
  FVar15 = StatPtr_STAT_TEXTUREGROUP_Effects;
  if (StatPtr_STAT_TEXTUREGROUP_Effects ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Effects>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Effects");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Effects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Effects,*pFVar1,
                        L"TEXTUREGROUP_Effects","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0xd].ComparisonIndex.Value = (uint)*(undefined8 *)FVar15;
  FTextureResource::TextureGroupStatFNames[0xd].Number =
       (uint)((ulonglong)*(undefined8 *)FVar15 >> 0x20);
  FVar16 = StatPtr_STAT_TEXTUREGROUP_EffectsNotFiltered;
  if (StatPtr_STAT_TEXTUREGROUP_EffectsNotFiltered ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_EffectsNotFiltered>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_EffectsNotFiltered");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_EffectsNotFiltered>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_EffectsNotFiltered,
                        *pFVar1,L"TEXTUREGROUP_EffectsNotFiltered","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0xe].ComparisonIndex.Value = (uint)*(undefined8 *)FVar16;
  FTextureResource::TextureGroupStatFNames[0xe].Number =
       (uint)((ulonglong)*(undefined8 *)FVar16 >> 0x20);
  FVar17 = StatPtr_STAT_TEXTUREGROUP_Skybox;
  if (StatPtr_STAT_TEXTUREGROUP_Skybox == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Skybox>)0x0
     ) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Skybox");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Skybox>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Skybox,*pFVar1,
                        L"TEXTUREGROUP_Skybox","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0xf].ComparisonIndex.Value = (uint)*(undefined8 *)FVar17;
  FTextureResource::TextureGroupStatFNames[0xf].Number =
       (uint)((ulonglong)*(undefined8 *)FVar17 >> 0x20);
  FVar18 = StatPtr_STAT_TEXTUREGROUP_UI;
  if (StatPtr_STAT_TEXTUREGROUP_UI == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_UI>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_UI");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_UI>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_UI,*pFVar1,
                        L"TEXTUREGROUP_UI","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x10].ComparisonIndex.Value = (uint)*(undefined8 *)FVar18
  ;
  FTextureResource::TextureGroupStatFNames[0x10].Number =
       (uint)((ulonglong)*(undefined8 *)FVar18 >> 0x20);
  FVar19 = StatPtr_STAT_TEXTUREGROUP_Lightmap;
  if (StatPtr_STAT_TEXTUREGROUP_Lightmap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Lightmap>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Lightmap");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Lightmap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Lightmap,*pFVar1,
                        L"TEXTUREGROUP_Lightmap","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x11].ComparisonIndex.Value = (uint)*(undefined8 *)FVar19
  ;
  FTextureResource::TextureGroupStatFNames[0x11].Number =
       (uint)((ulonglong)*(undefined8 *)FVar19 >> 0x20);
  FVar20 = StatPtr_STAT_TEXTUREGROUP_RenderTarget;
  if (StatPtr_STAT_TEXTUREGROUP_RenderTarget ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_RenderTarget>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_RenderTarget");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_RenderTarget>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_RenderTarget,*pFVar1
                        ,L"TEXTUREGROUP_RenderTarget","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x12].ComparisonIndex.Value = (uint)*(undefined8 *)FVar20
  ;
  FTextureResource::TextureGroupStatFNames[0x12].Number =
       (uint)((ulonglong)*(undefined8 *)FVar20 >> 0x20);
  FVar21 = StatPtr_STAT_TEXTUREGROUP_MobileFlattened;
  if (StatPtr_STAT_TEXTUREGROUP_MobileFlattened ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_MobileFlattened>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_MobileFlattened");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_MobileFlattened>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_MobileFlattened,
                        *pFVar1,L"TEXTUREGROUP_MobileFlattened","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x13].ComparisonIndex.Value = (uint)*(undefined8 *)FVar21
  ;
  FTextureResource::TextureGroupStatFNames[0x13].Number =
       (uint)((ulonglong)*(undefined8 *)FVar21 >> 0x20);
  FVar22 = StatPtr_STAT_TEXTUREGROUP_ProcBuilding_Face;
  if (StatPtr_STAT_TEXTUREGROUP_ProcBuilding_Face ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ProcBuilding_Face>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_ProcBuilding_Face");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ProcBuilding_Face>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_ProcBuilding_Face,
                        *pFVar1,L"TEXTUREGROUP_ProcBuilding_Face","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x14].ComparisonIndex.Value = (uint)*(undefined8 *)FVar22
  ;
  FTextureResource::TextureGroupStatFNames[0x14].Number =
       (uint)((ulonglong)*(undefined8 *)FVar22 >> 0x20);
  FVar23 = StatPtr_STAT_TEXTUREGROUP_ProcBuilding_LightMap;
  if (StatPtr_STAT_TEXTUREGROUP_ProcBuilding_LightMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ProcBuilding_LightMap>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_ProcBuilding_LightMap");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ProcBuilding_LightMap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_TEXTUREGROUP_ProcBuilding_LightMap,*pFVar1,
                        L"TEXTUREGROUP_ProcBuilding_LightMap","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x15].ComparisonIndex.Value = (uint)*(undefined8 *)FVar23
  ;
  FTextureResource::TextureGroupStatFNames[0x15].Number =
       (uint)((ulonglong)*(undefined8 *)FVar23 >> 0x20);
  FVar24 = StatPtr_STAT_TEXTUREGROUP_Shadowmap;
  if (StatPtr_STAT_TEXTUREGROUP_Shadowmap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Shadowmap>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Shadowmap");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Shadowmap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Shadowmap,*pFVar1,
                        L"TEXTUREGROUP_Shadowmap","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x16].ComparisonIndex.Value = (uint)*(undefined8 *)FVar24
  ;
  FTextureResource::TextureGroupStatFNames[0x16].Number =
       (uint)((ulonglong)*(undefined8 *)FVar24 >> 0x20);
  FVar25 = StatPtr_STAT_TEXTUREGROUP_ColorLookupTable;
  if (StatPtr_STAT_TEXTUREGROUP_ColorLookupTable ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ColorLookupTable>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_ColorLookupTable");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ColorLookupTable>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_ColorLookupTable,
                        *pFVar1,L"TEXTUREGROUP_ColorLookupTable","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x17].ComparisonIndex.Value = (uint)*(undefined8 *)FVar25
  ;
  FTextureResource::TextureGroupStatFNames[0x17].Number =
       (uint)((ulonglong)*(undefined8 *)FVar25 >> 0x20);
  FVar26 = StatPtr_STAT_TEXTUREGROUP_Terrain_Heightmap;
  if (StatPtr_STAT_TEXTUREGROUP_Terrain_Heightmap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Terrain_Heightmap>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Terrain_Heightmap");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Terrain_Heightmap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Terrain_Heightmap,
                        *pFVar1,L"TEXTUREGROUP_Terrain_Heightmap","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x18].ComparisonIndex.Value = (uint)*(undefined8 *)FVar26
  ;
  FTextureResource::TextureGroupStatFNames[0x18].Number =
       (uint)((ulonglong)*(undefined8 *)FVar26 >> 0x20);
  FVar27 = StatPtr_STAT_TEXTUREGROUP_Terrain_Weightmap;
  if (StatPtr_STAT_TEXTUREGROUP_Terrain_Weightmap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Terrain_Weightmap>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Terrain_Weightmap");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Terrain_Weightmap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Terrain_Weightmap,
                        *pFVar1,L"TEXTUREGROUP_Terrain_Weightmap","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x19].ComparisonIndex.Value = (uint)*(undefined8 *)FVar27
  ;
  FTextureResource::TextureGroupStatFNames[0x19].Number =
       (uint)((ulonglong)*(undefined8 *)FVar27 >> 0x20);
  FVar28 = StatPtr_STAT_TEXTUREGROUP_Bokeh;
  if (StatPtr_STAT_TEXTUREGROUP_Bokeh == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Bokeh>)0x0)
  {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Bokeh");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Bokeh>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Bokeh,*pFVar1,
                        L"TEXTUREGROUP_Bokeh","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x1a].ComparisonIndex.Value = (uint)*(undefined8 *)FVar28
  ;
  FTextureResource::TextureGroupStatFNames[0x1a].Number =
       (uint)((ulonglong)*(undefined8 *)FVar28 >> 0x20);
  FVar29 = StatPtr_STAT_TEXTUREGROUP_IESLightProfile;
  if (StatPtr_STAT_TEXTUREGROUP_IESLightProfile ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_IESLightProfile>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_IESLightProfile");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_IESLightProfile>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_IESLightProfile,
                        *pFVar1,L"TEXTUREGROUP_IESLightProfile","STATGROUP_TextureGroup",
                        "STATCAT_Advanced",L"Texture Group",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x1b].ComparisonIndex.Value = (uint)*(undefined8 *)FVar29
  ;
  FTextureResource::TextureGroupStatFNames[0x1b].Number =
       (uint)((ulonglong)*(undefined8 *)FVar29 >> 0x20);
  FVar30 = StatPtr_STAT_TEXTUREGROUP_Pixels2D;
  if (StatPtr_STAT_TEXTUREGROUP_Pixels2D ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Pixels2D>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_TEXTUREGROUP_Pixels2D");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Pixels2D>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Pixels2D,*pFVar1,
                        L"TEXTUREGROUP_Pixels2D","STATGROUP_TextureGroup","STATCAT_Advanced",
                        L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  FTextureResource::TextureGroupStatFNames[0x1c].ComparisonIndex.Value = (uint)*(undefined8 *)FVar30
  ;
  FTextureResource::TextureGroupStatFNames[0x1c].Number =
       (uint)((ulonglong)*(undefined8 *)FVar30 >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_HierarchicalLOD,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_HierarchicalLOD,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_HierarchicalLOD);
  FTextureResource::TextureGroupStatFNames[0x1d].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x1d].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Impostor,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Impostor,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Impostor);
  FTextureResource::TextureGroupStatFNames[0x1e].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x1e].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_ImpostorNormalDepth,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_ImpostorNormalDepth,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_ImpostorNormalDepth);
  FTextureResource::TextureGroupStatFNames[0x1f].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x1f].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_8BitData,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_8BitData,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_8BitData);
  FTextureResource::TextureGroupStatFNames[0x20].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x20].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_16BitData,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_16BitData,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_16BitData);
  FTextureResource::TextureGroupStatFNames[0x21].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x21].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project01,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project01,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project01);
  FTextureResource::TextureGroupStatFNames[0x22].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x22].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project02,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project02,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project02);
  FTextureResource::TextureGroupStatFNames[0x23].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x23].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project03,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project03,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project03);
  FTextureResource::TextureGroupStatFNames[0x24].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x24].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project04,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project04,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project04);
  FTextureResource::TextureGroupStatFNames[0x25].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x25].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project05,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project05,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project05);
  FTextureResource::TextureGroupStatFNames[0x26].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x26].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project06,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project06,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project06);
  FTextureResource::TextureGroupStatFNames[0x27].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x27].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project07,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project07,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project07);
  FTextureResource::TextureGroupStatFNames[0x28].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x28].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project08,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project08,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project08);
  FTextureResource::TextureGroupStatFNames[0x29].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x29].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project09,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project09,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project09);
  FTextureResource::TextureGroupStatFNames[0x2a].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x2a].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project10,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project10,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project10);
  FTextureResource::TextureGroupStatFNames[0x2b].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x2b].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project11,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project11,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project11);
  FTextureResource::TextureGroupStatFNames[0x2c].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x2c].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project12,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project12,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project12);
  FTextureResource::TextureGroupStatFNames[0x2d].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x2d].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project13,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project13,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project13);
  FTextureResource::TextureGroupStatFNames[0x2e].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x2e].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project14,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project14,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project14);
  FTextureResource::TextureGroupStatFNames[0x2f].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x2f].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project15,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project15,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project15);
  FTextureResource::TextureGroupStatFNames[0x30].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x30].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project16,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project16,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project16);
  FTextureResource::TextureGroupStatFNames[0x31].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x31].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project17,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project17,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project17);
  FTextureResource::TextureGroupStatFNames[0x32].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x32].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project18,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project18,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project18);
  FTextureResource::TextureGroupStatFNames[0x33].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x33].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project19,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project19,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project19);
  FTextureResource::TextureGroupStatFNames[0x34].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x34].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project20,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project20,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project20);
  FTextureResource::TextureGroupStatFNames[0x35].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x35].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project21,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project21,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project21);
  FTextureResource::TextureGroupStatFNames[0x36].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x36].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project22,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project22,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project22);
  FTextureResource::TextureGroupStatFNames[0x37].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x37].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project23,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project23,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project23);
  FTextureResource::TextureGroupStatFNames[0x38].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x38].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project24,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project24,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project24);
  FTextureResource::TextureGroupStatFNames[0x39].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x39].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project25,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project25,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project25);
  FTextureResource::TextureGroupStatFNames[0x3a].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x3a].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project26,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project26,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project26);
  FTextureResource::TextureGroupStatFNames[0x3b].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x3b].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project27,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project27,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project27);
  FTextureResource::TextureGroupStatFNames[0x3c].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x3c].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project28,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project28,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project28);
  FTextureResource::TextureGroupStatFNames[0x3d].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x3d].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project29,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project29,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project29);
  FTextureResource::TextureGroupStatFNames[0x3e].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x3e].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project30,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project30,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project30);
  FTextureResource::TextureGroupStatFNames[0x3f].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x3f].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project31,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project31,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project31);
  FTextureResource::TextureGroupStatFNames[0x40].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x40].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project32,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project32,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project32);
  FTextureResource::TextureGroupStatFNames[0x41].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x41].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project33,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project33,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project33);
  FTextureResource::TextureGroupStatFNames[0x42].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x42].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project34,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project34,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project34);
  FTextureResource::TextureGroupStatFNames[0x43].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x43].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project35,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project35,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project35);
  FTextureResource::TextureGroupStatFNames[0x44].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x44].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project36,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project36,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project36);
  FTextureResource::TextureGroupStatFNames[0x45].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x45].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project37,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project37,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project37);
  FTextureResource::TextureGroupStatFNames[0x46].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x46].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project38,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project38,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project38);
  FTextureResource::TextureGroupStatFNames[0x47].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x47].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project39,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project39,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project39);
  FTextureResource::TextureGroupStatFNames[0x48].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x48].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project40,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project40,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project40);
  FTextureResource::TextureGroupStatFNames[0x49].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x49].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project41,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project41,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project41);
  FTextureResource::TextureGroupStatFNames[0x4a].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x4a].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project42,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project42,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project42);
  FTextureResource::TextureGroupStatFNames[0x4b].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x4b].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project43,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project43,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project43);
  FTextureResource::TextureGroupStatFNames[0x4c].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x4c].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project44,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project44,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project44);
  FTextureResource::TextureGroupStatFNames[0x4d].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x4d].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project45,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project45,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project45);
  FTextureResource::TextureGroupStatFNames[0x4e].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x4e].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project46,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project46,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project46);
  FTextureResource::TextureGroupStatFNames[0x4f].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x4f].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project47,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project47,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project47);
  FTextureResource::TextureGroupStatFNames[0x50].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x50].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project48,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_TEXTUREGROUP_Project48,1> *)
                      &StatPtr_STAT_TEXTUREGROUP_Project48);
  FTextureResource::TextureGroupStatFNames[0x51].ComparisonIndex.Value =
       (uint)*(undefined8 *)(TVar31.StatIdPtr)->Name;
  FTextureResource::TextureGroupStatFNames[0x51].Number =
       (uint)((ulonglong)*(undefined8 *)(TVar31.StatIdPtr)->Name >> 0x20);
  return;
}

// `dynamic_initializer_for_'CVarFlushRHIThreadOnSTreamingTextureLocks'' @ 14114e590

void __cdecl _dynamic_initializer_for__CVarFlushRHIThreadOnSTreamingTextureLocks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFlushRHIThreadOnSTreamingTextureLocks,L"r.FlushRHIThreadOnSTreamingTextureLocks",
             local_res8,
             L"If set to 0, we won\'t do any flushes for streaming textures. This is safe because the texture streamer deals with these hazards explicitly."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarFlushRHIThreadOnSTreamingTextureLocks__);
  return;
}

// `dynamic_initializer_for_'CVarMobileMaxLoadedMips'' @ 14114e5e0

void __cdecl _dynamic_initializer_for__CVarMobileMaxLoadedMips__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0xf;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileMaxLoadedMips,L"r.MobileMaxLoadedMips",local_res8,
             L"Maximum number of loaded mips for nonstreaming mobile platforms.\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMobileMaxLoadedMips__);
  return;
}

// `dynamic_initializer_for_'CVarMobileReduceLoadedMips'' @ 14114e630

void __cdecl _dynamic_initializer_for__CVarMobileReduceLoadedMips__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileReduceLoadedMips,L"r.MobileReduceLoadedMips",local_res8,
             L"Reduce loaded texture mipmaps for nonstreaming mobile platforms.\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMobileReduceLoadedMips__);
  return;
}

// `dynamic_initializer_for_'CVarMobileVirtualTextures'' @ 14114e680

void __cdecl _dynamic_initializer_for__CVarMobileVirtualTextures__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileVirtualTextures,L"r.Mobile.VirtualTextures",local_res8,
             L"Enable virtual texture suppport on mobile platforms.\nAlso requires r.VirtualTextures enabled."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileVirtualTextures__);
  return;
}

// `dynamic_initializer_for_'CVarSetMipMapLODBias'' @ 14114e6d0

void __cdecl _dynamic_initializer_for__CVarSetMipMapLODBias__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSetMipMapLODBias,L"r.MipMapLODBias",local_res8,
             L"Apply additional mip map bias for all 2D textures, range of -15.0 to 15.0",0x60);
  atexit(_dynamic_atexit_destructor_for__CVarSetMipMapLODBias__);
  return;
}

// `dynamic_initializer_for_'CVarSkipInvalidDXTDimensions'' @ 14114e720

void __cdecl _dynamic_initializer_for__CVarSkipInvalidDXTDimensions__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipInvalidDXTDimensions,L"r.SkipInvalidDXTDimensions",&GSkipInvalidDXTDimensions,
             L"If set will skip over creating DXT textures that are smaller than 4x4 or other invalid dimensions."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipInvalidDXTDimensions__);
  return;
}

// `dynamic_initializer_for_'CVarUseGenericStreamingPath'' @ 14114e770

void __cdecl _dynamic_initializer_for__CVarUseGenericStreamingPath__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseGenericStreamingPath,L"r.Streaming.UseGenericStreamingPath",
             &GUseGenericStreamingPath,
             L"Control when to use the mip data provider implementation: (default=0)\n0 to use it when there is a custom asset override.\n1 to always use it.\n2 to never use it."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseGenericStreamingPath__);
  return;
}

// `dynamic_initializer_for_'CVarVirtualTextures'' @ 14114e7c0

void __cdecl _dynamic_initializer_for__CVarVirtualTextures__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVirtualTextures,L"r.VirtualTextures",local_res8,L"Enable virtual texture support",
             0x24);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualTextures__);
  return;
}

// `dynamic_initializer_for_'CVarVirtualTexturesAutoImport'' @ 14114e810

void __cdecl _dynamic_initializer_for__CVarVirtualTexturesAutoImport__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVirtualTexturesAutoImport,L"r.VT.EnableAutoImport",local_res8,
             L"Import new textures as streaming virtual textures",0);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualTexturesAutoImport__);
  return;
}

// `dynamic_initializer_for_'CVarVirtualTexturesMenuRestricted'' @ 14114e860

void __cdecl _dynamic_initializer_for__CVarVirtualTexturesMenuRestricted__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVirtualTexturesMenuRestricted,L"r.VT.MenuRestricted",local_res8,
             L"Restrict virtual texture menu options",0);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualTexturesMenuRestricted__);
  return;
}

// `dynamic_initializer_for_'FAsyncLoadingTestInvalidateExportDuringPreloadAutomationTestInstance'' @ 14114e8b0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAsyncLoadingTestInvalidateExportDuringPreloadAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAsyncLoadingTestInvalidateExportDuringPreload");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FAsyncLoadingTestInvalidateExportDuringPreloadAutomationTestInstance,&local_18,false);
  FAsyncLoadingTestInvalidateExportDuringPreloadAutomationTestInstance._0_8_ =
       &___7FAsyncLoadingTestInvalidateExportDuringPreload__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FAsyncLoadingTestInvalidateExportDuringPreloadAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FCommonCommandsExecCommandTestAutomationTestInstance'' @ 14114e910

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCommonCommandsExecCommandTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCommonCommandsExecCommandTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCommonCommandsExecCommandTestAutomationTestInstance,&local_18,
             false);
  FCommonCommandsExecCommandTestAutomationTestInstance._0_8_ =
       &___7FCommonCommandsExecCommandTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCommonCommandsExecCommandTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FConsoleCommandExecCommandTestAutomationTestInstance'' @ 14114e970

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FConsoleCommandExecCommandTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FConsoleCommandExecCommandTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FConsoleCommandExecCommandTestAutomationTestInstance,&local_18,
             false);
  FConsoleCommandExecCommandTestAutomationTestInstance._0_8_ =
       &___7FConsoleCommandExecCommandTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FConsoleCommandExecCommandTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FConvertFromType_SoftToHardAutomationTestInstance'' @ 14114e9d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FConvertFromType_SoftToHardAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FConvertFromType_SoftToHard");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FConvertFromType_SoftToHardAutomationTestInstance,&local_18,
             false);
  FConvertFromType_SoftToHardAutomationTestInstance._0_8_ = &___7FConvertFromType_SoftToHard__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FConvertFromType_SoftToHardAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FDeferredExecCommandTestAutomationTestInstance'' @ 14114ea30

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FDeferredExecCommandTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FDeferredExecCommandTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FDeferredExecCommandTestAutomationTestInstance,&local_18,false)
  ;
  FDeferredExecCommandTestAutomationTestInstance._0_8_ = &___7FDeferredExecCommandTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FDeferredExecCommandTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FEditNamesTestAutomationTestInstance'' @ 14114ea90

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_initializer_for__FEditNamesTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditNamesTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FEditNamesTestAutomationTestInstance,&local_18,false);
  FEditNamesTestAutomationTestInstance._0_8_ = &___7FEditNamesTest_TransactionDiffingTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditNamesTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FEditNonPropertyDataTestAutomationTestInstance'' @ 14114eaf0

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_initializer_for__FEditNonPropertyDataTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditNonPropertyDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FEditNonPropertyDataTestAutomationTestInstance,&local_18,false)
  ;
  FEditNonPropertyDataTestAutomationTestInstance._0_8_ =
       &___7FEditNonPropertyDataTest_TransactionDiffingTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditNonPropertyDataTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FEditObjectsTestAutomationTestInstance'' @ 14114eb50

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_initializer_for__FEditObjectsTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditObjectsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FEditObjectsTestAutomationTestInstance,&local_18,false);
  FEditObjectsTestAutomationTestInstance._0_8_ = &___7FEditObjectsTest_TransactionDiffingTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditObjectsTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FEditPropertyDataTestAutomationTestInstance'' @ 14114ebb0

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_initializer_for__FEditPropertyDataTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditPropertyDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FEditPropertyDataTestAutomationTestInstance,&local_18,false);
  FEditPropertyDataTestAutomationTestInstance._0_8_ =
       &___7FEditPropertyDataTest_TransactionDiffingTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditPropertyDataTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FEditSoftObjectsTestAutomationTestInstance'' @ 14114ec10

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_initializer_for__FEditSoftObjectsTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditSoftObjectsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FEditSoftObjectsTestAutomationTestInstance,&local_18,false);
  FEditSoftObjectsTestAutomationTestInstance._0_8_ =
       &___7FEditSoftObjectsTest_TransactionDiffingTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditSoftObjectsTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FExecCommandTargetVariantsTestAutomationTestInstance'' @ 14114ec70

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FExecCommandTargetVariantsTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FExecCommandTargetVariantsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FExecCommandTargetVariantsTestAutomationTestInstance,&local_18,
             false);
  FExecCommandTargetVariantsTestAutomationTestInstance._0_8_ =
       &___7FExecCommandTargetVariantsTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FExecCommandTargetVariantsTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FIntSerializationTestAutomationTestInstance'' @ 14114ecd0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FIntSerializationTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIntSerializationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FIntSerializationTestAutomationTestInstance,&local_18,false);
  FIntSerializationTestAutomationTestInstance._0_8_ = &___7FIntSerializationTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FIntSerializationTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FLoadingTests_ExternalReadDependenciesAutomationTestInstance'' @ 14114ed30

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_ExternalReadDependenciesAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_ExternalReadDependencies");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_ExternalReadDependenciesAutomationTestInstance,
             &local_18,false);
  FLoadingTests_ExternalReadDependenciesAutomationTestInstance._0_8_ =
       &___7FLoadingTests_ExternalReadDependencies__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_ExternalReadDependenciesAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_Flush_InvalidFromWorkerAutomationTestInstance'' @ 14114ed90

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_Flush_InvalidFromWorkerAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_Flush_InvalidFromWorker");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_Flush_InvalidFromWorkerAutomationTestInstance,
             &local_18,false);
  FLoadingTests_Flush_InvalidFromWorkerAutomationTestInstance._0_8_ =
       &___7FLoadingTests_Flush_InvalidFromWorker__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_Flush_InvalidFromWorkerAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_Flush_ValidFromCallbackAutomationTestInstance'' @ 14114edf0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_Flush_ValidFromCallbackAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_Flush_ValidFromCallback");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_Flush_ValidFromCallbackAutomationTestInstance,
             &local_18,false);
  FLoadingTests_Flush_ValidFromCallbackAutomationTestInstance._0_8_ =
       &___7FLoadingTests_Flush_ValidFromCallback__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_Flush_ValidFromCallbackAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_IsReadyForAsyncPostLoadAutomationTestInstance'' @ 14114ee50

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_IsReadyForAsyncPostLoadAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_IsReadyForAsyncPostLoad");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_IsReadyForAsyncPostLoadAutomationTestInstance,
             &local_18,false);
  FLoadingTests_IsReadyForAsyncPostLoadAutomationTestInstance._0_8_ =
       &___7FLoadingTests_IsReadyForAsyncPostLoad__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_IsReadyForAsyncPostLoadAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_IsReadyForAsyncPostLoad_FlushAutomationTestInstance'' @ 14114eeb0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_IsReadyForAsyncPostLoad_FlushAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_IsReadyForAsyncPostLoad_Flush");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_IsReadyForAsyncPostLoad_FlushAutomationTestInstance,&local_18,false);
  FLoadingTests_IsReadyForAsyncPostLoad_FlushAutomationTestInstance._0_8_ =
       &___7FLoadingTests_IsReadyForAsyncPostLoad_Flush__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_IsReadyForAsyncPostLoad_FlushAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoadAutomationTestInstance'' @ 14114ef10

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoadAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoadAutomationTestInstance,
             &local_18,false);
  FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoadAutomationTestInstance._0_8_ =
       &___7FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoadAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_RecursiveLoads_FromDeferredPostLoadAutomationTestInstance'' @ 14114ef70

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_RecursiveLoads_FromDeferredPostLoadAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_RecursiveLoads_FromDeferredPostLoad");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromDeferredPostLoadAutomationTestInstance,&local_18,
             false);
  FLoadingTests_RecursiveLoads_FromDeferredPostLoadAutomationTestInstance._0_8_ =
       &___7FLoadingTests_RecursiveLoads_FromDeferredPostLoad__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromDeferredPostLoadAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafeAutomationTestInstance'' @ 14114efd0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafeAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafeAutomationTestInstance,&local_18,
             false);
  FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafeAutomationTestInstance._0_8_ =
       &___7FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafeAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafeAutomationTestInstance'' @ 14114f030

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafeAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafe");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafeAutomationTestInstance,&local_18
             ,false);
  FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafeAutomationTestInstance._0_8_ =
       &___7FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafe__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafeAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_RecursiveLoads_FromSerializeAutomationTestInstance'' @ 14114f090

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_RecursiveLoads_FromSerializeAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_RecursiveLoads_FromSerialize");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromSerializeAutomationTestInstance,&local_18,false);
  FLoadingTests_RecursiveLoads_FromSerializeAutomationTestInstance._0_8_ =
       &___7FLoadingTests_RecursiveLoads_FromSerialize__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromSerializeAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallbackAutomationTestInstance'' @ 14114f0f0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallbackAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallbackAutomationTestInstance,
             &local_18,false);
  FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallbackAutomationTestInstance._0_8_ =
       &___7FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallbackAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoadAutomationTestInstance'' @ 14114f150

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoadAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoadAutomationTestInstance,&local_18,
             false);
  FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoadAutomationTestInstance._0_8_ =
       &___7FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoadAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_RecursiveLoads_FullFlushFrom_SerializeAutomationTestInstance'' @ 14114f1b0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_RecursiveLoads_FullFlushFrom_SerializeAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FullFlushFrom_SerializeAutomationTestInstance,&local_18,
             false);
  FLoadingTests_RecursiveLoads_FullFlushFrom_SerializeAutomationTestInstance._0_8_ =
       &___7FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FullFlushFrom_SerializeAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemoryAutomationTestInstance'' @ 14114f210

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemoryAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemory");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemoryAutomationTestInstance,
             &local_18,false);
  FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemoryAutomationTestInstance._0_8_ =
       &___7FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemory__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemoryAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskAutomationTestInstance'' @ 14114f270

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskAutomationTestInstance,
             &local_18,false);
  FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskAutomationTestInstance._0_8_ =
       &___7FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReloadAutomationTestInstance'' @ 14114f2d0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReloadAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReload");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReloadAutomationTestInstance,
             &local_18,false);
  FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReloadAutomationTestInstance._0_8_ =
       &___7FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReload__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReloadAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLoadingTests_Timeouts_PostloadAutomationTestInstance'' @ 14114f330

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLoadingTests_Timeouts_PostloadAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLoadingTests_Timeouts_Postload");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_Timeouts_PostloadAutomationTestInstance,&local_18
             ,false);
  FLoadingTests_Timeouts_PostloadAutomationTestInstance._0_8_ =
       &___7FLoadingTests_Timeouts_Postload__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FLoadingTests_Timeouts_PostloadAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMultiplayer4PlayerTestAutomationTestInstance'' @ 14114f390

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FMultiplayer4PlayerTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMultiplayer4PlayerTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMultiplayer4PlayerTestAutomationTestInstance,&local_18,false);
  FMultiplayer4PlayerTestAutomationTestInstance._0_8_ = &___7FMultiplayer4PlayerTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMultiplayer4PlayerTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPropertyPairsMapTestsAutomationTestInstance'' @ 14114f3f0

void __cdecl
PropertyPairsMapTests::`anonymous_namespace'::
_dynamic_initializer_for__FPropertyPairsMapTestsAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPropertyPairsMapTests");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPropertyPairsMapTestsAutomationTestInstance,&local_18,false);
  FPropertyPairsMapTestsAutomationTestInstance._0_8_ =
       &___7FPropertyPairsMapTests_PropertyPairsMapTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPropertyPairsMapTestsAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FReferenceClusterTestAutomationTestInstance'' @ 14114f450

void __cdecl
ReferenceClusterTests::`anonymous_namespace'::
_dynamic_initializer_for__FReferenceClusterTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FReferenceClusterTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FReferenceClusterTestAutomationTestInstance,&local_18,false);
  FReferenceClusterTestAutomationTestInstance._0_8_ =
       &___7FReferenceClusterTest_ReferenceClusterTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FReferenceClusterTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FRunExternalToolTestAutomationTestInstance'' @ 14114f4b0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FRunExternalToolTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRunExternalToolTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRunExternalToolTestAutomationTestInstance,&local_18,true);
  FRunExternalToolTestAutomationTestInstance._0_8_ = &___7FRunExternalToolTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRunExternalToolTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FSelfRegisteringExecCommandTestAutomationTestInstance'' @ 14114f510

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FSelfRegisteringExecCommandTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FSelfRegisteringExecCommandTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FSelfRegisteringExecCommandTestAutomationTestInstance,&local_18
             ,false);
  FSelfRegisteringExecCommandTestAutomationTestInstance._0_8_ =
       &___7FSelfRegisteringExecCommandTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FSelfRegisteringExecCommandTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextImportStructPropertyTestInstance'' @ 14114f570

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTextImportStructPropertyTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextImportStructPropertyTest");
  FTextImportStructPropertyTest::FTextImportStructPropertyTest
            (&FTextImportStructPropertyTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTextImportStructPropertyTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextPropertyTestAutomationTestInstance'' @ 14114f5c0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTextPropertyTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextPropertyTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTextPropertyTestAutomationTestInstance,&local_18,false);
  FTextPropertyTestAutomationTestInstance._0_8_ = &___7FTextPropertyTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTextPropertyTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTexture2DTestTransientAutomationTestInstance'' @ 14114f620

void __cdecl
Texture2DTest::`anonymous_namespace'::
_dynamic_initializer_for__FTexture2DTestTransientAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTexture2DTestTransient");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTexture2DTestTransientAutomationTestInstance,&local_18,false);
  FTexture2DTestTransientAutomationTestInstance._0_8_ =
       &___7FTexture2DTestTransient_Texture2DTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTexture2DTestTransientAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FThreadSafeAsyncLoadingTestAutomationTestInstance'' @ 14114f680

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FThreadSafeAsyncLoadingTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FThreadSafeAsyncLoadingTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FThreadSafeAsyncLoadingTestAutomationTestInstance,&local_18,
             false);
  FThreadSafeAsyncLoadingTestAutomationTestInstance._0_8_ = &___7FThreadSafeAsyncLoadingTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FThreadSafeAsyncLoadingTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FUnattendedLoadingTestAutomationTestInstance'' @ 14114f6e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FUnattendedLoadingTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUnattendedLoadingTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FUnattendedLoadingTestAutomationTestInstance,&local_18,false);
  FUnattendedLoadingTestAutomationTestInstance._0_8_ = &___7FUnattendedLoadingTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUnattendedLoadingTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FWorldPartitionEditorSoftObjectPathTestAutomationTestInstance'' @ 14114f740

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_initializer_for__FWorldPartitionEditorSoftObjectPathTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FWorldPartitionEditorSoftObjectPathTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionEditorSoftObjectPathTestAutomationTestInstance,
             &local_18,false);
  FWorldPartitionEditorSoftObjectPathTestAutomationTestInstance._0_8_ =
       &___7FWorldPartitionEditorSoftObjectPathTest_WorldPartitionTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FWorldPartitionEditorSoftObjectPathTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FWorldPartitionPathConversionTestAutomationTestInstance'' @ 14114f7a0

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_initializer_for__FWorldPartitionPathConversionTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FWorldPartitionPathConversionTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionPathConversionTestAutomationTestInstance,
             &local_18,false);
  FWorldPartitionPathConversionTestAutomationTestInstance._0_8_ =
       &___7FWorldPartitionPathConversionTest_WorldPartitionTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FWorldPartitionPathConversionTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FWorldPartitionSoftRefTestAutomationTestInstance'' @ 14114f800

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_initializer_for__FWorldPartitionSoftRefTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FWorldPartitionSoftRefTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionSoftRefTestAutomationTestInstance,&local_18,
             false);
  FWorldPartitionSoftRefTestAutomationTestInstance._0_8_ =
       &___7FWorldPartitionSoftRefTest_WorldPartitionTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FWorldPartitionSoftRefTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FWorldPartitionStaticSpatialIndexTestAutomationTestInstance'' @ 14114f860

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_initializer_for__FWorldPartitionStaticSpatialIndexTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FWorldPartitionStaticSpatialIndexTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionStaticSpatialIndexTestAutomationTestInstance,
             &local_18,false);
  FWorldPartitionStaticSpatialIndexTestAutomationTestInstance._0_8_ =
       &___7FWorldPartitionStaticSpatialIndexTest_WorldPartitionTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FWorldPartitionStaticSpatialIndexTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FWorldPartitionStreamingGenerationSimulationTestAutomationTestInstance'' @ 14114f8c0

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_initializer_for__FWorldPartitionStreamingGenerationSimulationTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FWorldPartitionStreamingGenerationSimulationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FWorldPartitionStreamingGenerationSimulationTestAutomationTestInstance,&local_18,false
            );
  FWorldPartitionStreamingGenerationSimulationTestAutomationTestInstance._0_8_ =
       &___7FWorldPartitionStreamingGenerationSimulationTest_WorldPartitionTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FWorldPartitionStreamingGenerationSimulationTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FWorldPartitionStreamingGenerationTestAutomationTestInstance'' @ 14114f920

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_initializer_for__FWorldPartitionStreamingGenerationTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FWorldPartitionStreamingGenerationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionStreamingGenerationTestAutomationTestInstance,
             &local_18,false);
  FWorldPartitionStreamingGenerationTestAutomationTestInstance._0_8_ =
       &___7FWorldPartitionStreamingGenerationTest_WorldPartitionTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FWorldPartitionStreamingGenerationTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'KismetArray_SortIntegerType_TestsInstance'' @ 14114f980

void __cdecl
UE::Kismet::Test::`anonymous_namespace'::
_dynamic_initializer_for__KismetArray_SortIntegerType_TestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"KismetArray_SortIntegerType_Tests");
  KismetArray_SortIntegerType_Tests::KismetArray_SortIntegerType_Tests
            (&KismetArray_SortIntegerType_TestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__KismetArray_SortIntegerType_TestsInstance__);
  return;
}

// `dynamic_initializer_for_'KismetArray_SortName_TestsInstance'' @ 14114f9d0

void __cdecl
UE::Kismet::Test::`anonymous_namespace'::
_dynamic_initializer_for__KismetArray_SortName_TestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"KismetArray_SortName_Tests");
  KismetArray_SortName_Tests::KismetArray_SortName_Tests
            (&KismetArray_SortName_TestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__KismetArray_SortName_TestsInstance__);
  return;
}

// `dynamic_initializer_for_'KismetArray_SortString_TestsInstance'' @ 14114fa20

void __cdecl
UE::Kismet::Test::`anonymous_namespace'::
_dynamic_initializer_for__KismetArray_SortString_TestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"KismetArray_SortString_Tests");
  KismetArray_SortString_Tests::KismetArray_SortString_Tests
            (&KismetArray_SortString_TestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__KismetArray_SortString_TestsInstance__);
  return;
}

// `dynamic_initializer_for_'LogBaseAutomationTests'' @ 14114fa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBaseAutomationTests__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBaseAutomationTests,L"LogBaseAutomationTests",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBaseAutomationTests__);
  return;
}

// `dynamic_initializer_for_'LogNetworkAutomationTests'' @ 14114fab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetworkAutomationTests__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetworkAutomationTests,L"LogNetworkAutomationTests",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNetworkAutomationTests__);
  return;
}

// `dynamic_initializer_for_'LogTexture'' @ 14114faf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTexture__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTexture,L"LogTexture",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTexture__);
  return;
}

// `dynamic_initializer_for_'LogTextureUpload'' @ 14114fb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTextureUpload__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTextureUpload,L"LogTextureUpload",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTextureUpload__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 14114fb70

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_16BitData'' @ 14114fb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_16BitData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_16BitData ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_16BitData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_16BitData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_16BitData,*pFVar1,
               L"TEXTUREGROUP_16BitData","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_8BitData'' @ 14114fc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_8BitData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_8BitData ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_8BitData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_8BitData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_8BitData,*pFVar1,
               L"TEXTUREGROUP_8BitData","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Bokeh'' @ 14114fcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Bokeh__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Bokeh == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Bokeh>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Bokeh");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Bokeh,*pFVar1,
               L"TEXTUREGROUP_Bokeh","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Character'' @ 14114fd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Character__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Character ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Character>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Character");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Character,*pFVar1,
               L"TEXTUREGROUP_Character","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_CharacterNormalMap'' @ 14114fdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_CharacterNormalMap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_CharacterNormalMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_CharacterNormalMap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_CharacterNormalMap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_CharacterNormalMap,*pFVar1,
               L"TEXTUREGROUP_CharacterNormalMap","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_CharacterSpecular'' @ 14114fe60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_CharacterSpecular__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_CharacterSpecular ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_CharacterSpecular>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_CharacterSpecular");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_CharacterSpecular,*pFVar1,
               L"TEXTUREGROUP_CharacterSpecular","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Cinematic'' @ 14114fef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Cinematic__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Cinematic ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Cinematic>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Cinematic");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Cinematic,*pFVar1,
               L"TEXTUREGROUP_Cinematic","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_ColorLookupTable'' @ 14114ff80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_ColorLookupTable__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_ColorLookupTable ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ColorLookupTable>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_ColorLookupTable");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_ColorLookupTable,*pFVar1,
               L"TEXTUREGROUP_ColorLookupTable","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Effects'' @ 141150010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Effects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Effects ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Effects>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Effects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Effects,*pFVar1,
               L"TEXTUREGROUP_Effects","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_EffectsNotFiltered'' @ 1411500a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_EffectsNotFiltered__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_EffectsNotFiltered ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_EffectsNotFiltered>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_EffectsNotFiltered");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_EffectsNotFiltered,*pFVar1,
               L"TEXTUREGROUP_EffectsNotFiltered","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_HierarchicalLOD'' @ 141150130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_HierarchicalLOD__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_HierarchicalLOD ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_HierarchicalLOD>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_HierarchicalLOD");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_HierarchicalLOD,*pFVar1,
               L"TEXTUREGROUP_HierarchicalLOD","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_IESLightProfile'' @ 1411501c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_IESLightProfile__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_IESLightProfile ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_IESLightProfile>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_IESLightProfile");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_IESLightProfile,*pFVar1,
               L"TEXTUREGROUP_IESLightProfile","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Impostor'' @ 141150250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Impostor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Impostor ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Impostor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Impostor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Impostor,*pFVar1,
               L"TEXTUREGROUP_Impostor","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_ImpostorNormalDepth'' @ 1411502e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_ImpostorNormalDepth__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_ImpostorNormalDepth ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ImpostorNormalDepth>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_ImpostorNormalDepth");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_ImpostorNormalDepth,*pFVar1,
               L"TEXTUREGROUP_ImpostorNormalDepth","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Lightmap'' @ 141150370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Lightmap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Lightmap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Lightmap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Lightmap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Lightmap,*pFVar1,
               L"TEXTUREGROUP_Lightmap","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_MobileFlattened'' @ 141150400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_MobileFlattened__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_MobileFlattened ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_MobileFlattened>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_MobileFlattened");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_MobileFlattened,*pFVar1,
               L"TEXTUREGROUP_MobileFlattened","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Pixels2D'' @ 141150490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Pixels2D__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Pixels2D ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Pixels2D>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Pixels2D");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Pixels2D,*pFVar1,
               L"TEXTUREGROUP_Pixels2D","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_ProcBuilding_Face'' @ 141150520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_ProcBuilding_Face__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_ProcBuilding_Face ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ProcBuilding_Face>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_ProcBuilding_Face");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_ProcBuilding_Face,*pFVar1,
               L"TEXTUREGROUP_ProcBuilding_Face","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_ProcBuilding_LightMap'' @ 1411505b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_ProcBuilding_LightMap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_ProcBuilding_LightMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_ProcBuilding_LightMap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_ProcBuilding_LightMap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_ProcBuilding_LightMap,*pFVar1
               ,L"TEXTUREGROUP_ProcBuilding_LightMap","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project01'' @ 141150640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project01__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project01 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project01>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project01");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project01,*pFVar1,
               L"TEXTUREGROUP_Project01","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project02'' @ 1411506d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project02__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project02 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project02>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project02");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project02,*pFVar1,
               L"TEXTUREGROUP_Project02","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project03'' @ 141150760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project03__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project03 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project03>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project03");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project03,*pFVar1,
               L"TEXTUREGROUP_Project03","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project04'' @ 1411507f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project04__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project04 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project04>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project04");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project04,*pFVar1,
               L"TEXTUREGROUP_Project04","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project05'' @ 141150880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project05__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project05 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project05>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project05");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project05,*pFVar1,
               L"TEXTUREGROUP_Project05","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project06'' @ 141150910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project06__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project06 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project06>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project06");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project06,*pFVar1,
               L"TEXTUREGROUP_Project06","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project07'' @ 1411509a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project07__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project07 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project07>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project07");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project07,*pFVar1,
               L"TEXTUREGROUP_Project07","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project08'' @ 141150a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project08__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project08 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project08>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project08");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project08,*pFVar1,
               L"TEXTUREGROUP_Project08","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project09'' @ 141150ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project09__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project09 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project09>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project09");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project09,*pFVar1,
               L"TEXTUREGROUP_Project09","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project10'' @ 141150b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project10__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project10 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project10>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project10");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project10,*pFVar1,
               L"TEXTUREGROUP_Project10","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project11'' @ 141150be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project11__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project11 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project11>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project11");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project11,*pFVar1,
               L"TEXTUREGROUP_Project11","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project12'' @ 141150c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project12__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project12 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project12>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project12");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project12,*pFVar1,
               L"TEXTUREGROUP_Project12","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project13'' @ 141150d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project13__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project13 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project13>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project13");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project13,*pFVar1,
               L"TEXTUREGROUP_Project13","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project14'' @ 141150d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project14__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project14 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project14>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project14");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project14,*pFVar1,
               L"TEXTUREGROUP_Project14","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project15'' @ 141150e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project15__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project15 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project15>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project15");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project15,*pFVar1,
               L"TEXTUREGROUP_Project15","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project16'' @ 141150eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project16__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project16 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project16>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project16");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project16,*pFVar1,
               L"TEXTUREGROUP_Project16","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project17'' @ 141150f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project17__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project17 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project17>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project17");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project17,*pFVar1,
               L"TEXTUREGROUP_Project17","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project18'' @ 141150fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project18__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project18 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project18>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project18");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project18,*pFVar1,
               L"TEXTUREGROUP_Project18","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project19'' @ 141151060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project19__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project19 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project19>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project19");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project19,*pFVar1,
               L"TEXTUREGROUP_Project19","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project20'' @ 1411510f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project20__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project20 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project20>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project20");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project20,*pFVar1,
               L"TEXTUREGROUP_Project20","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project21'' @ 141151180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project21__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project21 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project21>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project21");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project21,*pFVar1,
               L"TEXTUREGROUP_Project21","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project22'' @ 141151210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project22__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project22 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project22>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project22");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project22,*pFVar1,
               L"TEXTUREGROUP_Project22","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project23'' @ 1411512a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project23__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project23 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project23>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project23");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project23,*pFVar1,
               L"TEXTUREGROUP_Project23","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project24'' @ 141151330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project24__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project24 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project24>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project24");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project24,*pFVar1,
               L"TEXTUREGROUP_Project24","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project25'' @ 1411513c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project25__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project25 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project25>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project25");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project25,*pFVar1,
               L"TEXTUREGROUP_Project25","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project26'' @ 141151450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project26__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project26 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project26>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project26");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project26,*pFVar1,
               L"TEXTUREGROUP_Project26","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project27'' @ 1411514e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project27__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project27 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project27>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project27");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project27,*pFVar1,
               L"TEXTUREGROUP_Project27","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project28'' @ 141151570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project28__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project28 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project28>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project28");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project28,*pFVar1,
               L"TEXTUREGROUP_Project28","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project29'' @ 141151600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project29__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project29 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project29>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project29");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project29,*pFVar1,
               L"TEXTUREGROUP_Project29","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project30'' @ 141151690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project30__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project30 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project30>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project30");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project30,*pFVar1,
               L"TEXTUREGROUP_Project30","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project31'' @ 141151720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project31__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project31 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project31>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project31");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project31,*pFVar1,
               L"TEXTUREGROUP_Project31","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project32'' @ 1411517b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project32__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project32 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project32>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project32");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project32,*pFVar1,
               L"TEXTUREGROUP_Project32","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project33'' @ 141151840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project33__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project33 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project33>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project33");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project33,*pFVar1,
               L"TEXTUREGROUP_Project33","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project34'' @ 1411518d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project34__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project34 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project34>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project34");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project34,*pFVar1,
               L"TEXTUREGROUP_Project34","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project35'' @ 141151960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project35__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project35 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project35>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project35");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project35,*pFVar1,
               L"TEXTUREGROUP_Project35","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project36'' @ 1411519f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project36__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project36 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project36>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project36");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project36,*pFVar1,
               L"TEXTUREGROUP_Project36","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project37'' @ 141151a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project37__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project37 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project37>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project37");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project37,*pFVar1,
               L"TEXTUREGROUP_Project37","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project38'' @ 141151b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project38__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project38 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project38>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project38");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project38,*pFVar1,
               L"TEXTUREGROUP_Project38","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project39'' @ 141151ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project39__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project39 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project39>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project39");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project39,*pFVar1,
               L"TEXTUREGROUP_Project39","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project40'' @ 141151c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project40__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project40 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project40>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project40");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project40,*pFVar1,
               L"TEXTUREGROUP_Project40","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project41'' @ 141151cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project41__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project41 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project41>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project41");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project41,*pFVar1,
               L"TEXTUREGROUP_Project41","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project42'' @ 141151d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project42__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project42 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project42>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project42");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project42,*pFVar1,
               L"TEXTUREGROUP_Project42","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project43'' @ 141151de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project43__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project43 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project43>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project43");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project43,*pFVar1,
               L"TEXTUREGROUP_Project43","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project44'' @ 141151e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project44__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project44 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project44>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project44");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project44,*pFVar1,
               L"TEXTUREGROUP_Project44","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project45'' @ 141151f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project45__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project45 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project45>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project45");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project45,*pFVar1,
               L"TEXTUREGROUP_Project45","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project46'' @ 141151f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project46__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project46 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project46>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project46");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project46,*pFVar1,
               L"TEXTUREGROUP_Project46","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project47'' @ 141152020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project47__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project47 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project47>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project47");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project47,*pFVar1,
               L"TEXTUREGROUP_Project47","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Project48'' @ 1411520b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Project48__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Project48 ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Project48>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Project48");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Project48,*pFVar1,
               L"TEXTUREGROUP_Project48","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_RenderTarget'' @ 141152140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_RenderTarget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_RenderTarget ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_RenderTarget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_RenderTarget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_RenderTarget,*pFVar1,
               L"TEXTUREGROUP_RenderTarget","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Shadowmap'' @ 1411521d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Shadowmap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Shadowmap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Shadowmap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Shadowmap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Shadowmap,*pFVar1,
               L"TEXTUREGROUP_Shadowmap","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Skybox'' @ 141152260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Skybox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Skybox == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Skybox>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Skybox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Skybox,*pFVar1,
               L"TEXTUREGROUP_Skybox","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Terrain_Heightmap'' @ 1411522f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Terrain_Heightmap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Terrain_Heightmap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Terrain_Heightmap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Terrain_Heightmap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Terrain_Heightmap,*pFVar1,
               L"TEXTUREGROUP_Terrain_Heightmap","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Terrain_Weightmap'' @ 141152380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Terrain_Weightmap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Terrain_Weightmap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Terrain_Weightmap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Terrain_Weightmap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Terrain_Weightmap,*pFVar1,
               L"TEXTUREGROUP_Terrain_Weightmap","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_UI'' @ 141152410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_UI__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_UI == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_UI>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_UI");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_UI,*pFVar1,L"TEXTUREGROUP_UI"
               ,"STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group",true,false,ST_int64,
               false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Vehicle'' @ 1411524a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Vehicle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Vehicle ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Vehicle>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Vehicle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Vehicle,*pFVar1,
               L"TEXTUREGROUP_Vehicle","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_VehicleNormalMap'' @ 141152530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_VehicleNormalMap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_VehicleNormalMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_VehicleNormalMap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_VehicleNormalMap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_VehicleNormalMap,*pFVar1,
               L"TEXTUREGROUP_VehicleNormalMap","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_VehicleSpecular'' @ 1411525c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_VehicleSpecular__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_VehicleSpecular ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_VehicleSpecular>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_VehicleSpecular");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_VehicleSpecular,*pFVar1,
               L"TEXTUREGROUP_VehicleSpecular","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_Weapon'' @ 141152650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_Weapon__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_Weapon == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_Weapon>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_Weapon");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_Weapon,*pFVar1,
               L"TEXTUREGROUP_Weapon","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_WeaponNormalMap'' @ 1411526e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_WeaponNormalMap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_WeaponNormalMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WeaponNormalMap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_WeaponNormalMap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_WeaponNormalMap,*pFVar1,
               L"TEXTUREGROUP_WeaponNormalMap","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_WeaponSpecular'' @ 141152770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_WeaponSpecular__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_WeaponSpecular ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WeaponSpecular>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_WeaponSpecular");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_WeaponSpecular,*pFVar1,
               L"TEXTUREGROUP_WeaponSpecular","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_World'' @ 141152800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_World__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_World == (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_World>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_World");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_World,*pFVar1,
               L"TEXTUREGROUP_World","STATGROUP_TextureGroup","STATCAT_Advanced",L"Texture Group",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_WorldNormalMap'' @ 141152890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_WorldNormalMap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_WorldNormalMap ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WorldNormalMap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_WorldNormalMap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_WorldNormalMap,*pFVar1,
               L"TEXTUREGROUP_WorldNormalMap","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TEXTUREGROUP_WorldSpecular'' @ 141152920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TEXTUREGROUP_WorldSpecular__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TEXTUREGROUP_WorldSpecular ==
      (FThreadSafeStaticStat<FStat_STAT_TEXTUREGROUP_WorldSpecular>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TEXTUREGROUP_WorldSpecular");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TEXTUREGROUP_WorldSpecular,*pFVar1,
               L"TEXTUREGROUP_WorldSpecular","STATGROUP_TextureGroup","STATCAT_Advanced",
               L"Texture Group",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h__Script_Engine_1591552140'' @ 1411529b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h__Script_Engine_1591552140__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h__Script_Engine_3438943467'' @ 1411529f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h__Script_Engine_3438943467__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h__Script_Engine_2953225297'' @ 141152a30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h__Script_Engine_2953225297__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h__Script_Engine_519914575'' @ 141152a70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h__Script_Engine_519914575__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h__Script_Engine_3812827412'' @ 141152ab0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h__Script_Engine_3812827412__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h__Script_Engine_715562497'' @ 141152af0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h__Script_Engine_715562497__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h__Script_Engine_Statics
             ::ScriptStructInfo,6,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_ConvertFromType_h__Script_Engine_3492667116'' @ 141152b40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_ConvertFromType_h__Script_Engine_3492667116__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_ConvertFromType_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h__Script_Engine_2097964575'' @ 141152b80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h__Script_Engine_2097964575__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_Loading_AsyncLoadingTests_Shared_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h__Script_Engine_3248613241'' @ 141152bc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h__Script_Engine_3248613241__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h__Script_Engine_1236779203'' @ 141152c00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h__Script_Engine_1236779203__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `scalar_deleting_destructor' @ 1488667f0

void * __thiscall
FUnattendedLoadingTest::_scalar_deleting_destructor_(FUnattendedLoadingTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UTransactionDiffingTestObject @ 148866910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTransactionDiffingTestObject(void)

{
  if (Z_Registration_Info_UClass_UTransactionDiffingTestObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTransactionDiffingTestObject.OuterSingleton,
               &Z_Construct_UClass_UTransactionDiffingTestObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTransactionDiffingTestObject.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148866f00

void * __thiscall
TransactionDiffingTests::FEditPropertyDataTest::_scalar_deleting_destructor_
          (FEditPropertyDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148867450

void * __thiscall
TransactionDiffingTests::FEditNonPropertyDataTest::_scalar_deleting_destructor_
          (FEditNonPropertyDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UTextureCube @ 148867490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureCube(void)

{
  if (Z_Registration_Info_UClass_UTextureCube.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureCube.OuterSingleton,
               &Z_Construct_UClass_UTextureCube_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureCube.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148867f10

void * __thiscall
TransactionDiffingTests::FEditNamesTest::_scalar_deleting_destructor_
          (FEditNamesTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148868cd0

void * __thiscall
FRunExternalToolTest::_scalar_deleting_destructor_(FRunExternalToolTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148869cb0

void * __thiscall
FMultiplayer4PlayerTest::_scalar_deleting_destructor_(FMultiplayer4PlayerTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148869cf0

void * __thiscall
TransactionDiffingTests::FEditObjectsTest::_scalar_deleting_destructor_
          (FEditObjectsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886a800

void * __thiscall
TransactionDiffingTests::FEditSoftObjectsTest::_scalar_deleting_destructor_
          (FEditSoftObjectsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886aad0

void * __thiscall
WorldPartitionTests::FWorldPartitionEditorSoftObjectPathTest::_scalar_deleting_destructor_
          (FWorldPartitionEditorSoftObjectPathTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886b790

void * __thiscall
PropertyPairsMapTests::FPropertyPairsMapTests::_scalar_deleting_destructor_
          (FPropertyPairsMapTests *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886c310

void * __thiscall
FTextPropertyTest::_scalar_deleting_destructor_(FTextPropertyTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886c5b0

void * __thiscall
WorldPartitionTests::FWorldPartitionSoftRefTest::_scalar_deleting_destructor_
          (FWorldPartitionSoftRefTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886c940

void * __thiscall
WorldPartitionTests::FWorldPartitionPathConversionTest::_scalar_deleting_destructor_
          (FWorldPartitionPathConversionTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886cc10

void * __thiscall
WorldPartitionTests::FWorldPartitionStaticSpatialIndexTest::_scalar_deleting_destructor_
          (FWorldPartitionStaticSpatialIndexTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886cee0

void * __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationSimulationTest::_scalar_deleting_destructor_
          (FWorldPartitionStreamingGenerationSimulationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886d1b0

void * __thiscall
ReferenceClusterTests::FReferenceClusterTest::_scalar_deleting_destructor_
          (FReferenceClusterTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886d5b0

void * __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationTest::_scalar_deleting_destructor_
          (FWorldPartitionStreamingGenerationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886dba0

void * __thiscall
FIntSerializationTest::_scalar_deleting_destructor_(FIntSerializationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UTexture2D @ 14886dbe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTexture2D(void)

{
  if (Z_Registration_Info_UClass_UTexture2D.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTexture2D.OuterSingleton,
               &Z_Construct_UClass_UTexture2D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTexture2D.OuterSingleton;
}

// Z_Construct_UClass_UTextureCubeArray @ 14886dc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureCubeArray(void)

{
  if (Z_Registration_Info_UClass_UTextureCubeArray.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureCubeArray.OuterSingleton,
               &Z_Construct_UClass_UTextureCubeArray_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureCubeArray.OuterSingleton;
}

// Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy @ 14886dc60

UFunction * __cdecl Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture2D_Blueprint_GetCPUCopy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX @ 14886dca0

UFunction * __cdecl Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY @ 14886dce0

UFunction * __cdecl Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTexture @ 14886dd20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTexture(void)

{
  if (Z_Registration_Info_UClass_UTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTexture.OuterSingleton,
               &Z_Construct_UClass_UTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTexture.OuterSingleton;
}

// NewProp_bTemporarilyDisableStreaming_SetBit @ 14886dd60

void __cdecl
Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x154) = *(byte *)((longlong)param_1 + 0x154) | 1;
  return;
}

// NewStructOps @ 14886dd70

void * __cdecl Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTextureSourceLayerColorInfo,&UE::CoreUObject::Private::Construct<FTextureSourceLayerColorInfo>,&UE::CoreUObject::Private::ConstructForTests<FTextureSourceLayerColorInfo>,&UE::CoreUObject::Private::Destruct<FTextureSourceLayerColorInfo>,&UE::CoreUObject::Private::Copy<FTextureSourceLayerColorInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14886ddb0

void * __cdecl Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTextureSourceBlock,&UE::CoreUObject::Private::Construct<FTextureSourceBlock>,&UE::CoreUObject::Private::ConstructForTests<FTextureSourceBlock>,&UE::CoreUObject::Private::Destruct<FTextureSourceBlock>,&UE::CoreUObject::Private::Copy<FTextureSourceBlock>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14886ddf0

void * __cdecl Z_Construct_UScriptStruct_FTextureSource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTextureSource,&UE::CoreUObject::Private::Construct<FTextureSource>,&UE::CoreUObject::Private::ConstructForTests<FTextureSource>,&UE::CoreUObject::Private::Destruct<FTextureSource>,&UE::CoreUObject::Private::Copy<FTextureSource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14886de30

void * __cdecl Z_Construct_UScriptStruct_FTexturePlatformData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTexturePlatformData,&UE::CoreUObject::Private::Construct<FTexturePlatformData>,&UE::CoreUObject::Private::ConstructForTests<FTexturePlatformData>,&UE::CoreUObject::Private::Destruct<FTexturePlatformData>,&UE::CoreUObject::Private::Copy<FTexturePlatformData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_CompressionNoAlpha_SetBit @ 14886de70

void __cdecl
Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 1;
  return;
}

// NewProp_CompressionForceAlpha_SetBit @ 14886deb0

void __cdecl
Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 2;
  return;
}

// NewProp_CompressionNone_SetBit @ 14886dec0

void __cdecl
Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 4;
  return;
}

// NewProp_CompressionYCoCg_SetBit @ 14886df00

void __cdecl
Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 8;
  return;
}

// NewProp_SRGB_SetBit @ 14886df30

void __cdecl
Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 0x10;
  return;
}

// NewStructOps @ 14886df40

void * __cdecl Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTextureFormatSettings,&UE::CoreUObject::Private::Construct<FTextureFormatSettings>,&UE::CoreUObject::Private::ConstructForTests<FTextureFormatSettings>,&UE::CoreUObject::Private::Destruct<FTextureFormatSettings>,&UE::CoreUObject::Private::Copy<FTextureFormatSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V1 @ 14886dff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V1(void)

{
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.OuterSingleton,
               &Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V1_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.OuterSingleton;
}

// Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V2 @ 14886e030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V2(void)

{
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.OuterSingleton,
               &Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V2_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.OuterSingleton;
}

// NewStructOps @ 14886e070

void * __cdecl Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTextureSourceColorSettings,&UE::CoreUObject::Private::Construct<FTextureSourceColorSettings>,&UE::CoreUObject::Private::ConstructForTests<FTextureSourceColorSettings>,&UE::CoreUObject::Private::Destruct<FTextureSourceColorSettings>,&UE::CoreUObject::Private::Copy<FTextureSourceColorSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14886e160

void __cdecl
Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable @ 14886e170

UFunction * __cdecl Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture_AreDownscalePropertiesEditable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTexture_Blueprint_GetBuiltTextureSize @ 14886e1b0

UFunction * __cdecl Z_Construct_UFunction_UTexture_Blueprint_GetBuiltTextureSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture_Blueprint_GetBuiltTextureSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize @ 14886e1f0

UFunction * __cdecl Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture_Blueprint_GetMemorySize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize @ 14886e230

UFunction * __cdecl Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceDiskAndMemorySize_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14886e270

void __cdecl
Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceIdString_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceIdString @ 14886e280

UFunction * __cdecl Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceIdString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture_Blueprint_GetTextureSourceIdString_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14886e2c0

void __cdecl
Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14886f150

void * __thiscall
FConvertFromType_SoftToHard::_scalar_deleting_destructor_
          (FConvertFromType_SoftToHard *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax @ 14886f190

UFunction * __cdecl Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture_ComputeTextureSourceChannelMinMax_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTexture_GetTextureStreamingMethod @ 14886f1d0

UFunction * __cdecl Z_Construct_UFunction_UTexture_GetTextureStreamingMethod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTexture_GetTextureStreamingMethod_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOodlePreserveExtremes_SetBit @ 14886f210

void __cdecl
Z_Construct_UClass_UTexture_Statics::NewProp_bOodlePreserveExtremes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10e) = 1;
  return;
}

// NewProp_SRGB_SetBit @ 14886f220

void __cdecl Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x116) = *(byte *)((longlong)param_1 + 0x116) | 1;
  return;
}

// NewProp_bNoTiling_SetBit @ 14886f230

void __cdecl Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x116) = *(byte *)((longlong)param_1 + 0x116) | 2;
  return;
}

// NewProp_VirtualTextureStreaming_SetBit @ 14886f240

void __cdecl
Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x116) = *(byte *)((longlong)param_1 + 0x116) | 4;
  return;
}

// NewProp_bUseVirtualTextureStreamingPriority_SetBit @ 14886f250

void __cdecl
Z_Construct_UClass_UTexture_Statics::NewProp_bUseVirtualTextureStreamingPriority_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x118) = *(uint *)((longlong)param_1 + 0x118) | 1;
  return;
}

// NewProp_CompressionYCoCg_SetBit @ 14886f260

void __cdecl Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x11c) = *(byte *)((longlong)param_1 + 0x11c) | 1;
  return;
}

// NewProp_bNotOfflineProcessed_SetBit @ 14886f270

void __cdecl Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x11c) = *(byte *)((longlong)param_1 + 0x11c) | 2;
  return;
}

// NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit @ 14886f280

void __cdecl
Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x11c) = *(byte *)((longlong)param_1 + 0x11c) | 4;
  return;
}

// `scalar_deleting_destructor' @ 14886f630

void * __thiscall
FLoadingTests_ExternalReadDependencies::_scalar_deleting_destructor_
          (FLoadingTests_ExternalReadDependencies *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886f8e0

void * __thiscall
UE::Kismet::Test::KismetArray_SortString_Tests::_scalar_deleting_destructor_
          (KismetArray_SortString_Tests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14886fca0

void * __thiscall
FLoadingTests_Flush_InvalidFromWorker::_scalar_deleting_destructor_
          (FLoadingTests_Flush_InvalidFromWorker *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148870060

void * __thiscall
FLoadingTests_Flush_ValidFromCallback::_scalar_deleting_destructor_
          (FLoadingTests_Flush_ValidFromCallback *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488705d0

void * __thiscall
FLoadingTests_IsReadyForAsyncPostLoad::_scalar_deleting_destructor_
          (FLoadingTests_IsReadyForAsyncPostLoad *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148870770

void * __thiscall
FLoadingTests_ZenLoaderOnly_Base::_scalar_deleting_destructor_
          (FLoadingTests_ZenLoaderOnly_Base *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148870b80

void * __thiscall
Texture2DTest::FTexture2DTestTransient::_scalar_deleting_destructor_
          (FTexture2DTestTransient *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148870ee0

void * __thiscall
UE::Kismet::Test::KismetArray_SortName_Tests::_scalar_deleting_destructor_
          (KismetArray_SortName_Tests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488718c0

void * __thiscall
FDeferredExecCommandTest::_scalar_deleting_destructor_(FDeferredExecCommandTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148871900

void * __thiscall
FThreadSafeAsyncLoadingTest::_scalar_deleting_destructor_
          (FThreadSafeAsyncLoadingTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148871d20

void * __thiscall
FLoadingTests_IsReadyForAsyncPostLoad_Flush::_scalar_deleting_destructor_
          (FLoadingTests_IsReadyForAsyncPostLoad_Flush *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148872080

void * __thiscall
FSelfRegisteringExecCommandTest::_scalar_deleting_destructor_
          (FSelfRegisteringExecCommandTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148872330

void * __thiscall
UE::Kismet::Test::KismetArray_SortIntegerType_Tests::_scalar_deleting_destructor_
          (KismetArray_SortIntegerType_Tests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148872730

void * __thiscall
FLoadingTests_RecursiveLoads_FromSerialize::_scalar_deleting_destructor_
          (FLoadingTests_RecursiveLoads_FromSerialize *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148872ba0

void * __thiscall
FConsoleCommandExecCommandTest::_scalar_deleting_destructor_
          (FConsoleCommandExecCommandTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148872f80

void * __thiscall
FExecCommandTargetVariantsTest::_scalar_deleting_destructor_
          (FExecCommandTargetVariantsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148873310

void * __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::_scalar_deleting_destructor_
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148873f70

void * __thiscall
FAsyncLoadingTestInvalidateExportDuringPreload::_scalar_deleting_destructor_
          (FAsyncLoadingTestInvalidateExportDuringPreload *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148873fb0

void * __thiscall
FCommonCommandsExecCommandTest::_scalar_deleting_destructor_
          (FCommonCommandsExecCommandTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148874340

void * __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafe::_scalar_deleting_destructor_
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafe *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148874750

void * __thiscall
FLoadingTests_RecursiveLoads_FromDeferredPostLoad::_scalar_deleting_destructor_
          (FLoadingTests_RecursiveLoads_FromDeferredPostLoad *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148874c70

void * __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::_scalar_deleting_destructor_
          (FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148875010

void * __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::_scalar_deleting_destructor_
          (FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148875420

void * __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::_scalar_deleting_destructor_
          (FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148875a10

void * __thiscall
FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::_scalar_deleting_destructor_
          (FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UTexture2DDynamic @ 148875a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTexture2DDynamic(void)

{
  if (Z_Registration_Info_UClass_UTexture2DDynamic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTexture2DDynamic.OuterSingleton,
               &Z_Construct_UClass_UTexture2DDynamic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTexture2DDynamic.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148875b20

void * __thiscall
FLoadingTests_Renames_Base::_scalar_deleting_destructor_
          (FLoadingTests_Renames_Base *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UTextImportContainer @ 148875c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextImportContainer(void)

{
  if (Z_Registration_Info_UClass_UTextImportContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextImportContainer.OuterSingleton,
               &Z_Construct_UClass_UTextImportContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextImportContainer.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ETextImportTestFlags @ 148875ca0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETextImportTestFlags(void)

{
  if (Z_Registration_Info_UEnum_ETextImportTestFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextImportTestFlags.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETextImportTestFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextImportTestFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FTextImportTestStruct @ 148875ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTextImportTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTextImportTestStruct.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTextImportTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FTextImportTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTextImportTestStruct.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FTextImportTestStruct.InnerSingleton;
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

// ETextImportTestFlags_StaticEnum @ 148875d60

UEnum * __cdecl ETextImportTestFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextImportTestFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextImportTestFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextImportTestFlags,(UObject *)pUVar1,
                       L"ETextImportTestFlags");
  }
  return Z_Registration_Info_UEnum_ETextImportTestFlags.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148876040

void * __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemory::_scalar_deleting_destructor_
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemory *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 148876080

void * __cdecl Z_Construct_UScriptStruct_FTextImportTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTextImportTestStruct,&UE::CoreUObject::Private::Construct<FTextImportTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FTextImportTestStruct>,&UE::CoreUObject::Private::Destruct<FTextImportTestStruct>,&UE::CoreUObject::Private::Copy<FTextImportTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148876360

void * __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk::_scalar_deleting_destructor_
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UTexture_NoRegister @ 1488763a0

UClass * __cdecl Z_Construct_UClass_UTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture",&Z_Registration_Info_UClass_UTexture.InnerSingleton,
               UTexture::StaticRegisterNativesUTexture,0x150,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTexture>,
               InternalVTableHelperCtorCaller<UTexture>,local_res8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture.InnerSingleton;
}

// `scalar_deleting_destructor' @ 1488767c0

void * __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReload::_scalar_deleting_destructor_
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReload *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UAsyncLoadingTests_Shared @ 148876840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncLoadingTests_Shared(void)

{
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.OuterSingleton,
               &Z_Construct_UClass_UAsyncLoadingTests_Shared_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148876af0

void * __thiscall
FTextImportStructPropertyTest::_scalar_deleting_destructor_
          (FTextImportStructPropertyTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488771e0

void * __thiscall
FLoadingTests_Timeouts_Postload::_scalar_deleting_destructor_
          (FLoadingTests_Timeouts_Postload *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UTextureCollection @ 148877290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureCollection(void)

{
  if (Z_Registration_Info_UClass_UTextureCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureCollection.OuterSingleton,
               &Z_Construct_UClass_UTextureCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureCollection.OuterSingleton;
}

// BinarySearch<TArray<FString,TSizedDefaultAllocator<32>_>,FString,TLess<void>_> @ 148877be0

int __cdecl
Algo::BinarySearch<TArray<FString,TSizedDefaultAllocator<32>_>,FString,TLess<void>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,TLess<void> param_3
          )

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  wchar_t *pwVar6;
  FIdentityFunctor local_res18;
  
  iVar1 = AlgoImpl::LowerBoundInternal<FString_const_,int,FString,FIdentityFunctor,TLess<void>_>
                    ((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,
                     local_res18,param_3);
  if (iVar1 < param_1->ArrayNum) {
    pwVar4 = L"";
    pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x10;
    if (*(int *)(pFVar5 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)pFVar5;
    }
    if ((param_2->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar6);
    iVar3 = -1;
    if (-1 < iVar2) {
      iVar3 = iVar1;
    }
    return iVar3;
  }
  return -1;
}

// DestructItems<FVirtualTextureDataChunk,int> @ 148877e60

void __cdecl
DestructItems<FVirtualTextureDataChunk,int>(FVirtualTextureDataChunk *param_1,int param_2)

{
  FBulkData *this;
  
  if (param_2 != 0) {
    this = (FBulkData *)&param_1->BulkData;
    do {
      FBulkData::~FBulkData(this);
      this = (FBulkData *)&this[3].BulkChunkId;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVirtualTextureTileOffsetData,int> @ 148877ea0

void __cdecl
DestructItems<FVirtualTextureTileOffsetData,int>(FVirtualTextureTileOffsetData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Addresses;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTextureCollection::ReleaseResource'::__l5::TSTR_DeleteResource170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148878170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTextureCollection::ReleaseResource_::__l5::TSTR_DeleteResource170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTextureCollection::ReleaseResource'::__l5::TSTR_DeleteResource170>::
            Get();
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
      if (bVar8) goto LAB_1488782c1;
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
    goto LAB_1488784b5;
  }
LAB_1488782c1:
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
LAB_14887839f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14887839f;
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
LAB_1488784b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTexture::ReleaseResource'::__l5::TSTR_DeleteResource324>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1488784f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTexture::ReleaseResource_::__l5::TSTR_DeleteResource324>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTexture::ReleaseResource'::__l5::TSTR_DeleteResource324>::Get();
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
      if (bVar8) goto LAB_148878641;
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
    goto LAB_148878835;
  }
LAB_148878641:
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
LAB_14887871f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14887871f;
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
LAB_148878835:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTexture2D::RefreshSamplerStates'::__l8::TSTR_RefreshSamplerStatesCommand1512>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148878870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTexture2D::RefreshSamplerStates_::__l8::TSTR_RefreshSamplerStatesCommand1512>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTexture2D::RefreshSamplerStates'::__l8::TSTR_RefreshSamplerStatesCommand1512>
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
      if (bVar8) goto LAB_1488789c1;
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
    goto LAB_148878bb5;
  }
LAB_1488789c1:
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
LAB_148878a9f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148878a9f;
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
LAB_148878bb5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`StreamVirtualTextureMips'::__l2::TSTR_RequestVTTiles1931>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148878bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_StreamVirtualTextureMips_::__l2::TSTR_RequestVTTiles1931>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`StreamVirtualTextureMips'::__l2::TSTR_RequestVTTiles1931>::Get();
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
      if (bVar8) goto LAB_148878d41;
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
    goto LAB_148878f35;
  }
LAB_148878d41:
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
LAB_148878e1f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148878e1f;
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
LAB_148878f35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTextureCollection::SetResource'::__l2::TSTR_SetResourceRenderThread113>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148878f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTextureCollection::SetResource_::__l2::TSTR_SetResourceRenderThread113>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTextureCollection::SetResource'::__l2::TSTR_SetResourceRenderThread113>
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
      if (bVar8) goto LAB_1488790c1;
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
    goto LAB_1488792b5;
  }
LAB_1488790c1:
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
LAB_14887919f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14887919f;
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
LAB_1488792b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTexture::SetResource'::__l2::TSTR_SetResourceRenderThread297>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1488792f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTexture::SetResource_::__l2::TSTR_SetResourceRenderThread297>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTexture::SetResource'::__l2::TSTR_SetResourceRenderThread297>::Get()
  ;
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
      if (bVar8) goto LAB_148879441;
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
    goto LAB_148879635;
  }
LAB_148879441:
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
LAB_14887951f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14887951f;
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
LAB_148879635:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTextureCollection::UpdateResource'::__l8::TSTR_SetTextureCollectionResource200>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148879670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTextureCollection::UpdateResource_::__l8::TSTR_SetTextureCollectionResource200>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTextureCollection::UpdateResource'::__l8::TSTR_SetTextureCollectionResource200>
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
      if (bVar8) goto LAB_1488797c1;
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
    goto LAB_1488799b5;
  }
LAB_1488797c1:
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
LAB_14887989f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14887989f;
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
LAB_1488799b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTexture::UpdateResourceWithParams'::__l30::TSTR_SetTextureReference445>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1488799f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTexture::UpdateResourceWithParams_::__l30::TSTR_SetTextureReference445>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTexture::UpdateResourceWithParams'::__l30::TSTR_SetTextureReference445>
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
      if (bVar8) goto LAB_148879b41;
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
    goto LAB_148879d35;
  }
LAB_148879b41:
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
LAB_148879c1f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148879c1f;
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
LAB_148879d35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTexture2D::UpdateTextureRegions'::__l48::TSTR_UpdateTextureRegionsData1452>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148879d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTexture2D::UpdateTextureRegions_::__l48::TSTR_UpdateTextureRegionsData1452>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTexture2D::UpdateTextureRegions'::__l48::TSTR_UpdateTextureRegionsData1452>
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
      if (bVar8) goto LAB_148879ec1;
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
    goto LAB_14887a0b5;
  }
LAB_148879ec1:
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
LAB_148879f9f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148879f9f;
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
LAB_14887a0b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachProperty<`PropertyPairsMapTests::FPropertyPairsMapTests::RunTest'::__l2::<lambda_1>_> @ 14887a2c0

void __thiscall
FPropertyPairsMap::
ForEachProperty<_PropertyPairsMapTests::FPropertyPairsMapTests::RunTest_::__l2::<lambda_1>_>
          (FPropertyPairsMap *this,<lambda_1> param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  FPropertyPairsMap *pFVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  FPropertyPairsMapTests *local_b0;
  FName local_a8;
  FName FStack_a0;
  FPropertyPairsMap *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FPropertyPairsMap *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->Properties).field_0x28;
  puVar1 = &(this->Properties).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->Properties).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14887a36d;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_14887a36d:
  uVar12 = *(uint *)&(this->Properties).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&(this->Properties).field_0x8 - *(int *)&(this->Properties).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_b0 = param_1.__this;
  local_98 = this;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->Properties).field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(this->Properties).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14887a470;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14887a470:
  while( true ) {
    pFVar7 = local_68;
    if (*(int *)&(local_68->Properties).field_0x8 - *(int *)&(local_68->Properties).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this))
    break;
    lVar9 = *(longlong *)&pFVar7->Properties;
    pFVar2 = (FName *)(lVar9 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    local_a8 = *pFVar2;
    FStack_a0 = pFVar2[1];
    `PropertyPairsMapTests::FPropertyPairsMapTests::RunTest'::__l2::<lambda_1>::operator()
              (&local_b0,local_a8,*(FName *)(lVar9 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)
              );
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachProperty<`PropertyPairsMapTests::FPropertyPairsMapTests::RunTest'::__l2::<lambda_2>_> @ 14887a500

void __thiscall
FPropertyPairsMap::
ForEachProperty<_PropertyPairsMapTests::FPropertyPairsMapTests::RunTest_::__l2::<lambda_2>_>
          (FPropertyPairsMap *this,<lambda_2> param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  FPropertyPairsMap *pFVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  FPropertyPairsMapTests *local_a0;
  FName local_98;
  FName FStack_90;
  FPropertyPairsMap *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  FPropertyPairsMap *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar4 = *(int *)&(this->Properties).field_0x28;
  puVar1 = &(this->Properties).field_0x10;
  iStack_80 = 0;
  uStack_7c = 1;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->Properties).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_14887a5ad;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_7c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_7c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_6c = local_68 + -1 + local_res10;
    if (iVar4 < iStack_6c) {
      iStack_6c = iVar4;
    }
  }
LAB_14887a5ad:
  uVar12 = *(uint *)&(this->Properties).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_60 = *(int *)&(this->Properties).field_0x8 - *(int *)&(this->Properties).field_0x34;
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.CurrentBitIndex = iStack_6c;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  uStack_30 = CONCAT44(uStack_5c,iStack_60);
  local_a0 = param_1.__this;
  local_88 = this;
  local_78 = puVar1;
  iStack_64 = iStack_6c;
  local_58 = this;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->Properties).field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(this->Properties).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14887a6b0;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14887a6b0:
  while( true ) {
    pFVar7 = local_58;
    if (*(int *)&(local_58->Properties).field_0x8 - *(int *)&(local_58->Properties).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_50.CurrentBitIndex == uVar12) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this))
    break;
    lVar9 = *(longlong *)&pFVar7->Properties;
    pFVar2 = (FName *)(lVar9 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    local_98 = *pFVar2;
    FStack_90 = pFVar2[1];
    bVar8 = `PropertyPairsMapTests::FPropertyPairsMapTests::RunTest'::__l2::<lambda_2>::operator()
                      (&local_a0,local_98,
                       *(FName *)(lVar9 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18));
    if (!bVar8) {
      return;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// InternalConstructor<UAsyncLoadingTests_ConvertFromType_V1> @ 14887a740

void __cdecl InternalConstructor<UAsyncLoadingTests_ConvertFromType_V1>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAsyncLoadingTests_ConvertFromType_V1__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x18,0);
    return;
  }
  return;
}

// InternalConstructor<UAsyncLoadingTests_ConvertFromType_V2> @ 14887a7a0

void __cdecl InternalConstructor<UAsyncLoadingTests_ConvertFromType_V2>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAsyncLoadingTests_ConvertFromType_V2__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAsyncLoadingTests_Shared> @ 14887a7e0

void __cdecl InternalConstructor<UAsyncLoadingTests_Shared>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAsyncLoadingTests_Shared__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x18,0);
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UTextImportContainer> @ 14887a840

void __cdecl InternalConstructor<UTextImportContainer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UTextImportContainer__6B_;
    *(undefined4 *)(this + 1) = 0x20;
    *(undefined4 *)&this[1].field_0x4 = 1;
    FString::FString((FString *)&this[1].field_0x8,"DefaultString");
    return;
  }
  return;
}

// InternalConstructor<UTexture2D> @ 14887a8a0

void __cdecl InternalConstructor<UTexture2D>(FObjectInitializer *param_1)

{
  UTexture *this;
  FRenderAssetUpdate *this_00;
  code *pcVar1;
  bool bVar2;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTexture2D::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTexture2D::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTexture2D::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this_00 = (FRenderAssetUpdate *)this->_padding_;
    if (this_00 != (FRenderAssetUpdate *)0x0) {
      this->_padding_ = 0;
      FRenderAssetUpdate::Release(this_00);
    }
    this->SRGB = '\x01';
    if (*(char *)((longlong)&this[1]._padding_ + 5) != '\0') {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("AddressX == TA_Wrap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2D.cpp"
                         ,0x48,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// InternalConstructor<UTexture2DDynamic> @ 14887a950

void __cdecl InternalConstructor<UTexture2DDynamic>(FObjectInitializer *param_1)

{
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
    this->_padding_ = (longlong)&UTexture2DDynamic::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTexture2DDynamic::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTexture2DDynamic::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined1 *)&this[1]._padding_ = 2;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UTexture> @ 14887a9c0

void __cdecl InternalConstructor<UTexture>(FObjectInitializer *param_1)

{
  if ((UTexture *)param_1->Obj != (UTexture *)0x0) {
    UTexture::UTexture((UTexture *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UTextureCollection> @ 14887a9e0

void __cdecl InternalConstructor<UTextureCollection>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UTextureCollection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UTextureCube> @ 14887aa30

void __cdecl InternalConstructor<UTextureCube>(FObjectInitializer *param_1)

{
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->SRGB = '\x01';
    this->_padding_ = (longlong)&UTextureCube::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureCube::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTextureCube::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UTextureCubeArray> @ 14887aa90

void __cdecl InternalConstructor<UTextureCubeArray>(FObjectInitializer *param_1)

{
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UTextureCubeArray::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureCubeArray::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTextureCubeArray::_vftable__for__IInterface_AsyncCompilation__;
  }
  return;
}

// InternalConstructor<UTransactionDiffingTestObject> @ 14887aaf0

void __cdecl InternalConstructor<UTransactionDiffingTestObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UTransactionDiffingTestObject__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)&this[3].field_0x8,0);
    *(undefined8 *)&this[3].field_0x18 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V1> @ 14887ab80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V1>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncLoadingTests_ConvertFromType_V1::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAsyncLoadingTests_ConvertFromType_V1__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[1].field_0x18,0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V2> @ 14887ac50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V2>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncLoadingTests_ConvertFromType_V2::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAsyncLoadingTests_ConvertFromType_V2__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAsyncLoadingTests_Shared> @ 14887ad00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAsyncLoadingTests_Shared>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncLoadingTests_Shared::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAsyncLoadingTests_Shared__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[1].field_0x18,0);
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextImportContainer> @ 14887add0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextImportContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextImportContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTextImportContainer__6B_;
    *(undefined4 *)(pUVar1 + 1) = 0x20;
    *(undefined4 *)&pUVar1[1].field_0x4 = 1;
    FString::FString((FString *)&pUVar1[1].field_0x8,"DefaultString");
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTexture2D> @ 14887aea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTexture2D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTexture2D::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTexture2D::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTexture2D::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTexture2D::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTexture2DDynamic> @ 14887af70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTexture2DDynamic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTexture2DDynamic::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTexture2DDynamic::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTexture2DDynamic::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTexture2DDynamic::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTexture> @ 14887b040

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTexture::GetPrivateStaticClass();
  pUVar3 = (UTexture *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UTexture *)0x0) {
    pUVar3 = UTexture::UTexture(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureCollection> @ 14887b0e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureCollection::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UTextureCollection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureCube> @ 14887b1a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureCube>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureCube::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTextureCube::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureCube::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTextureCube::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureCubeArray> @ 14887b270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureCubeArray>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureCubeArray::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTextureCubeArray::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureCubeArray::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTextureCubeArray::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTransactionDiffingTestObject> @ 14887b340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTransactionDiffingTestObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTransactionDiffingTestObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTransactionDiffingTestObject__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[3].field_0x8,0);
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// LowerBoundInternal<FString_const_,int,FString,FIdentityFunctor,TLess<void>_> @ 14887b440

int __cdecl
AlgoImpl::LowerBoundInternal<FString_const_,int,FString,FIdentityFunctor,TLess<void>_>
          (FString *param_1,int param_2,FString *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      if ((param_3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      if (param_1[iVar1].Data.ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)param_1[iVar1].Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
      if (iVar3 < 0) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar6;
}

// NewObject<UAsyncLoadingTests_ConvertFromType_V1> @ 14887b4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncLoadingTests_ConvertFromType_V1 * __cdecl
NewObject<UAsyncLoadingTests_ConvertFromType_V1>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UAsyncLoadingTests_ConvertFromType_V1 *pUVar2;
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
  pUVar1 = UAsyncLoadingTests_ConvertFromType_V1::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UAsyncLoadingTests_ConvertFromType_V1 *)
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

// NewObject<UAsyncLoadingTests_Shared> @ 14887b5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncLoadingTests_Shared * __cdecl
NewObject<UAsyncLoadingTests_Shared>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UAsyncLoadingTests_Shared *pUVar2;
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
  pUVar1 = UAsyncLoadingTests_Shared::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UAsyncLoadingTests_Shared *)
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

// NewObject<UIntSerialization> @ 14887b6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UIntSerialization * __cdecl NewObject<UIntSerialization>(UObject *param_1)

{
  UClass *pUVar1;
  UIntSerialization *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UIntSerialization_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UIntSerialization *)
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

// NewObject<UTextImportContainer> @ 14887b760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextImportContainer * __cdecl NewObject<UTextImportContainer>(UObject *param_1)

{
  UClass *pUVar1;
  UTextImportContainer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UTextImportContainer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTextImportContainer *)
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

// NewObject<UTextPropertyTestObject> @ 14887b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextPropertyTestObject * __cdecl NewObject<UTextPropertyTestObject>(UObject *param_1)

{
  UClass *pUVar1;
  UTextPropertyTestObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UTextPropertyTestObject_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTextPropertyTestObject *)
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

// NewObject<UTextPropertyTestObject> @ 14887b8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextPropertyTestObject * __cdecl
NewObject<UTextPropertyTestObject>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UTextPropertyTestObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UTextPropertyTestObject_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UTextPropertyTestObject *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTexture2DDynamic> @ 14887b9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTexture2DDynamic * __cdecl
NewObject<UTexture2DDynamic>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTexture2DDynamic *pUVar2;
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
  pUVar1 = UTexture2DDynamic::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTexture2DDynamic *)
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

// NewObject<UTextureCube> @ 14887ba90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextureCube * __cdecl
NewObject<UTextureCube>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTextureCube *pUVar2;
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
  pUVar1 = UTextureCube::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTextureCube *)
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

// NewObject<UTextureCubeArray> @ 14887bb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextureCubeArray * __cdecl
NewObject<UTextureCubeArray>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTextureCubeArray *pUVar2;
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
  pUVar1 = UTextureCubeArray::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTextureCubeArray *)
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

// NewObject<UTransactionDiffingTestObject> @ 14887bc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTransactionDiffingTestObject * __cdecl NewObject<UTransactionDiffingTestObject>(UObject *param_1)

{
  UClass *pUVar1;
  UTransactionDiffingTestObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UTransactionDiffingTestObject::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTransactionDiffingTestObject *)
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

// NoneOf<TArray<FVirtualTextureDataChunk,TSizedDefaultAllocator<32>_>,UE::FDerivedData_FVirtualTextureDataChunk::*> @ 14887bd10

bool __cdecl
Algo::
NoneOf<TArray<FVirtualTextureDataChunk,TSizedDefaultAllocator<32>_>,UE::FDerivedData_FVirtualTextureDataChunk::*>
          (TArray<FVirtualTextureDataChunk,TSizedDefaultAllocator<32>_> *param_1,
          pdm_7ca34b7b param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x90;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVirtualTextureDataChunk_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[(longlong)(int)param_2 + 0x1b] != (FScriptContainerElement)0x0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x90;
  }
  return true;
}

// NoneOf<TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>,UE::FDerivedData_FTexture2DMipMap::*> @ 14887bd90

bool __cdecl
Algo::
NoneOf<TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>,UE::FDerivedData_FTexture2DMipMap::*>
          (TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_> *param_1,
          pdm_f58834bd param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->Array).AllocatorInstance.Data;
  iVar2 = (param_1->Array).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Array).ArrayNum != iVar2) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(char *)((longlong)(int)param_2 + 0x1b + *(longlong *)pFVar3) != '\0') {
      return false;
    }
    pFVar3 = pFVar3 + 8;
  }
  return true;
}

// Reverse<unsigned_char> @ 14887bf10

void __cdecl AlgoImpl::Reverse<unsigned_char>(uchar *param_1,int param_2)

{
  uchar uVar1;
  uchar *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    puVar2 = param_1 + (longlong)param_2 + -1;
    do {
      uVar1 = *param_1;
      *param_1 = *puVar2;
      param_1 = param_1 + 1;
      *puVar2 = uVar1;
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// Reverse<__int64> @ 14887bf60

void __cdecl AlgoImpl::Reverse<__int64>(long64 *param_1,int param_2)

{
  long64 lVar1;
  long64 *plVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    plVar2 = param_1 + (param_2 + -1);
    do {
      lVar1 = param_1[lVar3];
      param_1[lVar3] = *plVar2;
      lVar3 = lVar3 + 1;
      *plVar2 = lVar1;
      plVar2 = plVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// StaticEnum<enum_ETextImportTestFlags> @ 14887bfc0

UEnum * __cdecl StaticEnum<enum_ETextImportTestFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextImportTestFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextImportTestFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextImportTestFlags,(UObject *)pUVar1,
                       L"ETextImportTestFlags");
  }
  return Z_Registration_Info_UEnum_ETextImportTestFlags.OuterSingleton;
}

// VerifySort<FName,`UE::Kismet::Test::KismetArray_SortName_Tests::TestBody'::__l2::<lambda_1>,bool> @ 14887c1b0

void __cdecl
UE::Kismet::Test::Private::
VerifySort<FName,_UE::Kismet::Test::KismetArray_SortName_Tests::TestBody_::__l2::<lambda_1>,bool>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3,bool param_4)

{
  <lambda_1> local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_20;
  <lambda_1> *local_18;
  undefined1 *local_10;
  
  local_18 = local_res18;
  local_10 = local_res20;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  local_28 = param_1;
  local_20 = param_2;
  `UE::Kismet::Test::Private::
  VerifySort<FName,`UE::Kismet::Test::KismetArray_SortName_Tests::TestBody'::__l2::<lambda_1>,bool>'
  ::__l2::<lambda_1>::operator()(&local_28,L"unstable-ascending",false,Ascending);
  `UE::Kismet::Test::Private::
  VerifySort<FName,`UE::Kismet::Test::KismetArray_SortName_Tests::TestBody'::__l2::<lambda_1>,bool>'
  ::__l2::<lambda_1>::operator()(&local_28,L"unstable-descending",false,Descending);
  `UE::Kismet::Test::Private::
  VerifySort<FName,`UE::Kismet::Test::KismetArray_SortName_Tests::TestBody'::__l2::<lambda_1>,bool>'
  ::__l2::<lambda_1>::operator()(&local_28,L"stable-ascending",true,Ascending);
  `UE::Kismet::Test::Private::
  VerifySort<FName,`UE::Kismet::Test::KismetArray_SortName_Tests::TestBody'::__l2::<lambda_1>,bool>'
  ::__l2::<lambda_1>::operator()(&local_28,L"stable-descending",true,Descending);
  return;
}

// get<1,TTuple<FName,FName>_> @ 14887c360

FName * __cdecl get<1,TTuple<FName,FName>_>(TTuple<FName,FName> *param_1)

{
  return (FName *)&param_1->field_0x8;
}

// get<0,TTuple<FName,FName>_> @ 14887c370

FName * __cdecl get<0,TTuple<FName,FName>_>(TTuple<FName,FName> *param_1)

{
  return (FName *)param_1;
}

// TBaseFunctorDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy,`UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage'::__l5::<lambda_1>_> @ 14887c380

TBaseFunctorDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy,_private:_void___cdecl_UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(void)_::_5_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy,`UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage'::__l5::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy,_UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage_::__l5::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy,_private:_void___cdecl_UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(void)_::_5_::<lambda_1>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseFunctorDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy,_private:_void___cdecl_UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(void)_::_5_::<lambda_1>_>
  *pTVar3;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXAEAUFLoadPackageAsyncProgressParams___ZUFDefaultTSDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &
       ___7__TBaseFunctorDelegateInstance___A6AXAEAUFLoadPackageAsyncProgressParams___ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__4__LoadNextPackage_FUnattendedLoader_UnattendedLoadTestImpl__AEAAXXZ___V__6B_
  ;
  *(FUnattendedLoader **)((longlong)this + 0x18) = (param_1->Functor).__this;
  *(undefined4 *)((longlong)this + 0x20) = 0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\UnattendedAsyncLoadingTests.cpp"
                     ,0x47,L"Delegate should be moved, not copied");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TBaseFunctorDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy,_private:_void___cdecl_UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(void)_::_5_::<lambda_1>_>
              *)(*pcVar1)();
    return pTVar3;
  }
  return this;
}

// ~TFunction_OwnedObject<``FLoadingTests_ExternalReadDependencies::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 14887e790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FLoadingTests_ExternalReadDependencies::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FLoadingTests_ExternalReadDependencies::RunTest_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FLoadingTests_ExternalReadDependencies::RunTest'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTexture::SetResource'::__l2::<lambda_1>,1,0> @ 14887e7b0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UTexture::SetResource'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTexture::SetResource_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture::SetResource'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTextureCollection::SetResource'::__l2::<lambda_1>,1,0> @ 14887e7d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureCollection::SetResource'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTextureCollection::SetResource_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureCollection::SetResource'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`StreamVirtualTextureMips'::__l2::<lambda_1>,1,0> @ 14887e7f0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`StreamVirtualTextureMips'::__l2::<lambda_1>,1,0>
::~TFunction_OwnedObject<_StreamVirtualTextureMips_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`StreamVirtualTextureMips'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTexture::ReleaseResource'::__l5::<lambda_1>,1,0> @ 14887e810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTexture::ReleaseResource'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTexture::ReleaseResource_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture::ReleaseResource'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTextureCollection::ReleaseResource'::__l5::<lambda_1>,1,0> @ 14887e830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureCollection::ReleaseResource'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTextureCollection::ReleaseResource_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureCollection::ReleaseResource'::`5'::<lambda_1>,1,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UTexture2D::RefreshSamplerStates'::__l8::<lambda_1>,1,0> @ 14887e850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTexture2D::RefreshSamplerStates'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTexture2D::RefreshSamplerStates_::__l8::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture2D::RefreshSamplerStates'::`8'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTextureCollection::UpdateResource'::__l8::<lambda_1>,1,0> @ 14887e870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureCollection::UpdateResource'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTextureCollection::UpdateResource_::__l8::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureCollection::UpdateResource'::`8'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTexture2D::UpdateTextureRegions'::__l48::<lambda_1>,1,1> @ 14887e890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTexture2D::UpdateTextureRegions'::__l48::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UTexture2D::UpdateTextureRegions_::__l48::<lambda_1>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture2D::UpdateTextureRegions'::`48'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014887e8b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UTexture::UpdateResourceWithParams'::__l30::<lambda_2>,1,0> @ 14887e8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTexture::UpdateResourceWithParams'::__l30::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UTexture::UpdateResourceWithParams_::__l30::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture::UpdateResourceWithParams'::`30'::<lambda_2>,1,0>::_vftable_
  ;
  return;
}

// operator<< @ 14887f150

FArchive * __cdecl operator<<(FArchive *param_1,FOptTexturePlatformData *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->ExtData);
    }
  }
  else {
    param_2->ExtData = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->NumMipsInTail;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator() @ 148880770

void __thiscall
``UTexture2D::UpdateTextureRegions'::__l48::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  local_res8 = *(undefined8 *)(*(longlong *)this + 0x10);
  local_res18[0] = *(undefined8 *)(*(longlong *)this + 0x20);
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar3 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res18,&local_res8);
  ::operator_delete(*(void **)this,0x28);
  return;
}

// `vector_deleting_destructor'`adjustor{224}' @ 148881980

/* [thunk]:public: virtual void * __ptr64 __cdecl UTexture2D::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTexture2D::_vector_deleting_destructor__adjustor_224__(UTexture2D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTexture2D *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 148881994

/* [thunk]:public: virtual void * __ptr64 __cdecl UTexture2D::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTexture2D::_vector_deleting_destructor__adjustor_232__(UTexture2D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTexture2D *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1488819a8

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UTexture2DDynamic::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTexture2DDynamic::_vector_deleting_destructor__adjustor_224__(UTexture2DDynamic *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTexture2DDynamic *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1488819bc

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UTexture2DDynamic::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTexture2DDynamic::_vector_deleting_destructor__adjustor_232__(UTexture2DDynamic *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTexture2DDynamic *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1488819d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UTexture::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall UTexture::_vector_deleting_destructor__adjustor_224__(UTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTexture *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1488819e4

/* [thunk]:public: virtual void * __ptr64 __cdecl UTexture::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall UTexture::_vector_deleting_destructor__adjustor_232__(UTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTexture *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1488819f8

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureCube::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTextureCube::_vector_deleting_destructor__adjustor_224__(UTextureCube *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureCube *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 148881a0c

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureCube::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTextureCube::_vector_deleting_destructor__adjustor_232__(UTextureCube *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureCube *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 148881a20

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureCubeArray::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTextureCubeArray::_vector_deleting_destructor__adjustor_224__(UTextureCubeArray *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureCubeArray *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 148881a34

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureCubeArray::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTextureCubeArray::_vector_deleting_destructor__adjustor_232__(UTextureCubeArray *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureCubeArray *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148881a50

void * __thiscall
IBaseDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881a80

void * __thiscall
IBaseDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881ab0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881ae0

void * __thiscall
IBaseDelegateInstance<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881b10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy,`UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((*(int *)((longlong)this + 0x20) != 1) && (*(int *)((longlong)this + 0x20) != 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecutionState == EExecutionCheck::Executed || ExecutionState == EExecutionCheck::MovedFrom"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\UnattendedAsyncLoadingTests.cpp"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881b80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_ExternalReadDependencies::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881bb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_Flush_InvalidFromWorker::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881be0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881c10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromSerialize::RunTest'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881c40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::RunTest'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881c70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FAsyncLoadingTestInvalidateExportDuringPreload::RunTest'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881ca0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,``FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881cd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FLoadingTests_Flush_ValidFromCallback::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881d00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881d30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FConvertFromType_SoftToHard::RunTest'::__l74::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881d60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromDeferredPostLoad::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881d90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromSerialize::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881dc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881df0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881e20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_Timeouts_Postload::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881e50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_IsReadyForAsyncPostLoad::RunTest'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881e80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_IsReadyForAsyncPostLoad_Flush::RunTest'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881eb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::RunTest'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881ee0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafe::RunTest'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881f10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881f40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleCommandExecCommandTest::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881f70

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_IsReadyForAsyncPostLoad::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881fa0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_IsReadyForAsyncPostLoad_Flush::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148881fd0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882000

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafe::RunTest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882030

void * __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`FUniqueBuffer::TakeOwnership<`UTexture2DArray::GetMipData'::__l32::<lambda_1>,0>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882070

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488820a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488820d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882100

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882130

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``FLoadingTests_Flush_InvalidFromWorker::RunTest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *lpTlsValue;
  
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      puVar1 = TlsGetValue(SmallTaskAllocator._0_4_);
      lpTlsValue = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = ::operator_new(0x18);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0;
          lpTlsValue = puVar1;
        }
        TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
        puVar1 = lpTlsValue;
      }
      if (0xff < *(int *)(puVar1 + 2)) {
        if ((void **)*puVar1 != (void **)0x0) {
          TLockFreePointerListLIFOPad<void_*,64>::Push
                    ((TLockFreePointerListLIFOPad<void_*,64> *)&SmallTaskAllocator.field_0x40,
                     (void **)*puVar1);
        }
        *puVar1 = puVar1[1];
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
      }
      *(undefined8 *)this = puVar1[1];
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
      puVar1[1] = this;
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882220

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FLoadingTests_Flush_InvalidFromWorker::RunTest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882260

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FLoadingTestsScope_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FLoadingTestsScope_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFLoadingTestsScope___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488822a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FLoadingTests_ExternalReadDependencies::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FLoadingTests_ExternalReadDependencies::RunTest'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488822e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UTexture::SetResource'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture::SetResource'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureCollection::SetResource'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureCollection::SetResource'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882360

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`StreamVirtualTextureMips'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`StreamVirtualTextureMips'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488823a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTexture::ReleaseResource'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture::ReleaseResource'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488823e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureCollection::ReleaseResource'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureCollection::ReleaseResource'::`5'::<lambda_1>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTexture2D::RefreshSamplerStates'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture2D::RefreshSamplerStates'::`8'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureCollection::UpdateResource'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureCollection::UpdateResource'::`8'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488824a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTexture2D::UpdateTextureRegions'::__l48::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture2D::UpdateTextureRegions'::`48'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTexture::UpdateResourceWithParams'::__l30::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTexture::UpdateResourceWithParams'::`30'::<lambda_2>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882540

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLoadPackageAsyncProgressDelegate,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLoadPackageAsyncProgressDelegate,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882580

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`FMultiplayer4PlayerTest::RunTest'::__l25::FInvitePlayers,SharedPointerInternals::DefaultDeleter<`FMultiplayer4PlayerTest::RunTest'::__l25::FInvitePlayers>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488825c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`FMultiplayer4PlayerTest::RunTest'::__l2::FOpenMap,SharedPointerInternals::DefaultDeleter<`FMultiplayer4PlayerTest::RunTest'::__l2::FOpenMap>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882600

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWaitForProcessToCompleteLatentCommand,SharedPointerInternals::DefaultDeleter<FWaitForProcessToCompleteLatentCommand>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWaitForProcessToCompleteLatentCommand,SharedPointerInternals::DefaultDeleter<FWaitForProcessToCompleteLatentCommand>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882640

void * __thiscall
FBindlessTextureCollectionResource::_scalar_deleting_destructor_
          (FBindlessTextureCollectionResource *this,uint param_1)

{
  FRHIResourceCollection *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->ResourceCollectionRHI).Reference;
  if (this_00 != (FRHIResourceCollection *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->InputTextureResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488826a0

void * __thiscall
`FDeferredExecCommandTest::RunTest'::__l2::FExecCommandHandler::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488826e0

void * __thiscall
`FExecCommandTargetVariantsTest::RunTest'::__l2::FExecCommandHandler::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882720

void * __thiscall
`FSelfRegisteringExecCommandTest::RunTest'::__l2::FExecCommandHandler::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882760

void * __thiscall
`FMultiplayer4PlayerTest::RunTest'::__l25::FInvitePlayers::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationNetworkCommand__6B_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488827d0

void * __thiscall
FLoadingTestsScope::_scalar_deleting_destructor_(FLoadingTestsScope *this,uint param_1)

{
  ~FLoadingTestsScope(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882810

void * __thiscall
`FMultiplayer4PlayerTest::RunTest'::__l2::FOpenMap::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationNetworkCommand__6B_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882880

void * __thiscall FSharedImage::_scalar_deleting_destructor_(FSharedImage *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882900

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void * __thiscall
FTexture2DDynamicResource::_scalar_deleting_destructor_
          (FTexture2DDynamicResource *this,uint param_1)

{
  FRHITexture *this_00;
  
  this_00 = (this->Texture2DRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882970

void * __thiscall
FTextureCollectionResource::_scalar_deleting_destructor_
          (FTextureCollectionResource *this,uint param_1)

{
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488829b0

void * __thiscall
FTextureCubeArrayResource::_scalar_deleting_destructor_
          (FTextureCubeArrayResource *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FRHITexture *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&___7FTextureCubeArrayResource__6B_;
  pFVar3 = (this->MipData).AllocatorInstance.Data;
  iVar1 = (this->MipData).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->MipData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10)
      ;
    }
    if (pFVar3 == pFVar2) break;
    if (*(void **)pFVar3 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  pFVar2 = (this->MipData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this_00 = (this->TextureCubeRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882a80

void * __thiscall
FTextureCubeResource::_scalar_deleting_destructor_(FTextureCubeResource *this,uint param_1)

{
  FRHITexture *this_00;
  void *(*papvVar1) [15];
  longlong lVar2;
  void *(*papvVar3) [15];
  uint uVar4;
  
  this->_padding_ = (longlong)&___7FTextureCubeResource__6B_;
  papvVar1 = this->MipData;
  lVar2 = 6;
  uVar4 = 0;
  papvVar3 = papvVar1;
  do {
    do {
      if ((*papvVar1)[0] != (void *)0x0) {
        FMemory::Free((*papvVar1)[0]);
      }
      (*papvVar1)[0] = (void *)0x0;
      uVar4 = uVar4 + 1;
      papvVar1 = (void *(*) [15])(*papvVar1 + 1);
    } while (uVar4 < 0xf);
    papvVar1 = papvVar3 + 1;
    lVar2 = lVar2 + -1;
    uVar4 = 0;
    papvVar3 = papvVar1;
  } while (lVar2 != 0);
  this_00 = (this->TextureCubeRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882b60

void * __thiscall
FVirtualTexture2DResource::_scalar_deleting_destructor_
          (FVirtualTexture2DResource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882bc0

void * __thiscall
FWaitForProcessToCompleteLatentCommand::_scalar_deleting_destructor_
          (FWaitForProcessToCompleteLatentCommand *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882c30

void * __thiscall
IAutomationNetworkCommand::_scalar_deleting_destructor_
          (IAutomationNetworkCommand *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationNetworkCommand__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882ca0

void * __thiscall
UAsyncLoadingTests_ConvertFromType_V1::_scalar_deleting_destructor_
          (UAsyncLoadingTests_ConvertFromType_V1 *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_ConvertFromType_V1__6B_;
  pvVar1 = *(void **)&(this->Reference).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
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

// `scalar_deleting_destructor' @ 148882d10

void * __thiscall
UAsyncLoadingTests_ConvertFromType_V2::_scalar_deleting_destructor_
          (UAsyncLoadingTests_ConvertFromType_V2 *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_ConvertFromType_V2__6B_;
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

// `scalar_deleting_destructor' @ 148882d70

void * __thiscall
UAsyncLoadingTests_Shared::_scalar_deleting_destructor_
          (UAsyncLoadingTests_Shared *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_Shared__6B_;
  pvVar1 = *(void **)&(this->SoftReference).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882de0

void * __thiscall
UTextImportContainer::_scalar_deleting_destructor_(UTextImportContainer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTextImportContainer__6B_;
  pFVar1 = (this->ResultStruct).TestString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882e50

void * __thiscall UTexture2D::_scalar_deleting_destructor_(UTexture2D *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882ed0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void * __thiscall
UTexture2DDynamic::_scalar_deleting_destructor_(UTexture2DDynamic *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882f50

void * __thiscall UTexture::_scalar_deleting_destructor_(UTexture *this,uint param_1)

{
  ~UTexture(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148882fb0

void * __thiscall
UTextureCollection::_scalar_deleting_destructor_(UTextureCollection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTextureCollection__6B_;
  pFVar1 = (this->Textures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148883020

void * __thiscall UTextureCube::_scalar_deleting_destructor_(UTextureCube *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488830a0

void * __thiscall
UTextureCubeArray::_scalar_deleting_destructor_(UTextureCubeArray *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148883120

void * __thiscall
UTransactionDiffingTestObject::_scalar_deleting_destructor_
          (UTransactionDiffingTestObject *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UTransactionDiffingTestObject__6B_;
  pvVar1 = *(void **)&(this->AdditionalSoftObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSoftObjectPtr<UObject>,int>
            ((TSoftObjectPtr<UObject> *)(this->SoftObjectsArray).AllocatorInstance.Data,
             (this->SoftObjectsArray).ArrayNum);
  pFVar2 = (this->SoftObjectsArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjectsArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NamesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAsyncLoadingTests_ConvertFromType @ 148889910

void __cdecl EmptyLinkFunctionForGeneratedCodeAsyncLoadingTests_ConvertFromType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAsyncLoadingTests_Shared @ 148889920

void __cdecl EmptyLinkFunctionForGeneratedCodeAsyncLoadingTests_Shared(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextImportTest @ 148889930

void __cdecl EmptyLinkFunctionForGeneratedCodeTextImportTest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTexture2D @ 148889940

void __cdecl EmptyLinkFunctionForGeneratedCodeTexture2D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTexture2DDynamic @ 148889950

void __cdecl EmptyLinkFunctionForGeneratedCodeTexture2DDynamic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTexture @ 148889960

void __cdecl EmptyLinkFunctionForGeneratedCodeTexture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureCollection @ 148889970

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureCube @ 148889980

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureCube(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureCubeArray @ 148889990

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureCubeArray(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransactionDiffingTests @ 1488899a0

void __cdecl EmptyLinkFunctionForGeneratedCodeTransactionDiffingTests(void)

{
  return;
}

// GenerateObjectsClustersReference @ 14888a950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
ReferenceClusterTests::GenerateObjectsClustersReference
          (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<TTuple<FGuid,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this;
  code *pcVar1;
  ForAnyElementType FVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TTuple<FGuid,FGuid> *pTVar10;
  FGuid *pFVar11;
  longlong lVar12;
  ulong64 uVar13;
  TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  ForElementType<FSetElementId> FVar20;
  uint *puVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar24;
  uint uVar25;
  FGuid *pFVar26;
  FGuid *pFVar27;
  uint uVar28;
  undefined1 auStackY_378 [32];
  undefined1 local_348;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345 [5];
  FGuid local_340;
  ForAnyElementType local_330;
  undefined8 local_328;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined8 uStack_310;
  TBitArray<FDefaultBitArrayAllocator> *local_308;
  uint uStack_300;
  uint uStack_2fc;
  int local_2f8;
  undefined4 uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  uint uStack_2e0;
  uint uStack_2dc;
  TKeyInitializer<FGuid_const_&> local_2d8;
  uint local_2d0;
  FGuid *local_2c8;
  FGuid *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b8;
  int local_298;
  undefined1 local_294 [20];
  FGuid *local_280;
  undefined1 local_278 [16];
  TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_268;
  undefined1 local_260 [8];
  FGuid *local_258;
  undefined4 local_250;
  int local_24c;
  longlong *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  FGuid *local_1b8;
  FGuid *local_1b0;
  FGuid *local_1a8;
  FGuid *local_1a0;
  FGuid local_198;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_188;
  FGuid local_178 [2];
  undefined4 local_14c;
  undefined4 local_12c;
  undefined1 local_128 [32];
  ForElementType<unsigned_int> local_108;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined1 local_f0 [8];
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator> local_88
  ;
  ulonglong local_38;
  FScriptContainerElement *pFVar29;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pFVar27 = (FGuid *)(param_1->AllocatorInstance).Data;
  local_2d0 = param_1->ArrayNum;
  uVar18 = (ulonglong)(int)local_2d0;
  local_258 = pFVar27 + uVar18 * 2;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (ForElementType<unsigned_int>)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = -1;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_278._8_8_ = param_1;
  local_268 = __return_storage_ptr__;
  while( true ) {
    pFVar11 = local_258;
    local_2c8 = pFVar27;
    if (*(int *)(local_278._8_8_ + 8) != (int)uVar18) {
      local_348 = 0;
      `TCheckedPointerIterator<TTuple<FGuid,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_348);
    }
    iVar7 = 0;
    if (pFVar27 == pFVar11) break;
    pTVar10 = TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              ::Find(&local_88,pFVar27);
    if (pTVar10 == (TTuple<FGuid,FGuid> *)0x0) {
      local_340.A = 0;
      local_340.B = 0;
      local_340.C = 0;
      local_340.D = 0;
      iVar6 = iVar7;
      iVar22 = iVar7;
      iVar17 = iVar7;
    }
    else {
      iVar7 = *(int *)&pTVar10->field_0x10;
      local_340.A = *(uint *)&pTVar10->field_0x10;
      local_340.B = *(uint *)&pTVar10->field_0x14;
      local_340.C = *(uint *)&pTVar10->field_0x18;
      local_340.D = *(uint *)&pTVar10->field_0x1c;
      iVar6 = *(int *)&pTVar10->field_0x1c;
      iVar22 = *(int *)&pTVar10->field_0x14;
      iVar17 = *(int *)&pTVar10->field_0x18;
    }
    if (((iVar6 == 0 && iVar17 == 0) && iVar22 == 0) && iVar7 == 0) {
      pFVar11 = FGuid::NewGuid(local_178);
      local_340.A = pFVar11->A;
      local_340.B = pFVar11->B;
      local_340.C = pFVar11->C;
      local_340.D = pFVar11->D;
      local_280 = &local_340;
      TSet<TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FGuid_const_&>_>
                ((TSet<TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)local_128,&local_2d8,(bool *)&local_280);
      uVar4 = local_128._0_8_;
      lVar12 = (longlong)(int)local_2d8.Key;
      local_1b0 = &local_340;
      local_1b8 = pFVar27;
      TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FGuid_const_&,FGuid_const_&>_>
                (&local_88,(TPairInitializer<FGuid_const_&,FGuid_const_&> *)local_260,
                 (bool *)&local_1b8);
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                 (uVar4 + lVar12 * 0x68 + 0x10),(FGuid *)(local_260 + 4),(bool *)pFVar27);
    }
    local_2d8.Key._4_4_ = pFVar27[1].C;
    uVar18 = (ulonglong)(int)local_2d8.Key._4_4_;
    pFVar11 = *(FGuid **)(pFVar27 + 1);
    pFVar26 = pFVar11 + uVar18;
    local_2c0 = pFVar26;
    while( true ) {
      pFVar29 = (FScriptContainerElement *)0x0;
      if (pFVar27[1].C != (uint)uVar18) {
        local_347 = 0;
        `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_347);
      }
      if (pFVar11 == pFVar26) break;
      uVar13 = CityHash64((char *)pFVar11,0x10);
      iVar7 = TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>(&local_88,(uint)uVar13,pFVar11);
      uVar9 = 0;
      if ((iVar7 == -1) || (lVar12 = local_88.Elements._0_8_ + (longlong)iVar7 * 0x28, lVar12 == 0))
      {
        local_2e8 = 0;
        uStack_2e0 = 0;
        uStack_2dc = 0;
        uVar25 = uVar9;
        uVar8 = uVar9;
      }
      else {
        local_2e8 = *(undefined8 *)(lVar12 + 0x10);
        uStack_2e0 = *(uint *)(lVar12 + 0x18);
        uStack_2dc = *(uint *)(lVar12 + 0x1c);
        uVar25 = *(uint *)(lVar12 + 0x10);
        uVar8 = *(uint *)(lVar12 + 0x14);
      }
      if (((uStack_2dc == 0 && uStack_2e0 == 0) && uVar8 == 0) && uVar25 == 0) {
        uVar13 = CityHash64((char *)&local_340,0x10);
        pFVar23 = pFVar29;
        if (local_128._8_4_ != local_f4) {
          FVar20 = (ForElementType<FSetElementId>)local_f0;
          if (local_e8 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = local_e8;
          }
          uVar9 = *(uint *)((longlong)FVar20 + ((ulonglong)(local_e0 - 1) & uVar13 & 0xffffffff) * 4
                           );
          if (uVar9 != 0xffffffff) {
            do {
              pFVar23 = (FScriptContainerElement *)(local_128._0_8_ + (longlong)(int)uVar9 * 0x68);
              if (((local_340.D == *(uint *)(pFVar23 + 0xc) && local_340.C == *(uint *)(pFVar23 + 8)
                   ) && local_340.B == *(uint *)(pFVar23 + 4)) && local_340.A == *(uint *)pFVar23) {
                if (pFVar23 != (FScriptContainerElement *)0x0) goto LAB_14888b54e;
                break;
              }
              uVar9 = *(uint *)(pFVar23 + 0x60);
              pFVar23 = pFVar29;
            } while (uVar9 != 0xffffffff);
          }
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pTVar14 = (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
                    )(*pcVar1)();
          return pTVar14;
        }
LAB_14888b54e:
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(pFVar23 + 0x10),
                   (FGuid *)local_278,(bool *)pFVar11);
        pFVar26 = local_2c0;
      }
      else if (((uStack_2dc != local_340.D || uStack_2e0 != local_340.C) || uVar8 != local_340.B) ||
               uVar25 != local_340.A) {
        uVar13 = CityHash64((char *)&local_2e8,0x10);
        if (local_128._8_4_ != local_f4) {
          FVar20 = (ForElementType<FSetElementId>)local_f0;
          if (local_e8 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = local_e8;
          }
          uVar25 = *(uint *)((longlong)FVar20 +
                            ((ulonglong)(local_e0 - 1) & uVar13 & 0xffffffff) * 4);
          if (uVar25 != 0xffffffff) {
            do {
              pFVar23 = (FScriptContainerElement *)(local_128._0_8_ + (longlong)(int)uVar25 * 0x68);
              if (((uStack_2dc == *(uint *)(pFVar23 + 0xc) && uStack_2e0 == *(uint *)(pFVar23 + 8))
                  && local_2e8._4_4_ == *(int *)(pFVar23 + 4)) && (int)local_2e8 == *(int *)pFVar23)
              {
                if (uVar25 != 0xffffffff) goto LAB_14888ad16;
                goto LAB_14888ace9;
              }
              uVar25 = *(uint *)(pFVar23 + 0x60);
            } while (uVar25 != 0xffffffff);
          }
        }
        uVar25 = 0xffffffff;
LAB_14888ace9:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PairId.IsValidId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x556,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pTVar14 = (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
                    )(*pcVar1)();
          return pTVar14;
        }
LAB_14888ad16:
        lVar12 = (longlong)(int)uVar25 * 0x68;
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>
                  ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_d8,
                   (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                   (local_128._0_8_ + lVar12 + 0x10));
        if (((int)uVar25 < 0) || ((int)local_100 <= (int)uVar25)) {
LAB_14888ad6c:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            pTVar14 = (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar1)();
            return pTVar14;
          }
        }
        else {
          FVar19 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
          if (local_108 != (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_108;
          }
          uVar8 = uVar25;
          if ((int)uVar25 < 0) {
            uVar8 = uVar25 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar19 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar25 & 0x1f) & 1)
              == 0) goto LAB_14888ad6c;
        }
        uVar4 = local_128._0_8_;
        FVar20 = (ForElementType<FSetElementId>)local_f0;
        if (local_e8 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = local_e8;
        }
        pFVar23 = (FScriptContainerElement *)
                  ((longlong)FVar20 + (longlong)*(int *)(local_128._0_8_ + lVar12 + 100) * 4);
        while( true ) {
          uVar8 = *(uint *)pFVar23;
          if (uVar8 == 0xffffffff) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash");
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              pTVar14 = (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar1)();
              return pTVar14;
            }
          }
          if (uVar8 == uVar25) break;
          pFVar23 = (FScriptContainerElement *)
                    (local_128._0_8_ + (longlong)(int)uVar8 * 0x68 + 0x60);
        }
        *(uint *)pFVar23 = *(uint *)(uVar4 + lVar12 + 0x60);
        TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_128,uVar25,1);
        TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_128,uVar25,1);
        uVar13 = CityHash64((char *)&local_340,0x10);
        pFVar23 = pFVar29;
        if (local_128._8_4_ != local_f4) {
          FVar20 = (ForElementType<FSetElementId>)local_f0;
          if (local_e8 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = local_e8;
          }
          uVar25 = *(uint *)((longlong)FVar20 +
                            ((ulonglong)(local_e0 - 1) & uVar13 & 0xffffffff) * 4);
          if (uVar25 != 0xffffffff) {
            do {
              pFVar23 = (FScriptContainerElement *)(local_128._0_8_ + (longlong)(int)uVar25 * 0x68);
              if (((local_340.D == *(uint *)(pFVar23 + 0xc) && local_340.C == *(uint *)(pFVar23 + 8)
                   ) && local_340.B == *(uint *)(pFVar23 + 4)) && local_340.A == *(uint *)pFVar23) {
                if (pFVar23 != (FScriptContainerElement *)0x0) goto LAB_14888af0d;
                break;
              }
              uVar25 = *(uint *)(pFVar23 + 0x60);
              pFVar23 = pFVar29;
            } while (uVar25 != 0xffffffff);
          }
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pTVar14 = (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
                    )(*pcVar1)();
          return pTVar14;
        }
LAB_14888af0d:
        this = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(pFVar23 + 0x10);
        uVar25 = ((*(uint *)(pFVar23 + 0x18) - *(uint *)(pFVar23 + 0x44)) - local_a4) +
                 local_d8._8_4_;
        if (*(uint *)(pFVar23 + 0x18) - *(uint *)(pFVar23 + 0x44) < uVar25) {
          if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar25);
          }
          TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,uVar25);
          if (uVar25 < 4) {
            uVar25 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_250 = (undefined4)lVar12;
            uVar25 = 1 << ((byte)lVar12 & 0x1f);
          }
          if ((*(uint *)(pFVar23 + 0x58) == 0) || ((int)*(uint *)(pFVar23 + 0x58) < (int)uVar25)) {
            *(uint *)(pFVar23 + 0x58) = uVar25;
            TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Rehash(this);
          }
        }
        uVar25 = local_b0;
        uVar8 = 1;
        pFVar23 = pFVar29;
        if (local_b0 != 0) {
          puVar21 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar21 = local_b8;
          }
          uVar9 = *puVar21;
          while (uVar9 == 0) {
            iVar7 = (int)pFVar29;
            pFVar23 = (FScriptContainerElement *)(ulonglong)((int)pFVar23 + 0x20);
            uVar28 = iVar7 + 1;
            pFVar29 = (FScriptContainerElement *)(ulonglong)uVar28;
            uVar9 = local_b0;
            if ((int)(((int)(local_b0 - 1) >> 0x1f & 0x1fU) + (local_b0 - 1)) >> 5 < (int)uVar28)
            goto LAB_14888b010;
            uVar9 = puVar21[(longlong)iVar7 + 1];
          }
          uVar8 = -uVar9 & uVar9;
          uVar18 = (ulonglong)uVar8 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_24c = (int)lVar12;
          uVar9 = local_24c + -1 + (int)pFVar23;
          if ((int)local_b0 < (int)uVar9) {
            uVar9 = local_b0;
          }
        }
LAB_14888b010:
        local_318 = (longlong *)local_d8;
        local_308 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        uVar28 = local_b0 & 0xffffffe0;
        iStack_2f0 = local_d8._8_4_ - local_a4;
        uStack_2fc = uVar9;
        uStack_300 = 0xffffffff;
        uStack_310 = CONCAT44(uVar8,(int)pFVar29);
        uStack_2f4 = local_14c;
        local_2f8 = (int)pFVar23;
        TStack_240._padding_ = uStack_310;
        iVar7 = (int)local_b0 >> 5;
        uStack_220 = CONCAT44(uStack_2ec,iStack_2f0);
        bVar16 = (byte)local_b0;
        TStack_240.UnvisitedBitMask = 0xffffffff;
        TStack_240.CurrentBitIndex = uVar9;
        TStack_240.BaseBitIndex = (int)pFVar23;
        TStack_240._28_4_ = local_14c;
        local_248 = local_318;
        TStack_240.Array = local_308;
        if ((int)local_b0 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L"");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            pTVar14 = (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar1)();
            return pTVar14;
          }
        }
        if (uVar25 != local_b0) {
          puVar21 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar21 = local_b8;
          }
          uVar9 = -1 << (bVar16 & 0x1f) & puVar21[iVar7];
          while (uVar9 == 0) {
            lVar12 = (longlong)iVar7;
            uVar28 = uVar28 + 0x20;
            iVar7 = iVar7 + 1;
            uVar25 = local_b0;
            if ((int)(((int)(local_b0 - 1) >> 0x1f & 0x1fU) + (local_b0 - 1)) >> 5 < iVar7)
            goto LAB_14888b12f;
            uVar9 = puVar21[lVar12 + 1];
          }
          uVar18 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_298 = (int)lVar12;
          uVar25 = local_298 + -1 + uVar28;
          if ((int)local_b0 < (int)uVar25) {
            uVar25 = local_b0;
          }
        }
LAB_14888b12f:
        while( true ) {
          plVar3 = local_248;
          if ((int)local_248[1] - *(int *)((longlong)local_248 + 0x34) != (int)uStack_220) {
            local_346 = 0;
            `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_346);
          }
          uVar9 = local_b0;
          if (((TStack_240.CurrentBitIndex == uVar25) &&
              (TStack_240.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
             (plVar3 == (longlong *)local_d8)) break;
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                    (this,(FGuid *)local_294,
                     (bool *)(*plVar3 + (longlong)TStack_240.CurrentBitIndex * 0x18));
          TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
        }
        iVar7 = 0;
        local_2f8 = 0;
        uVar25 = 1;
        TStack_210.CurrentBitIndex = 0;
        if (local_b0 != 0) {
          puVar21 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar21 = local_b8;
          }
          uVar8 = *puVar21;
          while (uVar8 == 0) {
            lVar12 = (longlong)iVar7;
            local_2f8 = local_2f8 + 0x20;
            iVar7 = iVar7 + 1;
            TStack_210.CurrentBitIndex = local_b0;
            if ((int)(((int)(local_b0 - 1) >> 0x1f & 0x1fU) + (local_b0 - 1)) >> 5 < iVar7)
            goto LAB_14888b240;
            uVar8 = puVar21[lVar12 + 1];
          }
          uVar25 = -uVar8 & uVar8;
          uVar18 = (ulonglong)uVar25 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_294._4_4_ = (undefined4)lVar12;
          TStack_210.CurrentBitIndex = local_2f8 + -1 + local_294._4_4_;
          if ((int)local_b0 < TStack_210.CurrentBitIndex) {
            TStack_210.CurrentBitIndex = local_b0;
          }
        }
LAB_14888b240:
        local_318 = (longlong *)local_d8;
        local_308 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        iStack_2f0 = local_d8._8_4_ - local_a4;
        uVar8 = local_b0 & 0xffffffe0;
        uStack_310 = CONCAT44(uVar25,iVar7);
        _uStack_300 = CONCAT44(TStack_210.CurrentBitIndex,0xffffffff);
        uStack_2f4 = local_12c;
        TStack_210._padding_ = uStack_310;
        iVar7 = (int)local_b0 >> 5;
        uStack_1f0 = CONCAT44(uStack_2ec,iStack_2f0);
        bVar16 = (byte)local_b0;
        TStack_210.UnvisitedBitMask = 0xffffffff;
        TStack_210.BaseBitIndex = local_2f8;
        TStack_210._28_4_ = local_12c;
        local_218 = local_318;
        TStack_210.Array = local_308;
        if ((int)local_b0 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L"");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            pTVar14 = (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar1)();
            return pTVar14;
          }
        }
        if (uVar9 != local_b0) {
          puVar21 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar21 = local_b8;
          }
          uVar9 = -1 << (bVar16 & 0x1f) & puVar21[iVar7];
          while (uVar9 == 0) {
            lVar12 = (longlong)iVar7;
            uVar8 = uVar8 + 0x20;
            iVar7 = iVar7 + 1;
            uVar9 = local_b0;
            if ((int)(((int)(local_b0 - 1) >> 0x1f & 0x1fU) + (local_b0 - 1)) >> 5 < iVar7)
            goto LAB_14888b360;
            uVar9 = puVar21[lVar12 + 1];
          }
          uVar18 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_294._8_4_ = (undefined4)lVar12;
          uVar9 = (uVar8 - 1) + local_294._8_4_;
          if ((int)local_b0 < (int)uVar9) {
            uVar9 = local_b0;
          }
        }
LAB_14888b360:
        while( true ) {
          plVar3 = local_218;
          if ((int)local_218[1] - *(int *)((longlong)local_218 + 0x34) != (int)uStack_1f0) {
            local_345[0] = 0;
            `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_345);
          }
          if (((TStack_210.CurrentBitIndex == uVar9) &&
              (TStack_210.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
             (plVar3 == (longlong *)local_d8)) break;
          local_198.A = local_340.A;
          local_198.B = local_340.B;
          local_198.C = local_340.C;
          local_198.D = local_340.D;
          pFVar27 = (FGuid *)(*plVar3 + (longlong)TStack_210.CurrentBitIndex * 0x18);
          uVar13 = CityHash64((char *)pFVar27,0x10);
          iVar7 = TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FGuid>(&local_88,(uint)uVar13,pFVar27);
          if (iVar7 == -1) {
            lVar12 = 0;
LAB_14888b414:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              pTVar14 = (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar1)();
              return pTVar14;
            }
          }
          else {
            lVar12 = local_88.Elements._0_8_ + (longlong)iVar7 * 0x28;
            if (lVar12 == 0) goto LAB_14888b414;
          }
          TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
          *(undefined8 *)(lVar12 + 0x10) = local_198._0_8_;
          *(undefined8 *)(lVar12 + 0x18) = local_198._8_8_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
        }
        local_90 = 0;
        if (local_98 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98);
        }
        TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_d8);
        pFVar26 = local_2c0;
        pFVar27 = local_2c8;
      }
      local_1a0 = &local_340;
      local_1a8 = pFVar11;
      TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FGuid_const_&,FGuid_const_&>_>
                (&local_88,(TPairInitializer<FGuid_const_&,FGuid_const_&> *)(local_294 + 0xc),
                 (bool *)&local_1a8);
      uVar18 = (ulonglong)local_2d8.Key._4_4_;
      pFVar11 = pFVar11 + 1;
    }
    pFVar27 = pFVar27 + 2;
    uVar18 = (ulonglong)local_2d0;
  }
  uVar9 = local_128._8_4_ - local_f4;
  local_330.Data = (FScriptContainerElement *)0x0;
  local_328 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&local_330,0,(int *)((longlong)&local_328 + 4));
  }
  local_2b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  local_2b8._padding_._0_4_ = 0;
  local_2b8._padding_._4_4_ = 1;
  local_2b8.UnvisitedBitMask = 0xffffffff;
  local_2b8.CurrentBitIndex = 0;
  local_2b8.BaseBitIndex = 0;
  if (local_100 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2b8);
  }
  uVar25 = local_100;
  local_318 = (longlong *)local_128;
  uStack_310 = CONCAT44(local_2b8._padding_._4_4_,(undefined4)local_2b8._padding_);
  uStack_2fc = local_2b8.CurrentBitIndex;
  uStack_300 = local_2b8.UnvisitedBitMask;
  uStack_2f4 = local_2b8._28_4_;
  local_2f8 = local_2b8.BaseBitIndex;
  iStack_2f0 = local_128._8_4_ - local_f4;
  local_308 = local_2b8.Array;
  iVar7 = (int)local_100 >> 5;
  uVar9 = local_100 & 0xffffffe0;
  bVar16 = (byte)local_100;
  uStack_1c0 = CONCAT44(uStack_2ec,iStack_2f0);
  TStack_1e0.Array = local_2b8.Array;
  local_1e8 = local_318;
  TStack_1e0._padding_ = uStack_310;
  TStack_1e0._16_8_ = _uStack_300;
  TStack_1e0._24_8_ = _local_2f8;
  if ((int)local_100 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pTVar14 = (TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                (*pcVar1)();
      return pTVar14;
    }
  }
  if (uVar25 != local_100) {
    FVar19 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
    if (local_108 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_108;
    }
    uVar25 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar7 * 4);
    while (uVar25 == 0) {
      lVar12 = (longlong)iVar7;
      uVar9 = uVar9 + 0x20;
      iVar7 = iVar7 + 1;
      uVar25 = local_100;
      if ((int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5 < iVar7)
      goto LAB_14888b750;
      uVar25 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar12 * 4);
    }
    uVar18 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar25 = (int)lVar12 + -1 + uVar9;
    if ((int)local_100 < (int)uVar25) {
      uVar25 = local_100;
    }
  }
LAB_14888b750:
  while( true ) {
    plVar3 = local_1e8;
    if ((int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34) != (int)uStack_1c0) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_320);
    }
    pTVar14 = local_268;
    FVar2.Data = local_330.Data;
    if (((TStack_1e0.CurrentBitIndex == uVar25) &&
        (TStack_1e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar3 == (longlong *)local_128)) break;
    pTVar15 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Array
                        ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                         ((longlong)TStack_1e0.CurrentBitIndex * 0x68 + *plVar3 + 0x10),&local_188);
    iVar7 = (int)local_328;
    if ((int)local_328 == local_328._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_330,(int *)((longlong)&local_328 + 4));
    }
    pTVar24 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(local_330.Data + (longlong)iVar7 * 0x10)
    ;
    local_328 = CONCAT44(local_328._4_4_,iVar7 + 1);
    (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar24->ArrayNum = 0;
    pTVar24->ArrayMax = 0;
    if (pTVar24 != pTVar15) {
      (pTVar24->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
      (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar24->ArrayNum = pTVar15->ArrayNum;
      pTVar24->ArrayMax = pTVar15->ArrayMax;
      pTVar15->ArrayNum = 0;
      pTVar15->ArrayMax = 0;
    }
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  }
  local_330.Data = (FScriptContainerElement *)0x0;
  (local_268->AllocatorInstance).Data = FVar2.Data;
  local_268->ArrayNum = (int)local_328;
  local_268->ArrayMax = local_328._4_4_;
  local_328 = 0;
  DestructItems<TArray<FGuid,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)0x0,0);
  if (local_330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data);
  }
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return pTVar14;
}

// GetAllDefaultTextureFormats @ 14888c900

void __cdecl
GetAllDefaultTextureFormats
          (ITargetPlatform *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetAllDefaultTextureFormats @ 14888c910

void __cdecl
GetAllDefaultTextureFormats
          (ITargetPlatformSettings *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetDefaultTextureFormatName @ 14888d8f0

FName __cdecl
GetDefaultTextureFormatName
          (ITargetPlatform *param_1,UTexture *param_2,int param_3,bool param_4,int param_5,
          bool param_6)

{
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetDefaultTextureFormatName @ 14888d900

FName __cdecl
GetDefaultTextureFormatName
          (ITargetPlatformSettings *param_1,ITargetPlatformControls *param_2,UTexture *param_3,
          int param_4,bool param_5,int param_6,bool param_7)

{
  *param_1 = (ITargetPlatformSettings)0x0;
  return (FName)param_1;
}

// GetDefaultTextureFormatNamePerLayer @ 14888d910

void __cdecl
GetDefaultTextureFormatNamePerLayer
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,ITargetPlatform *param_2,
          UTexture *param_3,bool param_4,int param_5,bool param_6)

{
  return;
}

// GetDefaultTextureFormatNamePerLayer @ 14888d920

void __cdecl
GetDefaultTextureFormatNamePerLayer
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,ITargetPlatformSettings *param_2,
          ITargetPlatformControls *param_3,UTexture *param_4,bool param_5,int param_6,bool param_7)

{
  return;
}

// GetLatestOodleTextureSdkVersion @ 14888def0

FName __cdecl GetLatestOodleTextureSdkVersion(void)

{
  FName in_RCX;
  
  *(undefined8 *)in_RCX = 0;
  return in_RCX;
}

// IsAssetSuitableForTests @ 148895830

bool __cdecl LoadingTestsUtils::IsAssetSuitableForTests(FAssetData *param_1)

{
  bool bVar1;
  FString local_18;
  
  ::FName::ToString(&param_1->PackageName,&local_18);
  bVar1 = ::FString::StartsWith(&local_18,L"/Engine/",8,IgnoreCase);
  if (bVar1) {
LAB_148895882:
    bVar1 = ::FString::StartsWith(&local_18,L"/Game/Tests/WorldPartition",0x1a,IgnoreCase);
    if (!bVar1) {
      bVar1 = true;
      goto LAB_1488958a9;
    }
  }
  else {
    bVar1 = ::FString::StartsWith(&local_18,L"/Game/",6,IgnoreCase);
    if (bVar1) goto LAB_148895882;
  }
  bVar1 = false;
LAB_1488958a9:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// LexToString @ 148895fc0

wchar_t * __cdecl LexToString(ELockState param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == None) {
    return L"None";
  }
  if (param_1 == ReadOnly) {
    return L"ReadOnly";
  }
  if (param_1 == ReadWrite) {
    return L"WriteOnly";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                     ,0x85,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"Unknown";
}

// SerializePlatformData @ 1488996c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SerializePlatformData
          (FArchive *param_1,FTexturePlatformData *param_2,UTexture *param_3,
          EPlatformDataSerializationFlags param_4,bool param_5)

{
  TRefCountPtr<FSharedImage_const_> *pTVar1;
  ulonglong *puVar2;
  uint *puVar3;
  longlong *plVar4;
  FDerivedData *this;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  code *pcVar8;
  UTexture *pUVar9;
  FTexturePlatformData *pFVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_void___cdecl_SerializePlatformData(FArchive_&,FTexturePlatformData_*,UTexture_*,EPlatformDataSerializationFlags,bool)_::_2_::FStat_STAT_Texture_SerializePlatformData>
  FVar17;
  UEnum *this_00;
  FName FVar18;
  long64 lVar19;
  FString *pFVar20;
  undefined8 *puVar21;
  char *pcVar22;
  FSharedImage *pFVar23;
  FSharedImage *pFVar24;
  undefined8 *puVar25;
  FVirtualTextureBuiltData *pFVar26;
  FVirtualTextureBuiltData *pFVar27;
  ForAnyElementType FVar28;
  ulonglong uVar29;
  uint uVar30;
  FName FVar31;
  EPlatformDataSerializationFlags EVar32;
  uint uVar33;
  longlong lVar34;
  FVirtualTextureBuiltData *pFVar35;
  int iVar36;
  undefined1 *puVar37;
  FBulkData *pFVar38;
  FScriptContainerElement *pFVar39;
  byte bVar40;
  FScriptContainerElement *pFVar41;
  bool bVar42;
  undefined1 auStackY_248 [32];
  uint local_1e4;
  byte local_1e0;
  uint local_1dc;
  char local_1d8 [4];
  uint local_1d4;
  uint local_1d0;
  EPlatformDataSerializationFlags local_1cc;
  uint local_1c8 [2];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  undefined1 local_1ac;
  undefined1 local_1ab [3];
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  UTexture *local_198;
  FName local_190;
  uint local_188;
  uint local_184;
  undefined8 *local_180;
  undefined8 *local_178;
  FString local_170;
  FString local_160;
  FColor_u_0 local_150 [2];
  FName local_148;
  undefined8 local_140;
  FTexturePlatformData *local_138;
  FName local_130;
  FScriptContainerElement *local_120;
  int *piStack_118;
  undefined8 local_110;
  FScriptContainerElement *local_108;
  int *piStack_100;
  int local_f8;
  undefined4 uStack_f4;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  FName local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  FName local_b0;
  FName local_a8;
  undefined1 local_a0 [8];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  char local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar12 = false;
  bVar13 = false;
  local_184 = 0;
  local_198 = param_3;
  local_138 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_Texture_SerializePlatformData ==
        (FThreadSafeStaticStat<_void___cdecl_SerializePlatformData(FArchive_&,FTexturePlatformData_*,UTexture_*,EPlatformDataSerializationFlags,bool)_::_2_::FStat_STAT_Texture_SerializePlatformData>
         )0x0) {
      pFVar16 = FName::FName(&local_b0,"STAT_Texture_SerializePlatformData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Texture_SerializePlatformData,*pFVar16,
                 L"SerializePlatformData","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar17 = StatPtr_STAT_Texture_SerializePlatformData;
  if (StatPtr_STAT_Texture_SerializePlatformData ==
      (FThreadSafeStaticStat<_void___cdecl_SerializePlatformData(FArchive_&,FTexturePlatformData_*,UTexture_*,EPlatformDataSerializationFlags,bool)_::_2_::FStat_STAT_Texture_SerializePlatformData>
       )0x0) {
    pFVar16 = FName::FName(&local_a8,"STAT_Texture_SerializePlatformData");
    FVar17 = (FThreadSafeStaticStat<_void___cdecl_SerializePlatformData(FArchive_&,FTexturePlatformData_*,UTexture_*,EPlatformDataSerializationFlags,bool)_::_2_::FStat_STAT_Texture_SerializePlatformData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Texture_SerializePlatformData,
                          *pFVar16,L"SerializePlatformData","STATGROUP_LoadTime","STATCAT_Advanced",
                          L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar40 = 0;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar31 = *(FName *)FVar17;
  local_1e0 = 0;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_148899868:
    local_190 = local_130;
    FVar31 = local_130;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar40 = 1;
      local_1e0 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_148.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_148.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                   ,0xb60);
        bVar40 = 3;
        local_1e0 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148899868;
    local_190 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    local_1e0 = bVar40 | 4;
  }
  this_00 = UTexture::GetPixelFormatEnum();
  EVar32 = param_4 & Cooked;
  if (((param_1->field_0x28 & 4) == 0) || (param_2->VTData == (FVirtualTextureBuiltData *)0x0)) {
    bVar42 = false;
    local_188 = 0;
  }
  else {
    bVar42 = true;
    local_188 = 1;
  }
  local_1e4 = (param_2->Mips).Array.ArrayNum;
  local_1dc = 0;
  local_1c8[0] = 0;
  local_1cc = EVar32;
  if (EVar32 == None) {
LAB_148899958:
    local_1d8[0] = '\0';
    if (EVar32 != None) {
      if (!bVar42) goto LAB_14889996a;
      goto LAB_14889997a;
    }
  }
  else {
    if (((bVar42) && (local_1e4 != 0)) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("NumMips == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                            ,0xb72,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((((param_1->field_0x28 & 4) == 0) || (bVar42)) || ((param_4 & Streamable) == None))
    goto LAB_148899958;
    bVar11 = UTexture::IsPossibleToStream(local_198);
    if ((!bVar11) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("Texture->IsPossibleToStream()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                            ,0xbb5,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar14 = FTexturePlatformData::GetNumNonStreamingMips(param_2,true);
    local_1c8[0] = local_1e4;
    if ((int)uVar14 < (int)local_1e4) {
      local_1c8[0] = uVar14;
    }
    local_1c8[0] = local_1e4 - local_1c8[0];
LAB_14889996a:
    if (((param_1->field_0x28 & 4) == 0) || ((param_1->field_0x2b & 0x10) == 0)) {
LAB_14889997a:
      local_1d8[0] = '\0';
    }
    else {
      local_1d8[0] = '\x01';
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_1d8);
    if (local_1d8[0] != '\0') {
      if (local_1e4 == 0) {
        local_1d4 = 0;
LAB_148899aeb:
        local_1d0 = 0;
LAB_148899af0:
        local_1b0 = 0;
      }
      else {
        lVar34 = (longlong)(int)local_1dc;
        uVar14 = 0;
        if ((int)local_1dc < (param_2->Mips).Array.ArrayNum) {
          uVar14 = ~local_1dc >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1d4 = (uint)*(ushort *)
                           (*(longlong *)((param_2->Mips).Array.AllocatorInstance.Data + lVar34 * 8)
                           + 0x48);
        if (local_1e4 == 0) goto LAB_148899aeb;
        lVar34 = (longlong)(int)local_1dc;
        uVar14 = 0;
        if ((int)local_1dc < (param_2->Mips).Array.ArrayNum) {
          uVar14 = ~local_1dc >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1d0 = (uint)*(ushort *)
                           (*(longlong *)((param_2->Mips).Array.AllocatorInstance.Data + lVar34 * 8)
                           + 0x4a);
        if (local_1e4 == 0) goto LAB_148899af0;
        lVar34 = (longlong)(int)local_1dc;
        uVar14 = 0;
        if ((int)local_1dc < (param_2->Mips).Array.ArrayNum) {
          uVar14 = ~local_1dc >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1b0 = (uint)*(ushort *)
                           (*(longlong *)((param_2->Mips).Array.AllocatorInstance.Data + lVar34 * 8)
                           + 0x4c);
      }
      puVar2 = *(ulonglong **)&param_1->field_0x8;
      piVar5 = (int *)*puVar2 + 1;
      if ((int *)puVar2[1] < piVar5) {
        local_1a8 = 0;
        if ((param_1->field_0x28 & 1) == 0) {
          local_1a8 = local_188;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1a8);
        if (1 < local_1a8) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        if ((param_1->field_0x28 & 1) != 0) {
          bVar42 = local_1a8 != 0;
        }
      }
      else {
        bVar42 = *(int *)*puVar2 != 0;
        *puVar2 = (ulonglong)piVar5;
      }
      if (bVar42) {
        bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                            ,0xc38,L"");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        plVar4 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_1d4);
          }
        }
        else {
          local_1d4 = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        plVar4 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_1d0);
          }
        }
        else {
          local_1d0 = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        plVar4 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_1b0);
          }
        }
        else {
          local_1b0 = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        if ((param_1->field_0x28 & 1) != 0) {
          param_2->SizeX = local_1d4;
          param_2->SizeY = local_1d0;
        }
      }
      puVar37 = &param_1->field_0x2a;
      puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
        if ((*puVar37 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&param_2->PackedData);
        }
      }
      else {
        param_2->PackedData = *puVar3;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      if (param_5) {
        if ((param_2->PackedData & 0x40000000) != 0) {
          operator<<(param_1,&param_2->OptData);
        }
      }
      else if ((param_1->field_0x28 & 1) != 0) {
        param_2->PackedData = param_2->PackedData & 0xbfffffff;
        (param_2->OptData).ExtData = 0;
        (param_2->OptData).NumMipsInTail = 0;
      }
      if ((param_1->field_0x28 & 4) == 0) {
        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_170.Data.ArrayNum = 0;
        local_170.Data.ArrayMax = 0;
        operator<<(param_1,&local_170);
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_170.Data.ArrayNum != 0) {
          FVar28.Data = local_170.Data.AllocatorInstance.Data;
        }
        pFVar16 = FName::FName(&local_d0,(wchar_t *)FVar28.Data);
        lVar19 = UEnum::GetValueByName(this_00,*pFVar16,None);
        if ((lVar19 == -1) || (0x5d < lVar19)) {
          if (2 < (byte)LogTexture._0_1_) {
            if (local_198 != (UTexture *)0x0) {
              pFVar20 = UObjectBaseUtility::GetPathName
                                  ((UObjectBaseUtility *)local_198,&local_68,(UObject *)0x0);
              if ((pFVar20->Data).ArrayNum == 0) {
                bVar13 = true;
              }
              else {
                bVar13 = true;
              }
            }
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogTexture);
            if ((bVar13) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
               ) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          lVar19 = 0;
        }
        param_2->PixelFormat = (EPixelFormat)lVar19;
        local_f0.Data.AllocatorInstance.Data = local_170.Data.AllocatorInstance.Data;
      }
      else {
        FVar18 = UEnum::GetNameByValue(this_00,(long64)local_a0);
        FName::GetPlainNameString((FName *)FVar18,&local_f0);
        operator<<(param_1,&local_f0);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (bVar42) {
        bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                            ,0xc71,L"");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        plVar4 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((*puVar37 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_1e4);
          }
        }
        else {
          local_1e4 = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        if (((int)local_1e4 < (int)(param_2->OptData).NumMipsInTail) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("NumMips >= (int32)PlatformData->GetNumMipsInTail()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                                ,0xc76,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar4 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((*puVar37 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_1c8);
          }
        }
        else {
          local_1c8[0] = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        if ((((int)local_1c8[0] < 0) || ((int)local_1e4 < (int)local_1c8[0])) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("FirstInlineMip >= 0 && FirstInlineMip <= NumMips",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                                ,0xc79,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((param_1->field_0x28 & 1) != 0) {
          TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>::Empty
                    (&param_2->Mips,local_1e4);
          puVar25 = (undefined8 *)0x0;
          if (0 < (int)local_1e4) {
            do {
              puVar21 = operator_new(0x50);
              local_180 = (undefined8 *)0x0;
              if (puVar21 != (undefined8 *)0x0) {
                *puVar21 = 0;
                puVar21[1] = 0;
                puVar21[2] = 0;
                puVar21[3] = 0;
                puVar21[4] = 0;
                puVar21[5] = 0;
                puVar21[6] = 0;
                *(undefined4 *)((longlong)puVar21 + 0x2d) = 0xffffffff;
                *(undefined1 *)((longlong)puVar21 + 0x31) = 0xff;
                puVar21[7] = FIoChunkId::InvalidChunkId.Id._0_8_;
                *(undefined4 *)(puVar21 + 8) = FIoChunkId::InvalidChunkId.Id._8_4_;
                *(undefined4 *)(puVar21 + 9) = 0;
                *(undefined2 *)((longlong)puVar21 + 0x4c) = 0;
                local_180 = puVar21;
              }
              pFVar39 = (param_2->Mips).Array.AllocatorInstance.Data;
              if (((pFVar39 <= (FScriptContainerElement *)&local_180) &&
                  ((FScriptContainerElement *)&local_180 <
                   pFVar39 + (longlong)(param_2->Mips).Array.ArrayMax * 8)) &&
                 (bVar13 = FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar15 = (param_2->Mips).Array.ArrayNum;
              if (iVar15 == (param_2->Mips).Array.ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)&param_2->Mips,
                                    &(param_2->Mips).Array.ArrayMax);
              }
              (param_2->Mips).Array.ArrayNum = iVar15 + 1;
              *(undefined8 **)((param_2->Mips).Array.AllocatorInstance.Data + (longlong)iVar15 * 8)
                   = local_180;
              iVar15 = (param_2->Mips).Array.ArrayNum;
              uVar30 = iVar15 - 1;
              uVar14 = 0;
              if ((int)uVar30 < iVar15) {
                uVar14 = ~uVar30 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FBulkData::RemoveBulkData
                        ((FBulkData *)
                         (*(longlong *)
                           ((param_2->Mips).Array.AllocatorInstance.Data +
                           (longlong)(param_2->Mips).Array.ArrayNum * 8 + -8) + 0x20));
              uVar14 = (int)puVar25 + 1;
              puVar25 = (undefined8 *)(ulonglong)uVar14;
            } while ((int)uVar14 < (int)local_1e4);
          }
        }
        pUVar9 = local_198;
        iVar36 = 0;
        iVar15 = iVar36;
        if (0 < (int)local_1e4) {
          do {
            uVar30 = local_1dc + iVar15;
            uVar14 = 0;
            if ((int)uVar30 < (param_2->Mips).Array.ArrayNum) {
              uVar14 = ~uVar30 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar34 = *(longlong *)
                      ((param_2->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar30 * 8);
            if ((param_1->field_0x28 & 4) == 0) {
              *(undefined2 *)(lVar34 + 0x48) = (undefined2)local_1d4;
              *(undefined2 *)(lVar34 + 0x4a) = (undefined2)local_1d0;
              *(undefined2 *)(lVar34 + 0x4c) = (undefined2)local_1b0;
            }
            else if ((*(ushort *)(lVar34 + 0x4c) < 2) && ((int)local_1b0 < 2)) {
              if ((*(ushort *)(lVar34 + 0x48) != local_1d4) ||
                 (*(ushort *)(lVar34 + 0x4a) != local_1d0)) {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)pUVar9,&local_98,(UObject *)0x0);
                bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("Mip.SizeX == MipSizeX && Mip.SizeY == MipSizeY",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                                    ,0xc94,L"Expected %dx%d mip and had %dx%d mip for \'%s\'");
                FVar28.Data = local_98.Data.AllocatorInstance.Data;
LAB_14889a2b0:
                if (FVar28.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar28.Data);
                }
                if (bVar13 != false) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
            }
            else if ((*(ushort *)(lVar34 + 0x48) != local_1d4) ||
                    ((*(ushort *)(lVar34 + 0x4a) != local_1d0 ||
                     (*(ushort *)(lVar34 + 0x4c) != local_1b0)))) {
              UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar9,&local_88,(UObject *)0x0)
              ;
              bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("Mip.SizeX == MipSizeX && Mip.SizeY == MipSizeY && Mip.SizeZ == MipSizeZ"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                                  ,0xc8e,L"Expected %dx%dx%d mip and had %dx%dx%d mip for \'%s\'");
              FVar28.Data = local_88.Data.AllocatorInstance.Data;
              goto LAB_14889a2b0;
            }
            uVar14 = (int)local_1d4 / 2;
            local_1d4 = 1;
            if (1 < (int)uVar14) {
              local_1d4 = uVar14;
            }
            uVar14 = (int)local_1d0 / 2;
            local_1d0 = 1;
            if (1 < (int)uVar14) {
              local_1d0 = uVar14;
            }
            iVar15 = iVar15 + 1;
            FVar31 = local_190;
          } while (iVar15 < (int)local_1e4);
        }
        pUVar9 = local_198;
        if (0 < (int)local_1c8[0]) {
          do {
            uVar30 = local_1dc + iVar36;
            uVar14 = 0;
            if ((int)uVar30 < (param_2->Mips).Array.ArrayNum) {
              uVar14 = ~uVar30 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            this = *(FDerivedData **)
                    ((param_2->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar30 * 8);
            UE::FDerivedData::Serialize(this,param_1,(UObject *)pUVar9);
            if (((this->CookedData).ChunkId[0xb] == '\0') &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("Mip.DerivedData",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                                    ,0xca5,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar36 = iVar36 + 1;
          } while (iVar36 < (int)local_1c8[0]);
        }
        uVar14 = local_1c8[0];
        if ((int)local_1c8[0] < (int)local_1e4) {
          do {
            uVar33 = local_1dc + uVar14;
            uVar30 = 0;
            if ((int)uVar33 < (param_2->Mips).Array.ArrayNum) {
              uVar30 = ~uVar33 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar38 = (FBulkData *)
                      (*(longlong *)
                        ((param_2->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar33 * 8) +
                      0x20);
            if ((param_1->field_0x28 & 4) == 0) {
              FBulkData::Serialize(pFVar38,param_1,(UObject *)pUVar9,false,1,None);
            }
            else {
              uVar30 = FBulkData::GetBulkDataFlags(pFVar38);
              FBulkData::SetBulkDataFlags(pFVar38,0x48);
              FBulkData::Serialize(pFVar38,param_1,(UObject *)pUVar9,false,1,None);
              FBulkData::ResetBulkDataFlags(pFVar38,uVar30);
            }
            uVar14 = uVar14 + 1;
            FVar31 = local_190;
          } while ((int)uVar14 < (int)local_1e4);
        }
      }
      goto LAB_14889b437;
    }
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_58,0xf);
    pcVar22 = local_58;
    do {
      if (*pcVar22 != '\0') {
        bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Algo::AllOf(PlaceholderDerivedData, [](uint8 Value) { return Value == 0; })"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                            ,0xcbb,L"");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        break;
      }
      pcVar22 = pcVar22 + 1;
    } while (pcVar22 != local_58 + 0xf);
  }
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->SizeX = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar5 = &param_2->SizeY;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->PackedData);
    }
  }
  else {
    param_2->PackedData = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      FVar18 = UEnum::GetNameByValue(this_00,(long64)local_c0);
      FName::GetPlainNameString((FName *)FVar18,&local_e0);
      operator<<(param_1,&local_e0);
      goto LAB_14889a73f;
    }
  }
  else {
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Data.ArrayNum = 0;
    local_160.Data.ArrayMax = 0;
    operator<<(param_1,&local_160);
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar28.Data = local_160.Data.AllocatorInstance.Data;
    }
    pFVar16 = FName::FName(&local_c8,(wchar_t *)FVar28.Data);
    lVar19 = UEnum::GetValueByName(this_00,*pFVar16,None);
    if ((lVar19 == -1) || (0x5d < lVar19)) {
      if (2 < (byte)LogTexture._0_1_) {
        if (local_198 != (UTexture *)0x0) {
          pFVar20 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)local_198,&local_78,(UObject *)0x0);
          if ((pFVar20->Data).ArrayNum == 0) {
            bVar12 = true;
          }
          else {
            bVar12 = true;
          }
        }
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogTexture);
        if ((bVar12) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      lVar19 = 0;
    }
    param_2->PixelFormat = (EPixelFormat)lVar19;
    local_e0.Data.AllocatorInstance.Data = local_160.Data.AllocatorInstance.Data;
LAB_14889a73f:
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  if (param_5) {
    if ((param_2->PackedData & 0x40000000) != 0) {
      operator<<(param_1,&param_2->OptData);
    }
  }
  else if ((param_1->field_0x28 & 1) != 0) {
    local_140 = 0;
    FTexturePlatformData::SetOptData(param_2,(FOptTexturePlatformData)0x0);
  }
  pFVar24 = (FSharedImage *)0x0;
  if ((param_2->PackedData & 0x20000000) != 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      pFVar23 = operator_new(0x38);
      if (pFVar23 != (FSharedImage *)0x0) {
        *(undefined8 *)&pFVar23->field_0xc = 0;
        *(undefined ***)pFVar23 = &___7FSharedImage__6B_;
        *(undefined4 *)&pFVar23->field_0x1c = 0x201;
        *(undefined8 *)&pFVar23->field_0x14 = 0;
        *(undefined8 *)&pFVar23->field_0x20 = 0;
        *(undefined8 *)&pFVar23->field_0x28 = 0;
        *(undefined8 *)&pFVar23->field_0x30 = 0;
        *(undefined4 *)&pFVar23->field_0x8 = 0;
        LOCK();
        *(int *)&pFVar23->field_0x8 = *(int *)&pFVar23->field_0x8 + 1;
        UNLOCK();
        pFVar24 = pFVar23;
      }
      pTVar1 = &param_2->CPUCopy;
      pFVar23 = pFVar24;
      if (pTVar1 != (TRefCountPtr<FSharedImage_const_> *)&local_b8) {
        pFVar23 = pTVar1->Reference;
        pTVar1->Reference = pFVar24;
      }
      if (pFVar23 != (FSharedImage *)0x0) {
        puVar37 = &pFVar23->field_0x8;
        LOCK();
        iVar15 = *(int *)puVar37;
        *(int *)puVar37 = *(int *)puVar37 + -1;
        UNLOCK();
        if ((iVar15 == 1) && (puVar37 != (undefined1 *)0x0)) {
          (*(code *)**(undefined8 **)pFVar23)(pFVar23,1);
        }
      }
    }
    pFVar24 = (param_2->CPUCopy).Reference;
    puVar7 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    puVar37 = &pFVar24->field_0x10;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar37,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar37);
      }
    }
    else {
      *(undefined4 *)puVar37 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar37 = &pFVar24->field_0x14;
    puVar7 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar37,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar37);
      }
    }
    else {
      *(undefined4 *)puVar37 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar37 = &pFVar24->field_0x18;
    puVar7 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar37,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar37);
      }
    }
    else {
      *(undefined4 *)puVar37 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar37 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar37 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&pFVar24->field_0x1c,1);
    }
    else {
      pFVar24->field_0x1c = *puVar37;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar37 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar37 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&pFVar24->field_0x1d,1);
    }
    else {
      pFVar24->field_0x1d = *puVar37;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
              (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&pFVar24->field_0x20);
    EVar32 = local_1cc;
  }
  if (EVar32 == None) {
LAB_14889aa0d:
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = 0;
    if (EVar32 != None) goto LAB_14889aa26;
  }
  else {
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1dc,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_1dc);
      }
    }
    else {
      local_1dc = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14889aa0d;
    if ((local_198 == (UTexture *)0x0) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Texture",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                            ,0xcfa,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_1dc = 0;
LAB_14889aa26:
    local_1b8 = 0;
    local_1c0.Data = (FScriptContainerElement *)0x0;
    if ((param_1->field_0x28 & 4) != 0) {
      if (bVar42) {
        uVar14 = (param_2->VTData->Chunks).ArrayNum;
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if (0 < (int)uVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar14,&local_1c0,0,(int *)((longlong)&local_1b8 + 4));
        }
        pFVar27 = param_2->VTData;
        local_184 = (pFVar27->Chunks).ArrayNum;
        uVar29 = (ulonglong)(int)local_184;
        pFVar39 = (pFVar27->Chunks).AllocatorInstance.Data;
        pFVar38 = (FBulkData *)(pFVar39 + 0x20);
        pFVar41 = pFVar39 + uVar29 * 0x90;
        while( true ) {
          if ((pFVar27->Chunks).ArrayNum != (int)uVar29) {
            local_1ac = 0;
            `TCheckedPointerIterator<FVirtualTextureDataChunk,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_1ac);
          }
          if (pFVar39 == pFVar41) break;
          local_1a4 = FBulkData::GetBulkDataFlags(pFVar38);
          if (((local_1c0.Data <= (FScriptContainerElement *)&local_1a4) &&
              ((FScriptContainerElement *)&local_1a4 <
               local_1c0.Data + (longlong)local_1b8._4_4_ * 4)) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar15 = (int)local_1b8;
          if ((int)local_1b8 == local_1b8._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1c0,(int *)((longlong)&local_1b8 + 4));
          }
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar15 + 1);
          *(uint *)(local_1c0.Data + (longlong)iVar15 * 4) = local_1a4;
          FBulkData::SetBulkDataFlags(pFVar38,0x400);
          uVar29 = (ulonglong)local_184;
          pFVar39 = pFVar39 + 0x90;
          pFVar38 = (FBulkData *)&pFVar38[3].BulkChunkId;
        }
      }
      else {
        uVar14 = local_1e4 + local_1dc;
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if (0 < (int)uVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar14,&local_1c0,0,(int *)((longlong)&local_1b8 + 4));
        }
        pFVar41 = (param_2->Mips).Array.AllocatorInstance.Data;
        piStack_118 = &(param_2->Mips).Array.ArrayNum;
        local_f8 = *piStack_118;
        pFVar39 = pFVar41 + (longlong)local_f8 * 8;
        local_110 = CONCAT44(uStack_f4,local_f8);
        local_108 = pFVar41;
        piStack_100 = piStack_118;
        while( true ) {
          local_120 = pFVar41;
          if (*piStack_118 != (int)local_110) {
            local_1ab[0] = 0;
            `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1ab);
          }
          if (pFVar41 == pFVar39) break;
          local_1a0 = FBulkData::GetBulkDataFlags((FBulkData *)(*(longlong *)pFVar41 + 0x20));
          if (((local_1c0.Data <= (FScriptContainerElement *)&local_1a0) &&
              ((FScriptContainerElement *)&local_1a0 <
               local_1c0.Data + (longlong)local_1b8._4_4_ * 4)) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar15 = (int)local_1b8;
          if ((int)local_1b8 == local_1b8._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1c0,(int *)((longlong)&local_1b8 + 4));
          }
          pFVar41 = pFVar41 + 8;
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar15 + 1);
          *(uint *)(local_1c0.Data + (longlong)iVar15 * 4) = local_1a0;
        }
        iVar15 = 0;
        if (0 < (int)local_1c8[0]) {
          do {
            uVar30 = local_1dc + iVar15;
            uVar14 = 0;
            if ((int)uVar30 < (param_2->Mips).Array.ArrayNum) {
              uVar14 = ~uVar30 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FBulkData::SetBulkDataFlags
                      ((FBulkData *)
                       (*(longlong *)
                         ((param_2->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar30 * 8)
                       + 0x20),0x400);
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)local_1c8[0]);
        }
        uVar14 = local_1c8[0];
        if ((int)local_1c8[0] < (int)local_1e4) {
          do {
            uVar33 = local_1dc + uVar14;
            uVar30 = 0;
            if ((int)uVar33 < (param_2->Mips).Array.ArrayNum) {
              uVar30 = ~uVar33 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FBulkData::SetBulkDataFlags
                      ((FBulkData *)
                       (*(longlong *)
                         ((param_2->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar33 * 8)
                       + 0x20),0x48);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_1e4);
        }
      }
    }
  }
  iVar15 = 0;
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1e4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1e4);
    }
  }
  else {
    local_1e4 = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (((int)local_1e4 < (int)(param_2->OptData).NumMipsInTail) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("NumMips >= (int32)PlatformData->GetNumMipsInTail()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                          ,0xd2f,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if ((local_1dc != 0) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("FirstMipToSerialize == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                            ,0xd32,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>::Empty(&param_2->Mips,local_1e4);
    if (0 < (int)local_1e4) {
      do {
        puVar25 = operator_new(0x50);
        local_178 = (undefined8 *)0x0;
        if (puVar25 != (undefined8 *)0x0) {
          *puVar25 = 0;
          puVar25[1] = 0;
          puVar25[2] = 0;
          puVar25[3] = 0;
          puVar25[4] = 0;
          puVar25[5] = 0;
          puVar25[6] = 0;
          *(undefined4 *)((longlong)puVar25 + 0x2d) = 0xffffffff;
          *(undefined1 *)((longlong)puVar25 + 0x31) = 0xff;
          puVar25[7] = FIoChunkId::InvalidChunkId.Id._0_8_;
          *(undefined4 *)(puVar25 + 8) = FIoChunkId::InvalidChunkId.Id._8_4_;
          *(undefined4 *)(puVar25 + 9) = 0;
          *(undefined2 *)((longlong)puVar25 + 0x4c) = 0;
          local_178 = puVar25;
        }
        pFVar39 = (param_2->Mips).Array.AllocatorInstance.Data;
        if (((pFVar39 <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             pFVar39 + (longlong)(param_2->Mips).Array.ArrayMax * 8)) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar36 = (param_2->Mips).Array.ArrayNum;
        if (iVar36 == (param_2->Mips).Array.ArrayMax) {
          iVar36 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&param_2->Mips,
                              &(param_2->Mips).Array.ArrayMax);
        }
        iVar15 = iVar15 + 1;
        (param_2->Mips).Array.ArrayNum = iVar36 + 1;
        *(undefined8 **)((param_2->Mips).Array.AllocatorInstance.Data + (longlong)iVar36 * 8) =
             local_178;
      } while (iVar15 < (int)local_1e4);
    }
  }
  pUVar9 = local_198;
  pFVar35 = (FVirtualTextureBuiltData *)0x0;
  pFVar27 = pFVar35;
  if (0 < (int)local_1e4) {
    do {
      iVar15 = (int)pFVar27;
      uVar30 = local_1dc + iVar15;
      uVar14 = 0;
      if ((int)uVar30 < (param_2->Mips).Array.ArrayNum) {
        uVar14 = ~uVar30 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FTexture2DMipMap::Serialize
                (*(FTexture2DMipMap **)
                  ((param_2->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar30 * 8),param_1
                 ,(UObject *)pUVar9,iVar15,param_5);
      FVar31 = local_190;
      pFVar27 = (FVirtualTextureBuiltData *)(ulonglong)(iVar15 + 1U);
    } while ((int)(iVar15 + 1U) < (int)local_1e4);
  }
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  piVar5 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar5) {
    local_19c = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_19c = local_188;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_19c,4);
    if (1 < local_19c) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      bVar42 = local_19c != 0;
    }
  }
  else {
    bVar42 = *(int *)*puVar2 != 0;
    *puVar2 = (ulonglong)piVar5;
  }
  pFVar10 = local_138;
  if (bVar42) {
    if ((param_1->field_0x28 & 1) == 0) {
LAB_14889b1bf:
      if ((param_2->VTData == (FVirtualTextureBuiltData *)0x0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("PlatformData->VTData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                              ,0xd47,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (param_2->VTData == (FVirtualTextureBuiltData *)0x0) {
      pFVar26 = operator_new(0x128);
      pFVar27 = pFVar35;
      if (pFVar26 != (FVirtualTextureBuiltData *)0x0) {
        pFVar26->NumLayers = 0;
        pFVar26->NumMips = 0;
        pFVar26->Width = 0;
        pFVar26->Height = 0;
        pFVar26->WidthInBlocks = 0;
        pFVar26->HeightInBlocks = 0;
        pFVar26->TileSize = 0;
        pFVar26->TileBorderSize = 0;
        (pFVar26->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar26->Chunks).ArrayNum = 0;
        (pFVar26->Chunks).ArrayMax = 0;
        (pFVar26->TileDataOffsetPerLayer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar26->TileDataOffsetPerLayer).ArrayNum = 0;
        (pFVar26->TileDataOffsetPerLayer).ArrayMax = 0;
        (pFVar26->ChunkIndexPerMip).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar26->ChunkIndexPerMip).ArrayNum = 0;
        (pFVar26->ChunkIndexPerMip).ArrayMax = 0;
        (pFVar26->BaseOffsetPerMip).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar26->BaseOffsetPerMip).ArrayNum = 0;
        (pFVar26->BaseOffsetPerMip).ArrayMax = 0;
        (pFVar26->TileOffsetData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar26->TileOffsetData).ArrayNum = 0;
        (pFVar26->TileOffsetData).ArrayMax = 0;
        (pFVar26->TileIndexPerChunk).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar26->TileIndexPerChunk).ArrayNum = 0;
        (pFVar26->TileIndexPerChunk).ArrayMax = 0;
        (pFVar26->TileIndexPerMip).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar26->TileIndexPerMip).ArrayNum = 0;
        (pFVar26->TileIndexPerMip).ArrayMax = 0;
        (pFVar26->TileOffsetInChunk).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar26->TileOffsetInChunk).ArrayNum = 0;
        (pFVar26->TileOffsetInChunk).ArrayMax = 0;
        pFVar26->LayerTypes[0] = '\0';
        pFVar26->LayerTypes[1] = '\0';
        pFVar26->LayerTypes[2] = '\0';
        pFVar26->LayerTypes[3] = '\0';
        pFVar26->LayerTypes[4] = '\0';
        pFVar26->LayerTypes[5] = '\0';
        pFVar26->LayerTypes[6] = '\0';
        pFVar26->LayerTypes[7] = '\0';
        *(undefined8 *)&pFVar26->LayerFallbackColors[0].field0_0x0 = 0;
        *(undefined8 *)((longlong)&pFVar26->LayerFallbackColors[0].field0_0x0 + 8) = 0;
        *(undefined8 *)&pFVar26->LayerFallbackColors[1].field0_0x0 = 0;
        *(undefined8 *)((longlong)&pFVar26->LayerFallbackColors[1].field0_0x0 + 8) = 0;
        *(undefined8 *)&pFVar26->LayerFallbackColors[2].field0_0x0 = 0;
        *(undefined8 *)((longlong)&pFVar26->LayerFallbackColors[2].field0_0x0 + 8) = 0;
        *(undefined8 *)&pFVar26->LayerFallbackColors[3].field0_0x0 = 0;
        *(undefined8 *)((longlong)&pFVar26->LayerFallbackColors[3].field0_0x0 + 8) = 0;
        *(undefined8 *)&pFVar26->LayerFallbackColors[4].field0_0x0 = 0;
        *(undefined8 *)((longlong)&pFVar26->LayerFallbackColors[4].field0_0x0 + 8) = 0;
        *(undefined8 *)&pFVar26->LayerFallbackColors[5].field0_0x0 = 0;
        *(undefined8 *)((longlong)&pFVar26->LayerFallbackColors[5].field0_0x0 + 8) = 0;
        *(undefined8 *)&pFVar26->LayerFallbackColors[6].field0_0x0 = 0;
        *(undefined8 *)((longlong)&pFVar26->LayerFallbackColors[6].field0_0x0 + 8) = 0;
        *(undefined8 *)&pFVar26->LayerFallbackColors[7].field0_0x0 = 0;
        *(undefined8 *)((longlong)&pFVar26->LayerFallbackColors[7].field0_0x0 + 8) = 0;
        pFVar27 = pFVar26;
      }
      param_2->VTData = pFVar27;
      goto LAB_14889b1bf;
    }
    FVirtualTextureBuiltData::Serialize(param_2->VTData,param_1,(UObject *)local_198,local_1dc);
    EVar32 = local_1cc;
    pFVar27 = pFVar35;
    if (0 < (int)local_1b8) {
      do {
        if ((((param_1->field_0x28 & 4) == 0) || (EVar32 == None)) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Ar.IsSaving() && bCooked",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                                ,0xd4c,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar26 = param_2->VTData;
        uVar30 = (uint)pFVar35;
        uVar14 = 0;
        if ((int)uVar30 < (pFVar26->Chunks).ArrayNum) {
          uVar14 = ~uVar30 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar39 = (pFVar26->Chunks).AllocatorInstance.Data;
        uVar14 = 0;
        if ((int)uVar30 < (int)local_1b8) {
          uVar14 = ~uVar30 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FBulkData::ResetBulkDataFlags
                  ((FBulkData *)(pFVar39 + (longlong)(int)uVar30 * 0x90 + 0x20),
                   *(uint *)(local_1c0.Data + (longlong)pFVar27));
        pFVar35 = (FVirtualTextureBuiltData *)(ulonglong)(uVar30 + 1);
        FVar31 = local_190;
        param_2 = local_138;
        pFVar27 = (FVirtualTextureBuiltData *)&pFVar27->NumMips;
      } while ((int)(uVar30 + 1) < (int)local_1b8);
    }
  }
  else {
    pFVar27 = pFVar35;
    pFVar26 = pFVar35;
    if (0 < (int)local_1b8) {
      do {
        if (((param_1->field_0x28 & 4) == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Ar.IsSaving()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                                ,0xd54,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar30 = (uint)pFVar35;
        uVar14 = 0;
        if ((int)uVar30 < (pFVar10->Mips).Array.ArrayNum) {
          uVar14 = ~uVar30 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar34 = *(longlong *)
                  (pFVar26->LayerTypes +
                  (longlong)((pFVar10->Mips).Array.AllocatorInstance.Data + -0x20));
        uVar14 = 0;
        if ((int)uVar30 < (int)local_1b8) {
          uVar14 = ~uVar30 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FBulkData::ResetBulkDataFlags
                  ((FBulkData *)(lVar34 + 0x20),*(uint *)(local_1c0.Data + (longlong)pFVar27));
        pFVar35 = (FVirtualTextureBuiltData *)(ulonglong)(uVar30 + 1);
        FVar31 = local_190;
        pFVar27 = (FVirtualTextureBuiltData *)&pFVar27->NumMips;
        pFVar26 = (FVirtualTextureBuiltData *)&pFVar26->Width;
      } while ((int)(uVar30 + 1) < (int)local_1b8);
    }
  }
  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data);
  }
LAB_14889b437:
  bVar40 = local_1e0;
  if ((local_1e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar40 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar40 & 4) != 0) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return;
}

// StreamVirtualTextureMips @ 14889c2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
StreamVirtualTextureMips
          (FVirtualTexture2DResource *param_1,FStreamableRenderResourceState *param_2,int param_3)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FVirtualTexture2DResource *pFStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FVirtualTexture2DResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar1 = (param_2->field0_0x0)._s_0.NumRequestedLODs;
  *(byte *)&param_2->field0_0x0 = *(byte *)&param_2->field0_0x0 & 0xf7;
  (param_2->field0_0x0)._s_0.NumResidentLODs = uVar1;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`StreamVirtualTextureMips'::`2'::<lambda_1>,1,0>::_vftable_;
  uStack_64 = auStack_b8._44_4_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`StreamVirtualTextureMips'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pFStack_70 = param_1;
  local_68 = param_3;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_StreamVirtualTextureMips_::__l2::TSTR_RequestVTTiles1931>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_38._4_4_ = uStack_64;
    local_38._0_4_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`StreamVirtualTextureMips'::__l2::TSTR_RequestVTTiles1931>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V1_NoRegister @ 14889fc10

UClass * __cdecl Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V1_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncLoadingTests_ConvertFromType_V1",
               &Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.InnerSingleton,
               UAsyncLoadingTests_ConvertFromType_V1::
               StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V1,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncLoadingTests_ConvertFromType_V1>,
               InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V1>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.InnerSingleton;
}

// Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V2_NoRegister @ 14889fcc0

UClass * __cdecl Z_Construct_UClass_UAsyncLoadingTests_ConvertFromType_V2_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncLoadingTests_ConvertFromType_V2",
               &Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.InnerSingleton,
               UAsyncLoadingTests_ConvertFromType_V2::
               StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V2,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncLoadingTests_ConvertFromType_V2>,
               InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.InnerSingleton;
}

// Z_Construct_UClass_UAsyncLoadingTests_Shared_NoRegister @ 14889fd70

UClass * __cdecl Z_Construct_UClass_UAsyncLoadingTests_Shared_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncLoadingTests_Shared",
               &Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.InnerSingleton,
               UAsyncLoadingTests_Shared::StaticRegisterNativesUAsyncLoadingTests_Shared,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAsyncLoadingTests_Shared>,
               InternalVTableHelperCtorCaller<UAsyncLoadingTests_Shared>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.InnerSingleton;
}

// Z_Construct_UClass_UTextImportContainer_NoRegister @ 14889fe20

UClass * __cdecl Z_Construct_UClass_UTextImportContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextImportContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextImportContainer",
               &Z_Registration_Info_UClass_UTextImportContainer.InnerSingleton,
               UTextImportContainer::StaticRegisterNativesUTextImportContainer,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UTextImportContainer>,
               InternalVTableHelperCtorCaller<UTextImportContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextImportContainer.InnerSingleton;
}

// Z_Construct_UClass_UTexture2DDynamic_NoRegister @ 14889fed0

UClass * __cdecl Z_Construct_UClass_UTexture2DDynamic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2DDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2DDynamic",
               &Z_Registration_Info_UClass_UTexture2DDynamic.InnerSingleton,
               UTexture2DDynamic::StaticRegisterNativesUTexture2DDynamic,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTexture2DDynamic>,
               InternalVTableHelperCtorCaller<UTexture2DDynamic>,local_res8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2DDynamic.InnerSingleton;
}

// Z_Construct_UClass_UTexture2D_NoRegister @ 14889ff90

UClass * __cdecl Z_Construct_UClass_UTexture2D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2D",&Z_Registration_Info_UClass_UTexture2D.InnerSingleton,
               UTexture2D::StaticRegisterNativesUTexture2D,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTexture2D>,InternalVTableHelperCtorCaller<UTexture2D>,
               local_res8,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2D.InnerSingleton;
}

// Z_Construct_UClass_UTextureCollection_NoRegister @ 1488a0050

UClass * __cdecl Z_Construct_UClass_UTextureCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureCollection",
               &Z_Registration_Info_UClass_UTextureCollection.InnerSingleton,
               UTextureCollection::StaticRegisterNativesUTextureCollection,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureCollection>,
               InternalVTableHelperCtorCaller<UTextureCollection>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureCollection.InnerSingleton;
}

// Z_Construct_UClass_UTextureCubeArray_NoRegister @ 1488a0110

UClass * __cdecl Z_Construct_UClass_UTextureCubeArray_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureCubeArray.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureCubeArray",
               &Z_Registration_Info_UClass_UTextureCubeArray.InnerSingleton,
               UTextureCubeArray::StaticRegisterNativesUTextureCubeArray,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureCubeArray>,
               InternalVTableHelperCtorCaller<UTextureCubeArray>,local_res8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureCubeArray.InnerSingleton;
}

// Z_Construct_UClass_UTextureCube_NoRegister @ 1488a01d0

UClass * __cdecl Z_Construct_UClass_UTextureCube_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureCube",
               &Z_Registration_Info_UClass_UTextureCube.InnerSingleton,
               UTextureCube::StaticRegisterNativesUTextureCube,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureCube>,
               InternalVTableHelperCtorCaller<UTextureCube>,local_res8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureCube.InnerSingleton;
}

// Z_Construct_UClass_UTransactionDiffingTestObject_NoRegister @ 1488a0290

UClass * __cdecl Z_Construct_UClass_UTransactionDiffingTestObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransactionDiffingTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TransactionDiffingTestObject",
               &Z_Registration_Info_UClass_UTransactionDiffingTestObject.InnerSingleton,
               UTransactionDiffingTestObject::StaticRegisterNativesUTransactionDiffingTestObject,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransactionDiffingTestObject>,
               InternalVTableHelperCtorCaller<UTransactionDiffingTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransactionDiffingTestObject.InnerSingleton;
}

// Z_Construct_UScriptStruct_FTextureFormatSettings @ 1488a0340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTextureFormatSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTextureFormatSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTextureFormatSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTextureFormatSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTextureFormatSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTexturePlatformData @ 1488a03c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTexturePlatformData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTexturePlatformData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTexturePlatformData.InnerSingleton,
               &Z_Construct_UScriptStruct_FTexturePlatformData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTexturePlatformData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTexturePlatformData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTextureSource @ 1488a0440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTextureSource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTextureSource.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTextureSource.InnerSingleton,
               &Z_Construct_UScriptStruct_FTextureSource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTextureSource.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTextureSource.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTextureSourceBlock @ 1488a04c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTextureSourceBlock(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTextureSourceBlock.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTextureSourceBlock.InnerSingleton,
               &Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTextureSourceBlock.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTextureSourceBlock.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTextureSourceColorSettings @ 1488a0540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTextureSourceColorSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTextureSourceColorSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTextureSourceColorSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTextureSourceColorSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTextureSourceColorSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo @ 1488a05c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTextureSourceLayerColorInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTextureSourceLayerColorInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTextureSourceLayerColorInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTextureSourceLayerColorInfo.InnerSingleton;
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

// Null'' @ 150404570

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer(&UE::DerivedData::FValue::Null.Data.CompressedData);
  return;
}

// Null'' @ 150404590

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer
            ((FCompositeBuffer *)&UE::DerivedData::FValueWithId::Null._padding_);
  return;
}

// OnIsPostLoadThreadSafe'' @ 1504045b0

void __cdecl
`dynamic_atexit_destructor_for_'UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe__(void)

{
  if (UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._8_4_ != 0) {
    if (UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._0_8_ == 0) {
      return;
    }
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe,0,0,0x10);
    UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._8_4_ = 0;
  }
  if (UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._0_8_ == 0) {
    return;
  }
  FMemory::Free((void *)UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe._0_8_);
  return;
}

// OnIsReadyForAsyncPostLoad'' @ 150404620

void __cdecl
`dynamic_atexit_destructor_for_'UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad__(void)

{
  if (UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._8_4_ != 0) {
    if (UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._0_8_ == 0) {
      return;
    }
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad,0,0,0x10);
    UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._8_4_ = 0;
  }
  if (UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._0_8_ == 0) {
    return;
  }
  FMemory::Free((void *)UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad._0_8_);
  return;
}

// OnPostLoad'' @ 150404690

void __cdecl `dynamic_atexit_destructor_for_'UAsyncLoadingTests_Shared::OnPostLoad__(void)

{
  if (UAsyncLoadingTests_Shared::OnPostLoad._8_4_ != 0) {
    if (UAsyncLoadingTests_Shared::OnPostLoad._0_8_ == 0) {
      return;
    }
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnPostLoad._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnPostLoad,0,0,0x10);
    UAsyncLoadingTests_Shared::OnPostLoad._8_4_ = 0;
  }
  if (UAsyncLoadingTests_Shared::OnPostLoad._0_8_ == 0) {
    return;
  }
  FMemory::Free((void *)UAsyncLoadingTests_Shared::OnPostLoad._0_8_);
  return;
}

// OnSerialize'' @ 150404700

void __cdecl `dynamic_atexit_destructor_for_'UAsyncLoadingTests_Shared::OnSerialize__(void)

{
  if (UAsyncLoadingTests_Shared::OnSerialize._8_4_ != 0) {
    if (UAsyncLoadingTests_Shared::OnSerialize._0_8_ == 0) {
      return;
    }
    (*(code *)**(undefined8 **)UAsyncLoadingTests_Shared::OnSerialize._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UAsyncLoadingTests_Shared::OnSerialize,0,0,0x10);
    UAsyncLoadingTests_Shared::OnSerialize._8_4_ = 0;
  }
  if (UAsyncLoadingTests_Shared::OnSerialize._0_8_ == 0) {
    return;
  }
  FMemory::Free((void *)UAsyncLoadingTests_Shared::OnSerialize._0_8_);
  return;
}

// PreSaveEvent'' @ 150404770

void __cdecl `dynamic_atexit_destructor_for_'UTexture::PreSaveEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)UTexture::PreSaveEvent._8_8_,
             UTexture::PreSaveEvent._16_4_);
  if (UTexture::PreSaveEvent._8_8_ != 0) {
    FMemory::Free((void *)UTexture::PreSaveEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UTexture::PreSaveEvent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFlushRHIThreadOnSTreamingTextureLocks'' @ 1504047b0

void __cdecl _dynamic_atexit_destructor_for__CVarFlushRHIThreadOnSTreamingTextureLocks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarFlushRHIThreadOnSTreamingTextureLocks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileMaxLoadedMips'' @ 1504047d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileMaxLoadedMips__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMobileMaxLoadedMips);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileReduceLoadedMips'' @ 1504047f0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileReduceLoadedMips__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMobileReduceLoadedMips);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileVirtualTextures'' @ 150404810

void __cdecl _dynamic_atexit_destructor_for__CVarMobileVirtualTextures__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMobileVirtualTextures);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSetMipMapLODBias'' @ 150404830

void __cdecl _dynamic_atexit_destructor_for__CVarSetMipMapLODBias__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSetMipMapLODBias);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipInvalidDXTDimensions'' @ 150404850

void __cdecl _dynamic_atexit_destructor_for__CVarSkipInvalidDXTDimensions__(void)

{
  CVarSkipInvalidDXTDimensions._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipInvalidDXTDimensions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseGenericStreamingPath'' @ 150404870

void __cdecl _dynamic_atexit_destructor_for__CVarUseGenericStreamingPath__(void)

{
  CVarUseGenericStreamingPath._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseGenericStreamingPath);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualTextures'' @ 150404890

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualTextures__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVirtualTextures);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualTexturesAutoImport'' @ 1504048b0

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualTexturesAutoImport__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVirtualTexturesAutoImport);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualTexturesMenuRestricted'' @ 1504048d0

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualTexturesMenuRestricted__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVirtualTexturesMenuRestricted);
  return;
}

// `dynamic_atexit_destructor_for_'FAsyncLoadingTestInvalidateExportDuringPreloadAutomationTestInstance'' @ 1504048f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAsyncLoadingTestInvalidateExportDuringPreloadAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FAsyncLoadingTestInvalidateExportDuringPreloadAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCommonCommandsExecCommandTestAutomationTestInstance'' @ 150404910

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCommonCommandsExecCommandTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCommonCommandsExecCommandTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FConsoleCommandExecCommandTestAutomationTestInstance'' @ 150404930

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FConsoleCommandExecCommandTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FConsoleCommandExecCommandTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FConvertFromType_SoftToHardAutomationTestInstance'' @ 150404950

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FConvertFromType_SoftToHardAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FConvertFromType_SoftToHardAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FDeferredExecCommandTestAutomationTestInstance'' @ 150404970

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FDeferredExecCommandTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FDeferredExecCommandTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditNamesTestAutomationTestInstance'' @ 150404990

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditNamesTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditNamesTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditNonPropertyDataTestAutomationTestInstance'' @ 1504049b0

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditNonPropertyDataTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditNonPropertyDataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditObjectsTestAutomationTestInstance'' @ 1504049d0

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditObjectsTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditObjectsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditPropertyDataTestAutomationTestInstance'' @ 1504049f0

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditPropertyDataTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditPropertyDataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditSoftObjectsTestAutomationTestInstance'' @ 150404a10

void __cdecl
TransactionDiffingTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditSoftObjectsTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditSoftObjectsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FExecCommandTargetVariantsTestAutomationTestInstance'' @ 150404a30

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FExecCommandTargetVariantsTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FExecCommandTargetVariantsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIntSerializationTestAutomationTestInstance'' @ 150404a50

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FIntSerializationTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FIntSerializationTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_ExternalReadDependenciesAutomationTestInstance'' @ 150404a70

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_ExternalReadDependenciesAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_ExternalReadDependenciesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_Flush_InvalidFromWorkerAutomationTestInstance'' @ 150404a90

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_Flush_InvalidFromWorkerAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_Flush_InvalidFromWorkerAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_Flush_ValidFromCallbackAutomationTestInstance'' @ 150404ab0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_Flush_ValidFromCallbackAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_Flush_ValidFromCallbackAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_IsReadyForAsyncPostLoadAutomationTestInstance'' @ 150404ad0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_IsReadyForAsyncPostLoadAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_IsReadyForAsyncPostLoadAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_IsReadyForAsyncPostLoad_FlushAutomationTestInstance'' @ 150404af0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_IsReadyForAsyncPostLoad_FlushAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_IsReadyForAsyncPostLoad_FlushAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoadAutomationTestInstance'' @ 150404b10

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoadAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoadAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_RecursiveLoads_FromDeferredPostLoadAutomationTestInstance'' @ 150404b30

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromDeferredPostLoadAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromDeferredPostLoadAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafeAutomationTestInstance'' @ 150404b50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafeAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafeAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafeAutomationTestInstance'' @ 150404b70

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafeAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromPostLoad_ThreadUnsafeAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_RecursiveLoads_FromSerializeAutomationTestInstance'' @ 150404b90

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FromSerializeAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FromSerializeAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallbackAutomationTestInstance'' @ 150404bb0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallbackAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallbackAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoadAutomationTestInstance'' @ 150404bd0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoadAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoadAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_RecursiveLoads_FullFlushFrom_SerializeAutomationTestInstance'' @ 150404bf0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_RecursiveLoads_FullFlushFrom_SerializeAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_RecursiveLoads_FullFlushFrom_SerializeAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemoryAutomationTestInstance'' @ 150404c10

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemoryAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_Renames_ObjectMovedToAnotherPackage_InMemoryAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskAutomationTestInstance'' @ 150404c30

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReloadAutomationTestInstance'' @ 150404c50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReloadAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDiskReloadAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLoadingTests_Timeouts_PostloadAutomationTestInstance'' @ 150404c70

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLoadingTests_Timeouts_PostloadAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLoadingTests_Timeouts_PostloadAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMultiplayer4PlayerTestAutomationTestInstance'' @ 150404c90

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMultiplayer4PlayerTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMultiplayer4PlayerTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPropertyPairsMapTestsAutomationTestInstance'' @ 150404cb0

void __cdecl
PropertyPairsMapTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPropertyPairsMapTestsAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPropertyPairsMapTestsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FReferenceClusterTestAutomationTestInstance'' @ 150404cd0

void __cdecl
ReferenceClusterTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FReferenceClusterTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FReferenceClusterTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRunExternalToolTestAutomationTestInstance'' @ 150404cf0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FRunExternalToolTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRunExternalToolTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FSelfRegisteringExecCommandTestAutomationTestInstance'' @ 150404d10

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FSelfRegisteringExecCommandTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FSelfRegisteringExecCommandTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTextImportStructPropertyTestInstance'' @ 150404d30

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTextImportStructPropertyTestInstance__(void)

{
  if (FTextImportStructPropertyTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTextImportStructPropertyTestInstance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTextImportStructPropertyTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTextPropertyTestAutomationTestInstance'' @ 150404d60

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTextPropertyTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTextPropertyTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTexture2DTestTransientAutomationTestInstance'' @ 150404d80

void __cdecl
Texture2DTest::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTexture2DTestTransientAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTexture2DTestTransientAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FThreadSafeAsyncLoadingTestAutomationTestInstance'' @ 150404da0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FThreadSafeAsyncLoadingTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FThreadSafeAsyncLoadingTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUnattendedLoadingTestAutomationTestInstance'' @ 150404dc0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FUnattendedLoadingTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FUnattendedLoadingTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FWorldPartitionEditorSoftObjectPathTestAutomationTestInstance'' @ 150404de0

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FWorldPartitionEditorSoftObjectPathTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionEditorSoftObjectPathTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FWorldPartitionPathConversionTestAutomationTestInstance'' @ 150404e00

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FWorldPartitionPathConversionTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionPathConversionTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FWorldPartitionSoftRefTestAutomationTestInstance'' @ 150404e20

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FWorldPartitionSoftRefTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionSoftRefTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FWorldPartitionStaticSpatialIndexTestAutomationTestInstance'' @ 150404e40

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FWorldPartitionStaticSpatialIndexTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionStaticSpatialIndexTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FWorldPartitionStreamingGenerationSimulationTestAutomationTestInstance'' @ 150404e60

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FWorldPartitionStreamingGenerationSimulationTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FWorldPartitionStreamingGenerationSimulationTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FWorldPartitionStreamingGenerationTestAutomationTestInstance'' @ 150404e80

void __cdecl
WorldPartitionTests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FWorldPartitionStreamingGenerationTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FWorldPartitionStreamingGenerationTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'KismetArray_SortIntegerType_TestsInstance'' @ 150404ea0

void __cdecl
UE::Kismet::Test::`anonymous_namespace'::
_dynamic_atexit_destructor_for__KismetArray_SortIntegerType_TestsInstance__(void)

{
  if (KismetArray_SortIntegerType_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(KismetArray_SortIntegerType_TestsInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&KismetArray_SortIntegerType_TestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'KismetArray_SortName_TestsInstance'' @ 150404ed0

void __cdecl
UE::Kismet::Test::`anonymous_namespace'::
_dynamic_atexit_destructor_for__KismetArray_SortName_TestsInstance__(void)

{
  if (KismetArray_SortName_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(KismetArray_SortName_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&KismetArray_SortName_TestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'KismetArray_SortString_TestsInstance'' @ 150404f00

void __cdecl
UE::Kismet::Test::`anonymous_namespace'::
_dynamic_atexit_destructor_for__KismetArray_SortString_TestsInstance__(void)

{
  if (KismetArray_SortString_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(KismetArray_SortString_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&KismetArray_SortString_TestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogBaseAutomationTests'' @ 150404f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBaseAutomationTests__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBaseAutomationTests);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetworkAutomationTests'' @ 150404f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetworkAutomationTests__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetworkAutomationTests);
  return;
}

// `dynamic_atexit_destructor_for_'LogTexture'' @ 150404f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTexture__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTexture);
  return;
}

// `dynamic_atexit_destructor_for_'LogTextureUpload'' @ 150404f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTextureUpload__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTextureUpload);
  return;
}

