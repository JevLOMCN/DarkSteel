// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b46d5b0

UClass * __cdecl UDS_ConstructionManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConstructionManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConstructionManager",
               &Z_Registration_Info_UClass_UDS_ConstructionManager.InnerSingleton,
               StaticRegisterNativesUDS_ConstructionManager,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConstructionManager>,
               InternalVTableHelperCtorCaller<UDS_ConstructionManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConstructionManager.InnerSingleton;
}

// UDS_ConstructionManager @ 14b471350

UDS_ConstructionManager * __thiscall
UDS_ConstructionManager::UDS_ConstructionManager
          (UDS_ConstructionManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConstructionManager__6B_;
  (this->GridSystem).field0_0x0.DebugPtr = (UDS_GridSystem *)0x0;
  (this->InputSystem).field0_0x0.DebugPtr = (UDS_InputSystem *)0x0;
  (this->BuildingActor).field0_0x0.DebugPtr = (ADS_BuildingActor *)0x0;
  (this->ConstructPPE).field0_0x0.DebugPtr = (UDS_PostProcessEffectConstruct *)0x0;
  *(undefined8 *)&this->ConstructedBuildingActors = 0;
  *(undefined8 *)&(this->ConstructedBuildingActors).field_0x8 = 0;
  *(undefined8 *)&(this->ConstructedBuildingActors).field_0x20 = 0;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x28 = 0;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x34 = 0;
  *(undefined8 *)&(this->ConstructedBuildingActors).field_0x40 = 0;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x48 = 0;
  (this->BuildingInfo).Path.ComparisonIndex = 0;
  (this->BuildingInfo).Path.Number = 0;
  this->BuildableType = None;
  this->IsConstructionMode = false;
  *(undefined8 *)&(this->BuildingInfo).GridIndex.field0_0x0 = IntVectorMax.field0_0x0._0_8_;
  (this->BuildingInfo).GridIndex.field0_0x0._s_0.Z = IntVectorMax.field0_0x0._s_0.Z;
  (this->BuildingInfo).LocalIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildingInfo).LocalIndices.ArrayNum = 0;
  (this->BuildingInfo).LocalIndices.ArrayMax = 0;
  *(undefined8 *)&(this->PrevGridIndex).field0_0x0 = IntVectorMax.field0_0x0._0_8_;
  (this->PrevGridIndex).field0_0x0._s_0.Z = IntVectorMax.field0_0x0._s_0.Z;
  (this->ConstructionDataAsset).field0_0x0.DebugPtr = (UDS_ConstructionDataAsset *)0x0;
  return this;
}

// UDS_ConstructionManager @ 14b471420

UDS_ConstructionManager * __thiscall
UDS_ConstructionManager::UDS_ConstructionManager
          (UDS_ConstructionManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConstructionManager__6B_;
  (this->GridSystem).field0_0x0.DebugPtr = (UDS_GridSystem *)0x0;
  (this->InputSystem).field0_0x0.DebugPtr = (UDS_InputSystem *)0x0;
  (this->BuildingActor).field0_0x0.DebugPtr = (ADS_BuildingActor *)0x0;
  (this->ConstructPPE).field0_0x0.DebugPtr = (UDS_PostProcessEffectConstruct *)0x0;
  *(undefined8 *)&this->ConstructedBuildingActors = 0;
  *(undefined8 *)&(this->ConstructedBuildingActors).field_0x8 = 0;
  *(undefined8 *)&(this->ConstructedBuildingActors).field_0x20 = 0;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x28 = 0;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x34 = 0;
  *(undefined8 *)&(this->ConstructedBuildingActors).field_0x40 = 0;
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x48 = 0;
  (this->BuildingInfo).Path.ComparisonIndex = 0;
  (this->BuildingInfo).Path.Number = 0;
  this->BuildableType = None;
  this->IsConstructionMode = false;
  *(undefined8 *)&(this->BuildingInfo).GridIndex.field0_0x0 = IntVectorMax.field0_0x0._0_8_;
  (this->BuildingInfo).GridIndex.field0_0x0._s_0.Z = IntVectorMax.field0_0x0._s_0.Z;
  (this->BuildingInfo).LocalIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildingInfo).LocalIndices.ArrayNum = 0;
  (this->BuildingInfo).LocalIndices.ArrayMax = 0;
  *(undefined8 *)&(this->PrevGridIndex).field0_0x0 = IntVectorMax.field0_0x0._0_8_;
  (this->PrevGridIndex).field0_0x0._s_0.Z = IntVectorMax.field0_0x0._s_0.Z;
  (this->ConstructionDataAsset).field0_0x0.DebugPtr = (UDS_ConstructionDataAsset *)0x0;
  return this;
}

// ~UDS_ConstructionManager @ 14b472b00

void __thiscall UDS_ConstructionManager::~UDS_ConstructionManager(UDS_ConstructionManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_ConstructionManager__6B_;
  pFVar1 = (this->BuildingInfo).LocalIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ConstructedBuildingActors).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ConstructedBuildingActors).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstructedBuildingActors);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4763c0

UClass * __cdecl UDS_ConstructionManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConstructionManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConstructionManager",
               &Z_Registration_Info_UClass_UDS_ConstructionManager.InnerSingleton,
               StaticRegisterNativesUDS_ConstructionManager,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConstructionManager>,
               InternalVTableHelperCtorCaller<UDS_ConstructionManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConstructionManager.InnerSingleton;
}

// StaticRegisterNativesUDS_ConstructionManager @ 14b476ed0

void __cdecl UDS_ConstructionManager::StaticRegisterNativesUDS_ConstructionManager(void)

{
  return;
}

// ClampWorldLocation @ 14ba975e0

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

