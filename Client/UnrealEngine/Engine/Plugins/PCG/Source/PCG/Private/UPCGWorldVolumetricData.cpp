// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 1498568a0

UClass * __cdecl UPCGWorldVolumetricData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldVolumetricData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldVolumetricData",
               &Z_Registration_Info_UClass_UPCGWorldVolumetricData.InnerSingleton,
               StaticRegisterNativesUPCGWorldVolumetricData,0x318,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGWorldVolumetricData>,
               InternalVTableHelperCtorCaller<UPCGWorldVolumetricData>,local_res8,
               UPCGVolumeData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldVolumetricData.InnerSingleton;
}

// UPCGWorldVolumetricData @ 14988fe30

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UPCGWorldVolumetricData * __thiscall
UPCGWorldVolumetricData::UPCGWorldVolumetricData
          (UPCGWorldVolumetricData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UPCGVolumeData::UPCGVolumeData((UPCGVolumeData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGWorldVolumetricData__6B_;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OriginatingComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OriginatingComponent).WeakPtr,(FObjectPtr)&local_res8);
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  (this->QueryParams).bSearchForOverlap = true;
  (this->ActorFilter).FilterActors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorFilter).FilterActors.ArrayNum = 0;
  (this->ActorFilter).FilterActors.ArrayMax = 0;
  *(undefined8 *)&(this->ActorFilter).CachedFilterActors.Elements = 0;
  *(undefined8 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x34 = 0;
  (this->ActorFilter).CachedFilterActors.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActorFilter).CachedFilterActors.HashSize = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->ActorFilter).CachedFilterActorsLock,4000);
  (this->ActorFilter).CachedFilterActorsDirty = false;
  return this;
}

// UPCGWorldVolumetricData @ 14988ff20

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UPCGWorldVolumetricData * __thiscall
UPCGWorldVolumetricData::UPCGWorldVolumetricData
          (UPCGWorldVolumetricData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UPCGVolumeData::UPCGVolumeData((UPCGVolumeData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGWorldVolumetricData__6B_;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OriginatingComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OriginatingComponent).WeakPtr,(FObjectPtr)&local_res8);
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  (this->QueryParams).bSearchForOverlap = true;
  (this->ActorFilter).FilterActors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorFilter).FilterActors.ArrayNum = 0;
  (this->ActorFilter).FilterActors.ArrayMax = 0;
  *(undefined8 *)&(this->ActorFilter).CachedFilterActors.Elements = 0;
  *(undefined8 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorFilter).CachedFilterActors.Elements.field_0x34 = 0;
  (this->ActorFilter).CachedFilterActors.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActorFilter).CachedFilterActors.HashSize = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->ActorFilter).CachedFilterActorsLock,4000);
  (this->ActorFilter).CachedFilterActorsDirty = false;
  return this;
}

// ~UPCGWorldVolumetricData @ 149891da0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __thiscall UPCGWorldVolumetricData::~UPCGWorldVolumetricData(UPCGWorldVolumetricData *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGWorldVolumetricData__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ActorFilter).CachedFilterActorsLock);
  (this->ActorFilter).CachedFilterActors.HashSize = 0;
  FVar1 = (this->ActorFilter).CachedFilterActors.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActorFilter).CachedFilterActors.Elements);
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)(this->ActorFilter).FilterActors.AllocatorInstance.Data,
             (this->ActorFilter).FilterActors.ArrayNum);
  pFVar2 = (this->ActorFilter).FilterActors.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  this->_padding_ = (longlong)&___7UPCGVolumeData__6B_;
  UPCGVolumeData::ReleaseInternalBodyInstance((UPCGVolumeData *)this);
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// CopyInternal @ 1498a5ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGWorldVolumetricData::CopyInternal(UPCGWorldVolumetricData *this,FPCGContext *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  UPCGSpatialData *pUVar4;
  UObject *pUVar5;
  UPCGWorldVolumetricData *pUVar6;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGWorldVolumetricData *local_res18;
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UPCGSpatialData *)(*pcVar1)();
        return pUVar4;
      }
    }
  }
  else {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pUVar4 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar4;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar5 = GetTransientPackageAsObject();
      pUVar6 = NewObject<UPCGWorldVolumetricData>(pUVar5);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar6 == (UPCGWorldVolumetricData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pUVar4 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar4;
        }
      }
      local_res18 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UPCGWorldVolumetricData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
      goto LAB_1498a5f41;
    }
  }
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UPCGWorldVolumetricData>(pUVar5);
LAB_1498a5f41:
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  pUVar6->_padding_ = this->_padding_;
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar6->_padding_ = this->_padding_;
  pUVar6->_padding_ = lVar2;
  pUVar6->_padding_ = this->_padding_;
  (pUVar6->World).WeakPtr = (this->World).WeakPtr;
  (pUVar6->OriginatingComponent).WeakPtr = (this->OriginatingComponent).WeakPtr;
  FPCGWorldCommonQueryParams::operator=
            ((FPCGWorldCommonQueryParams *)&pUVar6->QueryParams,
             (FPCGWorldCommonQueryParams *)&this->QueryParams);
  (pUVar6->QueryParams).bSearchForOverlap = (this->QueryParams).bSearchForOverlap;
  FPCGWorldCommonQueryParams::Initialize((FPCGWorldCommonQueryParams *)&pUVar6->QueryParams);
  (pUVar6->ActorFilter).CachedFilterActorsDirty = true;
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::operator=
            (&(pUVar6->ActorFilter).FilterActors,&(this->ActorFilter).FilterActors);
  return (UPCGSpatialData *)pUVar6;
}

