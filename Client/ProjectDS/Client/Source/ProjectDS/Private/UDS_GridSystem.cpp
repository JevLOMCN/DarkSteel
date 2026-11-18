// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b4a5340

UClass * __cdecl UDS_GridSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GridSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GridSystem",
               &Z_Registration_Info_UClass_UDS_GridSystem.InnerSingleton,
               StaticRegisterNativesUDS_GridSystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_GridSystem>,InternalVTableHelperCtorCaller<UDS_GridSystem>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GridSystem.InnerSingleton;
}

// UDS_GridSystem @ 14b4a6ff0

UDS_GridSystem * __thiscall
UDS_GridSystem::UDS_GridSystem(UDS_GridSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->CellSize = 200;
  this->_padding_ = (longlong)&___7UDS_GridSystem__6B_;
  (this->BuildingActor).field0_0x0.DebugPtr = (ADS_BuildingActor *)0x0;
  (this->CollisionObjectQueryParams).ObjectTypesToQuery = 0;
  (this->CollisionObjectQueryParams).IgnoreMask = '\0';
  this->HalfCellSize = 100;
  this->MaxHeightDifference = 200;
  this->DrawDebugTime = 3;
  return this;
}

// UDS_GridSystem @ 14b4a7040

UDS_GridSystem * __thiscall
UDS_GridSystem::UDS_GridSystem(UDS_GridSystem *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->CellSize = 200;
  this->_padding_ = (longlong)&___7UDS_GridSystem__6B_;
  (this->BuildingActor).field0_0x0.DebugPtr = (ADS_BuildingActor *)0x0;
  (this->CollisionObjectQueryParams).ObjectTypesToQuery = 0;
  (this->CollisionObjectQueryParams).IgnoreMask = '\0';
  this->HalfCellSize = 100;
  this->MaxHeightDifference = 200;
  this->DrawDebugTime = 3;
  return this;
}

// ~UDS_GridSystem @ 14b4a7890

void __thiscall UDS_GridSystem::~UDS_GridSystem(UDS_GridSystem *this)

{
  this->_padding_ = (longlong)&___7UDS_GridSystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a8c00

UClass * __cdecl UDS_GridSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GridSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GridSystem",
               &Z_Registration_Info_UClass_UDS_GridSystem.InnerSingleton,
               StaticRegisterNativesUDS_GridSystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_GridSystem>,InternalVTableHelperCtorCaller<UDS_GridSystem>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GridSystem.InnerSingleton;
}

// StaticRegisterNativesUDS_GridSystem @ 14b4a9590

void __cdecl UDS_GridSystem::StaticRegisterNativesUDS_GridSystem(void)

{
  return;
}

// GetGridLocation @ 14b9f0120

TVector<double> * __thiscall
UDS_GridSystem::GetGridLocation
          (UDS_GridSystem *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = this->CellSize;
  dVar2 = __real_3ff0000000000000 / (double)iVar1;
  fVar3 = (float)(((param_1->field0_0x0)._s_0.X -
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) * dVar2);
  fVar4 = (float)(((param_1->field0_0x0)._s_0.Y -
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) * dVar2);
  fVar5 = (float)(((param_1->field0_0x0)._s_0.Z -
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) * dVar2);
  fVar4 = (fVar4 + fVar4) - __real_3f000000;
  fVar5 = (fVar5 + fVar5) - __real_3f000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(((int)ROUND((fVar3 + fVar3) - __real_3f000000) >> 1) * iVar1 + this->HalfCellSize);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(((int)ROUND(fVar4) >> 1) * iVar1 + this->HalfCellSize);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(((int)ROUND(fVar5) >> 1) * iVar1);
  return __return_storage_ptr__;
}

// GetIndexToLocation @ 14b9f08b0

