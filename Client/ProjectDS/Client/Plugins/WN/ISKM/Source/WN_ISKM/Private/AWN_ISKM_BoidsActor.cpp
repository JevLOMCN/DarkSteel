// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 28

// StaticClass @ 14a8372b0

UClass * __cdecl AWN_ISKM_BoidsActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISKM_BoidsActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_BoidsActor",
               &Z_Registration_Info_UClass_AWN_ISKM_BoidsActor.InnerSingleton,
               StaticRegisterNativesAWN_ISKM_BoidsActor,0x478,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_ISKM_BoidsActor>,
               InternalVTableHelperCtorCaller<AWN_ISKM_BoidsActor>,local_res8,
               AWN_ISKM_CharacterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISKM_BoidsActor.InnerSingleton;
}

// AWN_ISKM_BoidsActor @ 14a83df50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISKM_BoidsActor * __thiscall
AWN_ISKM_BoidsActor::AWN_ISKM_BoidsActor(AWN_ISKM_BoidsActor *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  FWN_UniqueIndexAllocator *this_01;
  
  AActor::AActor((AActor *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this_00 = &(this->Profile).SoftObjectPtr.field_0x18;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0x47c35000;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->LODDistScale = 0.25;
  this->MaxRenderingDistance = 6400.0;
  this->MaxShadowDistance = 0xc80;
  this->FullSimulationDistance = 3200.0;
  this->MaxSimulationDistance = 12800.0;
  *(undefined8 *)&this->SimulationRatioExponent = 0x40000000;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Profile).SoftObjectPtr.field_0x20 = 0;
  *(undefined4 *)&(this->Profile).SoftObjectPtr.field_0x4 = 0;
  *(undefined8 *)&(this->Profile).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Profile).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this_01 = &this->BoidIndexAllocator;
  (this->InitialSpawnInfo).SpecificSkeletalMeshName.ComparisonIndex = 0;
  (this->InitialSpawnInfo).SpecificSkeletalMeshName.Number = 0;
  this_01->Granularity = 0x20;
  this_01->BaseIndex = 0;
  (this->BoidIndexAllocator).NumIndices = 0;
  (this->BoidIndexAllocator).FreedIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->BoidIndexAllocator).FreedIndices.ArrayMax = 0;
  (this->InitialSpawnInfo).SpecificAnimSequenceName.ComparisonIndex = 0;
  (this->InitialSpawnInfo).SpecificAnimSequenceName.Number = 0;
  (this->InitialSpawnInfo).NumBoids = 0;
  (this->InitialSpawnInfo).Radius = 3200.0;
  (this->InitialSpawnInfo).MinDistance = 100.0;
  (this->InitialSpawnInfo).MinScale = 1.0;
  (this->InitialSpawnInfo).MaxScale = 1.0;
  (this->InitialSpawnInfo).MinZ = 0.0;
  (this->InitialSpawnInfo).MaxZ = 0.0;
  (this->InitialSpawnInfo).bTracingToGround = true;
  (this->InitialSpawnInfo).bUseNavInfo = false;
  (this->InitialSpawnInfo).SpawnTiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialSpawnInfo).SpawnTiles.ArrayNum = 0;
  (this->InitialSpawnInfo).SpawnTiles.ArrayMax = 0;
  (this->InitialSpawnInfo).TileSize = 0;
  (this->BoidSpawner).SpawnInfo.SpecificSkeletalMeshName.ComparisonIndex = 0;
  (this->BoidSpawner).SpawnInfo.SpecificSkeletalMeshName.Number = 0;
  (this->BoidSpawner).SpawnInfo.SpecificAnimSequenceName.ComparisonIndex = 0;
  (this->BoidSpawner).SpawnInfo.SpecificAnimSequenceName.Number = 0;
  (this->BoidSpawner).SpawnInfo.NumBoids = 0;
  (this->BoidSpawner).SpawnInfo.Radius = 3200.0;
  (this->BoidSpawner).SpawnInfo.MinDistance = 100.0;
  (this->BoidSpawner).SpawnInfo.MinScale = 1.0;
  (this->BoidSpawner).SpawnInfo.MaxScale = 1.0;
  (this->BoidSpawner).SpawnInfo.MinZ = 0.0;
  (this->BoidSpawner).SpawnInfo.MaxZ = 0.0;
  (this->BoidSpawner).SpawnInfo.bTracingToGround = true;
  (this->BoidSpawner).SpawnInfo.bUseNavInfo = false;
  (this->BoidSpawner).SpawnInfo.SpawnTiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidSpawner).SpawnInfo.SpawnTiles.ArrayNum = 0;
  (this->BoidSpawner).SpawnInfo.SpawnTiles.ArrayMax = 0;
  (this->BoidSpawner).SpawnInfo.TileSize = 0;
  (this->BoidSpawner).Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidSpawner).Transforms.ArrayNum = 0;
  (this->BoidSpawner).Transforms.ArrayMax = 0;
  (this->BoidSpawner).Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidSpawner).Indices.ArrayNum = 0;
  (this->BoidSpawner).Indices.ArrayMax = 0;
  this->bIsBoundDirty = false;
  this->LastGameTime = 0.0;
  this->SimulationLodRange = 0.0;
  FWN_UniqueIndexAllocator::TryResize(this_01);
  this->BoidsController = (FWN_ISKM_BoidsController *)0x0;
  (this->BoidInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidInfos).ArrayNum = 0;
  (this->BoidInfos).ArrayMax = 0;
  (this->BoidInstKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidInstKeys).ArrayNum = 0;
  (this->BoidInstKeys).ArrayMax = 0;
  (this->LodScreenSizeArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LodScreenSizeArrays).ArrayNum = 0;
  (this->LodScreenSizeArrays).ArrayMax = 0;
  return this;
}

// AWN_ISKM_BoidsActor @ 14a83e170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISKM_BoidsActor * __thiscall
AWN_ISKM_BoidsActor::AWN_ISKM_BoidsActor(AWN_ISKM_BoidsActor *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  FWN_UniqueIndexAllocator *this_01;
  byte bVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this_00 = &(this->Profile).SoftObjectPtr.field_0x18;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined4 *)&this->_padding_ = 0x47c35000;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined1 *)&this->_padding_ = 0;
  this->LODDistScale = 0.25;
  this->MaxRenderingDistance = 6400.0;
  this->MaxShadowDistance = 0xc80;
  this->FullSimulationDistance = 3200.0;
  this->MaxSimulationDistance = 12800.0;
  *(undefined8 *)&this->SimulationRatioExponent = 0x40000000;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Profile).SoftObjectPtr.field_0x20 = 0;
  *(undefined4 *)&(this->Profile).SoftObjectPtr.field_0x4 = 0;
  *(undefined8 *)&(this->Profile).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Profile).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this_01 = &this->BoidIndexAllocator;
  (this->InitialSpawnInfo).SpecificSkeletalMeshName.ComparisonIndex = 0;
  (this->InitialSpawnInfo).SpecificSkeletalMeshName.Number = 0;
  this_01->Granularity = 0x20;
  this_01->BaseIndex = 0;
  (this->BoidIndexAllocator).NumIndices = 0;
  (this->BoidIndexAllocator).FreedIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->BoidIndexAllocator).FreedIndices.ArrayMax = 0;
  (this->InitialSpawnInfo).SpecificAnimSequenceName.ComparisonIndex = 0;
  (this->InitialSpawnInfo).SpecificAnimSequenceName.Number = 0;
  (this->InitialSpawnInfo).NumBoids = 0;
  (this->InitialSpawnInfo).Radius = 3200.0;
  (this->InitialSpawnInfo).MinDistance = 100.0;
  (this->InitialSpawnInfo).MinScale = 1.0;
  (this->InitialSpawnInfo).MaxScale = 1.0;
  (this->InitialSpawnInfo).MinZ = 0.0;
  (this->InitialSpawnInfo).MaxZ = 0.0;
  (this->InitialSpawnInfo).bTracingToGround = true;
  (this->InitialSpawnInfo).bUseNavInfo = false;
  (this->InitialSpawnInfo).SpawnTiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialSpawnInfo).SpawnTiles.ArrayNum = 0;
  (this->InitialSpawnInfo).SpawnTiles.ArrayMax = 0;
  (this->InitialSpawnInfo).TileSize = 0;
  (this->BoidSpawner).SpawnInfo.SpecificSkeletalMeshName.ComparisonIndex = 0;
  (this->BoidSpawner).SpawnInfo.SpecificSkeletalMeshName.Number = 0;
  (this->BoidSpawner).SpawnInfo.SpecificAnimSequenceName.ComparisonIndex = 0;
  (this->BoidSpawner).SpawnInfo.SpecificAnimSequenceName.Number = 0;
  (this->BoidSpawner).SpawnInfo.NumBoids = 0;
  (this->BoidSpawner).SpawnInfo.Radius = 3200.0;
  (this->BoidSpawner).SpawnInfo.MinDistance = 100.0;
  (this->BoidSpawner).SpawnInfo.MinScale = 1.0;
  (this->BoidSpawner).SpawnInfo.MaxScale = 1.0;
  (this->BoidSpawner).SpawnInfo.MinZ = 0.0;
  (this->BoidSpawner).SpawnInfo.MaxZ = 0.0;
  (this->BoidSpawner).SpawnInfo.bTracingToGround = true;
  (this->BoidSpawner).SpawnInfo.bUseNavInfo = false;
  (this->BoidSpawner).SpawnInfo.SpawnTiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidSpawner).SpawnInfo.SpawnTiles.ArrayNum = 0;
  (this->BoidSpawner).SpawnInfo.SpawnTiles.ArrayMax = 0;
  (this->BoidSpawner).SpawnInfo.TileSize = 0;
  (this->BoidSpawner).Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidSpawner).Transforms.ArrayNum = 0;
  (this->BoidSpawner).Transforms.ArrayMax = 0;
  (this->BoidSpawner).Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidSpawner).Indices.ArrayNum = 0;
  (this->BoidSpawner).Indices.ArrayMax = 0;
  this->bIsBoundDirty = false;
  this->LastGameTime = 0.0;
  this->SimulationLodRange = 0.0;
  FWN_UniqueIndexAllocator::TryResize(this_01);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  this->BoidsController = (FWN_ISKM_BoidsController *)0x0;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar1 & 0xf9;
  (this->BoidInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidInfos).ArrayNum = 0;
  (this->BoidInfos).ArrayMax = 0;
  (this->BoidInstKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidInstKeys).ArrayNum = 0;
  (this->BoidInstKeys).ArrayMax = 0;
  (this->LodScreenSizeArrays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LodScreenSizeArrays).ArrayNum = 0;
  (this->LodScreenSizeArrays).ArrayMax = 0;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  pFVar3 = ::FName::FName(&local_res8,"RootComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~AWN_ISKM_BoidsActor @ 14a83f940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_BoidsActor::~AWN_ISKM_BoidsActor(AWN_ISKM_BoidsActor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->LodScreenSizeArrays).AllocatorInstance.Data,(this->LodScreenSizeArrays).ArrayNum
            );
  pFVar1 = (this->LodScreenSizeArrays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoidInstKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoidInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoidIndexAllocator).FreedIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoidSpawner).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoidSpawner).Transforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoidSpawner).SpawnInfo.SpawnTiles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InitialSpawnInfo).SpawnTiles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Profile).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&AWN_ISKM_CharacterBase::_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7IWN_ISKM_Controller__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AddBoid @ 14a842aa0

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

