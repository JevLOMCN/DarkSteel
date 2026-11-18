// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 10

// StaticClass @ 1470883e0

UClass * __cdecl AMassEntityTestFarmPlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMassEntityTestFarmPlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassEntityTestFarmPlot",
               &Z_Registration_Info_UClass_AMassEntityTestFarmPlot.InnerSingleton,
               StaticRegisterNativesAMassEntityTestFarmPlot,0x380,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AMassEntityTestFarmPlot>,
               InternalVTableHelperCtorCaller<AMassEntityTestFarmPlot>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMassEntityTestFarmPlot.InnerSingleton;
}

// AMassEntityTestFarmPlot @ 1470f2580

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AMassEntityTestFarmPlot * __thiscall
AMassEntityTestFarmPlot::AMassEntityTestFarmPlot
          (AMassEntityTestFarmPlot *this,FVTableHelper *param_1)

{
  FMassEntityManager *pFVar1;
  FMassEntityManager *pFVar2;
  FMassEntityManager *pFVar3;
  
  AActor::AActor((AActor *)this,param_1);
  pFVar3 = (FMassEntityManager *)0x0;
  this->GridWidth = 0x118;
  this->GridHeight = 0x8c;
  this->GridCellWidth = 150.0;
  this->_padding_ = (longlong)&___7AMassEntityTestFarmPlot__6B_;
  (this->PlantedSquares).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlantedSquares).ArrayNum = 0;
  (this->PlantedSquares).ArrayMax = 0;
  (this->VisualDataTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisualDataTable).ArrayNum = 0;
  (this->VisualDataTable).ArrayMax = 0;
  (this->VisualDataISMCs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisualDataISMCs).ArrayNum = 0;
  (this->VisualDataISMCs).ArrayMax = 0;
  (this->PerFrameSystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerFrameSystems).ArrayNum = 0;
  (this->PerFrameSystems).ArrayMax = 0;
  (this->PerSecondSystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSecondSystems).ArrayNum = 0;
  (this->PerSecondSystems).ArrayMax = 0;
  (this->TestDataFlowerIndicies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestDataFlowerIndicies).ArrayNum = 0;
  (this->TestDataFlowerIndicies).ArrayMax = 0;
  (this->TestDataCropIndicies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestDataCropIndicies).ArrayNum = 0;
  (this->TestDataCropIndicies).ArrayMax = 0;
  (this->HarvestIconISMC).field0_0x0.DebugPtr = (UHierarchicalInstancedStaticMeshComponent *)0x0;
  (this->FreeHarvestIconIndicies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeHarvestIconIndicies).ArrayNum = 0;
  (this->FreeHarvestIconIndicies).ArrayMax = 0;
  this->GridCellHeight = 150.0;
  this->HarvestIconScale = 0.3;
  this->NextSecondTimer = 0.0;
  this->VisualNearCullDistance = 1000;
  this->VisualFarCullDistance = 0x4b0;
  this->IconNearCullDistance = 400;
  this->IconFarCullDistance = 800;
  pFVar1 = ::operator_new(0x7d8);
  pFVar2 = pFVar3;
  if (pFVar1 != (FMassEntityManager *)0x0) {
    pFVar2 = FMassEntityManager::FMassEntityManager(pFVar1,(UObject *)0x0);
  }
  (this->SharedEntityManager).Object = pFVar2;
  pFVar1 = ::operator_new(0x18);
  if (pFVar1 != (FMassEntityManager *)0x0) {
    *(undefined4 *)&pFVar1->_padding_ = 1;
    pFVar1->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMassEntityManager__U__DefaultDeleter_UFMassEntityManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 1;
    pFVar1->_padding_ = (longlong)pFVar2;
    pFVar3 = pFVar1;
  }
  (this->SharedEntityManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar3;
  EnsureRetrievingVTablePtrDuringCtor(L"TSharedRef()");
  TSharedRef<FMassEntityManager,1>::Init<FMassEntityManager>
            (&this->SharedEntityManager,(this->SharedEntityManager).Object);
  return this;
}

// AMassEntityTestFarmPlot @ 1470f2720

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AMassEntityTestFarmPlot * __thiscall
AMassEntityTestFarmPlot::AMassEntityTestFarmPlot(AMassEntityTestFarmPlot *this)