TVector<double> * __thiscall
UDS_GridSystem::GetIndexToLocation
          (UDS_GridSystem *this,TVector<double> *__return_storage_ptr__,TIntVector3<int> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = this->CellSize;
  iVar2 = (param_1->field0_0x0)._s_0.Y;
  iVar3 = (param_1->field0_0x0)._s_0.Z;
  iVar4 = this->HalfCellSize;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(iVar1 * (param_1->field0_0x0)._s_0.X + this->HalfCellSize);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(iVar1 * iVar2 + iVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(iVar1 * iVar3);
  return __return_storage_ptr__;
}

// HasGroundInBoxel @ 14b9f2e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UDS_GridSystem::HasGroundInBoxel(UDS_GridSystem *this,TIntVector3<int> *param_1)

{
  int iVar1;
  bool bVar2;
  UWorld *this_00;
  UDS_LogManager *pUVar3;
  TStatId TVar4;
  AActor *pAVar5;
  UClass *pUVar6;
  double dVar7;
  undefined1 auStackY_378 [32];
  FCollisionObjectQueryParams local_338;
  FCollisionShape local_330 [2];
  undefined8 local_310;
  undefined4 uStack_308;
  undefined1 uStack_304;
  undefined2 uStack_303;
  undefined1 uStack_301;
  TVector<double>_u_0 local_300;
  TVector<double>_u_0 local_2e8;
  FHitResult local_2c8;
  FCollisionQueryParams local_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_GridSystem::HasGroundInBoxel",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x195,L"world is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  iVar1 = this->CellSize;
  local_300._s_0.X = (double)(iVar1 * (param_1->field0_0x0)._s_0.X + this->HalfCellSize);
  local_300._s_0.Y = (double)(iVar1 * (param_1->field0_0x0)._s_0.Y + this->HalfCellSize);
  dVar7 = (double)(iVar1 * (param_1->field0_0x0)._s_0.Z);
  local_2e8._s_0.Z = (double)(iVar1 + -1) + dVar7;
  local_300._s_0.Z = dVar7 + __real_3ff0000000000000;
  local_2e8._s_0.X = local_300._s_0.X;
  local_2e8._s_0.Y = local_300._s_0.Y;
  memset(&local_2c8,0,0x100);
  uStack_308 = 0xffffffff;
  uStack_303 = 0;
  local_2c8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_2c8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_2c8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_2c8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_301 = 0;
  local_310 = 0;
  uStack_304 = 0;
  local_2c8.HitObjectHandle.InstanceIndex = -1;
  local_2c8.HitObjectHandle.ResolutionStatus = Invalid;
  local_2c8.HitObjectHandle._29_3_ = 0;
  local_2c8.Time = 1.0;
  local_2c8.MyItem = -1;
  local_2c8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_338.IgnoreMask = '\0';
  local_338.ObjectTypesToQuery = 1;
  local_1c8.OwnerTag.ComparisonIndex.Value = 0;
  local_1c8.OwnerTag.Number = 0;
  local_1c8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1c8.IgnoreComponents.ArrayNum = 0;
  local_1c8.IgnoreComponents.ArrayMax = 8;
  local_1c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1c8.IgnoreSourceObjects.ArrayNum = 0;
  local_1c8.IgnoreSourceObjects.ArrayMax = 4;
  local_1c8.bTraceComplex = false;
  local_1c8.bFindInitialOverlaps = true;
  local_1c8.bReturnFaceIndex = false;
  local_1c8.bReturnPhysicalMaterial = false;
  local_1c8.MobilityType = Any;
  local_1c8.TraceTag.ComparisonIndex.Value = 0;
  local_1c8.TraceTag.Number = 0;
  local_1c8.bComponentListUnique = true;
  local_1c8.IgnoreMask = '\0';
  local_1c8.bIgnoreBlocks = false;
  local_1c8.bIgnoreTouches = false;
  local_1c8.bSkipNarrowPhase = false;
  TVar4 = FCollisionQueryParams::GetUnknownStatId();
  local_1c8.StatId.StatIdPtr = *(TStatIdData **)&(TVar4.StatIdPtr)->Name;
  local_1c8.bDebugQuery = false;
  local_1c8.bTraceIntoSubComponents = true;
  local_1c8.bReplaceHitWithSubComponents = true;
  FCollisionQueryParams::AddIgnoredActor
            (&local_1c8,(AActor *)(this->BuildingActor).field0_0x0.DebugPtr);
  local_330[0].ShapeType = Box;
  local_330[0].field1_0x4.Box.HalfExtentZ = 1.0;
  local_330[0].field1_0x4._0_4_ = (undefined4)(this->HalfCellSize + -1);
  local_330[0].field1_0x4._4_4_ = local_330[0].field1_0x4._0_4_;
  bVar2 = UWorld::SweepSingleByObjectType
                    (this_00,&local_2c8,(TVector<double> *)&local_2e8._s_0,
                     (TVector<double> *)&local_300._s_0,&UE::Math::TQuat<double>::Identity,
                     &local_338,local_330,&local_1c8);
  if ((!bVar2) || (local_2c8.bBlockingHit == 0)) {
    bVar2 = false;
    goto LAB_14b9f313c;
  }
  pAVar5 = FActorInstanceHandle::FetchActor(&local_2c8.HitObjectHandle);
  if (pAVar5 == (AActor *)0x0) {
LAB_14b9f312f:
    pAVar5 = (AActor *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_ADS_BuildingActor_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14b9f312f;
  }
  bVar2 = pAVar5 == (AActor *)0x0;
LAB_14b9f313c:
  if (local_1c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_1c8.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1c8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar2;
}

// Init @ 14b9f4c10

void __thiscall UDS_GridSystem::Init(UDS_GridSystem *this)

{
  (this->CollisionObjectQueryParams).ObjectTypesToQuery =
       (this->CollisionObjectQueryParams).ObjectTypesToQuery | 0x105c001;
  return;
}

// IsBlockedActor @ 14b9f8ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UDS_GridSystem::IsBlockedActor(UDS_GridSystem *this,AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 == (AActor *)0x0) {
    return false;
  }
  pUVar2 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar2->_padding_)) {
    pUVar2 = Z_Construct_UClass_ADS_NetCharacter_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_ADS_NPC_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        pUVar2 = Z_Construct_UClass_ADS_Stuff_NoRegister();
        iVar1 = (int)pUVar2->_padding_;
        if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
          return false;
        }
        if ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar2->_padding_) {
          return false;
        }
      }
    }
  }
  return true;
}

