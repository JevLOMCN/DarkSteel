// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 14

// FGLTFAnalyticsBuilder @ 14e5cfc10

FGLTFAnalyticsBuilder * __thiscall
FGLTFAnalyticsBuilder::FGLTFAnalyticsBuilder
          (FGLTFAnalyticsBuilder *this,FString *param_1,UGLTFExportOptions *param_2)

{
  FGLTFJsonBuilder::FGLTFJsonBuilder((FGLTFJsonBuilder *)this,param_1,param_2);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->ActorsRecorded).Elements = 0;
  *(undefined8 *)&(this->ActorsRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActorsRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActorsRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActorsRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorsRecorded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorsRecorded).Elements.field_0x34 = 0;
  (this->ActorsRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActorsRecorded).HashSize = 0;
  *(undefined8 *)&(this->ComponentsRecorded).Elements = 0;
  *(undefined8 *)&(this->ComponentsRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ComponentsRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ComponentsRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ComponentsRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentsRecorded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentsRecorded).Elements.field_0x34 = 0;
  (this->ComponentsRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ComponentsRecorded).HashSize = 0;
  *(undefined8 *)&(this->StaticMeshesRecorded).Elements = 0;
  *(undefined8 *)&(this->StaticMeshesRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StaticMeshesRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StaticMeshesRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StaticMeshesRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticMeshesRecorded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticMeshesRecorded).Elements.field_0x34 = 0;
  (this->StaticMeshesRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StaticMeshesRecorded).HashSize = 0;
  *(undefined8 *)&(this->SkeletalMeshesRecorded).Elements = 0;
  *(undefined8 *)&(this->SkeletalMeshesRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SkeletalMeshesRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SkeletalMeshesRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SkeletalMeshesRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletalMeshesRecorded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletalMeshesRecorded).Elements.field_0x34 = 0;
  (this->SkeletalMeshesRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SkeletalMeshesRecorded).HashSize = 0;
  *(undefined8 *)&(this->SplineStaticMeshesRecorded).Elements = 0;
  *(undefined8 *)&(this->SplineStaticMeshesRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SplineStaticMeshesRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SplineStaticMeshesRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SplineStaticMeshesRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SplineStaticMeshesRecorded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SplineStaticMeshesRecorded).Elements.field_0x34 = 0;
  (this->SplineStaticMeshesRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SplineStaticMeshesRecorded).HashSize = 0;
  *(undefined8 *)&(this->LandscapeComponentsRecorded).Elements = 0;
  *(undefined8 *)&(this->LandscapeComponentsRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LandscapeComponentsRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LandscapeComponentsRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LandscapeComponentsRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LandscapeComponentsRecorded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LandscapeComponentsRecorded).Elements.field_0x34 = 0;
  (this->LandscapeComponentsRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LandscapeComponentsRecorded).HashSize = 0;
  *(undefined8 *)&(this->LevelSequencesRecorded).Elements = 0;
  *(undefined8 *)&(this->LevelSequencesRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequencesRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LevelSequencesRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LevelSequencesRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelSequencesRecorded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelSequencesRecorded).Elements.field_0x34 = 0;
  (this->LevelSequencesRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LevelSequencesRecorded).HashSize = 0;
  *(undefined8 *)&(this->AnimSequencesRecorded).Elements = 0;
  *(undefined8 *)&(this->AnimSequencesRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AnimSequencesRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AnimSequencesRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AnimSequencesRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimSequencesRecorded).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimSequencesRecorded).Elements.field_0x34 = 0;
  (this->AnimSequencesRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AnimSequencesRecorded).HashSize = 0;
  *(undefined8 *)&(this->MaterialsRecorded).Elements = 0;
  *(undefined8 *)&(this->MaterialsRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MaterialsRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MaterialsRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MaterialsRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialsRecorded).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->MaterialsRecorded).Elements.field_0x30 = 0xffffffff;
  (this->MaterialsRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MaterialsRecorded).HashSize = 0;
  *(undefined8 *)&(this->TexturesRecorded).Elements = 0;
  *(undefined8 *)&(this->TexturesRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TexturesRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TexturesRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TexturesRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TexturesRecorded).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TexturesRecorded).Elements.field_0x30 = 0xffffffff;
  (this->TexturesRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TexturesRecorded).HashSize = 0;
  *(undefined8 *)&(this->CamerasRecorded).Elements = 0;
  *(undefined8 *)&(this->CamerasRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CamerasRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CamerasRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CamerasRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CamerasRecorded).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CamerasRecorded).Elements.field_0x30 = 0xffffffff;
  (this->CamerasRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CamerasRecorded).HashSize = 0;
  *(undefined8 *)&(this->LightsRecorded).Elements = 0;
  *(undefined8 *)&(this->LightsRecorded).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LightsRecorded).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LightsRecorded).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LightsRecorded).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LightsRecorded).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LightsRecorded).Elements.field_0x30 = 0xffffffff;
  (this->LightsRecorded).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LightsRecorded).HashSize = 0;
  return this;
}

// ~FGLTFAnalyticsBuilder @ 14e5d72c0