// CreateBasePointData @ 1498ac960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
UPCGWorldVolumetricData::CreateBasePointData
          (UPCGWorldVolumetricData *this,FPCGContext *param_1,TBox<double> *param_2,
          TSubclassOf<UPCGBasePointData> param_3)

{
  uchar uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TBox<double> *pTVar6;
  UPackage *pUVar7;
  UPCGBasePointData *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  undefined1 auStackY_178 [32];
  UPCGWorldVolumetricData *local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined1 local_125;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_108;
  undefined8 local_100;
  FName local_f8;
  UPackage *local_f0;
  UObject *local_e8;
  TBox<double> local_e0;
  TVector<double>_u_0 local_a8;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar1 = param_2->IsValid;
  local_108 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)this->_padding_;
  local_88 = (undefined4)this->_padding_;
  uStack_84 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uStack_80 = (undefined4)this->_padding_;
  uStack_7c = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_78 = (undefined4)this->_padding_;
  uStack_74 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uStack_70 = (undefined4)this->_padding_;
  uStack_6c = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_68 = (undefined4)this->_padding_;
  uStack_64 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uStack_60 = (undefined4)this->_padding_;
  uStack_5c = *(undefined4 *)((longlong)&this->_padding_ + 4);
  if (uVar1 != '\0') {
    if ((char)this->_padding_ == '\0') {
      local_88 = *(undefined4 *)&(param_2->Min).field0_0x0;
      uStack_84 = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 4);
      uStack_80 = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 8);
      uStack_7c = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 0xc);
      local_78 = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 0x10);
      uStack_74 = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 0x14);
      uStack_70 = *(undefined4 *)&(param_2->Max).field0_0x0;
      uStack_6c = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 4);
      local_68 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 8);
      uStack_64 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0xc);
      uStack_60 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0x10);
      uStack_5c = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0x14);
      local_108._0_1_ = param_2->IsValid;
      local_108._1_1_ = param_2->Pad[0];
      local_108._2_1_ = param_2->Pad[1];
      local_108._3_1_ = param_2->Pad[2];
      local_108._4_1_ = param_2->Pad[3];
      local_108._5_1_ = param_2->Pad[4];
      local_108._6_1_ = param_2->Pad[5];
      local_108._7_1_ = param_2->Pad[6];
    }
    else {
      pTVar6 = UE::Math::TBox<double>::Overlap((TBox<double> *)&this->_padding_,&local_e0,param_2);
      local_88 = *(undefined4 *)&(pTVar6->Min).field0_0x0;
      uStack_84 = *(undefined4 *)((longlong)&(pTVar6->Min).field0_0x0 + 4);
      uStack_80 = *(undefined4 *)((longlong)&(pTVar6->Min).field0_0x0 + 8);
      uStack_7c = *(undefined4 *)((longlong)&(pTVar6->Min).field0_0x0 + 0xc);
      local_78 = *(undefined4 *)((longlong)&(pTVar6->Min).field0_0x0 + 0x10);
      uStack_74 = *(undefined4 *)((longlong)&(pTVar6->Min).field0_0x0 + 0x14);
      uStack_70 = *(undefined4 *)&(pTVar6->Max).field0_0x0;
      uStack_6c = *(undefined4 *)((longlong)&(pTVar6->Max).field0_0x0 + 4);
      local_68 = *(undefined4 *)((longlong)&(pTVar6->Max).field0_0x0 + 8);
      uStack_64 = *(undefined4 *)((longlong)&(pTVar6->Max).field0_0x0 + 0xc);
      uStack_60 = *(undefined4 *)((longlong)&(pTVar6->Max).field0_0x0 + 0x10);
      uStack_5c = *(undefined4 *)((longlong)&(pTVar6->Max).field0_0x0 + 0x14);
      local_108._0_1_ = pTVar6->IsValid;
      local_108._1_1_ = pTVar6->Pad[0];
      local_108._2_1_ = pTVar6->Pad[1];
      local_108._3_1_ = pTVar6->Pad[2];
      local_108._4_1_ = pTVar6->Pad[3];
      local_108._5_1_ = pTVar6->Pad[4];
      local_108._6_1_ = pTVar6->Pad[5];
      local_108._7_1_ = pTVar6->Pad[6];
    }
  }
  if ((char)local_108 == '\0') {
    if ((((char)this->_padding_ == '\0') && (uVar1 == '\0')) && (1 < (byte)LogPCG._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    pUVar7 = GetTransientPackage();
    pUVar10 = (UClass *)0x0;
    local_f0 = pUVar7;
    if (param_1 == (FPCGContext *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749225>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0xa9,"Context != nullptr || IsInGameThread()"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UPCGBasePointData *)(*pcVar4)();
        return pUVar8;
      }
      lVar3 = *(longlong *)param_3.Class.field0_0x0;
      local_f8.ComparisonIndex.Value = 0;
      local_f8.Number = 0;
      if ((lVar3 != 0) &&
         (pUVar9 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar9 != (UClass *)0x0)) {
        iVar2 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar9->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar10 = *(UClass **)param_3.Class.field0_0x0;
        }
      }
      pUVar8 = NewObject<UPCGBasePointData>
                         ((UObject *)pUVar7,pUVar10,local_f8,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    }
    else {
      pUVar8 = FPCGContext::
               NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                         (param_1,&local_f0,
                          (TSubclassOf<UPCGBasePointData> *)param_3.Class.field0_0x0);
    }
    local_138 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_130 = 0;
    local_128 = 0x101;
    local_125 = 0;
    local_120 = (**(code **)(this->_padding_ + 800))(this);
    local_118 = (void *)0x0;
    local_110 = 0;
    local_108 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
    local_100 = 0;
    local_126 = 0;
    (**(code **)(pUVar8->_padding_ + 0x468))(pUVar8,&local_138);
    if ((local_138 != (UPCGWorldVolumetricData *)0x0) && ((char)local_128 != '\0')) {
      (**(code **)(pUVar8->_padding_ + 0x470))(pUVar8,&local_138);
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_108,(int)local_100);
    if (local_108 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_118 != (void *)0x0) {
      FMemory::Free(local_118);
    }
  }
  else {
    local_a8._s_0.X = (double)this->_padding_;
    local_a8._s_0.Y = (double)this->_padding_;
    local_e8 = *(UObject **)param_3.Class.field0_0x0;
    local_a8._s_0.Z = (double)this->_padding_;
    local_90 = 0;
    local_58 = (longlong)local_108;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_e8);
    }
    pUVar8 = PCGVolumeSampler::SampleVolume
                       (param_1,(TSubclassOf<UPCGBasePointData>)&local_e8,
                        (FVolumeSamplerParams *)&local_a8._s_0,(UPCGSpatialData *)this,
                        (UPCGSpatialData *)0x0);
    if (5 < (byte)LogPCG._0_1_) {
      (**(code **)(pUVar8->_padding_ + 0x488))(pUVar8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  return pUVar8;
}

// CreatePointArrayData @ 1498ae6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGWorldVolumetricData::CreatePointArrayData
          (UPCGWorldVolumetricData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointArrayData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId216,"UPCGWorldVolumetricData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGWorldData.cpp"
               ,0xd8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId216);
  }
  local_res20 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UPCGPointArrayData *)
           CreateBasePointData(this,param_1,param_2,(TSubclassOf<UPCGBasePointData>)&local_res20);
  if (pUVar2 == (UPCGPointArrayData *)0x0) {
    pUVar2 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar3 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointArrayData>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// CreatePointData @ 1498af8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGWorldVolumetricData::CreatePointData(UPCGWorldVolumetricData *this,FPCGContext *param_1)

{
  UPCGPointData *pUVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_18 = 0;
  local_17 = 0;
  local_13 = 0;
  local_11 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  pUVar1 = (UPCGPointData *)(**(code **)(this->_padding_ + 0x480))(0,0,&local_48);
  return pUVar1;
}

// CreatePointData @ 1498af940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGWorldVolumetricData::CreatePointData
          (UPCGWorldVolumetricData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId210,"UPCGWorldVolumetricData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGWorldData.cpp"
               ,0xd2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
  }
  local_res20 = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UPCGPointData *)
           CreateBasePointData(this,param_1,param_2,(TSubclassOf<UPCGBasePointData>)&local_res20);
  if (pUVar2 == (UPCGPointData *)0x0) {
    pUVar2 = (UPCGPointData *)0x0;
  }
  else {
    pUVar3 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointData>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 1498bd610

UClass * __cdecl UPCGWorldVolumetricData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldVolumetricData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldVolumetricData",
               &Z_Registration_Info_UClass_UPCGWorldVolumetricData.InnerSingleton,
               StaticRegisterNativesUPCGWorldVolumetricData,0x318,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGWorldVolumetricData>,
               InternalVTableHelperCtorCaller<UPCGWorldVolumetricData>,local_res8,
               UPCGVolumeData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldVolumetricData.InnerSingleton;
}