TVector<double> * __thiscall
UDS_ConstructionManager::ClampWorldLocation
          (UDS_ConstructionManager *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  UWorld *this_00;
  FName *pFVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStackY_2c8 [32];
  FName local_268;
  FCollisionObjectQueryParams local_260;
  TVector<double>_u_0 local_258;
  undefined4 uStack_240;
  undefined1 uStack_23c;
  undefined2 uStack_23b;
  undefined1 uStack_239;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  undefined1 local_208 [164];
  int local_164;
  byte local_15b;
  FWeakObjectPtr local_150;
  FWeakObjectPtr FStack_148;
  IActorInstanceManagerInterface *local_140;
  undefined8 uStack_138;
  FCollisionQueryParams local_108;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar3 = TryGetMainPlayerLocation(this,(TVector<double> *)&local_258._s_0);
  if (bVar3) {
    dVar5 = (param_1->field0_0x0)._s_0.X;
    bVar3 = false;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    iVar2 = this->MaxDistance;
    fVar7 = (float)dVar1;
    fVar8 = (float)(param_1->field0_0x0)._s_0.Z;
    fVar6 = (float)(dVar1 - local_258._s_0.Y);
    if ((float)(dVar5 - local_258._s_0.X) <= (float)iVar2) {
      if ((float)(dVar5 - local_258._s_0.X) < (float)-iVar2) {
        dVar5 = (local_258._s_0.X - (double)iVar2) +
                (double)((this->GridSystem).field0_0x0.DebugPtr)->HalfCellSize;
        goto LAB_14ba976da;
      }
    }
    else {
      dVar5 = ((double)iVar2 + local_258._s_0.X) -
              (double)((this->GridSystem).field0_0x0.DebugPtr)->HalfCellSize;
LAB_14ba976da:
      bVar3 = true;
    }
    if (fVar6 <= (float)iVar2) {
      if ((float)-iVar2 <= fVar6) {
        if (!bVar3) goto LAB_14ba979bd;
      }
      else {
        fVar7 = (float)((local_258._s_0.Y - (double)iVar2) +
                       (double)((this->GridSystem).field0_0x0.DebugPtr)->HalfCellSize);
      }
    }
    else {
      fVar7 = (float)(((double)iVar2 + local_258._s_0.Y) -
                     (double)((this->GridSystem).field0_0x0.DebugPtr)->HalfCellSize);
    }
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if (this_00 != (UWorld *)0x0) {
      local_220._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      local_238._s_0.Z = local_258._s_0.Z - __real_40c3880000000000;
      local_238._s_0.X = (double)(float)dVar5;
      local_238._s_0.Y = (double)fVar7;
      local_220._s_0.X = local_238._s_0.X;
      local_220._s_0.Y = local_238._s_0.Y;
      memset(local_208,0,0x100);
      uStack_23b = 0;
      local_108.TraceTag.ComparisonIndex.Value = 0;
      local_108.TraceTag.Number = 0;
      uStack_239 = 0;
      local_258._s_0.Z = 0.0;
      uStack_240 = 0xffffffff;
      uStack_23c = 0;
      local_150.ObjectIndex = 0;
      local_150.ObjectSerialNumber = 0;
      FStack_148.ObjectIndex = 0;
      FStack_148.ObjectSerialNumber = 0;
      local_208._4_4_ = 1.0;
      uStack_138._0_4_ = -1;
      uStack_138._4_1_ = Invalid;
      uStack_138._5_3_ = 0;
      local_140 = (IActorInstanceManagerInterface *)0x0;
      local_164 = -1;
      local_260.IgnoreMask = '\0';
      local_260.ObjectTypesToQuery = 1;
      local_108.OwnerTag.ComparisonIndex.Value = 0;
      local_108.OwnerTag.Number = 0;
      local_108.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
      ;
      local_108.IgnoreComponents.ArrayNum = 0;
      local_108.IgnoreComponents.ArrayMax = 8;
      local_108.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)0x0;
      local_108.IgnoreSourceObjects.ArrayNum = 0;
      local_108.IgnoreSourceObjects.ArrayMax = 4;
      local_108.bTraceComplex = false;
      local_108.bFindInitialOverlaps = true;
      local_108.bReturnFaceIndex = false;
      local_108.bReturnPhysicalMaterial = false;
      local_108.MobilityType = Any;
      local_268.ComparisonIndex.Value = 0;
      local_268.Number = 0;
      local_108.bComponentListUnique = true;
      local_108.IgnoreMask = '\0';
      local_108.bIgnoreBlocks = false;
      local_108.bIgnoreTouches = false;
      local_108.bSkipNarrowPhase = false;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::
           __l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2
         ::_thread_safe_static_guard_0__ == -1)) {
        `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2
        ::StatPtr_UnknownSceneQuery =
             (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
              )0x0;
        pFVar4 = ::FName::FName(&local_268,"UnknownSceneQuery");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                    ::__l2::StatPtr_UnknownSceneQuery,*pFVar4,L"UnknownSceneQuery",
                   "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,
                   false,MCR_Invalid);
        _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_108.StatId.StatIdPtr =
           (TStatIdData *)
           `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::
           __l2::StatPtr_UnknownSceneQuery;
      if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::
          __l2::StatPtr_UnknownSceneQuery ==
          (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
           )0x0) {
        pFVar4 = ::FName::FName(&local_268,"UnknownSceneQuery");
        local_108.StatId.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                         ::__l2::StatPtr_UnknownSceneQuery,*pFVar4,L"UnknownSceneQuery",
                        "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,
                        true,false,MCR_Invalid);
      }
      local_108.bDebugQuery = false;
      local_108.bTraceIntoSubComponents = true;
      local_108.bReplaceHitWithSubComponents = true;
      FCollisionQueryParams::AddIgnoredActor
                (&local_108,(AActor *)(this->BuildingActor).field0_0x0.DebugPtr);
      bVar3 = UWorld::LineTraceSingleByObjectType
                        (this_00,(FHitResult *)local_208,(TVector<double> *)&local_220._s_0,
                         (TVector<double> *)&local_238._s_0,&local_260,&local_108);
      if ((bVar3) && ((local_15b & 1) != 0)) {
        fVar8 = (float)(double)local_208._56_8_;
      }
      if (local_108.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_108.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_108.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_108.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar8;
  }
  else {
LAB_14ba979bd:
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// Destroyed @ 14ba9e5a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ConstructionManager::Destroyed(UDS_ConstructionManager *this)

{
  ADS_BuildingActor *this_00;
  
  this_00 = (this->BuildingActor).field0_0x0.DebugPtr;
  if (this_00 != (ADS_BuildingActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->BuildingActor).field0_0x0.DebugPtr = (ADS_BuildingActor *)0x0;
  }
  return;
}

// GetBuildingActor @ 14baa4e50

TObjectPtr<ADS_BuildingActor> __thiscall
UDS_ConstructionManager::GetBuildingActor(UDS_ConstructionManager *this,TIntVector3<int> *param_1)

{
  TObjectPtr<ADS_BuildingActor> TVar1;
  uint uVar2;
  int iVar3;
  TObjectPtr<ADS_BuildingActor>_u_0 *pTVar4;
  TIntVector3<int> *in_R8;
  
  uVar2 = FCrc::MemCrc_DEPRECATED(in_R8,0xc,0);
  iVar3 = TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Math::TIntVector3<int>_>
                    ((TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,0>,FDefaultSetAllocator>
                      *)&this->ConstructedBuildingActors,uVar2,in_R8);
  if (iVar3 == -1) {
    *(undefined8 *)&param_1->field0_0x0 = 0;
  }
  else {
    pTVar4 = &TMapBase<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,0>_>
              ::FindChecked((TMapBase<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,0>_>
                             *)&this->ConstructedBuildingActors,in_R8)->field0_0x0;
    TVar1.field0_0x0 = (TObjectPtr<ADS_BuildingActor>_u_0)pTVar4->DebugPtr;
    *(TObjectPtr<ADS_BuildingActor>_u_0 *)&param_1->field0_0x0 = TVar1.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.field0_0x0 != (ADS_BuildingActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      return (TObjectPtr<ADS_BuildingActor>)(TObjectPtr<ADS_BuildingActor>_u_0)param_1;
    }
  }
  return (TObjectPtr<ADS_BuildingActor>)(TObjectPtr<ADS_BuildingActor>_u_0)param_1;
}

// GetInst @ 14baab4d0

UDS_ConstructionManager * __cdecl UDS_ConstructionManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ConstructionManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_ConstructionManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_ConstructionManager_NoRegister();
  pUVar3 = (UDS_ConstructionManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ConstructionManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ConstructionManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_ConstructionManager *)0x0;
}

