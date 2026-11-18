// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 21

// StaticClass @ 149856b20

UClass * __cdecl UPCGWorldRayHitData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldRayHitData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldRayHitData",
               &Z_Registration_Info_UClass_UPCGWorldRayHitData.InnerSingleton,
               StaticRegisterNativesUPCGWorldRayHitData,0x430,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGWorldRayHitData>,
               InternalVTableHelperCtorCaller<UPCGWorldRayHitData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldRayHitData.InnerSingleton;
}

// UPCGWorldRayHitData @ 14988fad0

UPCGWorldRayHitData * __thiscall
UPCGWorldRayHitData::UPCGWorldRayHitData(UPCGWorldRayHitData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_res8;
  
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGWorldRayHitData__6B_;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OriginatingComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OriginatingComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  *(undefined8 *)(this->Bounds).Pad = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Y = (double)uVar1;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CollisionShape).SphereRadius = 100.0;
  (this->CollisionShape).CapsuleRadius = 100.0;
  (this->CollisionShape).CapsuleHalfHeight = 100.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CollisionShape).ShapeRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CollisionShape).ShapeRotation.Yaw = dVar2;
  (this->CollisionShape).ShapeRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams(&this->QueryParams);
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
  *(undefined8 *)&(this->CachedLandscapeLayerNames).Elements = 0;
  *(undefined8 *)&(this->CachedLandscapeLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedLandscapeLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedLandscapeLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedLandscapeLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedLandscapeLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedLandscapeLayerNames).Elements.field_0x34 = 0;
  (this->CachedLandscapeLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedLandscapeLayerNames).HashSize = 0;
  return this;
}

// UPCGWorldRayHitData @ 14988fc80

UPCGWorldRayHitData * __thiscall
UPCGWorldRayHitData::UPCGWorldRayHitData(UPCGWorldRayHitData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_res8;
  
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGWorldRayHitData__6B_;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OriginatingComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OriginatingComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  *(undefined8 *)(this->Bounds).Pad = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Y = (double)uVar1;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CollisionShape).SphereRadius = 100.0;
  (this->CollisionShape).CapsuleRadius = 100.0;
  (this->CollisionShape).CapsuleHalfHeight = 100.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CollisionShape).ShapeRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CollisionShape).ShapeRotation.Yaw = dVar2;
  (this->CollisionShape).ShapeRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams(&this->QueryParams);
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
  *(undefined8 *)&(this->CachedLandscapeLayerNames).Elements = 0;
  *(undefined8 *)&(this->CachedLandscapeLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedLandscapeLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedLandscapeLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedLandscapeLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedLandscapeLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedLandscapeLayerNames).Elements.field_0x34 = 0;
  (this->CachedLandscapeLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedLandscapeLayerNames).HashSize = 0;
  return this;
}

// ~UPCGWorldRayHitData @ 149891cd0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __thiscall UPCGWorldRayHitData::~UPCGWorldRayHitData(UPCGWorldRayHitData *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGWorldRayHitData__6B_;
  (this->CachedLandscapeLayerNames).HashSize = 0;
  FVar1 = (this->CachedLandscapeLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedLandscapeLayerNames).Elements);
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
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989e780

void __thiscall
UPCGWorldRayHitData::AddToCrc(UPCGWorldRayHitData *this,FArchiveCrc32 *param_1,bool param_2)

{
  undefined1 local_res8 [8];
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// CopyInternal @ 1498a5ca0

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
UPCGWorldRayHitData::CopyInternal(UPCGWorldRayHitData *this,FPCGContext *param_1)

{
  code *pcVar1;
  longlong lVar2;
  double dVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  bool bVar11;
  UPCGSpatialData *pUVar12;
  UObject *pUVar13;
  UPCGWorldRayHitData *pUVar14;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGWorldRayHitData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar11 = IsInGameThread();
    if (!bVar11) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4331830188552749225>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                          ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar11) {
        pcVar1 = (code *)swi(3);
        pUVar12 = (UPCGSpatialData *)(*pcVar1)();
        return pUVar12;
      }
    }
  }
  else {
    bVar11 = IsInGameThread();
    if (!bVar11) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4331830188552749348>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar11) {
          pcVar1 = (code *)swi(3);
          pUVar12 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar12;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar13 = GetTransientPackageAsObject();
      pUVar14 = NewObject<UPCGWorldRayHitData>(pUVar13);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar14 == (UPCGWorldRayHitData *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0x12a,L"");
        if (bVar11) {
          pcVar1 = (code *)swi(3);
          pUVar12 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar12;
        }
      }
      local_res18[0] = pUVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UPCGWorldRayHitData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a5cfd;
    }
  }
  pUVar13 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UPCGWorldRayHitData>(pUVar13);