{
  byte *pbVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FMassEntityManager *this_00;
  AMassEntityTestFarmPlot *pAVar5;
  FName *pFVar6;
  UClass *pUVar7;
  USceneComponent *pUVar8;
  UHierarchicalInstancedStaticMeshComponent *pUVar9;
  TRawPtrProxy<FMassEntityManager> local_res10;
  FName local_res18;
  FName local_res20;
  
  AActor::AActor((AActor *)this);
  this->GridWidth = 0x118;
  this->GridHeight = 0x8c;
  this->GridCellWidth = 150.0;
  this->_padding_ = (longlong)&___7AMassEntityTestFarmPlot__6B_;
  (this->PlantedSquares).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlantedSquares).ArrayNum = 0;
  (this->PlantedSquares).ArrayMax = 0;
  (this->VisualDataTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisualDataTable).ArrayNum = 0;
  (this->VisualDataTable).ArrayMax = 0;
  (this->VisualDataISMCs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisualDataISMCs).ArrayNum = 0;
  (this->VisualDataISMCs).ArrayMax = 0;
  (this->PerFrameSystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerFrameSystems).ArrayNum = 0;
  (this->PerFrameSystems).ArrayMax = 0;
  (this->PerSecondSystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSecondSystems).ArrayNum = 0;
  (this->PerSecondSystems).ArrayMax = 0;
  (this->TestDataFlowerIndicies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestDataFlowerIndicies).ArrayNum = 0;
  (this->TestDataFlowerIndicies).ArrayMax = 0;
  (this->TestDataCropIndicies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestDataCropIndicies).ArrayNum = 0;
  (this->TestDataCropIndicies).ArrayMax = 0;
  (this->HarvestIconISMC).field0_0x0.DebugPtr = (UHierarchicalInstancedStaticMeshComponent *)0x0;
  (this->FreeHarvestIconIndicies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeHarvestIconIndicies).ArrayNum = 0;
  (this->FreeHarvestIconIndicies).ArrayMax = 0;
  this->GridCellHeight = 150.0;
  this->HarvestIconScale = 0.3;
  this->NextSecondTimer = 0.0;
  this->VisualNearCullDistance = 1000;
  this->VisualFarCullDistance = 0x4b0;
  this->IconNearCullDistance = 400;
  this->IconFarCullDistance = 800;
  this_00 = ::operator_new(0x7d8);
  if (this_00 == (FMassEntityManager *)0x0) {
    local_res10.Object = (FMassEntityManager *)0x0;
  }
  else {
    local_res10.Object = FMassEntityManager::FMassEntityManager(this_00,(UObject *)this);
    if ((((local_res10.Object != (FMassEntityManager *)0x0) &&
         ((local_res10.Object)->_padding_ != 0)) && ((local_res10.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res10.Object)->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pAVar5 = (AMassEntityTestFarmPlot *)(*pcVar3)();
        return pAVar5;
      }
    }
  }
  TSharedRef<FMassEntityManager,1>::TSharedRef<FMassEntityManager,1><FMassEntityManager>
            (&this->SharedEntityManager,&local_res10);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  pFVar6 = ::FName::FName(&local_res18,L"SceneComp");
  FVar2 = *pFVar6;
  pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar8 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  this->_padding_ = (longlong)pUVar8;
  pFVar6 = ::FName::FName(&local_res20,L"HarvestIconISMC");
  FVar2 = *pFVar6;
  pUVar7 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
  pUVar9 = (UHierarchicalInstancedStaticMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UHierarchicalInstancedStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->HarvestIconISMC).field0_0x0.DebugPtr = pUVar9;
  USceneComponent::SetupAttachment((USceneComponent *)pUVar9,pUVar8,(FName)0x0);
  pUVar9 = (this->HarvestIconISMC).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar9 + 0x788))(pUVar9,UCollisionProfile::NoCollision_ProfileName,1);
  return this;
}

// ~AMassEntityTestFarmPlot @ 1470f7ec0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMassEntityTestFarmPlot::~AMassEntityTestFarmPlot(AMassEntityTestFarmPlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AMassEntityTestFarmPlot__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedEntityManager).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->FreeHarvestIconIndicies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestDataCropIndicies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestDataFlowerIndicies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerSecondSystems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerFrameSystems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisualDataISMCs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFarmVisualDataRow,int>
            ((FFarmVisualDataRow *)(this->VisualDataTable).AllocatorInstance.Data,
             (this->VisualDataTable).ArrayNum);
  pFVar1 = (this->VisualDataTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlantedSquares).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// AddItemToGrid @ 14710f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