// Reset @ 14ba18400

void __thiscall UDS_GridSystem::Reset(UDS_GridSystem *this)

{
  (this->CollisionObjectQueryParams).ObjectTypesToQuery =
       (this->CollisionObjectQueryParams).ObjectTypesToQuery & 0xfefa3ffe;
  (this->BuildingActor).field0_0x0.DebugPtr = (ADS_BuildingActor *)0x0;
  return;
}

// SetBuildingActor @ 14ba1a380

void __thiscall UDS_GridSystem::SetBuildingActor(UDS_GridSystem *this,ADS_BuildingActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ADS_BuildingActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->BuildingActor).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->BuildingActor).field0_0x0.DebugPtr = param_1;
  return;
}

// TryGetActor @ 14ba1e2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_GridSystem::TryGetActor
          (UDS_GridSystem *this,TVector<double> *param_1,TIntVector3<int> *param_2,AActor **param_3)

{
  double dVar1;
  bool bVar2;
  UWorld *this_00;
  UDS_LogManager *pUVar3;
  TStatId TVar4;
  AActor *pAVar5;
  undefined1 auStackY_398 [32];
  FCollisionShape local_350 [2];
  undefined8 local_330;
  undefined4 uStack_328;
  undefined1 uStack_324;
  undefined2 uStack_323;
  undefined1 uStack_321;
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  FHitResult local_2e8;
  FCollisionQueryParams local_1e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_398;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_GridSystem::TryGetActor",0x1b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x16b,L"world is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar2 = false;
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    local_320._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_320._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_308._s_0.Z =
         (double)((float)(this->CellSize * (param_2->field0_0x0)._s_0.Z) - __real_3f800000) + dVar1;
    local_320._s_0.Z = dVar1 + __real_3ff0000000000000;
    local_308._s_0.X = local_320._s_0.X;
    local_308._s_0.Y = local_320._s_0.Y;
    memset(&local_2e8,0,0x100);
    uStack_328 = 0xffffffff;
    uStack_323 = 0;
    uStack_321 = 0;
    local_330 = 0;
    uStack_324 = 0;
    local_2e8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_2e8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_2e8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_2e8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_2e8.Time = 1.0;
    local_2e8.HitObjectHandle.InstanceIndex = -1;
    local_2e8.HitObjectHandle.ResolutionStatus = Invalid;
    local_2e8.HitObjectHandle._29_3_ = 0;
    local_2e8.MyItem = -1;
    local_1e8.OwnerTag.ComparisonIndex.Value = 0;
    local_1e8.OwnerTag.Number = 0;
    local_2e8.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_1e8.IgnoreComponents.ArrayNum = 0;
    local_1e8.IgnoreComponents.ArrayMax = 8;
    local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    local_1e8.IgnoreSourceObjects.ArrayNum = 0;
    local_1e8.IgnoreSourceObjects.ArrayMax = 4;
    local_1e8.bTraceComplex = false;
    local_1e8.bFindInitialOverlaps = true;
    local_1e8.bReturnFaceIndex = false;
    local_1e8.bReturnPhysicalMaterial = false;
    local_1e8.MobilityType = Any;
    local_1e8.TraceTag.ComparisonIndex.Value = 0;
    local_1e8.TraceTag.Number = 0;
    local_1e8.bComponentListUnique = true;
    local_1e8.IgnoreMask = '\0';
    local_1e8.bIgnoreBlocks = false;
    local_1e8.bIgnoreTouches = false;
    local_1e8.bSkipNarrowPhase = false;
    TVar4 = FCollisionQueryParams::GetUnknownStatId();
    local_1e8.StatId.StatIdPtr = *(TStatIdData **)&(TVar4.StatIdPtr)->Name;
    local_1e8.bDebugQuery = false;
    local_1e8.bTraceIntoSubComponents = true;
    local_1e8.bReplaceHitWithSubComponents = true;
    FCollisionQueryParams::AddIgnoredActor
              (&local_1e8,(AActor *)(this->BuildingActor).field0_0x0.DebugPtr);
    local_350[0].ShapeType = Box;
    local_350[0].field1_0x4.Box.HalfExtentZ = 1.0;
    local_350[0].field1_0x4._0_4_ =
         (undefined4)(this->HalfCellSize * (param_2->field0_0x0)._s_0.X + -1);
    local_350[0].field1_0x4._4_4_ =
         (undefined4)(this->HalfCellSize * (param_2->field0_0x0)._s_0.Y + -1);
    bVar2 = UWorld::SweepSingleByObjectType
                      (this_00,&local_2e8,(TVector<double> *)&local_308._s_0,
                       (TVector<double> *)&local_320._s_0,&UE::Math::TQuat<double>::Identity,
                       &this->CollisionObjectQueryParams,local_350,&local_1e8);
    if (((bVar2) && (local_2e8.bBlockingHit != 0)) &&
       (pAVar5 = FActorInstanceHandle::FetchActor(&local_2e8.HitObjectHandle),
       pAVar5 != (AActor *)0x0)) {
      *param_3 = pAVar5;
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar2;
}

// TryGetConstructLocation @ 14ba1e6d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_GridSystem::TryGetConstructLocation
          (UDS_GridSystem *this,TVector<double> *param_1,FDS_BuildingInfo *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  AActor *pAVar3;
  bool bVar4;
  UDS_ConstructionManager *this_00;
  UClass *pUVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  AActor *local_res18;
  EDS_AttachableFaceType local_108 [4];
  float local_104;
  TIntVector3<int>_u_0 local_100;
  int local_f0;
  TVector<double>_u_0 local_e8;
  undefined8 local_d0;
  undefined1 local_c0 [12];
  int iStack_b4;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  undefined8 local_80;
  
  fVar10 = __real_3f000000;
  dVar16 = __real_3ff0000000000000;
  if (param_2->ConstructType == UpperSurface) {
    iVar6 = this->CellSize;
    fVar10 = (float)(((param_1->field0_0x0)._s_0.X -
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) *
                    (__real_3ff0000000000000 / (double)iVar6));
    fVar14 = (float)(((param_1->field0_0x0)._s_0.Y -
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) *
                    (__real_3ff0000000000000 / (double)iVar6));
    local_e8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_104 = (float)local_e8._s_0.Z;
    local_res18 = (AActor *)CONCAT44(local_res18._4_4_,local_104);
    dVar16 = (double)(((int)ROUND((fVar10 + fVar10) - __real_3f000000) >> 1) * iVar6 +
                     this->HalfCellSize);
    dVar17 = (double)(((int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1) * iVar6 +
                     this->HalfCellSize);
    local_e8._s_0.X = dVar16;
    local_e8._s_0.Y = dVar17;
    bVar4 = TryGetHighestHeight(this,(TVector<double> *)&local_e8._s_0,&param_2->Size,
                                (float *)&local_res18);
    if (((bVar4) &&
        (bVar4 = TryGetLowestHeight(this,(TVector<double> *)&local_e8._s_0,&param_2->Size,&local_104
                                   ), bVar4)) &&
       (local_res18._0_4_ - local_104 < (float)this->MaxHeightDifference)) {
      (param_3->field0_0x0)._s_0.X = dVar16;
      (param_3->field0_0x0)._s_0.Y = dVar17;
      (param_3->field0_0x0)._s_0.Z = (double)local_res18._0_4_;
      return true;
    }
  }
  else if (param_2->ConstructType == FitBoxel) {
    iVar6 = this->CellSize;
    dVar17 = __real_3ff0000000000000 / (double)iVar6;
    fVar15 = (float)(((param_1->field0_0x0)._s_0.X -
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) * dVar17);
    fVar11 = (float)(((param_1->field0_0x0)._s_0.Y -
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) * dVar17);
    fVar14 = (float)(((param_1->field0_0x0)._s_0.Z -
                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) * dVar17);
    local_100._s_0.X = (int)ROUND((fVar15 + fVar15) - __real_3f000000) >> 1;
    local_100._s_0.Y = (int)ROUND((fVar11 + fVar11) - __real_3f000000) >> 1;
    dVar17 = (double)(local_100._s_0.X * iVar6 + this->HalfCellSize);
    local_104 = (float)((int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1);
    dVar18 = (double)(local_100._s_0.Y * iVar6 + this->HalfCellSize);
    local_80 = (undefined8)((int)local_104 * iVar6);
    (param_3->field0_0x0)._s_0.X = dVar17;
    (param_3->field0_0x0)._s_0.Y = dVar18;
    (param_3->field0_0x0)._s_0.Z = (double)local_80;
    dStack_88 = dVar18;
    local_90 = dVar17;
    local_100._s_0.Z = (int)local_104;
    local_f0 = local_100._s_0.X;
    bVar4 = HasGroundInBoxel(this,(TIntVector3<int> *)&local_100._s_0);
    uVar12 = local_100._s_0.Y;
    if (bVar4) {
      dVar1 = (param_1->field0_0x0)._s_0.Z;
      local_res18 = (AActor *)CONCAT44(local_res18._4_4_,(float)dVar1);
      local_e8._s_0.X = dVar17;
      local_e8._s_0.Y = dVar18;
      local_e8._s_0.Z = dVar1;
      bVar4 = TryGetLowestHeight(this,(TVector<double> *)&local_e8._s_0,&param_2->Size,
                                 (float *)&local_res18);
      if (!bVar4) {
        return false;
      }
      if ((double)local_res18._0_4_ != dVar1) {
        iVar6 = this->CellSize;
        dVar16 = dVar16 / (double)iVar6;
        fVar14 = (float)((((double)local_res18._0_4_ +
                          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) -
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) * dVar16);
        fVar15 = (float)(((dVar17 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) -
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) * dVar16);
        fVar11 = (float)(((dVar18 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) -
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) * dVar16);
        dVar17 = (double)(((int)ROUND((fVar15 + fVar15) - fVar10) >> 1) * iVar6 + this->HalfCellSize
                         );
        dVar16 = (double)(((int)ROUND((fVar11 + fVar11) - fVar10) >> 1) * iVar6 + this->HalfCellSize
                         );
        local_80 = (undefined8)(((int)ROUND((fVar14 + fVar14) - fVar10) >> 1) * iVar6);
        uVar12 = SUB84(dVar16,0);
        uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
        auVar2._8_4_ = uVar12;
        auVar2._0_8_ = dVar17;
        auVar2._12_4_ = uVar13;
        *(undefined1 (*) [16])&param_3->field0_0x0 = auVar2;
        (param_3->field0_0x0)._s_0.Z = (double)local_80;
        unique0x100000aa = uVar12;
        local_90 = dVar17;
        unique0x100000ae = uVar13;
      }
    }
    else {
      bVar4 = false;
      iVar6 = 0;
      do {
        local_res18 = (AActor *)CONCAT71(local_res18._1_7_,'\x01' << ((byte)iVar6 & 0x1f));
        DS_ConstructionUtil::FaceTypeToNormal
                  ((TIntVector3<int> *)&local_100._s_0,(EDS_AttachableFaceType *)&local_res18);
        iVar8 = -local_100._s_0.Z;
        iVar9 = -local_100._s_0.X;
        iVar7 = -local_100._s_0.Y;
        stack0xffffffffffffff48 = CONCAT44(iVar7,local_100._s_0.X);
        this_00 = UDS_ConstructionManager::GetInst();
        if (this_00 != (UDS_ConstructionManager *)0x0) {
          local_d0 = (double)CONCAT44(uVar12 + local_100._s_0.Y,local_f0 + local_100._s_0.X);
          local_e8._8_4_ = (int)local_104 + local_100._s_0.Z;
          local_e8._s_0.X = local_d0;
          UDS_ConstructionManager::GetBuildingActor(this_00,(TIntVector3<int> *)local_c0);
          if (local_c0._0_8_ != 0) {
            local_a8._s_0.X = (double)iVar9;
            local_a8._s_0.Z = (double)iVar8;
            local_a8._s_0.Y = (double)iVar7;
            local_108[0] = DS_ConstructionUtil::GetAttachableFaceType
                                     ((TVector<double> *)&local_a8._s_0);
            bVar4 = DS_ConstructionUtil::IsAttachableBuildings
                              (&((this->BuildingActor).field0_0x0.DebugPtr)->Info,
                               (FDS_BuildingInfo *)(local_c0._0_8_ + 0x2e0),local_108);
            if (bVar4) goto LAB_14ba1eb83;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 6);
      if (bVar4 == false) {
        return false;
      }
    }
LAB_14ba1eb83:
    local_res18 = (AActor *)0x0;
    bVar4 = TryGetActor(this,(TVector<double> *)&local_90,&param_2->Size,&local_res18);
    pAVar3 = local_res18;
    if (!bVar4) {
      return true;
    }
    if (local_res18 == (AActor *)0x0) {
      return true;
    }
    pUVar5 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar6 = (int)pUVar5->_padding_;
    if ((*(int *)(pAVar3->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar5->_padding_)) {
      pUVar5 = Z_Construct_UClass_ADS_NetCharacter_NoRegister();
      iVar6 = (int)pUVar5->_padding_;
      if ((*(int *)(pAVar3->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar5->_padding_)) {
        pUVar5 = Z_Construct_UClass_ADS_NPC_NoRegister();
        iVar6 = (int)pUVar5->_padding_;
        if ((*(int *)(pAVar3->_padding_ + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar5->_padding_)) {
          pUVar5 = Z_Construct_UClass_ADS_Stuff_NoRegister();
          iVar6 = (int)pUVar5->_padding_;
          if (*(int *)(pAVar3->_padding_ + 0x38) < iVar6) {
            return true;
          }
          if ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar5->_padding_) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// TryGetHeight @ 14ba1ec90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_GridSystem::TryGetHeight
          (UDS_GridSystem *this,TVector<double> *param_1,TIntVector3<int> *param_2,float *param_3)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  UWorld *this_00;
  UDS_LogManager *pUVar4;
  TStatId TVar5;
  AActor *pAVar6;
  undefined1 auStackY_378 [32];
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  undefined1 local_2e8 [164];
  int local_244;
  byte local_23b;
  FActorInstanceHandle local_230 [2];
  FCollisionQueryParams local_1e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_378;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_GridSystem::TryGetHeight",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x143,L"world is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar2 = false;
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    iVar3 = this->CellSize * (param_2->field0_0x0)._s_0.Z;
    local_320._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_320._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_308._s_0.Z = (double)iVar3 + dVar1;
    local_320._s_0.Z = dVar1 - (double)iVar3;
    local_308._s_0.X = local_320._s_0.X;
    local_308._s_0.Y = local_320._s_0.Y;
    memset(local_2e8,0,0x100);
    local_230[0].ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_230[0].ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_230[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_230[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_2e8._4_4_ = 1.0;
    local_230[0].InstanceIndex = -1;
    local_230[0].ResolutionStatus = Invalid;
    local_230[0]._29_3_ = 0;
    local_244 = -1;
    local_1e8.OwnerTag.ComparisonIndex.Value = 0;
    local_1e8.OwnerTag.Number = 0;
    local_230[0].ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
    local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_1e8.IgnoreComponents.ArrayNum = 0;
    local_1e8.IgnoreComponents.ArrayMax = 8;
    local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    local_1e8.IgnoreSourceObjects.ArrayNum = 0;
    local_1e8.IgnoreSourceObjects.ArrayMax = 4;
    local_1e8.bTraceComplex = false;
    local_1e8.bFindInitialOverlaps = true;
    local_1e8.bReturnFaceIndex = false;
    local_1e8.bReturnPhysicalMaterial = false;
    local_1e8.MobilityType = Any;
    local_1e8.TraceTag.ComparisonIndex.Value = 0;
    local_1e8.TraceTag.Number = 0;
    local_1e8.bComponentListUnique = true;
    local_1e8.IgnoreMask = '\0';
    local_1e8.bIgnoreBlocks = false;
    local_1e8.bIgnoreTouches = false;
    local_1e8.bSkipNarrowPhase = false;
    TVar5 = FCollisionQueryParams::GetUnknownStatId();
    local_1e8.StatId.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
    local_1e8.bDebugQuery = false;
    local_1e8.bTraceIntoSubComponents = true;
    local_1e8.bReplaceHitWithSubComponents = true;
    FCollisionQueryParams::AddIgnoredActor
              (&local_1e8,(AActor *)(this->BuildingActor).field0_0x0.DebugPtr);
    bVar2 = UWorld::LineTraceSingleByObjectType
                      (this_00,(FHitResult *)local_2e8,(TVector<double> *)&local_308._s_0,
                       (TVector<double> *)&local_320._s_0,&this->CollisionObjectQueryParams,
                       &local_1e8);
    if (((!bVar2) || ((local_23b & 1) == 0)) ||
       ((pAVar6 = FActorInstanceHandle::FetchActor(local_230), pAVar6 != (AActor *)0x0 &&
        (bVar2 = IsBlockedActor(this,pAVar6), bVar2)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      *param_3 = (float)(double)local_2e8._56_8_;
    }
    if (local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar2;
}

// TryGetHighestHeight @ 14ba1ef50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_GridSystem::TryGetHighestHeight
          (UDS_GridSystem *this,TVector<double> *param_1,TIntVector3<int> *param_2,float *param_3)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  UWorld *this_00;
  UDS_LogManager *pUVar4;
  TStatId TVar5;
  AActor *pAVar6;
  undefined1 auStackY_398 [32];
  FCollisionShape local_350 [2];
  undefined8 local_330;
  undefined4 uStack_328;
  undefined1 uStack_324;
  undefined2 uStack_323;
  undefined1 uStack_321;
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  undefined1 local_2e8 [164];
  int local_244;
  byte local_23b;
  FActorInstanceHandle local_230 [2];
  FCollisionQueryParams local_1e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_398;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_GridSystem::TryGetHighestHeight",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0xa6,L"world is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar2 = false;
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    iVar3 = this->CellSize * (param_2->field0_0x0)._s_0.Z;
    local_320._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_320._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_308._s_0.Z = (double)iVar3 + dVar1;
    local_320._s_0.Z = dVar1 - (double)iVar3;
    local_308._s_0.X = local_320._s_0.X;
    local_308._s_0.Y = local_320._s_0.Y;
    memset(local_2e8,0,0x100);
    uStack_328 = 0xffffffff;
    uStack_323 = 0;
    uStack_321 = 0;
    local_330 = 0;
    uStack_324 = 0;
    local_230[0].ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_230[0].ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_230[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_230[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_2e8._4_4_ = 1.0;
    local_230[0].InstanceIndex = -1;
    local_230[0].ResolutionStatus = Invalid;
    local_230[0]._29_3_ = 0;
    local_244 = -1;
    local_1e8.OwnerTag.ComparisonIndex.Value = 0;
    local_1e8.OwnerTag.Number = 0;
    local_230[0].ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
    local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_1e8.IgnoreComponents.ArrayNum = 0;
    local_1e8.IgnoreComponents.ArrayMax = 8;
    local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    local_1e8.IgnoreSourceObjects.ArrayNum = 0;
    local_1e8.IgnoreSourceObjects.ArrayMax = 4;
    local_1e8.bTraceComplex = false;
    local_1e8.bFindInitialOverlaps = true;
    local_1e8.bReturnFaceIndex = false;
    local_1e8.bReturnPhysicalMaterial = false;
    local_1e8.MobilityType = Any;
    local_1e8.TraceTag.ComparisonIndex.Value = 0;
    local_1e8.TraceTag.Number = 0;
    local_1e8.bComponentListUnique = true;
    local_1e8.IgnoreMask = '\0';
    local_1e8.bIgnoreBlocks = false;
    local_1e8.bIgnoreTouches = false;
    local_1e8.bSkipNarrowPhase = false;
    TVar5 = FCollisionQueryParams::GetUnknownStatId();
    local_1e8.StatId.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
    local_1e8.bDebugQuery = false;
    local_1e8.bTraceIntoSubComponents = true;
    local_1e8.bReplaceHitWithSubComponents = true;
    FCollisionQueryParams::AddIgnoredActor
              (&local_1e8,(AActor *)(this->BuildingActor).field0_0x0.DebugPtr);
    local_350[0].ShapeType = Box;
    local_350[0].field1_0x4.Box.HalfExtentZ = 1.0;
    local_350[0].field1_0x4._0_4_ =
         (undefined4)(this->HalfCellSize * (param_2->field0_0x0)._s_0.X + -1);
    local_350[0].field1_0x4._4_4_ =
         (undefined4)(this->HalfCellSize * (param_2->field0_0x0)._s_0.Y + -1);
    bVar2 = UWorld::SweepSingleByObjectType
                      (this_00,(FHitResult *)local_2e8,(TVector<double> *)&local_308._s_0,
                       (TVector<double> *)&local_320._s_0,&UE::Math::TQuat<double>::Identity,
                       &this->CollisionObjectQueryParams,local_350,&local_1e8);
    if (((!bVar2) || ((local_23b & 1) == 0)) ||
       ((pAVar6 = FActorInstanceHandle::FetchActor(local_230), pAVar6 != (AActor *)0x0 &&
        (bVar2 = IsBlockedActor(this,pAVar6), bVar2)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      *param_3 = (float)(double)local_2e8._56_8_;
    }
    if (local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar2;
}

// TryGetLowestHeight @ 14ba1f500

bool __thiscall
UDS_GridSystem::TryGetLowestHeight
          (UDS_GridSystem *this,TVector<double> *param_1,TIntVector3<int> *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint uVar19;
  float local_res8;
  uint uStackX_c;
  int local_res10;
  float local_res18 [2];
  float *local_res20;
  TVector<double>_u_0 local_e0 [6];
  
  iVar10 = (param_2->field0_0x0)._s_0.X;
  iVar11 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  iVar5 = (iVar10 + -1) / 2;
  iVar12 = this->CellSize;
  local_res10 = (iVar11 + -1) / 2;
  iVar8 = iVar12 * local_res10;
  dVar17 = SUB168(*(undefined1 (*) [16])&param_1->field0_0x0,8);
  fVar14 = (float)dVar1;
  dVar15 = SUB168(*(undefined1 (*) [16])&param_1->field0_0x0,0);
  iVar9 = 0;
  local_res20 = param_3;
  local_e0[0]._16_8_ = dVar1;
  if (0 < iVar10) {
    do {
      iVar10 = 0;
      if (0 < iVar11) {
        do {
          local_res8 = 0.0;
          local_e0[0]._0_8_ = (double)(this->CellSize * iVar9) + (dVar15 - (double)(iVar12 * iVar5))
          ;
          local_e0[0]._8_8_ = (double)(this->CellSize * iVar10) + (dVar17 - (double)iVar8);
          local_e0[0]._16_8_ = dVar1;
          bVar3 = TryGetHeight(this,(TVector<double> *)&local_e0[0]._s_0,param_2,&local_res8);
          if (!bVar3) {
            return false;
          }
          iVar10 = iVar10 + 1;
          iVar11 = (param_2->field0_0x0)._s_0.Y;
          if (fVar14 <= local_res8) {
            local_res8 = fVar14;
          }
          fVar14 = local_res8;
        } while (iVar10 < iVar11);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (param_2->field0_0x0)._s_0.X);
  }
  dVar2 = __real_4024000000000000;
  local_res8 = 0.0;
  iVar10 = local_res10 + -1;
  dVar16 = (double)((ulonglong)uStackX_c << 0x20);
  dVar18 = (double)((ulonglong)uStackX_c << 0x20);
  iVar11 = iVar5 + -1;
  if (iVar5 + -1 < 0) {
    iVar11 = 0;
  }
  uVar19 = uStackX_c;
  iVar12 = local_res10;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  do {
    iVar8 = 0;
    cVar4 = SUB41(local_res8,0);
    if ((cVar4 == '\0') || (cVar4 == '\x01')) {
      iVar9 = (param_2->field0_0x0)._s_0.X;
    }
    else {
      iVar9 = iVar8;
      if ((byte)(cVar4 - 2U) < 2) {
        iVar9 = (param_2->field0_0x0)._s_0.Y;
      }
    }
    if (0 < iVar9) {
      uVar13 = (uint)local_res8 & 0xff;
      do {
        if (uVar13 == 0) {
          iVar6 = this->CellSize;
          iVar7 = -10;
          if (iVar11 == 0) {
            iVar7 = 10;
          }
          local_e0[0]._0_8_ =
               (dVar15 - (double)(iVar6 * iVar10 + this->HalfCellSize)) + (double)(iVar6 * iVar8);
          local_e0[0]._8_8_ = ((double)(iVar6 * iVar12 + this->HalfCellSize) + dVar17) - dVar2;
LAB_14ba1f876:
          dVar18 = 0.0;
          dVar16 = (double)iVar7;
LAB_14ba1f882:
          uVar19 = 0;
          local_e0[0]._16_8_ = dVar1;
        }
        else {
          if (uVar13 == 1) {
            iVar6 = this->CellSize;
            iVar7 = 10;
            if (iVar11 == 0) {
              iVar7 = -10;
            }
            local_e0[0]._0_8_ =
                 ((double)(iVar6 * iVar10 + this->HalfCellSize) + dVar15) - (double)(iVar6 * iVar8);
            local_e0[0]._8_8_ = (dVar17 - (double)(iVar6 * iVar12 + this->HalfCellSize)) + dVar2;
            goto LAB_14ba1f876;
          }
          if (uVar13 == 2) {
            iVar12 = this->CellSize;
            dVar16 = 0.0;
            local_e0[0]._0_8_ = (dVar15 - (double)(iVar12 * iVar5 + this->HalfCellSize)) + dVar2;
            iVar6 = -10;
            if (iVar10 == 0) {
              iVar6 = 10;
            }
            dVar18 = (double)iVar6;
            local_e0[0]._8_8_ =
                 (dVar17 - (double)(iVar12 * iVar11 + this->HalfCellSize)) +
                 (double)(iVar12 * iVar8);
            goto LAB_14ba1f882;
          }
          if (uVar13 == 3) {
            iVar12 = this->CellSize;
            dVar16 = 0.0;
            iVar6 = 10;
            if (iVar10 == 0) {
              iVar6 = -10;
            }
            local_e0[0]._0_8_ = ((double)(iVar12 * iVar5 + this->HalfCellSize) + dVar15) - dVar2;
            dVar18 = (double)iVar6;
            local_e0[0]._8_8_ =
                 ((double)(iVar12 * iVar11 + this->HalfCellSize) + dVar17) -
                 (double)(iVar12 * iVar8);
            goto LAB_14ba1f882;
          }
        }
        if (iVar8 == iVar9 + -1) {
          local_e0[0]._0_8_ = (double)local_e0[0]._0_8_ + dVar16;
          local_e0[0]._8_8_ = (double)local_e0[0]._8_8_ + dVar18;
          local_e0[0]._16_8_ = (double)local_e0[0]._16_8_ + (double)((ulonglong)uVar19 << 0x20);
        }
        local_res18[0] = 0.0;
        bVar3 = TryGetHeight(this,(TVector<double> *)&local_e0[0]._s_0,param_2,local_res18);
        if (!bVar3) {
          return false;
        }
        if (fVar14 <= local_res18[0]) {
          local_res18[0] = fVar14;
        }
        fVar14 = local_res18[0];
        iVar8 = iVar8 + 1;
        iVar12 = local_res10;
      } while (iVar8 < iVar9);
    }
    local_res8 = (float)((int)local_res8 + 1);
    if (3 < (int)local_res8) {
      *local_res20 = fVar14;
      return true;
    }
  } while( true );
}

