// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 26

// StaticClass @ 149c96670

UClass * __cdecl UPCGLandscapeCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeCache",
               &Z_Registration_Info_UClass_UPCGLandscapeCache.InnerSingleton,
               StaticRegisterNativesUPCGLandscapeCache,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLandscapeCache>,
               InternalVTableHelperCtorCaller<UPCGLandscapeCache>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeCache.InnerSingleton;
}

// CacheMapKey @ 149ca24d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

CacheMapKey * __thiscall
UPCGLandscapeCache::CacheMapKey::CacheMapKey
          (CacheMapKey *this,FGuid *param_1,TIntPoint<int> *param_2,AActor *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ULevel *pUVar4;
  IWorldPartitionCell *pIVar5;
  UClass *pUVar6;
  bool bVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->LandscapeGuid).A = param_1->A;
  (this->LandscapeGuid).B = uVar1;
  (this->LandscapeGuid).C = uVar2;
  (this->LandscapeGuid).D = uVar3;
  (this->Coordinate).field0_0x0 = param_2->field0_0x0;
  (this->WorldKey).ObjectIndex = 0;
  (this->WorldKey).ObjectSerialNumber = 0;
  if (param_3 == (AActor *)0x0) {
    return this;
  }
  pUVar4 = AActor::GetLevel(param_3);
  if (pUVar4 == (ULevel *)0x0) {
    return this;
  }
  pUVar4 = AActor::GetLevel(param_3);
  pIVar5 = ULevel::GetWorldPartitionRuntimeCell(pUVar4);
  if (pIVar5 == (IWorldPartitionCell *)0x0) {
    pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
    local_res10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_3,pUVar6);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (local_res10 == (UObject *)0x0) goto LAB_149ca25ca;
    bVar7 = UE::GC::GIsIncrementalReachabilityPending == false;
    if (!bVar7) {
      UE::GC::MarkAsReachable(local_res10);
      bVar7 = UE::GC::GIsIncrementalReachabilityPending == false;
    }
  }
  else {
    pUVar4 = AActor::GetLevel(param_3);
    pIVar5 = ULevel::GetWorldPartitionRuntimeCell(pUVar4);
    local_res10 = (UObject *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (local_res10 == (UObject *)0x0) goto LAB_149ca25ca;
    bVar7 = UE::GC::GIsIncrementalReachabilityPending == false;
    if (!bVar7) {
      UE::GC::MarkAsReachable(local_res10);
      bVar7 = UE::GC::GIsIncrementalReachabilityPending == false;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (!bVar7) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
LAB_149ca25ca:
  (this->WorldKey).ObjectIndex = local_res8.ObjectIndex;
  (this->WorldKey).ObjectSerialNumber = local_res8.ObjectSerialNumber;
  return this;
}

// UPCGLandscapeCache @ 149ca4780

UPCGLandscapeCache * __thiscall
UPCGLandscapeCache::UPCGLandscapeCache(UPCGLandscapeCache *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SerializationMode = NeverSerialize;
  this->CookedSerializedContents = SerializeAll;
  this->_padding_ = (longlong)&___7UPCGLandscapeCache__6B_;
  *(undefined8 *)&this->CachedData = 0;
  *(undefined8 *)&(this->CachedData).field_0x8 = 0;
  *(undefined8 *)&(this->CachedData).field_0x20 = 0;
  *(undefined4 *)&(this->CachedData).field_0x28 = 0;
  *(undefined4 *)&(this->CachedData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedData).field_0x34 = 0;
  *(undefined4 *)&(this->CachedData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedData).field_0x40 = 0;
  *(undefined4 *)&(this->CachedData).field_0x48 = 0;
  *(undefined8 *)&(this->CachedLayerNames).Elements = 0;
  *(undefined8 *)&(this->CachedLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x30 = 0xffffffff;
  (this->CachedLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedLayerNames).HashSize = 0;
  this->CacheMemorySize = (atomic<int>)0x0;
  this->CacheTouch = (atomic<int>)0x0;
  this->TimeSinceLastCleanupInSeconds = 0.0;
  this->bInitialized = false;
  this->bLoggedNoCacheError = false;
  return this;
}

// UPCGLandscapeCache @ 149ca4830

UPCGLandscapeCache * __thiscall
UPCGLandscapeCache::UPCGLandscapeCache(UPCGLandscapeCache *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SerializationMode = NeverSerialize;
  this->CookedSerializedContents = SerializeAll;
  this->_padding_ = (longlong)&___7UPCGLandscapeCache__6B_;
  *(undefined8 *)&this->CachedData = 0;
  *(undefined8 *)&(this->CachedData).field_0x8 = 0;
  *(undefined8 *)&(this->CachedData).field_0x20 = 0;
  *(undefined4 *)&(this->CachedData).field_0x28 = 0;
  *(undefined4 *)&(this->CachedData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedData).field_0x34 = 0;
  *(undefined4 *)&(this->CachedData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedData).field_0x40 = 0;
  *(undefined4 *)&(this->CachedData).field_0x48 = 0;
  *(undefined8 *)&(this->CachedLayerNames).Elements = 0;
  *(undefined8 *)&(this->CachedLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x30 = 0xffffffff;
  (this->CachedLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedLayerNames).HashSize = 0;
  this->CacheMemorySize = (atomic<int>)0x0;
  this->CacheTouch = (atomic<int>)0x0;
  this->TimeSinceLastCleanupInSeconds = 0.0;
  this->bInitialized = false;
  this->bLoggedNoCacheError = false;
  return this;
}

// ~UPCGLandscapeCache @ 149ca6730

void __thiscall UPCGLandscapeCache::~UPCGLandscapeCache(UPCGLandscapeCache *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGLandscapeCache__6B_;
  (this->CachedLayerNames).HashSize = 0;
  FVar1 = (this->CachedLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedLayerNames).Elements);
  *(undefined4 *)&(this->CachedData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedData);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 149ca7c30

bool __thiscall
`UPCGLandscapeCache::Tick'::__l8::<lambda_1>::operator()
          (void *this,TSharedPtr<FPCGLandscapeCacheEntry,1> *param_1,
          TSharedPtr<FPCGLandscapeCacheEntry,1> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1->Object == (FPCGLandscapeCacheEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar1 = param_1->Object->Touch;
  if (param_2->Object == (FPCGLandscapeCacheEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return iVar1 < param_2->Object->Touch;
}

// AreCacheEntriesReady @ 149cac790

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
UPCGLandscapeCache::AreCacheEntriesReady
          (UPCGLandscapeCache *this,ULandscapeInfo *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3)

{
  uint uVar1;
  int iVar2;
  ALandscapeProxy *pAVar3;
  ALandscapeProxy *this_00;
  ULevel *pUVar4;
  IWorldPartitionCell *pIVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr local_a8;
  longlong local_a0;
  FSharedReferencer<1> FStack_98;
  CacheMapKey local_90;
  undefined8 local_68;
  undefined8 uStack_60;
  UObject *local_58;
  UObject *local_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  
  pAVar3 = ULandscapeInfo::GetLandscapeProxy(param_1);
  iVar11 = (param_2->field0_0x0)._s_0.X;
  if (iVar11 <= (param_3->field0_0x0)._s_0.X) {
    do {
      iVar10 = (param_2->field0_0x0)._s_0.Y;
      if (iVar10 <= (param_3->field0_0x0)._s_0.Y) {
        do {
          if (pAVar3 == (ALandscapeProxy *)0x0) {
            this_00 = ULandscapeInfo::GetLandscapeProxy(param_1);
            if (this_00 == (ALandscapeProxy *)0x0) {
              local_68 = 0;
              uStack_60 = 0;
              local_68._0_4_ = 0;
              local_68._4_4_ = 0;
              uStack_60._0_4_ = 0;
              uStack_60._4_4_ = 0;
              local_90.LandscapeGuid.A = (uint)local_68;
              local_90.LandscapeGuid.B = local_68._4_4_;
              local_90.LandscapeGuid.C = (uint)uStack_60;
              local_90.LandscapeGuid.D = uStack_60._4_4_;
            }
            else {
              local_90.LandscapeGuid.A = (this_00->OriginalLandscapeGuid).A;
              local_90.LandscapeGuid.B = (this_00->OriginalLandscapeGuid).B;
              local_90.LandscapeGuid.C = (this_00->OriginalLandscapeGuid).C;
              local_90.LandscapeGuid.D = (this_00->OriginalLandscapeGuid).D;
            }
          }
          else {
            this_00 = pAVar3;
            local_90.LandscapeGuid.A = (pAVar3->OriginalLandscapeGuid).A;
            local_90.LandscapeGuid.B = (pAVar3->OriginalLandscapeGuid).B;
            local_90.LandscapeGuid.C = (pAVar3->OriginalLandscapeGuid).C;
            local_90.LandscapeGuid.D = (pAVar3->OriginalLandscapeGuid).D;
          }
          local_90.WorldKey.ObjectIndex = 0;
          local_90.WorldKey.ObjectSerialNumber = 0;
          local_a0 = 0;
          FStack_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_90.Coordinate.field0_0x0._s_0.X = iVar11;
          local_90.Coordinate.field0_0x0._s_0.Y = iVar10;
          if ((this_00 != (ALandscapeProxy *)0x0) &&
             (pUVar4 = AActor::GetLevel((AActor *)this_00), pUVar4 != (ULevel *)0x0)) {
            pUVar4 = AActor::GetLevel((AActor *)this_00);
            pIVar5 = ULevel::GetWorldPartitionRuntimeCell(pUVar4);
            if (pIVar5 == (IWorldPartitionCell *)0x0) {
              pUVar7 = Z_Construct_UClass_UWorld_NoRegister();
              pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar7);
              local_a8.ObjectIndex = 0;
              local_a8.ObjectSerialNumber = 0;
              if (pUVar6 == (UObject *)0x0) {
                local_90.WorldKey.ObjectIndex = 0;
                local_90.WorldKey.ObjectSerialNumber = 0;
              }
              else {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar6);
                }
                local_b0.ObjectIndex = 0;
                local_b0.ObjectSerialNumber = 0;
                local_50 = pUVar6;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar6);
                }
                FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_50);
                local_a8 = local_b0;
                local_90.WorldKey = (FObjectKey)local_b0;
              }
            }
            else {
              pUVar4 = AActor::GetLevel((AActor *)this_00);
              pIVar5 = ULevel::GetWorldPartitionRuntimeCell(pUVar4);
              pUVar6 = (UObject *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
              if (pUVar6 == (UObject *)0x0) {
                local_90.WorldKey.ObjectIndex = 0;
                local_90.WorldKey.ObjectSerialNumber = 0;
              }
              else {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar6);
                }
                local_res20.ObjectIndex = 0;
                local_res20.ObjectSerialNumber = 0;
                local_58 = pUVar6;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar6);
                }
                FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
                local_90.WorldKey = (FObjectKey)local_res20;
              }
            }
          }
          if ((this->bLoggedNoCacheError == false) &&
             (*(int *)&(this->CachedData).field_0x8 == *(int *)&(this->CachedData).field_0x34)) {
            if (1 < (byte)LogPCG._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            }
            this->bLoggedNoCacheError = true;
          }
          uVar1 = ::GetTypeHash(&local_90);
          iVar2 = TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<UPCGLandscapeCache::CacheMapKey>
                            ((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                              *)&this->CachedData,uVar1,&local_90);
          if (iVar2 != -1) {
            lVar8 = (longlong)iVar2 * 0x38 + *(longlong *)&this->CachedData;
            plVar9 = (longlong *)(lVar8 + 0x20);
            if (lVar8 == 0) {
              plVar9 = (longlong *)0x0;
            }
            if (plVar9 != (longlong *)0x0) {
              local_a0 = *plVar9;
              local_40.ReferenceController = (TReferenceControllerBase<1> *)plVar9[1];
              if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_40.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_48 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_98,&local_40);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_40.ReferenceController);
            }
          }
          if ((local_a0 != 0) && (*(char *)(local_a0 + 0xa4) == '\0')) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_98.ReferenceController);
            return false;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_98.ReferenceController);
          iVar10 = iVar10 + 1;
        } while (iVar10 <= (param_3->field0_0x0)._s_0.Y);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 <= (param_3->field0_0x0)._s_0.X);
  }
  return true;
}

// BeginDestroy @ 149cacf90

void __thiscall UPCGLandscapeCache::BeginDestroy(UPCGLandscapeCache *this)

{
  ClearCache(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// ClearCache @ 149cb4e10

void __thiscall UPCGLandscapeCache::ClearCache(UPCGLandscapeCache *this)

{
  int iVar1;
  
  TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
           *)&this->CachedData);
  if (*(int *)&(this->CachedLayerNames).Elements.field_0x8 !=
      *(int *)&(this->CachedLayerNames).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
              (&this->CachedLayerNames);
    iVar1 = *(int *)&(this->CachedLayerNames).Elements.field_0xc;
    *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&this->CachedLayerNames,0,
                 (int *)&(this->CachedLayerNames).Elements.field_0xc);
    }
    *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x28 = 0;
    *(undefined4 *)&(this->CachedLayerNames).Elements.field_0x30 = 0xffffffff;
  }
  return;
}

// GetCacheEntry @ 149cc6a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGLandscapeCacheEntry_const_,1> * __thiscall
UPCGLandscapeCache::GetCacheEntry
          (UPCGLandscapeCache *this,
          TSharedPtr<FPCGLandscapeCacheEntry_const_,1> *__return_storage_ptr__,
          ULandscapeInfo *param_1,TIntPoint<int> *param_2,ALandscapeProxy *param_3,bool param_4)

{
  FGuid local_18;
  
  if (param_1 == (ULandscapeInfo *)0x0) {
    __return_storage_ptr__->Object = (FPCGLandscapeCacheEntry *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (param_3 == (ALandscapeProxy *)0x0) {
    param_3 = ULandscapeInfo::GetLandscapeProxy(param_1);
    if (param_3 == (ALandscapeProxy *)0x0) {
      local_18.A = 0;
      local_18.B = 0;
      local_18.C = local_18.A;
      local_18.D = local_18.B;
      goto LAB_149cc6aad;
    }
  }
  local_18.A = (param_3->OriginalLandscapeGuid).A;
  local_18.B = (param_3->OriginalLandscapeGuid).B;
  local_18.C = (param_3->OriginalLandscapeGuid).C;
  local_18.D = (param_3->OriginalLandscapeGuid).D;
LAB_149cc6aad:
  GetCacheEntryInternal(this,__return_storage_ptr__,(AActor *)param_3,&local_18,param_2,param_4);
  return __return_storage_ptr__;
}

// GetCacheEntryInternal @ 149cc6af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FPCGLandscapeCacheEntry_const_,1> * __thiscall
UPCGLandscapeCache::GetCacheEntryInternal
          (UPCGLandscapeCache *this,
          TSharedPtr<FPCGLandscapeCacheEntry_const_,1> *__return_storage_ptr__,AActor *param_1,
          FGuid *param_2,TIntPoint<int> *param_3,bool param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  TSharedPtr<FPCGLandscapeCacheEntry_const_,1> *pTVar10;
  FPCGLandscapeCacheEntry *pFVar11;
  TSharedPtr<FPCGLandscapeCacheEntry_const_,1> local_58;
  TSharedPtr<FPCGLandscapeCacheEntry_const_,1> local_48;
  CacheMapKey local_38;
  
  __return_storage_ptr__->Object = (FPCGLandscapeCacheEntry *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  CacheMapKey::CacheMapKey(&local_38,param_2,param_3,param_1);
  if ((this->bLoggedNoCacheError == false) &&
     (*(int *)&(this->CachedData).field_0x8 == *(int *)&(this->CachedData).field_0x34)) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    this->bLoggedNoCacheError = true;
  }
  uVar6 = ::GetTypeHash(&local_38);
  iVar7 = TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UPCGLandscapeCache::CacheMapKey>
                    ((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                      *)&this->CachedData,uVar6,&local_38);
  if (iVar7 != -1) {
    lVar8 = (longlong)iVar7 * 0x38 + *(longlong *)&this->CachedData;
    puVar9 = (undefined8 *)(lVar8 + 0x20);
    if (lVar8 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    if (puVar9 != (undefined8 *)0x0) {
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
      local_58.Object = (FPCGLandscapeCacheEntry *)*puVar9;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (__return_storage_ptr__ != &local_58) {
        __return_storage_ptr__->Object = local_58.Object;
        local_58.Object = (FPCGLandscapeCacheEntry *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_58.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
  }
  pFVar11 = __return_storage_ptr__->Object;
  if (pFVar11 == (FPCGLandscapeCacheEntry *)0x0) {
    return __return_storage_ptr__;
  }
  if (!param_4) {
    return __return_storage_ptr__;
  }
  LOCK();
  paVar1 = &this->CacheTouch;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  pFVar11->Touch = (int)aVar2;
  if (pFVar11->bDataLoaded == false) {
    lpCriticalSection = &pFVar11->DataLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pFVar11->bDataLoaded == false) {
      bVar5 = FPCGLandscapeCacheEntry::SerializeFromBulkData(pFVar11);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar11 = __return_storage_ptr__->Object;
      if (bVar5) {
        if ((pFVar11 == (FPCGLandscapeCacheEntry *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TSharedPtr<FPCGLandscapeCacheEntry_const_,1> *)(*pcVar4)();
          return pTVar10;
        }
        iVar7 = FPCGLandscapeCacheEntry::GetMemorySize(__return_storage_ptr__->Object);
        LOCK();
        this->CacheMemorySize = (atomic<int>)((int)this->CacheMemorySize + iVar7);
        UNLOCK();
        return __return_storage_ptr__;
      }
      goto LAB_149cc6ca3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar11 = __return_storage_ptr__->Object;
LAB_149cc6ca3:
  if ((pFVar11 == (FPCGLandscapeCacheEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FPCGLandscapeCacheEntry_const_,1> *)(*pcVar4)();
    return pTVar10;
  }
  if (__return_storage_ptr__->Object->bDataLoaded == false) {
    if (__return_storage_ptr__ != &local_48) {
      __return_storage_ptr__->Object = (FPCGLandscapeCacheEntry *)0x0;
      pTVar3 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar1 = &pTVar3->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar3->_padding_)();
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return __return_storage_ptr__;
}

// GetCacheEntryInternal @ 149cc6d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGLandscapeCacheEntry_const_,1> * __thiscall
UPCGLandscapeCache::GetCacheEntryInternal
          (UPCGLandscapeCache *this,
          TSharedPtr<FPCGLandscapeCacheEntry_const_,1> *__return_storage_ptr__,
          ULandscapeInfo *param_1,TIntPoint<int> *param_2,ALandscapeProxy *param_3,bool param_4,
          bool *param_5)

{
  FGuid local_18;
  
  *param_5 = false;
  if (param_3 == (ALandscapeProxy *)0x0) {
    param_3 = ULandscapeInfo::GetLandscapeProxy(param_1);
    if (param_3 == (ALandscapeProxy *)0x0) {
      local_18.A = 0;
      local_18.B = 0;
      local_18.C = local_18.A;
      local_18.D = local_18.B;
      goto LAB_149cc6dbe;
    }
  }
  local_18.A = (param_3->OriginalLandscapeGuid).A;
  local_18.B = (param_3->OriginalLandscapeGuid).B;
  local_18.C = (param_3->OriginalLandscapeGuid).C;
  local_18.D = (param_3->OriginalLandscapeGuid).D;
LAB_149cc6dbe:
  GetCacheEntryInternal(this,__return_storage_ptr__,(AActor *)param_3,&local_18,param_2,param_4);
  *param_5 = __return_storage_ptr__->Object != (FPCGLandscapeCacheEntry *)0x0;
  return __return_storage_ptr__;
}

// GetLayerNames @ 149cc9bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UPCGLandscapeCache::GetLayerNames
          (UPCGLandscapeCache *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,ALandscapeProxy *param_1
          )

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
            (&this->CachedLayerNames,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149ccbb00

UClass * __cdecl UPCGLandscapeCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeCache",
               &Z_Registration_Info_UClass_UPCGLandscapeCache.InnerSingleton,
               StaticRegisterNativesUPCGLandscapeCache,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLandscapeCache>,
               InternalVTableHelperCtorCaller<UPCGLandscapeCache>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeCache.InnerSingleton;
}

// Initialize @ 149ccd050

void __thiscall UPCGLandscapeCache::Initialize(UPCGLandscapeCache *this)

{
  longlong lVar1;
  
  if (this->bInitialized == false) {
    lVar1 = (**(code **)(this->_padding_ + 0x180))();
    if (lVar1 != 0) {
      UpdateCacheWorldKeys(this);
      this->bInitialized = true;
    }
  }
  return;
}

// PrimeCache @ 149cd07a0

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
UPCGLandscapeCache::PrimeCache
          (UPCGLandscapeCache *this,ULandscapeInfo *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ALandscapeProxy *this_00;
  ULevel *pUVar8;
  IWorldPartitionCell *pIVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  longlong lVar12;
  undefined8 *puVar13;
  FSharedReferencer<1> FVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  FPCGLandscapeCacheEntry *local_c0;
  FSharedReferencer<1> FStack_b8;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  FWeakObjectPtr local_98;
  CacheMapKey local_90;
  undefined8 local_68;
  undefined8 uStack_60;
  UObject *local_58;
  UObject *local_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId827,"UPCGLandscapeData::PrimeCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
               ,0x33b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId827);
  }
  iVar16 = (param_2->field0_0x0)._s_0.X;
  if (iVar16 <= (param_3->field0_0x0)._s_0.X) {
    do {
      iVar15 = (param_2->field0_0x0)._s_0.Y;
      if (iVar15 <= (param_3->field0_0x0)._s_0.Y) {
        do {
          if (param_1 == (ULandscapeInfo *)0x0) {
            FVar14.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            this_00 = ULandscapeInfo::GetLandscapeProxy(param_1);
            if (this_00 == (ALandscapeProxy *)0x0) {
              local_68 = 0;
              uStack_60 = 0;
              local_68._0_4_ = 0;
              local_68._4_4_ = 0;
              uStack_60._0_4_ = 0;
              uStack_60._4_4_ = 0;
              local_90.LandscapeGuid.A = (uint)local_68;
              local_90.LandscapeGuid.B = local_68._4_4_;
              local_90.LandscapeGuid.C = (uint)uStack_60;
              local_90.LandscapeGuid.D = uStack_60._4_4_;
            }
            else {
              local_90.LandscapeGuid.A = (this_00->OriginalLandscapeGuid).A;
              local_90.LandscapeGuid.B = (this_00->OriginalLandscapeGuid).B;
              local_90.LandscapeGuid.C = (this_00->OriginalLandscapeGuid).C;
              local_90.LandscapeGuid.D = (this_00->OriginalLandscapeGuid).D;
            }
            local_90.WorldKey.ObjectIndex = 0;
            local_90.WorldKey.ObjectSerialNumber = 0;
            local_c0 = (FPCGLandscapeCacheEntry *)0x0;
            FStack_b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_90.Coordinate.field0_0x0._s_0.X = iVar16;
            local_90.Coordinate.field0_0x0._s_0.Y = iVar15;
            if ((this_00 != (ALandscapeProxy *)0x0) &&
               (pUVar8 = AActor::GetLevel((AActor *)this_00), pUVar8 != (ULevel *)0x0)) {
              pUVar8 = AActor::GetLevel((AActor *)this_00);
              pIVar9 = ULevel::GetWorldPartitionRuntimeCell(pUVar8);
              if (pIVar9 == (IWorldPartitionCell *)0x0) {
                pUVar11 = Z_Construct_UClass_UWorld_NoRegister();
                pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar11);
                local_98.ObjectIndex = 0;
                local_98.ObjectSerialNumber = 0;
                if (pUVar10 == (UObject *)0x0) {
                  local_90.WorldKey.ObjectIndex = 0;
                  local_90.WorldKey.ObjectSerialNumber = 0;
                }
                else {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar10);
                  }
                  local_a0.ObjectIndex = 0;
                  local_a0.ObjectSerialNumber = 0;
                  local_50 = pUVar10;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar10);
                  }
                  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_50);
                  local_98 = local_a0;
                  local_90.WorldKey = (FObjectKey)local_a0;
                }
              }
              else {
                pUVar8 = AActor::GetLevel((AActor *)this_00);
                pIVar9 = ULevel::GetWorldPartitionRuntimeCell(pUVar8);
                pUVar10 = (UObject *)(**(code **)((longlong)*pIVar9 + 0x78))(pIVar9);
                local_a8.ObjectIndex = 0;
                local_a8.ObjectSerialNumber = 0;
                if (pUVar10 == (UObject *)0x0) {
                  local_90.WorldKey.ObjectIndex = 0;
                  local_90.WorldKey.ObjectSerialNumber = 0;
                }
                else {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar10);
                  }
                  local_b0.ObjectIndex = 0;
                  local_b0.ObjectSerialNumber = 0;
                  local_58 = pUVar10;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar10);
                  }
                  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_58);
                  local_a8 = local_b0;
                  local_90.WorldKey = (FObjectKey)local_b0;
                }
              }
            }
            if ((this->bLoggedNoCacheError == false) &&
               (*(int *)&(this->CachedData).field_0x8 == *(int *)&(this->CachedData).field_0x34)) {
              if (1 < (byte)LogPCG._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              }
              this->bLoggedNoCacheError = true;
            }
            uVar6 = ::GetTypeHash(&local_90);
            iVar7 = TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<UPCGLandscapeCache::CacheMapKey>
                              ((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                                *)&this->CachedData,uVar6,&local_90);
            if (iVar7 != -1) {
              lVar12 = (longlong)iVar7 * 0x38 + *(longlong *)&this->CachedData;
              puVar13 = (undefined8 *)(lVar12 + 0x20);
              if (lVar12 == 0) {
                puVar13 = (undefined8 *)0x0;
              }
              if (puVar13 != (undefined8 *)0x0) {
                local_c0 = (FPCGLandscapeCacheEntry *)*puVar13;
                local_40.ReferenceController = (TReferenceControllerBase<1> *)puVar13[1];
                if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_40.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_48 = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_b8,&local_40);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_40.ReferenceController);
              }
            }
            FVar14.ReferenceController = FStack_b8.ReferenceController;
            if (local_c0 != (FPCGLandscapeCacheEntry *)0x0) {
              if ((local_c0 == (FPCGLandscapeCacheEntry *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              LOCK();
              paVar1 = &this->CacheTouch;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + 1);
              UNLOCK();
              local_c0->Touch = (int)aVar2;
              FVar14.ReferenceController = FStack_b8.ReferenceController;
              if (local_c0->bDataLoaded == false) {
                lpCriticalSection = &local_c0->DataLock;
                if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::ReportNotNullPtr();
                }
                EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                if (local_c0->bDataLoaded == false) {
                  bVar5 = FPCGLandscapeCacheEntry::SerializeFromBulkData(local_c0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  if (bVar5) {
                    iVar7 = FPCGLandscapeCacheEntry::GetMemorySize(local_c0);
                    LOCK();
                    this->CacheMemorySize = (atomic<int>)((int)this->CacheMemorySize + iVar7);
                    UNLOCK();
                    FVar14.ReferenceController = FStack_b8.ReferenceController;
                    goto LAB_149cd0b27;
                  }
                }
                else {
                  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                }
                FVar4.ReferenceController = FStack_b8.ReferenceController;
                FVar14.ReferenceController = FStack_b8.ReferenceController;
                if (local_c0->bDataLoaded == false) {
                  if (FStack_b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    paVar1 = &(FStack_b8.ReferenceController)->SharedReferenceCount;
                    aVar2 = *paVar1;
                    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                    UNLOCK();
                    FVar14.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                    if (aVar2 == (atomic<int>)0x1) {
                      (**(code **)(FStack_b8.ReferenceController)->_padding_)();
                      LOCK();
                      paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
                      aVar2 = *paVar1;
                      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                      UNLOCK();
                      FVar14.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                      if (aVar2 == (atomic<int>)0x1) {
                        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))
                                  (FVar4.ReferenceController,1);
                      }
                    }
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)0x0);
                }
              }
            }
          }
LAB_149cd0b27:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar14.ReferenceController);
          iVar15 = iVar15 + 1;
        } while (iVar15 <= (param_3->field0_0x0)._s_0.Y);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 <= (param_3->field0_0x0)._s_0.X);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrimeCache @ 149cd0bf0

void __thiscall UPCGLandscapeCache::PrimeCache(UPCGLandscapeCache *this)

{
  return;
}

// SampleMetadataOnPoint @ 149cd9240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
UPCGLandscapeCache::SampleMetadataOnPoint
          (UPCGLandscapeCache *this,ALandscapeProxy *param_1,TTransform<double> *param_2,
          long64 *param_3,UPCGMetadata *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  FSharedReferencer<1> FVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  UWorld *pUVar15;
  longlong lVar16;
  ULevel *pUVar17;
  IWorldPartitionCell *pIVar18;
  UObject *pUVar19;
  UClass *pUVar20;
  undefined8 *puVar21;
  FSafeIndices *pFVar22;
  int iVar23;
  FPCGLandscapeCacheEntry *this_00;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_258 [32];
  FPCGLandscapeCacheEntry *local_238;
  FSharedReferencer<1> FStack_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  undefined8 local_218;
  undefined8 local_210;
  CacheMapKey local_208;
  UObject *local_1e8;
  UObject *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  FSharedReferencer<1> local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TVector2<double>_u_0 local_198;
  FSafeIndices local_188;
  double local_170;
  double dStack_168;
  double local_160;
  FSafeIndices local_158;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  if (param_1 == (ALandscapeProxy *)0x0) {
    return;
  }
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_258;
  pUVar15 = AActor::GetWorld((AActor *)param_1);
  if (pUVar15 == (UWorld *)0x0) {
    return;
  }
  if (param_4 == (UPCGMetadata *)0x0) {
    return;
  }
  if (*(int *)&(this->CachedLayerNames).Elements.field_0x8 ==
      *(int *)&(this->CachedLayerNames).Elements.field_0x34) {
    return;
  }
  lVar16 = (**(code **)(param_1->_padding_ + 0x18))(&param_1->_padding_);
  if (lVar16 == 0) {
    if ((byte)LogPCG._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    return;
  }
  (**(code **)(param_1->_padding_ + 0x20))(&param_1->_padding_,&local_138);
  local_160 = (param_2->Translation).ZW.m128d_f64[0];
  local_170 = (param_2->Translation).XY.m128d_f64[0];
  dStack_168 = (param_2->Translation).XY.m128d_f64[1];
  local_108 = local_160 - local_108;
  local_138 = local_138 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dStack_130 = dStack_130 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_128 = local_128 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dStack_120 = dStack_120 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar36._8_4_ = SUB84(dStack_130,0);
  auVar36._0_8_ = local_138;
  auVar36._12_4_ = (int)((ulonglong)dStack_130 >> 0x20);
  auVar33._8_4_ = SUB84(dStack_120,0);
  auVar33._0_8_ = local_128;
  auVar33._12_4_ = (int)((ulonglong)dStack_120 >> 0x20);
  auVar37 = blendpd(auVar36,auVar33,2);
  auVar27._8_4_ = SUB84(local_128,0);
  auVar27._0_8_ = dStack_130;
  auVar27._12_4_ = (int)((ulonglong)local_128 >> 0x20);
  local_118 = local_170 - local_118;
  dStack_110 = dStack_168 - dStack_110;
  uVar41 = (undefined4)((ulonglong)dStack_110 >> 0x20);
  auVar45._8_4_ = SUB84(dStack_110,0);
  auVar45._0_8_ = local_118;
  auVar45._12_4_ = uVar41;
  auVar32._8_4_ = SUB84(dStack_110,0);
  auVar32._0_8_ = local_118;
  auVar32._12_4_ = uVar41;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_108;
  auVar33 = blendpd(auVar32,auVar8,2);
  auVar46._0_8_ = auVar45._8_8_ * local_138 - dStack_130 * local_118;
  auVar46._8_8_ = local_108 * dStack_130 - auVar27._8_8_ * dStack_110;
  auVar34._0_8_ = auVar33._0_8_ * local_128 - auVar37._0_8_ * local_108;
  auVar34._8_8_ = auVar33._8_8_ * dStack_120 - auVar37._8_8_ * 0.0;
  dVar31 = auVar46._8_8_ + auVar46._8_8_;
  dVar35 = auVar34._0_8_ + auVar34._0_8_;
  uVar41 = SUB84(dVar35,0);
  uVar42 = (undefined4)((ulonglong)dVar35 >> 0x20);
  auVar33 = blendpd(auVar46,auVar34,2);
  auVar47._0_8_ = auVar33._0_8_ + auVar33._0_8_;
  auVar47._8_8_ = auVar33._8_8_ + auVar33._8_8_;
  auVar43._8_4_ = uVar41;
  auVar43._0_8_ = dVar31;
  auVar43._12_4_ = uVar42;
  auVar28._8_4_ = uVar41;
  auVar28._0_8_ = dVar31;
  auVar28._12_4_ = uVar42;
  auVar38._8_4_ = uVar41;
  auVar38._0_8_ = dVar31;
  auVar38._12_4_ = uVar42;
  auVar33 = blendpd(auVar38,auVar47,2);
  auVar44._0_8_ = auVar43._8_8_ * local_138 - dVar31 * dStack_130;
  auVar44._8_8_ = auVar47._0_8_ * dStack_130 - auVar28._8_8_ * local_128;
  auVar29._8_4_ = SUB84(auVar47._8_8_,0);
  auVar29._0_8_ = auVar47._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
  auVar39._0_8_ = auVar33._0_8_ * local_128 - auVar47._0_8_ * auVar37._0_8_;
  auVar39._8_8_ = auVar33._8_8_ * dStack_120 - auVar29._8_8_ * auVar37._8_8_;
  auVar49._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uStack_f4,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_f8);
  auVar49._8_4_ = _UNK_15061cc88 & uStack_f0;
  auVar49._12_4_ = _UNK_15061cc8c & uStack_ec;
  lVar24 = -(ulonglong)
            ((double)CONCAT44(local_e8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_e8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  lVar25 = -(ulonglong)(auVar49._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar26 = -(ulonglong)(auVar49._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar10._4_4_ = uStack_f4;
  auVar10._0_4_ = local_f8;
  auVar10._8_4_ = uStack_f0;
  auVar10._12_4_ = uStack_ec;
  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar10);
  auVar50._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar33._4_4_,
                        ~(uint)lVar25 & auVar33._0_4_);
  auVar50._8_4_ = ~(uint)lVar26 & auVar33._8_4_;
  auVar50._12_4_ = ~(uint)((ulonglong)lVar26 >> 0x20) & auVar33._12_4_;
  auVar30._8_4_ = SUB84(auVar44._8_8_,0);
  auVar30._0_8_ = auVar44._0_8_;
  auVar30._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
  uVar3 = (param_1->OriginalLandscapeGuid).A;
  uVar5 = (param_1->OriginalLandscapeGuid).B;
  uVar4 = (param_1->OriginalLandscapeGuid).C;
  uVar6 = (param_1->OriginalLandscapeGuid).D;
  auVar37._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar37._0_8_ = local_e8._0_8_;
  auVar37._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
  local_208.WorldKey.ObjectIndex = 0;
  local_208.WorldKey.ObjectSerialNumber = 0;
  dVar48 = auVar50._0_8_ * (dVar31 * dStack_120 + local_118 + auVar30._8_8_);
  dStack_1b0 = auVar50._8_8_ * (dVar35 * dStack_120 + dStack_110 + auVar39._0_8_);
  dVar35 = __real_3ff0000000000000 / (double)*(int *)(lVar16 + 0x40);
  auVar37 = blendpd(auVar44,auVar39,2);
  auVar9._4_8_ = auVar39._8_8_;
  auVar9._0_4_ = (int)((ulonglong)dVar48 >> 0x20);
  auVar40._0_8_ = auVar9._0_8_ << 0x20;
  auVar40._8_4_ = SUB84(dStack_1b0,0);
  auVar40._12_4_ = (int)((ulonglong)dStack_1b0 >> 0x20);
  local_1a8 = (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar33._4_4_,
                               ~(uint)lVar24 & auVar33._0_4_) *
              (auVar47._0_8_ * dStack_120 + local_108 + auVar37._0_8_);
  local_238 = (FPCGLandscapeCacheEntry *)0x0;
  FStack_230.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  dVar31 = dVar35 * dVar48;
  dVar35 = dVar35 * auVar40._8_8_;
  local_1d8 = (longlong)ROUND((dVar31 + dVar31) - __real_3fe0000000000000) >> 1;
  local_208.Coordinate.field0_0x0._s_0.X = (int)local_1d8;
  local_1d0 = (longlong)ROUND((dVar35 + dVar35) - __real_3fe0000000000000) >> 1;
  local_208.Coordinate.field0_0x0._s_0.Y = (int)local_1d0;
  local_208.LandscapeGuid.A = uVar3;
  local_208.LandscapeGuid.B = uVar5;
  local_208.LandscapeGuid.C = uVar4;
  local_208.LandscapeGuid.D = uVar6;
  local_1b8 = dVar48;
  pUVar17 = AActor::GetLevel((AActor *)param_1);
  if (pUVar17 != (ULevel *)0x0) {
    pUVar17 = AActor::GetLevel((AActor *)param_1);
    pIVar18 = ULevel::GetWorldPartitionRuntimeCell(pUVar17);
    if (pIVar18 == (IWorldPartitionCell *)0x0) {
      pUVar20 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar19 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar20);
      local_210 = 0;
      if (pUVar19 == (UObject *)0x0) {
        local_208.WorldKey.ObjectIndex = 0;
        local_208.WorldKey.ObjectSerialNumber = 0;
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar19);
        }
        local_220.ObjectIndex = 0;
        local_220.ObjectSerialNumber = 0;
        local_1e0 = pUVar19;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar19);
        }
        FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_1e0);
        local_208.WorldKey = (FObjectKey)local_220;
      }
    }
    else {
      pUVar17 = AActor::GetLevel((AActor *)param_1);
      pIVar18 = ULevel::GetWorldPartitionRuntimeCell(pUVar17);
      pUVar19 = (UObject *)(**(code **)((longlong)*pIVar18 + 0x78))(pIVar18);
      local_218 = 0;
      if (pUVar19 == (UObject *)0x0) {
        local_208.WorldKey.ObjectIndex = 0;
        local_208.WorldKey.ObjectSerialNumber = 0;
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar19);
        }
        local_228.ObjectIndex = 0;
        local_228.ObjectSerialNumber = 0;
        local_1e8 = pUVar19;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar19);
        }
        FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_1e8);
        local_208.WorldKey = (FObjectKey)local_228;
      }
    }
  }
  if ((this->bLoggedNoCacheError == false) &&
     (*(int *)&(this->CachedData).field_0x8 == *(int *)&(this->CachedData).field_0x34)) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    this->bLoggedNoCacheError = true;
  }
  uVar13 = ::GetTypeHash(&local_208);
  iVar14 = TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<UPCGLandscapeCache::CacheMapKey>
                     ((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                       *)&this->CachedData,uVar13,&local_208);
  if (iVar14 != -1) {
    lVar24 = (longlong)iVar14 * 0x38 + *(longlong *)&this->CachedData;
    puVar21 = (undefined8 *)(lVar24 + 0x20);
    if (lVar24 == 0) {
      puVar21 = (undefined8 *)0x0;
    }
    if (puVar21 != (undefined8 *)0x0) {
      local_1c0.ReferenceController = (TReferenceControllerBase<1> *)puVar21[1];
      local_238 = (FPCGLandscapeCacheEntry *)*puVar21;
      if (local_1c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1c0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1c0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1c8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_230,&local_1c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c0.ReferenceController);
    }
  }
  this_00 = local_238;
  bVar12 = true;
  if (local_238 == (FPCGLandscapeCacheEntry *)0x0) goto LAB_149cd9880;
  if ((local_238 == (FPCGLandscapeCacheEntry *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  LOCK();
  paVar1 = &this->CacheTouch;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  this_00->Touch = (int)aVar2;
  if (this_00->bDataLoaded == false) {
    lpCriticalSection = &this_00->DataLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this_00->bDataLoaded != false) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_149cd9828;
    }
    bVar12 = FPCGLandscapeCacheEntry::SerializeFromBulkData(this_00);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (!bVar12) goto LAB_149cd9828;
    iVar14 = FPCGLandscapeCacheEntry::GetMemorySize(this_00);
    LOCK();
    this->CacheMemorySize = (atomic<int>)((int)this->CacheMemorySize + iVar14);
    UNLOCK();
  }
  else {
LAB_149cd9828:
    FVar11.ReferenceController = FStack_230.ReferenceController;
    if (this_00->bDataLoaded == false) {
      local_238 = (FPCGLandscapeCacheEntry *)0x0;
      if (FStack_230.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        FStack_230.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar1 = &(FVar11.ReferenceController)->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(FVar11.ReferenceController)->_padding_)();
          LOCK();
          paVar1 = &(FVar11.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((FVar11.ReferenceController)->_padding_ + 8))(FVar11.ReferenceController,1)
            ;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      this_00 = (FPCGLandscapeCacheEntry *)0x0;
    }
  }
  bVar12 = this_00 == (FPCGLandscapeCacheEntry *)0x0;
LAB_149cd9880:
  if (this_00 != (FPCGLandscapeCacheEntry *)0x0) {
    if ((bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((this_00->LayerData).ArrayNum != 0) {
      iVar14 = *(int *)(lVar16 + 0x40) * (int)local_1d8;
      iVar23 = *(int *)(lVar16 + 0x40) * (int)local_1d0;
      if ((this_00->bDataLoaded == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("bDataLoaded",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                              ,0x138,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_198._s_0.X = dVar48 - (double)iVar14;
      local_198._s_0.Y = auVar40._8_8_ - (double)iVar23;
      pFVar22 = PCGLandscapeCache::CalcSafeIndices
                          (&local_158,(TVector2<double> *)&local_198._s_0,this_00->Stride);
      local_188.X0Y0 = pFVar22->X0Y0;
      local_188.X1Y0 = pFVar22->X1Y0;
      local_188.X0Y1 = pFVar22->X0Y1;
      local_188.X1Y1 = pFVar22->X1Y1;
      local_188.XFraction = pFVar22->XFraction;
      local_188.YFraction = pFVar22->YFraction;
      FPCGLandscapeCacheEntry::GetInterpolatedPointMetadataInternal
                (this_00,&local_188,param_3,param_4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_230.ReferenceController);
  return;
}

// Serialize @ 149cdb6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UPCGLandscapeCache::Serialize(UPCGLandscapeCache *this,FArchive *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FPCGLandscapeCacheEntry *pFVar5;
  undefined8 uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  FPCGLandscapeCacheEntry *pFVar14;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *pTVar15;
  bool bVar16;
  int iVar17;
  TReferenceControllerBase<1> *pTVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *puVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined1 *puVar23;
  TReferenceControllerBase<1> *pTVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  undefined1 *puVar29;
  int iVar30;
  TReferenceControllerBase<1> *pTVar31;
  EPCGLandscapeCacheSerializationContents local_res10;
  undefined1 local_res18 [8];
  FLLMScope local_res20 [2];
  uint local_158 [2];
  undefined8 local_150;
  FGuid local_148;
  undefined8 local_138;
  FPCGLandscapeCacheEntry *local_130;
  TReferenceControllerBase<1> *pTStack_128;
  FGuid local_120;
  undefined8 local_110;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [12];
  FName local_cc;
  undefined8 local_c0;
  UPCGLandscapeCache *local_b8;
  FMemScope local_b0;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FGuid *local_78;
  FPCGLandscapeCacheEntry **local_70;
  FGuid local_68;
  undefined8 local_58;
  undefined8 local_50;
  
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_cc = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_b0,&local_cc,true);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar17 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     iVar17 < 0xbf)) {
    this->SerializationMode = SerializeOnlyAtCook;
  }
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 4) == 0) ||
     ((this->SerializationMode != AlwaysSerialize &&
      (((this->SerializationMode != SerializeOnlyAtCook || (*(longlong *)&param_1->field_0x68 == 0))
       || (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))))) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    local_res10 = SerializeAll;
  }
  else {
    local_res10 = this->CookedSerializedContents;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    FArchiveState::CustomVer((FArchiveState *)param_1,&FPCGCustomVersion::GUID);
  }
  pTVar31 = (TReferenceControllerBase<1> *)0x0;
  uVar28 = 0;
  local_158[0] = uVar28;
  if (((param_1->field_0x28 & 1) == 0) && (bVar16)) {
    local_158[0] = *(int *)&(this->CachedData).field_0x8 - *(int *)&(this->CachedData).field_0x34;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_158,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_158);
    }
  }
  else {
    local_158[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if (bVar16) {
      uVar20 = *(uint *)&(this->CachedData).field_0x28;
      local_f8 = &(this->CachedData).field_0x10;
      local_108 = &this->CachedData;
      uStack_fc = 1;
      local_e8 = 0;
      uStack_ec = local_e8;
      if (uVar20 != 0) {
        puVar26 = *(uint **)&(this->CachedData).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)local_f8;
        }
        uVar27 = *puVar26;
        pTVar22 = pTVar31;
        pTVar24 = pTVar31;
        local_e8 = 0;
        uVar28 = 0;
        while (uVar27 == 0) {
          iVar17 = (int)pTVar22;
          local_e8 = (int)pTVar24 + 0x20;
          pTVar24 = (TReferenceControllerBase<1> *)(ulonglong)local_e8;
          uVar28 = iVar17 + 1;
          pTVar22 = (TReferenceControllerBase<1> *)(ulonglong)uVar28;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
          goto LAB_149cdbbf5;
          uVar27 = puVar26[(longlong)iVar17 + 1];
        }
        uStack_fc = -uVar27 & uVar27;
        uVar1 = (ulonglong)uStack_fc * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_d8._4_4_ = (undefined4)lVar19;
        uStack_ec = (local_e8 - 1) + local_d8._4_4_;
        if ((int)uVar20 < (int)uStack_ec) {
LAB_149cdbbf5:
          uStack_ec = uVar20;
        }
      }
      puVar29 = &(this->CachedData).field_0x10;
      uVar20 = *(uint *)&(this->CachedData).field_0x28;
      iStack_e0 = *(int *)&(this->CachedData).field_0x8 - *(int *)&(this->CachedData).field_0x34;
      uVar27 = uVar20 & 0xffffffe0;
      uStack_f0 = 0xffffffff;
      TStack_a0.CurrentBitIndex = uStack_ec;
      TStack_a0.UnvisitedBitMask = 0xffffffff;
      TStack_a0._padding_ = CONCAT44(uStack_fc,uVar28);
      iVar17 = (int)uVar20 >> 5;
      TStack_a0._28_4_ = uStack_ec;
      TStack_a0.BaseBitIndex = local_e8;
      uStack_80 = CONCAT44(uStack_dc,iStack_e0);
      local_150 = CONCAT44(local_150._4_4_,uVar20);
      uVar25 = uVar20;
      uStack_100 = uVar28;
      uStack_e4 = uStack_ec;
      local_a8 = local_108;
      TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f8;
      if ((int)uVar20 < 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar16) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar25 = (uint)local_150;
      }
      uVar28 = *(uint *)&(this->CachedData).field_0x28;
      if (uVar25 != uVar28) {
        puVar3 = *(undefined1 **)&(this->CachedData).field_0x20;
        local_150 = CONCAT44(local_150._4_4_,uVar28);
        puVar23 = puVar29;
        if (puVar3 != (undefined1 *)0x0) {
          puVar23 = puVar3;
        }
        uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar17 * 4);
        while (uVar20 == 0) {
          lVar19 = (longlong)iVar17;
          uVar27 = uVar27 + 0x20;
          iVar17 = iVar17 + 1;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_149cdbd00;
          uVar20 = *(uint *)(puVar23 + lVar19 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_d8._8_4_ = (undefined4)lVar19;
        uVar27 = local_d8._8_4_ + -1 + uVar27;
        if ((int)uVar28 < (int)uVar27) {
          uVar27 = uVar28;
        }
        local_150 = CONCAT44(local_150._4_4_,uVar27);
      }
LAB_149cdbd00:
      iVar17 = (uint)local_150;
      while( true ) {
        pTVar15 = local_a8;
        if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_a0.CurrentBitIndex == iVar17) &&
            (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar29)) &&
           (pTVar15 == &this->CachedData)) break;
        puVar21 = (undefined8 *)(*(longlong *)pTVar15 + (longlong)TStack_a0.CurrentBitIndex * 0x38);
        local_120._0_8_ = *puVar21;
        local_120._8_8_ = puVar21[1];
        local_110 = puVar21[2];
        ::operator<<(param_1,&local_120);
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_110,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_110);
          }
        }
        else {
          local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)*plVar2);
          *plVar2 = *plVar2 + 4;
        }
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))
                      (param_1,(uint *)((longlong)&local_110 + 4),4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)((longlong)&local_110 + 4));
          }
        }
        else {
          local_110 = CONCAT44(*(undefined4 *)*plVar2,(uint)local_110);
          *plVar2 = *plVar2 + 4;
        }
        if ((puVar21[4] == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar30 = (int)pTVar31;
        pTVar31 = (TReferenceControllerBase<1> *)(ulonglong)(iVar30 + 1);
        FPCGLandscapeCacheEntry::Serialize
                  ((FPCGLandscapeCacheEntry *)puVar21[4],param_1,(UObject *)this,iVar30,local_res10)
        ;
        TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
      }
    }
  }
  else {
    TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
               *)&this->CachedData,local_158[0]);
    pTVar22 = _UNK_150651568;
    pFVar5 = ___xmm_00000000000000000000000000000010;
    if (0 < (int)local_158[0]) {
      local_150 = 1;
      pTVar24 = pTVar31;
      do {
        uVar6 = local_150;
        local_148.A = 0;
        local_148.B = 0;
        local_138 = 0;
        local_148.C = 0;
        local_148.D = 0;
        ::operator<<(param_1,&local_148);
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_138,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_138);
          }
        }
        else {
          local_138 = CONCAT44(local_138._4_4_,*(undefined4 *)*plVar2);
          *plVar2 = *plVar2 + 4;
        }
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))
                      (param_1,(uint *)((longlong)&local_138 + 4),4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)((longlong)&local_138 + 4));
          }
        }
        else {
          local_138 = CONCAT44(*(undefined4 *)*plVar2,(uint)local_138);
          *plVar2 = *plVar2 + 4;
        }
        pTVar18 = ::operator_new(0xc0);
        if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
          local_130 = pFVar5;
          pTStack_128 = pTVar22;
          pTVar18 = pTVar31;
        }
        else {
          pTVar18->SharedReferenceCount = SUB84(uVar6,0);
          pTVar18->WeakReferenceCount = SUB84(uVar6,0);
          pTVar18->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFPCGLandscapeCacheEntry___00_SharedPointerInternals__6B_
          ;
          memset(pTVar18 + 1,0,0xb0);
          uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          pTVar18[2]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          *(undefined8 *)&pTVar18[2].SharedReferenceCount = uVar6;
          pTVar18[3]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          *(undefined4 *)&pTVar18[4].WeakReferenceCount.field_0x1 = 0xffffffff;
          *(undefined1 *)((longlong)&pTVar18[5]._padding_ + 1) = 0xff;
          uVar7 = FIoChunkId::InvalidChunkId.Id[1];
          uVar8 = FIoChunkId::InvalidChunkId.Id[2];
          uVar9 = FIoChunkId::InvalidChunkId.Id[3];
          uVar10 = FIoChunkId::InvalidChunkId.Id[4];
          uVar11 = FIoChunkId::InvalidChunkId.Id[5];
          uVar12 = FIoChunkId::InvalidChunkId.Id[6];
          uVar13 = FIoChunkId::InvalidChunkId.Id[7];
          pTVar18[5].SharedReferenceCount.field_0x0 = FIoChunkId::InvalidChunkId.Id[0];
          pTVar18[5].SharedReferenceCount.field_0x1 = uVar7;
          pTVar18[5].SharedReferenceCount.field_0x2 = uVar8;
          pTVar18[5].SharedReferenceCount.field_0x3 = uVar9;
          pTVar18[5].WeakReferenceCount.field_0x0 = uVar10;
          pTVar18[5].WeakReferenceCount.field_0x1 = uVar11;
          pTVar18[5].WeakReferenceCount.field_0x2 = uVar12;
          pTVar18[5].WeakReferenceCount.field_0x3 = uVar13;
          *(undefined4 *)&pTVar18[6]._padding_ = FIoChunkId::InvalidChunkId.Id._8_4_;
          InitializeCriticalSectionAndSpinCount
                    ((LPCRITICAL_SECTION)&pTVar18[8].SharedReferenceCount,4000);
          *(undefined4 *)&pTVar18[0xb]._padding_ = 0;
          *(undefined1 *)((longlong)&pTVar18[0xb]._padding_ + 4) = 0;
          *(undefined4 *)&pTVar18[0xb].SharedReferenceCount.field_0x0 = 0;
          pTVar18[0xb].WeakReferenceCount = (atomic<int>)0x0;
          local_c0 = 0;
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)&pTVar18[0xb].SharedReferenceCount,(FObjectPtr)&local_c0);
          if (((FPCGLandscapeCacheEntry *)(pTVar18 + 1) == (FPCGLandscapeCacheEntry *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar16)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          LOCK();
          pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
          UNLOCK();
          local_130 = (FPCGLandscapeCacheEntry *)(pTVar18 + 1);
          pTStack_128 = pTVar18;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        if ((local_130 == (FPCGLandscapeCacheEntry *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = local_130;
        local_b8 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UPCGLandscapeCache *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&(pFVar14->OwningCache).WeakPtr,(FObjectPtr)&local_b8);
        if ((local_130 == (FPCGLandscapeCacheEntry *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FPCGLandscapeCacheEntry::Serialize
                  (local_130,param_1,(UObject *)this,(int)pTVar24,local_res10);
        local_58 = local_138;
        local_78 = &local_68;
        local_50 = 0;
        local_70 = &local_130;
        local_68.A = local_148.A;
        local_68.B = local_148.B;
        local_68.C = local_148.C;
        local_68.D = local_148.D;
        TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UPCGLandscapeCache::CacheMapKey_const_&,TSharedPtr<FPCGLandscapeCacheEntry,1>_&&>_>
                  ((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                    *)&this->CachedData,
                   (TPairInitializer<UPCGLandscapeCache::CacheMapKey_const_&,TSharedPtr<FPCGLandscapeCacheEntry,1>_&&>
                    *)local_d8,(bool *)&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_128);
        uVar28 = (int)pTVar24 + 1;
        pTVar24 = (TReferenceControllerBase<1> *)(ulonglong)uVar28;
      } while ((int)uVar28 < (int)local_158[0]);
    }
  }
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// Serialize @ 149cdbe80

void __thiscall
UPCGLandscapeCache::Serialize(UPCGLandscapeCache *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUPCGLandscapeCache @ 149cdd480

void __cdecl UPCGLandscapeCache::StaticRegisterNativesUPCGLandscapeCache(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGLandscapeCache_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TakeOwnership @ 149cddab0

void __thiscall
UPCGLandscapeCache::TakeOwnership(UPCGLandscapeCache *this,UPCGLandscapeCache *param_1)

{
  CacheMapKey *pCVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
  *pTVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  CacheMapKey *pCVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res20 [8];
  undefined1 local_188 [8];
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  ulonglong local_178;
  TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
  *local_170;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  TPairInitializer<UPCGLandscapeCache::CacheMapKey_&,TSharedPtr<FPCGLandscapeCacheEntry,1>_&&>
  local_130;
  UPCGLandscapeCache *local_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  FSharedReferencer<1> FStack_108;
  TIntPoint<int>_u_0 local_100;
  int iStack_f8;
  int iStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  CacheMapKey *local_70;
  CacheMapKey *local_68;
  undefined4 local_44;
  
  UpdateCacheWorldKeys(param_1);
  local_170 = (TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
               *)&param_1->CachedData;
  iVar10 = *(int *)&(param_1->CachedData).field_0x28;
  local_158 = &(param_1->CachedData).field_0x10;
  bVar9 = false;
  iStack_160 = 0;
  local_178 = 1;
  local_148 = 0;
  uStack_15c = 1;
  iStack_14c = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(param_1->CachedData).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_158;
    }
    uStack_15c = *puVar18;
    while (uStack_15c == 0) {
      lVar11 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_15c = 1;
      iStack_14c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160) goto LAB_149cddb6e;
      uStack_15c = puVar18[lVar11 + 1];
    }
    uStack_15c = -uStack_15c & uStack_15c;
    uVar2 = (ulonglong)uStack_15c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_138 = (int)lVar11;
    iStack_14c = local_148 + -1 + local_138;
    if (iVar10 < iStack_14c) {
      iStack_14c = iVar10;
    }
  }
LAB_149cddb6e:
  uStack_144 = local_44;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->CachedData).field_0x10;
  iStack_140 = *(int *)&(param_1->CachedData).field_0x8 - *(int *)&(param_1->CachedData).field_0x34;
  uVar15 = *(uint *)&(param_1->CachedData).field_0x28;
  TStack_c8._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_150 = 0xffffffff;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_c8.CurrentBitIndex = iStack_14c;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_c8._28_4_ = local_44;
  TStack_c8.BaseBitIndex = local_148;
  uStack_a8 = CONCAT44(uStack_13c,iStack_140);
  local_180 = pTVar19;
  local_168 = (TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
               *)local_170;
  local_d0 = local_170;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_158;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(param_1->CachedData).field_0x28;
  if (uVar15 != uVar3) {
    puVar16 = *(undefined1 **)&(param_1->CachedData).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar19;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_149cddc80;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_134 = (int)lVar11;
    uVar15 = local_134 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_149cddc80:
  while( true ) {
    pTVar6 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c8.CurrentBitIndex == uVar15) && (TStack_c8.Array == pTVar19)) &&
       (pTVar6 == local_170)) break;
    pCVar14 = (CacheMapKey *)
              ((longlong)TStack_c8.CurrentBitIndex * 0x38 + *(longlong *)&pTVar6->Elements);
    lVar11._0_4_ = pCVar14[1].LandscapeGuid.A;
    lVar11._4_4_ = pCVar14[1].LandscapeGuid.B;
    pCVar1 = pCVar14 + 1;
    if (lVar11 != 0) {
      uVar13 = ::GetTypeHash(pCVar14);
      iVar10 = TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UPCGLandscapeCache::CacheMapKey>
                         ((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                           *)&this->CachedData,uVar13,pCVar14);
      pTVar19 = local_180;
      if (iVar10 == -1) {
        lVar4._0_4_ = (pCVar1->LandscapeGuid).A;
        lVar4._4_4_ = (pCVar1->LandscapeGuid).B;
        if ((lVar4 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar11 = *(longlong *)&pCVar1->LandscapeGuid;
        local_120 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UPCGLandscapeCache *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar11 + 0xa8),(FObjectPtr)&local_120);
        local_70 = pCVar14;
        local_68 = pCVar1;
        TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UPCGLandscapeCache::CacheMapKey_&,TSharedPtr<FPCGLandscapeCacheEntry,1>_&&>_>
                  ((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                    *)&this->CachedData,&local_130,(bool *)&local_70);
        local_110._0_4_ = 0;
        local_110._4_4_ = 0;
        FStack_108.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pCVar1 != (CacheMapKey *)local_110) {
          (pCVar1->LandscapeGuid).A = 0;
          (pCVar1->LandscapeGuid).B = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&pCVar14[1].LandscapeGuid.C,&FStack_108);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_108.ReferenceController);
        bVar9 = true;
        pTVar19 = local_180;
      }
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iStack_f8 = 0;
  local_e0 = 0;
  puVar16 = &(param_1->CachedLayerNames).Elements.field_0x10;
  iVar10 = *(int *)&(param_1->CachedLayerNames).Elements.field_0x28;
  this_00 = &param_1->CachedLayerNames;
  iStack_e4 = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(param_1->CachedLayerNames).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar16;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_149cdde40;
      uVar15 = puVar18[lVar11 + 1];
    }
    local_178 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = local_178 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_130.Key._4_4_ = (int)lVar11;
    iStack_e4 = local_e0 + -1 + local_130.Key._4_4_;
    if (iVar10 < iStack_e4) {
      iStack_e4 = iVar10;
    }
  }
LAB_149cdde40:
  iStack_f4 = (int)local_178;
  iStack_dc = iStack_14c;
  iStack_d8 = *(int *)&(param_1->CachedLayerNames).Elements.field_0x8 -
              *(int *)&(param_1->CachedLayerNames).Elements.field_0x34;
  uVar15 = *(uint *)&(param_1->CachedLayerNames).Elements.field_0x28;
  uStack_e8 = 0xffffffff;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(iStack_f4,iStack_f8);
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_98._28_4_ = iStack_14c;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = (TIntPoint<int>_u_0)this_00;
  local_f0 = puVar16;
  local_a0 = this_00;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(param_1->CachedLayerNames).Elements.field_0x28;
  if (uVar15 != uVar3) {
    puVar17 = *(undefined1 **)&(param_1->CachedLayerNames).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar16;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_149cddf60;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_149cddf60:
  while( true ) {
    pTVar7 = local_a0;
    if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
        (int)uStack_78) {
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_98.CurrentBitIndex == uVar15) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) && (pTVar7 == this_00)
       ) break;
    local_118 = *(undefined8 *)
                 (*(longlong *)&pTVar7->Elements + (longlong)TStack_98.CurrentBitIndex * 0x10);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->CachedLayerNames,(FName *)&local_130.Value,(bool *)&local_118);
    bVar9 = true;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
  ::Reset(local_170);
  if (*(int *)&(param_1->CachedLayerNames).Elements.field_0x8 !=
      *(int *)&(param_1->CachedLayerNames).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    iVar10 = *(int *)&(param_1->CachedLayerNames).Elements.field_0xc;
    *(undefined4 *)&(param_1->CachedLayerNames).Elements.field_0x8 = 0;
    if (iVar10 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,
                 (int *)&(param_1->CachedLayerNames).Elements.field_0xc);
    }
    *(undefined4 *)&(param_1->CachedLayerNames).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CachedLayerNames).Elements.field_0x34 = 0;
    *(undefined4 *)&(param_1->CachedLayerNames).Elements.field_0x28 = 0;
  }
  if ((bVar9) && (this->SerializationMode != NeverSerialize)) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  return;
}

// Tick @ 149cde130

void __thiscall UPCGLandscapeCache::Tick(UPCGLandscapeCache *this,float param_1)

{
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  float fVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  TConsoleVariableData<float> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  ForAnyElementType FVar9;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_f8;
  int local_f0;
  int iStack_ec;
  int local_e8;
  longlong local_e0;
  int local_d8;
  longlong local_d0;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  if ((this->bInitialized == false) &&
     (lVar13 = (**(code **)(this->_padding_ + 0x180))(), lVar13 != 0)) {
    UpdateCacheWorldKeys(this);
    this->bInitialized = true;
  }
  this->TimeSinceLastCleanupInSeconds = param_1 + this->TimeSinceLastCleanupInSeconds;
  pTVar7 = CVarLandscapeCacheGCFrequency.Ref;
  bVar11 = IsInParallelGameThread();
  uVar19 = 0;
  if (!bVar11) {
    bVar11 = IsInGameThread();
    uVar14 = 4;
    if (!bVar11) goto LAB_149cde1bb;
  }
  uVar14 = uVar19;
LAB_149cde1bb:
  fVar4 = *(float *)((longlong)pTVar7->ShadowedValue + uVar14);
  if (fVar4 < this->TimeSinceLastCleanupInSeconds || fVar4 == this->TimeSinceLastCleanupInSeconds) {
    uVar24 = 0;
    this->TimeSinceLastCleanupInSeconds = 0.0;
    pTVar8 = CVarLandscapeCacheSizeThreshold.Ref;
    bVar11 = IsInParallelGameThread();
    if ((bVar11) || (bVar11 = IsInGameThread(), uVar14 = 4, bVar11)) {
      uVar14 = uVar19;
    }
    local_d8 = *(int *)((longlong)pTVar8->ShadowedValue + uVar14) << 0x14;
    if (local_d8 < (int)this->CacheMemorySize) {
      pTVar1 = &this->CachedData;
      uStack_bc = 1;
      puVar2 = &(this->CachedData).field_0x10;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = 0;
      iStack_ec = 0;
      local_a8 = 0;
      uVar21 = *(uint *)&(this->CachedData).field_0x28;
      uStack_ac = local_a8;
      if (uVar21 != 0) {
        puVar26 = *(uint **)&(this->CachedData).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)puVar2;
        }
        uVar12 = *puVar26;
        uVar14 = uVar19;
        local_a8 = 0;
        uVar24 = 0;
        while (uVar12 == 0) {
          iVar15 = (int)uVar19;
          local_a8 = (int)uVar14 + 0x20;
          uVar14 = (ulonglong)local_a8;
          uVar24 = iVar15 + 1;
          uVar19 = (ulonglong)uVar24;
          uStack_ac = uVar21;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
          goto LAB_149cde2ad;
          uVar12 = puVar26[(longlong)iVar15 + 1];
        }
        uStack_bc = -uVar12 & uVar12;
        uVar19 = (ulonglong)uStack_bc * 2 + 1;
        lVar13 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_98 = (int)lVar13;
        uStack_ac = (local_a8 - 1) + local_98;
        if ((int)uVar21 < (int)uStack_ac) {
          uStack_ac = uVar21;
        }
      }
LAB_149cde2ad:
      uVar12 = *(uint *)&(this->CachedData).field_0x28;
      uVar18 = uVar12 & 0xffffffe0;
      iStack_a0 = *(int *)&(this->CachedData).field_0x8 - *(int *)&(this->CachedData).field_0x34;
      uStack_b0 = 0xffffffff;
      TStack_88._padding_ = CONCAT44(uStack_bc,uVar24);
      TStack_88.CurrentBitIndex = uStack_ac;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar12 >> 5;
      TStack_88._28_4_ = uStack_ac;
      TStack_88.BaseBitIndex = local_a8;
      uStack_68 = CONCAT44(uStack_9c,iStack_a0);
      local_c8 = pTVar1;
      uStack_c0 = uVar24;
      local_b8 = puVar2;
      uStack_a4 = uStack_ac;
      local_90 = pTVar1;
      TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar12 < 0) || ((int)uVar21 < (int)uVar12)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar24 = *(uint *)&(this->CachedData).field_0x28;
      if (uVar12 != uVar24) {
        puVar25 = *(undefined1 **)&(this->CachedData).field_0x20;
        if (puVar25 == (undefined1 *)0x0) {
          puVar25 = puVar2;
        }
        uVar21 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar15 * 4);
        while (uVar21 == 0) {
          lVar13 = (longlong)iVar15;
          uVar18 = uVar18 + 0x20;
          iVar15 = iVar15 + 1;
          uVar12 = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_149cde3b0;
          uVar21 = *(uint *)(puVar25 + lVar13 * 4 + 4);
        }
        uVar19 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_94 = (int)lVar13;
        uVar12 = local_94 + -1 + uVar18;
        if ((int)uVar24 < (int)uVar12) {
          uVar12 = uVar24;
        }
      }
LAB_149cde3b0:
      while( true ) {
        pTVar10 = local_90;
        if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
          local_res10[0] = (FIdentityFunctor)0x0;
          `TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_88.CurrentBitIndex == uVar12) &&
            (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar10 == pTVar1)) break;
        pTVar16 = (TSharedPtr<FPCGLandscapeCacheEntry,1> *)
                  (*(longlong *)pTVar10 + 0x20 + (longlong)TStack_88.CurrentBitIndex * 0x38);
        if ((pTVar16->Object == (FPCGLandscapeCacheEntry *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pTVar16->Object->bDataLoaded != false) {
          if (((local_f8.Data <= pTVar16) &&
              (pTVar16 < (TSharedPtr<FPCGLandscapeCacheEntry,1> *)
                         (local_f8.Data + (longlong)iStack_ec * 0x10))) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_f0 == iStack_ec) {
            local_f0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_f8,&iStack_ec);
          }
          lVar13 = (longlong)local_f0;
          local_f0 = local_f0 + 1;
          *(FPCGLandscapeCacheEntry **)&local_f8.Data[lVar13 * 0x10].field_0x0 = pTVar16->Object;
          pTVar5 = (pTVar16->SharedReferenceCount).ReferenceController;
          *(TReferenceControllerBase<1> **)(local_f8.Data + lVar13 * 0x10 + 8) = pTVar5;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
      AlgoImpl::
      IntroSortInternal<TSharedPtr<FPCGLandscapeCacheEntry,1>,int,FIdentityFunctor,_UPCGLandscapeCache::Tick_::__l8::<lambda_1>_>
                ((TSharedPtr<FPCGLandscapeCacheEntry,1> *)local_f8.Data,local_f0,local_res10[0],
                 (<lambda_1>)local_res10[0]);
      uVar24 = 0;
      local_e8 = 0;
      iVar15 = 0;
      if (0 < local_f0) {
        local_e0 = 0;
        local_d0 = 0;
        do {
          lVar13 = local_d0;
          iVar15 = local_e8;
          if ((int)this->CacheMemorySize <= local_d8) {
            if ((int)uVar24 < local_f0) {
              lVar13 = (longlong)(int)uVar24 << 4;
              do {
                uVar21 = 0;
                if ((int)uVar24 < local_f0) {
                  uVar21 = ~uVar24 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar24 = uVar24 + 1;
                pFVar23 = local_f8.Data + lVar13;
                lVar13 = lVar13 + 0x10;
                if ((*(longlong *)pFVar23 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                piVar3 = (int *)(*(longlong *)pFVar23 + 0xa0);
                *piVar3 = *piVar3 - iVar15;
              } while ((int)uVar24 < local_f0);
            }
            break;
          }
          uVar12 = ~uVar24 >> 0x1f;
          uVar21 = 0;
          if ((int)uVar24 < local_f0) {
            uVar21 = uVar12;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar9.Data = local_f8.Data;
          if ((*(longlong *)(local_f8.Data + lVar13) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar13 = *(longlong *)(FVar9.Data + lVar13);
          iVar15 = *(int *)(lVar13 + 0x70);
          lVar17 = *(longlong *)(lVar13 + 0x68);
          iVar22 = *(int *)(lVar13 + 100) * 0x18;
          lVar20 = (longlong)iVar15 * 0x10 + lVar17;
          while( true ) {
            if (*(int *)(lVar13 + 0x70) != iVar15) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (lVar17 == lVar20) break;
            iVar22 = iVar22 + *(int *)(lVar17 + 0xc);
            lVar17 = lVar17 + 0x10;
          }
          LOCK();
          this->CacheMemorySize = (atomic<int>)((int)this->CacheMemorySize - iVar22);
          UNLOCK();
          uVar21 = 0;
          if ((int)uVar24 < local_f0) {
            uVar21 = uVar12;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar13 = local_d0;
          FVar9.Data = local_f8.Data;
          if ((*(longlong *)(local_f8.Data + local_d0) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_e8 = *(int *)(*(longlong *)(FVar9.Data + lVar13) + 0xa0);
          uVar21 = 0;
          if ((int)uVar24 < local_f0) {
            uVar21 = uVar12;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar9.Data = local_f8.Data;
          if ((*(longlong *)(local_f8.Data + lVar13) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar17 = *(longlong *)(FVar9.Data + lVar13);
          if ((*(char *)(lVar17 + 0xa4) == '\0') &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bDataLoaded",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                                  ,0x157,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          piVar3 = (int *)(lVar17 + 100);
          *(undefined4 *)(lVar17 + 0x60) = 0;
          if (*(int *)(lVar17 + 100) < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,(ForAnyElementType *)(lVar17 + 0x58),0,piVar3);
          }
          iVar15 = *(int *)(lVar17 + 0x60);
          if (*piVar3 != iVar15) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar15,(ForAnyElementType *)(lVar17 + 0x58),iVar15,piVar3);
          }
          piVar3 = (int *)(lVar17 + 0x74);
          if (*(int *)(lVar17 + 0x74) < 0) {
            DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                      (*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)(lVar17 + 0x68),
                       *(int *)(lVar17 + 0x70));
            *(undefined4 *)(lVar17 + 0x70) = 0;
            if (*piVar3 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,(ForAnyElementType *)(lVar17 + 0x68),0,piVar3);
            }
          }
          else {
            DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                      (*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)(lVar17 + 0x68),
                       *(int *)(lVar17 + 0x70));
            *(undefined4 *)(lVar17 + 0x70) = 0;
          }
          iVar15 = *(int *)(lVar17 + 0x70);
          if (*piVar3 != iVar15) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar15,(ForAnyElementType *)(lVar17 + 0x68),iVar15,piVar3);
          }
          *(undefined1 *)(lVar17 + 0xa4) = 0;
          *(undefined4 *)(lVar17 + 0xa0) = 0;
          uVar21 = 0;
          if ((int)uVar24 < local_f0) {
            uVar21 = uVar12;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar9.Data = local_f8.Data;
          if ((*(longlong *)(local_f8.Data + lVar13) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar13 = *(longlong *)(FVar9.Data + lVar13);
          iVar15 = *(int *)(lVar13 + 0x70);
          lVar17 = *(longlong *)(lVar13 + 0x68);
          iVar22 = *(int *)(lVar13 + 100) * 0x18;
          lVar20 = (longlong)iVar15 * 0x10 + lVar17;
          while( true ) {
            if (*(int *)(lVar13 + 0x70) != iVar15) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            if (lVar17 == lVar20) break;
            iVar22 = iVar22 + *(int *)(lVar17 + 0xc);
            lVar17 = lVar17 + 0x10;
          }
          if ((iVar22 != 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LoadedEntries[EntryIndex]->GetMemorySize()==0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                                  ,0x28c,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar24 = uVar24 + 1;
          local_e0 = local_e0 + 1;
          local_d0 = local_d0 + 0x10;
          iVar15 = local_e8;
        } while ((int)uVar24 < local_f0);
      }
      LOCK();
      this->CacheTouch = (atomic<int>)((int)this->CacheTouch - iVar15);
      UNLOCK();
      DestructItems<TSharedPtr<FPCGLandscapeCacheEntry,1>,int>
                ((TSharedPtr<FPCGLandscapeCacheEntry,1> *)local_f8.Data,local_f0);
      if ((TSharedPtr<FPCGLandscapeCacheEntry,1> *)local_f8.Data !=
          (TSharedPtr<FPCGLandscapeCacheEntry,1> *)0x0) {
        FMemory::Free(local_f8.Data);
      }
    }
  }
  return;
}

// UpdateCacheWorldKeys @ 149ce2040

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

void __thiscall UPCGLandscapeCache::UpdateCacheWorldKeys(UPCGLandscapeCache *this)

{
  undefined1 *puVar1;
  AActor *this_00;
  undefined1 *puVar2;
  void *pvVar3;
  code *pcVar4;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  ULevel *pUVar10;
  IWorldPartitionCell *pIVar11;
  UObject *pUVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  CacheMapKey *pCVar19;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *this_01;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 *puVar24;
  ForElementType<unsigned_int> FVar25;
  uint *puVar26;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8 [8];
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr local_1c8;
  undefined8 local_1c0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 local_1b0;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  undefined4 local_178;
  int local_174;
  int local_170;
  undefined1 local_16c [36];
  longlong local_148;
  undefined8 uStack_140;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *local_138;
  uint uStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_8c;
  undefined1 local_88 [24];
  uchar auStack_70 [8];
  ForElementType<unsigned_int> local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  ulonglong uVar23;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                         ,0x248,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (AActor *)this->_padding_;
  if (this_00 == (AActor *)0x0) {
    return;
  }
  pUVar8 = Z_Construct_UClass_AActor_NoRegister();
  iVar7 = (int)pUVar8->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar7) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8)
      != &pUVar8->_padding_) {
    return;
  }
  this_01 = &this->CachedData;
  uVar23 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60._0_4_ = 0;
  local_60._4_4_ = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar16 = *(int *)&(this->CachedData).field_0x8 - *(int *)&(this->CachedData).field_0x34;
  uVar21 = 0;
  if (uVar16 == 0) goto LAB_149ce23c6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar16);
  uVar17 = 1;
  if (3 < uVar16) {
    uVar15 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_178 = (undefined4)lVar14;
    uVar17 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar17 <= (int)local_40)) goto LAB_149ce23c6;
  local_40 = uVar17;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar17 != 0) {
    uVar16 = uVar17;
    if (uVar17 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar16 = 0;
        goto LAB_149ce21f1;
      }
    }
    else {
LAB_149ce21f1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar16,4);
    }
    if (0 < (int)uVar17) {
      uVar22 = (ulonglong)uVar17;
      uVar15 = uVar23;
      do {
        FVar13.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_48.Data;
        }
        uVar9 = (longlong)(int)uVar17 - 1U & uVar15;
        uVar15 = uVar15 + 1;
        *(undefined4 *)(FVar13.Data + uVar9 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_1c0 = 0x100000000;
    uStack_1ac = 0;
    if ((int)local_60 != 0) {
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_68;
      }
      uVar16 = *(uint *)FVar25;
      uVar15 = uVar23;
      uVar22 = uVar23;
      uVar17 = uVar21;
      while (uVar16 == 0) {
        uVar17 = (int)uVar22 + 0x20;
        uVar22 = (ulonglong)uVar17;
        iVar7 = (int)uVar15;
        uVar16 = iVar7 + 1;
        uVar15 = (ulonglong)uVar16;
        uStack_1ac = (ulonglong)uVar17 << 0x20;
        uVar9 = (ulonglong)local_1c0 >> 0x20;
        local_1c0 = CONCAT44((int)uVar9,uVar16);
        if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar16) {
          uStack_1ac = CONCAT44(uVar17,(int)local_60);
          goto LAB_149ce2301;
        }
        uVar16 = ((uint *)((longlong)FVar25 + 4))[iVar7];
      }
      local_1c0 = CONCAT44(-uVar16 & uVar16,(undefined4)local_1c0);
      uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_174 = (int)lVar14;
      iVar7 = local_174 + -1 + uVar17;
      if ((int)local_60 < iVar7) {
        iVar7 = (int)local_60;
      }
      uStack_1ac._4_4_ = (int)((ulonglong)uStack_1ac >> 0x20);
      uStack_1ac = CONCAT44(uStack_1ac._4_4_,iVar7);
    }
LAB_149ce2301:
    local_1b0 = 0xffffffff;
    local_1a0 = (longlong *)local_88;
    local_198._padding_ = local_1c0;
    local_198.UnvisitedBitMask = 0xffffffff;
    local_198.CurrentBitIndex = (int)uStack_1ac;
    local_198.BaseBitIndex = uStack_1ac._4_4_;
    local_198._28_4_ = uStack_1a4;
    local_198.Array = pTStack_1b8;
    if ((int)uStack_1ac < (int)local_60) {
      do {
        iVar7 = local_198.CurrentBitIndex;
        pCVar19 = (CacheMapKey *)((longlong)local_198.CurrentBitIndex * 0x38 + *local_1a0);
        uVar16 = ::GetTypeHash(pCVar19);
        uVar16 = local_40 - 1 & uVar16;
        pCVar19[1].Coordinate.field0_0x0._s_0.Y = uVar16;
        FVar13.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_48.Data;
        }
        lVar14 = (longlong)(int)(local_40 - 1 & uVar16);
        pCVar19[1].Coordinate.field0_0x0._s_0.X = *(int *)(FVar13.Data + lVar14 * 4);
        *(int *)(FVar13.Data + lVar14 * 4) = iVar7;
        local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
      } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
    }
  }
LAB_149ce23c6:
  iVar7 = *(int *)&(this->CachedData).field_0x28;
  puVar1 = &(this->CachedData).field_0x10;
  local_118 = 0;
  iStack_11c = 0;
  uStack_12c = 1;
  if (iVar7 != 0) {
    puVar26 = *(uint **)&(this->CachedData).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar16 = *puVar26;
    uVar21 = 0;
    while (uVar16 == 0) {
      uVar21 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar21;
      local_118 = local_118 + 0x20;
      iStack_11c = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar21) goto LAB_149ce243d;
      uVar16 = puVar26[(int)uVar21];
    }
    uStack_12c = -uVar16 & uVar16;
    uVar23 = (ulonglong)uStack_12c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_170 = (int)lVar14;
    iStack_11c = local_118 + -1 + local_170;
    if (iVar7 < iStack_11c) {
      iStack_11c = iVar7;
    }
  }
LAB_149ce243d:
  uStack_114 = local_8c;
  iStack_110 = *(int *)&(this->CachedData).field_0x8 - *(int *)&(this->CachedData).field_0x34;
  uVar16 = *(uint *)&(this->CachedData).field_0x28;
  uStack_120 = 0xffffffff;
  uVar17 = uVar16 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(uStack_12c,uVar21);
  TStack_100.CurrentBitIndex = iStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar16 >> 5;
  TStack_100._28_4_ = local_8c;
  TStack_100.BaseBitIndex = local_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  local_138 = this_01;
  uStack_130 = uVar21;
  local_128 = puVar1;
  local_108 = this_01;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar7 < (int)uVar16)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar21 = *(uint *)&(this->CachedData).field_0x28;
  if (uVar16 != uVar21) {
    puVar2 = *(undefined1 **)&(this->CachedData).field_0x20;
    puVar24 = puVar1;
    if (puVar2 != (undefined1 *)0x0) {
      puVar24 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar18 * 4);
    while (uVar16 == 0) {
      iVar18 = iVar18 + 1;
      uVar17 = uVar17 + 0x20;
      uVar16 = uVar21;
      if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar18)
      goto LAB_149ce2530;
      uVar16 = *(uint *)(puVar24 + (longlong)iVar18 * 4);
    }
    uVar23 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = (uVar17 - 1) + (int)lVar14;
    if ((int)uVar21 < (int)uVar16) {
      uVar16 = uVar21;
    }
  }