LAB_1498a5cfd:
  lVar2 = this->_padding_;
  pUVar14->_padding_ = this->_padding_;
  pUVar14->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar14->_padding_ = this->_padding_;
  pUVar14->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar14->_padding_ = this->_padding_;
  pUVar14->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar14->_padding_ = this->_padding_;
  pUVar14->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar14->_padding_ = this->_padding_;
  pUVar14->_padding_ = lVar2;
  lVar2 = this->_padding_;
  pUVar14->_padding_ = this->_padding_;
  pUVar14->_padding_ = lVar2;
  *(char *)&pUVar14->_padding_ = (char)this->_padding_;
  (pUVar14->World).WeakPtr = (this->World).WeakPtr;
  (pUVar14->OriginatingComponent).WeakPtr = (this->OriginatingComponent).WeakPtr;
  dVar3 = (this->Bounds).Min.field0_0x0._s_0.Y;
  (pUVar14->Bounds).Min.field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (pUVar14->Bounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (pUVar14->Bounds).Min.field0_0x0._s_0.Z = (this->Bounds).Min.field0_0x0._s_0.Z;
  (pUVar14->Bounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (pUVar14->Bounds).Max.field0_0x0._s_0.Y = (this->Bounds).Max.field0_0x0._s_0.Y;
  (pUVar14->Bounds).Max.field0_0x0._s_0.Z = dVar3;
  uVar4 = (this->Bounds).Pad[0];
  uVar5 = (this->Bounds).Pad[1];
  uVar6 = (this->Bounds).Pad[2];
  uVar7 = (this->Bounds).Pad[3];
  uVar8 = (this->Bounds).Pad[4];
  uVar9 = (this->Bounds).Pad[5];
  uVar10 = (this->Bounds).Pad[6];
  (pUVar14->Bounds).IsValid = (this->Bounds).IsValid;
  (pUVar14->Bounds).Pad[0] = uVar4;
  (pUVar14->Bounds).Pad[1] = uVar5;
  (pUVar14->Bounds).Pad[2] = uVar6;
  (pUVar14->Bounds).Pad[3] = uVar7;
  (pUVar14->Bounds).Pad[4] = uVar8;
  (pUVar14->Bounds).Pad[5] = uVar9;
  (pUVar14->Bounds).Pad[6] = uVar10;
  FPCGWorldRayHitQueryParams::operator=(&pUVar14->QueryParams,&this->QueryParams);
  FPCGWorldCommonQueryParams::Initialize((FPCGWorldCommonQueryParams *)&pUVar14->QueryParams);
  (pUVar14->ActorFilter).CachedFilterActorsDirty = true;
  TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::operator=
            (&(pUVar14->ActorFilter).FilterActors,&(this->ActorFilter).FilterActors);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&pUVar14->CachedLandscapeLayerNames,&this->CachedLandscapeLayerNames);
  return (UPCGSpatialData *)pUVar14;
}