void __thiscall FGLTFAnalyticsBuilder::~FGLTFAnalyticsBuilder(FGLTFAnalyticsBuilder *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->LightsRecorded).HashSize = 0;
  FVar1 = (this->LightsRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<ULightComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULightComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LightsRecorded).Elements);
  (this->CamerasRecorded).HashSize = 0;
  FVar1 = (this->CamerasRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UCameraComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UCameraComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CamerasRecorded).Elements);
  (this->TexturesRecorded).HashSize = 0;
  FVar1 = (this->TexturesRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UTexture_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UTexture_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TexturesRecorded).Elements);
  (this->MaterialsRecorded).HashSize = 0;
  FVar1 = (this->MaterialsRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UMaterialInterface_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMaterialInterface_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MaterialsRecorded).Elements);
  (this->AnimSequencesRecorded).HashSize = 0;
  FVar1 = (this->AnimSequencesRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UAnimSequence_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UAnimSequence_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AnimSequencesRecorded).Elements);
  (this->LevelSequencesRecorded).HashSize = 0;
  FVar1 = (this->LevelSequencesRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<ULevelSequence_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULevelSequence_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LevelSequencesRecorded).Elements);
  (this->LandscapeComponentsRecorded).HashSize = 0;
  FVar1 = (this->LandscapeComponentsRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<ULandscapeComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULandscapeComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LandscapeComponentsRecorded).Elements);
  (this->SplineStaticMeshesRecorded).HashSize = 0;
  FVar1 = (this->SplineStaticMeshesRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UStaticMesh_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStaticMesh_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SplineStaticMeshesRecorded).Elements);
  (this->SkeletalMeshesRecorded).HashSize = 0;
  FVar1 = (this->SkeletalMeshesRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<USkeletalMesh_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USkeletalMesh_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SkeletalMeshesRecorded).Elements);
  (this->StaticMeshesRecorded).HashSize = 0;
  FVar1 = (this->StaticMeshesRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UStaticMesh_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStaticMesh_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StaticMeshesRecorded).Elements);
  (this->ComponentsRecorded).HashSize = 0;
  FVar1 = (this->ComponentsRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<USceneComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USceneComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ComponentsRecorded).Elements);
  (this->ActorsRecorded).HashSize = 0;
  FVar1 = (this->ActorsRecorded).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<AActor_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<AActor_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActorsRecorded).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FGLTFJsonRoot::~FGLTFJsonRoot((FGLTFJsonRoot *)&this->_padding_);
  FGLTFFileBuilder::~FGLTFFileBuilder((FGLTFFileBuilder *)this);
  return;
}

// GenerateAnalytics @ 14e5f2560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e5f39ad) */

TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> * __thiscall
FGLTFAnalyticsBuilder::GenerateAnalytics
          (FGLTFAnalyticsBuilder *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  EMaterialShadingModel EVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FGLTFAnalyticsBuilder *pFVar7;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar8;
  int *piVar9;
  TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator> *pTVar10;
  TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator> *pTVar11
  ;
  TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
  *pTVar12;
  ForAnyElementType FVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FString *pFVar18;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar19;
  FStaticMeshLODResources *this_00;
  longlong lVar20;
  FString *pFVar21;
  byte bVar22;
  undefined1 *puVar23;
  EMaterialShadingModel *pEVar24;
  ForElementType<unsigned_int> FVar25;
  wchar_t *pwVar26;
  uint uVar27;
  uint uVar28;
  FAnalyticsEventAttribute *pFVar29;
  int iVar30;
  uint uVar31;
  uint *puVar32;
  ulonglong uVar33;
  uint uVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  undefined1 auStack_5e8 [32];
  FString *local_5c8;
  FScriptContainerElement *local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  undefined8 local_5a8;
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_596;
  undefined1 local_595 [5];
  TArray<FString,TSizedDefaultAllocator<32>_> local_590;
  int local_580;
  EMaterialShadingModel local_57c;
  int local_578;
  int local_574;
  int local_570;
  int local_56c;
  int local_568;
  TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
  *local_560;
  undefined8 uStack_558;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  int local_538;
  undefined4 uStack_534;
  FString local_530;
  FGLTFAnalyticsBuilder *local_520;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_518;
  FString local_510;
  int local_500;
  uint uStack_4fc;
  undefined1 *puStack_4f8;
  undefined4 local_4f0;
  int iStack_4ec;
  int iStack_4e8;
  undefined4 uStack_4e4;
  TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator> *local_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4d8;
  undefined8 local_4b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4b0;
  FString local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_480;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_460;
  TPairInitializer<FString_const_&,int_const_&> local_440;
  EMaterialShadingModel *local_430;
  undefined8 local_428;
  TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator> *local_420;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_418;
  undefined8 uStack_3f8;
  TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
  *local_3f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e8;
  undefined8 uStack_3c8;
  TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
  *local_3c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b8;
  undefined8 uStack_398;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString *local_2c0;
  longlong local_2b8;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140 [2];
  undefined4 local_114;
  undefined4 local_f4;
  longlong local_e8;
  undefined8 local_e0;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> local_98
  ;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_5e8;
  local_578 = *(int *)&(this->LandscapeComponentsRecorded).Elements.field_0x8 -
              *(int *)&(this->LandscapeComponentsRecorded).Elements.field_0x34;
  local_574 = *(int *)&(this->LevelSequencesRecorded).Elements.field_0x8 -
              *(int *)&(this->LevelSequencesRecorded).Elements.field_0x34;
  local_570 = *(int *)&(this->AnimSequencesRecorded).Elements.field_0x8 -
              *(int *)&(this->AnimSequencesRecorded).Elements.field_0x34;
  local_56c = *(int *)&(this->MaterialsRecorded).Elements.field_0x8 -
              *(int *)&(this->MaterialsRecorded).Elements.field_0x34;
  local_568 = *(int *)&(this->TexturesRecorded).Elements.field_0x8 -
              *(int *)&(this->TexturesRecorded).Elements.field_0x34;
  local_580 = *(int *)&(this->CamerasRecorded).Elements.field_0x8 -
              *(int *)&(this->CamerasRecorded).Elements.field_0x34;
  local_57c = *(int *)&(this->LightsRecorded).Elements.field_0x8 -
              *(int *)&(this->LightsRecorded).Elements.field_0x34;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_520 = this;
  local_518 = __return_storage_ptr__;
  ::FString::FString(&local_290,L"NumberOfActors");
  ::FString::PrintfImpl(&local_2a0,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(local_140,&local_290);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_2a0);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_270,L"NumberOfStaticMeshes");
  ::FString::PrintfImpl(&local_280,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_1c0,&local_270);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_280);
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_250,L"NumberOfSkeletalMeshes");
  ::FString::PrintfImpl(&local_260,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_1b0,&local_250);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_260);
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_230,L"NumberOfSplineStaticMeshes");
  ::FString::PrintfImpl(&local_240,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_1a0,&local_230);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_240);
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_390,L"NumberOfLandscapes");
  ::FString::PrintfImpl(&local_220,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_180,&local_390);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_220);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_370,L"NumberOfLevelSequences");
  ::FString::PrintfImpl(&local_380,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_170,&local_370);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_380);
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_350,L"NumberOfAnimSequences");
  ::FString::PrintfImpl(&local_360,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_160,&local_350);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_360);
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_330,L"NumberOfMaterials");
  ::FString::PrintfImpl(&local_340,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_150,&local_330);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_340);
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_310,L"NumberOfTextures");
  ::FString::PrintfImpl(&local_320,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_190,&local_310);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_320);
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2f0,L"NumberOfCameras");
  ::FString::PrintfImpl(&local_300,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_210,&local_2f0);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_300);
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2d0,L"NumberOfLights");
  ::FString::PrintfImpl(&local_2e0,L"%d");
  iVar16 = __return_storage_ptr__->ArrayNum;
  if (iVar16 == __return_storage_ptr__->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar16 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_200,&local_2d0);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_2e0);
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  pFVar7 = local_520;
  pTVar1 = &this->StaticMeshesRecorded;
  pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)
            &(this->StaticMeshesRecorded).Elements.field_0x10;
  local_460._padding_._0_4_ = 0;
  local_460._padding_._4_4_ = 1;
  local_460.UnvisitedBitMask = 0xffffffff;
  local_460.CurrentBitIndex = 0;
  local_460.BaseBitIndex = 0;
  local_460.Array = pTVar35;
  if (*(int *)&(local_520->StaticMeshesRecorded).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_460);
  }
  uVar17 = *(uint *)&(pFVar7->StaticMeshesRecorded).Elements.field_0x28;
  TStack_4d8._padding_ = CONCAT44(local_460._padding_._4_4_,(undefined4)local_460._padding_);
  local_4b8 = CONCAT44(local_4b8._4_4_,
                       *(int *)&(pFVar7->StaticMeshesRecorded).Elements.field_0x8 -
                       *(int *)&(pFVar7->StaticMeshesRecorded).Elements.field_0x34);
  bVar22 = (byte)uVar17 & 0x1f;
  TStack_4d8.CurrentBitIndex = local_460.CurrentBitIndex;
  TStack_4d8.UnvisitedBitMask = local_460.UnvisitedBitMask;
  TStack_4d8._28_4_ = local_460._28_4_;
  TStack_4d8.BaseBitIndex = local_460.BaseBitIndex;
  local_4b0._padding_._0_4_ = (int)uVar17 >> 5;
  local_4b0._padding_._4_4_ = 1 << bVar22;
  local_4b0.UnvisitedBitMask = -1 << bVar22;
  TStack_4d8.Array = local_460.Array;
  local_4b0.BaseBitIndex = uVar17 & 0xffffffe0;
  TStack_418.Array = local_460.Array;
  uStack_3f8 = local_4b8;
  local_4e0 = pTVar1;
  local_4b0.Array = pTVar35;
  local_4b0.CurrentBitIndex = uVar17;
  local_420 = pTVar1;
  TStack_418._padding_ = TStack_4d8._padding_;
  TStack_418._16_8_ = TStack_4d8._16_8_;
  TStack_418._24_8_ = TStack_4d8._24_8_;
  if (((int)uVar17 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    pTVar19 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar19;
  }
  if (uVar17 != *(uint *)&(this->StaticMeshesRecorded).Elements.field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4b0);
    pTVar35 = local_4b0.Array;
    uVar17 = local_4b0.CurrentBitIndex;
  }
  while( true ) {
    pTVar10 = local_420;
    if (*(int *)&(local_420->Elements).field_0x8 - *(int *)&(local_420->Elements).field_0x34 !=
        (int)uStack_3f8) {
      local_598 = 0;
      `TSparseArray<TSparseSetElement<UStaticMesh_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_598);
    }
    pFVar7 = local_520;
    if (((TStack_418.CurrentBitIndex == uVar17) && (TStack_418.Array == pTVar35)) &&
       (pTVar10 == pTVar1)) break;
    this_00 = UStaticMesh::GetLODForExport
                        (*(UStaticMesh **)
                          (*(longlong *)&pTVar10->Elements +
                          (longlong)TStack_418.CurrentBitIndex * 0x10),0);
    FStaticMeshLODResources::GetNumVertices(this_00);
    TStack_418.UnvisitedBitMask = TStack_418.UnvisitedBitMask & ~TStack_418._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_418);
  }
  local_500 = 0;
  uStack_4fc = 1;
  pTStack_550 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(local_520->SkeletalMeshesRecorded).Elements.field_0x10;
  iStack_4ec = 0;
  iStack_4e8 = 0;
  iVar16 = *(int *)&(local_520->SkeletalMeshesRecorded).Elements.field_0x28;
  local_560 = &local_520->SkeletalMeshesRecorded;
  if (iVar16 != 0) {
    puVar32 = *(uint **)&(local_520->SkeletalMeshesRecorded).Elements.field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)pTStack_550;
    }
    uVar17 = *puVar32;
    iStack_4e8 = 0;
    local_500 = 0;
    while (uVar17 == 0) {
      iStack_4e8 = iStack_4e8 + 0x20;
      lVar20 = (longlong)local_500;
      local_500 = local_500 + 1;
      if ((int)((iVar16 + -1 >> 0x1f & 0x1fU) + iVar16 + -1) >> 5 < local_500) goto LAB_14e5f2f79;
      uVar17 = puVar32[lVar20 + 1];
    }
    uStack_4fc = -uVar17 & uVar17;
    uVar33 = (ulonglong)uStack_4fc * 2 + 1;
    lVar20 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_568 = (int)lVar20;
    iStack_4ec = iStack_4e8 + -1 + local_568;
    if (iVar16 < iStack_4ec) {
LAB_14e5f2f79:
      iStack_4ec = iVar16;
    }
  }
  local_4f0 = 0xffffffff;
  uStack_558 = CONCAT44(uStack_4fc,local_500);
  local_538 = *(int *)&(local_520->SkeletalMeshesRecorded).Elements.field_0x8 -
              *(int *)&(local_520->SkeletalMeshesRecorded).Elements.field_0x34;
  uStack_548._4_4_ = iStack_4ec;
  uStack_548._0_4_ = 0xffffffff;
  uStack_540._4_4_ = uStack_4e4;
  uStack_540._0_4_ = iStack_4e8;
  uVar17 = *(uint *)&(local_520->SkeletalMeshesRecorded).Elements.field_0x28;
  local_480._padding_._0_4_ = (int)uVar17 >> 5;
  bVar22 = (byte)uVar17 & 0x1f;
  local_480._padding_._4_4_ = 1 << bVar22;
  local_480.UnvisitedBitMask = -1 << bVar22;
  local_480.BaseBitIndex = uVar17 & 0xffffffe0;
  uStack_3c8 = CONCAT44(uStack_534,local_538);
  puStack_4f8 = (undefined1 *)pTStack_550;
  local_480.Array = pTStack_550;
  local_480.CurrentBitIndex = uVar17;
  local_440.Value = (int *)local_560;
  local_3f0 = local_560;
  TStack_3e8._padding_ = uStack_558;
  TStack_3e8.Array = pTStack_550;
  TStack_3e8._16_8_ = uStack_548;
  TStack_3e8._24_8_ = uStack_540;
  if ((((int)uVar17 < 0) || (iVar16 < (int)uVar17)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    pTVar19 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar19;
  }
  if (uVar17 != *(uint *)&(pFVar7->SkeletalMeshesRecorded).Elements.field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_480);
  }
  piVar9 = local_440.Value;
  iVar16 = local_480.CurrentBitIndex;
  pTVar35 = local_480.Array;
  uStack_558 = CONCAT44(local_480._padding_._4_4_,(int)local_480._padding_);
  uStack_548 = CONCAT44(local_480.CurrentBitIndex,local_480.UnvisitedBitMask);
  uStack_540 = CONCAT44(local_480._28_4_,local_480.BaseBitIndex);
  pTStack_550 = local_480.Array;
  while( true ) {
    pTVar11 = local_3f0;
    if (*(int *)&(local_3f0->Elements).field_0x8 - *(int *)&(local_3f0->Elements).field_0x34 !=
        (int)uStack_3c8) {
      local_597 = 0;
      `TSparseArray<TSparseSetElement<USkeletalMesh_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_597);
    }
    if (((TStack_3e8.CurrentBitIndex == iVar16) && (TStack_3e8.Array == pTVar35)) &&
       (pTVar11 ==
        (TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator> *
        )piVar9)) break;
    lVar20 = (**(code **)(**(longlong **)
                            (*(longlong *)&pTVar11->Elements +
                            (longlong)TStack_3e8.CurrentBitIndex * 0x10) + 0x398))();
    if (*(int *)(lVar20 + 8) < 1) {
      local_5c8 = (FString *)0x0;
      local_5c0 = (FScriptContainerElement *)(longlong)*(int *)(lVar20 + 8);
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        pTVar19 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar19;
      }
    }
    TStack_3e8.UnvisitedBitMask = TStack_3e8.UnvisitedBitMask & ~TStack_3e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e8);
  }
  ::FString::PrintfImpl(&local_510,L"%llu");
  pTVar19 = local_518;
  iVar16 = local_518->ArrayNum;
  if (iVar16 == local_518->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_518->AllocatorInstance,&local_518->ArrayMax);
  }
  pTVar19->ArrayNum = iVar16 + 1;
  pFVar29 = (FAnalyticsEventAttribute *)
            ((pTVar19->AllocatorInstance).Data + (longlong)iVar16 * 0x30);
  pFVar18 = ::FString::FString(&local_1f0,L"NumberOfVertices");
  pFVar21 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar18);
  (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar21->Data).AllocatorInstance.Data;
  (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar29->AttrName).Data.ArrayNum = (pFVar21->Data).ArrayNum;
  (pFVar29->AttrName).Data.ArrayMax = (pFVar21->Data).ArrayMax;
  (pFVar21->Data).ArrayNum = 0;
  (pFVar21->Data).ArrayMax = 0;
  (pFVar29->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar29->AttrValueString).Data.AllocatorInstance.Data = local_510.Data.AllocatorInstance.Data;
  local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar29->AttrValueString).Data.ArrayNum = local_510.Data.ArrayNum;
  (pFVar29->AttrValueString).Data.ArrayMax = local_510.Data.ArrayMax;
  local_510.Data.ArrayNum = 0;
  local_510.Data.ArrayMax = 0;
  pFVar29->AttrValueNumber = 0.0;
  pFVar29->AttrValueBool = false;
  pFVar29->AttrType = String;
  pFVar5 = (pFVar18->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data.AllocatorInstance.Data);
  }
  pFVar7 = local_520;
  local_e8 = 0;
  local_e0 = 0;
  iVar30 = 0;
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.NumBits = 0;
  uStack_540._0_4_ = 0;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_d8.MaxBits = 0x80;
  local_b8 = 0xffffffff;
  puVar2 = &(local_520->MaterialsRecorded).Elements.field_0x10;
  iVar16 = *(int *)&(local_520->MaterialsRecorded).Elements.field_0x28;
  local_560 = (TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
               *)&local_520->MaterialsRecorded;
  uStack_548._4_4_ = 0;
  uVar17 = 1;
  if (iVar16 != 0) {
    puVar32 = *(uint **)&(local_520->MaterialsRecorded).Elements.field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)puVar2;
    }
    uVar17 = *puVar32;
    while (uVar17 == 0) {
      lVar20 = (longlong)iVar30;
      uStack_540._0_4_ = (int)uStack_540 + 0x20;
      iVar30 = iVar30 + 1;
      uStack_548._4_4_ = iVar16;
      uVar17 = 1;
      if ((int)((iVar16 + -1 >> 0x1f & 0x1fU) + iVar16 + -1) >> 5 < iVar30) goto LAB_14e5f32ce;
      uVar17 = puVar32[lVar20 + 1];
    }
    uVar17 = -uVar17 & uVar17;
    uVar33 = (ulonglong)uVar17 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_56c = (int)lVar20;
    uStack_548._4_4_ = (int)uStack_540 + -1 + local_56c;
    if (iVar16 < (int)uStack_548._4_4_) {
      uStack_548._4_4_ = iVar16;
    }
  }