int __thiscall
AWN_ISKM_BoidsActor::AddBoid
          (AWN_ISKM_BoidsActor *this,FWN_ISKM_BoidInfo *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  TArray<FWN_ISKM_BoidInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FWN_ISKM_InstanceKey,TSizedDefaultAllocator<32>_> *pTVar3;
  FWN_ISKM_SkeletalMeshInfo *pFVar4;
  undefined4 uVar5;
  FWN_ISKM_BoidsController *pFVar6;
  UWN_ISKM_Subsystem *this_00;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FWN_ISKM_InstanceKey FVar14;
  AActor *pAVar15;
  UClass *pUVar16;
  UWorld *this_01;
  USkeletalMesh *pUVar17;
  UObject *pUVar18;
  undefined4 extraout_var;
  ForAnyElementType FVar19;
  FWN_ISKM_SkeletalMeshInfo *this_02;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  undefined1 local_res8 [8];
  undefined1 local_458 [4];
  uint local_454;
  uint local_450;
  UWorld *local_448;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_440;
  undefined1 local_430 [24];
  double local_418;
  double local_410;
  longlong local_408;
  longlong lStack_400;
  longlong local_3f8;
  undefined4 uStack_3f0;
  undefined1 uStack_3ec;
  undefined2 uStack_3eb;
  undefined1 uStack_3e9;
  longlong local_3e8;
  longlong lStack_3e0;
  longlong local_3d8;
  undefined4 uStack_3d0;
  undefined1 uStack_3cc;
  undefined2 uStack_3cb;
  undefined1 uStack_3c9;
  TVector<double>_u_0 local_3c8;
  TVector<double>_u_0 local_3b0;
  TVector<double>_u_0 local_398;
  double local_380;
  double dStack_378;
  longlong local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  FScriptContainerElement *pFStack_348;
  longlong local_340;
  double local_338;
  ForAnyElementType FStack_330;
  double local_328;
  undefined1 local_318 [184];
  FWeakObjectPtr local_260;
  FWeakObjectPtr FStack_258;
  IActorInstanceManagerInterface *local_250;
  undefined8 uStack_248;
  undefined1 local_218 [164];
  int local_174;
  FWeakObjectPtr local_160;
  FWeakObjectPtr FStack_158;
  ForAnyElementType local_150;
  undefined8 uStack_148;
  undefined8 local_118;
  undefined1 auStack_110 [64];
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  ForAnyElementType FStack_70;
  AWN_ISKM_BoidsActor *local_68;
  ForAnyElementType FStack_60;
  
  local_430._8_8_ = TSoftObjectPtr<UWN_ISKM_Profile>::LoadSynchronous(&this->Profile);
  uVar11 = FWN_UniqueIndexAllocator::Acquire(&this->BoidIndexAllocator);
  uVar23 = (ulonglong)(int)uVar11;
  local_454 = uVar11;
  if ((this->BoidInfos).ArrayNum <= (int)uVar11) {
    pTVar2 = &this->BoidInfos;
    iVar13 = (this->BoidInfos).ArrayNum;
    piVar1 = &(this->BoidInfos).ArrayNum;
    uVar20 = (this->BoidIndexAllocator).NumIndices - (this->BoidIndexAllocator).BaseIndex;
    if (iVar13 < (int)uVar20) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc0,0x10,uVar20 - iVar13,&pTVar2->AllocatorInstance,piVar1,
                          &(this->BoidInfos).ArrayMax);
      DefaultConstructItems<FWN_ISKM_BoidInfo,int>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0xc0,uVar20 - iVar13);
    }
    else {
      if ((int)uVar20 < 0) goto LAB_14a84337c;
      if ((int)uVar20 < iVar13) {
        iVar13 = iVar13 - uVar20;
        if (iVar13 < 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
        }
        else if (iVar13 == 0) goto LAB_14a842c11;
        pFVar21 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 0xc0;
        iVar12 = (*piVar1 - iVar13) - uVar20;
        if (iVar12 != 0) {
          memmove(pFVar21,pFVar21 + (longlong)iVar13 * 0xc0,(longlong)iVar12 * 0xc0);
        }
        *piVar1 = *piVar1 - iVar13;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,0x10,&pTVar2->AllocatorInstance,*piVar1,&(this->BoidInfos).ArrayMax);
      }
    }
LAB_14a842c11:
    pTVar3 = &this->BoidInstKeys;
    iVar13 = (this->BoidInstKeys).ArrayNum;
    piVar1 = &(this->BoidInstKeys).ArrayNum;
    if (iVar13 < (int)uVar20) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar20 - iVar13,&pTVar3->AllocatorInstance,piVar1,
                          &(this->BoidInstKeys).ArrayMax);
      DefaultConstructItems<FWN_ISKM_InstanceKey,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4,uVar20 - iVar13);
    }
    else {
      if ((int)uVar20 < 0) {
LAB_14a84337c:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      if ((int)uVar20 < iVar13) {
        iVar13 = iVar13 - uVar20;
        if (iVar13 < 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
        }
        else if (iVar13 == 0) goto LAB_14a842c63;
        pFVar21 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar20 * 4;
        iVar12 = (*piVar1 - iVar13) - uVar20;
        if (iVar12 != 0) {
          memmove(pFVar21,pFVar21 + (longlong)iVar13 * 4,(longlong)iVar12 << 2);
        }
        *piVar1 = *piVar1 - iVar13;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar3->AllocatorInstance,*piVar1,&(this->BoidInstKeys).ArrayMax);
      }
    }
  }