// CreateBasePointData @ 1498ac650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UPCGWorldRayHitData::CreateBasePointData
          (UPCGWorldRayHitData *this,FPCGContext *param_1,TBox<double> *param_2,
          TSubclassOf<UPCGBasePointData> param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uchar uVar15;
  int iVar16;
  longlong lVar17;
  code *pcVar18;
  bool bVar19;
  TBox<double> *pTVar20;
  UPackage *pUVar21;
  UPCGBasePointData *pUVar22;
  UClass *pUVar23;
  UClass *pUVar24;
  undefined4 uVar25;
  undefined1 auStackY_178 [32];
  UPackage *local_130;
  UPCGWorldRayHitData *local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined1 local_116;
  undefined1 local_115;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_f8;
  undefined8 local_f0;
  UObject *local_e8;
  FSurfaceSamplerParams local_e0;
  TBox<double> local_b0;
  TVector<double>_u_0 local_78;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined3 uVar7;
  undefined3 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar15 = param_2->IsValid;
  local_78._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  local_78._s_0.Y = (this->Bounds).Min.field0_0x0._s_0.Y;
  local_78._s_0.Z = (this->Bounds).Min.field0_0x0._s_0.Z;
  dStack_60 = (this->Bounds).Max.field0_0x0._s_0.X;
  local_58 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dStack_50 = (this->Bounds).Max.field0_0x0._s_0.Z;
  local_48._0_1_ = (this->Bounds).IsValid;
  local_48._1_1_ = (this->Bounds).Pad[0];
  local_48._2_1_ = (this->Bounds).Pad[1];
  local_48._3_1_ = (this->Bounds).Pad[2];
  local_48._4_1_ = (this->Bounds).Pad[3];
  local_48._5_1_ = (this->Bounds).Pad[4];
  local_48._6_1_ = (this->Bounds).Pad[5];
  local_48._7_1_ = (this->Bounds).Pad[6];
  if (uVar15 != '\0') {
    if ((this->Bounds).IsValid == '\0') {
      local_78._s_0.X = (param_2->Min).field0_0x0._s_0.X;
      local_78._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
      local_78._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
      dStack_60 = (param_2->Max).field0_0x0._s_0.X;
      local_58 = (param_2->Max).field0_0x0._s_0.Y;
      dStack_50 = (param_2->Max).field0_0x0._s_0.Z;
      uVar2._0_1_ = param_2->IsValid;
      uVar2._1_1_ = param_2->Pad[0];
      uVar2._2_1_ = param_2->Pad[1];
      uVar2._3_1_ = param_2->Pad[2];
      uVar4 = param_2->Pad[3];
      uVar6 = param_2->Pad[4];
      uVar10 = param_2->Pad[5];
      uVar14 = param_2->Pad[6];
      uVar12 = CONCAT11(uVar14,uVar10);
      uVar8 = CONCAT21(uVar12,uVar6);
      uVar2._4_4_ = CONCAT31(uVar8,uVar4);
      uVar25 = (undefined4)uVar2;
      uVar1._4_4_ = uVar2._4_4_;
    }
    else {
      pTVar20 = UE::Math::TBox<double>::Overlap(&this->Bounds,&local_b0,param_2);
      local_78._s_0.X = (pTVar20->Min).field0_0x0._s_0.X;
      local_78._s_0.Y = (pTVar20->Min).field0_0x0._s_0.Y;
      local_78._s_0.Z = (pTVar20->Min).field0_0x0._s_0.Z;
      dStack_60 = (pTVar20->Max).field0_0x0._s_0.X;
      local_58 = (pTVar20->Max).field0_0x0._s_0.Y;
      dStack_50 = (pTVar20->Max).field0_0x0._s_0.Z;
      uVar1._0_1_ = pTVar20->IsValid;
      uVar1._1_1_ = pTVar20->Pad[0];
      uVar1._2_1_ = pTVar20->Pad[1];
      uVar1._3_1_ = pTVar20->Pad[2];
      uVar3 = pTVar20->Pad[3];
      uVar5 = pTVar20->Pad[4];
      uVar9 = pTVar20->Pad[5];
      uVar13 = pTVar20->Pad[6];
      uVar11 = CONCAT11(uVar13,uVar9);
      uVar7 = CONCAT21(uVar11,uVar5);
      uVar1._4_4_ = CONCAT31(uVar7,uVar3);
      uVar25 = (undefined4)uVar1;
    }
    local_48 = CONCAT44(uVar1._4_4_,uVar25);
  }
  if ((char)local_48 == '\0') {
    if ((((this->Bounds).IsValid == '\0') && (uVar15 == '\0')) && (1 < (byte)LogPCG._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    pUVar21 = GetTransientPackage();
    pUVar24 = (UClass *)0x0;
    local_130 = pUVar21;
    if (param_1 == (FPCGContext *)0x0) {
      bVar19 = IsInGameThread();
      if ((!bVar19) &&
         (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4331830188552749225>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                              ,0xa9,"Context != nullptr || IsInGameThread()"), bVar19)) {
        pcVar18 = (code *)swi(3);
        pUVar22 = (UPCGBasePointData *)(*pcVar18)();
        return pUVar22;
      }
      lVar17 = *(longlong *)param_3.Class.field0_0x0;
      if ((lVar17 != 0) &&
         (pUVar23 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar23 != (UClass *)0x0)) {
        iVar16 = (int)pUVar23->_padding_;
        if ((*(int *)(lVar17 + 0x38) < iVar16) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar23->_padding_)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if (bVar19) {
          pUVar24 = *(UClass **)param_3.Class.field0_0x0;
        }
      }
      pUVar22 = NewObject<UPCGBasePointData>
                          ((UObject *)pUVar21,pUVar24,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    }
    else {
      pUVar22 = FPCGContext::
                NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                          (param_1,&local_130,
                           (TSubclassOf<UPCGBasePointData> *)param_3.Class.field0_0x0);
    }
    local_128 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_120 = 0;
    local_115 = 0;
    local_110 = (**(code **)(this->_padding_ + 800))(this);
    local_108 = (void *)0x0;
    local_100 = 0;
    local_f8 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
    local_f0 = 0;
    local_118 = 0x101;
    local_116 = 1;
    (**(code **)(pUVar22->_padding_ + 0x468))(pUVar22,&local_128);
    if ((char)local_118 != '\0') {
      (**(code **)(pUVar22->_padding_ + 0x470))(pUVar22,&local_128);
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_f8,(int)local_f0);
    if (local_f8 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_f8);
    }
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
  }
  else {
    local_e8 = *(UObject **)param_3.Class.field0_0x0;
    local_e0.bUseLegacyGridCreationMethod = false;
    local_e0.PointsPerSquaredMeter = 1.0;
    local_e0.Looseness = 0.0;
    local_e0.bApplyDensityToPoints = false;
    local_e0.PointSteepness = 0.0;
    local_e0.PointExtents.field0_0x0._8_4_ =
         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_150689678,0);
    local_e0.PointExtents.field0_0x0._0_8_ =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
         ___xmm_3fe00000000000003fe0000000000000;
    local_e0.PointExtents.field0_0x0._12_4_ =
         (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_150689678)
              >> 0x20);
    local_e0.PointExtents.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
         ___xmm_3fe00000000000003fe0000000000000;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_e8);
    }
    pUVar22 = PCGSurfaceSampler::SampleSurface
                        (param_1,&local_e0,(UPCGSurfaceData *)this,(UPCGSpatialData *)0x0,
                         (TBox<double> *)&local_78._s_0,(TSubclassOf<UPCGBasePointData>)&local_e8);
  }
  return pUVar22;
}