LAB_14e5f32ce:
  local_538 = *(int *)&(local_520->MaterialsRecorded).Elements.field_0x8 -
              *(int *)&(local_520->MaterialsRecorded).Elements.field_0x34;
  uVar27 = *(uint *)&(local_520->MaterialsRecorded).Elements.field_0x28;
  uStack_558 = CONCAT44(uVar17,iVar30);
  uVar17 = uVar27 & 0xffffffe0;
  uStack_548._0_4_ = 0xffffffff;
  uStack_540._4_4_ = local_114;
  TStack_3b8._padding_ = uStack_558;
  iVar30 = (int)uVar27 >> 5;
  uStack_398 = CONCAT44(uStack_534,local_538);
  TStack_3b8.UnvisitedBitMask = 0xffffffff;
  TStack_3b8.CurrentBitIndex = uStack_548._4_4_;
  TStack_3b8.BaseBitIndex = (int)uStack_540;
  TStack_3b8._28_4_ = local_114;
  pTStack_550 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  local_518 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)local_560;
  local_3c0 = (TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
               *)local_560;
  TStack_3b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar27 < 0) || (iVar16 < (int)uVar27)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    pTVar19 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar19;
  }
  pTVar8 = local_518;
  uVar28 = *(uint *)&(pFVar7->MaterialsRecorded).Elements.field_0x28;
  if (uVar27 != uVar28) {
    puVar23 = *(undefined1 **)&(pFVar7->MaterialsRecorded).Elements.field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar2;
    }
    uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar30 * 4);
    while (uVar27 == 0) {
      lVar20 = (longlong)iVar30;
      uVar17 = uVar17 + 0x20;
      iVar30 = iVar30 + 1;
      uVar27 = uVar28;
      if ((int)(((int)(uVar28 - 1) >> 0x1f & 0x1fU) + (uVar28 - 1)) >> 5 < iVar30)
      goto LAB_14e5f33df;
      uVar27 = *(uint *)(puVar23 + lVar20 * 4 + 4);
    }
    uVar33 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_570 = (int)lVar20;
    uVar27 = (uVar17 - 1) + local_570;
    if ((int)uVar28 < (int)uVar27) {
      uVar27 = uVar28;
    }
  }