// Init @ 14bab3ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_ConstructionManager::Init(UDS_ConstructionManager *this)

{
  int iVar1;
  UClass *pUVar2;
  UDS_GridSystem *pUVar3;
  UDS_InputSystem *pUVar4;
  UDS_ConstructionDataAsset *pUVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  TStringView<wchar_t> local_c8;
  FSoftObjectPath local_b8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_GridSystem_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = this;
  pUVar3 = (UDS_GridSystem *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_GridSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->GridSystem).field0_0x0.DebugPtr = pUVar3;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_InputSystem_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = this;
  pUVar4 = (UDS_InputSystem *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_InputSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->InputSystem).field0_0x0.DebugPtr = pUVar4;
  iVar1 = DS_CommonDataHelper::ConstructionMaxDistance();
  local_c8.Size = 0x3a;
  this->MaxDistance = iVar1;
  local_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.PackageName.Number = 0;
  local_c8.DataPtr = L"/Game/Datas/Construction/ConstructionData.ConstructionData";
  local_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.AssetName.Number = 0;
  local_b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SubPathString.Data.ArrayNum = 0;
  local_b8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_b8,&local_c8);
  pUVar5 = (UDS_ConstructionDataAsset *)
           FSoftObjectPath::TryLoad(&local_b8,(FUObjectSerializeContext *)0x0);
  if (pUVar5 != (UDS_ConstructionDataAsset *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ConstructionDataAsset_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14bab3c54;
  }
  pUVar5 = (UDS_ConstructionDataAsset *)0x0;
LAB_14bab3c54:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UDS_ConstructionDataAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ConstructionDataAsset).field0_0x0.DebugPtr = pUVar5;
  if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnConstruct @ 14babf1f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UDS_ConstructionManager::OnConstruct(UDS_ConstructionManager *this)