// CreatePointArrayData @ 1498ae5c0

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
UPCGWorldRayHitData::CreatePointArrayData
          (UPCGWorldRayHitData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointArrayData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
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
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// CreatePointData @ 1498af780

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
UPCGWorldRayHitData::CreatePointData(UPCGWorldRayHitData *this,FPCGContext *param_1)

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

// CreatePointData @ 1498af7f0

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
UPCGWorldRayHitData::CreatePointData
          (UPCGWorldRayHitData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
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
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// GetBounds @ 1498b5f40

TBox<double> * __thiscall
UPCGWorldRayHitData::GetBounds(UPCGWorldRayHitData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->Bounds).IsValid;
  uVar6 = (this->Bounds).Pad[0];
  uVar7 = (this->Bounds).Pad[1];
  uVar8 = (this->Bounds).Pad[2];
  uVar9 = (this->Bounds).Pad[3];
  uVar10 = (this->Bounds).Pad[4];
  uVar11 = (this->Bounds).Pad[5];
  uVar12 = (this->Bounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetNormal @ 1498bb8b0

TVector<double> * __thiscall
UPCGWorldRayHitData::GetNormal(UPCGWorldRayHitData *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_48;
  TQuat<double> local_28;
  
  local_28.X = (double)this->_padding_;
  local_28.Y = (double)this->_padding_;
  local_28.Z = (double)this->_padding_;
  local_28.W = (double)this->_padding_;
  local_48._s_0.Z = __real_3ff0000000000000;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&local_28,__return_storage_ptr__,(TVector<double> *)&local_48._s_0);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1498bd550

UClass * __cdecl UPCGWorldRayHitData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldRayHitData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldRayHitData",
               &Z_Registration_Info_UClass_UPCGWorldRayHitData.InnerSingleton,
               StaticRegisterNativesUPCGWorldRayHitData,0x430,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGWorldRayHitData>,
               InternalVTableHelperCtorCaller<UPCGWorldRayHitData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldRayHitData.InnerSingleton;
}

// GetStrictBounds @ 1498c7890

TBox<double> * __thiscall
UPCGWorldRayHitData::GetStrictBounds(UPCGWorldRayHitData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->Bounds).IsValid;
  uVar6 = (this->Bounds).Pad[0];
  uVar7 = (this->Bounds).Pad[1];
  uVar8 = (this->Bounds).Pad[2];
  uVar9 = (this->Bounds).Pad[3];
  uVar10 = (this->Bounds).Pad[4];
  uVar11 = (this->Bounds).Pad[5];
  uVar12 = (this->Bounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// HasNonTrivialTransform @ 1498ca6f0

bool __thiscall UPCGWorldRayHitData::HasNonTrivialTransform(UPCGWorldRayHitData *this)

{
  return true;
}

// Initialize @ 1498cdfd0

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
UPCGWorldRayHitData::Initialize
          (UPCGWorldRayHitData *this,UWorld *param_1,TTransform<double> *param_2,
          TBox<double> *param_3,TBox<double> *param_4)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  UWorld *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Rotation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Rotation).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Translation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_2->Translation).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Translation).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Scale3D).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Scale3D).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_3->Min).field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_3->Min).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->Max).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_3->Min).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_3->Max).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_3->Max).field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = param_3->Pad[0];
  uVar3 = param_3->Pad[1];
  uVar4 = param_3->Pad[2];
  uVar5 = param_3->Pad[3];
  uVar6 = param_3->Pad[4];
  uVar7 = param_3->Pad[5];
  uVar8 = param_3->Pad[6];
  (this->Bounds).IsValid = param_3->IsValid;
  (this->Bounds).Pad[0] = uVar2;
  (this->Bounds).Pad[1] = uVar3;
  (this->Bounds).Pad[2] = uVar4;
  (this->Bounds).Pad[3] = uVar5;
  (this->Bounds).Pad[4] = uVar6;
  (this->Bounds).Pad[5] = uVar7;
  (this->Bounds).Pad[6] = uVar8;
  dVar1 = (param_4->Min).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_4->Min).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_4->Max).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_4->Min).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_4->Max).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_4->Max).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = *(longlong *)&param_4->IsValid;
  return;
}