LAB_149ce2530:
  while( true ) {
    pTVar5 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      `TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
    }
    if (((TStack_100.CurrentBitIndex == uVar16) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == this_01)
       ) break;
    plVar20 = (longlong *)((longlong)TStack_100.CurrentBitIndex * 0x38 + *(longlong *)pTVar5);
    local_1c0 = *plVar20;
    pTStack_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)plVar20[1];
    local_b8 = plVar20[2];
    lStack_b0 = plVar20[3];
    local_c8 = local_1c0;
    pTStack_c0 = pTStack_1b8;
    if (((int)plVar20[3] == 0) && ((int)((ulonglong)plVar20[3] >> 0x20) == 0)) {
      uStack_140 = 0;
      local_148 = local_b8;
      pUVar10 = AActor::GetLevel(this_00);
      if (pUVar10 != (ULevel *)0x0) {
        pUVar10 = AActor::GetLevel(this_00);
        pIVar11 = ULevel::GetWorldPartitionRuntimeCell(pUVar10);
        if (pIVar11 == (IWorldPartitionCell *)0x0) {
          pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
          pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar8);
          iVar7 = 0;
          iVar18 = iVar7;
          if (pUVar12 != (UObject *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar12);
            }
            local_1c8.ObjectIndex = 0;
            local_1c8.ObjectSerialNumber = 0;
            local_16c._12_8_ = pUVar12;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar12);
            }
            FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)((longlong)local_16c + 0xc));
            iVar7 = local_1c8.ObjectSerialNumber;
            iVar18 = local_1c8.ObjectIndex;
          }
        }
        else {
          pUVar10 = AActor::GetLevel(this_00);
          pIVar11 = ULevel::GetWorldPartitionRuntimeCell(pUVar10);
          pUVar12 = (UObject *)(**(code **)((longlong)*pIVar11 + 0x78))(pIVar11);
          iVar7 = 0;
          iVar18 = 0;
          if (pUVar12 != (UObject *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar12);
            }
            local_1d0.ObjectIndex = 0;
            local_1d0.ObjectSerialNumber = 0;
            local_16c._4_8_ = pUVar12;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar12);
            }
            FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)((longlong)local_16c + 4));
            iVar7 = local_1d0.ObjectSerialNumber;
            iVar18 = local_1d0.ObjectIndex;
          }
        }
        uStack_140 = CONCAT44(iVar7,iVar18);
      }
      local_c8 = local_1c0;
      pTStack_c0 = pTStack_1b8;
      local_b8 = local_148;
      lStack_b0 = uStack_140;
    }
    local_d8 = &local_c8;
    local_d0 = plVar20 + 4;
    local_1c0 = local_c8;
    pTStack_1b8 = pTStack_c0;
    TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UPCGLandscapeCache::CacheMapKey_const_&,TSharedPtr<FPCGLandscapeCacheEntry,1>_const_&>_>
              ((TSet<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>,FDefaultSetAllocator>
                *)local_88,
               (TPairInitializer<UPCGLandscapeCache::CacheMapKey_const_&,TSharedPtr<FPCGLandscapeCacheEntry,1>_const_&>
                *)local_16c,(bool *)&local_d8);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  if (this_01 !=
      (TMap<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>,0>_>
       *)local_88) {
    TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(this->CachedData).field_0x8);
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
    puVar1 = &(this->CachedData).field_0x10;
    *(undefined8 *)this_01 = local_88._0_8_;
    *(undefined4 *)&(this->CachedData).field_0x8 = local_88._8_4_;
    *(undefined4 *)&(this->CachedData).field_0xc = local_88._12_4_;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    if (puVar1 != local_88 + 0x10) {
      if (local_68 == (ForElementType<unsigned_int>)0x0) {
        *(undefined8 *)puVar1 = local_88._16_8_;
        (this->CachedData).field_0x18 = auStack_70[0];
        (this->CachedData).field_0x19 = auStack_70[1];
        (this->CachedData).field_0x1a = auStack_70[2];
        (this->CachedData).field_0x1b = auStack_70[3];
        (this->CachedData).field_0x1c = auStack_70[4];
        (this->CachedData).field_0x1d = auStack_70[5];
        (this->CachedData).field_0x1e = auStack_70[6];
        (this->CachedData).field_0x1f = auStack_70[7];
      }
      pvVar3 = *(void **)&(this->CachedData).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(ForElementType<unsigned_int> *)&(this->CachedData).field_0x20 = local_68;
      *(int *)&(this->CachedData).field_0x28 = (int)local_60;
      *(uint *)&(this->CachedData).field_0x2c = local_60._4_4_;
      local_60._0_4_ = 0;
      local_60._4_4_ = 0;
      local_68 = (ForElementType<unsigned_int>)0x0;
    }
    *(int *)&(this->CachedData).field_0x30 = local_58;
    *(int *)&(this->CachedData).field_0x34 = local_54;
    local_54 = 0;
    local_58 = -1;
    if (local_48.Data == (FScriptContainerElement *)0x0) {
      (this->CachedData).field_0x38 = local_50[0];
      (this->CachedData).field_0x39 = local_50[1];
      (this->CachedData).field_0x3a = local_50[2];
      (this->CachedData).field_0x3b = local_50[3];
    }
    pvVar3 = *(void **)&(this->CachedData).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(FScriptContainerElement **)&(this->CachedData).field_0x40 = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(uint *)&(this->CachedData).field_0x48 = local_40;
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  bVar6 = local_88._12_4_ != 0;
  local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
  if (bVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  uVar21 = local_60._4_4_;
  local_58 = -1;
  local_54 = 0;
  local_60 = (ulonglong)local_60._4_4_ << 0x20;
  if (0x80 < uVar21) {
    local_60 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// execClearCache @ 149ce3b70

void __cdecl UPCGLandscapeCache::execClearCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearCache((UPCGLandscapeCache *)param_1);
  return;
}

// execPrimeCache @ 149ce3d60

void __cdecl UPCGLandscapeCache::execPrimeCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