{
  TObjectPtr<ADS_BuildingActor> *pTVar1;
  ADS_BuildingActor *pAVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool local_res8 [16];
  int local_58;
  int iStack_54;
  int local_50;
  double local_48;
  TVector<double>_u_0 local_40;
  
  pAVar2 = (this->BuildingActor).field0_0x0.DebugPtr;
  pTVar1 = &this->BuildingActor;
  if (pAVar2 != (ADS_BuildingActor *)0x0) {
    local_48 = (pAVar2->EndLocation).field0_0x0._s_0.Z;
    dVar4 = (pAVar2->EndLocation).field0_0x0._s_0.X;
    dVar5 = (pAVar2->EndLocation).field0_0x0._s_0.Y;
    local_40._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_40._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_40._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    bVar6 = TryGetMainPlayerLocation(this,(TVector<double> *)&local_40._s_0);
    if (bVar6) {
      dVar11 = local_40._s_0.X - dVar4;
      if (((float)this->MaxDistance <
           (float)(double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
         || (dVar11 = local_40._s_0.Y - dVar5,
            (float)this->MaxDistance <
            (float)(double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
         ) {
        local_40._s_0.X = 0.0;
        local_40._s_0.Y = 0.0;
        local_40._s_0.Z = (double)((ulonglong)local_40._s_0.Z & 0xffffffff00000000);
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0x493e2,Alert_None_01,
                   (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                    *)&local_40._s_0);
        local_res8[0] = false;
        ADS_BuildingActor::SetConstruct((pTVar1->field0_0x0).DebugPtr,local_res8);
        return;
      }
      local_res8[0] = this->BuildableType == Buildable;
      if (local_res8[0]) {
        dVar11 = __real_3ff0000000000000 /
                 (double)((this->GridSystem).field0_0x0.DebugPtr)->CellSize;
        fVar14 = (float)((local_48 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) *
                        dVar11);
        fVar12 = (float)((dVar4 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) * dVar11)
        ;
        fVar13 = (float)((dVar5 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) * dVar11)
        ;
        local_58 = (int)ROUND((fVar12 + fVar12) - __real_3f000000) >> 1;
        iStack_54 = (int)ROUND((fVar13 + fVar13) - __real_3f000000) >> 1;
        local_50 = (int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1;
        uVar7 = FCrc::MemCrc_DEPRECATED(&local_58,0xc,0);
        if (*(int *)&(this->ConstructedBuildingActors).field_0x8 !=
            *(int *)&(this->ConstructedBuildingActors).field_0x34) {
          puVar9 = *(undefined1 **)&(this->ConstructedBuildingActors).field_0x40;
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &(this->ConstructedBuildingActors).field_0x38;
          }
          iVar10 = *(int *)(puVar9 + (ulonglong)
                                     (*(int *)&(this->ConstructedBuildingActors).field_0x48 - 1U &
                                     uVar7) * 4);
          if (iVar10 != -1) {
            lVar3 = *(longlong *)&this->ConstructedBuildingActors;
            do {
              lVar8 = (longlong)iVar10 * 0x20;
              if (((*(int *)(lVar8 + lVar3) == local_58) &&
                  (*(int *)(lVar8 + 4 + lVar3) == iStack_54)) &&
                 (*(int *)(lVar8 + 8 + lVar3) == local_50)) {
                if (iVar10 != -1) {
                  return;
                }
                break;
              }
              iVar10 = *(int *)(lVar8 + 0x18 + lVar3);
            } while (iVar10 != -1);
          }
        }
        local_40._s_0.X = (double)&local_58;
        local_40._8_8_ = pTVar1;
        TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Math::TIntVector3<int>_&,TObjectPtr<ADS_BuildingActor>_&>_>
                  ((TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,0>,FDefaultSetAllocator>
                    *)&this->ConstructedBuildingActors,
                   (TPairInitializer<UE::Math::TIntVector3<int>_&,TObjectPtr<ADS_BuildingActor>_&> *
                   )(local_res8 + 8),(bool *)&local_40);
        ADS_BuildingActor::SetConstruct((pTVar1->field0_0x0).DebugPtr,local_res8);
        pAVar2 = (pTVar1->field0_0x0).DebugPtr;
        *(ulonglong *)&(pAVar2->Info).GridIndex.field0_0x0 = CONCAT44(iStack_54,local_58);
        (pAVar2->Info).GridIndex.field0_0x0._s_0.Z = local_50;
        if ((this->BuildingInfo).ConstructType == FitBoxel) {
          SpawnActor(this,&(this->BuildingInfo).Path);
          (**(code **)(this->_padding_ + 0x2d0))(this);
        }
      }
    }
  }
  return;
}

// Reset @ 14bac9650

void __thiscall UDS_ConstructionManager::Reset(UDS_ConstructionManager *this)

{
  undefined8 uVar1;
  
  this->BuildableType = None;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevMousePos).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevMousePos).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevMousePos).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->PrevGridIndex).field0_0x0 = IntVectorMax.field0_0x0._0_8_;
  (this->PrevGridIndex).field0_0x0._s_0.Z = IntVectorMax.field0_0x0._s_0.Z;
  return;
}

// SetBuildingActor @ 14bacaa80

void __thiscall
UDS_ConstructionManager::SetBuildingActor
          (UDS_ConstructionManager *this,TObjectPtr<ADS_BuildingActor> param_1)

{
  ADS_BuildingActor *pAVar1;
  UDS_GridSystem *this_00;
  
  if (*(UObject **)param_1.field0_0x0 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
    }
    pAVar1 = *(ADS_BuildingActor **)param_1.field0_0x0;
    (this->BuildingActor).field0_0x0.DebugPtr = pAVar1;
    this_00 = (this->GridSystem).field0_0x0.DebugPtr;
    if (this_00 != (UDS_GridSystem *)0x0) {
      UDS_GridSystem::SetBuildingActor(this_00,pAVar1);
    }
  }
  return;
}

// SetBuildingActorColor @ 14bacaad0

void __thiscall
UDS_ConstructionManager::SetBuildingActorColor(UDS_ConstructionManager *this,FLinearColor *param_1)

{
  ADS_BuildingActor *this_00;
  
  this_00 = (this->BuildingActor).field0_0x0.DebugPtr;
  if (this_00 != (ADS_BuildingActor *)0x0) {
    ADS_BuildingActor::SetMaterialParameter(this_00,param_1,__real_3f000000);
    return;
  }
  return;
}

// SetBuildingLocation @ 14bacaaf0

void __thiscall
UDS_ConstructionManager::SetBuildingLocation(UDS_ConstructionManager *this,TVector<double> *param_1)