LAB_14a842c63:
  local_118 = *(undefined8 *)param_1;
  auStack_110._0_8_ = *(undefined8 *)&(param_1->SkeletalMeshName).Number;
  auStack_110._8_8_ = *(undefined8 *)&(param_1->_PrevAnimSequenceName).Number;
  auStack_110._16_8_ = *(undefined8 *)&(param_1->AnimSequenceName).Number;
  auStack_110._24_4_ = param_1->_SkippedSimulationTime;
  auStack_110._28_4_ = param_1->_AnimTime;
  auStack_110._32_4_ = param_1->_BlendingAnimTime;
  auStack_110._36_4_ = param_1->_AnimTransitionTime;
  local_450 = ~uVar11 >> 0x1f;
  auStack_110._40_4_ = param_1->_AnimTransitionInterval;
  auStack_110._44_4_ = param_1->_BlendingWeight;
  auStack_110._48_8_ = *(undefined8 *)&param_1->field_0x38;
  auStack_110._56_8_ = (param_1->Transform).Rotation.XY.m128d_f64[0];
  dStack_d0 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  local_c8 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  dStack_c0 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  local_b8 = (param_1->Transform).Translation.XY.m128d_f64[0];
  dStack_b0 = (param_1->Transform).Translation.XY.m128d_f64[1];
  local_98 = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  dStack_90 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  local_a8 = (param_1->Transform).Translation.ZW.m128d_f64[0];
  dStack_a0 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  local_88 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  dStack_80 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  local_78._0_4_ = param_1->_DistFromCamera;
  local_78._4_4_ = param_1->_AnimSpeed;
  FStack_70.Data = (FScriptContainerElement *)param_1->_LastSimulationFrameCounter;
  local_68 = param_1->_Actor;
  FStack_60.Data = *(FScriptContainerElement **)&param_1->field_0xb8;
  uVar20 = 0;
  if ((int)uVar11 < (this->BoidInfos).ArrayNum) {
    uVar20 = local_450;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    iVar13 = (*pcVar7)();
    return iVar13;
  }
  pFVar21 = (this->BoidInfos).AllocatorInstance.Data + uVar23 * 0xc0;
  *(undefined8 *)pFVar21 = local_118;
  *(undefined8 *)(pFVar21 + 8) = auStack_110._0_8_;
  *(undefined8 *)(pFVar21 + 0x10) = auStack_110._8_8_;
  *(undefined8 *)(pFVar21 + 0x18) = auStack_110._16_8_;
  *(undefined8 *)(pFVar21 + 0x20) = auStack_110._24_8_;
  *(undefined8 *)(pFVar21 + 0x28) = auStack_110._32_8_;
  *(undefined8 *)(pFVar21 + 0x30) = auStack_110._40_8_;
  *(undefined8 *)(pFVar21 + 0x38) = auStack_110._48_8_;
  *(undefined8 *)(pFVar21 + 0x40) = auStack_110._56_8_;
  *(double *)(pFVar21 + 0x48) = dStack_d0;
  *(double *)(pFVar21 + 0x50) = local_c8;
  *(double *)(pFVar21 + 0x58) = dStack_c0;
  *(double *)(pFVar21 + 0x60) = local_b8;
  *(double *)(pFVar21 + 0x68) = dStack_b0;
  *(double *)(pFVar21 + 0x70) = local_a8;
  *(double *)(pFVar21 + 0x78) = dStack_a0;
  *(double *)(pFVar21 + 0x80) = local_98;
  *(double *)(pFVar21 + 0x88) = dStack_90;
  *(double *)(pFVar21 + 0x90) = local_88;
  *(double *)(pFVar21 + 0x98) = dStack_80;
  *(undefined8 *)(pFVar21 + 0xa0) = local_78;
  *(FScriptContainerElement **)(pFVar21 + 0xa8) = FStack_70.Data;
  *(AWN_ISKM_BoidsActor **)(pFVar21 + 0xb0) = local_68;
  *(FScriptContainerElement **)(pFVar21 + 0xb8) = FStack_60.Data;
  *pFVar21 = (FScriptContainerElement)0x1;
  if (param_3) {
    local_448 = AActor::GetWorld((AActor *)this);
    if (local_448 != (UWorld *)0x0) {
      dVar8 = *(double *)(pFVar21 + 0x60);
      dVar9 = *(double *)(pFVar21 + 0x68);
      local_370 = *(longlong *)(pFVar21 + 0x70);
      local_410 = (double)(this->InitialSpawnInfo).MaxZ;
      local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_440.ArrayNum = 0;
      local_440.ArrayMax = 0;
      local_3c8._s_0.Z = (double)(this->InitialSpawnInfo).MinZ;
      local_430._16_8_ = dVar8;
      local_418 = dVar9;
      local_3c8._s_0.X = dVar8;
      local_3c8._s_0.Y = dVar9;
      local_380 = dVar8;
      dStack_378 = dVar9;
      UWorld::LineTraceMultiByChannel
                (local_448,&local_440,(TVector<double> *)(local_430 + 0x10),
                 (TVector<double> *)&local_3c8._s_0,ECC_GameTraceChannel5,
                 &FCollisionQueryParams::DefaultQueryParam,
                 &FCollisionResponseParams::DefaultResponseParam);
      iVar13 = local_440.ArrayNum;
      uVar23 = (ulonglong)local_440.ArrayNum;
      pFVar22 = local_440.AllocatorInstance.Data + uVar23 * 0x100;
      FVar19.Data = local_440.AllocatorInstance.Data;
      do {
        if ((int)uVar23 != iVar13) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar19.Data == pFVar22) goto LAB_14a842fd7;
        pAVar15 = FActorInstanceHandle::FetchActor((FActorInstanceHandle *)(FVar19.Data + 0xb8));
        pAVar15 = AActor::GetAttachParentActor(pAVar15);
        if (pAVar15 != (AActor *)0x0) {
          pUVar16 = StaticClass();
          iVar12 = (int)pUVar16->_padding_;
          if ((iVar12 <= *(int *)(pAVar15->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar15->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
              &pUVar16->_padding_)) goto LAB_14a842fcd;
        }
        uVar23 = local_440._8_8_ & 0xffffffff;
        FVar19.Data = FVar19.Data + 0x100;
      } while( true );
    }
  }
  else if (param_2) {
    this_01 = AActor::GetWorld((AActor *)this);
    if (this_01 == (UWorld *)0x0) {
      local_458[0] = 0;
      `AWN_ISKM_BoidsActor::AddBoid'::__l33::<lambda_1>::operator()(local_458);
    }
    else {
      dVar8 = *(double *)(pFVar21 + 0x60);
      pFVar22 = *(FScriptContainerElement **)(pFVar21 + 0x68);
      local_340 = *(longlong *)(pFVar21 + 0x70);
      local_398._s_0.Z = __real_40f86a0000000000;
      local_3b0._s_0.Z = __real_c0f86a0000000000;
      local_3b0._s_0.X = dVar8;
      local_3b0._s_0.Y = (double)pFVar22;
      local_398._s_0.X = dVar8;
      local_398._s_0.Y = (double)pFVar22;
      local_350 = dVar8;
      pFStack_348 = pFVar22;
      memset(local_218,0,0x100);
      uStack_3cb = 0;
      uStack_3c9 = 0;
      local_3e8 = 0;
      lStack_3e0 = 0;
      local_3d8 = 0;
      local_160.ObjectIndex = 0;
      local_160.ObjectSerialNumber = 0;
      FStack_158.ObjectIndex = 0;
      FStack_158.ObjectSerialNumber = 0;
      uStack_3d0 = 0xffffffff;
      uStack_3cc = 0;
      uStack_148._0_4_ = -1;
      uStack_148._4_4_ = 0;
      local_218._4_4_ = 1.0;
      local_174 = -1;
      local_150.Data = (FScriptContainerElement *)0x0;
      bVar10 = UWorld::LineTraceSingleByChannel
                         (this_01,(FHitResult *)local_218,(TVector<double> *)&local_398._s_0,
                          (TVector<double> *)&local_3b0._s_0,ECC_WorldStatic,
                          &FCollisionQueryParams::DefaultQueryParam,
                          &FCollisionResponseParams::DefaultResponseParam);
      if (bVar10) {
        local_328 = (double)local_218._56_8_ + __real_4024000000000000;
        *(double *)(pFVar21 + 0x60) = dVar8;
        *(FScriptContainerElement **)(pFVar21 + 0x68) = pFVar22;
        *(double *)(pFVar21 + 0x70) = local_328;
        *(undefined8 *)(pFVar21 + 0x78) = 0;
        local_338 = dVar8;
        FStack_330.Data = pFVar22;
      }
    }
  }
LAB_14a8430a8:
  local_448 = *(UWorld **)(pFVar21 + 4);
  this_02 = (FWN_ISKM_SkeletalMeshInfo *)
            (((TArray<FWN_ISKM_SkeletalMeshInfo,TSizedDefaultAllocator<32>_> *)
             (local_430._8_8_ + 0x90))->AllocatorInstance).Data;
  pFVar4 = this_02 + ((TArray<FWN_ISKM_SkeletalMeshInfo,TSizedDefaultAllocator<32>_> *)
                     (local_430._8_8_ + 0x90))->ArrayNum;
  iVar13 = (int)uVar23;
  do {
    if (this_02 == pFVar4) {
LAB_14a8430ff:
      *pFVar21 = (FScriptContainerElement)0x0;
LAB_14a843102:
      pFVar6 = this->BoidsController;
      this->bIsBoundDirty = true;
      if (pFVar6 != (FWN_ISKM_BoidsController *)0x0) {
        (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6,uVar23 & 0xffffffff,pFVar21);
      }
      return iVar13;
    }
    bVar10 = `UWN_ISKM_Profile::FindSkeletalMeshInfo'::__l2::<lambda_1>::operator()
                       (&local_448,this_02);
    if (bVar10) {
      if ((this_02 != (FWN_ISKM_SkeletalMeshInfo *)0x0) &&
         (pUVar17 = TSoftObjectPtr<USkeletalMesh>::LoadSynchronous(&this_02->SkeletalMesh),
         pUVar17 != (USkeletalMesh *)0x0)) {
        this_00 = (UWN_ISKM_Subsystem *)this->_padding_;
        pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Profile);
        if (pUVar18 == (UObject *)0x0) {
LAB_14a8432d8:
          pUVar18 = (UObject *)0x0;
        }
        else {
          pUVar16 = UWN_ISKM_Profile::StaticClass();
          iVar12 = (int)pUVar16->_padding_;
          if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar12) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
              &pUVar16->_padding_)) goto LAB_14a8432d8;
        }
        FVar14 = UWN_ISKM_Subsystem::AddInstance
                           (this_00,(USkeletalMesh *)local_430,(UWN_ISKM_Profile *)pUVar17,
                            (int)pUVar18);
        uVar5 = *(undefined4 *)CONCAT44(extraout_var,FVar14.Value);
        uVar11 = 0;
        if (iVar13 < (this->BoidInstKeys).ArrayNum) {
          uVar11 = local_450;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          iVar13 = (*pcVar7)();
          return iVar13;
        }
        *(undefined4 *)((this->BoidInstKeys).AllocatorInstance.Data + (longlong)iVar13 * 4) = uVar5;
        if (*pFVar21 != (FScriptContainerElement)0x0) {
          uVar11 = rand();
          *(AWN_ISKM_BoidsActor **)(pFVar21 + 0xb0) = this;
          *(float *)(pFVar21 + 0x24) = (float)(uVar11 & 0x7fff) * ___real_382aaae8;
        }
        goto LAB_14a843102;
      }
      goto LAB_14a8430ff;
    }
    this_02 = this_02 + 1;
  } while( true );
LAB_14a842fcd:
  local_410 = *(double *)(FVar19.Data + 0x38);
LAB_14a842fd7:
  memset(local_318,0,0x100);
  local_408 = 0;
  lStack_400 = 0;
  uStack_3eb = 0;
  local_260.ObjectIndex = 0;
  local_260.ObjectSerialNumber = 0;
  FStack_258.ObjectIndex = 0;
  FStack_258.ObjectSerialNumber = 0;
  uStack_3e9 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0xffffffff;
  uStack_3ec = 0;
  uStack_248 = 0xffffffff;
  local_318._4_4_ = 1.0;
  local_318._164_4_ = -1;
  local_250 = (IActorInstanceManagerInterface *)0x0;
  bVar10 = UWorld::LineTraceSingleByChannel
                     (local_448,(FHitResult *)local_318,(TVector<double> *)(local_430 + 0x10),
                      (TVector<double> *)&local_3c8._s_0,ECC_WorldStatic,
                      &FCollisionQueryParams::DefaultQueryParam,
                      &FCollisionResponseParams::DefaultResponseParam);
  if (bVar10) {
    local_358 = (double)local_318._56_8_ + __real_4024000000000000;
    *(double *)(pFVar21 + 0x60) = dVar8;
    *(double *)(pFVar21 + 0x68) = dVar9;
    *(double *)(pFVar21 + 0x70) = local_358;
    *(undefined8 *)(pFVar21 + 0x78) = 0;
    local_368 = dVar8;
    dStack_360 = dVar9;
  }
  if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.AllocatorInstance.Data);
  }
  uVar23 = (ulonglong)local_454;
  goto LAB_14a8430a8;
}

// DestroySkeletalMeshInstances @ 14a847a40

void __thiscall AWN_ISKM_BoidsActor::DestroySkeletalMeshInstances(AWN_ISKM_BoidsActor *this)

{
  FWN_ISKM_InstanceKey *pFVar1;
  int iVar2;
  FWN_ISKM_InstanceKey *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (FWN_ISKM_InstanceKey *)(this->BoidInstKeys).AllocatorInstance.Data;
  iVar2 = (this->BoidInstKeys).ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->BoidInstKeys).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_ISKM_InstanceKey,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->Value != 0xffffffff) {
      UWN_ISKM_Subsystem::RemoveInstance((UWN_ISKM_Subsystem *)this->_padding_,pFVar3);
      pFVar3->Value = 0xffffffff;
    }
    pFVar3 = pFVar3 + 1;
  }
  return;
}

// EndPlay @ 14a8480d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_BoidsActor::EndPlay(AWN_ISKM_BoidsActor *this,Type param_1)