// Initialize @ 1498ce0d0

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
UPCGWorldVolumetricData::Initialize
          (UPCGWorldVolumetricData *this,UWorld *param_1,TBox<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  UWorld *local_res8 [4];
  
  dVar2 = (param_2->Min).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_2->Min).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar2;
  dVar2 = (param_2->Max).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_2->Min).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar2;
  dVar2 = (param_2->Max).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_2->Max).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = *(longlong *)&param_2->IsValid;
  dVar2 = (param_2->Min).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_2->Min).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar2;
  dVar2 = (param_2->Max).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_2->Min).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar2;
  dVar2 = (param_2->Max).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_2->Max).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = *(longlong *)&param_2->IsValid;
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGWorldData.cpp"
                       ,0xa7,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// IsBounded @ 1498d0d00

bool __thiscall UPCGWorldVolumetricData::IsBounded(UPCGWorldVolumetricData *this)

{
  return (char)this->_padding_ != '\0';
}

// SamplePoint @ 1498dc6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGWorldVolumetricData::SamplePoint
          (UPCGWorldVolumetricData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  long64 lVar10;
  UPCGWorldVolumetricData *pUVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FSoftObjectPath> *this_01;
  UWorld *this_02;
  TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator> *pTVar15;
  FPCGPoint *pFVar16;
  AActor *pAVar17;
  ForAnyElementType FVar18;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStackY_398 [32];
  FCollisionObjectQueryParams local_358;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_350;
  FSoftObjectPath local_338;
  FCollisionShape local_318;
  FSoftObjectPath local_308;
  UPCGWorldVolumetricData *local_2e8;
  FName local_2d8;
  FPCGMetadataDomainID local_2d0;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TQuat<double> local_288;
  double local_268;
  double dStack_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  TOptional<FOverlapResult> local_238;
  FCollisionQueryParams local_1e8;
  FPCGPoint local_158;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_398;
  this_01 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  local_358.ObjectTypesToQuery = 0;
  local_2e8 = this;
  bVar12 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("World.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGWorldData.cpp"
                          ,0xae,L""), bVar12)) {
    pcVar1 = (code *)swi(3);
    uVar13 = (*pcVar1)();
    return (bool)uVar13;
  }
  FVar18.Data = local_308.SubPathString.Data.AllocatorInstance.Data;
  pFVar19 = this_01;
  if ((param_4 != (UPCGMetadata *)0x0) &&
     (*(char *)((longlong)&(this->QueryParams)._padding_ + 1) != '\0')) {
    local_2d8 = PCGPointDataConstants::ActorReferenceAttribute;
    local_2d0.Flag = PCGMetadataDomainID::Default.Flag;
    local_2d0._1_3_ = PCGMetadataDomainID::Default._1_3_;
    local_2d0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    local_2d0.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_308.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_308.AssetPath.PackageName.Number = 0;
    local_308.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_308.AssetPath.AssetName.Number = 0;
    local_308.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.SubPathString.Data.ArrayNum = 0;
    local_308.SubPathString.Data.ArrayMax = 0;
    this_00 = UPCGMetadata::FindOrCreateMetadataDomain(param_4,&local_2d0);
    FVar18.Data = (FScriptContainerElement *)this_01;
    if (this_00 != (FPCGMetadataDomain *)0x0) {
      this_01 = FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                          (this_00,local_2d8,&local_308,true,true,true);
      FVar18.Data = local_308.SubPathString.Data.AllocatorInstance.Data;
    }
    pFVar19 = (FPCGMetadataAttribute<FSoftObjectPath> *)&DAT_00000001;
  }
  if ((pFVar19 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) &&
     ((FPCGMetadataAttribute<FSoftObjectPath> *)FVar18.Data !=
      (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) {
    FMemory::Free(FVar18.Data);
  }
  pUVar11 = local_2e8;
  dVar3 = __real_3fe0000000000000;
  local_268 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_260 = (param_1->Scale3D).XY.m128d_f64[1];
  local_258 = (param_1->Scale3D).ZW.m128d_f64[0];
  local_358.IgnoreMask = '\0';
  local_358.ObjectTypesToQuery =
       1 << (*(byte *)((longlong)&(local_2e8->QueryParams)._padding_ + 2) & 0x1f);
  local_318.ShapeType = Box;
  local_318.field1_0x4.Box.HalfExtentX =
       (float)(((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X) *
               __real_3fe0000000000000 * local_268);
  local_318.field1_0x4.Box.HalfExtentY =
       (float)(((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) *
               __real_3fe0000000000000 * dStack_260);
  local_318.field1_0x4.Box.HalfExtentZ =
       (float)(((param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z) *
               __real_3fe0000000000000 * local_258);
  FCollisionQueryParams::FCollisionQueryParams(&local_1e8);
  local_1e8.bTraceComplex = *(bool *)((longlong)&(pUVar11->QueryParams)._padding_ + 3);
  local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_350.ArrayNum = 0;
  local_350.ArrayMax = 0;
  this_02 = (UWorld *)FWeakObjectPtr::Get(&(pUVar11->World).WeakPtr);
  local_288.X = (param_1->Rotation).XY.m128d_f64[0];
  local_288.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_288.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_288.W = (param_1->Rotation).ZW.m128d_f64[1];
  local_240 = ((param_2->Max).field0_0x0._s_0.Z + (param_2->Min).field0_0x0._s_0.Z) * dVar3;
  local_250 = ((param_2->Min).field0_0x0._s_0.X + (param_2->Max).field0_0x0._s_0.X) * dVar3;
  dStack_248 = ((param_2->Max).field0_0x0._s_0.Y + (param_2->Min).field0_0x0._s_0.Y) * dVar3;
  dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar6 = local_240 * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar27 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar4 = (param_1->Scale3D).XY.m128d_f64[0] * local_250;
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1] * dStack_248;
  uVar28 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_338.AssetPath = *(FTopLevelAssetPath *)(param_1->Rotation).XY.m128d_f64;
  auVar29._8_4_ = SUB84(dVar5,0);
  auVar29._0_8_ = dVar4;
  auVar29._12_4_ = uVar28;
  dVar3 = auVar27._0_8_;
  auVar22 = blendpd((undefined1  [16])local_338.AssetPath,auVar27,2);
  auVar30._0_8_ =
       auVar29._8_8_ * (double)local_338.AssetPath.PackageName -
       (double)local_338.AssetPath.AssetName * dVar4;
  auVar30._8_8_ = dVar6 * (double)local_338.AssetPath.AssetName - dVar3 * dVar5;
  auVar31._8_4_ = SUB84(dVar5,0);
  auVar31._0_8_ = dVar4;
  auVar31._12_4_ = uVar28;
  auVar20._8_4_ = SUB84(dVar7,0);
  auVar20._0_8_ = dVar6;
  auVar20._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar20 = blendpd(auVar31,auVar20,2);
  auVar21._0_8_ = auVar20._0_8_ * dVar3 - auVar22._0_8_ * dVar6;
  auVar21._8_8_ = auVar20._8_8_ * auVar27._8_8_ - auVar22._8_8_ * dVar7;
  auVar31 = blendpd(auVar30,auVar21,2);
  auVar20 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar7 = auVar30._8_8_ + auVar30._8_8_;
  dVar2 = auVar21._0_8_ + auVar21._0_8_;
  uVar28 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar25._8_4_ = SUB84(dVar2,0);
  auVar25._0_8_ = dVar7;
  auVar25._12_4_ = uVar28;
  auVar23._8_4_ = SUB84(dVar2,0);
  auVar23._0_8_ = dVar7;
  auVar23._12_4_ = uVar28;
  auVar31 = blendpd(auVar23,auVar32,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar7;
  auVar26._8_8_ = auVar32._0_8_ * auVar20._8_8_ - dVar3 * dVar2;
  auVar22._8_4_ = SUB84(auVar26._8_8_,0);
  auVar22._0_8_ = auVar26._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  auVar20 = blendpd(auVar20,auVar27,2);
  auVar24._0_8_ = auVar31._0_8_ * dVar3 - auVar20._0_8_ * auVar32._0_8_;
  auVar24._8_8_ = auVar31._8_8_ * auVar27._8_8_ - auVar20._8_8_ * auVar32._8_8_;
  auVar27 = blendpd(auVar26,auVar24,2);
  dVar3 = dVar2 * dVar8 + dVar5 + auVar24._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  local_2b8._s_0.Z =
       auVar32._0_8_ * dVar8 + dVar6 + auVar27._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  local_2b8._8_4_ = SUB84(dVar3,0);
  local_2b8._0_8_ = dVar7 * dVar8 + dVar4 + auVar22._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  local_2b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  UWorld::OverlapMultiByObjectType
            (this_02,&local_350,(TVector<double> *)&local_2b8._s_0,&local_288,&local_358,&local_318,
             &local_1e8);
  pTVar15 = FPCGWorldQueryActorFilterCache::GetCachedFilterActors(&pUVar11->ActorFilter);
  PCGWorldQueryHelpers::FilterOverlapResults
            (&local_238,&pUVar11->QueryParams,
             (TWeakObjectPtr<UPCGComponent,FWeakObjectPtr>)(pUVar11->OriginatingComponent).WeakPtr,
             &local_350,pTVar15);
  if (local_238.bIsSet == (pUVar11->QueryParams).bSearchForOverlap) {
    local_2a0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    local_2a0._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
    local_2a0._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
    iVar14 = UPCGBlueprintHelpers::ComputeSeedFromPosition((TVector<double> *)&local_2a0._s_0);
    pFVar16 = FPCGPoint::FPCGPoint(&local_158,param_1,__real_3f800000,iVar14);
    dVar3 = (pFVar16->Transform).Rotation.XY.m128d_f64[1];
    (param_3->Transform).Rotation.XY.m128d_f64[0] = (pFVar16->Transform).Rotation.XY.m128d_f64[0];
    (param_3->Transform).Rotation.XY.m128d_f64[1] = dVar3;
    dVar3 = (pFVar16->Transform).Rotation.ZW.m128d_f64[1];
    (param_3->Transform).Rotation.ZW.m128d_f64[0] = (pFVar16->Transform).Rotation.ZW.m128d_f64[0];
    (param_3->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (pFVar16->Transform).Translation.XY.m128d_f64[1];
    (param_3->Transform).Translation.XY.m128d_f64[0] =
         (pFVar16->Transform).Translation.XY.m128d_f64[0];
    (param_3->Transform).Translation.XY.m128d_f64[1] = dVar3;
    dVar3 = (pFVar16->Transform).Translation.ZW.m128d_f64[1];
    (param_3->Transform).Translation.ZW.m128d_f64[0] =
         (pFVar16->Transform).Translation.ZW.m128d_f64[0];
    (param_3->Transform).Translation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (pFVar16->Transform).Scale3D.XY.m128d_f64[1];
    (param_3->Transform).Scale3D.XY.m128d_f64[0] = (pFVar16->Transform).Scale3D.XY.m128d_f64[0];
    (param_3->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
    dVar3 = (pFVar16->Transform).Scale3D.ZW.m128d_f64[1];
    (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (pFVar16->Transform).Scale3D.ZW.m128d_f64[0];
    (param_3->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
    uVar28 = *(undefined4 *)&pFVar16->field_0x64;
    dVar3 = (pFVar16->BoundsMin).field0_0x0._s_0.X;
    param_3->Density = pFVar16->Density;
    *(undefined4 *)&param_3->field_0x64 = uVar28;
    (param_3->BoundsMin).field0_0x0._s_0.X = dVar3;
    dVar3 = (pFVar16->BoundsMin).field0_0x0._s_0.Z;
    (param_3->BoundsMin).field0_0x0._s_0.Y = (pFVar16->BoundsMin).field0_0x0._s_0.Y;
    (param_3->BoundsMin).field0_0x0._s_0.Z = dVar3;
    dVar3 = (pFVar16->BoundsMax).field0_0x0._s_0.Y;
    (param_3->BoundsMax).field0_0x0._s_0.X = (pFVar16->BoundsMax).field0_0x0._s_0.X;
    (param_3->BoundsMax).field0_0x0._s_0.Y = dVar3;
    lVar9 = pFVar16->_padding_;
    (param_3->BoundsMax).field0_0x0._s_0.Z = (pFVar16->BoundsMax).field0_0x0._s_0.Z;
    param_3->_padding_ = lVar9;
    dVar3 = (pFVar16->Color).field0_0x0._s_0.Y;
    (param_3->Color).field0_0x0._s_0.X = (pFVar16->Color).field0_0x0._s_0.X;
    (param_3->Color).field0_0x0._s_0.Y = dVar3;
    dVar3 = (pFVar16->Color).field0_0x0._s_0.W;
    (param_3->Color).field0_0x0._s_0.Z = (pFVar16->Color).field0_0x0._s_0.Z;
    (param_3->Color).field0_0x0._s_0.W = dVar3;
    iVar14 = pFVar16->Seed;
    lVar10 = pFVar16->MetadataEntry;
    param_3->Steepness = pFVar16->Steepness;
    param_3->Seed = iVar14;
    param_3->MetadataEntry = lVar10;
    dVar3 = (param_2->Min).field0_0x0._s_0.Y;
    (param_3->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
    (param_3->BoundsMin).field0_0x0._s_0.Y = dVar3;
    (param_3->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
    dVar3 = (param_2->Max).field0_0x0._s_0.Y;
    (param_3->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
    (param_3->BoundsMax).field0_0x0._s_0.Y = dVar3;
    (param_3->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
    if (((local_238.bIsSet != false) && (this_01 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0))
       && (pAVar17 = FActorInstanceHandle::FetchActor((FActorInstanceHandle *)&local_238),
          pAVar17 != (AActor *)0x0)) {
      UPCGMetadata::InitializeOnSet
                (param_4,&param_3->MetadataEntry,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
      if ((local_238.bIsSet == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar1 = (code *)swi(3);
        uVar13 = (*pcVar1)();
        return (bool)uVar13;
      }
      pAVar17 = FActorInstanceHandle::FetchActor((FActorInstanceHandle *)&local_238);
      local_338.AssetPath = (FTopLevelAssetPath)ZEXT816(0);
      local_338.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_338.SubPathString.Data.ArrayNum = 0;
      local_338.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_338,(UObject *)pAVar17);
      FPCGMetadataAttribute<FSoftObjectPath>::SetValue(this_01,param_3->MetadataEntry,&local_338);
      if (local_338.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.AllocatorInstance.Data);
  }
  if (local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1e8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar12;
}

// StaticRegisterNativesUPCGWorldVolumetricData @ 1498f6ba0

void __cdecl UPCGWorldVolumetricData::StaticRegisterNativesUPCGWorldVolumetricData(void)

{
  return;
}

// SupportsBoundedPointData @ 1498f6c90

bool __thiscall UPCGWorldVolumetricData::SupportsBoundedPointData(UPCGWorldVolumetricData *this)

{
  return true;
}