LAB_14e5f33df:
  uVar17 = 0;
  while( true ) {
    pTVar12 = local_3c0;
    if (*(int *)&(local_3c0->Elements).field_0x8 - *(int *)&(local_3c0->Elements).field_0x34 !=
        (int)uStack_398) {
      local_596 = 0;
      `TSparseArray<TSparseSetElement<UMaterialInterface_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_596);
    }
    uVar28 = local_d8.NumBits;
    if (((TStack_3b8.CurrentBitIndex == uVar27) &&
        (TStack_3b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar12 ==
        (TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
         *)pTVar8)) break;
    local_490.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_490.Data.ArrayNum = 0;
    local_490.Data.ArrayMax = 0;
    local_57c = FGLTFMaterialUtilities::GetShadingModel
                          (*(UMaterialInterface **)
                            (*(longlong *)&pTVar12->Elements +
                            (longlong)TStack_3b8.CurrentBitIndex * 0x10),&local_490);
    if ((int)local_e0 != local_b4) {
      puVar23 = local_b0;
      if (local_a8 != (undefined1 *)0x0) {
        puVar23 = local_a8;
      }
      EVar4 = *(EMaterialShadingModel *)
               (puVar23 + (ulonglong)(local_a0 - MSM_DefaultLit & local_57c) * 4);
      while (EVar4 != ~MSM_Unlit) {
        pEVar24 = (EMaterialShadingModel *)((longlong)(int)EVar4 * 0x10 + local_e8);
        if (*pEVar24 == local_57c) {
          if (pEVar24 != (EMaterialShadingModel *)0x0) goto LAB_14e5f34f7;
          break;
        }
        EVar4 = pEVar24[2];
      }
    }
    local_430 = &local_57c;
    local_5c8 = (FString *)0x0;
    TSet<TTuple<enum_EMaterialShadingModel,int>,TDefaultMapHashableKeyFuncs<enum_EMaterialShadingModel,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EMaterialShadingModel_const_&>_>
              (&local_e8,(uint)&local_580,
               (TKeyInitializer<EMaterialShadingModel_const_&> *)(ulonglong)local_57c,
               (bool *)&local_430);
    pEVar24 = (EMaterialShadingModel *)((longlong)local_580 * 0x10 + local_e8);
LAB_14e5f34f7:
    pEVar24[1] = pEVar24[1] + MSM_DefaultLit;
    if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.Data.AllocatorInstance.Data);
    }
    TStack_3b8.UnvisitedBitMask = TStack_3b8.UnvisitedBitMask & ~TStack_3b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b8);
  }
  uVar33 = 1;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  uStack_548._4_4_ = uVar17;
  uVar27 = 1;
  uVar31 = uVar17;
  if (local_d8.NumBits != 0) {
    FVar25 = (ForElementType<unsigned_int>)&local_d8;
    if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_d8.AllocatorInstance.SecondaryData;
    }
    uVar27 = *(uint *)FVar25;
    uVar31 = 0;
    while (uVar27 == 0) {
      lVar20 = (longlong)(int)uVar31;
      uVar17 = uVar17 + 0x20;
      uVar31 = uVar31 + 1;
      uStack_548._4_4_ = local_d8.NumBits;
      uVar27 = 1;
      if ((int)(((int)(local_d8.NumBits - 1U) >> 0x1f & 0x1fU) + (local_d8.NumBits - 1U)) >> 5 <
          (int)uVar31) goto LAB_14e5f35f4;
      uVar27 = *(uint *)((longlong)FVar25 + (lVar20 + 1) * 4);
    }
    uVar27 = -uVar27 & uVar27;
    uVar3 = (ulonglong)uVar27 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_574 = (int)lVar20;
    uStack_548._4_4_ = (uVar17 - 1) + local_574;
    if (local_d8.NumBits < (int)uStack_548._4_4_) {
      uStack_548._4_4_ = local_d8.NumBits;
    }
  }
LAB_14e5f35f4:
  local_560 = (TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
               *)&local_e8;
  uVar34 = local_d8.NumBits & 0xffffffe0;
  pTStack_550 = &local_d8;
  local_538 = (int)local_e0 - local_b4;
  uStack_548._0_4_ = 0xffffffff;
  uStack_558 = CONCAT44(uVar27,uVar31);
  uStack_540._4_4_ = local_f4;
  uStack_540._0_4_ = uVar17;
  TStack_4d8._padding_ = uStack_558;
  iVar16 = local_d8.NumBits >> 5;
  local_4b8 = CONCAT44(uStack_534,local_538);
  bVar22 = (byte)local_d8.NumBits;
  TStack_4d8.UnvisitedBitMask = 0xffffffff;
  TStack_4d8.CurrentBitIndex = uStack_548._4_4_;
  TStack_4d8.BaseBitIndex = uVar17;
  TStack_4d8._28_4_ = local_f4;
  local_4e0 = (TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
               *)local_560;
  TStack_4d8.Array = pTStack_550;
  if ((local_d8.NumBits < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    pTVar19 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar19;
  }
  if (uVar28 != local_d8.NumBits) {
    FVar25 = (ForElementType<unsigned_int>)&local_d8;
    if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_d8.AllocatorInstance.SecondaryData;
    }
    uVar17 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      lVar20 = (longlong)iVar16;
      uVar34 = uVar34 + 0x20;
      iVar16 = iVar16 + 1;
      uVar28 = local_d8.NumBits;
      if ((int)(((int)(local_d8.NumBits - 1U) >> 0x1f & 0x1fU) + (local_d8.NumBits - 1U)) >> 5 <
          iVar16) goto LAB_14e5f3708;
      uVar17 = *(uint *)((longlong)FVar25 + (lVar20 + 1) * 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_578 = (int)lVar20;
    uVar28 = (uVar34 - 1) + local_578;
    if (local_d8.NumBits < (int)uVar28) {
      uVar28 = local_d8.NumBits;
    }
  }
LAB_14e5f3708:
  while( true ) {
    pTVar1 = local_4e0;
    if ((int)*(longlong *)((longlong)local_4e0 + 8) - *(int *)((longlong)local_4e0 + 0x34) !=
        (int)local_4b8) {
      local_595[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EMaterialShadingModel,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_595);
    }
    if (((TStack_4d8.CurrentBitIndex == uVar28) && (TStack_4d8.Array == &local_d8)) &&
       (pTVar1 == (TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                   *)&local_e8)) break;
    local_428 = *(undefined8 *)(*(longlong *)pTVar1 + (longlong)TStack_4d8.CurrentBitIndex * 0x10);
    GetShadingModelString(&local_2b0,(EMaterialShadingModel)local_428);
    local_2c0 = &local_2b0;
    local_2b8 = (longlong)&local_428 + 4;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_const_&,int_const_&>_>(&local_98,&local_440,(bool *)&local_2c0)
    ;
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    TStack_4d8.UnvisitedBitMask = TStack_4d8.UnvisitedBitMask & ~TStack_4d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4d8);
  }
  iVar16 = pTVar19->ArrayNum;
  if (iVar16 == pTVar19->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
  }
  pTVar19->ArrayNum = iVar16 + 1;
  pFVar29 = (FAnalyticsEventAttribute *)
            ((pTVar19->AllocatorInstance).Data + (longlong)iVar16 * 0x30);
  pFVar18 = ::FString::FString(&local_1e0,L"NumberOfShadingModels");
  pFVar21 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar18);
  (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar21->Data).AllocatorInstance.Data;
  (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar29->AttrName).Data.ArrayNum = (pFVar21->Data).ArrayNum;
  (pFVar29->AttrName).Data.ArrayMax = (pFVar21->Data).ArrayMax;
  (pFVar21->Data).ArrayNum = 0;
  (pFVar21->Data).ArrayMax = 0;
  AnalyticsConversionToString<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            (&pFVar29->AttrValueString,
             (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *)
             &local_98);
  pFVar29->AttrValueNumber = 0.0;
  pFVar29->AttrValueBool = false;
  pFVar29->AttrType = String;
  pFVar5 = (pFVar18->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_590.ArrayNum = 0;
  local_590.ArrayMax = 0;
  FVar13.Data = local_530.Data.AllocatorInstance.Data;
  uVar14 = local_530.Data._8_8_;
  do {
    local_530.Data._8_8_ = uVar14;
    local_530.Data.AllocatorInstance.Data = FVar13.Data;
    switch((int)uVar33) {
    case 0:
      pwVar26 = L"Default";
      break;
    case 1:
      pwVar26 = L"Unlit";
      break;
    case 2:
      pwVar26 = L"ClearCoat";
      break;
    case 3:
      pwVar26 = L"Cloth";
      break;
    case 4:
      pwVar26 = L"ThinTranslucent";
      break;
    default:
      pwVar26 = L"Unknown";
    }
    ::FString::FString(&local_530,pwVar26);
    if ((local_590.AllocatorInstance.Data <= (FScriptContainerElement *)&local_530) &&
       ((FScriptContainerElement *)&local_530 <
        local_590.AllocatorInstance.Data + (longlong)local_590.ArrayMax * 0x10)) {
      local_5b0 = (longlong)local_590.ArrayNum;
      local_5a8 = 0x10;
      local_5c8 = &local_530;
      local_5c0 = local_590.AllocatorInstance.Data;
      local_5b8 = (longlong)local_590.ArrayMax;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        pTVar19 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar19;
      }
    }
    if (local_590.ArrayNum == local_590.ArrayMax) {
      local_590.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_590.AllocatorInstance,&local_590.ArrayMax);
    }
    iVar16 = local_590.ArrayNum + 1;
    lVar20 = (longlong)local_590.ArrayNum;
    *(undefined8 *)(local_590.AllocatorInstance.Data + lVar20 * 0x10) = 0;
    *(FScriptContainerElement **)(local_590.AllocatorInstance.Data + lVar20 * 0x10) =
         local_530.Data.AllocatorInstance.Data;
    local_530.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar13.Data = local_530.Data.AllocatorInstance.Data;
    *(int *)(local_590.AllocatorInstance.Data + lVar20 * 0x10 + 8) = local_530.Data.ArrayNum;
    *(int *)(local_590.AllocatorInstance.Data + lVar20 * 0x10 + 0xc) = local_530.Data.ArrayMax;
    local_530.Data.ArrayNum = 0;
    local_530.Data.ArrayMax = 0;
    uVar14 = local_530.Data._8_8_;
    local_530.Data.ArrayNum = 0;
    local_530.Data.ArrayMax = 0;
    local_530.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar33 = uVar33 + 1;
    local_590.ArrayNum = iVar16;
  } while (uVar33 < 6);
  iVar16 = pTVar19->ArrayNum;
  if (iVar16 == pTVar19->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
  }
  pTVar19->ArrayNum = iVar16 + 1;
  pFVar5 = (pTVar19->AllocatorInstance).Data;
  pFVar18 = ::FString::FString(&local_1d0,L"ExporterSupportedShadingModels");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_&>
            ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar16 * 0x30),pFVar18,&local_590);
  DestructItems<FString,int>((FString *)local_590.AllocatorInstance.Data,local_590.ArrayNum);
  if (local_590.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EMaterialShadingModel,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EMaterialShadingModel,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8);
  return pTVar19;
}

// RecordActor @ 14e609e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FGLTFAnalyticsBuilder::RecordActor(FGLTFAnalyticsBuilder *this,AActor *param_1)

{
  AActor *local_res8;
  AActor *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<AActor_const_*,DefaultKeyFuncs<AActor_const_*,0>,FDefaultSetAllocator>::
  Emplace<AActor_const_*_const_&>(&this->ActorsRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordAnimSequence @ 14e609e80

void __thiscall
FGLTFAnalyticsBuilder::RecordAnimSequence(FGLTFAnalyticsBuilder *this,UAnimSequence *param_1)

{
  UAnimSequence *local_res8;
  UAnimSequence *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UAnimSequence_const_*,DefaultKeyFuncs<UAnimSequence_const_*,0>,FDefaultSetAllocator>::
  Emplace<UAnimSequence_const_*_const_&>
            (&this->AnimSequencesRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordCamera @ 14e609eb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FGLTFAnalyticsBuilder::RecordCamera(FGLTFAnalyticsBuilder *this,UCameraComponent *param_1)

{
  UCameraComponent *local_res8;
  UCameraComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UCameraComponent_const_*,DefaultKeyFuncs<UCameraComponent_const_*,0>,FDefaultSetAllocator>::
  Emplace<UCameraComponent_const_*_const_&>(&this->CamerasRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordLandscapeComponent @ 14e609ee0

void __thiscall
FGLTFAnalyticsBuilder::RecordLandscapeComponent
          (FGLTFAnalyticsBuilder *this,ULandscapeComponent *param_1)

{
  ULandscapeComponent *local_res8;
  ULandscapeComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<ULandscapeComponent_const_*,DefaultKeyFuncs<ULandscapeComponent_const_*,0>,FDefaultSetAllocator>
  ::Emplace<ULandscapeComponent_const_*_const_&>
            (&this->LandscapeComponentsRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordLevelSequence @ 14e609f10

void __thiscall
FGLTFAnalyticsBuilder::RecordLevelSequence(FGLTFAnalyticsBuilder *this,ULevelSequence *param_1)

{
  ULevelSequence *local_res8;
  ULevelSequence *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<ULevelSequence_const_*,DefaultKeyFuncs<ULevelSequence_const_*,0>,FDefaultSetAllocator>::
  Emplace<ULevelSequence_const_*_const_&>
            (&this->LevelSequencesRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordLight @ 14e609f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FGLTFAnalyticsBuilder::RecordLight(FGLTFAnalyticsBuilder *this,ULightComponent *param_1)

{
  ULightComponent *local_res8;
  ULightComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<ULightComponent_const_*,DefaultKeyFuncs<ULightComponent_const_*,0>,FDefaultSetAllocator>::
  Emplace<ULightComponent_const_*_const_&>(&this->LightsRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordMaterial @ 14e609f70

void __thiscall
FGLTFAnalyticsBuilder::RecordMaterial(FGLTFAnalyticsBuilder *this,UMaterialInterface *param_1)

{
  UMaterialInterface *local_res8;
  UMaterialInterface *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
  ::Emplace<UMaterialInterface_const_*_const_&>
            (&this->MaterialsRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordSkeletalMesh @ 14e609fa0

void __thiscall
FGLTFAnalyticsBuilder::RecordSkeletalMesh(FGLTFAnalyticsBuilder *this,USkeletalMesh *param_1)

{
  USkeletalMesh *local_res8;
  USkeletalMesh *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<USkeletalMesh_const_*_const_&>
            (&this->SkeletalMeshesRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordSplineStaticMesh @ 14e609fd0

void __thiscall
FGLTFAnalyticsBuilder::RecordSplineStaticMesh(FGLTFAnalyticsBuilder *this,UStaticMesh *param_1)

{
  UStaticMesh *local_res8;
  UStaticMesh *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<UStaticMesh_const_*_const_&>
            (&this->SplineStaticMeshesRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordStaticMesh @ 14e60a000

void __thiscall
FGLTFAnalyticsBuilder::RecordStaticMesh(FGLTFAnalyticsBuilder *this,UStaticMesh *param_1)

{
  UStaticMesh *local_res8;
  UStaticMesh *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<UStaticMesh_const_*_const_&>(&this->StaticMeshesRecorded,&local_res8,(bool *)local_res10);
  return;
}

// RecordTexture @ 14e60a030

void __thiscall FGLTFAnalyticsBuilder::RecordTexture(FGLTFAnalyticsBuilder *this,UTexture *param_1)

{
  UTexture *local_res8;
  UTexture *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator>::
  Emplace<UTexture_const_*_const_&>(&this->TexturesRecorded,&local_res8,(bool *)local_res10);
  return;
}