AMassEntityTestFarmPlot::AddItemToGrid
          (AMassEntityTestFarmPlot *this,FMassEntityManager *param_1,ushort param_2,ushort param_3,
          FMassArchetypeHandle *param_4,ushort param_5)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  FMassArchetypeData *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPackage *pUVar8;
  void *pvVar9;
  int *piVar10;
  undefined4 *puVar11;
  TQuat<double> *pTVar12;
  undefined4 uVar13;
  uint uVar14;
  float fVar15;
  double dVar16;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  longlong local_1c0;
  ushort local_1b8;
  FMassArchetypeHandle local_1b0;
  TRotator<double> local_1a0;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  TQuat<double> local_168;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  void *pvStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  void *pvStack_110;
  undefined8 local_108;
  FConstSharedStruct *pFStack_100;
  undefined8 local_f8;
  FSharedStruct *pFStack_f0;
  undefined8 local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  uStack_140 = 0;
  uStack_120 = 0;
  local_138 = 0;
  local_148 = 0x1ffffffff;
  local_118 = 0;
  pvStack_130 = (void *)0x0;
  local_128 = 0x8000000000;
  pvStack_110 = (void *)0x0;
  local_108 = 0x8000000000;
  pFStack_100 = (FConstSharedStruct *)0x0;
  local_f8 = 0;
  pFStack_f0 = (FSharedStruct *)0x0;
  local_1b0.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)param_4;
  local_e8 = 0;
  local_1b8 = param_3;
  FMassEntityManager::CreateEntity(param_1,&local_1b0,(FMassArchetypeSharedFragmentValues *)param_4)
  ;
  DestructItems<FSharedStruct,int>(pFStack_f0,(int)local_e8);
  if (pFStack_f0 != (FSharedStruct *)0x0) {
    FMemory::Free(pFStack_f0);
  }
  DestructItems<FConstSharedStruct,int>(pFStack_100,(int)local_f8);
  if (pFStack_100 != (FConstSharedStruct *)0x0) {
    FMemory::Free(pFStack_100);
  }
  if (pvStack_110 != (void *)0x0) {
    FMemory::Free(pvStack_110);
  }
  if (pvStack_130 != (void *)0x0) {
    FMemory::Free(pvStack_130);
  }
  pFVar4 = local_1b0.DataPtr.Object;
  iVar7 = (this->PlantedSquares).ArrayNum;
  uVar14 = (uint)this->GridWidth * (uint)local_1b8 + (uint)param_2;
  uVar6 = 0;
  if ((int)uVar14 < iVar7) {
    uVar6 = ~uVar14 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_1c8 = (ulonglong)(int)uVar14;
    local_1c0 = (longlong)iVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FMassArchetypeData **)
   ((this->PlantedSquares).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) = pFVar4;
  uVar6 = rand();
  pFVar4 = local_1b0.DataPtr.Object;
  fVar15 = (float)(uVar6 & 0x7fff) * ___real_349375e3 - __real_3c23d70a;
  if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar8,
                         L"FarmWaterFragment");
  }
  pvVar9 = FMassEntityManager::InternalGetFragmentDataChecked
                     (param_1,(FMassEntityHandle)pFVar4,
                      Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton);
  *(float *)((longlong)pvVar9 + 4) = fVar15;
  iVar7 = rand();
  pFVar4 = local_1b0.DataPtr.Object;
  if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar8,
                         L"HarvestTimerFragment");
  }
  piVar10 = FMassEntityManager::InternalGetFragmentDataChecked
                      (param_1,(FMassEntityHandle)pFVar4,
                       Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton);
  pFVar4 = local_1b0.DataPtr.Object;
  *piVar10 = iVar7 % 100 + 5;
  uVar6 = (uint)local_1b8;
  uVar13 = CONCAT22(local_1b8,param_2);
  if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar8,
                         L"FarmGridCellData");
  }
  puVar11 = FMassEntityManager::InternalGetFragmentDataChecked
                      (param_1,(FMassEntityHandle)pFVar4,
                       Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton);
  *puVar11 = uVar13;
  dVar3 = (double)((float)param_2 * this->GridCellWidth);
  dVar16 = (double)((float)uVar6 * this->GridCellHeight);
  uVar6 = rand();
  local_1a0.Pitch = 0.0;
  local_1a0.Roll = 0.0;
  local_1a0.Yaw = (double)((float)(uVar6 & 0x7fff) * ___real_3c340168);
  pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_1a0,&local_168);
  local_188 = pTVar12->X;
  dStack_180 = pTVar12->Y;
  local_178 = pTVar12->Z;
  dStack_170 = pTVar12->W;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = ___xmm_00000000000000003ff0000000000000;
  uStack_80 = _UNK_150689518;
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  local_d8 = local_188;
  dStack_d0 = dStack_180;
  local_c8 = local_178;
  dStack_c0 = dStack_170;
  local_b8 = dVar3;
  dStack_b0 = dVar16;
  if (Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment,(UObject *)pUVar8,
                         L"FarmVisualFragment");
  }
  puVar11 = FMassEntityManager::InternalGetFragmentDataChecked
                      (param_1,(FMassEntityHandle)local_1b0.DataPtr.Object,
                       Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton);
  *(ushort *)(puVar11 + 2) = param_5;
  iVar7 = (this->VisualDataISMCs).ArrayNum;
  if (iVar7 <= (int)(uint)param_5) {
    local_1c8 = (ulonglong)param_5;
    local_1c0 = (longlong)iVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = *(longlong **)((this->VisualDataISMCs).AllocatorInstance.Data + (ulonglong)param_5 * 8);
  uVar13 = (**(code **)(*plVar1 + 0xbb0))(plVar1,&local_d8,0);
  *puVar11 = uVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)
             &(local_1b0.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount)->
             ReferenceController);
  return;
}

// BeginPlay @ 147110dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall AMassEntityTestFarmPlot::BeginPlay(AMassEntityTestFarmPlot *this)