{
  UWorld *this_00;
  UWN_ISKM_Subsystem *this_01;
  IWN_ISKM_Controller *pIVar1;
  
  if (param_1 == RemovedFromWorld) {
    pIVar1 = (IWN_ISKM_Controller *)&this->_padding_;
    (**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1);
    this->BoidsController = (FWN_ISKM_BoidsController *)0x0;
    if ((int)this->_padding_ != -1) {
      this_00 = AActor::GetWorld((AActor *)this);
      this_01 = UWorld::GetSubsystem<UWN_ISKM_Subsystem>(this_00);
      if (this == (AWN_ISKM_BoidsActor *)0x0) {
        pIVar1 = (IWN_ISKM_Controller *)0x0;
      }
      UWN_ISKM_Subsystem::UnregisterController(this_01,pIVar1);
    }
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetBoidInfo @ 14a84a070

FWN_ISKM_BoidInfo * __thiscall
AWN_ISKM_BoidsActor::GetBoidInfo(AWN_ISKM_BoidsActor *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWN_ISKM_BoidInfo *pFVar4;
  
  if ((this->BoidInfos).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InIndex < BoidInfos.Num()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_BoidsActor.cpp"
                       ,0x36f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWN_ISKM_BoidInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->BoidInfos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWN_ISKM_BoidInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FWN_ISKM_BoidInfo *)((this->BoidInfos).AllocatorInstance.Data + (longlong)param_1 * 0xc0);
}

// GetBoidInfo_Mutable @ 14a84a120

FWN_ISKM_BoidInfo * __thiscall
AWN_ISKM_BoidsActor::GetBoidInfo_Mutable(AWN_ISKM_BoidsActor *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWN_ISKM_BoidInfo *pFVar4;
  
  if ((this->BoidInfos).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InIndex < BoidInfos.Num()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_BoidsActor.cpp"
                       ,0x369,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWN_ISKM_BoidInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->BoidInfos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWN_ISKM_BoidInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FWN_ISKM_BoidInfo *)((this->BoidInfos).AllocatorInstance.Data + (longlong)param_1 * 0xc0);
}

// GetPrivateStaticClass @ 14a84ae40

UClass * __cdecl AWN_ISKM_BoidsActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISKM_BoidsActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_BoidsActor",
               &Z_Registration_Info_UClass_AWN_ISKM_BoidsActor.InnerSingleton,
               StaticRegisterNativesAWN_ISKM_BoidsActor,0x478,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_ISKM_BoidsActor>,
               InternalVTableHelperCtorCaller<AWN_ISKM_BoidsActor>,local_res8,
               AWN_ISKM_CharacterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISKM_BoidsActor.InnerSingleton;
}

// ISKM_DestroyAllComponents @ 14a84c110

void __thiscall AWN_ISKM_BoidsActor::ISKM_DestroyAllComponents(AWN_ISKM_BoidsActor *this)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  FWN_ISKM_BoidRandomSpawner::RemoveAllBoids
            ((FWN_ISKM_BoidRandomSpawner *)&this->_padding_,
             (AWN_ISKM_BoidsActor *)&this[-1]._padding_);
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,&this[-1]._padding_);
  }
  DestroySkeletalMeshInstances((AWN_ISKM_BoidsActor *)&this[-1]._padding_);
  return;
}

// ISKM_PostUpdateController @ 14a84c5f0

void __thiscall
AWN_ISKM_BoidsActor::ISKM_PostUpdateController
          (AWN_ISKM_BoidsActor *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  bool bVar5;
  
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = UWN_ISKM_Profile::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"PostUpdateActor");
      bVar5 = -1 < CpuChannel->Enabled;
      if (bVar5) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId642,"PostUpdateActor",
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_BoidsActor.cpp"
                   ,0x282);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId642);
      }
      lVar2 = this->_padding_;
      *(float *)((longlong)&this->_padding_ + 4) = param_2;
      if ((char)lVar2 != '\0') {
        UpdateBoundsFromBoids((AWN_ISKM_BoidsActor *)&this[-1]._padding_);
        *(undefined1 *)&this->_padding_ = 0;
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  return;
}

// ISKM_PostUpdateInstances @ 14a84c7f0

void __thiscall
AWN_ISKM_BoidsActor::ISKM_PostUpdateInstances(AWN_ISKM_BoidsActor *this,float param_1)

{
  int iVar1;
  longlong *plVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  bool bVar5;
  
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = UWN_ISKM_Profile::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"PostUpdateInstances");
      bVar5 = -1 < CpuChannel->Enabled;
      if (bVar5) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId625,"PostUpdateInstances",
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_BoidsActor.cpp"
                   ,0x271);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId625);
      }
      plVar2 = (longlong *)this->_padding_;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,param_1 - *(float *)((longlong)&this->_padding_ + 4));
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  return;
}

// ISKM_PreUpdateController @ 14a84c900

void __thiscall
AWN_ISKM_BoidsActor::ISKM_PreUpdateController
          (AWN_ISKM_BoidsActor *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar1 != (UObject *)0x0) {
    UWN_ISKM_Profile::StaticClass();
    return;
  }
  return;
}

// ISKM_PreUpdateInstances @ 14a84c970

TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> * __thiscall
AWN_ISKM_BoidsActor::ISKM_PreUpdateInstances
          (AWN_ISKM_BoidsActor *this,
          TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          float param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4)

{
  int *piVar1;
  longlong *this_00;
  undefined4 uVar2;
  longlong *plVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> *pTVar12;
  AWN_ISKM_BoidsActor *pAVar13;
  AWN_ISKM_BoidsActor *pAVar14;
  undefined4 *puVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  AWN_ISKM_BoidsActor *pAVar19;
  uint uVar20;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar21;
  ForAnyElementType *pFVar22;
  bool bVar23;
  ForAnyElementType local_a0;
  undefined8 local_98;
  uint local_90;
  longlong local_88;
  longlong local_80;
  AWN_ISKM_BoidsActor *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong *local_60;
  TPersistentObjectPtr<FSoftObjectPath> *local_58;
  TPersistentObjectPtr<FSoftObjectPath> *local_50;
  
  local_50 = (TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_;
  pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(local_50);
  if (pUVar10 == (UObject *)0x0) {
LAB_14a84d011:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar11 = UWN_ISKM_Profile::StaticClass();
  iVar9 = (int)pUVar11->_padding_;
  if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar9) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
      &pUVar11->_padding_)) goto LAB_14a84d011;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"PreUpdateInstances");
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId465,"PreUpdateInstances",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_BoidsActor.cpp"
               ,0x1d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId465);
  }
  FWN_ISKM_BoidRandomSpawner::Update
            ((FWN_ISKM_BoidRandomSpawner *)&this->_padding_,
             (AWN_ISKM_BoidsActor *)&this[-1]._padding_);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_1 - *(float *)((longlong)&this->_padding_ + 4));
  }
  uVar17 = (uint)this->_padding_;
  lVar18 = (longlong)(int)uVar17;
  pAVar19 = (AWN_ISKM_BoidsActor *)0x0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&local_a0,0,(int *)((longlong)&local_98 + 4));
    pAVar13 = pAVar19;
    pAVar14 = pAVar19;
    do {
      uVar20 = (uint)pAVar14;
      uVar17 = 0;
      if ((int)uVar20 < (int)this->_padding_) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar12;
      }
      if (*(char *)((longlong)&pAVar13->_padding_ + this->_padding_) != '\0') {
        local_78 = pAVar19;
        if (&this[-1]._padding_ != (longlong *)0x0) {
          local_78 = this;
        }
        uStack_70 = uVar20;
        if ((int)local_98 == local_98._4_4_) {
          local_98._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_a0,(int *)((longlong)&local_98 + 4));
        }
        lVar16 = (longlong)(int)local_98;
        local_98._0_4_ = (int)local_98 + 1;
        *(AWN_ISKM_BoidsActor **)(local_a0.Data + lVar16 * 0x10) = local_78;
        *(ulonglong *)(local_a0.Data + lVar16 * 0x10 + 8) = CONCAT44(uStack_6c,uStack_70);
      }
      pAVar14 = (AWN_ISKM_BoidsActor *)(ulonglong)(uVar20 + 1);
      pAVar13 = (AWN_ISKM_BoidsActor *)&pAVar13->_padding_;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  pAVar13 = (AWN_ISKM_BoidsActor *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pAVar13 == (AWN_ISKM_BoidsActor *)0x0) {
LAB_14a84cbe8:
    pAVar13 = pAVar19;
  }
  else {
    pUVar11 = UWN_ISKM_Profile::StaticClass();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(pAVar13->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_)) goto LAB_14a84cbe8;
  }
  uVar17 = (uint)pAVar13->_padding_;
  if (uVar17 == (uint)this->_padding_) goto LAB_14a84cf90;
  this_00 = &this->_padding_;
  iVar9 = (int)this->_padding_;
  plVar3 = &this->_padding_;
  local_68 = plVar3;
  local_60 = this_00;
  if (iVar9 < (int)uVar17) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar17 - iVar9,(ForAnyElementType *)this_00,(int *)plVar3,
                       (int *)((longlong)&this->_padding_ + 4));
    memset((void *)((longlong)iVar7 * 0x10 + *this_00),0,(longlong)(int)(uVar17 - iVar9) << 4);
  }
  else {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((int)uVar17 < iVar9) {
      iVar9 = iVar9 - uVar17;
      if (iVar9 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
      }
      else if (iVar9 == 0) goto LAB_14a84cce2;
      TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 this_00,uVar17,iVar9);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)this_00,(int)*plVar3,
                 (int *)((longlong)&this->_padding_ + 4));
    }
  }