// InitializeTargetMetadata @ 1498d0640

void __thiscall
UPCGWorldRayHitData::InitializeTargetMetadata
          (UPCGWorldRayHitData *this,FPCGInitializeFromDataParams *param_1,UPCGMetadata *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPCGMetadataDomain *this_00;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res18 [8];
  float local_res20 [2];
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  if ((param_2 == (UPCGMetadata *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetadataToInitialize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGWorldData.cpp"
                         ,0x177,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UPCGSpatialData::InitializeTargetMetadata((UPCGSpatialData *)this,param_1,param_2);
  this_00 = UPCGMetadata::GetMetadataDomain(param_2,&PCGMetadataDomainID::Elements);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    iVar11 = 0;
    uVar6 = 1;
    puVar1 = &(this->CachedLandscapeLayerNames).Elements.field_0x10;
    iVar3 = *(int *)&(this->CachedLandscapeLayerNames).Elements.field_0x28;
    iVar13 = 0;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&(this->CachedLandscapeLayerNames).Elements.field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar10 = *puVar14;
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar11;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar11 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1498d075d;
        uVar10 = puVar14[lVar8 + 1];
      }
      uVar6 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (int)lVar8 + -1 + iVar13;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_1498d075d:
    uVar10 = *(uint *)&(this->CachedLandscapeLayerNames).Elements.field_0x28;
    uVar9 = uVar10 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar6,iVar11);
    TStack_88.CurrentBitIndex = iVar7;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = iVar13;
    uStack_68 = CONCAT44(uStack_94,
                         *(int *)&(this->CachedLandscapeLayerNames).Elements.field_0x8 -
                         *(int *)&(this->CachedLandscapeLayerNames).Elements.field_0x34);
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&(this->CachedLandscapeLayerNames).Elements.field_0x28;
    if (uVar10 != uVar6) {
      puVar12 = *(undefined1 **)&(this->CachedLandscapeLayerNames).Elements.field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar11;
        uVar9 = uVar9 + 0x20;
        iVar11 = iVar11 + 1;
        uVar10 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1498d0860;
        uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar10 = (int)lVar8 + -1 + uVar9;
      if ((int)uVar6 < (int)uVar10) {
        uVar10 = uVar6;
      }
    }
LAB_1498d0860:
    while( true ) {
      if (*(int *)&(this->CachedLandscapeLayerNames).Elements.field_0x8 -
          *(int *)&(this->CachedLandscapeLayerNames).Elements.field_0x34 != (int)uStack_68) {
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_88.CurrentBitIndex == uVar10) &&
         (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      local_res20[0] = 0.0;
      FPCGMetadataDomain::FindOrCreateAttribute<float>
                (this_00,*(FName *)(*(longlong *)&(this->CachedLandscapeLayerNames).Elements +
                                   (longlong)TStack_88.CurrentBitIndex * 0x10),local_res20,true,true
                 ,true);
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    PCGWorldQueryHelpers::CreateRayHitAttributes
              ((FPCGWorldRaycastQueryParams *)&this->QueryParams,this_00);
  }
  return;
}

// IsBounded @ 1498d0ce0

bool __thiscall UPCGWorldRayHitData::IsBounded(UPCGWorldRayHitData *this)

{
  return (this->Bounds).IsValid != '\0';
}

// SamplePoint @ 1498dc2f0

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
UPCGWorldRayHitData::SamplePoint
          (UPCGWorldRayHitData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  long64 lVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  UWorld *this_00;
  FCollisionShape *pFVar14;
  TQuat<double> *pTVar15;
  TSet<TObjectKey<AActor>,DefaultKeyFuncs<TObjectKey<AActor>,0>,FDefaultSetAllocator> *pTVar16;
  TTransform<double> *pTVar17;
  FPCGPoint *pFVar18;
  double dVar19;
  undefined1 auStackY_448 [32];
  FCollisionObjectQueryParams local_408;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_400;
  TVector<double>_u_0 local_3f0;
  TVector<double>_u_0 local_3d8;
  TQuat<double> local_3b8;
  FCollisionShape local_398 [4];
  TQuat<double> local_358;
  TOptional<FHitResult> local_338;
  FCollisionQueryParams local_228;
  TTransform<double> local_198;
  FPCGPoint local_138;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_448;
  bVar11 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (!bVar11) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("World.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGWorldData.cpp"
                        ,0x129,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      uVar12 = (*pcVar5)();
      return (bool)uVar12;
    }
  }
  local_408.ObjectTypesToQuery =
       1 << (*(byte *)((longlong)&(this->QueryParams)._padding_ + 2) & 0x1f);
  local_408.IgnoreMask = '\0';
  FCollisionQueryParams::FCollisionQueryParams(&local_228);
  local_228.bTraceComplex = *(bool *)((longlong)&(this->QueryParams)._padding_ + 3);
  local_228.bReturnPhysicalMaterial = *(bool *)((longlong)&(this->QueryParams)._padding_ + 2);
  if (((((this->QueryParams)._padding_ & 0x1600) != 0) || (((this->QueryParams)._padding_ & 1) != 0)
      ) || (local_228.bReturnFaceIndex = false, (char)(this->QueryParams)._padding_ < '\0')) {
    local_228.bReturnFaceIndex = true;
  }
  dVar4 = (param_1->Translation).XY.m128d_f64[0];
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (this->QueryParams).RayDirection.field0_0x0._s_0.X;
  dVar2 = (this->QueryParams).RayDirection.field0_0x0._s_0.Y;
  dVar3 = (this->QueryParams).RayDirection.field0_0x0._s_0.Z;
  dVar7 = (param_1->Translation).ZW.m128d_f64[0];
  local_400.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_400.ArrayNum = 0;
  local_400.ArrayMax = 0;
  dVar19 = (dVar6 - (this->QueryParams).RayOrigin.field0_0x0._s_0.Y) * dVar2 +
           (dVar4 - (this->QueryParams).RayOrigin.field0_0x0._s_0.X) * dVar1 +
           (dVar7 - (this->QueryParams).RayOrigin.field0_0x0._s_0.Z) * dVar3;
  local_3d8._s_0.X = dVar4 - dVar19 * dVar1;
  local_3d8._s_0.Z = dVar7 - dVar19 * dVar3;
  dVar4 = (this->QueryParams).RayLength;
  local_3d8._s_0.Y = dVar6 - dVar19 * dVar2;
  local_3f0._s_0.X = dVar4 * dVar1 + local_3d8._s_0.X;
  local_3f0._s_0.Y = dVar4 * dVar2 + local_3d8._s_0.Y;
  local_3f0._s_0.Z = dVar4 * dVar3 + local_3d8._s_0.Z;
  this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  pFVar14 = FPCGCollisionShape::ToCollisionShape(&this->CollisionShape,local_398,(FPCGContext *)0x0)
  ;
  pTVar15 = UE::Math::TRotator<double>::Quaternion(&(this->CollisionShape).ShapeRotation,&local_358)
  ;
  local_3b8.X = pTVar15->X;
  local_3b8.Y = pTVar15->Y;
  local_3b8.Z = pTVar15->Z;
  local_3b8.W = pTVar15->W;
  bVar11 = UWorld::SweepMultiByObjectType
                     (this_00,&local_400,(TVector<double> *)&local_3d8._s_0,
                      (TVector<double> *)&local_3f0._s_0,&local_3b8,&local_408,pFVar14,&local_228);
  if (bVar11) {
    pTVar16 = FPCGWorldQueryActorFilterCache::GetCachedFilterActors(&this->ActorFilter);
    PCGWorldQueryHelpers::FilterRayHitResults
              (&local_338,(FPCGWorldRaycastQueryParams *)&this->QueryParams,
               (TWeakObjectPtr<UPCGComponent,FWeakObjectPtr>)(this->OriginatingComponent).WeakPtr,
               &local_400,pTVar16);
    if (local_338.bIsSet != false) {
      iVar13 = UPCGBlueprintHelpers::ComputeSeedFromPosition
                         ((TVector<double> *)&local_338.TypedValue.Location);
      pTVar17 = PCGWorldQueryHelpers::GetOrthonormalImpactTransform
                          (&local_198,&local_338.TypedValue);
      pFVar18 = FPCGPoint::FPCGPoint(&local_138,pTVar17,__real_3f800000,iVar13);
      dVar1 = (pFVar18->Transform).Rotation.XY.m128d_f64[1];
      (param_3->Transform).Rotation.XY.m128d_f64[0] = (pFVar18->Transform).Rotation.XY.m128d_f64[0];
      (param_3->Transform).Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar18->Transform).Rotation.ZW.m128d_f64[1];
      (param_3->Transform).Rotation.ZW.m128d_f64[0] = (pFVar18->Transform).Rotation.ZW.m128d_f64[0];
      (param_3->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (pFVar18->Transform).Translation.XY.m128d_f64[1];
      (param_3->Transform).Translation.XY.m128d_f64[0] =
           (pFVar18->Transform).Translation.XY.m128d_f64[0];
      (param_3->Transform).Translation.XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar18->Transform).Translation.ZW.m128d_f64[1];
      (param_3->Transform).Translation.ZW.m128d_f64[0] =
           (pFVar18->Transform).Translation.ZW.m128d_f64[0];
      (param_3->Transform).Translation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (pFVar18->Transform).Scale3D.XY.m128d_f64[1];
      (param_3->Transform).Scale3D.XY.m128d_f64[0] = (pFVar18->Transform).Scale3D.XY.m128d_f64[0];
      (param_3->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar18->Transform).Scale3D.ZW.m128d_f64[1];
      (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (pFVar18->Transform).Scale3D.ZW.m128d_f64[0];
      (param_3->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
      uVar10 = *(undefined4 *)&pFVar18->field_0x64;
      dVar1 = (pFVar18->BoundsMin).field0_0x0._s_0.X;
      param_3->Density = pFVar18->Density;
      *(undefined4 *)&param_3->field_0x64 = uVar10;
      (param_3->BoundsMin).field0_0x0._s_0.X = dVar1;
      dVar1 = (pFVar18->BoundsMin).field0_0x0._s_0.Z;
      (param_3->BoundsMin).field0_0x0._s_0.Y = (pFVar18->BoundsMin).field0_0x0._s_0.Y;
      (param_3->BoundsMin).field0_0x0._s_0.Z = dVar1;
      dVar1 = (pFVar18->BoundsMax).field0_0x0._s_0.Y;
      (param_3->BoundsMax).field0_0x0._s_0.X = (pFVar18->BoundsMax).field0_0x0._s_0.X;
      (param_3->BoundsMax).field0_0x0._s_0.Y = dVar1;
      lVar8 = pFVar18->_padding_;
      (param_3->BoundsMax).field0_0x0._s_0.Z = (pFVar18->BoundsMax).field0_0x0._s_0.Z;
      param_3->_padding_ = lVar8;
      dVar1 = (pFVar18->Color).field0_0x0._s_0.Y;
      (param_3->Color).field0_0x0._s_0.X = (pFVar18->Color).field0_0x0._s_0.X;
      (param_3->Color).field0_0x0._s_0.Y = dVar1;
      dVar1 = (pFVar18->Color).field0_0x0._s_0.W;
      (param_3->Color).field0_0x0._s_0.Z = (pFVar18->Color).field0_0x0._s_0.Z;
      (param_3->Color).field0_0x0._s_0.W = dVar1;
      iVar13 = pFVar18->Seed;
      lVar9 = pFVar18->MetadataEntry;
      param_3->Steepness = pFVar18->Steepness;
      param_3->Seed = iVar13;
      param_3->MetadataEntry = lVar9;
      PCGWorldQueryHelpers::ApplyRayHitMetadata
                (&local_338.TypedValue,(FPCGWorldRaycastQueryParams *)&this->QueryParams,
                 &(this->QueryParams).RayDirection,&param_3->Transform,&param_3->MetadataEntry,
                 param_4,(TWeakObjectPtr<UWorld,FWeakObjectPtr>)(this->World).WeakPtr);
      bVar11 = true;
      goto LAB_1498dc65d;
    }
  }
  bVar11 = false;
LAB_1498dc65d:
  if (local_400.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.AllocatorInstance.Data);
  }
  if (local_228.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_228.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_228.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_228.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar11;
}

// StaticRegisterNativesUPCGWorldRayHitData @ 1498f6b90

void __cdecl UPCGWorldRayHitData::StaticRegisterNativesUPCGWorldRayHitData(void)

{
  return;
}

// SupportsBoundedPointData @ 1498f6c80

bool __thiscall UPCGWorldRayHitData::SupportsBoundedPointData(UPCGWorldRayHitData *this)

{
  return true;
}