{
  int *piVar1;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UHierarchicalInstancedStaticMeshComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  ushort uVar4;
  FMassEntityManager *pFVar5;
  UMassProcessor *pUVar6;
  UHierarchicalInstancedStaticMeshComponent *pUVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  UPackage *pUVar17;
  TArrayView<UScriptStruct_const_*_const,int> *pTVar18;
  UClass *pUVar19;
  TSharedRef<FMassEntityManager,1> *pTVar20;
  UObject *pUVar21;
  UInstancedStaticMeshComponent *this_00;
  FScriptContainerElement *pFVar22;
  longlong *plVar23;
  FMassArchetypeHandle *pFVar24;
  uint uVar25;
  ushort uVar26;
  ushort uVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_528 [32];
  undefined1 local_4d8;
  undefined1 local_4d7 [7];
  UObject *local_4d0;
  UObject *local_4c8;
  UObject *local_4c0;
  UObject *local_4b8;
  UObject *local_4b0;
  UInstancedStaticMeshComponent *local_4a8;
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> local_4a0;
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> local_490;
  undefined8 local_480;
  FMassArchetypeCreationParams local_478;
  FMassArchetypeCreationParams local_468;
  FMassEntityManager *local_458;
  FName local_450;
  FString local_448;
  FMassArchetypeHandle local_438;
  FMassArchetypeHandle local_428;
  FMassArchetypeHandle local_418;
  TArrayView<UScriptStruct_const_*_const,int> local_408;
  TArrayView<UScriptStruct_const_*_const,int> local_3f8;
  TSharedRef<FMassEntityManager,1> local_3e8;
  TSharedRef<FMassEntityManager,1> local_3d8;
  TArrayView<UScriptStruct_const_*_const,int> local_3c8;
  TArrayView<UScriptStruct_const_*_const,int> local_3b8;
  UScriptStruct *local_3a8;
  UScriptStruct *pUStack_3a0;
  UScriptStruct *local_398;
  UScriptStruct *pUStack_390;
  UScriptStruct *local_388;
  UScriptStruct *local_380;
  UScriptStruct *pUStack_378;
  UScriptStruct *local_370;
  UScriptStruct *pUStack_368;
  UScriptStruct *local_360;
  undefined1 local_358 [128];
  undefined1 local_2d8 [128];
  undefined1 local_258 [128];
  undefined1 local_1d8 [128];
  undefined1 local_158 [128];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_528;
  AActor::BeginPlay((AActor *)this);
  if ((((this->TestDataCropIndicies).ArrayNum == 0) ||
      ((this->TestDataFlowerIndicies).ArrayNum == 0)) || ((this->VisualDataTable).ArrayNum == 0)) {
    if (1 < (byte)LogMass._0_1_) {
      local_450 = (FName)this->_padding_;
      ::FName::ToString(&local_450,&local_448);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar5 = (this->SharedEntityManager).Object;
    local_458 = pFVar5;
    FMassEntityManager::Initialize(pFVar5);
    local_478.ChunkMemorySize = 0;
    local_478.DebugName.ComparisonIndex.Value = 0;
    local_478.DebugName.Number = 0;
    local_478.DebugColor.field0_0x0 = (FColor_u_0)0x0;
    if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar17,
                           L"FarmWaterFragment");
    }
    local_3a8 = Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFarmCropFragment,(UObject *)pUVar17,
                           L"FarmCropFragment");
    }
    pUStack_3a0 = Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar17,
                           L"HarvestTimerFragment");
    }
    local_398 = Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment,(UObject *)pUVar17,
                           L"FarmVisualFragment");
    }
    pUStack_390 = Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar17,
                           L"FarmGridCellData");
    }
    local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.ArrayNum = 5;
    local_388 = Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,5,0,&local_4a0.AllocatorInstance,5,&local_4a0.ArrayMax);
    *(UScriptStruct **)local_4a0.AllocatorInstance.Data = local_3a8;
    *(UScriptStruct **)(local_4a0.AllocatorInstance.Data + 8) = pUStack_3a0;
    *(UScriptStruct **)(local_4a0.AllocatorInstance.Data + 0x10) = local_398;
    *(UScriptStruct **)(local_4a0.AllocatorInstance.Data + 0x18) = pUStack_390;
    *(UScriptStruct **)(local_4a0.AllocatorInstance.Data + 0x20) = local_388;
    pTVar18 = TArrayView<UScriptStruct_const_*_const,int>::
              TArrayView<UScriptStruct_const_*_const,int><TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_>
                        (&local_3c8,&local_4a0);
    local_408.DataPtr = pTVar18->DataPtr;
    local_408.ArrayNum = pTVar18->ArrayNum;
    local_408._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    FMassEntityManager::CreateArchetype(pFVar5,&local_418,&local_408,&local_478);
    if (local_4a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.AllocatorInstance.Data);
    }
    local_468.ChunkMemorySize = 0;
    local_468.DebugName.ComparisonIndex.Value = 0;
    local_468.DebugName.Number = 0;
    local_468.DebugColor.field0_0x0 = (FColor_u_0)0x0;
    if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar17,
                           L"FarmWaterFragment");
    }
    local_380 = Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFarmFlowerFragment,(UObject *)pUVar17,
                           L"FarmFlowerFragment");
    }
    pUStack_378 = Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar17,
                           L"HarvestTimerFragment");
    }
    local_370 = Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment,(UObject *)pUVar17,
                           L"FarmVisualFragment");
    }
    pUStack_368 = Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar17 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar17,
                           L"FarmGridCellData");
    }
    local_490.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_490.ArrayNum = 5;
    local_360 = Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,5,0,&local_490.AllocatorInstance,5,&local_490.ArrayMax);
    *(UScriptStruct **)local_490.AllocatorInstance.Data = local_380;
    *(UScriptStruct **)(local_490.AllocatorInstance.Data + 8) = pUStack_378;
    *(UScriptStruct **)(local_490.AllocatorInstance.Data + 0x10) = local_370;
    *(UScriptStruct **)(local_490.AllocatorInstance.Data + 0x18) = pUStack_368;
    *(UScriptStruct **)(local_490.AllocatorInstance.Data + 0x20) = local_360;
    pTVar18 = TArrayView<UScriptStruct_const_*_const,int>::
              TArrayView<UScriptStruct_const_*_const,int><TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_>
                        (&local_3b8,&local_490);
    local_3f8.DataPtr = pTVar18->DataPtr;
    local_3f8.ArrayNum = pTVar18->ArrayNum;
    local_3f8._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    FMassEntityManager::CreateArchetype(pFVar5,&local_428,&local_3f8,&local_468);
    if (local_490.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.AllocatorInstance.Data);
    }
    pTVar2 = &this->PerFrameSystems;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar19 = UFarmWaterProcessor::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_358,pUVar19);
    local_358._8_8_ = this;
    local_4d0 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_358);
    if (local_358._64_8_ != 0) {
      plVar23 = (longlong *)(local_358 + 0x50);
      if ((longlong *)local_358._104_8_ != (longlong *)0x0) {
        plVar23 = (longlong *)local_358._104_8_;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4d0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4d0);
    }
    pFVar22 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_4d0) &&
        ((FScriptContainerElement *)&local_4d0 <
         pFVar22 + (longlong)(this->PerFrameSystems).ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->PerFrameSystems).ArrayNum;
    piVar1 = &(this->PerFrameSystems).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PerFrameSystems).ArrayNum = iVar14 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_4d0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4d0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4d0);
    }
    iVar14 = (this->PerFrameSystems).ArrayNum;
    uVar25 = iVar14 - 1;
    uVar16 = 0;
    if ((int)uVar25 < iVar14) {
      uVar16 = ~uVar25 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar6 = *(UMassProcessor **)
              ((pTVar2->AllocatorInstance).Data +
              (longlong)(this->PerFrameSystems).ArrayNum * 8 + -8);
    pTVar20 = TSharedFromThis<FMassEntityManager,1>::AsShared
                        ((TSharedFromThis<FMassEntityManager,1> *)&pFVar5->_padding_,&local_3e8);
    UMassProcessor::CallInitialize(pUVar6,(TNotNull<UObject_*>)this,pTVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e8.SharedReferenceCount.ReferenceController);
    pTVar2 = &this->PerSecondSystems;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar19 = UFarmHarvestTimerSystem_Flowers::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_2d8,pUVar19);
    local_2d8._8_8_ = this;
    local_4c8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2d8);
    if (local_2d8._64_8_ != 0) {
      plVar23 = (longlong *)(local_2d8 + 0x50);
      if ((longlong *)local_2d8._104_8_ != (longlong *)0x0) {
        plVar23 = (longlong *)local_2d8._104_8_;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4c8);
    }
    pFVar22 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_4c8) &&
        ((FScriptContainerElement *)&local_4c8 <
         pFVar22 + (longlong)(this->PerSecondSystems).ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->PerSecondSystems).ArrayNum;
    if (iVar14 == (this->PerSecondSystems).ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(this->PerSecondSystems).ArrayMax);
    }
    (this->PerSecondSystems).ArrayNum = iVar14 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_4c8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4c8);
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar19 = UFarmHarvestTimerSystem_Crops::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_258,pUVar19);
    local_258._8_8_ = this;
    local_4c0 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_258);
    if (local_258._64_8_ != 0) {
      plVar23 = (longlong *)(local_258 + 0x50);
      if ((longlong *)local_258._104_8_ != (longlong *)0x0) {
        plVar23 = (longlong *)local_258._104_8_;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4c0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4c0);
    }
    pFVar22 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_4c0) &&
        ((FScriptContainerElement *)&local_4c0 <
         pFVar22 + (longlong)(this->PerSecondSystems).ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->PerSecondSystems).ArrayNum;
    if (iVar14 == (this->PerSecondSystems).ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(this->PerSecondSystems).ArrayMax);
    }
    (this->PerSecondSystems).ArrayNum = iVar14 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_4c0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4c0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4c0);
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar19 = UFarmHarvestTimerExpired::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1d8,pUVar19);
    local_1d8._8_8_ = this;
    local_4b8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
    if (local_1d8._64_8_ != 0) {
      plVar23 = (longlong *)(local_1d8 + 0x50);
      if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
        plVar23 = (longlong *)local_1d8._104_8_;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4b8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4b8);
    }
    pFVar22 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_4b8) &&
        ((FScriptContainerElement *)&local_4b8 <
         pFVar22 + (longlong)(this->PerSecondSystems).ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->PerSecondSystems).ArrayNum;
    if (iVar14 == (this->PerSecondSystems).ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(this->PerSecondSystems).ArrayMax);
    }
    (this->PerSecondSystems).ArrayNum = iVar14 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_4b8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4b8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4b8);
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar19 = UFarmHarvestTimerSetIcon::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_158,pUVar19);
    local_158._8_8_ = this;
    pUVar21 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
    if (local_158._64_8_ != 0) {
      plVar23 = (longlong *)(local_158 + 0x50);
      if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
        plVar23 = (longlong *)local_158._104_8_;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (this->HarvestIconISMC).field0_0x0.DebugPtr,
       pUVar7 != (UHierarchicalInstancedStaticMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    *(TObjectPtr<UHierarchicalInstancedStaticMeshComponent>_u_0 *)&pUVar21[0x1a].field_0x20 =
         (this->HarvestIconISMC).field0_0x0;
    *(float *)(pUVar21 + 0x1b) = this->GridCellWidth;
    *(float *)&pUVar21[0x1b].field_0x4 = this->GridCellHeight;
    *(undefined4 *)&pUVar21[0x1b].field_0x8 = 0x43480000;
    *(float *)&pUVar21[0x1b].field_0xc = this->HarvestIconScale;
    local_4b0 = pUVar21;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar21);
    }
    pFVar22 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_4b0) &&
        ((FScriptContainerElement *)&local_4b0 <
         pFVar22 + (longlong)(this->PerSecondSystems).ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->PerSecondSystems).ArrayNum;
    if (iVar14 == (this->PerSecondSystems).ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(this->PerSecondSystems).ArrayMax);
    }
    (this->PerSecondSystems).ArrayNum = iVar14 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_4b0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4b0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4b0);
    }
    pFVar28 = (pTVar2->AllocatorInstance).Data;
    iVar14 = (this->PerSecondSystems).ArrayNum;
    pFVar22 = pFVar28 + (longlong)iVar14 * 8;
    while( true ) {
      if ((this->PerSecondSystems).ArrayNum != iVar14) {
        local_4d8 = 0;
        `TCheckedPointerIterator<TObjectPtr<UMassProcessor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_4d8);
      }
      if (pFVar28 == pFVar22) break;
      pUVar6 = *(UMassProcessor **)pFVar28;
      pTVar20 = TSharedFromThis<FMassEntityManager,1>::AsShared
                          ((TSharedFromThis<FMassEntityManager,1> *)&pFVar5->_padding_,&local_3d8);
      UMassProcessor::CallInitialize(pUVar6,(TNotNull<UObject_*>)this,pTVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3d8.SharedReferenceCount.ReferenceController);
      pFVar28 = pFVar28 + 8;
    }
    UInstancedStaticMeshComponent::SetCullDistances
              ((UInstancedStaticMeshComponent *)(this->HarvestIconISMC).field0_0x0.DebugPtr,
               this->IconNearCullDistance,this->IconFarCullDistance);
    iVar14 = (this->VisualDataTable).ArrayNum;
    pFVar28 = (this->VisualDataTable).AllocatorInstance.Data;
    pFVar22 = pFVar28 + (longlong)iVar14 * 0x18;
    while( true ) {
      if ((this->VisualDataTable).ArrayNum != iVar14) {
        local_4d7[0] = 0;
        `TCheckedPointerIterator<FFarmVisualDataRow,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_4d7);
      }
      if (pFVar28 == pFVar22) break;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar19 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_d8,pUVar19);
      local_d8._8_8_ = this;
      this_00 = (UInstancedStaticMeshComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
      if (local_d8._64_8_ != 0) {
        plVar23 = (longlong *)(local_d8 + 0x50);
        if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
          plVar23 = (longlong *)local_d8._104_8_;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      (**(code **)(this_00->_padding_ + 0xb28))(this_00,*(undefined8 *)(pFVar28 + 8));
      if (*(longlong *)(pFVar28 + 0x10) != 0) {
        (**(code **)(this_00->_padding_ + 0x6b8))(this_00,0);
      }
      UInstancedStaticMeshComponent::SetCullDistances
                (this_00,this->VisualNearCullDistance,this->VisualFarCullDistance);
      local_480 = 0;
      USceneComponent::SetupAttachment
                ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
      UActorComponent::RegisterComponent((UActorComponent *)this_00);
      pTVar3 = &this->VisualDataISMCs;
      local_4a8 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar8 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_4a8) &&
          ((FScriptContainerElement *)&local_4a8 <
           pFVar8 + (longlong)(this->VisualDataISMCs).ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar15 = (this->VisualDataISMCs).ArrayNum;
      piVar1 = &(this->VisualDataISMCs).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->VisualDataISMCs).ArrayNum = iVar15 + 1;
      *(UInstancedStaticMeshComponent **)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 8) =
           local_4a8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_4a8 != (UInstancedStaticMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_4a8);
      }
      pFVar28 = pFVar28 + 0x18;
    }
    iVar15 = (uint)this->GridHeight * (uint)this->GridWidth;
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar15,&(this->PlantedSquares).AllocatorInstance,
                        &(this->PlantedSquares).ArrayNum,&(this->PlantedSquares).ArrayMax);
    DefaultConstructItems<FMassEntityHandle,int>
              ((this->PlantedSquares).AllocatorInstance.Data + (longlong)iVar14 * 8,iVar15);
    pFVar5 = local_458;
    fVar11 = __real_3f000000;
    fVar10 = __real_38000100;
    uVar26 = 0;
    if (this->GridHeight != 0) {
      do {
        uVar27 = 0;
        if (this->GridWidth != 0) {
          do {
            uVar16 = rand();
            bVar12 = fVar11 <= (float)(uVar16 & 0x7fff) * fVar10;
            uVar16 = 0;
            if (bVar12) {
              iVar14 = (this->TestDataFlowerIndicies).ArrayNum;
              if (0 < iVar14) {
                uVar16 = rand();
                uVar25 = (uint)((float)(uVar16 & 0x7fff) * (float)iVar14 * fVar10);
                uVar16 = iVar14 - 1U;
                if ((int)uVar25 < (int)(iVar14 - 1U)) {
                  uVar16 = uVar25;
                }
              }
              uVar25 = 0;
              if ((int)uVar16 < (this->TestDataFlowerIndicies).ArrayNum) {
                uVar25 = ~uVar16 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar22 = (this->TestDataFlowerIndicies).AllocatorInstance.Data;
            }
            else {
              iVar14 = (this->TestDataCropIndicies).ArrayNum;
              if (0 < iVar14) {
                uVar16 = rand();
                uVar25 = (uint)((float)(uVar16 & 0x7fff) * (float)iVar14 * fVar10);
                uVar16 = iVar14 - 1U;
                if ((int)uVar25 < (int)(iVar14 - 1U)) {
                  uVar16 = uVar25;
                }
              }
              uVar25 = 0;
              if ((int)uVar16 < (this->TestDataCropIndicies).ArrayNum) {
                uVar25 = ~uVar16 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar22 = (this->TestDataCropIndicies).AllocatorInstance.Data;
            }
            uVar4 = *(ushort *)(pFVar22 + (longlong)(int)uVar16 * 2);
            pFVar24 = &local_418;
            if (bVar12) {
              pFVar24 = &local_428;
            }
            local_438.DataPtr.Object = (pFVar24->DataPtr).Object;
            local_438.DataPtr.SharedReferenceCount.ReferenceController =
                 (pFVar24->DataPtr).SharedReferenceCount.ReferenceController;
            if (local_438.DataPtr.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_438.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_438.DataPtr.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            AddItemToGrid(this,pFVar5,uVar27,uVar26,&local_438,uVar4);
            uVar27 = uVar27 + 1;
          } while (uVar27 < this->GridWidth);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < this->GridHeight);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.DataPtr.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_418.DataPtr.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetPrivateStaticClass @ 1471203c0

UClass * __cdecl AMassEntityTestFarmPlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMassEntityTestFarmPlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassEntityTestFarmPlot",
               &Z_Registration_Info_UClass_AMassEntityTestFarmPlot.InnerSingleton,
               StaticRegisterNativesAMassEntityTestFarmPlot,0x380,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AMassEntityTestFarmPlot>,
               InternalVTableHelperCtorCaller<AMassEntityTestFarmPlot>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMassEntityTestFarmPlot.InnerSingleton;
}

// StaticRegisterNativesAMassEntityTestFarmPlot @ 1471aba50

void __cdecl AMassEntityTestFarmPlot::StaticRegisterNativesAMassEntityTestFarmPlot(void)

{
  return;
}

// TickActor @ 1471b06b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
AMassEntityTestFarmPlot::TickActor
          (AMassEntityTestFarmPlot *this,float param_1,ELevelTick param_2,
          FActorTickFunction *param_3)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  TSharedRef<FMassEntityManager,1> *pTVar6;
  TArrayView<UMassProcessor_*_const,int> *pTVar7;
  float fVar8;
  undefined1 auStack_cd8 [32];
  undefined8 local_cb8;
  undefined4 uStack_cb0;
  uint uStack_cac;
  FMassArchetypeEntityCollection *local_ca8;
  int iStack_ca0;
  undefined4 uStack_c9c;
  FScriptContainerElement *local_c98;
  int iStack_c90;
  undefined4 uStack_c8c;
  TSharedRef<FMassEntityManager,1> local_c88;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_c78;
  TArrayView<UMassProcessor_*_const,int> local_c68;
  TSharedRef<FMassEntityManager,1> local_c58;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_c48;
  TArrayView<UMassProcessor_*_const,int> local_c38;
  TArrayView<UMassProcessor_*_const,int> local_c28;
  FProcessingContext local_c18;
  FProcessingContext local_638;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_cd8;
  AActor::TickActor((AActor *)this,param_1,param_2,param_3);
  if ((this->PlantedSquares).ArrayNum != 0) {
    pFVar2 = (this->SharedEntityManager).Object;
    pTVar6 = TSharedFromThis<FMassEntityManager,1>::AsShared
                       ((TSharedFromThis<FMassEntityManager,1> *)&pFVar2->_padding_,&local_c88);
    local_c18.EntityManager.Object = pTVar6->Object;
    local_c18.EntityManager.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_c18.EntityManager.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c18.EntityManager.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c18.EntityManager.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c18.DeltaSeconds = param_1;
    FInstancedStruct::FInstancedStruct(&local_c18.AuxData);
    local_c18.CommandBuffer.Object = (FMassCommandBuffer *)0x0;
    local_c18.CommandBuffer.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_c18.bFlushCommandBuffer = true;
    local_c18.ExecutionContextPtr = (FMassExecutionContext *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c88.SharedReferenceCount.ReferenceController);
    local_cb8 = 0;
    uStack_cb0 = 0;
    local_c78._8_8_ = (ulonglong)uStack_cac << 0x20;
    local_c78.DataPtr = (FMassArchetypeEntityCollection *)0x0;
    pTVar7 = TArrayView<UMassProcessor_*_const,int>::
             TArrayView<UMassProcessor_*_const,int><TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>_>
                       (&local_c28,&this->PerFrameSystems);
    local_c68.DataPtr = pTVar7->DataPtr;
    local_c68.ArrayNum = pTVar7->ArrayNum;
    local_c68._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    UE::Mass::Executor::RunProcessorsView(&local_c68,&local_c18,&local_c78);
    UE::Mass::FProcessingContext::~FProcessingContext(&local_c18);
    fVar8 = this->NextSecondTimer - param_1;
    this->NextSecondTimer = fVar8;
    fVar4 = __real_3f800000;
    if (fVar8 < 0.0) {
      do {
        pTVar6 = TSharedFromThis<FMassEntityManager,1>::AsShared
                           ((TSharedFromThis<FMassEntityManager,1> *)&pFVar2->_padding_,&local_c58);
        local_638.EntityManager.Object = pTVar6->Object;
        local_638.EntityManager.SharedReferenceCount.ReferenceController =
             (pTVar6->SharedReferenceCount).ReferenceController;
        if (local_638.EntityManager.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_638.EntityManager.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_638.EntityManager.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_638.DeltaSeconds = 1.0;
        FInstancedStruct::FInstancedStruct(&local_638.AuxData);
        local_638.CommandBuffer.Object = (FMassCommandBuffer *)0x0;
        local_638.CommandBuffer.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_638.bFlushCommandBuffer = true;
        local_638.ExecutionContextPtr = (FMassExecutionContext *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c58.SharedReferenceCount.ReferenceController);
        local_c98 = (this->PerSecondSystems).AllocatorInstance.Data;
        iVar1 = (this->PerSecondSystems).ArrayNum;
        local_ca8 = (FMassArchetypeEntityCollection *)0x0;
        iStack_ca0 = 0;
        if ((iVar1 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c48._12_4_ = uStack_c9c;
        local_c48.ArrayNum = iStack_ca0;
        local_c38._12_4_ = uStack_c8c;
        local_c38.ArrayNum = iVar1;
        local_c38.DataPtr = (UMassProcessor **)local_c98;
        local_c48.DataPtr = local_ca8;
        iStack_c90 = iVar1;
        UE::Mass::Executor::RunProcessorsView(&local_c38,&local_638,&local_c48);
        this->NextSecondTimer = this->NextSecondTimer + fVar4;
        UE::Mass::FProcessingContext::~FProcessingContext(&local_638);
      } while (this->NextSecondTimer <= 0.0 && this->NextSecondTimer != 0.0);
    }
  }
  return;
}

// __VTableCtorCaller @ 1471b41b0

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
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UObject * __cdecl AMassEntityTestFarmPlot::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  FMassEntityManager *pFVar3;
  FMassEntityManager *pFVar4;
  FMassEntityManager *pFVar5;
  
  pFVar5 = (FMassEntityManager *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this == (AActor *)0x0) {
    return (UObject *)0x0;
  }
  AActor::AActor(this,param_1);
  *(undefined4 *)&this[1]._padding_ = 0x8c0118;
  this->_padding_ = (longlong)&___7AMassEntityTestFarmPlot__6B_;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1].PrimaryActorTick._padding_ = 0;
  this[1].PrimaryActorTick._padding_ = 0;
  this[1].PrimaryActorTick._padding_ = 0;
  this[1].PrimaryActorTick._padding_ = 0;
  this[1].PrimaryActorTick.Target = (AActor *)0x0;
  *(undefined8 *)&this[1].field_0x58 = 0;
  this[1].RemoteRole = '\0';
  this[1].ActorCategory = '\0';
  *(undefined2 *)&this[1].field_0x62 = 0;
  this[1].InitialLifeSpan = 0.0;
  this[1].CustomTimeDilation = 0.0;
  this[1].RayTracingGroupId = 0;
  this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
  *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
  *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
  *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
  *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x10 = 0;
  this[1].AttachmentReplication.RotationOffset.Pitch = 0.0;
  *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43160000;
  *(undefined4 *)&this[1]._padding_ = 0x43160000;
  *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3e99999a;
  *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
  *(undefined4 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 1000;
  *(undefined4 *)&this[1].AttachmentReplication.LocationOffset.field_0x14 = 0x4b0;
  *(undefined4 *)&this[1].AttachmentReplication.RelativeScale3D = 400;
  *(undefined4 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x4 = 800;
  pFVar3 = ::operator_new(0x7d8);
  pFVar4 = pFVar5;
  if (pFVar3 != (FMassEntityManager *)0x0) {
    pFVar4 = FMassEntityManager::FMassEntityManager(pFVar3,(UObject *)0x0);
  }
  this[1].AttachmentReplication.RotationOffset.Yaw = (double)pFVar4;
  pFVar3 = ::operator_new(0x18);
  if (pFVar3 != (FMassEntityManager *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMassEntityManager__U__DefaultDeleter_UFMassEntityManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar4;
    pFVar5 = pFVar3;
  }
  this[1].AttachmentReplication.RotationOffset.Roll = (double)pFVar5;
  EnsureRetrievingVTablePtrDuringCtor(L"TSharedRef()");
  TSharedRef<FMassEntityManager,1>::Init<FMassEntityManager>
            ((TSharedRef<FMassEntityManager,1> *)&this[1].AttachmentReplication.RotationOffset.Yaw,
             (FMassEntityManager *)this[1].AttachmentReplication.RotationOffset.Yaw);
  return (UObject *)this;
}