LAB_14a84cce2:
  local_90 = 0;
  if (0 < (int)uVar17) {
    local_80 = 0;
    local_88 = 0;
    pTVar21 = (TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_;
    pAVar13 = pAVar19;
    local_78 = (AWN_ISKM_BoidsActor *)(longlong)(int)uVar17;
    do {
      lVar18 = local_88;
      pAVar14 = (AWN_ISKM_BoidsActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar21);
      if (pAVar14 == (AWN_ISKM_BoidsActor *)0x0) {
LAB_14a84cd36:
        pAVar14 = pAVar19;
      }
      else {
        pUVar11 = UWN_ISKM_Profile::StaticClass();
        iVar9 = (int)pUVar11->_padding_;
        if ((*(int *)(pAVar14->_padding_ + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar14->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar11->_padding_)) goto LAB_14a84cd36;
      }
      uVar20 = (uint)pAVar13;
      uVar17 = 0;
      if ((int)uVar20 < (int)pAVar14->_padding_) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar12;
      }
      pTVar21 = (TPersistentObjectPtr<FSoftObjectPath> *)
                (pAVar14->_padding_ + (longlong)(int)uVar20 * 0x48);
      local_58 = pTVar21;
      pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar21);
      if (pUVar10 != (UObject *)0x0) {
        pUVar11 = Z_Construct_UClass_USkeletalMesh_NoRegister();
        iVar9 = (int)pUVar11->_padding_;
        if ((iVar9 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar11->_padding_)) {
          pAVar13 = (AWN_ISKM_BoidsActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar21);
          if (pAVar13 == (AWN_ISKM_BoidsActor *)0x0) {
LAB_14a84ce16:
            pAVar13 = pAVar19;
          }
          else {
            pUVar11 = Z_Construct_UClass_USkeletalMesh_NoRegister();
            iVar9 = (int)pUVar11->_padding_;
            if ((*(int *)(pAVar13->_padding_ + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar11->_padding_)) goto LAB_14a84ce16;
          }
          uVar8 = (**(code **)(pAVar13->_padding_ + 0x3d0))(pAVar13);
          uVar17 = 0;
          if ((int)local_90 < (int)*local_68) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar12;
          }
          pFVar22 = (ForAnyElementType *)(*local_60 + lVar18);
          if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
          }
          piVar1 = (int *)((longlong)&pFVar22[1].Data + 4);
          if (*(int *)((longlong)&pFVar22[1].Data + 4) < (int)uVar8) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar8,pFVar22,*(int *)&pFVar22[1].Data,piVar1);
          }
          pTVar21 = local_58;
          pAVar13 = pAVar19;
          if (0 < (int)uVar8) {
            do {
              pAVar14 = (AWN_ISKM_BoidsActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar21);
              if (pAVar14 == (AWN_ISKM_BoidsActor *)0x0) {
LAB_14a84cef6:
                pAVar14 = pAVar19;
              }
              else {
                pUVar11 = Z_Construct_UClass_USkeletalMesh_NoRegister();
                iVar9 = (int)pUVar11->_padding_;
                if ((*(int *)(pAVar14->_padding_ + 0x38) < iVar9) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pAVar14->_padding_ + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar11->_padding_)) goto LAB_14a84cef6;
              }
              puVar15 = (undefined4 *)(**(code **)(pAVar14->_padding_ + 0x330))(pAVar14,pAVar13);
              uVar2 = *puVar15;
              iVar9 = *(int *)&pFVar22[1].Data;
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,pFVar22,piVar1);
                *(int *)&pFVar22[1].Data = iVar9;
              }
              uVar17 = (int)pAVar13 + 1;
              *(int *)&pFVar22[1].Data = iVar9 + 1;
              *(undefined4 *)(pFVar22->Data + (longlong)iVar9 * 4) = uVar2;
              pAVar13 = (AWN_ISKM_BoidsActor *)(ulonglong)uVar17;
            } while ((int)uVar17 < (int)uVar8);
          }
        }
      }
      local_90 = local_90 + 1;
      pAVar13 = (AWN_ISKM_BoidsActor *)(ulonglong)local_90;
      local_88 = local_88 + 0x10;
      local_80 = local_80 + 1;
      pTVar21 = local_50;
    } while (local_80 < (longlong)local_78);
  }
LAB_14a84cf90:
  FVar5.Data = local_a0.Data;
  local_a0.Data = (FScriptContainerElement *)0x0;
  *(float *)&this->_padding_ =
       *(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4);
  (__return_storage_ptr__->AllocatorInstance).Data = FVar5.Data;
  __return_storage_ptr__->ArrayNum = (int)local_98;
  __return_storage_ptr__->ArrayMax = local_98._4_4_;
  local_98 = 0;
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return __return_storage_ptr__;
}

// ISKM_UpdateAnimation_AnyThread @ 14a84d080