{
  ADS_BuildingActor *pAVar1;
  longlong lVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pAVar1 = (this->BuildingActor).field0_0x0.DebugPtr;
  if (pAVar1 != (ADS_BuildingActor *)0x0) {
    dVar3 = (pAVar1->StartLocation).field0_0x0._s_0.X -
            UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar4 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
          (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
        (dVar3 = (pAVar1->StartLocation).field0_0x0._s_0.Y -
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
        uVar4 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
        (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
       (dVar3 = (pAVar1->StartLocation).field0_0x0._s_0.Z -
                UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar4 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) {
      lVar2 = pAVar1->_padding_;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (lVar2 != 0) {
        uVar8 = *(double *)(lVar2 + 0x220);
        uVar6 = *(double *)(lVar2 + 0x210);
        uVar7 = *(double *)(lVar2 + 0x218);
      }
      (pAVar1->StartLocation).field0_0x0._s_0.X = (double)uVar6;
      (pAVar1->StartLocation).field0_0x0._s_0.Y = (double)uVar7;
      (pAVar1->StartLocation).field0_0x0._s_0.Z = (double)uVar8;
    }
    else {
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      (pAVar1->StartLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
      (pAVar1->StartLocation).field0_0x0._s_0.Y = dVar3;
      (pAVar1->StartLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    }
    pAVar1->IsMoveAnimation = true;
    pAVar1->ElapsedTime = 0.0;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    (pAVar1->EndLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (pAVar1->EndLocation).field0_0x0._s_0.Y = dVar3;
    (pAVar1->EndLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    return;
  }
  return;
}

// SetConstructionMode @ 14bacac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_ConstructionManager::SetConstructionMode
          (UDS_ConstructionManager *this,bool *param_1,int *param_2)

{
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  UDS_InputSystem *pUVar2;
  UDS_GridSystem *pUVar3;
  UDS_ConstructionDataAsset *pUVar4;
  FScriptContainerElement *pFVar5;
  ADS_BuildingActor *pAVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  bool bVar10;
  UDS_GameInstance *this_00;
  UClass *pUVar11;
  UDS_ManagerBase *pUVar12;
  UDS_WindowManager *pUVar13;
  ADS_PlayerController *this_01;
  EDS_InputControlType EVar14;
  int iVar15;
  undefined1 auStackY_1e8 [32];
  bool local_1a8;
  bool local_1a7 [3];
  float local_1a4;
  uint local_1a0 [3];
  float local_194;
  uint local_190 [2];
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  FDS_BuildingInfo local_178;
  undefined8 local_138;
  undefined8 local_120;
  undefined8 local_108 [2];
  FDS_BuildingInfo local_f8;
  FName local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  undefined8 local_80;
  FName local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this->IsConstructionMode = *param_1;
  if (*param_1 == false) {
    pUVar13 = UDS_WindowManager::GetInst();
    if (pUVar13 != (UDS_WindowManager *)0x0) {
      local_194 = 0.0;
      local_190[0] = 0;
      UDS_WindowManager::CloseWindow(pUVar13,CheatKey,local_190,&local_194);
    }
    pUVar2 = (this->InputSystem).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_InputSystem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar3 = (this->GridSystem).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UDS_GridSystem *)0x0) goto LAB_14bacafd5;
    }
    else if (pUVar3 != (UDS_GridSystem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14bacafd5:
      UDS_GridSystem::Reset(pUVar3);
    }
    if (pUVar2 != (UDS_InputSystem *)0x0) {
      UDS_InputSystem::Reset(pUVar2);
    }
    uVar9 = IntVectorMax.field0_0x0._s_0.Z;
    uVar8 = IntVectorMax.field0_0x0._0_8_;
    pTVar1 = &(this->BuildingInfo).LocalIndices;
    local_120 = 0;
    (this->BuildingInfo).Path.ComparisonIndex = 0;
    (this->BuildingInfo).Path.Number = 0;
    (this->BuildingInfo).Rotation = 0;
    *(undefined8 *)&(this->BuildingInfo).Size.field0_0x0 = 0;
    *(undefined8 *)&(this->BuildingInfo).GridIndex.field0_0x0 = uVar8;
    local_138 = 0;
    (this->BuildingInfo).Size.field0_0x0._s_0.Z = 0;
    (this->BuildingInfo).ConstructType = UpperSurface;
    (this->BuildingInfo).AttachableFaceType = 0;
    (this->BuildingInfo).GridIndex.field0_0x0._s_0.Z = uVar9;
    (this->BuildingInfo).CenterIndex = 0;
    if (pTVar1 != (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)local_108) {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->BuildingInfo).LocalIndices.ArrayNum = 0;
      (this->BuildingInfo).LocalIndices.ArrayMax = 0;
    }
    pAVar6 = (this->BuildingActor).field0_0x0.DebugPtr;
    if (pAVar6 != (ADS_BuildingActor *)0x0) {
      AActor::Destroy((AActor *)pAVar6,false,true);
      (this->BuildingActor).field0_0x0.DebugPtr = (ADS_BuildingActor *)0x0;
    }
    ADS_PlayerController::GetPlayerController();
    bVar10 = FWeakObjectPtr::IsValid(&local_180);
    if (!bVar10) goto LAB_14bacb0c8;
    this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_180);
    EVar14 = ActionMode;
  }
  else {
    this_00 = UDS_GameInstance::GetInst();
    if (this_00 != (UDS_GameInstance *)0x0) {
      pUVar11 = Z_Construct_UClass_UDS_ContentManager_NoRegister();
      pUVar12 = UDS_GameInstance::GetManager(this_00,(FName)pUVar11->_padding_);
      if (pUVar12 == (UDS_ManagerBase *)0x0) {
LAB_14bacad10:
        pUVar12 = (UDS_ManagerBase *)0x0;
      }
      else {
        pUVar11 = Z_Construct_UClass_UDS_ContentManager_NoRegister();
        iVar15 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar15) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
            &pUVar11->_padding_)) goto LAB_14bacad10;
      }
      if ((pUVar12 != (UDS_ManagerBase *)0x0) &&
         ((UDS_ContentsController *)pUVar12[8]._padding_ != (UDS_ContentsController *)0x0)) {
        UDS_ContentsController::CloseContent((UDS_ContentsController *)pUVar12[8]._padding_);
      }
    }
    pUVar13 = UDS_WindowManager::GetInst();
    if (pUVar13 != (UDS_WindowManager *)0x0) {
      local_1a4 = 0.0;
      local_1a0[0] = 0;
      UDS_WindowManager::CloseWindow(pUVar13,CheatKey,local_1a0,&local_1a4);
    }
    pUVar2 = (this->InputSystem).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_InputSystem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar3 = (this->GridSystem).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UDS_GridSystem *)0x0) goto LAB_14bacad93;
    }
    else if (pUVar3 != (UDS_GridSystem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14bacad93:
      UDS_GridSystem::Init(pUVar3);
    }
    if (pUVar2 != (UDS_InputSystem *)0x0) {
      UDS_InputSystem::Init(pUVar2);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&local_f8.Path,
                     "/Game/BGs/BG_Resource/_dummy/Prefab_HousingDummy_001_A_YD.Prefab_HousingDummy_001_A_YD_C"
                    );
      local_f8._16_8_ = ___xmm_00000000000000000000000000000005;
      local_f8.AttachableFaceType = UNK_150b54468;
      local_f8._25_3_ = _UNK_150b54469;
      local_f8.Rotation = _UNK_150b5446c;
      local_f8.GridIndex.field0_0x0._s_0.Z = IntVectorMax.field0_0x0._s_0.Z;
      local_f8.GridIndex.field0_0x0._0_8_ = IntVectorMax.field0_0x0._0_8_;
      local_f8.Size.field0_0x0._s_0.X = 5;
      local_f8.Size.field0_0x0._s_0.Y = 5;
      local_f8.CenterIndex = 0;
      local_f8.LocalIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.LocalIndices.ArrayNum = 0;
      local_f8.LocalIndices.ArrayMax = 0;
      ::FName::FName(&local_b8,
                     "/Game/BGs/BG_Resource/_dummy/Prefab_CubeDummy_001/Prefab_CubeDummy_Rock_001_A.Prefab_CubeDummy_Rock_001_A_C"
                    );
      local_b0 = 1;
      local_9c = 0;
      local_90 = IntVectorMax.field0_0x0._s_0.Z;
      local_8c = 0;
      local_ac = 1;
      local_a8 = 1;
      local_a4 = 1;
      local_a0 = 0x3f;
      local_98 = IntVectorMax.field0_0x0._0_8_;
      local_88 = (void *)0x0;
      local_80 = 0;
      ::FName::FName(&local_78,
                     "/Game/BGs/BG_Resource/_dummy/Prefab_CubeDummy_001/Prefab_CubeDummy_Brick_001_A.Prefab_CubeDummy_Brick_001_A_C"
                    );
      local_5c = 0;
      local_50 = IntVectorMax.field0_0x0._s_0.Z;
      local_70 = 1;
      local_4c = 0;
      local_6c = 1;
      local_68 = 1;
      local_64 = 1;
      local_60 = 0xc;
      local_58 = IntVectorMax.field0_0x0._0_8_;
      local_48 = (void *)0x0;
      local_40 = 0;
      buildingInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      buildingInfos.ArrayNum = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,3,0,&buildingInfos.AllocatorInstance,3,&buildingInfos.ArrayMax);
      ConstructItems<FDS_BuildingInfo,FDS_BuildingInfo,int>
                (buildingInfos.AllocatorInstance.Data,&local_f8,3);
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_f8.LocalIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.LocalIndices.AllocatorInstance.Data);
      }
      atexit(`UDS_ConstructionManager::SetConstructionMode'::__l8::
             _dynamic_atexit_destructor_for__buildingInfos__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*param_2 < 1) ||
       (pUVar4 = (this->ConstructionDataAsset).field0_0x0.DebugPtr,
       pUVar4 == (UDS_ConstructionDataAsset *)0x0)) {
      if ((this->BuildingInfo).Path == (FName)0x0) {
        local_1a0[2] = 0;
        local_1a7[0] = false;
        SetConstructionMode(this,local_1a7,(int *)(local_1a0 + 2));
        return;
      }
    }
    else {
      iVar15 = *param_2 + -1;
      if ((iVar15 < 0) || ((pUVar4->ConstructionDatas).ArrayNum <= iVar15)) {
        if ((this->BuildingInfo).Path == (FName)0x0) {
          local_1a0[1] = 0;
          local_1a8 = false;
          SetConstructionMode(this,&local_1a8,(int *)(local_1a0 + 1));
          return;
        }
      }
      else {
        if (((pUVar4->ConstructionDatas).ArrayNum <= iVar15) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (pUVar4->ConstructionDatas).AllocatorInstance.Data;
        local_178.Size.field0_0x0._0_8_ = ___xmm_00000001000000010000000100000001;
        local_178._16_8_ = _UNK_150631da8;
        local_178.LocalIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.GridIndex.field0_0x0._0_8_ = IntVectorMax.field0_0x0._0_8_;
        local_178.Path = *(FName *)(pFVar5 + (longlong)iVar15 * 0xc);
        local_178.AttachableFaceType =
             *(EDS_AttachableFaceType *)(pFVar5 + (longlong)iVar15 * 0xc + 8);
        local_178.LocalIndices.ArrayNum = 0;
        local_178.LocalIndices.ArrayMax = 0;
        local_178.Rotation = 0;
        local_178.GridIndex.field0_0x0._s_0.Z = IntVectorMax.field0_0x0._s_0.Z;
        local_178.CenterIndex = 0;
        FDS_BuildingInfo::operator=(&this->BuildingInfo,&local_178);
        if (local_178.LocalIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.LocalIndices.AllocatorInstance.Data);
        }
      }
    }
    pAVar6 = (this->BuildingActor).field0_0x0.DebugPtr;
    if (pAVar6 != (ADS_BuildingActor *)0x0) {
      AActor::Destroy((AActor *)pAVar6,false,true);
      (this->BuildingActor).field0_0x0.DebugPtr = (ADS_BuildingActor *)0x0;
      pUVar3 = (this->GridSystem).field0_0x0.DebugPtr;
      if (pUVar3 != (UDS_GridSystem *)0x0) {
        UDS_GridSystem::SetBuildingActor(pUVar3,(ADS_BuildingActor *)0x0);
      }
    }
    SpawnActor(this,&(this->BuildingInfo).Path);
    ADS_PlayerController::GetPlayerController();
    bVar10 = FWeakObjectPtr::IsValid(&local_188);
    if (!bVar10) goto LAB_14bacb0c8;
    this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_188);
    EVar14 = Construction;
  }
  ADS_PlayerController::SetInputControlType(this_01,EVar14,false);
LAB_14bacb0c8:
  (**(code **)(this->_padding_ + 0x2d0))(this);
  return;
}

// SpawnActor @ 14bace960

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

void __thiscall UDS_ConstructionManager::SpawnActor(UDS_ConstructionManager *this,FName *param_1)

{
  int iVar1;
  FName FVar2;
  UDS_GridSystem *this_00;
  UWorld *this_01;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  ADS_BuildingActor *this_02;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_268 [32];
  FName local_228 [2];
  undefined1 local_218 [16];
  FSoftObjectPath local_208;
  FString local_1e8;
  FString local_1d8;
  undefined1 local_1c8 [112];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_01 == (UWorld *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ConstructionManager::SpawnActor",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x172,L"world is nullptr");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  local_228[0] = *param_1;
  pFVar4 = ::FName::ToString(local_228,&local_1e8);
  pFVar4 = FWN_SoftObjectUtils::GetObjectPath(&local_1d8,pFVar4,false);
  local_208.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_208.AssetPath.PackageName.Number = 0;
  local_208.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_208.AssetPath.AssetName.Number = 0;
  local_208.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.SubPathString.Data.ArrayNum = 0;
  local_208.SubPathString.Data.ArrayMax = 0;
  local_218._0_8_ = (pFVar4->Data).AllocatorInstance.Data;
  iVar1 = (pFVar4->Data).ArrayNum;
  local_218._8_4_ = iVar1 + -1;
  if (iVar1 == 0) {
    local_218._8_4_ = 0;
  }
  FSoftObjectPath::SetPath(&local_208,(TStringView<wchar_t> *)local_218);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_208.AssetPath.PackageName == (FName)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14baced1e;
    pUVar3 = UDS_LogManager::GetInst();
    ::FName::ToString(param_1,&local_1e8);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ConstructionManager::SpawnActor",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_158.Ptr,0x179,L"FSoftObjectPath is invalid. path - %s");
    if ((FScriptContainerElement *)local_158._padding_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  else {
    pUVar5 = (UClass *)FSoftObjectPath::TryLoad(&local_208,(FUObjectSerializeContext *)0x0);
    if (pUVar5 != (UClass *)0x0) {
      pUVar6 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_1c8);
        pFVar7 = ::FName::FName(local_228,"BuildingActor");
        FVar2 = *pFVar7;
        FVar8 = (FName)Z_Construct_UClass_ADS_BuildingActor_NoRegister();
        local_1c8._0_8_ =
             MakeUniqueObjectName
                       ((UObject *)local_218,(UClass *)this_01,FVar8,
                        FVar2.ComparisonIndex.Value.Value);
        local_1c8._0_8_ = *(undefined8 *)local_1c8._0_8_;
        local_1c8[0x30] = AlwaysSpawn;
        this_02 = (ADS_BuildingActor *)
                  UWorld::SpawnActor(this_01,pUVar5,&UE::Math::TVector<double>::ZeroVector,
                                     &UE::Math::TRotator<double>::ZeroRotator,
                                     (FActorSpawnParameters *)local_1c8);
        if (this_02 != (ADS_BuildingActor *)0x0) {
          pUVar5 = Z_Construct_UClass_ADS_BuildingActor_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)(this_02->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            pFVar4 = GetTypeName<ADS_BuildingActor>(&local_1e8);
            pwVar11 = L"";
            if ((pFVar4->Data).ArrayNum == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
            }
            pFVar4 = GetFullNameForCastLogError<AActor>(&local_1d8,(AActor *)this_02);
            if ((pFVar4->Data).ArrayNum != 0) {
              pwVar11 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar11,pwVar10);
          }
          ADS_BuildingActor::Init(this_02,&this->BuildingInfo);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (UE::GC::MarkAsReachable((UObject *)this_02),
             UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)this_02);
          }
          (this->BuildingActor).field0_0x0.DebugPtr = this_02;
          this_00 = (this->GridSystem).field0_0x0.DebugPtr;
          if (this_00 != (UDS_GridSystem *)0x0) {
            UDS_GridSystem::SetBuildingActor(this_00,this_02);
          }
        }
        if (local_1c8._64_8_ != 0) {
          plVar9 = (longlong *)(local_1c8 + 0x50);
          if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
            plVar9 = (longlong *)local_1c8._104_8_;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        goto LAB_14baced1e;
      }
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14baced1e;
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ConstructionManager::SpawnActor",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x180,L"classPtr is nullptr.");
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
LAB_14baced1e:
  if (local_208.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// TryGetMainPlayerLocation @ 14bacf360

bool __thiscall
UDS_ConstructionManager::TryGetMainPlayerLocation
          (UDS_ConstructionManager *this,TVector<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar6;
  atomic<unsigned_char> *paVar7;
  int iVar8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TVector<double> local_28;
  
  ADS_MainCharacter::GetMainPlayer();
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    (**(code **)(*(longlong *)&pUVar5[0x29].field_0x10 + 0x78))();
    bVar3 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar3) {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res20);
      pTVar6 = UDS_MovementCore::GetActorLocation(this_00,&local_28);
      dVar2 = (pTVar6->field0_0x0)._s_0.Y;
      (param_1->field0_0x0)._s_0.X = (pTVar6->field0_0x0)._s_0.X;
      (param_1->field0_0x0)._s_0.Y = dVar2;
      (param_1->field0_0x0)._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
      return true;
    }
    iVar8 = 0x1c0;
    paVar7 = &bGEnsureHasExecuted<_1959208323446210112>;
  }
  else {
    iVar8 = 0x1b8;
    paVar7 = &bGEnsureHasExecuted<_1959208323446210120>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ConstructionManager.cpp"
                     ,iVar8,"false");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return false;
}

// Update @ 14bad3150

void __thiscall UDS_ConstructionManager::Update(UDS_ConstructionManager *this,float *param_1)

{
  bool *pbVar1;
  UDS_InputSystem *pUVar2;
  UDS_GridSystem *this_00;
  float fVar3;
  bool bVar4;
  ADS_BuildingActor *pAVar5;
  FLinearColor *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  bool local_res8 [8];
  int local_res18 [2];
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined2 uStack_153;
  undefined1 uStack_151;
  TVector<double>_u_0 local_150;
  undefined1 local_138 [48];
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  int local_94;
  FWeakObjectPtr local_80;
  FWeakObjectPtr FStack_78;
  IActorInstanceManagerInterface *local_70;
  undefined8 uStack_68;
  
  if (this->IsConstructionMode == false) {
    return;
  }
  if ((this->BuildingActor).field0_0x0.DebugPtr == (ADS_BuildingActor *)0x0) {
    return;
  }
  pUVar2 = (this->InputSystem).field0_0x0.DebugPtr;
  if (pUVar2 == (UDS_InputSystem *)0x0) {
    return;
  }
  if ((this->GridSystem).field0_0x0.DebugPtr == (UDS_GridSystem *)0x0) {
    return;
  }
  UDS_InputSystem::OnUpdate(pUVar2,param_1);
  pUVar2 = (this->InputSystem).field0_0x0.DebugPtr;
  pbVar1 = &(pUVar2->InputSystemData).bRightRotation;
  if (((pUVar2->InputSystemData).bLeftRotation != false) || (*pbVar1 != false)) {
    ADS_BuildingActor::OnRotate((this->BuildingActor).field0_0x0.DebugPtr,pbVar1);
  }
  if ((pUVar2->InputSystemData).bConstruction == false) {
    ADS_BuildingActor::SetPreview((this->BuildingActor).field0_0x0.DebugPtr);
    memset(local_138,0,0x100);
    uStack_153 = 0;
    local_80.ObjectIndex = 0;
    local_80.ObjectSerialNumber = 0;
    FStack_78.ObjectIndex = 0;
    FStack_78.ObjectSerialNumber = 0;
    uStack_151 = 0;
    local_170._s_0.Z = 0.0;
    uStack_158 = 0xffffffff;
    uStack_154 = 0;
    uStack_68._0_4_ = -1;
    uStack_68._4_1_ = Invalid;
    uStack_68._5_3_ = 0;
    local_138._4_4_ = 1.0;
    local_94 = -1;
    local_70 = (IActorInstanceManagerInterface *)0x0;
    bVar4 = UDS_InputSystem::TryGetHitResultFromMousePosition
                      ((this->InputSystem).field0_0x0.DebugPtr,&(pUVar2->InputSystemData).MousePos,
                       (FHitResult *)local_138);
    if (bVar4) {
      local_150._8_4_ = SUB84(dStack_108 + dStack_f0,0);
      local_150._0_8_ = (double)local_138._40_8_ + local_f8;
      local_150._12_4_ = (int)((ulonglong)(dStack_108 + dStack_f0) >> 0x20);
      local_150._s_0.Z = local_100 + local_e8;
      ClampWorldLocation(this,(TVector<double> *)&local_170._s_0,(TVector<double> *)&local_150._s_0)
      ;
      this_00 = (this->GridSystem).field0_0x0.DebugPtr;
      (this->PrevMousePos).field0_0x0._s_0.X = local_170._s_0.X;
      (this->PrevMousePos).field0_0x0._s_0.Y = local_170._s_0.Y;
      (this->PrevMousePos).field0_0x0._s_0.Z = local_170._s_0.Z;
      local_188._s_0.X = local_170._s_0.X;
      local_188._s_0.Y = local_170._s_0.Y;
      local_188._s_0.Z = local_170._s_0.Z;
      bVar4 = UDS_GridSystem::TryGetConstructLocation
                        (this_00,(TVector<double> *)&local_170._s_0,&this->BuildingInfo,
                         (TVector<double> *)&local_188._s_0);
      fVar3 = __real_3f000000;
      dVar12 = __real_3ff0000000000000 / (double)((this->GridSystem).field0_0x0.DebugPtr)->CellSize;
      fVar11 = (float)((local_188._s_0.X - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X)
                      * dVar12);
      fVar10 = (float)((local_188._s_0.Y - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)
                      * dVar12);
      iVar9 = (int)ROUND((fVar11 + fVar11) - __real_3f000000) >> 1;
      fVar11 = (float)((local_188._s_0.Z - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)
                      * dVar12);
      iVar7 = (int)ROUND((fVar10 + fVar10) - __real_3f000000) >> 1;
      iVar8 = (int)ROUND((fVar11 + fVar11) - __real_3f000000) >> 1;
      if (bVar4) {
        if ((((this->PrevGridIndex).field0_0x0._s_0.X != iVar9) ||
            ((this->PrevGridIndex).field0_0x0._s_0.Y != iVar7)) ||
           ((this->PrevGridIndex).field0_0x0._s_0.Z != iVar8)) {
          pAVar5 = (this->BuildingActor).field0_0x0.DebugPtr;
          if (pAVar5 != (ADS_BuildingActor *)0x0) {
            ADS_BuildingActor::SetLocation(pAVar5,(TVector<double> *)&local_188._s_0);
          }
          (this->PrevGridIndex).field0_0x0._s_0.X = iVar9;
          (this->PrevGridIndex).field0_0x0._s_0.Y = iVar7;
          (this->PrevGridIndex).field0_0x0._s_0.Z = iVar8;
        }
        if (this->BuildableType == Buildable) goto LAB_14bad345f;
        pAVar5 = (this->BuildingActor).field0_0x0.DebugPtr;
        this->BuildableType = Buildable;
        if (pAVar5 == (ADS_BuildingActor *)0x0) goto LAB_14bad345f;
        pFVar6 = &FLinearColor::White;
      }
      else {
        if ((((this->PrevGridIndex).field0_0x0._s_0.X != iVar9) ||
            ((this->PrevGridIndex).field0_0x0._s_0.Y != iVar7)) ||
           ((this->PrevGridIndex).field0_0x0._s_0.Z != iVar8)) {
          pAVar5 = (this->BuildingActor).field0_0x0.DebugPtr;
          if (pAVar5 != (ADS_BuildingActor *)0x0) {
            ADS_BuildingActor::SetLocation(pAVar5,(TVector<double> *)&local_188._s_0);
          }
          (this->PrevGridIndex).field0_0x0._s_0.X = iVar9;
          (this->PrevGridIndex).field0_0x0._s_0.Y = iVar7;
          (this->PrevGridIndex).field0_0x0._s_0.Z = iVar8;
        }
        if (this->BuildableType == Unbuildable) goto LAB_14bad345f;
        pAVar5 = (this->BuildingActor).field0_0x0.DebugPtr;
        this->BuildableType = Unbuildable;
        if (pAVar5 == (ADS_BuildingActor *)0x0) goto LAB_14bad345f;
        pFVar6 = &FLinearColor::Red;
      }
      ADS_BuildingActor::SetMaterialParameter(pAVar5,pFVar6,fVar3);
    }
  }
  else {
    OnConstruct(this);
  }
LAB_14bad345f:
  TryGetMainPlayerLocation(this,(TVector<double> *)&local_170._s_0);
  if ((pUVar2->InputSystemData).bExitConstructionMode != false) {
    local_res18[0] = 0;
    local_res8[0] = false;
    SetConstructionMode(this,local_res8,local_res18);
  }
  return;
}