void __thiscall
AWN_ISKM_BoidsActor::ISKM_UpdateAnimation_AnyThread
          (AWN_ISKM_BoidsActor *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  UObject *pUVar1;
  bool bVar2;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"UpdateAnimations");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId450,"UpdateAnimations",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_BoidsActor.cpp"
               ,0x1c2);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId450);
  }
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar1 != (UObject *)0x0) {
    UWN_ISKM_Profile::StaticClass();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ISKM_UpdateInstance_AnyThread @ 14a84e0d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AWN_ISKM_BoidsActor::ISKM_UpdateInstance_AnyThread
          (AWN_ISKM_BoidsActor *this,int param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  __m128 _Var9;
  double dVar10;
  __m128 _Var11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulong64 uVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  UObject *pUVar24;
  UClass *pUVar25;
  FWN_ISKM_InstanceData *pFVar26;
  longlong lVar27;
  TQuat<double> *pTVar28;
  __m128 *p_Var29;
  uint uVar30;
  FWN_ISKM_BoidInfo *this_00;
  longlong lVar31;
  EWN_ISKM_InstanceFlags EVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  bool bVar36;
  float fVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  __m128 _Var42;
  __m128 _Var43;
  float fVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  FWN_ISKM_AnimationInfo *local_1c8;
  FWN_ISKM_AnimationInfo *local_1c0;
  __m128 local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  TRotator<double> local_188;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  TQuat<double> local_f8 [6];
  
  lVar31 = (longlong)param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"UpdateInstance");
  bVar36 = -1 < CpuChannel->Enabled;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId519,"UpdateInstance",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_BoidsActor.cpp"
               ,0x207);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId519);
  }
  uVar33 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar33 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = (FWN_ISKM_BoidInfo *)(lVar31 * 0xc0 + this->_padding_);
  if ((this_00->_bIsValid == false) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("boidInfo._bIsValid",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_BoidsActor.cpp"
                          ,0x20a,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar48 = param_2 - *(float *)((longlong)&this->_padding_ + 4);
  pUVar24 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar24 == (UObject *)0x0) {
LAB_14a84e24e:
    pUVar24 = (UObject *)0x0;
  }
  else {
    pUVar25 = UWN_ISKM_Profile::StaticClass();
    iVar34 = (int)pUVar25->_padding_;
    if ((*(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a84e24e;
  }
  uVar33 = this_00->_SKMIndex;
  uVar35 = 0;
  if ((int)uVar33 < *(int *)&pUVar24[3].field_0x20) {
    uVar35 = ~uVar33 >> 0x1f;
  }
  if ((uVar35 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_170 = (this_00->Transform).Translation.XY.m128d_f64[0];
  dStack_168 = (this_00->Transform).Translation.XY.m128d_f64[1];
  local_160 = (this_00->Transform).Translation.ZW.m128d_f64[0];
  dVar47 = local_170 - (param_3->field0_0x0)._s_0.X;
  dVar10 = dStack_168 - (param_3->field0_0x0)._s_0.Y;
  fVar1 = *(float *)(*(longlong *)&pUVar24[3].field_0x18 + 0x40 + (longlong)(int)uVar33 * 0x48);
  dVar12 = local_160 - (param_3->field0_0x0)._s_0.Z;
  fVar49 = (float)SQRT(dVar10 * dVar10 + dVar47 * dVar47 + dVar12 * dVar12) - fVar1;
  if (fVar49 <= 0.0) {
    fVar49 = 0.0;
  }
  this_00->_DistFromCamera = fVar49;
  if ((fVar49 <= fVar1) ||
     (0.0 <= dVar10 * (param_4->field0_0x0)._s_0.Y + dVar47 * (param_4->field0_0x0)._s_0.X +
             dVar12 * (param_4->field0_0x0)._s_0.Z)) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  this_00->_bIsBacksideOfCamera = bVar21;
  fVar44 = *(float *)((longlong)&this->_padding_ + 4);
  fVar37 = fVar44;
  if (fVar44 <= fVar49) {
    fVar37 = fVar49;
  }
  fVar37 = powf((fVar37 - fVar44) / *(float *)&this->_padding_,
                *(float *)((longlong)&this->_padding_ + 4));
  fVar44 = __real_3f800000;
  if ((fVar37 == 0.0) ||
     ((fVar37 < __real_3f800000 &&
      (fVar37 < this_00->_SkippedSimulationTime || fVar37 == this_00->_SkippedSimulationTime)))) {
    plVar5 = (longlong *)this->_padding_;
    bVar21 = true;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,param_1,this_00,fVar48 + this_00->_SkippedSimulationTime)
      ;
      local_158 = (this_00->Transform).Translation.XY.m128d_f64[0];
      dStack_150 = (this_00->Transform).Translation.XY.m128d_f64[1];
      local_148 = (this_00->Transform).Translation.ZW.m128d_f64[0];
      dVar47 = local_158 - (param_3->field0_0x0)._s_0.X;
      dVar10 = dStack_150 - (param_3->field0_0x0)._s_0.Y;
      dVar12 = local_148 - (param_3->field0_0x0)._s_0.Z;
      fVar49 = (float)SQRT(dVar10 * dVar10 + dVar47 * dVar47 + dVar12 * dVar12) - fVar1;
      if (fVar49 <= 0.0) {
        fVar49 = 0.0;
      }
      this_00->_DistFromCamera = fVar49;
      if ((fVar49 <= fVar1) ||
         (0.0 <= dVar10 * (param_4->field0_0x0)._s_0.Y + dVar47 * (param_4->field0_0x0)._s_0.X +
                 dVar12 * (param_4->field0_0x0)._s_0.Z)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      this_00->_bIsBacksideOfCamera = bVar22;
    }
  }
  else {
    bVar21 = false;
    this_00->_SkippedSimulationTime = fVar48 + this_00->_SkippedSimulationTime;
  }
  uVar33 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar33 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (*(int *)(this->_padding_ + lVar31 * 4) != -1) {
    pFVar26 = UWN_ISKM_Subsystem::GetInstanceData
                        ((UWN_ISKM_Subsystem *)this->_padding_,
                         (FWN_ISKM_InstanceKey *)(this->_padding_ + lVar31 * 4));
    uVar33 = this_00->_SKMIndex;
    lVar31 = (longlong)(int)uVar33;
    fVar37 = fVar49 * *(float *)&this->_padding_;
    uVar35 = 0;
    if ((int)uVar33 < (int)this->_padding_) {
      uVar35 = ~uVar33 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar6 = this->_padding_;
    iVar34 = *(int *)(lVar6 + 8 + lVar31 * 0x10);
    if ((iVar34 != 0) && (param_6 != 0.0)) {
      lVar7 = *(longlong *)(lVar6 + lVar31 * 0x10);
      fVar37 = fVar37 * fVar37;
      if ((iVar34 < 1) &&
         (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5386124812953321785>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                              ,0x139,"InNumLods > 0"), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (fVar37 <= __real_3c23d70a) {
        fVar37 = __real_3c23d70a;
      }
      iVar34 = iVar34 + -1;
      lVar27 = (longlong)iVar34;
      if (0 < iVar34) {
        do {
          if ((fVar1 * fVar1 * param_5) / (fVar37 * param_6) < *(float *)(lVar7 + lVar27 * 4))
          goto LAB_14a84e609;
          iVar34 = iVar34 + -1;
          lVar27 = lVar27 + -1;
        } while (0 < lVar27);
      }
    }
    iVar34 = 0;
LAB_14a84e609:
    if ((*(int *)(lVar6 + 8 + lVar31 * 0x10) <= iVar34) &&
       (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2009500668200484289>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_BoidsActor.cpp"
                            ,0x23f,"skmLod < screenSizes.Num()"), bVar22)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (fVar49 < *(float *)((longlong)&this->_padding_ + 4)) {
      fVar37 = (float)(int)this->_padding_;
      if (fVar37 < fVar49) {
        EVar32 = VisibleWithoutShadow;
      }
      else {
        EVar32 = Invalid;
      }
      pFVar26->Flags = 0x100 << ((byte)iVar34 & 0x1f) | EVar32 | (ushort)(fVar49 <= fVar37);
      if (bVar21) {
        fVar48 = fVar48 + this_00->_SkippedSimulationTime;
      }
      else {
        fVar48 = 0.0;
      }
      FWN_ISKM_BoidInfo::UpdateAnimation(this_00,fVar48,param_2,&local_1c8,&local_1c0);
      if (local_1c8 == (FWN_ISKM_AnimationInfo *)0x0) {
        uVar33 = 0;
      }
      else {
        iVar23 = local_1c8->NumFrames + -1;
        iVar34 = (int)(local_1c8->Frequency * this_00->_AnimTime);
        if (iVar23 < iVar34) {
          iVar34 = iVar23;
        }
        uVar33 = iVar34 + local_1c8->GlobalFrameStartIndex;
      }
      fVar48 = 0.0;
      uVar35 = uVar33;
      if (local_1c0 != (FWN_ISKM_AnimationInfo *)0x0) {
        fVar48 = this_00->_BlendingWeight;
        iVar23 = local_1c0->NumFrames + -1;
        iVar34 = (int)(local_1c0->Frequency * this_00->_BlendingAnimTime);
        if (iVar23 < iVar34) {
          iVar34 = iVar23;
        }
        uVar35 = iVar34 + local_1c0->GlobalFrameStartIndex;
      }
      if ((0xfffe < (int)uVar33) &&
         (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5386124812953321589>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                              ,0x75,"InGlobalFrameIndex_A < 0xffffui16"), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((0xfffe < (int)uVar35) &&
         (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5386124812953321590>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                              ,0x76,"InGlobalFrameIndex_B < 0xffffui16"), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (0.0 <= fVar48) {
        if ((fVar44 < fVar48) &&
           (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5386124812953321592>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                                ,0x78,"InAnimBlendingWeight <= 1.0f"), bVar22))
        goto code_r0x00014a84e800;
      }
      else {
        bVar22 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5386124812953321591>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                            ,0x77,"InAnimBlendingWeight >= 0.0f");
        if (bVar22) {
code_r0x00014a84e800:
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar30 = pFVar26->GlobalFrameIndices_A;
      if ((short)pFVar26->GlobalFrameIndices_A == -1) {
        uVar30 = uVar33;
      }
      pFVar26->GlobalFrameIndices_A = uVar33 & 0xffff | uVar30 << 0x10;
      local_188.Yaw = _UNK_152242e68;
      local_188.Pitch = ___xmm_c0568000000000000000000000000000;
      uVar33 = pFVar26->GlobalFrameIndices_B;
      if ((short)pFVar26->GlobalFrameIndices_B == -1) {
        uVar33 = uVar35;
      }
      fVar48 = fVar48 * __real_477fff00;
      local_188.Roll = 0.0;
      pFVar26->GlobalFrameIndices_B = uVar35 & 0xffff | uVar33 << 0x10;
      pFVar26->AnimBlendingWeights =
           (uint)(longlong)fVar48 & 0xffff | pFVar26->AnimBlendingWeights << 0x10;
      auVar2 = *(undefined1 (*) [16])(this_00->Transform).Rotation.XY.m128d_f64;
      auVar40 = *(undefined1 (*) [16])(this_00->Transform).Rotation.ZW.m128d_f64;
      dVar13 = (this_00->Transform).Translation.XY.m128d_f64[0];
      dVar14 = (this_00->Transform).Translation.XY.m128d_f64[1];
      dVar15 = (this_00->Transform).Translation.ZW.m128d_f64[0];
      auVar3 = *(undefined1 (*) [16])(this_00->Transform).Scale3D.XY.m128d_f64;
      auVar4 = *(undefined1 (*) [16])(this_00->Transform).Scale3D.ZW.m128d_f64;
      pTVar28 = UE::Math::TRotator<double>::Quaternion(&local_188,local_f8);
      dVar46 = auVar40._8_8_;
      dVar10 = auVar2._0_8_;
      auVar41._8_4_ = auVar2._0_4_;
      auVar41._0_8_ = dVar10;
      auVar41._12_4_ = auVar2._4_4_;
      dVar16 = pTVar28->X;
      dVar17 = pTVar28->Y;
      auVar39._8_4_ = auVar40._8_4_;
      auVar39._0_8_ = dVar46;
      auVar39._12_4_ = auVar40._12_4_;
      dVar18 = pTVar28->Z;
      dVar19 = pTVar28->W;
      dVar12 = auVar2._8_8_;
      dVar47 = auVar40._0_8_;
      auVar40._8_4_ = auVar2._8_4_;
      auVar40._0_8_ = dVar12;
      auVar40._12_4_ = auVar2._12_4_;
      dVar45 = (double)CONCAT44(auVar3._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                auVar3._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar38 = (double)CONCAT44(auVar3._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                auVar3._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (dVar45 <= dVar38) {
        dVar45 = dVar38;
      }
      dVar38 = (double)CONCAT44(auVar4._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                auVar4._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (dVar45 <= dVar38) {
        dVar45 = dVar38;
      }
      local_1b8.m128_f32[0] =
           (float)(dVar47 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]
                  + dVar12 * dVar18 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar10 * dVar19 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar46 * dVar16);
      local_1b8.m128_f32[1] =
           (float)(dVar47 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
                  + auVar40._8_8_ * dVar19 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar41._8_8_ * dVar18 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    auVar39._8_8_ * dVar17);
      p_Var29 = &local_1b8;
      local_1b8.m128_f32[2] =
           (float)(dVar47 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]
                  + dVar12 * dVar16 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    dVar10 * dVar17 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    dVar46 * dVar18);
      fVar48 = (float)dVar15;
      fVar37 = (float)dVar13;
      fVar44 = (float)dVar14;
      local_1b8.m128_f32[3] =
           (float)(dVar47 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
                  + dVar12 * dVar17 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar10 * dVar16 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    dVar46 * dVar19);
      local_198._4_4_ = (float)auVar3._8_8_;
      local_198._0_4_ = (float)auVar3._0_8_;
      local_198._8_4_ = (float)auVar4._0_8_;
      local_198._12_4_ = 0;
      local_1a8._4_4_ = fVar44;
      local_1a8._0_4_ = fVar37;
      local_1a8._8_4_ = fVar48;
      local_1a8._12_4_ = 0;
      if (pFVar26->bFirstTransform == false) {
        p_Var29 = &(pFVar26->Transform).Rotation;
      }
      uVar20 = *(undefined8 *)((longlong)p_Var29 + 8);
      (pFVar26->PrevTransform).Rotation.m128_u64[0] = p_Var29->m128_u64[0];
      (pFVar26->PrevTransform).Rotation.m128_u64[1] = uVar20;
      uVar20 = p_Var29->m128_u64[3];
      (pFVar26->PrevTransform).Translation.m128_u64[0] =
           ((__m128 *)(p_Var29->m128_u64 + 2))->m128_u64[0];
      (pFVar26->PrevTransform).Translation.m128_u64[1] = uVar20;
      uVar20 = p_Var29->m128_u64[5];
      (pFVar26->PrevTransform).Scale3D.m128_u64[0] =
           ((__m128 *)(p_Var29->m128_u64 + 4))->m128_u64[0];
      (pFVar26->PrevTransform).Scale3D.m128_u64[1] = uVar20;
      pFVar26->bFirstTransform = false;
      (pFVar26->Transform).Rotation.m128_u64[0] =
           CONCAT44(local_1b8.m128_i32[1],local_1b8.m128_i32[0]);
      (pFVar26->Transform).Rotation.m128_u64[1] =
           CONCAT44(local_1b8.m128_i32[3],local_1b8.m128_i32[2]);
      _Var9.m128_f32[1] = fVar44;
      _Var9.m128_f32[0] = fVar37;
      _Var9.m128_f32[2] = fVar48;
      _Var9.m128_f32[3] = 0.0;
      (pFVar26->Transform).Translation = _Var9;
      _Var11.m128_f32[1] = (float)auVar3._8_8_;
      _Var11.m128_f32[0] = (float)auVar3._0_8_;
      _Var11.m128_f32[2] = (float)auVar4._0_8_;
      _Var11.m128_f32[3] = 0.0;
      (pFVar26->Transform).Scale3D = _Var11;
      pFVar26->DistanceFromCamera = fVar49;
      pFVar26->Radius = (float)(dVar45 * (double)fVar1);
    }
    else {
      pFVar26->bFirstTransform = true;
      pFVar26->Flags = Invalid;
      pFVar26->GlobalFrameIndices_A = 0xffffffff;
      pFVar26->GlobalFrameIndices_B = 0xffffffff;
      pFVar26->AnimBlendingWeights = 0;
      _Var42.m128_f32[2] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      _Var42.m128_u64[0] = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      _Var42.m128_f32[3] = 0.0;
      (pFVar26->PrevTransform).Scale3D = _Var42;
      _Var43.m128_f32[2] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      _Var43.m128_u64[0] = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      _Var43.m128_f32[3] = 0.0;
      (pFVar26->Transform).Scale3D = _Var43;
    }
  }
  if (bVar21) {
    this_00->_LastSimulationFrameCounter = GFrameCounter;
    this_00->_SkippedSimulationTime = 0.0;
  }
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// OnConstruction @ 14a8505d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_ISKM_BoidsActor::OnConstruction(AWN_ISKM_BoidsActor *this,TTransform<double> *param_1)

{
  int iVar1;
  UWorld *this_00;
  UWN_ISKM_Subsystem *this_01;
  UWN_ISKM_Profile *pUVar2;
  IWN_ISKM_Controller *pIVar3;
  
  if ((this->_padding_ & 0x10) == 0) {
    if ((int)this->_padding_ == -1) {
      this_00 = AActor::GetWorld((AActor *)this);
      this_01 = UWorld::GetSubsystem<UWN_ISKM_Subsystem>(this_00);
      if (this_01 == (UWN_ISKM_Subsystem *)0x0) {
        return;
      }
      pIVar3 = (IWN_ISKM_Controller *)&this->_padding_;
      if (this == (AWN_ISKM_BoidsActor *)0x0) {
        pIVar3 = (IWN_ISKM_Controller *)0x0;
      }
      UWN_ISKM_Subsystem::RegisterController(this_01,pIVar3);
    }
    iVar1 = (this->BoidSpawner).Transforms.ArrayMax;
    (this->BoidSpawner).Transforms.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(this->BoidSpawner).Transforms.AllocatorInstance,0,
                 &(this->BoidSpawner).Transforms.ArrayMax);
    }
    FWN_ISKM_BoidRandomSpawner::RemoveAllBoids(&this->BoidSpawner,this);
    FWN_ISKM_BoidRandomSpawner::Start(&this->BoidSpawner,&this->InitialSpawnInfo);
    pUVar2 = TSoftObjectPtr<UWN_ISKM_Profile>::LoadSynchronous(&this->Profile);
    if (pUVar2 == (UWN_ISKM_Profile *)0x0) {
      DestroySkeletalMeshInstances(this);
      return;
    }
    ReinitializeSkeletalMeshInstances(this);
  }
  return;
}

// OnTransformUpdated @ 14a850770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_ISKM_BoidsActor::OnTransformUpdated
          (AWN_ISKM_BoidsActor *this,USceneComponent *param_1,EUpdateTransformFlags param_2,
          ETeleportType param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  UWN_ISKM_Profile *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackX_8 [8];
  undefined7 uStack_5f;
  
  (**(code **)(this->_padding_ + 0x10))();
  lVar3 = this->_padding_;
  dVar20 = *(double *)(lVar3 + 0x210);
  dVar4 = *(double *)(lVar3 + 0x218);
  dVar5 = *(double *)(lVar3 + 0x220);
  pUVar7 = TSoftObjectPtr<UWN_ISKM_Profile>::LoadSynchronous(&this->Profile);
  pFVar8 = (this->BoidInfos).AllocatorInstance.Data;
  iVar2 = (this->BoidInfos).ArrayNum;
  uVar21 = 0;
  uVar22 = 0;
  pFVar10 = pFVar8 + 0x60;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0xc0;
  while( true ) {
    if ((this->BoidInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_ISKM_BoidInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (pFVar8 == pFVar9) break;
    if (*pFVar8 != (FScriptContainerElement)0x0) {
      dVar11 = *(double *)pFVar10 - dVar20;
      dVar17 = *(double *)(pFVar10 + 8) - dVar4;
      dVar15 = *(double *)(pFVar10 + 0x10) - dVar5;
      dVar11 = dVar17 * dVar17 + dVar11 * dVar11 + dVar15 * dVar15;
      if (dVar11 <= (double)CONCAT44(uVar22,uVar21)) {
        dVar11 = (double)CONCAT44(uVar22,uVar21);
      }
      uVar21 = SUB84(dVar11,0);
      uVar22 = (undefined4)((ulonglong)dVar11 >> 0x20);
    }
    pFVar8 = pFVar8 + 0xc0;
    pFVar10 = pFVar10 + 0xc0;
  }
  fVar16 = __real_42c80000;
  if (pUVar7 != (UWN_ISKM_Profile *)0x0) {
    fVar16 = (float)pUVar7->MaxAnimRadius;
  }
  lVar3 = this->_padding_;
  dVar5 = (double)((float)SQRT((double)CONCAT44(uVar22,uVar21)) + fVar16);
  if (lVar3 == 0) {
    dVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    auVar14 = *(undefined1 (*) [16])(lVar3 + 0x210);
    dVar20 = auVar14._0_8_;
    uVar21 = auVar14._8_4_;
    uVar22 = auVar14._12_4_;
    uVar12 = *(double *)(lVar3 + 0x220);
  }
  dVar4 = (double)CONCAT44(uVar22,uVar21) + dVar5;
  this->_padding_ = (longlong)(dVar20 - dVar5);
  this->_padding_ = (longlong)((double)CONCAT44(uVar22,uVar21) - dVar5);
  this->_padding_ = (longlong)((double)uVar12 - dVar5);
  this->_padding_ = (longlong)(dVar20 + dVar5);
  auVar14._8_4_ = SUB84((double)uVar12 + dVar5,0);
  auVar14._0_8_ = dVar4;
  auVar14._12_4_ = (int)((ulonglong)((double)uVar12 + dVar5) >> 0x20);
  this->_padding_ = (longlong)dVar4;
  this->_padding_ = auVar14._8_8_;
  this->_padding_ = CONCAT71(uStack_5f,1);
  dVar5 = (double)this->_padding_;
  dVar15 = (double)this->_padding_ - (double)this->_padding_;
  dVar17 = (double)this->_padding_ - dVar5;
  dVar20 = (double)this->_padding_;
  dVar11 = (double)this->_padding_ - dVar20;
  dVar4 = dVar15 * __real_3fe0000000000000;
  dVar19 = dVar17 * __real_3fe0000000000000;
  dVar18 = dVar11 * __real_3fe0000000000000;
  *(double *)(lVar3 + 0x110) = dVar4 + (double)this->_padding_;
  auVar13._0_8_ = dVar18 + dVar20;
  auVar13._8_8_ = 0;
  *(double *)(lVar3 + 0x118) = dVar19 + dVar5;
  *(double *)(lVar3 + 0x120) = auVar13._0_8_;
  *(double *)(lVar3 + 0x128) = dVar4;
  *(double *)(lVar3 + 0x130) = dVar19;
  *(double *)(lVar3 + 0x138) = dVar18;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (dVar17 * dVar17 + dVar15 * dVar15 + dVar11 * dVar11) * __real_3fd0000000000000;
  auVar14 = sqrtpd(auVar13,auVar6);
  *(longlong *)(lVar3 + 0x140) = auVar14._0_8_;
  pbVar1 = (byte *)(this->_padding_ + 0x1aa);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// PostInitializeComponents @ 14a8507e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_BoidsActor::PostInitializeComponents(AWN_ISKM_BoidsActor *this)

{
  int iVar1;
  UWorld *this_00;
  UWN_ISKM_Subsystem *this_01;
  UWN_ISKM_Profile *pUVar2;
  longlong lVar3;
  IWN_ISKM_Controller *pIVar4;
  
  if ((this->_padding_ & 0x10) == 0) {
    if ((int)this->_padding_ == -1) {
      this_00 = AActor::GetWorld((AActor *)this);
      this_01 = UWorld::GetSubsystem<UWN_ISKM_Subsystem>(this_00);
      if (this_01 == (UWN_ISKM_Subsystem *)0x0) {
        return;
      }
      pIVar4 = (IWN_ISKM_Controller *)&this->_padding_;
      if (this == (AWN_ISKM_BoidsActor *)0x0) {
        pIVar4 = (IWN_ISKM_Controller *)0x0;
      }
      UWN_ISKM_Subsystem::RegisterController(this_01,pIVar4);
    }
    iVar1 = (this->BoidSpawner).Transforms.ArrayMax;
    (this->BoidSpawner).Transforms.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(this->BoidSpawner).Transforms.AllocatorInstance,0,
                 &(this->BoidSpawner).Transforms.ArrayMax);
    }
    FWN_ISKM_BoidRandomSpawner::RemoveAllBoids(&this->BoidSpawner,this);
    FWN_ISKM_BoidRandomSpawner::Start(&this->BoidSpawner,&this->InitialSpawnInfo);
    pUVar2 = TSoftObjectPtr<UWN_ISKM_Profile>::LoadSynchronous(&this->Profile);
    if (pUVar2 == (UWN_ISKM_Profile *)0x0) {
      DestroySkeletalMeshInstances(this);
    }
    else {
      ReinitializeSkeletalMeshInstances(this);
    }
    if (this->_padding_ != 0) {
      if (pUVar2 != (UWN_ISKM_Profile *)0x0) {
        pIVar4 = (IWN_ISKM_Controller *)&this->_padding_;
        if (this == (AWN_ISKM_BoidsActor *)0x0) {
          pIVar4 = (IWN_ISKM_Controller *)0x0;
        }
        lVar3 = (**(code **)(this->_padding_ + 0x10))();
        *(IWN_ISKM_Controller **)(lVar3 + 0x18) = pIVar4;
      }
      TMulticastDelegateRegistration<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
      ::AddUObject<AWN_ISKM_BoidsActor>
                ((void *)(this->_padding_ + 0x1b0),(AWN_ISKM_BoidsActor *)&stack0x00000008,
                 (pmf_9428d9d1 *)this);
    }
  }
  AActor::PostInitializeComponents((AActor *)this);
  return;
}

// ProcessCreateNavInfo @ 14a850bb0

void __thiscall AWN_ISKM_BoidsActor::ProcessCreateNavInfo(AWN_ISKM_BoidsActor *this)

{
  return;
}

// ReinitializeSkeletalMeshInstances @ 14a852360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_BoidsActor::ReinitializeSkeletalMeshInstances(AWN_ISKM_BoidsActor *this)

{
  FWN_ISKM_SkeletalMeshInfo *pFVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FWN_ISKM_InstanceKey FVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UWorld *pUVar11;
  UWN_ISKM_Profile *pUVar12;
  UObject *pUVar13;
  undefined4 extraout_var;
  FWN_ISKM_SkeletalMeshInfo *this_00;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong local_res10;
  UWN_ISKM_Subsystem *local_res18;
  longlong local_res20;
  
  DestroySkeletalMeshInstances(this);
  pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Profile);
  if (pUVar9 != (UObject *)0x0) {
    pUVar10 = UWN_ISKM_Profile::StaticClass();
    iVar2 = (int)pUVar10->_padding_;
    if (((iVar2 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar10->_padding_)) &&
       (pUVar11 = AActor::GetWorld((AActor *)this), pUVar11 != (UWorld *)0x0)) {
      pUVar11 = AActor::GetWorld((AActor *)this);
      uVar16 = 0;
      lVar14 = 0;
      local_res20 = (longlong)(this->BoidInfos).ArrayNum;
      this->LastGameTime = (float)pUVar11->TimeSeconds;
      if (0 < local_res20) {
        lVar15 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar16 < (this->BoidInfos).ArrayNum) {
            uVar7 = ~uVar16 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->BoidInfos).AllocatorInstance.Data;
          if (pFVar4[lVar15] != (FScriptContainerElement)0x0) {
            local_res10 = *(longlong *)(pFVar4 + lVar15 + 4);
            this_00 = *(FWN_ISKM_SkeletalMeshInfo **)&pUVar9[3].field_0x18;
            pFVar1 = this_00 + *(int *)&pUVar9[3].field_0x20;
            for (; this_00 != pFVar1; this_00 = this_00 + 1) {
              bVar6 = `UWN_ISKM_Profile::FindSkeletalMeshInfo'::__l2::<lambda_1>::operator()
                                (&local_res10,this_00);
              if (bVar6) {
                if ((this_00 != (FWN_ISKM_SkeletalMeshInfo *)0x0) &&
                   (pUVar12 = (UWN_ISKM_Profile *)
                              TPersistentObjectPtr<FSoftObjectPath>::Get
                                        ((TPersistentObjectPtr<FSoftObjectPath> *)this_00),
                   pUVar12 != (UWN_ISKM_Profile *)0x0)) {
                  pUVar10 = Z_Construct_UClass_USkeletalMesh_NoRegister();
                  iVar2 = (int)pUVar10->_padding_;
                  if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                      &pUVar10->_padding_)) {
                    local_res18 = (UWN_ISKM_Subsystem *)this->_padding_;
                    pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                        ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Profile);
                    if (pUVar13 == (UObject *)0x0) {
LAB_14a852570:
                      pUVar13 = (UObject *)0x0;
                    }
                    else {
                      pUVar10 = UWN_ISKM_Profile::StaticClass();
                      iVar2 = (int)pUVar10->_padding_;
                      if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar2) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) +
                           (longlong)iVar2 * 8) != &pUVar10->_padding_)) goto LAB_14a852570;
                    }
                    FVar8 = UWN_ISKM_Subsystem::AddInstance
                                      (local_res18,(USkeletalMesh *)&stack0x00000008,pUVar12,
                                       (int)pUVar13);
                    uVar3 = *(undefined4 *)CONCAT44(extraout_var,FVar8.Value);
                    uVar7 = 0;
                    if ((int)uVar16 < (this->BoidInstKeys).ArrayNum) {
                      uVar7 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar7 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    *(undefined4 *)((this->BoidInstKeys).AllocatorInstance.Data + lVar14 * 4) =
                         uVar3;
                  }
                }
                break;
              }
            }
          }
          uVar16 = uVar16 + 1;
          lVar14 = lVar14 + 1;
          lVar15 = lVar15 + 0xc0;
        } while (lVar14 < local_res20);
      }
    }
  }
  return;
}

// RemoveBoid @ 14a852d40

void __thiscall AWN_ISKM_BoidsActor::RemoveBoid(AWN_ISKM_BoidsActor *this,int param_1)

{
  FWN_ISKM_InstanceKey *pFVar1;
  FWN_ISKM_BoidsController *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  if (param_1 < (this->BoidInfos).ArrayNum) {
    pFVar2 = this->BoidsController;
    if (pFVar2 != (FWN_ISKM_BoidsController *)0x0) {
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x20);
      if ((param_1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*pcVar3)(pFVar2,param_1,(this->BoidInfos).AllocatorInstance.Data + lVar8 * 0xc0);
    }
    uVar6 = 0;
    if (param_1 < (this->BoidInfos).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = (this->BoidInfos).AllocatorInstance.Data;
    lVar7 = lVar8 * 0xc0;
    pFVar4[lVar7] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar4 + lVar7 + 0x20) = 0;
    *(undefined8 *)(pFVar4 + lVar7 + 0x28) = 0;
    *(undefined4 *)(pFVar4 + lVar7 + 0x30) = 0;
    *(undefined8 *)(pFVar4 + lVar7 + 0xa8) = 0;
    *(undefined8 *)(pFVar4 + lVar7 + 0xb0) = 0;
    *(undefined8 *)(pFVar4 + lVar7 + 4) = 0;
    *(undefined8 *)(pFVar4 + lVar7 + 0x14) = 0;
    *(undefined8 *)(pFVar4 + lVar7 + 0xc) = 0;
    *(undefined4 *)(pFVar4 + lVar7 + 0x1c) = 0xffffffff;
    *(undefined4 *)(pFVar4 + lVar7 + 0xa4) = 0x3f800000;
    uVar6 = 0;
    if (param_1 < (this->BoidInstKeys).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = (this->BoidInstKeys).AllocatorInstance.Data;
    pFVar1 = (FWN_ISKM_InstanceKey *)(pFVar4 + lVar8 * 4);
    if (*(int *)(pFVar4 + lVar8 * 4) != -1) {
      UWN_ISKM_Subsystem::RemoveInstance((UWN_ISKM_Subsystem *)this->_padding_,pFVar1);
    }
    pFVar1->Value = 0xffffffff;
    FWN_UniqueIndexAllocator::Release(&this->BoidIndexAllocator,param_1);
    this->bIsBoundDirty = true;
  }
  return;
}

// SetController @ 14a853f50

void __thiscall
AWN_ISKM_BoidsActor::SetController(AWN_ISKM_BoidsActor *this,FWN_ISKM_BoidsController *param_1)

{
  FWN_ISKM_BoidsController *pFVar1;
  
  if ((param_1 == (FWN_ISKM_BoidsController *)0x0) || (this->BoidsController != param_1)) {
    pFVar1 = this->BoidsController;
    if (pFVar1 != (FWN_ISKM_BoidsController *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,this);
    }
    this->BoidsController = param_1;
    if (param_1 != (FWN_ISKM_BoidsController *)0x0) {
      (**(code **)(param_1->_padding_ + 8))(param_1,this);
    }
  }
  return;
}

// StaticRegisterNativesAWN_ISKM_BoidsActor @ 14a855e70

void __cdecl AWN_ISKM_BoidsActor::StaticRegisterNativesAWN_ISKM_BoidsActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnLoad @ 14a856c90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_BoidsActor::UnLoad(AWN_ISKM_BoidsActor *this)

{
  UWorld *this_00;
  UWN_ISKM_Subsystem *this_01;
  IWN_ISKM_Controller *pIVar1;
  
  pIVar1 = (IWN_ISKM_Controller *)&this->_padding_;
  (**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1);
  this->BoidsController = (FWN_ISKM_BoidsController *)0x0;
  if ((int)this->_padding_ != -1) {
    this_00 = AActor::GetWorld((AActor *)this);
    this_01 = UWorld::GetSubsystem<UWN_ISKM_Subsystem>(this_00);
    if (this == (AWN_ISKM_BoidsActor *)0x0) {
      pIVar1 = (IWN_ISKM_Controller *)0x0;
    }
    UWN_ISKM_Subsystem::UnregisterController(this_01,pIVar1);
  }
  return;
}

// UpdateBoundsFromBoids @ 14a857c50

void __thiscall AWN_ISKM_BoidsActor::UpdateBoundsFromBoids(AWN_ISKM_BoidsActor *this)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  UWN_ISKM_Profile *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 local_res8 [8];
  undefined7 uStack_5f;
  
  (**(code **)(this->_padding_ + 0x10))();
  lVar3 = this->_padding_;
  dVar20 = *(double *)(lVar3 + 0x210);
  dVar4 = *(double *)(lVar3 + 0x218);
  dVar5 = *(double *)(lVar3 + 0x220);
  pUVar7 = TSoftObjectPtr<UWN_ISKM_Profile>::LoadSynchronous(&this->Profile);
  pFVar8 = (this->BoidInfos).AllocatorInstance.Data;
  iVar2 = (this->BoidInfos).ArrayNum;
  uVar21 = 0;
  uVar22 = 0;
  pFVar10 = pFVar8 + 0x60;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0xc0;
  while( true ) {
    if ((this->BoidInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_ISKM_BoidInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if (*pFVar8 != (FScriptContainerElement)0x0) {
      dVar11 = *(double *)pFVar10 - dVar20;
      dVar17 = *(double *)(pFVar10 + 8) - dVar4;
      dVar15 = *(double *)(pFVar10 + 0x10) - dVar5;
      dVar11 = dVar17 * dVar17 + dVar11 * dVar11 + dVar15 * dVar15;
      if (dVar11 <= (double)CONCAT44(uVar22,uVar21)) {
        dVar11 = (double)CONCAT44(uVar22,uVar21);
      }
      uVar21 = SUB84(dVar11,0);
      uVar22 = (undefined4)((ulonglong)dVar11 >> 0x20);
    }
    pFVar8 = pFVar8 + 0xc0;
    pFVar10 = pFVar10 + 0xc0;
  }
  fVar16 = __real_42c80000;
  if (pUVar7 != (UWN_ISKM_Profile *)0x0) {
    fVar16 = (float)pUVar7->MaxAnimRadius;
  }
  lVar3 = this->_padding_;
  dVar5 = (double)((float)SQRT((double)CONCAT44(uVar22,uVar21)) + fVar16);
  if (lVar3 == 0) {
    dVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    auVar14 = *(undefined1 (*) [16])(lVar3 + 0x210);
    dVar20 = auVar14._0_8_;
    uVar21 = auVar14._8_4_;
    uVar22 = auVar14._12_4_;
    uVar12 = *(double *)(lVar3 + 0x220);
  }
  dVar4 = (double)CONCAT44(uVar22,uVar21) + dVar5;
  this->_padding_ = (longlong)(dVar20 - dVar5);
  this->_padding_ = (longlong)((double)CONCAT44(uVar22,uVar21) - dVar5);
  this->_padding_ = (longlong)((double)uVar12 - dVar5);
  this->_padding_ = (longlong)(dVar20 + dVar5);
  auVar14._8_4_ = SUB84((double)uVar12 + dVar5,0);
  auVar14._0_8_ = dVar4;
  auVar14._12_4_ = (int)((ulonglong)((double)uVar12 + dVar5) >> 0x20);
  this->_padding_ = (longlong)dVar4;
  this->_padding_ = auVar14._8_8_;
  this->_padding_ = CONCAT71(uStack_5f,1);
  dVar5 = (double)this->_padding_;
  dVar15 = (double)this->_padding_ - (double)this->_padding_;
  dVar17 = (double)this->_padding_ - dVar5;
  dVar20 = (double)this->_padding_;
  dVar11 = (double)this->_padding_ - dVar20;
  dVar4 = dVar15 * __real_3fe0000000000000;
  dVar19 = dVar17 * __real_3fe0000000000000;
  dVar18 = dVar11 * __real_3fe0000000000000;
  *(double *)(lVar3 + 0x110) = dVar4 + (double)this->_padding_;
  auVar13._0_8_ = dVar18 + dVar20;
  auVar13._8_8_ = 0;
  *(double *)(lVar3 + 0x118) = dVar19 + dVar5;
  *(double *)(lVar3 + 0x120) = auVar13._0_8_;
  *(double *)(lVar3 + 0x128) = dVar4;
  *(double *)(lVar3 + 0x130) = dVar19;
  *(double *)(lVar3 + 0x138) = dVar18;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (dVar17 * dVar17 + dVar15 * dVar15 + dVar11 * dVar11) * __real_3fd0000000000000;
  auVar14 = sqrtpd(auVar13,auVar6);
  *(longlong *)(lVar3 + 0x140) = auVar14._0_8_;
  pbVar1 = (byte *)(this->_padding_ + 0x1aa);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// operator() @ 150556030

bool __thiscall `AWN_ISKM_BoidsActor::AddBoid'::__l33::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2009500668200484057>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2009500668200484057>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

