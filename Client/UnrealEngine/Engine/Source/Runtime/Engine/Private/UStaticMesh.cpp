// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 142

// StaticClass @ 148703030

UClass * __cdecl UStaticMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMesh",
               &Z_Registration_Info_UClass_UStaticMesh.InnerSingleton,
               StaticRegisterNativesUStaticMesh,0x2a0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStaticMesh>,InternalVTableHelperCtorCaller<UStaticMesh>,
               local_res8,UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMesh.InnerSingleton;
}

// UStaticMesh @ 1487131e0

UStaticMesh * __thiscall UStaticMesh::UStaticMesh(UStaticMesh *this,FVTableHelper *param_1)

{
  UStreamableRenderAsset::UStreamableRenderAsset((UStreamableRenderAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  (this->RenderData).Ptr = (FStaticMeshRenderData *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  (this->MinQualityLevelLOD)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->MinQualityLevelLOD)._padding_ = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  (this->MinQualityLevelLOD).Default = 0;
  (this->MinLOD).Default = 0;
  (this->StaticMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMaterials).ArrayNum = 0;
  (this->StaticMaterials).ArrayMax = 0;
  (this->StaticMaterialsInfoCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMaterialsInfoCache).ArrayNum = 0;
  (this->StaticMaterialsInfoCache).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->MaterialsInfoCriticalSection,4000);
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  (this->LightingGuid).A = 0;
  (this->LightingGuid).B = 0;
  (this->LightingGuid).C = 0;
  (this->LightingGuid).D = 0;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  (this->SpeedTreeWind).Object = (FSpeedTreeWind *)0x0;
  (this->SpeedTreeWind).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->NavCollision).field0_0x0.DebugPtr = (UNavCollisionBase *)0x0;
  return this;
}

// UStaticMesh @ 148713320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UStaticMesh * __thiscall UStaticMesh::UStaticMesh(UStaticMesh *this,FObjectInitializer *param_1)

{
  FPerQualityLevelInt *pFVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FString *pFVar4;
  FString local_88;
  FPerQualityLevelInt local_78;
  
  UStreamableRenderAsset::UStreamableRenderAsset((UStreamableRenderAsset *)this,param_1);
  pFVar1 = &this->MinQualityLevelLOD;
  (this->RenderData).Ptr = (FStaticMeshRenderData *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  pFVar1->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  (this->MinQualityLevelLOD)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  (this->MinQualityLevelLOD).Default = 0;
  (this->MinLOD).Default = 0;
  (this->StaticMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMaterials).ArrayNum = 0;
  (this->StaticMaterials).ArrayMax = 0;
  (this->StaticMaterialsInfoCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMaterialsInfoCache).ArrayNum = 0;
  (this->StaticMaterialsInfoCache).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->MaterialsInfoCriticalSection,4000);
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  local_78.PerQuality._48_8_ = _UNK_150631d98;
  local_78.PerQuality._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  this->bRenderingResourcesInitialized = '\0';
  puVar3 = &this->field_0x1e4;
  this->bHasNavigationData = '\x01';
  this->bDoFastBuild = '\0';
  this->bSupportRayTracing = '\x01';
  this->bSupportUniformlyDistributedSampling = '\0';
  (this->LightingGuid).A = 0;
  (this->LightingGuid).B = 0;
  (this->LightingGuid).C = 0;
  (this->LightingGuid).D = 0;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  (this->SpeedTreeWind).Object = (FSpeedTreeWind *)0x0;
  (this->SpeedTreeWind).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->NavCollision).field0_0x0.DebugPtr = (UNavCollisionBase *)0x0;
  this->ElementToIgnoreForTexFactor = -1;
  this->LightMapResolution = 4;
  (this->MinLOD).Default = 0;
  local_78._padding_ = 0;
  local_78._padding_ = 0;
  local_78.PerQuality._0_8_ = 0;
  local_78.PerQuality._8_8_ = 0;
  local_78.PerQuality._32_8_ = 0;
  local_78.PerQuality._64_8_ = 0;
  local_78.PerQuality._72_4_ = 0;
  local_78.Default = 0;
  SetQualityLevelMinLOD(this,&local_78);
  pFVar4 = ::FString::FString(&local_88,GMinLodQualityLevelCVarName);
  if (pFVar1 != (FPerQualityLevelInt *)pFVar4) {
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    pFVar1->_padding_ = (longlong)(pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->MinQualityLevelLOD)._padding_ = (pFVar4->Data).ArrayNum;
    *(int *)((longlong)&(this->MinQualityLevelLOD)._padding_ + 4) = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UStaticMesh @ 148714cf0

void __thiscall UStaticMesh::~UStaticMesh(UStaticMesh *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FStaticMeshRenderData *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpeedTreeWind).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Sockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MaterialsInfoCriticalSection);
  DestructItems<FStaticMaterialMinimalInfo,int>
            ((FStaticMaterialMinimalInfo *)(this->StaticMaterialsInfoCache).AllocatorInstance.Data,
             (this->StaticMaterialsInfoCache).ArrayNum);
  pFVar1 = (this->StaticMaterialsInfoCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  pvVar2 = *(void **)&(this->MinQualityLevelLOD).PerQuality.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MinQualityLevelLOD).PerQuality);
  pvVar2 = (void *)(this->MinQualityLevelLOD)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this_00 = (this->RenderData).Ptr;
  if (this_00 != (FStaticMeshRenderData *)0x0) {
    FStaticMeshRenderData::~FStaticMeshRenderData(this_00);
    ::operator_delete(this_00,0x98);
  }
  this->_padding_ = (longlong)&___7IInterface_AsyncCompilation__6B_;
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UStreamableRenderAsset::~UStreamableRenderAsset((UStreamableRenderAsset *)this);
  return;
}

// operator() @ 1487198d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UStaticMesh::InitResources'::__l2::<lambda_1>::operator()(void *this,FRHICommandList *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory2> FVar6;
  uchar auVar7 [8];
  uchar auVar8 [8];
  FName local_res8;
  FStatMessage local_28;
  
  auVar7[4] = '\0';
  auVar7[5] = '\0';
  auVar7[6] = '\0';
  auVar7[7] = '\0';
  auVar7._0_4_ = *(uint *)this;
  if (auVar7 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_StaticMeshTotalMemory;
    if (StatPtr_STAT_StaticMeshTotalMemory ==
        (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_StaticMeshTotalMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshTotalMemory,*pFVar2,
                         L"StaticMesh Total Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                         true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar7;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar8[4] = '\0';
  auVar8[5] = '\0';
  auVar8[6] = '\0';
  auVar8[7] = '\0';
  auVar8._0_4_ = *(uint *)this;
  if (auVar8 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_StaticMeshTotalMemory2;
    if (StatPtr_STAT_StaticMeshTotalMemory2 ==
        (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory2>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_StaticMeshTotalMemory2");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory2>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshTotalMemory2,*pFVar2,
                         L"StaticMesh Total Memory","STATGROUP_MemoryStaticMesh","STATCAT_Advanced",
                         L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar8;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar8);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  return;
}

// AddAssetUserData @ 14871dab0

void __thiscall UStaticMesh::AddAssetUserData(UStaticMesh *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UAssetUserData>_u_0 TVar5;
  void **this_00;
  UObject *local_res10;
  TObjectPtr<UAssetUserData>_u_0 local_res18;
  UAssetUserData *local_18 [2];
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res10 = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    TVar5.DebugPtr = (UAssetUserData *)(*pcVar2)(this,&local_res10);
    this_00 = (this->MaterialsInfoCriticalSection).CriticalSection.Opaque3;
    if (TVar5.DebugPtr != (UAssetUserData *)0x0) {
      local_res18.DebugPtr = TVar5.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::Remove
                ((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)this_00,
                 (TObjectPtr<UAssetUserData> *)&local_res18.ObjectPtr);
    }
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*this_00 <= local_18) &&
        (local_18 <
         (UAssetUserData **)
         ((longlong)*this_00 +
         (longlong)
         *(int *)((longlong)(this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 0xc) * 8)
        )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = *(int *)((this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 1);
    piVar1 = (int *)((longlong)(this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 0xc);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this_00,piVar1);
      *(int *)((this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 1) = iVar4;
    }
    *(int *)((this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 1) = iVar4 + 1;
    *(UAssetUserData **)((longlong)*this_00 + (longlong)iVar4 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UAssetUserData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// AddMaterial @ 14871fd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FName __thiscall UStaticMesh::AddMaterial(UStaticMesh *this,UMaterialInterface *param_1)

{
  int *piVar1;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  UObject *in_R8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  int local_74;
  int iStack_70;
  undefined8 local_68;
  undefined2 uStack_5e;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (in_R8 == (UObject *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    lVar7 = *(longlong *)&in_R8->field_0x18;
    pTVar2 = &this->StaticMaterials;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    iVar5 = (this->StaticMaterials).ArrayNum;
    pFVar8 = pFVar9 + (longlong)iVar5 * 0x38;
    local_68 = lVar7;
    while( true ) {
      if ((this->StaticMaterials).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FStaticMaterial,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      if (pFVar9 == pFVar8) break;
      iVar6 = (int)lVar7;
      if ((int)*(undefined8 *)(pFVar9 + 8) == iVar6) {
        iStack_70 = (int)((ulonglong)*(undefined8 *)(pFVar9 + 8) >> 0x20) + 1;
        if (iStack_70 < local_68._4_4_) {
          iStack_70 = local_68._4_4_;
        }
        lVar7 = CONCAT44(iStack_70,iVar6);
        local_74 = iVar6;
        local_68 = lVar7;
      }
      pFVar9 = pFVar9 + 0x38;
    }
    iVar5 = (this->StaticMaterials).ArrayNum;
    piVar1 = &(this->StaticMaterials).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->StaticMaterials).ArrayNum = iVar5 + 1;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    lVar10 = (longlong)iVar5 * 0x38;
    *(UObject **)(pFVar9 + lVar10) = in_R8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(in_R8);
    }
    *(longlong *)(pFVar9 + lVar10 + 8) = lVar7;
    *(undefined8 *)(pFVar9 + lVar10 + 0x10) = 0;
    *(undefined8 *)(pFVar9 + lVar10 + 0x18) = 0;
    *(undefined8 *)(pFVar9 + lVar10 + 0x18 + 8) = 0;
    *(undefined4 *)(pFVar9 + lVar10 + 0x28) = 0;
    *(undefined8 *)(pFVar9 + lVar10 + 0x30) = 0;
    if ((*(longlong *)(pFVar9 + lVar10) != 0) && (lVar7 == 0)) {
      *(undefined8 *)(pFVar9 + lVar10 + 8) = *(undefined8 *)(*(longlong *)(pFVar9 + lVar10) + 0x18);
    }
    uVar4 = _UNK_15076b1fc;
    uVar3 = CONCAT44(_UNK_15076b1f8,_UNK_15076b1f4);
    *(ulonglong *)(pFVar9 + lVar10 + 0x18) =
         CONCAT44(___xmm_3f8000003f8000003f8000003f800000,CONCAT22(uStack_5e,1));
    *(undefined8 *)(pFVar9 + lVar10 + 0x18 + 8) = uVar3;
    *(undefined4 *)(pFVar9 + lVar10 + 0x28) = uVar4;
    param_1->_padding_ = lVar7;
  }
  return (FName)param_1;
}

// AddSocket @ 148720450

void __thiscall UStaticMesh::AddSocket(UStaticMesh *this,UStaticMeshSocket *param_1)

{
  TObjectPtr<UStaticMeshSocket>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UStaticMeshSocket *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UStaticMeshSocket>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UStaticMeshSocket>_>
            (&this->Sockets,(TObjectPtr<UStaticMeshSocket> *)&local_res8[0].ObjectPtr);
  return;
}

// BeginDestroy @ 148722a90

void __thiscall UStaticMesh::BeginDestroy(UStaticMesh *this)

{
  bool bVar1;
  
  UStreamableRenderAsset::BeginDestroy((UStreamableRenderAsset *)this);
  bVar1 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if ((!bVar1) && (this->bRenderingResourcesInitialized != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000148722ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 800))(this);
    return;
  }
  return;
}

// BeginPostLoadInternal @ 148722bc0

void __thiscall
UStaticMesh::BeginPostLoadInternal(UStaticMesh *this,FStaticMeshPostLoadContext *param_1)

{
  UNavCollisionBase *pUVar1;
  
  if ((this->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
    CreateBodySetup(this);
  }
  if (((this->bHasNavigationData != '\0') &&
      ((this->BodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0)) &&
     ((this->NavCollision).field0_0x0.DebugPtr == (UNavCollisionBase *)0x0)) {
    pUVar1 = UNavCollisionBase::ConstructNew((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UNavCollisionBase *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->NavCollision).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// BuildFromMeshDescription @ 148724f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UStaticMesh::BuildFromMeshDescription
          (UStaticMesh *this,FMeshDescription *param_1,FStaticMeshLODResources *param_2)

{
  FColorVertexBuffer *this_00;
  longlong *plVar1;
  float fVar2;
  double dVar4;
  FVertexInstanceID FVar5;
  FStaticMeshRenderData *pFVar6;
  FResources *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  Type TVar17;
  FVertexInstanceID FVar18;
  bool bVar19;
  bool bVar20;
  FColor_u_0 FVar21;
  undefined4 uVar22;
  FMeshElementContainer *pFVar23;
  FAttributesSetEntry *pFVar24;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar25;
  TVector<float> *pTVar26;
  TVector<float> *pTVar27;
  TBoxSphereBounds<double,double> *pTVar28;
  TVector<double>_u_0 *pTVar29;
  ForElementType<unsigned_int> FVar30;
  TArrayView<int_const_,int> *pTVar31;
  TArrayView<FVertexInstanceID,int> *pTVar32;
  FAdditionalStaticMeshIndexBuffers *pFVar33;
  ulonglong uVar34;
  uint uVar35;
  undefined4 uVar36;
  longlong lVar37;
  ForElementType<FStaticMeshSection> FVar38;
  FScriptContainerElement *pFVar39;
  FVertexInstanceID FVar40;
  int iVar41;
  FMeshAttributeArraySetBase *pFVar42;
  FAdditionalStaticMeshIndexBuffers *pFVar43;
  int iVar44;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  FScriptContainerElement *pFVar45;
  undefined4 *puVar46;
  FAdditionalStaticMeshIndexBuffers *pFVar47;
  char cVar48;
  ForAnyElementType FVar49;
  FMeshAttributeArraySetBase *pFVar50;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar51;
  ForElementType<unsigned_int> FVar52;
  uint uVar53;
  FMeshAttributeArraySetBase *pFVar54;
  FMeshAttributeArraySetBase *pFVar55;
  FVertexInstanceID FVar56;
  uint uVar57;
  uint uVar58;
  FVertexInstanceID *pFVar59;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_02;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  uint local_res20;
  float local_418;
  undefined1 local_414;
  undefined1 local_413 [3];
  FScriptContainerElement *local_410;
  FStaticMeshVertexBufferFlags local_408 [4];
  FMeshAttributeArraySetBase *local_400;
  uint local_3f8;
  undefined4 *local_3f0;
  TArray<FStaticMeshBuildVertex,TSizedDefaultAllocator<32>_> local_3e8;
  uint local_3d8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_3d0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_3c0;
  undefined8 local_3b0;
  float local_3a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_3a0;
  ForAnyElementType local_390;
  int local_388;
  int local_384;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_380;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_378;
  FMeshAttributeArraySetBase *local_370;
  FColor_u_0 local_368;
  int local_360;
  uint uStack_35c;
  ForElementType<unsigned_int> FStack_358;
  undefined4 local_350;
  uint uStack_34c;
  int iStack_348;
  undefined4 uStack_344;
  TVector<double>_u_0 local_338;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  char local_300;
  TElementIDs local_2f8;
  TElementIDs local_2f0;
  FLinearColor_u_0 local_2e8;
  float local_2d8;
  float fStack_2d4;
  float local_2d0;
  undefined1 local_2c8 [8];
  float fStack_2c0;
  undefined1 local_2b8 [8];
  float fStack_2b0;
  int local_2a8;
  int local_2a4;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_2a0;
  ForElementType<FStaticMeshSection> local_298;
  ForElementType<unsigned_int> local_290;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *local_288;
  FVertexInstanceID *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  TArrayView<FTriangleID_const_,int> local_218;
  TArrayView<FVertexInstanceID_const_,int> local_208;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  TConstIterator local_1c0;
  TConstIterator local_1a0;
  TVector<double>_u_0 local_180;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  TArrayView<int_const_,int> local_148;
  TArrayView<FVertexInstanceID,int> local_138;
  TBoxSphereBounds<double,double> local_128 [4];
  float fVar3;
  
  pFVar23 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  uVar57 = (pFVar23->BitArray).NumBits;
  local_3f8 = uVar57;
  pFVar23 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  if ((uVar57 != 0) && (local_3d8 = (pFVar23->BitArray).NumBits - pFVar23->NumHoles, local_3d8 != 0)
     ) {
    local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e8.ArrayNum = 0;
    local_3e8.ArrayMax = 0;
    if ((int)uVar57 < 1) {
      if ((int)uVar57 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar57);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x74,4,uVar57,&local_3e8.AllocatorInstance,&local_3e8.ArrayNum,&local_3e8.ArrayMax)
      ;
    }
    pFVar23 = FMeshElementChannels::Get(param_1->VertexElements,0);
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar23->Attributes,MeshAttribute::Vertex::Position);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_378 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar24->Ptr).Ptr,
        *(uint *)&local_378->_padding_ != 1)) ||
       (*(uint *)((longlong)&local_378->_padding_ + 4) != 1)) {
      local_378 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pTVar51 = local_378;
    pFVar23 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar23->Attributes,MeshAttribute::VertexInstance::Normal);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar24->Ptr).Ptr,
        *(uint *)&this_01->_padding_ != 1)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1))
    {
      this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pFVar23 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar23->Attributes,MeshAttribute::VertexInstance::Tangent);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_380 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar24->Ptr).Ptr,
        *(uint *)&local_380->_padding_ != 1)) ||
       (*(uint *)((longlong)&local_380->_padding_ + 4) != 1)) {
      local_380 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    this_02 = local_380;
    pFVar23 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar23->Attributes,MeshAttribute::VertexInstance::BinormalSign);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (pFVar50 = (pFVar24->Ptr).Ptr, pFVar50->Type != 3)) || (pFVar50->Extent != 1)) {
      pFVar50 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar23 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar23->Attributes,MeshAttribute::VertexInstance::Color);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_370 = (pFVar24->Ptr).Ptr, local_370->Type != 0)) || (local_370->Extent != 1)) {
      local_370 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar23 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar23->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
    auVar70 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
    auVar69 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (pFVar42 = (pFVar24->Ptr).Ptr, pFVar42->Type != 2)) || (pFVar42->Extent != 1)) {
      pFVar42 = (FMeshAttributeArraySetBase *)0x0;
    }
    local_300 = '\0';
    pFVar6 = (this->RenderData).Ptr;
    if (((pFVar6 != (FStaticMeshRenderData *)0x0) &&
        (pFVar7 = (pFVar6->NaniteResourcesPtr).Ptr, pFVar7 != (FResources *)0x0)) &&
       (pFVar7->NumRootPages != 0)) {
      local_338._s_0.X = (double)(pFVar7->MeshBounds).Origin.field0_0x0._s_0.X;
      local_300 = '\x01';
      local_338._s_0.Y = (double)(pFVar7->MeshBounds).Origin.field0_0x0._s_0.Y;
      local_338._s_0.Z = (double)(pFVar7->MeshBounds).Origin.field0_0x0._s_0.Z;
      local_318 = (double)(pFVar7->MeshBounds).BoxExtent.field0_0x0._s_0.Y;
      dStack_320 = (double)(pFVar7->MeshBounds).BoxExtent.field0_0x0._s_0.X;
      local_308 = (double)(pFVar7->MeshBounds).SphereRadius;
      dStack_310 = (double)(pFVar7->MeshBounds).BoxExtent.field0_0x0._s_0.Z;
    }
    _local_2c8 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
    _local_2b8 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
    bVar19 = false;
    local_2f8.Array = &FMeshElementChannels::Get(param_1->VertexInstanceElements,0)->BitArray;
    TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
              (&local_2f8,(TConstIterator *)&local_258);
    TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_2f8,&local_1a0);
    fVar3 = __real_3f800000;
    fVar2 = __real_322bcc77;
    local_418 = 0.0;
    while( true ) {
      pFVar55 = local_370;
      local_400 = (FMeshAttributeArraySetBase *)CONCAT44(local_400._4_4_,local_258.CurrentBitIndex);
      if ((local_258.CurrentBitIndex == local_1a0.Iterator.CurrentBitIndex) &&
         (local_258.Array == local_1a0.Iterator.Array)) break;
      if (local_258.CurrentBitIndex < (local_258.Array)->NumBits) {
        uVar53 = 0;
        if (local_258.CurrentBitIndex < local_3e8.ArrayNum) {
          uVar53 = (uint)~local_258.CurrentBitIndex >> 0x1f;
        }
        uVar57 = local_258.CurrentBitIndex;
        if (uVar53 == 0) goto LAB_148725370;
      }
      else {
        local_400 = (FMeshAttributeArraySetBase *)CONCAT44(local_400._4_4_,0xffffffff);
        uVar57 = 0xffffffff;
LAB_148725370:
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar55 = (param_1->VertexInstanceVertices).ArrayPtr;
      local_3f0 = (undefined4 *)((longlong)(int)uVar57 * 0x74);
      local_410 = local_3e8.AllocatorInstance.Data;
      if (((int)pFVar55[2].Type < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar54 = pFVar55 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar55[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar54 = (FMeshAttributeArraySetBase *)pFVar55[2]._padding_;
      }
      uVar35 = uVar57 * pFVar54->NumElements;
      uVar53 = 0;
      if ((int)uVar35 < (int)pFVar54->Type) {
        uVar53 = ~uVar35 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar44 = *(int *)(pFVar54->_padding_ + (longlong)(int)uVar35 * 4);
      pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar51,0);
      pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar25,iVar44);
      puVar46 = local_3f0;
      *(undefined8 *)((longlong)local_3f0 + (longlong)local_410) =
           *(undefined8 *)&pTVar26->field0_0x0;
      *(float *)((longlong)(local_3f0 + 2) + (longlong)local_410) = (pTVar26->field0_0x0)._s_0.Z;
      pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0);
      pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar25,uVar57);
      *(undefined8 *)((longlong)(puVar46 + 3) + (longlong)local_410) =
           *(undefined8 *)&pTVar26->field0_0x0;
      *(float *)((longlong)(puVar46 + 5) + (longlong)local_410) = (pTVar26->field0_0x0)._s_0.Z;
      pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0);
      pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar25,uVar57);
      pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
      pTVar27 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar25,uVar57);
      fVar61 = (pTVar26->field0_0x0)._s_0.Z;
      fVar68 = (pTVar26->field0_0x0)._s_0.X;
      fVar71 = (pTVar26->field0_0x0)._s_0.Y;
      fVar72 = (pTVar27->field0_0x0)._s_0.X;
      fVar64 = fVar61 * (pTVar27->field0_0x0)._s_0.Y - fVar71 * (pTVar27->field0_0x0)._s_0.Z;
      fVar66 = fVar68 * (pTVar27->field0_0x0)._s_0.Z - fVar72 * fVar61;
      local_2d0 = fVar72 * fVar71 - fVar68 * (pTVar27->field0_0x0)._s_0.Y;
      fVar61 = fVar66 * fVar66 + fVar64 * fVar64 + local_2d0 * local_2d0;
      if (fVar61 == fVar3) {
        local_3b0 = CONCAT44(fVar66,fVar64);
        local_3a8 = local_2d0;
      }
      else if (fVar2 <= fVar61) {
        fVar61 = fVar3 / SQRT(fVar61);
        local_3a8 = fVar61 * local_2d0;
        local_3b0 = CONCAT44(fVar61 * fVar66,fVar61 * fVar64);
      }
      else {
        local_3b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_3a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      _local_2d8 = CONCAT44(fVar66,fVar64);
      if (((int)pFVar50[2].Type < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar55 = pFVar50 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar50[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar55 = (FMeshAttributeArraySetBase *)pFVar50[2]._padding_;
      }
      uVar35 = uVar57 * pFVar55->NumElements;
      uVar53 = 0;
      if ((int)uVar35 < (int)pFVar55->Type) {
        uVar53 = ~uVar35 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar46 = local_3f0;
      fVar61 = *(float *)(pFVar55->_padding_ + (longlong)(int)uVar35 * 4);
      *(float *)((longlong)(local_3f0 + 6) + (longlong)local_410) = fVar61 * (float)local_3b0;
      *(float *)((longlong)(local_3f0 + 7) + (longlong)local_410) = fVar61 * local_3b0._4_4_;
      *(float *)((longlong)(local_3f0 + 8) + (longlong)local_410) = fVar61 * local_3a8;
      pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
      pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar25,uVar57);
      uVar57 = 0;
      bVar19 = true;
      *(undefined8 *)((longlong)(puVar46 + 9) + (longlong)local_410) =
           *(undefined8 *)&pTVar26->field0_0x0;
      *(float *)((longlong)(puVar46 + 0xb) + (longlong)local_410) = (pTVar26->field0_0x0)._s_0.Z;
      auVar9._8_4_ = *(undefined4 *)((longlong)(puVar46 + 2) + (longlong)local_410);
      auVar9._0_8_ = *(undefined8 *)((longlong)puVar46 + (longlong)local_410);
      auVar9._12_4_ = 0;
      auVar69 = minps(auVar69,auVar9);
      auVar10._8_4_ = *(undefined4 *)((longlong)(puVar46 + 2) + (longlong)local_410);
      auVar10._0_8_ = *(undefined8 *)((longlong)puVar46 + (longlong)local_410);
      auVar10._12_4_ = 0;
      auVar70 = maxps(auVar70,auVar10);
      _local_2c8 = auVar69;
      _local_2b8 = auVar70;
      if (0 < (int)pFVar42[2].Type) {
        iVar44 = (Type)local_400;
        local_410 = local_410 + 0x30 + (longlong)puVar46;
        local_3f0 = (undefined4 *)0x0;
        do {
          uVar53 = 0;
          if ((int)uVar57 < (int)pFVar42[2].Type) {
            uVar53 = ~uVar57 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_400 = pFVar42 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar42[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            local_400 = (FMeshAttributeArraySetBase *)pFVar42[2]._padding_;
          }
          uVar35 = iVar44 * *(int *)((longlong)(local_3f0 + 4) + (longlong)local_400);
          uVar53 = 0;
          if ((int)uVar35 < *(int *)((longlong)(local_3f0 + 2) + (longlong)local_400)) {
            uVar53 = ~uVar35 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar57 = uVar57 + 1;
          plVar1 = (longlong *)((longlong)local_3f0 + (longlong)local_400);
          local_3f0 = local_3f0 + 6;
          *(undefined8 *)local_410 = *(undefined8 *)(*plVar1 + (longlong)(int)uVar35 * 8);
          local_410 = local_410 + 8;
          pTVar51 = local_378;
          this_02 = local_380;
        } while ((int)uVar57 < (int)pFVar42[2].Type);
      }
      local_258.UnvisitedBitMask = local_258.UnvisitedBitMask & ~local_258._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_258);
    }
    iVar44 = 0;
    if (local_370 != (FMeshAttributeArraySetBase *)0x0) {
      local_2f0.Array = &FMeshElementChannels::Get(param_1->VertexInstanceElements,0)->BitArray;
      TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
                (&local_2f0,(TConstIterator *)&local_238);
      TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_2f0,&local_1c0);
      while ((local_238.CurrentBitIndex != local_1c0.Iterator.CurrentBitIndex ||
             (local_238.Array != local_1c0.Iterator.Array))) {
        if (local_238.CurrentBitIndex < (local_238.Array)->NumBits) {
          uVar53 = 0;
          if (local_238.CurrentBitIndex < local_3e8.ArrayNum) {
            uVar53 = (uint)~local_238.CurrentBitIndex >> 0x1f;
          }
          uVar57 = local_238.CurrentBitIndex;
          if (uVar53 == 0) goto LAB_148725927;
        }
        else {
          uVar57 = 0xffffffff;
LAB_148725927:
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar49.Data = local_3e8.AllocatorInstance.Data;
        if (((int)pFVar55[2].Type < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar50 = pFVar55 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar55[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar50 = (FMeshAttributeArraySetBase *)pFVar55[2]._padding_;
        }
        uVar35 = uVar57 * pFVar50->NumElements;
        uVar53 = 0;
        if ((int)uVar35 < (int)pFVar50->Type) {
          uVar53 = ~uVar35 >> 0x1f;
        }
        if ((uVar53 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FLinearColor::FLinearColor
                  ((FLinearColor *)&local_2e8._s_0,
                   (TVector4<float> *)((longlong)(int)uVar35 * 0x10 + pFVar50->_padding_));
        if ((((local_2e8._s_0.R != FLinearColor::White.field0_0x0._s_0.R) ||
             (local_2e8._s_0.G != FLinearColor::White.field0_0x0._s_0.G)) ||
            (local_2e8._s_0.B != FLinearColor::White.field0_0x0._s_0.B)) ||
           (FVar21 = FColor::White.field0_0x0,
           local_2e8._s_0.A != FLinearColor::White.field0_0x0._s_0.A)) {
          iVar44 = 1;
          FLinearColor::ToFColorSRGB((FLinearColor *)&local_2e8._s_0);
          FVar21 = local_368;
        }
        *(FColor_u_0 *)(FVar49.Data + (longlong)(int)uVar57 * 0x74 + 0x70) = FVar21;
        local_238.UnvisitedBitMask = local_238.UnvisitedBitMask & ~local_238._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
      }
    }
    fVar61 = __real_3f000000;
    fVar68 = local_418;
    fVar71 = local_418;
    fVar72 = local_418;
    fVar64 = local_418;
    fVar2 = local_418;
    fVar3 = local_418;
    if (bVar19) {
      fVar68 = (float)local_2b8._0_4_;
      fVar71 = (float)local_2c8._0_4_;
      fVar72 = (float)local_2c8._4_4_;
      fVar64 = fStack_2c0;
      fVar2 = (float)local_2b8._4_4_;
      fVar3 = fStack_2b0;
    }
    iVar41 = local_3e8.ArrayNum;
    uVar34 = (ulonglong)local_3e8.ArrayNum;
    fVar63 = (fVar68 + fVar71) * __real_3f000000;
    pFVar45 = local_3e8.AllocatorInstance.Data + uVar34 * 0x74;
    fVar65 = (fVar2 + fVar72) * __real_3f000000;
    fVar67 = (fVar3 + fVar64) * __real_3f000000;
    FVar49.Data = local_3e8.AllocatorInstance.Data;
    fVar66 = local_418;
    while( true ) {
      local_418 = fVar66;
      if ((int)uVar34 != iVar41) {
        local_414 = 0;
        `TCheckedPointerIterator<FStaticMeshBuildVertex,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_414);
        uVar34 = local_3e8._8_8_ & 0xffffffff;
      }
      if (FVar49.Data == pFVar45) break;
      fVar60 = *(float *)FVar49.Data - fVar63;
      fVar62 = *(float *)(FVar49.Data + 4) - fVar65;
      fVar66 = *(float *)(FVar49.Data + 8) - fVar67;
      FVar49.Data = FVar49.Data + 0x74;
      fVar66 = fVar62 * fVar62 + fVar60 * fVar60 + fVar66 * fVar66;
      if (fVar66 <= local_418) {
        fVar66 = local_418;
      }
    }
    local_1f8._s_0.X = (double)fVar63;
    local_1d8 = (double)((fVar2 - fVar72) * fVar61);
    local_1d0 = (double)((fVar3 - fVar64) * fVar61);
    local_1f8._s_0.Y = (double)fVar65;
    local_1f8._s_0.Z = (double)fVar67;
    local_1e0 = (double)((fVar68 - fVar71) * fVar61);
    local_1c8 = (double)SQRT(local_418);
    if (local_300 == '\0') {
      cVar48 = '\x01';
      local_338._s_0.X = local_1f8._s_0.X;
      local_300 = '\x01';
      local_338._s_0.Y = local_1f8._s_0.Y;
      local_338._s_0.Z = local_1f8._s_0.Z;
      dStack_320 = local_1e0;
      local_318 = local_1d8;
      dStack_310 = local_1d0;
      local_308 = (double)SQRT(local_418);
    }
    else {
      pTVar28 = UE::Math::TBoxSphereBounds<double,double>::operator+
                          ((TBoxSphereBounds<double,double> *)&local_338._s_0,local_128,
                           (TBoxSphereBounds<double,double> *)&local_1f8._s_0);
      cVar48 = local_300;
      dVar4 = pTVar28->SphereRadius;
      dVar11 = (pTVar28->Origin).field0_0x0._s_0.X;
      dVar12 = (pTVar28->Origin).field0_0x0._s_0.Y;
      dVar13 = (pTVar28->Origin).field0_0x0._s_0.Z;
      dVar14 = (pTVar28->BoxExtent).field0_0x0._s_0.X;
      dVar15 = (pTVar28->BoxExtent).field0_0x0._s_0.Y;
      dVar16 = (pTVar28->BoxExtent).field0_0x0._s_0.Z;
      if ((local_300 == '\0') &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_338._s_0.X = dVar11;
      local_338._s_0.Y = dVar12;
      local_338._s_0.Z = dVar13;
      dStack_320 = dVar14;
      local_318 = dVar15;
      dStack_310 = dVar16;
      local_308 = dVar4;
    }
    pFVar6 = (this->RenderData).Ptr;
    if (pFVar6 != (FStaticMeshRenderData *)0x0) {
      local_150 = 0;
      local_180._s_0.X = 0.0;
      local_180._s_0.Y = 0.0;
      local_160 = 0;
      uStack_158 = 0;
      pTVar29 = &local_338;
      if (cVar48 == '\0') {
        pTVar29 = &local_180;
      }
      local_180._s_0.Z = 0.0;
      uStack_168 = 0;
      dVar4 = pTVar29->XYZ[1];
      dVar11 = pTVar29->XYZ[2];
      dVar12 = pTVar29->XYZ[3];
      (pFVar6->Bounds).Origin.field0_0x0._s_0.X = (pTVar29->_s_0).X;
      (pFVar6->Bounds).Origin.field0_0x0._s_0.Y = dVar4;
      dVar13 = pTVar29->XYZ[4];
      dVar14 = pTVar29->XYZ[5];
      (pFVar6->Bounds).Origin.field0_0x0._s_0.Z = dVar11;
      (pFVar6->Bounds).BoxExtent.field0_0x0._s_0.X = dVar12;
      dVar4 = pTVar29->XYZ[6];
      (pFVar6->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar13;
      (pFVar6->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar14;
      (pFVar6->Bounds).SphereRadius = dVar4;
    }
    FPositionVertexBuffer::Init(&(param_2->VertexBuffers).PositionVertexBuffer,&local_3e8,true);
    local_408[0].bNeedsCPUAccess = true;
    local_408[0].bUseBackwardsCompatibleF16TruncUVs = false;
    FStaticMeshVertexBuffer::Init
              (&(param_2->VertexBuffers).StaticMeshVertexBuffer,&local_3e8,pFVar42[2].Type,local_408
              );
    *(uint *)&param_2->field_0x94 =
         (iVar44 << 3 ^ *(uint *)&param_2->field_0x94) & 8 ^ *(uint *)&param_2->field_0x94;
    this_00 = &(param_2->VertexBuffers).ColorVertexBuffer;
    if ((char)iVar44 == '\0') {
      FColorVertexBuffer::InitFromColorArray(this_00,&FColor::White,local_3f8,0,true);
    }
    else {
      FColorVertexBuffer::Init(this_00,&local_3e8,true);
    }
    FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
    pFVar23 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar23->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (local_380 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar24->Ptr).Ptr,
        ((FMeshAttributeArraySetBase *)local_380)->Type != 6)) ||
       (((FMeshAttributeArraySetBase *)local_380)->Extent != 1)) {
      local_380 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pTVar51 = local_380;
    uVar57 = 0;
    local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d0.ArrayNum = 0;
    local_3d0.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_3d0,local_3d8 * 3,Default)
    ;
    FVar38 = (ForElementType<FStaticMeshSection>)&param_2->Sections;
    local_400 = (FMeshAttributeArraySetBase *)CONCAT44(local_400._4_4_,1);
    local_298 = FVar38;
    FVar30 = (ForElementType<unsigned_int>)
             FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
    local_360 = 0;
    uStack_35c = 1;
    local_res20 = *(int *)((longlong)FVar30 + 0x18);
    uStack_34c = 0;
    iStack_348 = 0;
    if (local_res20 != 0) {
      FVar52 = FVar30;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar30 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar52 = *(ForElementType<unsigned_int> *)((longlong)FVar30 + 0x10);
      }
      uVar53 = *(uint *)FVar52;
      while (uVar53 == 0) {
        iStack_348 = iStack_348 + 0x20;
        lVar37 = (longlong)local_360;
        local_360 = local_360 + 1;
        if ((int)((local_res20 - 1) + ((int)(local_res20 - 1) >> 0x1f & 0x1fU)) >> 5 < local_360)
        goto LAB_148725f4e;
        uVar53 = ((uint *)((longlong)FVar52 + 4))[lVar37];
      }
      uStack_35c = -uVar53 & uVar53;
      uVar34 = (ulonglong)uStack_35c * 2 + 1;
      lVar37 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      local_2a8 = (int)lVar37;
      uStack_34c = iStack_348 + -1 + local_2a8;
      if ((int)local_res20 < (int)uStack_34c) {
LAB_148725f4e:
        uStack_34c = local_res20;
      }
    }
    local_350 = 0xffffffff;
    local_278._padding_ = CONCAT44(uStack_35c,local_360);
    local_278.CurrentBitIndex = uStack_34c;
    local_278.UnvisitedBitMask = 0xffffffff;
    local_278._28_4_ = uStack_344;
    local_278.BaseBitIndex = iStack_348;
    iVar44 = (int)local_res20 >> 5;
    uVar53 = local_res20 & 0xffffffe0;
    FStack_358 = FVar30;
    local_290 = FVar30;
    local_278.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar30;
    if (((int)local_res20 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar35 = *(uint *)((longlong)FVar30 + 0x18);
    if (local_res20 != uVar35) {
      FVar52 = FVar30;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar30 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar52 = *(ForElementType<unsigned_int> *)((longlong)FVar30 + 0x10);
      }
      uVar58 = -1 << ((byte)local_res20 & 0x1f) & *(uint *)((longlong)FVar52 + (longlong)iVar44 * 4)
      ;
      while (uVar58 == 0) {
        lVar37 = (longlong)iVar44;
        uVar53 = uVar53 + 0x20;
        iVar44 = iVar44 + 1;
        local_res20 = uVar35;
        if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar44)
        goto LAB_14872604b;
        uVar58 = *(uint *)((longlong)FVar52 + 4 + lVar37 * 4);
      }
      uVar34 = (ulonglong)(-uVar58 & uVar58) * 2 + 1;
      lVar37 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      local_2a4 = (int)lVar37;
      local_res20 = local_2a4 + -1 + uVar53;
      if ((int)uVar35 < (int)local_res20) {
        local_res20 = uVar35;
      }
    }
LAB_14872604b:
    local_370 = (FMeshAttributeArraySetBase *)0x0;
    while ((local_278.CurrentBitIndex != local_res20 ||
           ((ForElementType<unsigned_int>)local_278.Array != FVar30))) {
      uVar53 = 0xffffffff;
      if (local_278.CurrentBitIndex < *(int *)((longlong)local_278.Array + 0x18)) {
        uVar53 = local_278.CurrentBitIndex;
      }
      pTVar31 = FMeshElementIndexer::Find(&param_1->PolygonGroupToPolygons,&local_148,uVar53,0);
      if (pTVar31->ArrayNum != 0) {
        iVar44 = *(int *)((ForElementType<FStaticMeshSection> *)((longlong)FVar38 + 0x28))->
                         InlineData;
        if (iVar44 == *(int *)((longlong)FVar38 + 0x2c)) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSection>_>
                             (0x41c,(ForElementType<FStaticMeshSection> *)FVar38,
                              (int *)((longlong)FVar38 + 0x2c));
        }
        *(int *)((ForElementType<FStaticMeshSection> *)((longlong)FVar38 + 0x28))->InlineData =
             iVar44 + 1;
        if (*(ForElementType<FStaticMeshSection> *)((longlong)FVar38 + 0x20) !=
            (ForElementType<FStaticMeshSection>)0x0) {
          FVar38 = *(ForElementType<FStaticMeshSection> *)((longlong)FVar38 + 0x20);
        }
        puVar46 = (undefined4 *)((longlong)iVar44 * 0x1c + (longlong)FVar38);
        local_3f0 = puVar46;
        DefaultConstructItems<FStaticMeshSection,int>(puVar46,1);
        puVar46[1] = uVar57;
        uVar35 = 0;
        local_3f8 = 0;
        local_410 = (FScriptContainerElement *)((ulonglong)local_410 & 0xffffffff00000000);
        FVar56 = (FVertexInstanceID)0xffffffff;
        FMeshElementIndexer::Find<FTriangleID>
                  (&param_1->PolygonGroupToTriangles,&local_218,uVar53,0);
        local_378 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_218.DataPtr;
        local_2a0 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                    ((((TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)local_218.DataPtr + 0x18))->AllocatorInstance).InlineData +
                    (longlong)local_218.ArrayNum * 4 + -0x18);
        uVar58 = 0;
        if ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_218.DataPtr != local_2a0) {
          FVar40 = (FVertexInstanceID)0x0;
          local_288 = &param_1->TriangleVertexInstances;
          pFVar50 = local_370;
          do {
            pTVar32 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                                (local_288,&local_138,(int)local_378->_padding_);
            pFVar59 = pTVar32->DataPtr;
            local_280 = pFVar59 + pTVar32->ArrayNum;
            if (pFVar59 != local_280) {
              lVar37 = (longlong)pFVar50 * 4;
              do {
                FVar5 = *pFVar59;
                FVar18 = FVar5;
                if ((uint)FVar56 < (uint)FVar5) {
                  FVar18 = FVar56;
                }
                FVar56 = FVar18;
                FVar18 = FVar5;
                if ((uint)FVar5 < (uint)FVar40) {
                  FVar18 = FVar40;
                }
                FVar40 = FVar18;
                uVar35 = 0;
                if ((int)uVar57 < local_3d0.ArrayNum) {
                  uVar35 = ~uVar57 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar57 = uVar57 + 1;
                pFVar50 = (FMeshAttributeArraySetBase *)((longlong)pFVar50 + 1);
                pFVar59 = pFVar59 + 1;
                *(FVertexInstanceID *)(local_3d0.AllocatorInstance.Data + lVar37) = FVar5;
                lVar37 = lVar37 + 4;
              } while (pFVar59 != local_280);
              local_410 = (FScriptContainerElement *)CONCAT44(local_410._4_4_,FVar40);
              uVar35 = local_3f8;
              local_370 = pFVar50;
            }
            uVar35 = uVar35 + 1;
            local_378 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                        ((longlong)&local_378->_padding_ + 4);
            local_3f8 = uVar35;
          } while (local_378 != local_2a0);
          FVar30 = local_290;
          pTVar51 = local_380;
          uVar58 = (uint)local_410;
        }
        puVar46 = local_3f0;
        local_3f0[2] = uVar35;
        *(FVertexInstanceID *)(local_3f0 + 3) = FVar56;
        local_3f0[4] = uVar58;
        if (((int)((FMeshAttributeArraySetBase *)((longlong)pTVar51 + 0x30))->Type < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar50 = (FMeshAttributeArraySetBase *)((longlong)pTVar51 + 0x18);
        if ((FMeshAttributeArraySetBase *)
            ((FMeshAttributeArraySetBase *)((longlong)pTVar51 + 0x30))->_padding_ !=
            (FMeshAttributeArraySetBase *)0x0) {
          pFVar50 = (FMeshAttributeArraySetBase *)
                    ((FMeshAttributeArraySetBase *)((longlong)pTVar51 + 0x30))->_padding_;
        }
        uVar53 = uVar53 * pFVar50->NumElements;
        uVar35 = 0;
        if ((int)uVar53 < (int)pFVar50->Type) {
          uVar35 = ~uVar53 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar45 = (this->StaticMaterials).AllocatorInstance.Data;
        if (pFVar45 != pFVar45 + (longlong)(this->StaticMaterials).ArrayNum * 0x38) {
          pFVar39 = pFVar45;
          do {
            if (*(longlong *)(pFVar39 + 8) ==
                *(longlong *)(pFVar50->_padding_ + (longlong)(int)uVar53 * 8)) {
              uVar36 = (undefined4)(((longlong)pFVar39 - (longlong)pFVar45) / 0x38);
              goto LAB_148726379;
            }
            pFVar39 = pFVar39 + 0x38;
          } while (pFVar39 != pFVar45 + (longlong)(this->StaticMaterials).ArrayNum * 0x38);
        }
        uVar36 = 0xffffffff;
LAB_148726379:
        uVar22 = (Type)local_400;
        if (0xffff < uVar58) {
          uVar22 = 2;
        }
        local_400 = (FMeshAttributeArraySetBase *)CONCAT44(local_400._4_4_,uVar22);
        *puVar46 = uVar36;
        *(undefined2 *)(puVar46 + 5) = 0x101;
        FVar38 = local_298;
      }
      local_278.UnvisitedBitMask = local_278.UnvisitedBitMask & ~local_278._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_278);
    }
    if ((uVar57 != local_3d8 * 3) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IndexBufferIndex == NumTriangles * 3",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                            ,0x2193,L""), bVar19)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TVar17 = (Type)local_400;
    FRawStaticIndexBuffer::SetIndices(&param_2->IndexBuffer,&local_3d0,(Type)local_400);
    FVar49.Data = local_3d0.AllocatorInstance.Data;
    lVar37 = (longlong)local_3d0.ArrayNum;
    local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a0.ArrayNum = local_3d0.ArrayNum;
    if (local_3d0.ArrayNum == 0) {
      local_3a0.ArrayMax = 0;
      iVar44 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3d0.ArrayNum,0,&local_3a0.AllocatorInstance,local_3d0.ArrayNum,
                 &local_3a0.ArrayMax);
      memcpy(local_3a0.AllocatorInstance.Data,FVar49.Data,lVar37 << 2);
      iVar44 = local_3a0.ArrayNum;
    }
    pFVar59 = (FVertexInstanceID *)(local_3a0.AllocatorInstance.Data + (longlong)iVar44 * 4);
    FVar49.Data = local_3a0.AllocatorInstance.Data;
    iVar41 = iVar44;
    while( true ) {
      if (iVar41 != iVar44) {
        local_413[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_413);
      }
      if ((FVertexInstanceID *)FVar49.Data == pFVar59) break;
      pFVar50 = (param_1->VertexInstanceVertices).ArrayPtr;
      FVar56 = *(FVertexInstanceID *)FVar49.Data;
      if (((int)pFVar50[2].Type < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar42 = pFVar50 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar50[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar42 = (FMeshAttributeArraySetBase *)pFVar50[2]._padding_;
      }
      uVar53 = (int)FVar56 * pFVar42->NumElements;
      uVar57 = 0;
      if ((int)uVar53 < (int)pFVar42->Type) {
        uVar57 = ~uVar53 >> 0x1f;
      }
      if ((uVar57 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FMeshElementIndexer::Find<FVertexInstanceID>
                (&param_1->VertexToVertexInstances,&local_208,
                 *(int *)(pFVar42->_padding_ + (longlong)(int)uVar53 * 4),0);
      if ((local_208.ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(FVertexInstanceID *)FVar49.Data = *local_208.DataPtr;
      FVar49.Data = FVar49.Data + 4;
      iVar41 = local_3a0.ArrayNum;
    }
    param_2->bHasDepthOnlyIndices = 1;
    FRawStaticIndexBuffer::SetIndices(&param_2->DepthOnlyIndexBuffer,&local_3a0,TVar17);
    FVar49.Data = local_3d0.AllocatorInstance.Data;
    lVar37 = (longlong)local_3d0.ArrayNum;
    pFVar47 = (FAdditionalStaticMeshIndexBuffers *)0x0;
    param_2->bHasColorVertexData = 1;
    local_3c0.ArrayNum = local_3d0.ArrayNum;
    param_2->DepthOnlyNumTriangles = local_3d8;
    local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_3d0.ArrayNum == 0) {
      local_3c0.ArrayMax = 0;
      iVar44 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3d0.ArrayNum,0,&local_3c0.AllocatorInstance,local_3d0.ArrayNum,
                 &local_3c0.ArrayMax);
      memcpy(local_3c0.AllocatorInstance.Data,FVar49.Data,lVar37 << 2);
      iVar44 = local_3d0.ArrayNum;
    }
    uVar57 = 0;
    pFVar43 = pFVar47;
    pFVar33 = pFVar47;
    if (0 < iVar44) {
      do {
        uVar53 = (uint)pFVar43;
        uVar35 = 0;
        if ((int)(uVar53 + 2) < local_3c0.ArrayNum) {
          uVar35 = ~(uVar53 + 2) >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar49.Data = local_3c0.AllocatorInstance.Data;
        uVar35 = uVar57;
        if ((int)uVar53 < local_3c0.ArrayNum) {
          uVar35 = ~uVar53 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar43 = (FAdditionalStaticMeshIndexBuffers *)(ulonglong)(uVar53 + 3);
        uVar36 = *(undefined4 *)
                  (local_3c0.AllocatorInstance.Data + (longlong)&pFVar33->ReversedIndexBuffer);
        *(undefined4 *)(local_3c0.AllocatorInstance.Data + (longlong)&pFVar33->ReversedIndexBuffer)
             = *(undefined4 *)((longlong)&(pFVar33->ReversedIndexBuffer)._padding_ + FVar49.Data);
        *(undefined4 *)((longlong)&(pFVar33->ReversedIndexBuffer)._padding_ + FVar49.Data) = uVar36;
        pFVar33 = (FAdditionalStaticMeshIndexBuffers *)
                  ((longlong)&(pFVar33->ReversedIndexBuffer)._padding_ + 4);
      } while ((int)(uVar53 + 3) < local_3d0.ArrayNum);
    }
    pFVar33 = ::operator_new(0xf0);
    pFVar43 = pFVar47;
    if (pFVar33 != (FAdditionalStaticMeshIndexBuffers *)0x0) {
      memset(pFVar33,0,0xf0);
      FRawStaticIndexBuffer::FRawStaticIndexBuffer(&pFVar33->ReversedIndexBuffer,false);
      FRawStaticIndexBuffer::FRawStaticIndexBuffer(&pFVar33->ReversedDepthOnlyIndexBuffer,false);
      FRawStaticIndexBuffer::FRawStaticIndexBuffer(&pFVar33->WireframeIndexBuffer,false);
      pFVar43 = pFVar33;
    }
    param_2->bHasReversedIndices = 1;
    param_2->AdditionalIndexBuffers = pFVar43;
    FRawStaticIndexBuffer::SetIndices(&pFVar43->ReversedIndexBuffer,&local_3c0,TVar17);
    FVar49.Data = local_3a0.AllocatorInstance.Data;
    lVar37 = (longlong)local_3a0.ArrayNum;
    local_390.Data = (FScriptContainerElement *)0x0;
    local_388 = local_3a0.ArrayNum;
    if (local_3a0.ArrayNum == 0) {
      local_384 = 0;
      iVar44 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3a0.ArrayNum,0,&local_390,local_3a0.ArrayNum,&local_384);
      memcpy(local_390.Data,FVar49.Data,lVar37 << 2);
      iVar44 = local_388;
    }
    pFVar43 = pFVar47;
    if (0 < local_3d0.ArrayNum) {
      do {
        uVar53 = (uint)pFVar43;
        uVar35 = uVar57;
        if ((int)(uVar53 + 2) < iVar44) {
          uVar35 = ~(uVar53 + 2) >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar44 = local_388, bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar49.Data = local_390.Data;
        uVar35 = uVar57;
        if ((int)uVar53 < iVar44) {
          uVar35 = ~uVar53 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar43 = (FAdditionalStaticMeshIndexBuffers *)(ulonglong)(uVar53 + 3);
        uVar36 = *(undefined4 *)(local_390.Data + (longlong)&pFVar47->ReversedIndexBuffer);
        *(undefined4 *)(local_390.Data + (longlong)&pFVar47->ReversedIndexBuffer) =
             *(undefined4 *)((longlong)&(pFVar47->ReversedIndexBuffer)._padding_ + FVar49.Data);
        *(undefined4 *)((longlong)&(pFVar47->ReversedIndexBuffer)._padding_ + FVar49.Data) = uVar36;
        pFVar47 = (FAdditionalStaticMeshIndexBuffers *)
                  ((longlong)&(pFVar47->ReversedIndexBuffer)._padding_ + 4);
        iVar44 = local_388;
      } while ((int)(uVar53 + 3) < local_3d0.ArrayNum);
    }
    param_2->bHasReversedDepthOnlyIndices = 1;
    FRawStaticIndexBuffer::SetIndices
              (&param_2->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer,&local_3c0,TVar17);
    if (local_390.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data);
    }
    if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.AllocatorInstance.Data);
    }
    if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.AllocatorInstance.Data);
    }
    if (local_3d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.AllocatorInstance.Data);
    }
    if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.AllocatorInstance.Data);
    }
  }
  return;
}

// BuildFromMeshDescriptions @ 1487269a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __thiscall
UStaticMesh::BuildFromMeshDescriptions
          (UStaticMesh *this,TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FBuildMeshDescriptionsParams *param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  TUniquePtr<FStaticMeshRenderData,TDefaultDelete<FStaticMeshRenderData>_> *pTVar3;
  double dVar4;
  FStaticMeshLODResources *pFVar5;
  UBodySetup *pUVar6;
  UStaticMesh *pUVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  FUObjectItem *pFVar21;
  float _X;
  TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> *pTVar22;
  bool bVar23;
  undefined1 uVar24;
  uint uVar25;
  FStaticMeshComponentRecreateRenderStateContext *pFVar26;
  FStaticMeshRenderData *pFVar27;
  FStaticMeshRenderData *pFVar28;
  TBoxSphereBounds<double,double> *pTVar29;
  UClass *pUVar30;
  FUObjectItem *pFVar31;
  UClass *pUVar32;
  int iVar33;
  longlong *plVar34;
  undefined8 uVar35;
  FScriptContainerElement *pFVar36;
  uint uVar37;
  longlong lVar38;
  UActorComponent *pUVar39;
  uint uVar40;
  int iVar41;
  char cVar42;
  ulonglong uVar43;
  longlong lVar44;
  UActorComponent *pUVar45;
  undefined1 *puVar46;
  ulonglong uVar47;
  bool bVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auStack_2f8 [32];
  undefined1 *local_2d8;
  FScriptContainerElement *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  char local_2a8;
  char local_2a7;
  FStaticMeshRenderData *local_2a0;
  TIterator local_298;
  UClass *local_280;
  uint local_278;
  EInternalObjectFlags local_274;
  int local_270;
  longlong local_268;
  TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> *local_260;
  undefined1 local_258 [25];
  FScriptContainerElement local_23f;
  undefined4 local_238;
  undefined1 *local_230;
  TVector<double>_u_0 local_228;
  double local_210;
  double dStack_208;
  double local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined1 local_1a8 [64];
  undefined8 local_168;
  int local_160 [2];
  bool local_158;
  bool local_157;
  char local_150;
  longlong local_148;
  TBoxSphereBounds<double,double> local_140;
  FStaticMeshComponentRecreateRenderStateContext local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  bVar48 = CpuChannel->Enabled < 0;
  local_2a0 = (FStaticMeshRenderData *)param_2;
  local_260 = param_1;
  if (bVar48) {
    local_2a8 = '\0';
  }
  else {
    local_2a8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId8804,"UStaticMesh::BuildFromMeshDescriptions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x2264);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8804);
  }
  iVar41 = 8;
  if (param_1->ArrayNum < 8) {
    iVar41 = param_1->ArrayNum;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  local_270 = iVar41;
  if (param_2->bFastBuild == false) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Params.bFastBuild",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                        ,0x226d,L"");
    if (bVar23) {
      pcVar8 = (code *)swi(3);
      uVar24 = (*pcVar8)();
      return (bool)uVar24;
    }
    if (param_2->bFastBuild == false) goto LAB_148726a95;
  }
  this->bDoFastBuild = '\x01';
LAB_148726a95:
  if (((param_2->bCommitMeshDescription == false) && (param_2->bFastBuild == false)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Params.bCommitMeshDescription || Params.bFastBuild",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                          ,0x2274,L""), bVar23)) {
    pcVar8 = (code *)swi(3);
    uVar24 = (*pcVar8)();
    return (bool)uVar24;
  }
  pFVar28 = (FStaticMeshRenderData *)0x0;
  local_150 = '\0';
  local_2a7 = '\x01';
  if (this->bRenderingResourcesInitialized != 0) {
    local_2a7 = '\0';
    pFVar26 = FStaticMeshComponentRecreateRenderStateContext::
              FStaticMeshComponentRecreateRenderStateContext(&local_108,this,true,true);
    if (pFVar26 != (FStaticMeshComponentRecreateRenderStateContext *)local_1a8) {
      if (local_150 != '\0') {
        FStaticMeshComponentRecreateRenderStateContext::
        ~FStaticMeshComponentRecreateRenderStateContext
                  ((FStaticMeshComponentRecreateRenderStateContext *)local_1a8);
      }
      local_1a8._0_8_ = 0;
      local_1a8._8_8_ = 0;
      local_1a8._32_8_ = 0;
      local_1a8._40_4_ = 0;
      local_1a8._44_4_ = 0x80;
      local_1a8._48_4_ = 0xffffffff;
      local_1a8._52_4_ = 0;
      local_168 = 0;
      local_160[0] = 0;
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)(local_1a8 + 0x38),local_160,
                 (ForElementType<FSetElementId> *)&(pFVar26->StaticMeshComponents).field_0x38,
                 *(int *)&(pFVar26->StaticMeshComponents).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_1a8,
                  (TSparseArray<TSparseSetElement<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pFVar26);
      local_158 = pFVar26->bUnbuildLighting;
      local_157 = pFVar26->bRefreshBounds;
      local_150 = '\x01';
    }
    FStaticMeshComponentRecreateRenderStateContext::~FStaticMeshComponentRecreateRenderStateContext
              (&local_108);
    (**(code **)(this->_padding_ + 800))(this);
    FRenderCommandFence::Wait(&this->ReleaseResourcesFence,false);
  }
  pFVar27 = ::operator_new(0x98);
  if (pFVar27 != (FStaticMeshRenderData *)0x0) {
    pFVar28 = FStaticMeshRenderData::FStaticMeshRenderData(pFVar27);
  }
  pTVar3 = &this->RenderData;
  if (pTVar3 == (TUniquePtr<FStaticMeshRenderData,TDefaultDelete<FStaticMeshRenderData>_> *)
                &local_148) {
    if (pFVar28 != (FStaticMeshRenderData *)0x0) {
      FStaticMeshRenderData::~FStaticMeshRenderData(pFVar28);
      ::operator_delete(pFVar28,0x98);
    }
  }
  else {
    pFVar27 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar28;
    if (pFVar27 != (FStaticMeshRenderData *)0x0) {
      FStaticMeshRenderData::~FStaticMeshRenderData(pFVar27);
      ::operator_delete(pFVar27,0x98);
    }
  }
  uVar47 = 0;
  FStaticMeshRenderData::AllocateLODResources(pTVar3->Ptr,iVar41);
  pFVar27 = local_2a0;
  pFVar28 = pTVar3->Ptr;
  iVar33 = (pFVar28->LODResources).Array.ArrayNum;
  cVar42 = !bVar48;
  if (0 < iVar33) {
    local_268 = 0;
    uVar43 = uVar47;
    do {
      lVar44 = local_268;
      uVar37 = (uint)uVar47;
      uVar40 = ~uVar37 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar37 < iVar33) {
        uVar25 = uVar40;
      }
      if (uVar25 == 0) {
        local_2d0 = (FScriptContainerElement *)(longlong)iVar33;
        local_2d8 = (undefined1 *)(longlong)(int)uVar37;
        bVar48 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar48) {
          pcVar8 = (code *)swi(3);
          uVar24 = (*pcVar8)();
          return (bool)uVar24;
        }
      }
      if ((this->bAllowCPUAccess == '\0') &&
         (*(char *)((longlong)&(pFVar27->LODResources).Array.AllocatorInstance.Data + 5) == '\0')) {
        uVar35 = 0;
      }
      else {
        uVar35 = 1;
      }
      plVar34 = (longlong *)
                (*(longlong *)((pFVar28->LODResources).Array.AllocatorInstance.Data + uVar43) +
                0x250);
      (**(code **)(*plVar34 + 0x38))(plVar34,uVar35);
      if ((-1 < (int)uVar37) &&
         (iVar41 = *(int *)&(pFVar27->LODVertexFactories).AllocatorInstance.Data,
         (int)uVar37 < iVar41)) {
        if ((int)uVar37 < 0) {
          local_2d8 = (undefined1 *)(longlong)(int)uVar37;
          local_2d0 = (FScriptContainerElement *)(longlong)iVar41;
          bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar48) {
            pcVar8 = (code *)swi(3);
            uVar24 = (*pcVar8)();
            return (bool)uVar24;
          }
        }
        puVar46 = (undefined1 *)(lVar44 + *(longlong *)&(pFVar27->LODResources).Array.ArrayNum);
        iVar41 = (pFVar28->LODResources).Array.ArrayNum;
        uVar25 = 0;
        if ((int)uVar37 < iVar41) {
          uVar25 = uVar40;
        }
        if (uVar25 == 0) {
          local_2d0 = (FScriptContainerElement *)(longlong)iVar41;
          local_2d8 = (undefined1 *)(longlong)(int)uVar37;
          bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar48) {
            pcVar8 = (code *)swi(3);
            uVar24 = (*pcVar8)();
            return (bool)uVar24;
          }
        }
        *(undefined1 *)
         (*(longlong *)((pFVar28->LODResources).Array.AllocatorInstance.Data + uVar43) + 0x181) =
             *puVar46;
        iVar41 = (pFVar28->LODResources).Array.ArrayNum;
        uVar25 = 0;
        if ((int)uVar37 < iVar41) {
          uVar25 = uVar40;
        }
        if (uVar25 == 0) {
          local_2d8 = (undefined1 *)(longlong)(int)uVar37;
          local_2d0 = (FScriptContainerElement *)(longlong)iVar41;
          bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar48) {
            pcVar8 = (code *)swi(3);
            uVar24 = (*pcVar8)();
            return (bool)uVar24;
          }
        }
        *(undefined1 *)
         (*(longlong *)((pFVar28->LODResources).Array.AllocatorInstance.Data + uVar43) + 0x180) =
             puVar46[1];
        lVar44 = local_268;
      }
      iVar33 = (pFVar28->LODResources).Array.ArrayNum;
      local_268 = lVar44 + 2;
      uVar47 = (ulonglong)(uVar37 + 1);
      uVar43 = uVar43 + 8;
      param_2 = (FBuildMeshDescriptionsParams *)local_2a0;
      cVar42 = local_2a8;
      iVar41 = local_270;
    } while ((int)(uVar37 + 1) < iVar33);
  }
  pTVar22 = local_260;
  uVar43 = 0;
  lVar44 = (longlong)iVar41;
  uVar47 = uVar43;
  if (0 < lVar44) {
    do {
      uVar37 = (uint)uVar43;
      uVar25 = 0;
      if ((int)uVar37 < pTVar22->ArrayNum) {
        uVar25 = ~uVar37 >> 0x1f;
      }
      if (uVar25 == 0) {
        local_2d8 = (undefined1 *)(longlong)(int)uVar37;
        local_2d0 = (FScriptContainerElement *)(longlong)pTVar22->ArrayNum;
        bVar48 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar48) {
          pcVar8 = (code *)swi(3);
          uVar24 = (*pcVar8)();
          return (bool)uVar24;
        }
      }
      if ((*(longlong *)((pTVar22->AllocatorInstance).Data + uVar47 * 8) == 0) &&
         (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("MeshDescriptions[LODIndex] != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                              ,0x22b1,L""), bVar48)) {
        pcVar8 = (code *)swi(3);
        uVar24 = (*pcVar8)();
        return (bool)uVar24;
      }
      local_2a0 = (this->RenderData).Ptr;
      iVar41 = (local_2a0->LODResources).Array.ArrayNum;
      uVar25 = 0;
      if ((int)uVar37 < iVar41) {
        uVar25 = ~uVar37 >> 0x1f;
      }
      if (uVar25 == 0) {
        local_2d8 = (undefined1 *)(longlong)(int)uVar37;
        local_2d0 = (FScriptContainerElement *)(longlong)iVar41;
        bVar48 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar48) {
          pcVar8 = (code *)swi(3);
          uVar24 = (*pcVar8)();
          return (bool)uVar24;
        }
      }
      pFVar5 = *(FStaticMeshLODResources **)
                ((local_2a0->LODResources).Array.AllocatorInstance.Data + uVar47 * 8);
      uVar25 = 0;
      if ((int)uVar37 < pTVar22->ArrayNum) {
        uVar25 = ~uVar37 >> 0x1f;
      }
      if (uVar25 == 0) {
        local_2d8 = (undefined1 *)(longlong)(int)uVar37;
        local_2d0 = (FScriptContainerElement *)(longlong)pTVar22->ArrayNum;
        bVar48 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar48) {
          pcVar8 = (code *)swi(3);
          uVar24 = (*pcVar8)();
          return (bool)uVar24;
        }
      }
      BuildFromMeshDescription
                (this,*(FMeshDescription **)((pTVar22->AllocatorInstance).Data + uVar47 * 8),pFVar5)
      ;
      uVar43 = (ulonglong)(uVar37 + 1);
      uVar47 = uVar47 + 1;
      cVar42 = local_2a8;
    } while ((longlong)uVar47 < lVar44);
  }
  iVar41 = 0;
  bVar48 = IsRayTracingAllowed();
  if ((bVar48) && (this->bSupportRayTracing != '\0')) {
    FStaticMeshRenderData::InitializeRayTracingRepresentationFromRenderingLODs
              ((this->RenderData).Ptr);
  }
  (**(code **)(this->_padding_ + 0x318))(this);
  pTVar22 = local_260;
  if (local_260->ArrayNum < 1) {
    local_2d8 = (undefined1 *)0x0;
    local_2d0 = (FScriptContainerElement *)(longlong)local_260->ArrayNum;
    bVar48 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar48) {
      pcVar8 = (code *)swi(3);
      uVar24 = (*pcVar8)();
      return (bool)uVar24;
    }
  }
  pTVar29 = FMeshDescription::GetBounds
                      (*(FMeshDescription **)(pTVar22->AllocatorInstance).Data,&local_140);
  uVar57 = 0;
  uVar58 = 0;
  uVar59 = 0;
  uVar60 = 0;
  uVar61 = 0;
  uVar62 = 0;
  uVar63 = 0;
  uVar64 = 0;
  local_1d8 = ZEXT816(0);
  dVar10 = (pTVar29->Origin).field0_0x0._s_0.Y;
  dVar13 = (pTVar29->Origin).field0_0x0._s_0.Z;
  dVar15 = (pTVar29->BoxExtent).field0_0x0._s_0.X;
  dVar17 = (pTVar29->BoxExtent).field0_0x0._s_0.Y;
  dVar14 = (pTVar29->BoxExtent).field0_0x0._s_0.Z;
  dVar4 = pTVar29->SphereRadius;
  pFVar28 = (this->RenderData).Ptr;
  local_1c8 = ZEXT816(0);
  (pFVar28->Bounds).Origin.field0_0x0._s_0.X = (pTVar29->Origin).field0_0x0._s_0.X;
  (pFVar28->Bounds).Origin.field0_0x0._s_0.Y = dVar10;
  (pFVar28->Bounds).Origin.field0_0x0._s_0.Z = dVar13;
  (pFVar28->Bounds).BoxExtent.field0_0x0._s_0.X = dVar15;
  (pFVar28->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar17;
  (pFVar28->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar14;
  (pFVar28->Bounds).SphereRadius = dVar4;
  uVar53 = 0;
  uVar54 = 0;
  uVar55 = 0;
  uVar56 = 0;
  pFVar28 = (this->RenderData).Ptr;
  local_1b8 = 0.0;
  local_1e8 = ZEXT816(0);
  if (pFVar28 != (FStaticMeshRenderData *)0x0) {
    uVar53 = *(undefined4 *)&(pFVar28->Bounds).Origin.field0_0x0;
    uVar54 = *(undefined4 *)((longlong)&(pFVar28->Bounds).Origin.field0_0x0 + 4);
    uVar55 = *(undefined4 *)((longlong)&(pFVar28->Bounds).Origin.field0_0x0 + 8);
    uVar56 = *(undefined4 *)((longlong)&(pFVar28->Bounds).Origin.field0_0x0 + 0xc);
    local_1e8 = *(undefined1 (*) [16])&(pFVar28->Bounds).Origin.field0_0x0;
    pauVar1 = (undefined1 (*) [16])((longlong)&(pFVar28->Bounds).Origin.field0_0x0 + 0x10);
    uVar57 = *(undefined4 *)*pauVar1;
    uVar58 = *(undefined4 *)((longlong)&(pFVar28->Bounds).Origin.field0_0x0 + 0x14);
    uVar59 = *(undefined4 *)&(pFVar28->Bounds).BoxExtent.field0_0x0;
    uVar60 = *(undefined4 *)((longlong)&(pFVar28->Bounds).BoxExtent.field0_0x0 + 4);
    local_1d8 = *pauVar1;
    pauVar1 = (undefined1 (*) [16])((longlong)&(pFVar28->Bounds).BoxExtent.field0_0x0 + 8);
    uVar61 = *(undefined4 *)*pauVar1;
    uVar62 = *(undefined4 *)((longlong)&(pFVar28->Bounds).BoxExtent.field0_0x0 + 0xc);
    uVar63 = *(undefined4 *)((longlong)&(pFVar28->Bounds).BoxExtent.field0_0x0 + 0x10);
    uVar64 = *(undefined4 *)((longlong)&(pFVar28->Bounds).BoxExtent.field0_0x0 + 0x14);
    local_1c8 = *pauVar1;
    local_1b8 = (pFVar28->Bounds).SphereRadius;
  }
  dVar52 = (double)CONCAT44(uVar64,uVar63);
  dVar13 = (double)CONCAT44(uVar60,uVar59);
  dVar17 = (double)CONCAT44(uVar62,uVar61);
  dVar10 = (double)CONCAT44(uVar54,uVar53);
  dVar14 = (double)CONCAT44(uVar56,uVar55);
  dVar15 = (double)CONCAT44(uVar58,uVar57);
  dVar4 = (this->NegativeBoundsExtension).field0_0x0._s_0.X;
  if (((((dVar4 != 0.0) || ((this->NegativeBoundsExtension).field0_0x0._s_0.Y != 0.0)) ||
       ((this->NegativeBoundsExtension).field0_0x0._s_0.Z != 0.0)) ||
      (((this->PositiveBoundsExtension).field0_0x0._s_0.X != 0.0 ||
       ((this->PositiveBoundsExtension).field0_0x0._s_0.Y != 0.0)))) ||
     ((this->PositiveBoundsExtension).field0_0x0._s_0.Z != 0.0)) {
    dVar15 = (double)local_1d8._0_8_ + (double)local_1c8._8_8_ +
             (this->PositiveBoundsExtension).field0_0x0._s_0.Z;
    dVar10 = ((double)local_1d8._0_8_ - (double)local_1c8._8_8_) -
             (this->NegativeBoundsExtension).field0_0x0._s_0.Z;
    dVar13 = ((double)local_1e8._8_8_ - (double)local_1c8._0_8_) -
             (this->NegativeBoundsExtension).field0_0x0._s_0.Y;
    dVar17 = (double)local_1c8._0_8_ + (double)local_1e8._8_8_ +
             (this->PositiveBoundsExtension).field0_0x0._s_0.Y;
    dVar16 = dVar15 - dVar10;
    dVar4 = ((double)local_1e8._0_8_ - (double)local_1d8._8_8_) - dVar4;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = __real_3fe0000000000000;
    dVar19 = (double)local_1d8._8_8_ + (double)local_1e8._0_8_ +
             (this->PositiveBoundsExtension).field0_0x0._s_0.X;
    dVar18 = dVar17 - dVar13;
    dVar15 = (dVar15 + dVar10) * __real_3fe0000000000000;
    dVar20 = dVar19 - dVar4;
    dVar52 = dVar16 * __real_3fe0000000000000;
    dVar14 = (dVar17 + dVar13) * __real_3fe0000000000000;
    dVar10 = (dVar19 + dVar4) * __real_3fe0000000000000;
    dVar13 = dVar20 * __real_3fe0000000000000;
    dVar17 = dVar18 * __real_3fe0000000000000;
    local_1c8._8_4_ = SUB84(dVar52,0);
    local_1c8._0_8_ = dVar17;
    local_1c8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
    local_1d8._8_4_ = SUB84(dVar13,0);
    local_1d8._0_8_ = dVar15;
    local_1d8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    local_1e8._8_4_ = SUB84(dVar14,0);
    local_1e8._0_8_ = dVar10;
    local_1e8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    auVar51._8_8_ = 0;
    auVar51._0_8_ = (dVar20 * dVar20 + dVar18 * dVar18 + dVar16 * dVar16) * __real_3fd0000000000000;
    auVar51 = sqrtpd(auVar50,auVar51);
    local_1b8 = auVar51._0_8_;
  }
  auVar9._8_4_ = SUB84(dVar14,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])&(this->ExtendedBounds).Origin.field0_0x0 = auVar9;
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ = dVar15;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->ExtendedBounds).Origin.field0_0x0 + 0x10) = auVar11;
  auVar12._8_4_ = SUB84(dVar52,0);
  auVar12._0_8_ = dVar17;
  auVar12._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->ExtendedBounds).BoxExtent.field0_0x0 + 8) = auVar12;
  (this->ExtendedBounds).SphereRadius = local_1b8;
  _X = __real_3f400000;
  if (0 < lVar44) {
    lVar38 = 0x20;
    do {
      fVar49 = powf(_X,(float)iVar41);
      iVar41 = iVar41 + 1;
      *(float *)((longlong)
                 &(((FStaticMeshRenderData *)(((this->RenderData).Ptr)->ScreenSize + -8))->
                  LODResources).Array.AllocatorInstance.Data + lVar38) = fVar49;
      lVar44 = lVar44 + -1;
      lVar38 = lVar38 + 4;
    } while (lVar44 != 0);
  }
  CreateBodySetup(this);
  if (((this->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetBodySetup()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                          ,0x22e8,L""), bVar48)) {
    pcVar8 = (code *)swi(3);
    uVar24 = (*pcVar8)();
    return (bool)uVar24;
  }
  (**(code **)(((this->BodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
  pUVar45 = (UActorComponent *)0x0;
  if (*(char *)((longlong)
                &(((FStaticMeshRenderData *)param_2)->LODResources).Array.AllocatorInstance.Data + 2
               ) != '\0') {
    local_258[0x18] = local_258[0x18] | 1;
    local_230 = local_258;
    pUVar6 = (this->BodySetup).field0_0x0.DebugPtr;
    pFVar28 = (this->RenderData).Ptr;
    local_200 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_210 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_208 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_258._8_4_ = 0;
    local_258._12_4_ = 0;
    local_258._16_4_ = 0;
    local_258._20_4_ = 1;
    local_23f = (FScriptContainerElement)0x3;
    local_238 = 6;
    local_258._0_8_ = &___7FKBoxElem__6B_;
    local_228._s_0.X = (pFVar28->Bounds).Origin.field0_0x0._s_0.X;
    local_228._s_0.Y = (pFVar28->Bounds).Origin.field0_0x0._s_0.Y;
    local_228._s_0.Z = (pFVar28->Bounds).Origin.field0_0x0._s_0.Z;
    dVar4 = (pFVar28->Bounds).BoxExtent.field0_0x0._s_0.X;
    local_1f8 = (float)(dVar4 + dVar4);
    dVar4 = (pFVar28->Bounds).BoxExtent.field0_0x0._s_0.Y;
    local_1f4 = (float)(dVar4 + dVar4);
    dVar4 = (pFVar28->Bounds).BoxExtent.field0_0x0._s_0.Z;
    local_1f0 = (float)(dVar4 + dVar4);
    pFVar36 = (pUVar6->AggGeom).BoxElems.AllocatorInstance.Data;
    if ((pFVar36 <= (FScriptContainerElement *)local_258) &&
       (lVar44 = (longlong)(pUVar6->AggGeom).BoxElems.ArrayMax,
       (FScriptContainerElement *)local_258 < pFVar36 + lVar44 * 0x70)) {
      local_2c0 = (longlong)(pUVar6->AggGeom).BoxElems.ArrayNum;
      local_2b8 = 0x70;
      local_2d8 = local_258;
      local_2d0 = pFVar36;
      local_2c8 = lVar44;
      bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar48) {
        pcVar8 = (code *)swi(3);
        uVar24 = (*pcVar8)();
        return (bool)uVar24;
      }
    }
    iVar41 = (pUVar6->AggGeom).BoxElems.ArrayNum;
    piVar2 = &(pUVar6->AggGeom).BoxElems.ArrayMax;
    if (iVar41 == *piVar2) {
      iVar41 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&(pUVar6->AggGeom).BoxElems.AllocatorInstance,piVar2);
    }
    (pUVar6->AggGeom).BoxElems.ArrayNum = iVar41 + 1;
    pFVar36 = (pUVar6->AggGeom).BoxElems.AllocatorInstance.Data + (longlong)iVar41 * 0x70;
    *(undefined ***)pFVar36 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar36 + 8) = local_258._8_4_;
    *(ulonglong *)(pFVar36 + 0xc) = CONCAT44(local_258._16_4_,local_258._12_4_);
    *(undefined4 *)(pFVar36 + 0x14) = local_258._20_4_;
    pFVar36[0x18] = (FScriptContainerElement)((byte)pFVar36[0x18] & 0xfe | local_258[0x18] & 1);
    pFVar36[0x19] = local_23f;
    *(undefined4 *)(pFVar36 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar36 + 0x28) = pFVar36;
    *(undefined ***)pFVar36 = &___7FKBoxElem__6B_;
    *(double *)(pFVar36 + 0x30) = local_228._s_0.X;
    *(double *)(pFVar36 + 0x38) = local_228._s_0.Y;
    *(double *)(pFVar36 + 0x40) = local_228._s_0.Z;
    *(double *)(pFVar36 + 0x48) = local_210;
    *(double *)(pFVar36 + 0x50) = dStack_208;
    *(double *)(pFVar36 + 0x58) = local_200;
    *(float *)(pFVar36 + 0x60) = local_1f8;
    *(float *)(pFVar36 + 100) = local_1f4;
    *(float *)(pFVar36 + 0x68) = local_1f0;
    (**(code **)(((this->BodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
    FKBoxElem::~FKBoxElem((FKBoxElem *)local_258);
  }
  if (local_2a7 == '\0') {
    pUVar30 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    local_298.Index = -1;
    local_298.Array = &GUObjectArray;
    local_298.CurrentObject = (FUObjectItem *)0x0;
    FUObjectArray::TIterator::Advance(&local_298);
    local_278 = 0;
    local_280 = pUVar30;
    local_274 = UE::GetAsyncLoadingInternalFlagsExclusion();
    local_274 = local_274 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
    if ((pUVar30 == (UClass *)0x0) &&
       (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                           ("Class",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                            ,0x70,L""), bVar48)) {
      pcVar8 = (code *)swi(3);
      uVar24 = (*pcVar8)();
      return (bool)uVar24;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&(local_298.Array)->ObjObjectsCritical);
    do {
      pFVar21 = local_298.CurrentObject;
      pUVar39 = pUVar45;
      if (local_298.CurrentObject != (FUObjectItem *)0x0) {
        pUVar39 = (UActorComponent *)((local_298.CurrentObject)->field1_0x8).Object;
      }
      if (((local_278 & (uint)pUVar39->_padding_) == 0) &&
         (pFVar31 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&pUVar39->_padding_ + 4)),
         (local_274 &
         (EInternalObjectFlags)((ulonglong)(pFVar31->field0_0x0).FlagsAndRefCount >> 0x20)) ==
         Borrowed)) {
        pUVar32 = Z_Construct_UClass_UObject_NoRegister();
        if (pUVar30 == pUVar32) break;
        iVar41 = (int)pUVar30->_padding_;
        if ((iVar41 <= *(int *)(pUVar39->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar39->_padding_ + 0x30) + (longlong)iVar41 * 8) ==
            &pUVar30->_padding_)) break;
      }
      bVar48 = FUObjectArray::TIterator::Advance(&local_298);
      pUVar30 = local_280;
      pFVar21 = local_298.CurrentObject;
    } while (bVar48);
joined_r0x0001487275da:
    if (pFVar21 != (FUObjectItem *)0x0) {
      pUVar39 = (UActorComponent *)(pFVar21->field1_0x8).Object;
      if (pUVar39 == (UActorComponent *)0x0) {
LAB_14872760c:
        pUVar39 = pUVar45;
      }
      else {
        pUVar30 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar41 = (int)pUVar30->_padding_;
        if ((*(int *)(pUVar39->_padding_ + 0x38) < iVar41) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar39->_padding_ + 0x30) + (longlong)iVar41 * 8) !=
            &pUVar30->_padding_)) goto LAB_14872760c;
      }
      pUVar7 = (UStaticMesh *)pUVar39[7].PrimaryComponentTick.Target;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 == (UStaticMesh *)0x0) goto LAB_148727673;
LAB_14872762c:
        bVar48 = pUVar7 == this;
      }
      else {
        if (pUVar7 != (UStaticMesh *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
          goto LAB_14872762c;
        }
LAB_148727673:
        bVar48 = this == (UStaticMesh *)0x0;
      }
      if ((bVar48) && (pUVar39->bPhysicsStateCreated != '\0')) {
        UActorComponent::RecreatePhysicsState(pUVar39);
      }
LAB_148727650:
      do {
        do {
          bVar48 = FUObjectArray::TIterator::Advance(&local_298);
          pFVar21 = local_298.CurrentObject;
          if (!bVar48) goto joined_r0x0001487275da;
          pUVar39 = pUVar45;
          if (local_298.CurrentObject != (FUObjectItem *)0x0) {
            pUVar39 = (UActorComponent *)((local_298.CurrentObject)->field1_0x8).Object;
          }
        } while ((local_278 & (uint)pUVar39->_padding_) != 0);
        pUVar30 = Z_Construct_UClass_UObject_NoRegister();
        if (local_280 != pUVar30) {
          iVar41 = (int)local_280->_padding_;
          if ((*(int *)(pUVar39->_padding_ + 0x38) < iVar41) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar39->_padding_ + 0x30) + (longlong)iVar41 * 8) !=
              &local_280->_padding_)) goto LAB_148727650;
        }
        pFVar31 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&pUVar39->_padding_ + 4));
      } while ((local_274 &
               (EInternalObjectFlags)((ulonglong)(pFVar31->field0_0x0).FlagsAndRefCount >> 0x20)) !=
               Borrowed);
      goto joined_r0x0001487275da;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&(local_298.Array)->ObjObjectsCritical);
  }
  if (local_150 != '\0') {
    FStaticMeshComponentRecreateRenderStateContext::~FStaticMeshComponentRecreateRenderStateContext
              ((FStaticMeshComponentRecreateRenderStateContext *)local_1a8);
  }
  if (cVar42 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// BuildFromStaticMeshDescriptions @ 148727750

void __thiscall
UStaticMesh::BuildFromStaticMeshDescriptions
          (UStaticMesh *this,TArray<UStaticMeshDescription_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> local_68;
  FBuildMeshDescriptionsParams local_58;
  
  uVar2 = param_1->ArrayNum;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  if (-1 < (int)uVar2) {
    iVar6 = 0;
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
      iVar6 = local_68.ArrayNum;
    }
    pFVar7 = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar3 * 8;
    while( true ) {
      iVar5 = iVar6;
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<UStaticMeshDescription_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
        iVar5 = local_68.ArrayNum;
      }
      if (pFVar7 == pFVar1) break;
      lVar4 = *(longlong *)pFVar7;
      if (iVar5 == local_68.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_68.AllocatorInstance,&local_68.ArrayMax);
      }
      iVar6 = iVar5 + 1;
      local_68.ArrayNum = iVar6;
      pFVar7 = pFVar7 + 8;
      *(longlong *)(local_68.AllocatorInstance.Data + (longlong)iVar5 * 8) = lVar4 + 0x28;
    }
    local_58.bMarkPackageDirty = true;
    local_58.bUseHashAsGuid = false;
    local_58.PerLODOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.PerLODOverrides.ArrayNum = 0;
    local_58.PerLODOverrides.ArrayMax = 0;
    local_58.bCommitMeshDescription = true;
    local_58.bAllowCpuAccess = false;
    local_58.bBuildSimpleCollision = param_2;
    local_58.bFastBuild = param_3;
    BuildFromMeshDescriptions(this,&local_68,&local_58);
    if (local_58.PerLODOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.PerLODOverrides.AllocatorInstance.Data);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// CalcCumulativeLODSize @ 148727940

int __thiscall UStaticMesh::CalcCumulativeLODSize(UStaticMesh *this,int param_1)

{
  longlong lVar1;
  FStaticMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  pFVar2 = (this->RenderData).Ptr;
  iVar8 = 0;
  iVar6 = 0;
  if (pFVar2 != (FStaticMeshRenderData *)0x0) {
    iVar6 = (pFVar2->LODResources).Array.ArrayNum;
  }
  uVar9 = iVar6 - 1;
  lVar7 = (longlong)(int)uVar9;
  while( true ) {
    if (lVar7 < iVar6 - param_1) {
      return iVar8;
    }
    pFVar2 = (this->RenderData).Ptr;
    uVar5 = 0;
    if ((int)uVar9 < (pFVar2->LODResources).Array.ArrayNum) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar9 = uVar9 - 1;
    lVar1 = lVar7 * 8;
    lVar7 = lVar7 + -1;
    iVar8 = iVar8 + *(int *)(*(longlong *)
                              ((pFVar2->LODResources).Array.AllocatorInstance.Data + lVar1) + 0x9c);
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// CalculateExtendedBounds @ 148728500

void __thiscall UStaticMesh::CalculateExtendedBounds(UStaticMesh *this)

{
  double dVar1;
  FStaticMeshRenderData *pFVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double *pdVar14;
  TVector<double> *pTVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double dVar29;
  
  pFVar2 = (this->RenderData).Ptr;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  local_a8 = 0.0;
  dStack_a0 = 0.0;
  local_98 = 0.0;
  dStack_90 = 0.0;
  local_88 = 0.0;
  dStack_80 = 0.0;
  if (pFVar2 == (FStaticMeshRenderData *)0x0) {
    dVar29 = 0.0;
  }
  else {
    uVar16 = *(undefined4 *)&(pFVar2->Bounds).Origin.field0_0x0;
    uVar17 = *(undefined4 *)((longlong)&(pFVar2->Bounds).Origin.field0_0x0 + 4);
    local_a8 = (pFVar2->Bounds).Origin.field0_0x0._s_0.X;
    pdVar14 = &(pFVar2->Bounds).Origin.field0_0x0._s_0.Y;
    uVar18 = *(undefined4 *)pdVar14;
    uVar19 = *(undefined4 *)((longlong)&(pFVar2->Bounds).Origin.field0_0x0 + 0xc);
    dStack_a0 = *pdVar14;
    pdVar14 = &(pFVar2->Bounds).Origin.field0_0x0._s_0.Z;
    uVar20 = *(undefined4 *)pdVar14;
    uVar21 = *(undefined4 *)((longlong)&(pFVar2->Bounds).Origin.field0_0x0 + 0x14);
    local_98 = *pdVar14;
    pTVar15 = &(pFVar2->Bounds).BoxExtent;
    uVar22 = *(undefined4 *)&pTVar15->field0_0x0;
    uVar23 = *(undefined4 *)((longlong)&(pFVar2->Bounds).BoxExtent.field0_0x0 + 4);
    dStack_90 = (pTVar15->field0_0x0)._s_0.X;
    pdVar14 = &(pFVar2->Bounds).BoxExtent.field0_0x0._s_0.Y;
    uVar25 = *(undefined4 *)pdVar14;
    uVar26 = *(undefined4 *)((longlong)&(pFVar2->Bounds).BoxExtent.field0_0x0 + 0xc);
    local_88 = *pdVar14;
    pdVar14 = &(pFVar2->Bounds).BoxExtent.field0_0x0._s_0.Z;
    uVar27 = *(undefined4 *)pdVar14;
    uVar28 = *(undefined4 *)((longlong)&(pFVar2->Bounds).BoxExtent.field0_0x0 + 0x14);
    dStack_80 = *pdVar14;
    dVar29 = (pFVar2->Bounds).SphereRadius;
  }
  dVar10 = (double)CONCAT44(uVar28,uVar27);
  dVar24 = (double)CONCAT44(uVar23,uVar22);
  dVar12 = (double)CONCAT44(uVar21,uVar20);
  dVar6 = (double)CONCAT44(uVar26,uVar25);
  dVar7 = (double)CONCAT44(uVar19,uVar18);
  dVar8 = (double)CONCAT44(uVar17,uVar16);
  dVar1 = (this->NegativeBoundsExtension).field0_0x0._s_0.X;
  if ((((dVar1 != 0.0) || ((this->NegativeBoundsExtension).field0_0x0._s_0.Y != 0.0)) ||
      ((this->NegativeBoundsExtension).field0_0x0._s_0.Z != 0.0)) ||
     ((((this->PositiveBoundsExtension).field0_0x0._s_0.X != 0.0 ||
       ((this->PositiveBoundsExtension).field0_0x0._s_0.Y != 0.0)) ||
      ((this->PositiveBoundsExtension).field0_0x0._s_0.Z != 0.0)))) {
    dVar10 = local_a8 + dStack_90 + (this->PositiveBoundsExtension).field0_0x0._s_0.X;
    auVar30._0_8_ = (local_a8 - dStack_90) - dVar1;
    auVar30._8_8_ = 0;
    dVar12 = dStack_a0 + local_88 + (this->PositiveBoundsExtension).field0_0x0._s_0.Y;
    dVar29 = (dStack_a0 - local_88) - (this->NegativeBoundsExtension).field0_0x0._s_0.Y;
    dVar11 = dVar10 - auVar30._0_8_;
    dVar1 = local_98 + dStack_80 + (this->PositiveBoundsExtension).field0_0x0._s_0.Z;
    dVar13 = dVar12 - dVar29;
    dVar24 = (local_98 - dStack_80) - (this->NegativeBoundsExtension).field0_0x0._s_0.Z;
    dVar8 = (dVar10 + auVar30._0_8_) * __real_3fe0000000000000;
    dVar9 = dVar1 - dVar24;
    dVar7 = (dVar12 + dVar29) * __real_3fe0000000000000;
    dVar10 = dVar9 * __real_3fe0000000000000;
    dVar6 = dVar13 * __real_3fe0000000000000;
    dVar12 = (dVar1 + dVar24) * __real_3fe0000000000000;
    dVar24 = dVar11 * __real_3fe0000000000000;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = (dVar13 * dVar13 + dVar11 * dVar11 + dVar9 * dVar9) * __real_3fd0000000000000;
    auVar31 = sqrtpd(auVar30,auVar31);
    dVar29 = auVar31._0_8_;
  }
  auVar3._8_4_ = SUB84(dVar7,0);
  auVar3._0_8_ = dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&(this->ExtendedBounds).Origin.field0_0x0 = auVar3;
  auVar4._8_4_ = SUB84(dVar24,0);
  auVar4._0_8_ = dVar12;
  auVar4._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->ExtendedBounds).Origin.field0_0x0 + 0x10) = auVar4;
  auVar5._8_4_ = SUB84(dVar10,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->ExtendedBounds).BoxExtent.field0_0x0 + 8) = auVar5;
  (this->ExtendedBounds).SphereRadius = dVar29;
  return;
}

// CanBeClusterRoot @ 148729230

bool __thiscall UStaticMesh::CanBeClusterRoot(UStaticMesh *this)

{
  return false;
}

// CanMeshPaintTextureColors @ 148729240

bool __thiscall UStaticMesh::CanMeshPaintTextureColors(UStaticMesh *this)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarStaticMeshDefaultMeshPaintTextureSupport.Ref;
  if (this->StaticMeshPaintSupport != Default) {
    return this->StaticMeshPaintSupport != Disabled;
  }
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0];
}

// CancelAllPendingStreamingActions @ 148729300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UStaticMesh::CancelAllPendingStreamingActions(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UStaticMesh> local_28;
  
  FlushRenderingCommands();
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UStaticMesh>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UStreamableRenderAsset::CancelPendingStreamingRequest
              (*(UStreamableRenderAsset **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8)
              );
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  FlushRenderingCommands();
  return;
}

// CheckLightMapUVs @ 148729a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStaticMesh::CheckLightMapUVs
          (UStaticMesh *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  FStaticMeshRenderData *pFVar1;
  FStaticMeshLODResources *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UVCheckResult UVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong local_108;
  undefined1 local_100 [4];
  int local_fc;
  int local_f8;
  FName local_f4;
  FName local_ec;
  FName local_e4;
  FName local_dc;
  FName local_d4;
  longlong local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (FReadOnlyCVARCache::bAllowStaticLighting) {
    if ((param_1 == (UStaticMesh *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStaticMesh != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                           ,0x26ab,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->RenderData).Ptr;
    iVar6 = 0;
    if (pFVar1 != (FStaticMeshRenderData *)0x0) {
      iVar6 = (pFVar1->LODResources).Array.ArrayNum;
    }
    local_c8 = (longlong)iVar6;
    uVar10 = 0;
    if (0 < local_c8) {
      local_108 = 0;
      do {
        pFVar1 = (param_1->RenderData).Ptr;
        uVar4 = 0;
        if ((int)uVar10 < (pFVar1->LODResources).Array.ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = param_1->LightMapCoordinateIndex;
        this = *(FStaticMeshLODResources **)
                ((pFVar1->LODResources).Array.AllocatorInstance.Data + local_108 * 8);
        if ((iVar6 < 1) && (1 < (int)(this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords)) {
          iVar6 = 1;
        }
        local_fc = 0;
        local_f8 = 0;
        UVar5 = `UStaticMesh::CheckLightMapUVs'::__l2::FLocal::CheckLODLightMapUVs
                          (local_100,this,iVar6,&local_fc,&local_f8);
        if (UVar5 == UVCheck_Missing) {
          pFVar7 = (FScriptContainerElement *)
                   UObjectBaseUtility::GetFullName
                             ((UObjectBaseUtility *)param_1,&local_50,(UObject *)0x0,None);
          pFVar9 = (param_2->AllocatorInstance).Data;
          if (((pFVar9 <= pFVar7) && (pFVar7 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = param_2->ArrayNum;
          if (iVar6 == param_2->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar6 + 1;
          pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar9 = 0;
          *(FScriptContainerElement **)pFVar9 =
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->
               AllocatorInstance).Data;
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).
          Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar9 + 8) = *(int *)&pFVar7[8].field_0x0;
          *(int *)(pFVar9 + 0xc) = *(int *)&pFVar7[0xc].field_0x0;
          *(undefined8 *)&pFVar7[8].field_0x0 = 0;
          FVar8.Data = local_50.Data.AllocatorInstance.Data;
LAB_148729e66:
          if (FVar8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar8.Data);
          }
        }
        else {
          if (UVar5 == UVCheck_Bad) {
            pFVar7 = (FScriptContainerElement *)
                     UObjectBaseUtility::GetFullName
                               ((UObjectBaseUtility *)param_1,&local_60,(UObject *)0x0,None);
            pFVar9 = (param_3->AllocatorInstance).Data;
            if (((pFVar9 <= pFVar7) && (pFVar7 < pFVar9 + (longlong)param_3->ArrayMax * 0x10)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = param_3->ArrayNum;
            if (iVar6 == param_3->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar6 + 1;
            pFVar9 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
            *(undefined8 *)pFVar9 = 0;
            *(FScriptContainerElement **)pFVar9 =
                 (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->
                 AllocatorInstance).Data;
            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance)
            .Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar9 + 8) = *(int *)&pFVar7[8].field_0x0;
            *(int *)(pFVar9 + 0xc) = *(int *)&pFVar7[0xc].field_0x0;
            *(undefined8 *)&pFVar7[8].field_0x0 = 0;
            FVar8.Data = local_60.Data.AllocatorInstance.Data;
            goto LAB_148729e66;
          }
          if (UVar5 == UVCheck_OK) {
            pFVar7 = (FScriptContainerElement *)
                     UObjectBaseUtility::GetFullName
                               ((UObjectBaseUtility *)param_1,&local_70,(UObject *)0x0,None);
            pFVar9 = (param_4->AllocatorInstance).Data;
            if (((pFVar9 <= pFVar7) && (pFVar7 < pFVar9 + (longlong)param_4->ArrayMax * 0x10)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = param_4->ArrayNum;
            if (iVar6 == param_4->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar6 + 1;
            pFVar9 = (param_4->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
            *(undefined8 *)pFVar9 = 0;
            *(FScriptContainerElement **)pFVar9 =
                 (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->
                 AllocatorInstance).Data;
            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance)
            .Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar9 + 8) = *(int *)&pFVar7[8].field_0x0;
            *(int *)(pFVar9 + 0xc) = *(int *)&pFVar7[0xc].field_0x0;
            *(undefined8 *)&pFVar7[8].field_0x0 = 0;
            FVar8.Data = local_70.Data.AllocatorInstance.Data;
            goto LAB_148729e66;
          }
        }
        if (param_5) {
          if (UVar5 == UVCheck_Missing) {
            if (2 < (byte)LogStaticMesh._0_1_) {
              local_d4 = (FName)param_1->_padding_;
              ::FName::ToString(&local_d4,&local_80);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
              FVar8.Data = local_80.Data.AllocatorInstance.Data;
LAB_14872a0ab:
              if (FVar8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar8.Data);
              }
            }
          }
          else if (UVar5 == UVCheck_Bad) {
            if ((0 < local_fc) && (2 < (byte)LogStaticMesh._0_1_)) {
              FStaticMeshLODResources::GetNumTriangles(this);
              local_e4 = (FName)param_1->_padding_;
              ::FName::ToString(&local_e4,&local_a0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
            }
            if ((0 < local_f8) && (2 < (byte)LogStaticMesh._0_1_)) {
              FStaticMeshLODResources::GetNumTriangles(this);
              local_dc = (FName)param_1->_padding_;
              ::FName::ToString(&local_dc,&local_90);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
              FVar8.Data = local_90.Data.AllocatorInstance.Data;
              goto LAB_14872a0ab;
            }
          }
          else if (UVar5 == UVCheck_OK) {
            if (4 < (byte)LogStaticMesh._0_1_) {
              local_ec = (FName)param_1->_padding_;
              ::FName::ToString(&local_ec,&local_b0);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
            }
          }
          else if ((UVar5 == UVCheck_NoTriangles) && (2 < (byte)LogStaticMesh._0_1_)) {
            local_f4 = (FName)param_1->_padding_;
            ::FName::ToString(&local_f4,&local_c0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
          }
        }
        local_108 = local_108 + 1;
        uVar10 = uVar10 + 1;
      } while (local_108 < local_c8);
    }
  }
  return;
}

// ContainsPhysicsTriMeshData @ 14872d820

bool __thiscall UStaticMesh::ContainsPhysicsTriMeshData(UStaticMesh *this,bool param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  plVar2 = (longlong *)this->_padding_;
  if ((plVar2 == (longlong *)0x0) || (iVar1 = (int)plVar2[1], iVar1 == 0)) {
    return false;
  }
  if (param_1) {
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)(this->MinQualityLevelLOD)._padding_;
    uVar7 = iVar1 - 1U;
    if ((int)uVar9 < (int)(iVar1 - 1U)) {
      uVar7 = uVar9;
    }
    uVar9 = 0;
    if (0 < (int)uVar7) {
      uVar9 = uVar7;
    }
  }
  uVar7 = 0;
  if ((int)uVar9 < iVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar3 = *(longlong *)(*plVar2 + (longlong)(int)uVar9 * 8);
  if ((*(int *)(lVar3 + 0x1cc) != 0) && (uVar9 = 0, 0 < *(int *)(lVar3 + 0x38))) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < *(int *)(lVar3 + 0x38)) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar8 = lVar3 + 0x10;
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        lVar8 = *(longlong *)(lVar3 + 0x30);
      }
      if ((*(int *)(lVar10 + 8 + lVar8) != 0) &&
         ((param_1 || (*(char *)(lVar10 + 0x14 + lVar8) != '\0')))) {
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x1c;
    } while ((int)uVar9 < *(int *)(lVar3 + 0x38));
  }
  return false;
}

// ContainsPhysicsTriMeshDataCheckComplex @ 14872d990

bool __thiscall
UStaticMesh::ContainsPhysicsTriMeshDataCheckComplex(UStaticMesh *this,bool param_1,bool param_2)

{
  int iVar1;
  FStaticMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  pFVar2 = (this->RenderData).Ptr;
  if ((pFVar2 != (FStaticMeshRenderData *)0x0) &&
     (iVar1 = (pFVar2->LODResources).Array.ArrayNum, iVar1 != 0)) {
    if (param_1) {
      uVar7 = 0;
    }
    else {
      uVar9 = iVar1 - 1U;
      if (this->LODForCollision < (int)(iVar1 - 1U)) {
        uVar9 = this->LODForCollision;
      }
      uVar7 = 0;
      if (0 < (int)uVar9) {
        uVar7 = uVar9;
      }
    }
    uVar9 = 0;
    if ((int)uVar7 < iVar1) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar3 = *(longlong *)
             ((pFVar2->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    if ((*(int *)(lVar3 + 0x1cc) != 0) && (uVar9 = 0, 0 < *(int *)(lVar3 + 0x38))) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < *(int *)(lVar3 + 0x38)) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar8 = lVar3 + 0x10;
        if (*(longlong *)(lVar3 + 0x30) != 0) {
          lVar8 = *(longlong *)(lVar3 + 0x30);
        }
        if ((*(int *)(lVar10 + 8 + lVar8) != 0) &&
           ((param_1 || (*(char *)(lVar10 + 0x14 + lVar8) != '\0')))) {
          return true;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x1c;
      } while ((int)uVar9 < *(int *)(lVar3 + 0x38));
    }
  }
  return false;
}

// CreateBodySetup @ 14872e3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UStaticMesh::CreateBodySetup(UStaticMesh *this)

{
  UClass *pUVar1;
  UBodySetup *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  FGCScopeGuard local_a8 [16];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
    FGCScopeGuard::FGCScopeGuard(local_a8);
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UBodySetup_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = this;
    pUVar2 = (UBodySetup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    FGCScopeGuard::~FGCScopeGuard(local_a8);
    FBodyInstance::SetCollisionProfileName
              (&pUVar2->DefaultInstance,UCollisionProfile::BlockAll_ProfileName);
    pUVar2->bSupportUVsAndFaceRemap = this->bSupportPhysicalMaterialMasks;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->BodySetup).field0_0x0.DebugPtr = pUVar2;
  }
  return;
}

// CreateNavCollision @ 14872efa0

void __thiscall UStaticMesh::CreateNavCollision(UStaticMesh *this,bool param_1)

{
  UNavCollisionBase *pUVar1;
  bool bVar2;
  FGCScopeGuard local_res8 [8];
  
  if ((this->bHasNavigationData == '\0') ||
     ((this->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0)) {
    (this->NavCollision).field0_0x0.DebugPtr = (UNavCollisionBase *)0x0;
  }
  else {
    bVar2 = false;
    if ((this->NavCollision).field0_0x0.DebugPtr == (UNavCollisionBase *)0x0) {
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar1 = UNavCollisionBase::ConstructNew((UObject *)this);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UNavCollisionBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      (this->NavCollision).field0_0x0.DebugPtr = pUVar1;
      bVar2 = pUVar1 == (UNavCollisionBase *)0x0;
    }
    if (!bVar2) {
      (**(code **)(((this->BodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
      pUVar1 = (this->NavCollision).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014872f041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,(this->BodySetup).field0_0x0.DebugPtr);
      return;
    }
  }
  return;
}

// CreateStaticMeshDescription @ 14872f060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UStaticMeshDescription * __cdecl UStaticMesh::CreateStaticMeshDescription(UObject *param_1)

{
  UClass *pUVar1;
  UStaticMeshDescription *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (UObject *)0x0) {
    param_1 = (UObject *)GetTransientPackage();
  }
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UStaticMeshDescription_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = param_1;
  pUVar2 = (UStaticMeshDescription *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2);
  return pUVar2;
}

// DoesMipDataExist @ 148730540

bool __thiscall UStaticMesh::DoesMipDataExist(UStaticMesh *this,int param_1)

{
  FStaticMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pFVar1 = (this->RenderData).Ptr;
  if (((pFVar1 != (FStaticMeshRenderData *)0x0) && (-1 < param_1)) &&
     (param_1 < (pFVar1->LODResources).Array.ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = FBulkData::DoesExist
                      ((FBulkData *)
                       (*(longlong *)
                         ((pFVar1->LODResources).Array.AllocatorInstance.Data +
                         (longlong)param_1 * 8) + 0xa0));
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// EnforceLightmapRestrictions @ 148730c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStaticMesh::EnforceLightmapRestrictions(UStaticMesh *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FStaticMeshRenderData *pFVar7;
  uint uVar8;
  longlong lVar9;
  FString local_48;
  FAssetLog local_38;
  
  iVar6 = 4;
  iVar4 = 4;
  if (4 < this->LightMapResolution) {
    iVar4 = this->LightMapResolution;
  }
  this->LightMapResolution = iVar4;
  if ((!param_1) && (2 < (byte)LogStaticMesh._0_1_)) {
    ::FString::PrintfImpl
              (&local_48,
               L"Trying to enforce lightmap restrictions using the static mesh SourceModels outside of the Editor."
              );
    local_38.Path = (wchar_t *)0x0;
    local_38.PackagePath = (FPackagePath *)0x0;
    local_38.Object = (UObject *)this;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogStaticMesh.field_0x4,Warning,&local_38,&local_48,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x25a5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = (this->RenderData).Ptr;
  if (pFVar7 == (FStaticMeshRenderData *)0x0) {
    iVar6 = 1;
  }
  else {
    uVar8 = 0;
    if (0 < (pFVar7->LODResources).Array.ArrayNum) {
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (pFVar7->LODResources).Array.ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar1 = *(longlong *)((pFVar7->LODResources).Array.AllocatorInstance.Data + lVar9);
        if (0 < *(int *)(lVar1 + 0x17c)) {
          iVar4 = *(int *)(lVar1 + 0x178);
          if (iVar4 < iVar6) {
            iVar6 = iVar4;
          }
        }
        pFVar7 = (this->RenderData).Ptr;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < (pFVar7->LODResources).Array.ArrayNum);
      if (iVar6 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumUVs > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                           ,0x25e9,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  iVar4 = iVar6 + -1;
  if (this->LightMapCoordinateIndex < iVar6 + -1) {
    iVar4 = this->LightMapCoordinateIndex;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  this->LightMapCoordinateIndex = iVar6;
  return;
}

// ExecutePostLoadInternal @ 148731700

void __thiscall
UStaticMesh::ExecutePostLoadInternal(UStaticMesh *this,FStaticMeshPostLoadContext *param_1)

{
  EnforceLightmapRestrictions(this,true);
  return;
}

// ExportStaticMaterialsInfo @ 148732220

FString * __thiscall
UStaticMesh::ExportStaticMaterialsInfo(UStaticMesh *this,FString *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName *pFVar1;
  int iVar2;
  FString *pFVar3;
  FName *this_00;
  int iVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  lpCriticalSection = &this->MaterialsInfoCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    iVar2 = (this->StaticMaterialsInfoCache).ArrayNum;
    this_00 = (FName *)(this->StaticMaterialsInfoCache).AllocatorInstance.Data;
    pFVar1 = this_00 + (longlong)iVar2 * 3;
    while( true ) {
      if ((this->StaticMaterialsInfoCache).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FStaticMaterialMinimalInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar1) break;
      pFVar3 = ::FName::ToString(this_00,&local_38);
      iVar5 = (pFVar3->Data).ArrayNum;
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(__return_storage_ptr__,L",",1);
      ::FString::PrintfImpl(&local_48,L"\'%s\'");
      iVar5 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(__return_storage_ptr__,L">",1);
      this_00 = this_00 + 3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ExportStaticMeshLOD @ 148732390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UStaticMesh::ExportStaticMeshLOD
          (UStaticMesh *this,FStaticMeshLODResources *param_1,FMeshDescription *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  undefined8 uVar4;
  FName FVar5;
  uchar *puVar6;
  FStaticMeshSectionArray *pFVar7;
  FMeshAttributeArraySetBase *pFVar8;
  TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  FLinearColor FVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  FPolygonGroupID FVar20;
  FStaticMeshLODResources *pFVar21;
  uchar *puVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  FVertexInstanceID FVar26;
  FPolygonID FVar27;
  FMeshElementContainer *pFVar28;
  FAttributesSetEntry *pFVar29;
  FMeshElementContainer *pFVar30;
  FName *pFVar31;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar32;
  TVector<float> *pTVar33;
  FPolygonGroupID *pFVar34;
  FStaticMeshSectionArray *pFVar35;
  ulonglong uVar36;
  FMeshAttributeArraySetBase *pFVar37;
  UStaticMesh *pUVar38;
  ForAnyElementType FVar39;
  uchar *puVar40;
  FStaticMeshLODResources *pFVar41;
  UStaticMesh *pUVar42;
  uint uVar43;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar44;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  FVertexID FVar45;
  uint uVar46;
  uint uVar47;
  longlong lVar48;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar49;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar50;
  undefined1 in_XMM1 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined4 uVar62;
  undefined1 auStackY_2e8 [32];
  FMeshAttributeArraySetBase *local_2b8;
  uint local_2b0;
  uint local_2ac;
  int local_2a8;
  uint local_298 [2];
  FPolygonGroupID local_290;
  FPolygonGroupID local_288;
  int local_284;
  FStaticMeshLODResources *local_280;
  uchar *local_278;
  UStaticMesh *local_270;
  longlong local_268;
  uint local_260;
  ForAnyElementType local_258;
  int local_250 [2];
  undefined **local_248;
  FMeshDescription *local_240;
  longlong local_238;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *local_230;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_228;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_220;
  TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_218;
  int local_210;
  undefined8 local_20c;
  TMeshAttributesRef<FPolygonGroupID,FName> local_200;
  FString local_1f8;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1dc;
  float local_1d4;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c4;
  float local_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  TPairInitializer<int_&,FPolygonGroupID_&> local_1a8;
  FString local_198;
  uint *local_188;
  FPolygonGroupID *local_180;
  FVertexInstanceID *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FName local_168 [2];
  TArrayView<FVertexInstanceID_const_,int> local_158;
  TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
  local_148;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  iVar24 = (param_1->IndexBuffer).CachedNumIndices;
  if (iVar24 < 0) {
    iVar24 = (int)(param_1->IndexBuffer).IndexStorage._padding_;
    if ((param_1->IndexBuffer).b32Bit == false) {
      iVar24 = iVar24 / 2;
    }
    else {
      iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 3U)) >> 2;
    }
  }
  uVar43 = (param_1->VertexBuffers).PositionVertexBuffer.NumVertices;
  local_284 = (int)(((longlong)iVar24 / 3 + ((longlong)iVar24 >> 0x3f) & 0xffffffffU) >> 0x1f) +
              iVar24 / 3 + (iVar24 >> 0x1f);
  local_280 = param_1;
  local_270 = this;
  FMeshDescription::Empty(param_2);
  if ((0 < (int)uVar43) && ((param_1->VertexBuffers).StaticMeshVertexBuffer.NumVertices != 0)) {
    local_248 = &___7FStaticMeshAttributes__6B_;
    local_240 = param_2;
    FStaticMeshAttributes::Register((FStaticMeshAttributes *)&local_248,false);
    pFVar28 = FMeshElementChannels::Get(local_240->VertexElements,0);
    pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar28->Attributes,MeshAttribute::Vertex::Position);
    if ((pFVar29 == (FAttributesSetEntry *)0x0) ||
       ((pTVar44 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar29->Ptr).Ptr,
        *(uint *)&pTVar44->_padding_ != 1 || (*(uint *)((longlong)&pTVar44->_padding_ + 4) != 1))))
    {
      pTVar44 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pFVar28 = FMeshElementChannels::Get(local_240->EdgeElements,0);
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            *)&pFVar28->Attributes,MeshAttribute::Edge::IsHard);
    pFVar28 = FMeshElementChannels::Get(local_240->PolygonGroupElements,0);
    pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar28->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
    if (((pFVar29 == (FAttributesSetEntry *)0x0) ||
        (local_200.ArrayPtr = (pFVar29->Ptr).Ptr, (local_200.ArrayPtr)->Type != 6)) ||
       ((local_200.ArrayPtr)->Extent != 1)) {
      local_200.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar28 = FMeshElementChannels::Get(local_240->VertexInstanceElements,0);
    pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar28->Attributes,MeshAttribute::VertexInstance::Normal);
    if (((pFVar29 == (FAttributesSetEntry *)0x0) ||
        (local_228 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar29->Ptr).Ptr,
        *(uint *)&local_228->_padding_ != 1)) ||
       (*(uint *)((longlong)&local_228->_padding_ + 4) != 1)) {
      local_228 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pFVar28 = FMeshElementChannels::Get(local_240->VertexInstanceElements,0);
    pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar28->Attributes,MeshAttribute::VertexInstance::Tangent);
    if (((pFVar29 == (FAttributesSetEntry *)0x0) ||
        (local_220 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar29->Ptr).Ptr,
        *(uint *)&local_220->_padding_ != 1)) ||
       (*(uint *)((longlong)&local_220->_padding_ + 4) != 1)) {
      local_220 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pFVar28 = FMeshElementChannels::Get(local_240->VertexInstanceElements,0);
    pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar28->Attributes,MeshAttribute::VertexInstance::BinormalSign);
    if (((pFVar29 == (FAttributesSetEntry *)0x0) ||
        (local_2b8 = (pFVar29->Ptr).Ptr, local_2b8->Type != 3)) || (local_2b8->Extent != 1)) {
      local_2b8 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar28 = FMeshElementChannels::Get(local_240->VertexInstanceElements,0);
    pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar28->Attributes,MeshAttribute::VertexInstance::Color);
    if (((pFVar29 == (FAttributesSetEntry *)0x0) ||
        (pFVar37 = (pFVar29->Ptr).Ptr, pFVar37->Type != 0)) || (pFVar37->Extent != 1)) {
      pFVar37 = (FMeshAttributeArraySetBase *)0x0;
    }
    pFVar28 = FMeshElementChannels::Get(local_240->VertexInstanceElements,0);
    pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar28->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
    if (((pFVar29 == (FAttributesSetEntry *)0x0) ||
        (local_230 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar29->Ptr).Ptr,
        *(uint *)&local_230->_padding_ != 2)) ||
       (*(uint *)((longlong)&local_230->_padding_ + 4) != 1)) {
      local_230 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
    }
    pTVar50 = local_230;
    pFVar28 = FMeshElementChannels::Get(param_2->VertexElements,0);
    pFVar30 = FMeshElementChannels::Get(param_2->VertexElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar28->BitArray,((pFVar30->BitArray).NumBits - pFVar30->NumHoles) + uVar43);
    pFVar28 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
    pFVar30 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar28->BitArray,((pFVar30->BitArray).NumBits - pFVar30->NumHoles) + iVar24);
    pFVar28 = FMeshElementChannels::Get(param_2->PolygonElements,0);
    pFVar30 = FMeshElementChannels::Get(param_2->PolygonElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar28->BitArray,((pFVar30->BitArray).NumBits - pFVar30->NumHoles) + local_284);
    pFVar28 = FMeshElementChannels::Get(param_2->EdgeElements,0);
    pFVar30 = FMeshElementChannels::Get(param_2->EdgeElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar28->BitArray,((pFVar30->BitArray).NumBits - pFVar30->NumHoles) + iVar24);
    local_260 = (local_280->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
    TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(pTVar50,local_260);
    pUVar42 = local_270;
    pFVar41 = local_280;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_298[0] = 0;
    if (0 < *(int *)&(local_280->Sections).field_0x28) {
      pFVar7 = &local_280->Sections;
      do {
        uVar46 = local_298[0];
        uVar47 = 0;
        if ((int)local_298[0] < *(int *)&(pFVar41->Sections).field_0x28) {
          uVar47 = ~local_298[0] >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pUVar38 = *(UStaticMesh **)&(pFVar41->Sections).field_0x20;
        local_270 = (UStaticMesh *)pFVar7;
        if (pUVar38 != (UStaticMesh *)0x0) {
          local_270 = pUVar38;
        }
        local_268 = (longlong)(int)uVar46 * 0x1c;
        if (*(uint *)((longlong)&local_270->_padding_ + (longlong)(int)uVar46 * 7 * 4) != 0) {
          pFVar28 = FMeshElementChannels::Get(param_2->PolygonGroupElements,0);
          local_288 = (FPolygonGroupID)FMeshElementContainer::Add(pFVar28);
          local_188 = local_298;
          local_180 = &local_288;
          TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&,FPolygonGroupID_&>_>
                    (&local_148,&local_1a8,(bool *)&local_188);
          uVar46 = *(uint *)((longlong)&local_270->_padding_ + local_268);
          if (((int)uVar46 < 0) || ((pUVar42->StaticMaterials).ArrayNum <= (int)uVar46)) {
            local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f8.Data.ArrayNum = 0;
            local_1f8.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_1f8,local_298[0]);
            ::FString::ConcatCF(&local_198,L"MeshMergeMaterial_",&local_1f8);
            FVar39.Data = (FScriptContainerElement *)L"";
            if (local_198.Data.ArrayNum != 0) {
              FVar39.Data = local_198.Data.AllocatorInstance.Data;
            }
            pFVar31 = ::FName::FName(local_168,(wchar_t *)FVar39.Data);
            FVar5 = *pFVar31;
            pFVar31 = TMeshAttributesRef<FPolygonGroupID,FName>::operator[]<FPolygonGroupID,0>
                                (&local_200,local_288);
            *pFVar31 = FVar5;
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
          }
          else {
            uVar47 = 0;
            if ((int)uVar46 < (pUVar42->StaticMaterials).ArrayNum) {
              uVar47 = ~uVar46 >> 0x1f;
            }
            if ((uVar47 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar5 = *(FName *)((pUVar42->StaticMaterials).AllocatorInstance.Data +
                              (longlong)(int)uVar46 * 0x38 + 0x10);
            pFVar31 = TMeshAttributesRef<FPolygonGroupID,FName>::operator[]<FPolygonGroupID,0>
                                (&local_200,local_288);
            *pFVar31 = FVar5;
          }
        }
        local_298[0] = local_298[0] + 1;
      } while ((int)local_298[0] < *(int *)&(pFVar41->Sections).field_0x28);
    }
    pFVar41 = local_280;
    iVar24 = 0;
    do {
      pFVar28 = FMeshElementChannels::Get(param_2->VertexElements,0);
      iVar25 = FMeshElementContainer::Add(pFVar28);
      uVar36 = (ulonglong)(iVar24 * (pFVar41->VertexBuffers).PositionVertexBuffer.Stride);
      puVar6 = (pFVar41->VertexBuffers).PositionVertexBuffer.Data;
      uVar4 = *(undefined8 *)(puVar6 + uVar36);
      local_290 = *(FPolygonGroupID *)(puVar6 + uVar36 + 8);
      pTVar32 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar44,0);
      pTVar33 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar32,iVar25);
      iVar24 = iVar24 + 1;
      *(undefined8 *)&pTVar33->field0_0x0 = uVar4;
      (pTVar33->field0_0x0)._s_0.Z = (float)local_290;
      fVar19 = _UNK_15104007c;
      fVar18 = _UNK_151040078;
      fVar17 = _UNK_151040074;
      fVar16 = ___xmm_3c0102043c0102043c0102043c010204;
    } while (iVar24 < (int)uVar43);
    local_2b0 = 0;
    if (0 < local_284) {
      local_1a8.Value = (FPolygonGroupID *)(local_2b8 + 1);
      local_270 = (UStaticMesh *)(pFVar37 + 1);
      pFVar41 = local_280;
      pTVar44 = local_220;
      this_00 = local_228;
      pTVar50 = local_230;
      do {
        fVar61 = _UNK_150d565ec;
        fVar60 = _UNK_150d565e8;
        fVar59 = _UNK_150d565e4;
        fVar56 = ___xmm_38000100380001003800010038000100;
        uVar43 = 0;
        local_290 = (FPolygonGroupID)0xffffffff;
        if (0 < *(int *)&(pFVar41->Sections).field_0x28) {
          lVar48 = 0;
          do {
            uVar46 = 0;
            if ((int)uVar43 < *(int *)&(pFVar41->Sections).field_0x28) {
              uVar46 = ~uVar43 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar7 = *(FStaticMeshSectionArray **)&(pFVar41->Sections).field_0x20;
            pFVar35 = &pFVar41->Sections;
            if (pFVar7 != (FStaticMeshSectionArray *)0x0) {
              pFVar35 = pFVar7;
            }
            uVar46 = *(uint *)(&pFVar35->field_0x4 + lVar48) / 3;
            if ((uVar46 <= local_2b0) &&
               (local_2b0 < *(int *)(&pFVar35->field_0x8 + lVar48) + uVar46)) {
              pFVar34 = TMapBase<int,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>_>
                        ::FindChecked((TMapBase<int,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>_>
                                       *)&local_148,uVar43);
              local_290 = *pFVar34;
              if (local_290 != (FPolygonGroupID)0xffffffff) goto LAB_148732b63;
              break;
            }
            uVar43 = uVar43 + 1;
            lVar48 = lVar48 + 0x1c;
          } while ((int)uVar43 < *(int *)&(pFVar41->Sections).field_0x28);
        }
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentPolygonGroupID != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                            ,0x220b,L"");
        if (bVar23) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_148732b63:
        local_f8 = 0xffffffffffffffff;
        local_f0 = 0xffffffff;
        local_258.Data = (FScriptContainerElement *)0x0;
        local_250[0] = 0;
        local_250[1] = 0;
        iVar24 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,3,&local_258,local_250,local_250 + 1);
        DefaultConstructItems<FVertexInstanceID,int>(local_258.Data + (longlong)iVar24 * 4,3);
        local_2a8 = 0;
        local_268 = 0;
        local_210 = local_2b0 * 3;
        pUVar42 = local_270;
        pTVar49 = pTVar50;
        do {
          uVar43 = local_210 + local_2a8;
          if (((uint)(pFVar41->IndexBuffer).IndexStorage._padding_ <= uVar43) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("At >= 0 && At < (uint32)IndexStorage.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RawIndexBuffer.h"
                                  ,0xc6,L""), bVar23)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          plVar1 = &(pFVar41->IndexBuffer).IndexStorage._padding_;
          uVar36 = *plVar1;
          if ((pFVar41->IndexBuffer).b32Bit == false) {
            if ((uVar36 & 1) != 0) {
              uVar36 = ((longlong)uVar36 >> 0x18) + (longlong)plVar1;
            }
            FVar45._2_2_ = 0;
            FVar45._0_2_ = *(ushort *)(uVar36 + (ulonglong)uVar43 * 2);
          }
          else {
            if ((uVar36 & 1) != 0) {
              uVar36 = ((longlong)uVar36 >> 0x18) + (longlong)plVar1;
            }
            FVar45 = *(FVertexID *)(uVar36 + (ulonglong)uVar43 * 4);
          }
          pFVar28 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
          FVar26 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar28);
          FMeshDescription::CreateVertexInstance_Internal(param_2,FVar26,FVar45);
          *(FVertexID *)((longlong)&local_f8 + local_268 * 4) = FVar45;
          if ((local_250[0] <= local_2a8) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_278 = (uchar *)(ulonglong)(uint)FVar45;
          *(FVertexInstanceID *)(local_258.Data + local_268 * 4) = FVar26;
          puVar6 = (pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
          pcVar10 = *(code **)((longlong)
                               *(pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsData + 0x50)
          ;
          if ((pFVar41->VertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis == false
             ) {
            puVar40 = puVar6 + (longlong)local_278 * 8;
            lVar48 = (*pcVar10)();
            if ((puVar6 + lVar48 < puVar40 + 8) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0xec,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((puVar40 < (pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0xed,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            auVar51 = pmovsxbd(in_XMM1,*(undefined4 *)puVar40);
            fVar53 = (float)auVar51._0_4_ * fVar16;
            fVar57 = (float)auVar51._4_4_ * fVar17;
            local_1dc = CONCAT44(fVar57,fVar53);
            local_1d4 = (float)auVar51._8_4_ * fVar18;
            fVar54 = local_1d4;
          }
          else {
            puVar40 = puVar6 + (longlong)local_278 * 0x10;
            lVar48 = (*pcVar10)();
            if ((puVar6 + lVar48 < puVar40 + 0x10) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0xec,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((puVar40 < (pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0xed,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            auVar51 = pmovsxwd(in_XMM1,*(undefined8 *)puVar40);
            fVar53 = (float)auVar51._0_4_ * fVar56;
            fVar57 = (float)auVar51._4_4_ * fVar59;
            local_1e8 = CONCAT44(fVar57,fVar53);
            local_1e0 = (float)auVar51._8_4_ * fVar60;
            fVar54 = local_1e0;
          }
          puVar6 = (pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
          auVar51._0_8_ = (double)fVar57;
          auVar51._8_8_ = 0;
          pcVar10 = *(code **)((longlong)
                               *(pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsData + 0x50)
          ;
          if ((pFVar41->VertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis == false
             ) {
            puVar40 = puVar6 + (longlong)local_278 * 8;
            lVar48 = (*pcVar10)();
            if ((puVar6 + lVar48 < puVar40 + 8) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x11c,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((puVar40 < (pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x11d,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            auVar51 = pmovsxbd(auVar51,*(undefined4 *)puVar40);
            auVar52 = pmovsxbd(auVar51,*(undefined4 *)(puVar40 + 4));
            fVar55 = (float)auVar51._0_4_ * fVar16;
            fVar58 = (float)auVar51._4_4_ * fVar17;
            local_1c4 = CONCAT44(fVar58,fVar55);
            local_1bc = (float)auVar51._8_4_ * fVar18;
            fVar56 = (float)auVar52._0_4_ * fVar16;
            fVar59 = (float)auVar52._4_4_ * fVar17;
            fVar60 = (float)auVar52._8_4_ * fVar18;
            fVar61 = (float)auVar52._12_4_ * fVar19;
            fVar14 = fVar60 * fVar58;
            fVar58 = fVar56 * fVar58;
            fVar56 = local_1bc * fVar56;
            fVar13 = local_1bc;
          }
          else {
            puVar40 = puVar6 + (longlong)local_278 * 0x10;
            lVar48 = (*pcVar10)();
            if ((puVar6 + lVar48 < puVar40 + 0x10) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x11c,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((puVar40 < (pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x11d,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            auVar51 = pmovsxwd(auVar51,*(undefined8 *)puVar40);
            auVar52 = pmovsxwd(auVar51,*(undefined8 *)(puVar40 + 8));
            fVar55 = (float)auVar51._0_4_ * fVar56;
            fVar58 = (float)auVar51._4_4_ * fVar59;
            local_1d0 = CONCAT44(fVar58,fVar55);
            local_1c8 = (float)auVar51._8_4_ * fVar60;
            fVar56 = (float)auVar52._0_4_ * fVar56;
            fVar59 = (float)auVar52._4_4_ * fVar59;
            fVar60 = (float)auVar52._8_4_ * fVar60;
            fVar61 = (float)auVar52._12_4_ * fVar61;
            fVar14 = fVar60 * fVar58;
            fVar58 = fVar56 * fVar58;
            fVar56 = local_1c8 * fVar56;
            fVar13 = local_1c8;
          }
          puVar6 = (pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
          pcVar10 = *(code **)((longlong)
                               *(pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsData + 0x50)
          ;
          fVar58 = (fVar58 - fVar59 * fVar55) * fVar61;
          auVar51 = ZEXT416((uint)fVar58);
          dVar12 = (double)((fVar60 * fVar55 - fVar56) * fVar61);
          dVar11 = (double)fVar58;
          if ((pFVar41->VertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis == false
             ) {
            puVar40 = puVar6 + (longlong)local_278 * 8;
            lVar48 = (*pcVar10)();
            if ((puVar6 + lVar48 < puVar40 + 8) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x104,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((puVar40 < (pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x105,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            auVar51 = pmovsxbd(auVar51,*(undefined4 *)(puVar40 + 4));
            fVar56 = (float)auVar51._0_4_ * fVar16;
            fVar60 = (float)auVar51._4_4_ * fVar17;
            fVar58 = (float)auVar51._8_4_ * fVar18;
          }
          else {
            puVar40 = puVar6 + (longlong)local_278 * 0x10;
            lVar48 = (*pcVar10)();
            if ((puVar6 + lVar48 < puVar40 + 0x10) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x104,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((puVar40 < (pFVar41->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x105,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            auVar51 = pmovsxwd(auVar51,*(undefined8 *)(puVar40 + 8));
            fVar56 = (float)auVar51._0_4_ * ___xmm_38000100380001003800010038000100;
            fVar60 = (float)auVar51._4_4_ * _UNK_150d565e4;
            fVar58 = (float)auVar51._8_4_ * _UNK_150d565e8;
          }
          pTVar32 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar44,0)
          ;
          pTVar33 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar32,(int)FVar26);
          pFVar37 = (FMeshAttributeArraySetBase *)local_1a8.Value;
          (pTVar33->field0_0x0)._s_0.X = fVar53;
          (pTVar33->field0_0x0)._s_0.Y = fVar57;
          (pTVar33->field0_0x0)._s_0.Z = fVar54;
          uVar62 = __real_3f800000;
          if (((dVar12 * (double)fVar58 - dVar11 * (double)fVar60) * (double)fVar53 -
              ((double)fVar57 * (double)fVar58 - (double)fVar54 * (double)fVar60) *
              (double)((fVar13 * fVar59 - fVar14) * fVar61)) +
              (dVar11 * (double)fVar57 - dVar12 * (double)fVar54) * (double)fVar56 <
              __real_0000000000000000) {
            uVar62 = __real_bf800000;
          }
          if (((int)((FMeshAttributeArraySetBase *)((longlong)local_1a8.Value + 0x18))->Type < 1) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = (FMeshAttributeArraySetBase *)
                   ((FMeshAttributeArraySetBase *)((FPolygonGroupID *)pFVar37 + 1))->_padding_;
          if (pFVar8 != (FMeshAttributeArraySetBase *)0x0) {
            pFVar37 = pFVar8;
          }
          uVar46 = (int)FVar26 * pFVar37->NumElements;
          uVar43 = 0;
          if ((int)uVar46 < (int)pFVar37->Type) {
            uVar43 = ~uVar46 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(undefined4 *)(pFVar37->_padding_ + (longlong)(int)uVar46 * 4) = uVar62;
          pTVar32 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0)
          ;
          pTVar33 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar32,(int)FVar26);
          in_XMM1 = ZEXT416((uint)fVar60);
          (pTVar33->field0_0x0)._s_0.X = fVar56;
          (pTVar33->field0_0x0)._s_0.Y = fVar60;
          (pTVar33->field0_0x0)._s_0.Z = fVar58;
          FVar15 = FLinearColor::White;
          if ((pFVar41->VertexBuffers).ColorVertexBuffer.NumVertices == 0) {
            if (((int)pUVar42->_padding_ < 1) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pUVar38 = pUVar42;
            if ((UStaticMesh *)pUVar42->_padding_ != (UStaticMesh *)0x0) {
              pUVar38 = (UStaticMesh *)pUVar42->_padding_;
            }
            uVar46 = (int)FVar26 * (int)pUVar38->_padding_;
            uVar43 = 0;
            if ((int)uVar46 < (int)*(uint *)&pUVar38->_padding_) {
              uVar43 = ~uVar46 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            ((FLinearColor_u_0 *)(pUVar38->_padding_ + (longlong)(int)uVar46 * 0x10))->_s_0 =
                 (FLinearColor_u_0_s_0)FVar15.field0_0x0;
          }
          else {
            puVar6 = (pFVar41->VertexBuffers).ColorVertexBuffer.Data;
            uVar43 = (int)FVar45 * (pFVar41->VertexBuffers).ColorVertexBuffer.Stride;
            local_1b8 = FLinearColor::sRGBToLinearTable[puVar6[(ulonglong)uVar43 + 2]];
            fStack_1b4 = FLinearColor::sRGBToLinearTable[puVar6[(ulonglong)uVar43 + 1]];
            fStack_1b0 = FLinearColor::sRGBToLinearTable[puVar6[uVar43]];
            fStack_1ac = (float)puVar6[(ulonglong)uVar43 + 3] * __real_3b808081;
            in_XMM1 = ZEXT416((uint)fStack_1ac);
            if (((int)pUVar42->_padding_ < 1) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pUVar38 = pUVar42;
            if ((UStaticMesh *)pUVar42->_padding_ != (UStaticMesh *)0x0) {
              pUVar38 = (UStaticMesh *)pUVar42->_padding_;
            }
            uVar46 = (int)FVar26 * (int)pUVar38->_padding_;
            uVar43 = 0;
            if ((int)uVar46 < (int)*(uint *)&pUVar38->_padding_) {
              uVar43 = ~uVar46 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            puVar2 = (undefined8 *)(pUVar38->_padding_ + (longlong)(int)uVar46 * 0x10);
            *puVar2 = CONCAT44(fStack_1b4,local_1b8);
            puVar2[1] = CONCAT44(fStack_1ac,fStack_1b0);
          }
          uVar43 = local_260;
          puVar6 = local_278;
          pFVar21 = local_280;
          uVar36 = 0;
          local_2ac = 0;
          pTVar50 = pTVar49;
          if (0 < (int)local_260) {
            local_238 = 0;
            local_2b8 = (FMeshAttributeArraySetBase *)0x0;
            do {
              puVar40 = (pFVar21->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
              lVar48 = (ulonglong)(pFVar21->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                       (longlong)puVar6;
              pcVar10 = *(code **)((longlong)
                                   *(pFVar21->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                                  0x50);
              if ((pFVar21->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
                puVar3 = (ushort *)(puVar40 + (uVar36 + lVar48) * 4);
                lVar48 = (*pcVar10)();
                if ((puVar40 + lVar48 < puVar3 + 2) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x17b,L""), bVar23)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if ((puVar3 < (pFVar21->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x17c,L""), bVar23)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                fVar59 = FGenericPlatformMath::LoadHalf(puVar3);
                local_20c = CONCAT44(local_20c._4_4_,fVar59);
                fVar59 = FGenericPlatformMath::LoadHalf(puVar3 + 1);
                uVar36 = (ulonglong)local_2ac;
                local_20c = CONCAT44(fVar59,(undefined4)local_20c);
              }
              else {
                local_218 = (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                             *)(puVar40 + lVar48 * 8);
                local_278 = (local_218->AllocatorInstance).InlineData + uVar36 * 8;
                lVar48 = (*pcVar10)();
                puVar22 = local_278;
                if ((puVar40 + lVar48 < local_278 + 8) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x17b,L""), bVar23)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if ((puVar22 < (pFVar21->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x17c,L""), bVar23)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                local_20c = *(undefined8 *)
                             ((local_218->AllocatorInstance).InlineData + (longlong)local_2b8);
              }
              uVar4 = local_20c;
              uVar46 = 0;
              if ((int)(uint)uVar36 < (pTVar49->ArrayForChannels).ArrayNum) {
                uVar46 = ~(uint)uVar36 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pTVar9 = *(TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                         **)&(pTVar49->ArrayForChannels).AllocatorInstance.SecondaryData.field_0x0;
              local_218 = &pTVar49->ArrayForChannels;
              if (pTVar9 != (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                             *)0x0) {
                local_218 = pTVar9;
              }
              uVar47 = (int)FVar26 *
                       *(int *)((local_218->AllocatorInstance).InlineData + local_238 + 0x10);
              uVar46 = 0;
              if ((int)uVar47 < *(int *)((local_218->AllocatorInstance).InlineData + local_238 + 8))
              {
                uVar46 = ~uVar47 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_2b8 = (FMeshAttributeArraySetBase *)((longlong)local_2b8 + 8);
              puVar40 = (local_218->AllocatorInstance).InlineData + local_238;
              local_2ac = local_2ac + 1;
              uVar36 = (ulonglong)local_2ac;
              local_238 = local_238 + 0x18;
              *(undefined8 *)(*(longlong *)puVar40 + (longlong)(int)uVar47 * 8) = uVar4;
              pFVar41 = local_280;
              pUVar42 = local_270;
              pTVar44 = local_220;
              this_00 = local_228;
              pTVar50 = local_230;
            } while ((int)local_2ac < (int)uVar43);
          }
          FVar20 = local_290;
          local_268 = local_268 + 1;
          local_2a8 = local_2a8 + 1;
          pTVar49 = pTVar50;
          fVar56 = ___xmm_38000100380001003800010038000100;
          fVar59 = _UNK_150d565e4;
          fVar60 = _UNK_150d565e8;
          fVar61 = _UNK_150d565ec;
        } while (local_2a8 < 3);
        iVar24 = local_250[0];
        local_178 = (FVertexInstanceID *)local_258.Data;
        if ((local_250[0] < 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar23)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iStack_170 = iVar24;
        pFVar28 = FMeshElementChannels::Get(param_2->PolygonElements,0);
        FVar27 = (FPolygonID)FMeshElementContainer::Add(pFVar28);
        local_158._12_4_ = uStack_16c;
        local_158.ArrayNum = iStack_170;
        local_158.DataPtr = local_178;
        FMeshDescription::CreatePolygon_Internal
                  (param_2,FVar27,FVar20,&local_158,
                   (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0);
        if (local_258.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data);
        }
        local_2b0 = local_2b0 + 1;
      } while ((int)local_2b0 < local_284);
    }
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  return;
}

// FindSocket @ 148734c90

UStaticMeshSocket * __thiscall UStaticMesh::FindSocket(UStaticMesh *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UStaticMeshSocket *pUVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1 != (FName)0x0) && (uVar5 = 0, 0 < (this->Sockets).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Sockets).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UStaticMeshSocket *)(*pcVar1)();
        return pUVar4;
      }
      pUVar4 = *(UStaticMeshSocket **)((this->Sockets).AllocatorInstance.Data + lVar6);
      if ((pUVar4 != (UStaticMeshSocket *)0x0) && (pUVar4->SocketName == param_1)) {
        return pUVar4;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Sockets).ArrayNum);
  }
  return (UStaticMeshSocket *)0x0;
}

// FinishPostLoadInternal @ 148734f20

void __thiscall
UStaticMesh::FinishPostLoadInternal(UStaticMesh *this,FStaticMeshPostLoadContext *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId8380,"UStaticMesh::FinishPostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x20bc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8380);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar1 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar1,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && ((this->_padding_ & 0x10) == 0)) {
    (**(code **)(this->_padding_ + 0x318))(this);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetAssetRegistryTags @ 148738de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UStaticMesh::GetAssetRegistryTags
          (UStaticMesh *this,TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UStaticMesh *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UStaticMesh **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UStaticMesh **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UStaticMesh **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 148738df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UStaticMesh::GetAssetRegistryTags(UStaticMesh *this,FAssetRegistryTagsContext param_1)

{
  int iVar1;
  int iVar2;
  FStaticMeshRenderData *pFVar3;
  UBodySetup *pUVar4;
  FResources *pFVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  char cVar8;
  TEnumAsByte<ECollisionTraceFlag> TVar9;
  undefined7 extraout_var;
  wchar_t *pwVar10;
  ulong64 uVar11;
  long64 lVar12;
  FName *pFVar13;
  FString *pFVar14;
  FAssetRegistryTagsContext FVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  FName *this_00;
  uint uVar20;
  uint uVar21;
  undefined1 auStackY_258 [32];
  FAssetRegistryTag local_218;
  FAssetRegistryTag local_1f8;
  undefined1 local_1d8 [8];
  FString local_1d0;
  undefined8 local_1c0;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  FName local_1a8;
  FString local_1a0;
  FString local_190;
  undefined1 local_180 [24];
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  double local_150;
  undefined1 local_148 [72];
  void *local_100;
  undefined4 local_f8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f0;
  void *local_b0;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  cVar8 = (**(code **)(this->_padding_ + 0x10))();
  if (cVar8 == '\0') {
    pFVar3 = (this->RenderData).Ptr;
    uVar20 = 0;
    uVar19 = 0;
    local_1b8 = 0;
    local_1b4 = 0;
    local_1b0 = 0;
    local_1ac = 0;
    if ((pFVar3 != (FStaticMeshRenderData *)0x0) &&
       (iVar1 = (pFVar3->LODResources).Array.ArrayNum, 0 < iVar1)) {
      lVar18 = *(longlong *)(pFVar3->LODResources).Array.AllocatorInstance.Data;
      iVar16 = *(int *)(lVar18 + 0x270);
      if (iVar16 < 0) {
        iVar16 = *(int *)(lVar18 + 0x260);
        if (*(char *)(lVar18 + 0x274) == '\0') {
          iVar16 = iVar16 / 2;
        }
        else {
          iVar16 = (int)((iVar16 >> 0x1f & 3U) + iVar16) >> 2;
        }
      }
      local_1b8 = iVar16 / 3 + (iVar16 >> 0x1f) +
                  (int)(((longlong)iVar16 / 3 + ((longlong)iVar16 >> 0x3f) & 0xffffffffU) >> 0x1f);
      local_1b4 = *(int *)(lVar18 + 0x17c);
      local_1b0 = *(int *)(lVar18 + 0x178);
      local_1ac = iVar1;
    }
    pUVar4 = (this->BodySetup).field0_0x0.DebugPtr;
    uVar21 = uVar19;
    if (pUVar4 != (UBodySetup *)0x0) {
      uVar21 = (pUVar4->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
               (pUVar4->AggGeom).MLLevelSetElems.ArrayNum +
               (pUVar4->AggGeom).SkinnedLevelSetElems.ArrayNum +
               (pUVar4->AggGeom).LevelSetElems.ArrayNum +
               (pUVar4->AggGeom).TaperedCapsuleElems.ArrayNum +
               (pUVar4->AggGeom).ConvexElems.ArrayNum + (pUVar4->AggGeom).SphylElems.ArrayNum +
               (pUVar4->AggGeom).BoxElems.ArrayNum + (pUVar4->AggGeom).SphereElems.ArrayNum;
    }
    local_168 = 0.0;
    dStack_160 = 0.0;
    if (pFVar3 != (FStaticMeshRenderData *)0x0) {
      local_180._0_8_ = (pFVar3->Bounds).Origin.field0_0x0._s_0.X;
      local_180._8_8_ = (pFVar3->Bounds).Origin.field0_0x0._s_0.Y;
      dStack_160 = (pFVar3->Bounds).BoxExtent.field0_0x0._s_0.Y;
      local_158 = *(undefined4 *)((longlong)&(pFVar3->Bounds).BoxExtent.field0_0x0 + 0x10);
      uStack_154 = *(undefined4 *)((longlong)&(pFVar3->Bounds).BoxExtent.field0_0x0 + 0x14);
      local_180._16_8_ = (pFVar3->Bounds).Origin.field0_0x0._s_0.Z;
      local_168 = (pFVar3->Bounds).BoxExtent.field0_0x0._s_0.X;
      local_150 = (pFVar3->Bounds).SphereRadius;
    }
    ::FString::PrintfImpl(&local_190,L"%lldx%lldx%lld");
    pUVar4 = (this->BodySetup).field0_0x0.DebugPtr;
    local_1a8.ComparisonIndex.Value = 0;
    local_1a8.Number = 0;
    if (pUVar4 != (UBodySetup *)0x0) {
      local_1a8 = FBodyInstance::GetCollisionProfileName(&pUVar4->DefaultInstance);
      local_1a8 = *(FName *)local_1a8;
    }
    pUVar4 = (this->BodySetup).field0_0x0.DebugPtr;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    if (pUVar4 != (UBodySetup *)0x0) {
      TVar9 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)pUVar4);
      pwVar10 = ::LexToString((uint)*(byte *)CONCAT71(extraout_var,TVar9.Value));
      ::FString::operator=(&local_1a0,pwVar10);
    }
    pFVar3 = (this->RenderData).Ptr;
    if (pFVar3 == (FStaticMeshRenderData *)0x0) {
      local_1c0 = (ulonglong)local_1c0._4_4_ << 0x20;
      uVar20 = uVar19;
    }
    else {
      pFVar5 = (pFVar3->NaniteResourcesPtr).Ptr;
      uVar19 = uVar20;
      if ((0 < (pFVar5->PageStreamingStates).ArrayNum) && (0 < (pFVar5->RootData).ArrayNum)) {
        uVar19 = pFVar5->NumInputTriangles;
      }
      pFVar5 = (pFVar3->NaniteResourcesPtr).Ptr;
      if ((0 < (pFVar5->PageStreamingStates).ArrayNum) &&
         (uVar20 = 0, 0 < (pFVar5->RootData).ArrayNum)) {
        uVar20 = pFVar5->NumInputVertices;
      }
      local_1c0 = (ulonglong)local_1c0._4_4_ << 0x20;
      if ((0 < (pFVar3->LODResources).Array.ArrayNum) &&
         (lVar18 = *(longlong *)(pFVar3->LODResources).Array.AllocatorInstance.Data,
         *(longlong *)(lVar18 + 0x40) != 0)) {
        lVar18 = *(longlong *)(lVar18 + 0x40);
        local_1c0 = lVar18;
        FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_148);
        FResourceSizeEx::AddDedicatedSystemMemoryBytes((FResourceSizeEx *)local_148,0x118);
        lVar6 = local_1c0;
        for (lVar17 = lVar18 + 0x28; local_1c0 = lVar6, lVar17 != lVar18 + 0xd0;
            lVar17 = lVar17 + 0x38) {
          FResourceSizeEx::AddDedicatedSystemMemoryBytes((FResourceSizeEx *)local_148,0x38);
          lVar6 = local_1c0;
        }
        FResourceSizeEx::AddDedicatedSystemMemoryBytes
                  ((FResourceSizeEx *)local_148,(longlong)*(int *)(lVar6 + 0xdc));
        uVar11 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_148);
        local_58 = 0;
        if (local_60 != (void *)0x0) {
          FMemory::Free(local_60);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_a0);
        local_a8 = 0;
        if (local_b0 != (void *)0x0) {
          FMemory::Free(local_b0);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_f0);
        local_f8 = 0;
        if (local_100 != (void *)0x0) {
          FMemory::Free(local_100);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_148 + 8));
        lVar12 = FBulkData::GetBulkDataSize((FBulkData *)(lVar6 + 0xe0));
        local_1c0 = (ulonglong)(uint)((int)lVar12 + (int)uVar11);
      }
    }
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,uVar19);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"NaniteTriangles");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,uVar20);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"NaniteVertices");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,local_1b8);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"Triangles");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,local_1b4);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"Vertices");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,local_1b0);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"UVChannels");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,(this->StaticMaterials).ArrayNum);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"Materials");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    if (&this->MaterialsInfoCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->MaterialsInfoCriticalSection);
    iVar1 = (this->StaticMaterialsInfoCache).ArrayNum;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    this_00 = (FName *)(this->StaticMaterialsInfoCache).AllocatorInstance.Data;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = this_00 + (longlong)iVar1 * 3;
    while( true ) {
      if ((this->StaticMaterialsInfoCache).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FStaticMaterialMinimalInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1d8);
      }
      if (this_00 == pFVar13) break;
      pFVar14 = ::FName::ToString(this_00,(FString *)&local_1f8);
      iVar2 = (pFVar14->Data).ArrayNum;
      iVar16 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar16 = 0;
      }
      ::FString::AppendChars
                ((FString *)&local_218,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar16);
      if (local_1f8.Name != (FName)0x0) {
        FMemory::Free((void *)local_1f8.Name);
      }
      ::FString::AppendChars((FString *)&local_218,L",",1);
      ::FString::PrintfImpl(&local_1d0,L"\'%s\'");
      iVar16 = local_1d0.Data.ArrayNum + -1;
      if (local_1d0.Data.ArrayNum == 0) {
        iVar16 = 0;
      }
      ::FString::AppendChars
                ((FString *)&local_218,(wchar_t *)local_1d0.Data.AllocatorInstance.Data,iVar16);
      if ((FName)local_1d0.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars((FString *)&local_218,L">",1);
      this_00 = this_00 + 3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->MaterialsInfoCriticalSection);
    pFVar13 = ::FName::FName((FName *)&local_1d0,0xf,L"StaticMaterials",FNAME_Add);
    local_180._0_8_ = *pFVar13;
    ::FString::FString((FString *)(local_180 + 8),(FString *)&local_218);
    local_168 = 9.88131291682493e-324;
    FAssetRegistryTagsContext::AddTag
              ((FAssetRegistryTagsContext *)param_1.Data,(FAssetRegistryTag *)local_180);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    pFVar13 = ::FName::FName((FName *)&local_1d0,"ApproxSize");
    FVar7.Data = local_190.Data.AllocatorInstance.Data;
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Value.Data.ArrayNum = local_190.Data.ArrayNum;
    if (local_190.Data.ArrayNum == 0) {
      local_1f8.Value.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_190.Data.ArrayNum,0,(ForAnyElementType *)&local_1f8.Value,
                 local_190.Data.ArrayNum,&local_1f8.Value.Data.ArrayMax);
      memcpy(local_1f8.Value.Data.AllocatorInstance.Data,FVar7.Data,
             (longlong)local_190.Data.ArrayNum * 2);
    }
    local_1f8.Type = TT_Dimensional;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,uVar21);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"CollisionPrims");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,local_1ac);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"LODs");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    pFVar14 = FPerPlatformInt::ToString(&this->MinLOD,(FString *)&local_1f8);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"MinLOD");
    local_218.Name = *pFVar13;
    local_218.Value.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Value.Data.ArrayNum = (pFVar14->Data).ArrayNum;
    local_218.Value.Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
    local_218.Type = TT_Alphabetical;
    local_218.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_218);
    if (local_1f8.Name != (FName)0x0) {
      FMemory::Free((void *)local_1f8.Name);
    }
    pFVar14 = FPerQualityLevelInt::ToString(&this->MinQualityLevelLOD,(FString *)&local_1f8);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"QualityLevelMinLOD");
    local_218.Name = *pFVar13;
    local_218.Value.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Value.Data.ArrayNum = (pFVar14->Data).ArrayNum;
    local_218.Value.Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
    local_218.Type = TT_Alphabetical;
    local_218.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_218);
    if (local_1f8.Name != (FName)0x0) {
      FMemory::Free((void *)local_1f8.Name);
    }
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,0);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"SectionsWithCollision");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    pFVar14 = ::FName::ToString(&local_1a8,(FString *)&local_1f8);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"DefaultCollision");
    local_218.Name = *pFVar13;
    local_218.Value.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Value.Data.ArrayNum = (pFVar14->Data).ArrayNum;
    local_218.Value.Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
    local_218.Type = TT_Alphabetical;
    local_218.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_218);
    if (local_1f8.Name != (FName)0x0) {
      FMemory::Free((void *)local_1f8.Name);
    }
    pFVar13 = ::FName::FName((FName *)&local_1d0,"CollisionComplexity");
    FVar7.Data = local_1a0.Data.AllocatorInstance.Data;
    lVar18 = (longlong)local_1a0.Data.ArrayNum;
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Value.Data.ArrayNum = local_1a0.Data.ArrayNum;
    if (local_1a0.Data.ArrayNum == 0) {
      local_1f8.Value.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1a0.Data.ArrayNum,0,(ForAnyElementType *)&local_1f8.Value,
                 local_1a0.Data.ArrayNum,&local_1f8.Value.Data.ArrayMax);
      memcpy(local_1f8.Value.Data.AllocatorInstance.Data,FVar7.Data,lVar18 * 2);
    }
    local_1f8.Type = TT_Alphabetical;
    local_1f8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::AppendInt((FString *)&local_218,(int)local_1c0);
    pFVar13 = ::FName::FName((FName *)&local_1d0,"DistanceFieldSize");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 8;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    ::FString::PrintfImpl((FString *)&local_218,L"%llu");
    pFVar13 = ::FName::FName((FName *)&local_1d0,"EstTotalCompressedSize");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 8;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    ::FString::PrintfImpl((FString *)&local_218,L"%llu");
    pFVar13 = ::FName::FName((FName *)&local_1d0,"EstNaniteCompressedSize");
    local_1f8.Name = *pFVar13;
    local_1f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218.Name;
    local_1f8.Value.Data.ArrayNum = (int)local_218.Value.Data.AllocatorInstance.Data;
    local_1f8.Value.Data.ArrayMax = local_218.Value.Data.AllocatorInstance.Data._4_4_;
    local_218.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Name.ComparisonIndex.Value = 0;
    local_218.Name.Number = 0;
    local_1f8.Type = TT_Numerical;
    local_1f8.DisplayFlags = 8;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1f8);
    if (local_218.Name != (FName)0x0) {
      FMemory::Free((void *)local_218.Name);
    }
    FVar15.Data = (FAssetRegistryTagsContextData *)
                  FAssetRegistryTagsContext::FAssetRegistryTagsContext
                            ((FAssetRegistryTagsContext *)&local_1d0,param_1.Data);
    UObject::GetAssetRegistryTags((UObject *)this,FVar15);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetAssetUserDataArray @ 148739be0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UStaticMesh::GetAssetUserDataArray(UStaticMesh *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)
         (this->MaterialsInfoCriticalSection).CriticalSection.Opaque3;
}

// GetAssetUserDataOfClass @ 148739c00

UAssetUserData * __thiscall
UStaticMesh::GetAssetUserDataOfClass(UStaticMesh *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < *(int *)((this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 1)) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < *(int *)((this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 1)) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)
                (lVar9 + (longlong)(this->MaterialsInfoCriticalSection).CriticalSection.Opaque3[0]);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_148739cac;
LAB_148739cda:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_148739cda;
          UE::GC::MarkAsReachable(pUVar7);
LAB_148739cac:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_148739cda;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_148739cda;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < *(int *)((this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 1)
            );
  }
  return (UAssetUserData *)0x0;
}

// GetBoundingBox @ 148739ea0

TBox<double> * __thiscall
UStaticMesh::GetBoundingBox(UStaticMesh *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (this->ExtendedBounds).Origin.field0_0x0._s_0.X;
  dVar2 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.X;
  dVar3 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Y;
  dVar4 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Z;
  dVar6 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar2;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6 + dVar5;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetBounds @ 148739f40

TBoxSphereBounds<double,double> * __thiscall
UStaticMesh::GetBounds(UStaticMesh *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Y;
  dVar2 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Z;
  dVar3 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       (this->ExtendedBounds).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar4 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3;
  dVar1 = (this->ExtendedBounds).SphereRadius;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->SphereRadius = dVar1;
  return __return_storage_ptr__;
}

// GetDefaultMinLOD @ 14873ac90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall UStaticMesh::GetDefaultMinLOD(UStaticMesh *this)

{
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseStaticMeshMinLODPerQualityLevels != false)) {
    return (this->MinQualityLevelLOD).Default;
  }
  return (this->MinLOD).Default;
}

// GetDesc @ 14873acc0

FString * __thiscall UStaticMesh::GetDesc(UStaticMesh *this,FString *__return_storage_ptr__)

{
  FStaticMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  pFVar1 = (this->RenderData).Ptr;
  if ((((pFVar1 != (FStaticMeshRenderData *)0x0) && (0 < (pFVar1->LODResources).Array.ArrayNum)) &&
      (FStaticMeshLODResources::GetNumTriangles
                 (*(FStaticMeshLODResources **)(pFVar1->LODResources).Array.AllocatorInstance.Data),
      (((this->RenderData).Ptr)->LODResources).Array.ArrayNum < 1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d LODs, %d Tris, %d Verts");
  return __return_storage_ptr__;
}

// GetLODForExport @ 14873c210

FStaticMeshLODResources * __thiscall UStaticMesh::GetLODForExport(UStaticMesh *this,int param_1)

{
  int iVar1;
  FStaticMeshRenderData *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FStaticMeshLODResources *pFVar7;
  
  if ((this->RenderData).Ptr == (FStaticMeshRenderData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetRenderData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x27b4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FStaticMeshLODResources *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar2 = (this->RenderData).Ptr;
  iVar1 = (pFVar2->LODResources).Array.ArrayNum;
  uVar6 = iVar1 - 1;
  if (param_1 < (int)uVar6) {
    uVar6 = param_1;
  }
  uVar4 = 0;
  if (0 < (int)uVar6) {
    uVar4 = uVar6;
  }
  uVar6 = 0;
  if ((int)uVar4 < iVar1) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FStaticMeshLODResources *)(*pcVar3)();
      return pFVar7;
    }
  }
  return *(FStaticMeshLODResources **)
          ((pFVar2->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
}

// GetLODPathName @ 14873c2e0

FName __cdecl UStaticMesh::GetLODPathName(UStaticMesh *param_1,int param_2)

{
  FString *pFVar1;
  FName *pFVar2;
  int iVar3;
  undefined4 in_register_00000014;
  bool bVar4;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  if ((UObjectBaseUtility *)CONCAT44(in_register_00000014,param_2) != (UObjectBaseUtility *)0x0) {
    pFVar1 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)CONCAT44(in_register_00000014,param_2),&local_28,
                        (UObject *)0x0);
    if ((pFVar1->Data).ArrayNum == 0) {
      bVar4 = true;
    }
    else {
      bVar4 = true;
    }
  }
  ::FString::PrintfImpl(&local_38,L"%s [LOD%d]");
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                          FNAME_Add);
  param_1->_padding_ = (longlong)*pFVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GetMaterial @ 14873c5d0

UMaterialInterface * __thiscall UStaticMesh::GetMaterial(UStaticMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMaterialInterface *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->StaticMaterials).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->StaticMaterials).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMaterialInterface *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UMaterialInterface **)
            ((this->StaticMaterials).AllocatorInstance.Data + (longlong)param_1 * 0x38);
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialBox @ 14873c670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
UStaticMesh::GetMaterialBox
          (UStaticMesh *this,TBox<double> *__return_storage_ptr__,int param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  TMatrix<double> *pTVar3;
  undefined1 auStack_138 [32];
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8;
  TVector<double>_u_0 local_e0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  undefined8 local_b0;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  if (__return_storage_ptr__->IsValid == '\0') {
    local_100 = (this->ExtendedBounds).Origin.field0_0x0._s_0.X;
    dVar1 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.X;
    local_f8 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Y;
    local_118._s_0.X = local_100 - dVar1;
    dVar2 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Y;
    local_100 = local_100 + dVar1;
    local_f0 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Z;
    local_118._s_0.Y = local_f8 - dVar2;
    local_f8 = local_f8 + dVar2;
    local_e8 = 1;
    local_118._s_0.Z = local_f0 - (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Z;
    local_f0 = local_f0 + (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Z;
    pTVar3 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_a8);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_118._s_0,(TBox<double> *)&local_e0._s_0,pTVar3);
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_e0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_e0._s_0.Y;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_e0._s_0.Z;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_c8;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_c0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_b8;
    __return_storage_ptr__->IsValid = (undefined1)local_b0;
    __return_storage_ptr__->Pad[0] = local_b0._1_1_;
    __return_storage_ptr__->Pad[1] = local_b0._2_1_;
    __return_storage_ptr__->Pad[2] = local_b0._3_1_;
    __return_storage_ptr__->Pad[3] = local_b0._4_1_;
    __return_storage_ptr__->Pad[4] = local_b0._5_1_;
    __return_storage_ptr__->Pad[5] = local_b0._6_1_;
    __return_storage_ptr__->Pad[6] = local_b0._7_1_;
  }
  return __return_storage_ptr__;
}

// GetMaterialIndex @ 14873c7c0

int __thiscall UStaticMesh::GetMaterialIndex(UStaticMesh *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->StaticMaterials).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->StaticMaterials).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->StaticMaterials).AllocatorInstance.Data + lVar5 + 8) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x38;
    } while ((int)uVar6 < (this->StaticMaterials).ArrayNum);
  }
  return -1;
}

// GetMaterialIndexFromImportedMaterialSlotName @ 14873c880

int __thiscall
UStaticMesh::GetMaterialIndexFromImportedMaterialSlotName(UStaticMesh *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->StaticMaterials).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->StaticMaterials).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->StaticMaterials).AllocatorInstance.Data + lVar5 + 0x10) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x38;
    } while ((int)uVar6 < (this->StaticMaterials).ArrayNum);
  }
  return -1;
}

// GetMeshId @ 14873ca10

void __thiscall UStaticMesh::GetMeshId(UStaticMesh *this,FString *param_1)

{
  return;
}

// GetMinLODIdx @ 14873ca20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall UStaticMesh::GetMinLODIdx(UStaticMesh *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  if ((GEngine == (UEngine *)0x0) || (GEngine->UseStaticMeshMinLODPerQualityLevels == false)) {
    return (this->MinLOD).Default;
  }
  uVar6 = GMinLodQualityLevel;
  if ((GUseMobileLODBiasOnDesktopES31 != 0) && (GMaxRHIFeatureLevel == ES3_1)) {
    uVar6 = 0;
  }
  if (param_1) {
    iVar1 = FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::GetLowestValue
                      ((FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *)
                       &this->MinQualityLevelLOD);
    return iVar1;
  }
  if ((*(int *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 ==
       *(int *)&(this->MinQualityLevelLOD).PerQuality.field_0x34) || ((int)uVar6 < 0)) {
    return (this->MinQualityLevelLOD).Default;
  }
  puVar5 = *(undefined1 **)&(this->MinQualityLevelLOD).PerQuality.field_0x40;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &(this->MinQualityLevelLOD).PerQuality.field_0x38;
  }
  uVar2 = *(uint *)(puVar5 + (ulonglong)
                             (*(int *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 - 1U & uVar6
                             ) * 4);
  if (uVar2 != 0xffffffff) {
    do {
      puVar4 = (uint *)((longlong)(int)uVar2 * 0x10 +
                       *(longlong *)&(this->MinQualityLevelLOD).PerQuality);
      if (*puVar4 == uVar6) {
        puVar3 = puVar4 + 1;
        if (puVar4 == (uint *)0x0) {
          puVar3 = (uint *)0x0;
        }
        if (puVar3 != (uint *)0x0) {
          return *puVar3;
        }
        break;
      }
      uVar2 = puVar4[2];
    } while (uVar2 != 0xffffffff);
  }
  return (this->MinQualityLevelLOD).Default;
}

// GetMipIoFilenameHash @ 14873cb00

uint __thiscall UStaticMesh::GetMipIoFilenameHash(UStaticMesh *this,int param_1)

{
  FStaticMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pFVar1 = (this->RenderData).Ptr;
  if (((pFVar1 != (FStaticMeshRenderData *)0x0) && (-1 < param_1)) &&
     (param_1 < (pFVar1->LODResources).Array.ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    uVar4 = MakeIoFilenameHash((FIoChunkId *)
                               (*(longlong *)
                                 ((pFVar1->LODResources).Array.AllocatorInstance.Data +
                                 (longlong)param_1 * 8) + 0xb8));
    return uVar4;
  }
  return 0;
}

// GetNavCollision @ 14873cb90

UNavCollisionBase * __thiscall UStaticMesh::GetNavCollision(UStaticMesh *this)

{
  return (this->NavCollision).field0_0x0.DebugPtr;
}

// GetNavigationBounds @ 14873cba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
UStaticMesh::GetNavigationBounds
          (UStaticMesh *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  UNavCollisionBase *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TMatrix<double> *pTVar5;
  undefined1 auStack_138 [32];
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  dStack_f0 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Z;
  dVar2 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.X;
  dStack_100 = (this->ExtendedBounds).Origin.field0_0x0._s_0.X;
  local_f8 = (this->ExtendedBounds).Origin.field0_0x0._s_0.Y;
  local_e8 = (double)CONCAT71(local_e8._1_7_,1);
  dVar3 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar4 = (this->ExtendedBounds).BoxExtent.field0_0x0._s_0.Z;
  local_b0 = (this->ExtendedBounds).SphereRadius;
  pUVar1 = (this->NavCollision).field0_0x0.DebugPtr;
  local_118._s_0.X = dStack_100 - dVar2;
  dStack_100 = dStack_100 + dVar2;
  local_118._s_0.Y = local_f8 - dVar3;
  local_f8 = local_f8 + dVar3;
  local_118._s_0.Z = dStack_f0 - dVar4;
  dStack_f0 = dStack_f0 + dVar4;
  if (pUVar1 != (UNavCollisionBase *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,&local_e0);
    if (local_b0._0_1_ != '\0') {
      local_118._s_0.X = local_e0;
      local_118._s_0.Y = dStack_d8;
      local_118._s_0.Z = local_d0;
      dStack_100 = dStack_c8;
      local_f8 = local_c0;
      dStack_f0 = dStack_b8;
      local_e8 = local_b0;
    }
  }
  pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_a8);
  UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_118._s_0,__return_storage_ptr__,pTVar5)
  ;
  return __return_storage_ptr__;
}

// GetNumLODs @ 14873cd40

int __thiscall UStaticMesh::GetNumLODs(UStaticMesh *this)

{
  FStaticMeshRenderData *pFVar1;
  
  pFVar1 = (this->RenderData).Ptr;
  if (pFVar1 != (FStaticMeshRenderData *)0x0) {
    return (pFVar1->LODResources).Array.ArrayNum;
  }
  return 0;
}

// GetNumNaniteTriangles @ 14873cda0

int __thiscall UStaticMesh::GetNumNaniteTriangles(UStaticMesh *this)

{
  FStaticMeshRenderData *pFVar1;
  FResources *pFVar2;
  
  pFVar1 = (this->RenderData).Ptr;
  if (((pFVar1 != (FStaticMeshRenderData *)0x0) &&
      (pFVar2 = (pFVar1->NaniteResourcesPtr).Ptr, 0 < (pFVar2->PageStreamingStates).ArrayNum)) &&
     (0 < (pFVar2->RootData).ArrayNum)) {
    return pFVar2->NumInputTriangles;
  }
  return 0;
}

// GetNumNaniteVertices @ 14873cdd0

int __thiscall UStaticMesh::GetNumNaniteVertices(UStaticMesh *this)

{
  FStaticMeshRenderData *pFVar1;
  FResources *pFVar2;
  
  pFVar1 = (this->RenderData).Ptr;
  if (((pFVar1 != (FStaticMeshRenderData *)0x0) &&
      (pFVar2 = (pFVar1->NaniteResourcesPtr).Ptr, 0 < (pFVar2->PageStreamingStates).ArrayNum)) &&
     (0 < (pFVar2->RootData).ArrayNum)) {
    return pFVar2->NumInputVertices;
  }
  return 0;
}

// GetNumSections @ 14873cfb0

int __thiscall UStaticMesh::GetNumSections(UStaticMesh *this,int param_1)

{
  FStaticMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pFVar1 = (this->RenderData).Ptr;
  if (((pFVar1 != (FStaticMeshRenderData *)0x0) && (-1 < param_1)) &&
     (param_1 < (pFVar1->LODResources).Array.ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return *(int *)(*(longlong *)
                     ((pFVar1->LODResources).Array.AllocatorInstance.Data + (longlong)param_1 * 8) +
                   0x38);
  }
  return 0;
}

// GetNumSectionsWithCollision @ 14873d040

int __thiscall UStaticMesh::GetNumSectionsWithCollision(UStaticMesh *this)

{
  return 0;
}

// GetNumTexCoords @ 14873d060

int __thiscall UStaticMesh::GetNumTexCoords(UStaticMesh *this,int param_1)

{
  FStaticMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pFVar1 = (this->RenderData).Ptr;
  if (((pFVar1 != (FStaticMeshRenderData *)0x0) && (-1 < param_1)) &&
     (param_1 < (pFVar1->LODResources).Array.ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return *(int *)(*(longlong *)
                     ((pFVar1->LODResources).Array.AllocatorInstance.Data + (longlong)param_1 * 8) +
                   0x178);
  }
  return 0;
}

// GetNumTriangles @ 14873d1b0

int __thiscall UStaticMesh::GetNumTriangles(UStaticMesh *this,int param_1)

{
  FStaticMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pFVar1 = (this->RenderData).Ptr;
  if (((pFVar1 != (FStaticMeshRenderData *)0x0) && (-1 < param_1)) &&
     (param_1 < (pFVar1->LODResources).Array.ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = FStaticMeshLODResources::GetNumTriangles
                      (*(FStaticMeshLODResources **)
                        ((pFVar1->LODResources).Array.AllocatorInstance.Data + (longlong)param_1 * 8
                        ));
    return iVar4;
  }
  return 0;
}

// GetNumVertices @ 14873d250

int __thiscall UStaticMesh::GetNumVertices(UStaticMesh *this,int param_1)

{
  FStaticMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pFVar1 = (this->RenderData).Ptr;
  if (((pFVar1 != (FStaticMeshRenderData *)0x0) && (-1 < param_1)) &&
     (param_1 < (pFVar1->LODResources).Array.ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return *(int *)(*(longlong *)
                     ((pFVar1->LODResources).Array.AllocatorInstance.Data + (longlong)param_1 * 8) +
                   0x17c);
  }
  return 0;
}

// GetPhysicsTriMeshData @ 14873da30

bool __thiscall
UStaticMesh::GetPhysicsTriMeshData(UStaticMesh *this,FTriMeshCollisionData *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = GetPhysicsTriMeshDataCheckComplex
                    ((UStaticMesh *)&this[-1].LightMapCoordinateIndex,param_1,param_2,true);
  return bVar1;
}

// GetPhysicsTriMeshDataCheckComplex @ 14873da50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UStaticMesh::GetPhysicsTriMeshDataCheckComplex
          (UStaticMesh *this,FTriMeshCollisionData *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  FStaticMeshVertexBuffer *pFVar2;
  FPositionVertexBuffer *pFVar3;
  FStaticMeshRenderData *pFVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  UClass *pUVar14;
  FString *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auStackY_198 [32];
  undefined2 local_146;
  uint local_144;
  undefined8 local_140;
  int local_138;
  FIndexArrayView local_130;
  longlong local_120;
  longlong local_118;
  undefined2 *local_110;
  UStaticMesh *local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_108 = this;
  if (this->bAllowCPUAccess == '\0') {
    if ((byte)LogStaticMesh._0_1_ < 3) {
      return false;
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_100,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
    goto LAB_14873dc80;
  }
  pFVar4 = (this->RenderData).Ptr;
  pwVar20 = L"";
  if (((pFVar4 == (FStaticMeshRenderData *)0x0) ||
      (iVar13 = (pFVar4->LODResources).Array.ArrayNum, iVar13 == 0)) ||
     ((pFVar4->LODResources).Array.AllocatorInstance.Data == (FScriptContainerElement *)0x0)) {
LAB_14873db7c:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasValidRenderData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x23e1,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  else {
    uVar18 = iVar13 - 1;
    uVar11 = GetMinLODIdx(this,false);
    if ((int)uVar11 < (int)uVar18) {
      uVar18 = uVar11;
    }
    uVar11 = 0;
    if (0 < (int)uVar18) {
      uVar11 = uVar18;
    }
    pFVar4 = (this->RenderData).Ptr;
    uVar18 = 0;
    if ((int)uVar11 < (pFVar4->LODResources).Array.ArrayNum) {
      uVar18 = ~uVar11 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if (*(int *)(*(longlong *)
                  ((pFVar4->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8)
                + 0x17c) == 0) goto LAB_14873db7c;
  }
  if (param_2) {
    uVar11 = 0;
  }
  else {
    uVar18 = (((this->RenderData).Ptr)->LODResources).Array.ArrayNum - 1;
    if (this->LODForCollision < (int)uVar18) {
      uVar18 = this->LODForCollision;
    }
    uVar11 = 0;
    if (0 < (int)uVar18) {
      uVar11 = uVar18;
    }
  }
  pFVar4 = (this->RenderData).Ptr;
  uVar18 = 0;
  if ((int)uVar11 < (pFVar4->LODResources).Array.ArrayNum) {
    uVar18 = ~uVar11 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  lVar23 = *(longlong *)
            ((pFVar4->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
  local_120 = lVar23;
  cVar10 = (**(code **)(*(longlong *)(lVar23 + 0x250) + 0x30))();
  if (cVar10 == '\0') {
    if ((byte)LogStaticMesh._0_1_ < 3) {
      return false;
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_f0,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
    local_100.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
LAB_14873dc80:
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    return false;
  }
  FRawStaticIndexBuffer::GetArrayView((FRawStaticIndexBuffer *)(lVar23 + 0x228),&local_130);
  local_98._44_4_ = 0x80;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  if (this->bSupportPhysicalMaterialMasks == '\0') {
    pUVar14 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar14);
    }
    pUVar5 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar5 == (UObject *)0x0) {
      pFVar15 = GetTypeName<UPhysicsSettings>(&local_d0);
      if ((pFVar15->Data).ArrayNum != 0) {
        pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar20);
    }
    pUVar14 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    iVar13 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar14->_padding_)) {
      pFVar15 = GetTypeName<UPhysicsSettings>(&local_c0);
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      pFVar15 = GetFullNameForCastLogError<UObject>(&local_b0,pUVar5);
      if ((pFVar15->Data).ArrayNum != 0) {
        pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar20,pwVar22);
    }
    if (pUVar5[9].field_0x17 == '\0') goto LAB_14873dd7b;
  }
  iVar13 = *(int *)(lVar23 + 0x178);
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,iVar13,&(param_1->UVs).AllocatorInstance,&(param_1->UVs).ArrayNum,
                      &(param_1->UVs).ArrayMax);
  memset((param_1->UVs).AllocatorInstance.Data + (longlong)iVar12 * 0x10,0,(longlong)iVar13 << 4);
LAB_14873dd7b:
  local_144 = 0;
  if (0 < *(int *)(lVar23 + 0x38)) {
    lVar21 = lVar23 + 0x10;
    local_118 = 0;
    do {
      lVar19 = local_118;
      uVar18 = 0;
      if ((int)local_144 < *(int *)(lVar21 + 0x28)) {
        uVar18 = ~local_144 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar23 = local_120, bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      lVar17 = lVar21;
      if (*(longlong *)(lVar21 + 0x20) != 0) {
        lVar17 = *(longlong *)(lVar21 + 0x20);
      }
      local_110 = (undefined2 *)(lVar17 + lVar19);
      if ((param_2) || (*(char *)(local_110 + 10) != '\0')) {
        uVar18 = *(uint *)(local_110 + 2);
        uVar11 = *(int *)(local_110 + 4) + uVar18 + *(int *)(local_110 + 4) * 2;
        if (uVar18 < uVar11) {
          uVar24 = uVar18 + 2;
          do {
            if ((uint)local_130.NumIndices <= uVar24) {
              if (1 < (byte)LogStaticMesh._0_1_) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)local_108,&local_e0,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
                if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_14873e119;
            }
            local_140 = 0;
            local_138 = 0;
            if (local_130.b32Bit == false) {
              uVar16 = (uint)*(ushort *)
                              ((longlong)local_130.UntypedIndexData + (longlong)(int)uVar18 * 2);
            }
            else {
              uVar16 = *(uint *)((longlong)local_130.UntypedIndexData + (longlong)(int)uVar18 * 4);
            }
            pFVar2 = (FStaticMeshVertexBuffer *)(lVar23 + 0xd0);
            pFVar3 = (FPositionVertexBuffer *)(lVar23 + 0x188);
            iVar13 = GetCollisionVertIndexForMeshVertIndex
                               (uVar16,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        *)local_98,&param_1->Vertices,&param_1->UVs,pFVar3,pFVar2);
            local_140 = CONCAT44(local_140._4_4_,iVar13);
            if (local_130.b32Bit == false) {
              uVar16 = (uint)*(ushort *)
                              ((longlong)local_130.UntypedIndexData + (longlong)(int)uVar24 * 2 + -2
                              );
            }
            else {
              uVar16 = *(uint *)((longlong)local_130.UntypedIndexData +
                                (longlong)(int)uVar24 * 4 + -4);
            }
            iVar13 = GetCollisionVertIndexForMeshVertIndex
                               (uVar16,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        *)local_98,&param_1->Vertices,&param_1->UVs,pFVar3,pFVar2);
            local_140 = CONCAT44(iVar13,(undefined4)local_140);
            if (local_130.b32Bit == false) {
              uVar16 = (uint)*(ushort *)
                              ((longlong)local_130.UntypedIndexData + (longlong)(int)uVar24 * 2);
            }
            else {
              uVar16 = *(uint *)((longlong)local_130.UntypedIndexData + (longlong)(int)uVar24 * 4);
            }
            local_138 = GetCollisionVertIndexForMeshVertIndex
                                  (uVar16,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                           *)local_98,&param_1->Vertices,&param_1->UVs,pFVar3,pFVar2
                                  );
            pFVar6 = (param_1->Indices).AllocatorInstance.Data;
            if (((pFVar6 <= (FScriptContainerElement *)&local_140) &&
                ((FScriptContainerElement *)&local_140 <
                 pFVar6 + (longlong)(param_1->Indices).ArrayMax * 0xc)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            iVar13 = (param_1->Indices).ArrayNum;
            piVar1 = &(param_1->Indices).ArrayMax;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&(param_1->Indices).AllocatorInstance,piVar1);
            }
            (param_1->Indices).ArrayNum = iVar13 + 1;
            pFVar6 = (param_1->Indices).AllocatorInstance.Data;
            *(undefined8 *)(pFVar6 + (longlong)iVar13 * 0xc) = local_140;
            *(int *)(pFVar6 + (longlong)iVar13 * 0xc + 8) = local_138;
            pFVar6 = (param_1->MaterialIndices).AllocatorInstance.Data;
            local_146 = *local_110;
            if (((pFVar6 <= (FScriptContainerElement *)&local_146) &&
                ((FScriptContainerElement *)&local_146 <
                 pFVar6 + (longlong)(param_1->MaterialIndices).ArrayMax * 2)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            iVar13 = (param_1->MaterialIndices).ArrayNum;
            piVar1 = &(param_1->MaterialIndices).ArrayMax;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,&(param_1->MaterialIndices).AllocatorInstance,piVar1);
            }
            (param_1->MaterialIndices).ArrayNum = iVar13 + 1;
            uVar18 = uVar18 + 3;
            uVar24 = uVar24 + 3;
            *(undefined2 *)
             ((param_1->MaterialIndices).AllocatorInstance.Data + (longlong)iVar13 * 2) = local_146;
            lVar23 = local_120;
          } while (uVar18 < uVar11);
          lVar21 = local_120 + 0x10;
          lVar19 = local_118;
        }
      }
      local_144 = local_144 + 1;
      local_118 = lVar19 + 0x1c;
    } while ((int)local_144 < *(int *)(lVar23 + 0x38));
  }
  param_1->bFlipNormals = 1;
  if (((param_1->Vertices).ArrayNum < 1) || ((param_1->Indices).ArrayNum < 1)) {
LAB_14873e119:
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return bVar8;
}

// GetPrivateStaticClass @ 14873ea40

UClass * __cdecl UStaticMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMesh",
               &Z_Registration_Info_UClass_UStaticMesh.InnerSingleton,
               StaticRegisterNativesUStaticMesh,0x2a0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStaticMesh>,InternalVTableHelperCtorCaller<UStaticMesh>,
               local_res8,UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMesh.InnerSingleton;
}

// GetRenderAssetType @ 14873ecf0

EStreamableRenderAssetType __thiscall UStaticMesh::GetRenderAssetType(UStaticMesh *this)

{
  FStaticMeshRenderData *pFVar1;
  EStreamableRenderAssetType EVar2;
  FStreamingManagerCollection *this_00;
  FCoarseMeshStreamingManager *pFVar3;
  
  this_00 = IStreamingManager::Get();
  pFVar3 = FStreamingManagerCollection::GetNaniteCoarseMeshStreamingManager(this_00);
  pFVar1 = (this->RenderData).Ptr;
  if ((pFVar1 != (FStaticMeshRenderData *)0x0) &&
     (0 < (((pFVar1->NaniteResourcesPtr).Ptr)->PageStreamingStates).ArrayNum)) {
    EVar2 = StaticMesh;
    if (pFVar3 != (FCoarseMeshStreamingManager *)0x0) {
      EVar2 = NaniteCoarseMesh;
    }
    return EVar2;
  }
  return StaticMesh;
}

// GetRenderData @ 14873ed50

FStaticMeshRenderData * __thiscall UStaticMesh::GetRenderData(UStaticMesh *this)

{
  return (this->RenderData).Ptr;
}

// GetRenderData @ 14873ed60

FStaticMeshRenderData * __thiscall UStaticMesh::GetRenderData(UStaticMesh *this)

{
  return (this->RenderData).Ptr;
}

// GetResourceSizeEx @ 14873f360

void __thiscall UStaticMesh::GetResourceSizeEx(UStaticMesh *this,FResourceSizeEx *param_1)

{
  FStaticMeshRenderData *this_00;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  this_00 = (this->RenderData).Ptr;
  if (this_00 != (FStaticMeshRenderData *)0x0) {
    FStaticMeshRenderData::GetResourceSizeEx(this_00,param_1);
  }
  return;
}

// GetSocketsByTag @ 14873f9d0

TArray<UStaticMeshSocket_*,TSizedDefaultAllocator<32>_> * __thiscall
UStaticMesh::GetSocketsByTag
          (UStaticMesh *this,
          TArray<UStaticMeshSocket_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<UStaticMeshSocket_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar8 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < (this->Sockets).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Sockets).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<UStaticMeshSocket_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      local_28[0] = *(longlong *)((this->Sockets).AllocatorInstance.Data + lVar9);
      if (local_28[0] != 0) {
        iVar6 = *(int *)(local_28[0] + 0x80);
        iVar1 = (param_1->Data).ArrayNum;
        if (iVar6 == iVar1) {
          if (1 < iVar6) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(local_28[0] + 0x78),
                               (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar4 = iVar6 == 0;
            goto LAB_14873faad;
          }
        }
        else {
          bVar4 = iVar6 + iVar1 == 1;
LAB_14873faad:
          if (!bVar4) goto LAB_14873fb51;
        }
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<UStaticMeshSocket_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_28[0];
      }
LAB_14873fb51:
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Sockets).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetStaticMeshDescription @ 14873fba0

UStaticMeshDescription * __thiscall
UStaticMesh::GetStaticMeshDescription(UStaticMesh *this,int param_1)

{
  return (UStaticMeshDescription *)0x0;
}

// GetTriMeshSizeEstimates @ 148740cd0

bool __thiscall
UStaticMesh::GetTriMeshSizeEstimates
          (UStaticMesh *this,FTriMeshCollisionDataEstimates *param_1,bool param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  plVar2 = (longlong *)this->_padding_;
  if ((plVar2 == (longlong *)0x0) || (iVar1 = (int)plVar2[1], iVar1 == 0)) {
    return false;
  }
  if (param_2) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)(this->MinQualityLevelLOD)._padding_;
    uVar9 = iVar1 - 1U;
    if ((int)uVar7 < (int)(iVar1 - 1U)) {
      uVar9 = uVar7;
    }
    uVar7 = 0;
    if (0 < (int)uVar9) {
      uVar7 = uVar9;
    }
  }
  uVar9 = 0;
  if ((int)uVar7 < iVar1) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar9 = 0;
  lVar3 = *(longlong *)(*plVar2 + (longlong)(int)uVar7 * 8);
  param_1->VerticeCount = 0;
  if (0 < *(int *)(lVar3 + 0x38)) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < *(int *)(lVar3 + 0x38)) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar8 = lVar3 + 0x10;
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        lVar8 = *(longlong *)(lVar3 + 0x30);
      }
      if ((param_2) || (*(char *)(lVar10 + 0x14 + lVar8) != '\0')) {
        param_1->VerticeCount =
             param_1->VerticeCount + (ulonglong)(uint)(*(int *)(lVar10 + 8 + lVar8) * 3);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x1c;
    } while ((int)uVar9 < *(int *)(lVar3 + 0x38));
  }
  return true;
}

// GetUVChannelData @ 148741340

FMeshUVChannelInfo * __thiscall UStaticMesh::GetUVChannelData(UStaticMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMeshUVChannelInfo *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->StaticMaterials).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->StaticMaterials).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMeshUVChannelInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((this->StaticMaterials).AllocatorInstance.Data[(longlong)param_1 * 0x38 + 0x18] ==
        (FScriptContainerElement)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6466496919702072258>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0x143e,"GetStaticMaterials()[MaterialIndex].UVChannelData.bInitialized");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMeshUVChannelInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    uVar3 = 0;
    if (param_1 < (this->StaticMaterials).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMeshUVChannelInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FMeshUVChannelInfo *)
           ((this->StaticMaterials).AllocatorInstance.Data + (longlong)param_1 * 0x38 + 0x18);
  }
  return (FMeshUVChannelInfo *)0x0;
}

// GetUsedMaterials @ 1487414e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UStaticMesh::GetUsedMaterials
          (UStaticMesh *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UMaterialInterface_*___cdecl(int)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TFunctionRef<UMaterialInterface_*___cdecl(int)> *pTVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  byte bVar11;
  longlong lVar12;
  FStaticMeshRenderData *pFVar13;
  uint uVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStackY_1e8 [32];
  undefined1 local_197;
  undefined1 local_196;
  FIdentityFunctor local_195;
  int local_194;
  uint local_190;
  undefined8 local_188;
  undefined8 local_180;
  int local_178 [2];
  int local_170 [2];
  undefined4 local_168 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_160;
  FStaticMeshRenderData *local_150;
  longlong local_148;
  TFunctionRef<UMaterialInterface_*___cdecl(int)> *local_140;
  int local_138;
  int local_134;
  int local_130;
  longlong local_128;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_120;
  longlong *local_118;
  int iStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  bVar20 = -1 < CpuChannel->Enabled;
  local_140 = param_2;
  local_120 = param_1;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9977,"UStaticMesh::GetUsedMaterials",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x26f9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9977);
  }
  pFVar13 = (this->RenderData).Ptr;
  local_150 = pFVar13;
  if (pFVar13 != (FStaticMeshRenderData *)0x0) {
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_98._0_8_ = 0;
    local_98._8_4_ = 0;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_128 = (longlong)(pFVar13->LODResources).Array.ArrayNum;
    local_194 = 0;
    local_190 = 0;
    if (0 < local_128) {
      local_148 = 0;
      do {
        lVar12 = local_148;
        uVar18 = local_190;
        uVar14 = 0;
        if ((int)local_190 < (pFVar13->LODResources).Array.ArrayNum) {
          uVar14 = ~local_190 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = 0;
        lVar4 = *(longlong *)((pFVar13->LODResources).Array.AllocatorInstance.Data + lVar12 * 8);
        iVar15 = local_194;
        if (0 < *(int *)(lVar4 + 0x38)) {
          lVar19 = 0;
          do {
            uVar18 = 0;
            if ((int)uVar14 < *(int *)(lVar4 + 0x38)) {
              uVar18 = ~uVar14 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar12 = lVar4 + 0x10;
            if (*(longlong *)(lVar4 + 0x30) != 0) {
              lVar12 = *(longlong *)(lVar4 + 0x30);
            }
            iVar10 = *(int *)(lVar19 + lVar12);
            local_178[0] = iVar10;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_138,
                       (bool *)local_178);
            bVar9 = iVar10 < iVar15;
            iVar15 = iVar10;
            if (bVar9) {
              iVar15 = -1;
            }
            uVar14 = uVar14 + 1;
            lVar19 = lVar19 + 0x1c;
            pFVar13 = local_150;
            lVar12 = local_148;
            uVar18 = local_190;
          } while ((int)uVar14 < *(int *)(lVar4 + 0x38));
        }
        local_194 = iVar15;
        local_190 = uVar18 + 1;
        local_148 = lVar12 + 1;
      } while (local_148 < local_128);
      param_1 = local_120;
    }
    iVar15 = local_194;
    uVar18 = local_98._8_4_ - local_64;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    piVar1 = &param_1->ArrayMax;
    iVar10 = local_98._8_4_;
    if (param_1->ArrayMax < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar18,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
      iVar10 = local_98._8_4_;
    }
    uVar18 = local_70;
    if (iVar15 == -1) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_160);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                ((int *)local_160.AllocatorInstance.Data,local_160.ArrayNum,local_195,
                 (TLess<int> *)&local_195);
      pTVar7 = local_140;
      iVar15 = local_160.ArrayNum;
      pFVar2 = local_160.AllocatorInstance.Data + (longlong)local_160.ArrayNum * 4;
      FVar16.Data = local_160.AllocatorInstance.Data;
      while( true ) {
        if (local_160.ArrayNum != iVar15) {
          local_197 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_197)
          ;
        }
        if (FVar16.Data == pFVar2) break;
        local_170[0] = *(int *)FVar16.Data;
        local_188 = (**(code **)pTVar7)(*(undefined8 *)&pTVar7->field_0x8,local_170);
        pFVar5 = (param_1->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 < pFVar5 + (longlong)*piVar1 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,piVar1);
          param_1->ArrayNum = iVar10;
        }
        FVar16.Data = FVar16.Data + 4;
        param_1->ArrayNum = iVar10 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_188;
      }
      if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
      }
    }
    else {
      iStack_110 = 0;
      local_f8 = 0;
      uStack_10c = 1;
      uStack_fc = 0;
      if (local_70 != 0) {
        puVar17 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar17 = local_78;
        }
        uVar14 = *puVar17;
        while (uVar14 == 0) {
          lVar12 = (longlong)iStack_110;
          local_f8 = local_f8 + 0x20;
          iStack_110 = iStack_110 + 1;
          uStack_fc = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_110)
          goto LAB_148741930;
          uVar14 = puVar17[lVar12 + 1];
        }
        uStack_10c = -uVar14 & uVar14;
        uVar3 = (ulonglong)uStack_10c * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_134 = (int)lVar12;
        uStack_fc = local_f8 + -1 + local_134;
        if ((int)local_70 < (int)uStack_fc) {
          uStack_fc = local_70;
        }
      }
LAB_148741930:
      iStack_f0 = iVar10 - local_64;
      local_118 = (longlong *)local_98;
      local_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar14 = local_70 & 0xffffffe0;
      uStack_100 = 0xffffffff;
      TStack_e0.CurrentBitIndex = uStack_fc;
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
      uStack_f4 = local_9c;
      iVar15 = (int)local_70 >> 5;
      TStack_e0._28_4_ = local_9c;
      TStack_e0.BaseBitIndex = local_f8;
      uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
      bVar11 = (byte)local_70;
      local_e8 = local_118;
      TStack_e0.Array = local_108;
      if (((int)local_70 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar7 = local_140;
      if (uVar18 != local_70) {
        puVar17 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar17 = local_78;
        }
        uVar18 = -1 << (bVar11 & 0x1f) & puVar17[iVar15];
        while (uVar18 == 0) {
          lVar12 = (longlong)iVar15;
          uVar14 = uVar14 + 0x20;
          iVar15 = iVar15 + 1;
          uVar18 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_148741a35;
          uVar18 = puVar17[lVar12 + 1];
        }
        uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_130 = (int)lVar12;
        uVar18 = local_130 + -1 + uVar14;
        if ((int)local_70 < (int)uVar18) {
          uVar18 = local_70;
        }
      }
LAB_148741a35:
      while( true ) {
        plVar8 = local_e8;
        if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
          local_196 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_196);
        }
        if (((TStack_e0.CurrentBitIndex == uVar18) &&
            (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (plVar8 == (longlong *)local_98)) break;
        local_168[0] = *(undefined4 *)(*plVar8 + (longlong)TStack_e0.CurrentBitIndex * 0xc);
        local_180 = (**(code **)pTVar7)(*(undefined8 *)&pTVar7->field_0x8,local_168);
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_180) &&
            ((FScriptContainerElement *)&local_180 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar15 = param_1->ArrayNum;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar15 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_180;
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      }
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetVertexColorData @ 148741be0

void __thiscall
UStaticMesh::GetVertexColorData
          (UStaticMesh *this,
          TMap<UE::Math::TVector<float>,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,FColor,0>_>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9525,"UStaticMesh::GetVertexColorData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x2535);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9525);
  }
  bVar1 = 1 < *(int *)&param_1->field_0x48;
  if (!bVar1) {
    TSet<TTuple<UE::Math::TVector<float>,FColor>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,FColor,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TVector<float>,FColor>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,FColor,0>,FDefaultSetAllocator>
                      *)param_1);
  }
  *(undefined4 *)&param_1->field_0x8 = 0;
  if (*(int *)&param_1->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)param_1,0,(int *)&param_1->field_0xc);
  }
  *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x34 = 0;
  *(undefined4 *)&param_1->field_0x28 = 0;
  if ((*(int *)&param_1->field_0x2c < 0) || (0x80 < *(int *)&param_1->field_0x2c)) {
    *(undefined4 *)&param_1->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10,0);
  }
  if (bVar1) {
    *(undefined4 *)&param_1->field_0x48 = 1;
    TSet<TTuple<UE::Math::TVector<float>,FColor>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,FColor,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TVector<float>,FColor>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,FColor,0>,FDefaultSetAllocator>
              *)param_1);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// HasNaniteFallbackMesh @ 148742a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UStaticMesh::HasNaniteFallbackMesh(UStaticMesh *this,EShaderPlatform param_1)

{
  FStaticMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pFVar1 = (this->RenderData).Ptr;
  if (pFVar1 == (FStaticMeshRenderData *)0x0) {
    return false;
  }
  if ((((pFVar1->NaniteResourcesPtr).Ptr)->PageStreamingStates).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasValidNaniteData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0xbc1,
                       L"Should only call HasNaniteFallbackMesh(...) if HasValidNaniteData() returns true."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return pFVar1->bHasNaniteFallbackMesh;
}

// HasPendingRenderResourceInitialization @ 148742af0

bool __thiscall UStaticMesh::HasPendingRenderResourceInitialization(UStaticMesh *this)

{
  FStaticMeshRenderData *pFVar1;
  char cVar2;
  
  cVar2 = (**(code **)(this->_padding_ + 0x10))();
  if ((((cVar2 == '\0') && (pFVar1 = (this->RenderData).Ptr, pFVar1 != (FStaticMeshRenderData *)0x0)
       ) && (pFVar1->bIsInitialized != false)) && (pFVar1->bReadyForStreaming == false)) {
    return true;
  }
  return false;
}

// HasValidNaniteData @ 148742ba0

bool __thiscall UStaticMesh::HasValidNaniteData(UStaticMesh *this)

{
  FStaticMeshRenderData *pFVar1;
  
  pFVar1 = (this->RenderData).Ptr;
  if (pFVar1 != (FStaticMeshRenderData *)0x0) {
    return 0 < (((pFVar1->NaniteResourcesPtr).Ptr)->PageStreamingStates).ArrayNum;
  }
  return false;
}

// HasValidRenderData @ 148742bc0

bool __thiscall UStaticMesh::HasValidRenderData(UStaticMesh *this,bool param_1,int param_2)

{
  int iVar1;
  FStaticMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  pFVar2 = (this->RenderData).Ptr;
  if (((pFVar2 != (FStaticMeshRenderData *)0x0) &&
      (iVar1 = (pFVar2->LODResources).Array.ArrayNum, iVar1 != 0)) &&
     ((pFVar2->LODResources).Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    if (!param_1) {
      return true;
    }
    if (param_2 == -1) {
      uVar7 = iVar1 - 1;
      uVar6 = GetMinLODIdx(this,false);
      if ((int)uVar6 < (int)uVar7) {
        uVar7 = uVar6;
      }
      param_2 = 0;
      if (0 < (int)uVar7) {
        param_2 = uVar7;
      }
    }
    pFVar2 = (this->RenderData).Ptr;
    uVar7 = 0;
    if (param_2 < (pFVar2->LODResources).Array.ArrayNum) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    return *(int *)(*(longlong *)
                     ((pFVar2->LODResources).Array.AllocatorInstance.Data + (longlong)param_2 * 8) +
                   0x17c) != 0;
  }
  return false;
}

// ImportStaticMaterialsInfo @ 148742cd0

/* WARNING: Removing unreachable block (ram,0x00014874305e) */

TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> * __cdecl
UStaticMesh::ImportStaticMaterialsInfo
          (TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  FName *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  FName local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FName local_58;
  FString local_50;
  
  uVar9 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (1 < (param_1->Data).ArrayNum) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    iVar3 = ::FString::ParseIntoArray(param_1,&local_78,L">",true);
    uVar11 = uVar9;
    if (0 < iVar3) {
      do {
        uVar10 = (uint)uVar11;
        local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.ArrayNum = 0;
        local_88.ArrayMax = 0;
        uVar4 = 0;
        if ((int)uVar10 < local_78.ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar6;
        }
        iVar5 = ::FString::ParseIntoArray
                          ((FString *)(local_78.AllocatorInstance.Data + uVar9),&local_88,L",",true)
        ;
        if (iVar5 == 2) {
          if ((local_88.ArrayNum < 2) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar6 = (TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar6;
          }
          ::FString::RemoveFromStart
                    ((FString *)(local_88.AllocatorInstance.Data + 0x10),L"\'",1,IgnoreCase);
          if ((local_88.ArrayNum < 2) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar6 = (TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar6;
          }
          ::FString::RemoveFromEnd
                    ((FString *)(local_88.AllocatorInstance.Data + 0x10),L"\'",1,IgnoreCase);
          if (local_88.ArrayNum < 2) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pTVar6 = (TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
              ;
              return pTVar6;
            }
          }
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = *(int *)(local_88.AllocatorInstance.Data + 0x18);
          lVar8 = (longlong)local_68.Data.ArrayNum;
          _Src = *(void **)(local_88.AllocatorInstance.Data + 0x10);
          if (local_68.Data.ArrayNum == 0) {
            local_68.Data.ArrayMax = 0;
            iVar5 = local_88.ArrayNum;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                       local_68.Data.ArrayNum,&local_68.Data.ArrayMax);
            memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
            iVar5 = local_88.ArrayNum;
          }
          if ((iVar5 < 1) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar6 = (TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar6;
          }
          iVar5 = *(int *)(local_88.AllocatorInstance.Data + 8) + -1;
          if (*(int *)(local_88.AllocatorInstance.Data + 8) == 0) {
            iVar5 = 0;
          }
          pFVar7 = ::FName::FName(&local_res10,iVar5,*(wchar_t **)local_88.AllocatorInstance.Data,
                                  FNAME_Add);
          local_58 = *pFVar7;
          ::FString::FString(&local_50,&local_68);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          pFVar7 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar7 <= &local_58) &&
              (&local_58 < pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 3)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar6 = (TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar6;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                            (longlong)iVar5 * 0x18);
          *pFVar7 = local_58;
          pFVar7[1].ComparisonIndex = 0;
          pFVar7[1].Number = 0;
          pFVar7[1] = (FName)local_50.Data.AllocatorInstance.Data;
          pFVar7[2].ComparisonIndex.Value = local_50.Data.ArrayNum;
          pFVar7[2].Number = local_50.Data.ArrayMax;
          local_50.Data.ArrayNum = 0;
          local_50.Data.ArrayMax = 0;
          local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
        uVar9 = uVar9 + 0x10;
        uVar11 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < iVar3);
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// InitResources @ 1487485b0

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

void __thiscall UStaticMesh::InitResources(UStaticMesh *this)

{
  int iVar1;
  FStaticMeshRenderData *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulong64 uVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  byte bVar11;
  undefined ***pppuVar12;
  Type TVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  byte bVar17;
  char cVar18;
  int iVar19;
  undefined1 auStackY_e8 [32];
  FLLMScope local_b8 [2];
  FMemScope local_b0;
  code *local_a8 [2];
  undefined **local_98 [3];
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68 [3];
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name4770,L"StaticMesh/InitResources");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_b8,LLMScope_Name4770,false,None,Default,true);
  FMemScope::FMemScope(&local_b0,&LLMScope_Name4770,true);
  pFVar2 = (this->RenderData).Ptr;
  this->bRenderingResourcesInitialized = '\x01';
  this->_padding_ = 0;
  if (pFVar2 == (FStaticMeshRenderData *)0x0) goto LAB_14874884e;
  iVar1 = (pFVar2->LODResources).Array.ArrayNum;
  if ((GEngine == (UEngine *)0x0) || (GEngine->UseStaticMeshMinLODPerQualityLevels == false)) {
    iVar7 = (this->MinLOD).Default;
  }
  else {
    iVar7 = FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::GetLowestValue
                      ((FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *)
                       &this->MinQualityLevelLOD);
  }
  pFVar2 = (this->RenderData).Ptr;
  iVar19 = 0;
  *(uchar *)((longlong)&this->_padding_ + 1) = pFVar2->NumInlinedLODs;
  uVar16 = (pFVar2->LODResources).Array.ArrayNum - 1;
  if ((int)uVar16 < 0) {
LAB_148748751:
    if ((pFVar2->LODResources).Array.ArrayNum != 0) {
      iVar19 = 1;
    }
  }
  else {
    lVar15 = (longlong)(int)uVar16 * 8;
    do {
      uVar8 = 0;
      if ((int)uVar16 < (pFVar2->LODResources).Array.ArrayNum) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((*(byte *)(*(longlong *)((pFVar2->LODResources).Array.AllocatorInstance.Data + lVar15) +
                    0x94) & 0x40) != 0) break;
      iVar19 = iVar19 + 1;
      lVar15 = lVar15 + -8;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
    if (iVar19 == 0) goto LAB_148748751;
  }
  pFVar2 = (this->RenderData).Ptr;
  iVar4 = iVar1;
  if (iVar1 - iVar7 < iVar1) {
    iVar4 = iVar1 - iVar7;
  }
  bVar17 = (byte)iVar19;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar17;
  bVar11 = pFVar2->NumInlinedLODs;
  *(char *)((longlong)&this->_padding_ + 4) = (char)iVar7;
  if ((int)(uint)bVar11 < iVar4) {
    bVar11 = (byte)iVar4;
  }
  *(byte *)((longlong)&this->_padding_ + 3) = bVar11;
  *(uchar *)((longlong)&this->_padding_ + 7) = pFVar2->LODBiasModifier;
  bVar6 = bVar11;
  if (bVar17 < bVar11) {
    bVar6 = bVar17;
  }
  *(byte *)((longlong)&this->_padding_ + 2) = bVar6;
  cVar18 = (char)iVar1 - pFVar2->CurrentFirstLODIdx;
  lVar15 = this->_padding_;
  *(char *)((longlong)&this->_padding_ + 5) = cVar18;
  *(char *)((longlong)&this->_padding_ + 6) = cVar18;
  if (((lVar15 & 1) == 0) && (*(byte *)((longlong)&this->_padding_ + 1) != bVar11)) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe | bVar11;
  lVar15 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar15 == 0) {
    TVar13 = Num;
  }
  else {
    TVar13 = (Type)*(byte *)(lVar15 + 0x188);
  }
  FStaticMeshRenderData::InitResources((this->RenderData).Ptr,TVar13,this);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
LAB_14874884e:
  UStreamableRenderAsset::LinkStreaming((UStreamableRenderAsset *)this);
  uVar9 = UObject::GetResourceSizeBytes((UObject *)this,Exclusive);
  local_98[1]._0_4_ = (undefined4)uVar9;
  local_98[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UStaticMesh::InitResources'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UStaticMesh::InitResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_80 = (undefined ***)0x0;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UStaticMesh::InitResources_::__l2::TSTR_UpdateMemoryStats4825>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68[1]._4_4_ = local_98[1]._4_4_;
    local_68[1]._0_4_ = local_98[1]._0_4_;
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68[0] = local_98[0];
    local_68[2] = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`UStaticMesh::InitResources'::__l2::TSTR_UpdateMemoryStats4825>::Get
                        ();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar10);
    uVar14 = (ulonglong)local_48;
    if (2 < uVar14) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar12 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar12 = local_50;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar12 = local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar12 = local_80;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_b8);
  return;
}

// IsCompiling @ 14874b490

bool __thiscall UStaticMesh::IsCompiling(UStaticMesh *this)

{
  return false;
}

// IsMinLodQualityLevelEnable @ 14874b640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UStaticMesh::IsMinLodQualityLevelEnable(UStaticMesh *this)

{
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseStaticMeshMinLODPerQualityLevels != false)) {
    return true;
  }
  return false;
}

// IsNavigationRelevant @ 14874b670

bool __thiscall UStaticMesh::IsNavigationRelevant(UStaticMesh *this)

{
  return this->bHasNavigationData;
}

// IsPostLoadThreadSafe @ 14874b6b0

bool __thiscall UStaticMesh::IsPostLoadThreadSafe(UStaticMesh *this)

{
  return false;
}

// IsReadyForFinishDestroy @ 14874b6d0

bool __thiscall UStaticMesh::IsReadyForFinishDestroy(UStaticMesh *this)

{
  bool bVar1;
  
  bVar1 = UStreamableRenderAsset::IsReadyForFinishDestroy((UStreamableRenderAsset *)this);
  if (bVar1) {
    bVar1 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
    if (!bVar1) {
      if (this->bRenderingResourcesInitialized != 0) {
        (**(code **)(this->_padding_ + 800))(this);
      }
      bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
      return bVar1;
    }
  }
  return false;
}

// MarkAsNotHavingNavigationData @ 14874ced0

void __thiscall UStaticMesh::MarkAsNotHavingNavigationData(UStaticMesh *this)

{
  this->bHasNavigationData = '\0';
  (this->NavCollision).field0_0x0.DebugPtr = (UNavCollisionBase *)0x0;
  return;
}

// OnLodStrippingQualityLevelChanged @ 14874d050

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UStaticMesh::OnLodStrippingQualityLevelChanged(IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  longlong lVar7;
  undefined1 auStackY_f8 [32];
  TArray<UStaticMesh_*,TSizedDefaultAllocator<32>_> local_a8;
  longlong local_98;
  TObjectIterator<UStaticMesh> local_90;
  FStaticMeshComponentRecreateRenderStateContext local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseStaticMeshMinLODPerQualityLevels != false)) {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_90.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ObjectArray.ArrayNum = 0;
    local_90.ObjectArray.ArrayMax = 0;
    local_90.Index = 0xffffffff;
    EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar6 = StaticClass();
    GetObjectsOfClass(pUVar6,&local_90.ObjectArray,true,RF_ClassDefaultObject,
                      EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UStaticMesh>::Advance(&local_90);
      lVar7 = (longlong)local_90.Index;
      if ((local_90.Index < 0) || (local_90.ObjectArray.ArrayNum <= local_90.Index)) break;
      uVar4 = 0;
      if (local_90.Index < local_90.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_90.Index >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_98 = *(longlong *)(local_90.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
      if ((local_98 != 0) && (0 < *(int *)(local_98 + 0x120) - *(int *)(local_98 + 0x14c))) {
        if ((local_a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_98) &&
           (((FScriptContainerElement *)&local_98 <
             local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 8 &&
            (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = local_a8.ArrayNum;
        if (local_a8.ArrayNum == local_a8.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
        }
        local_a8.ArrayNum = iVar5 + 1;
        *(longlong *)(local_a8.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_98;
      }
    }
    if (local_90.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.ObjectArray.AllocatorInstance.Data);
    }
    if (0 < local_a8.ArrayNum) {
      FStaticMeshComponentRecreateRenderStateContext::FStaticMeshComponentRecreateRenderStateContext
                (&local_78,&local_a8,false,false);
      FStaticMeshComponentRecreateRenderStateContext::
      ~FStaticMeshComponentRecreateRenderStateContext(&local_78);
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  return;
}

// PollAsyncPhysicsTriMeshData @ 14874ee50

bool __thiscall UStaticMesh::PollAsyncPhysicsTriMeshData(UStaticMesh *this,bool param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  return cVar1 == '\0';
}

// PollAsyncPhysicsTriMeshDataCheckComplex @ 14874ee70

bool __thiscall
UStaticMesh::PollAsyncPhysicsTriMeshDataCheckComplex(UStaticMesh *this,bool param_1,bool param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))();
  return cVar1 == '\0';
}

// PostInitProperties @ 14874f850

void __thiscall UStaticMesh::PostInitProperties(UStaticMesh *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UStaticMesh *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UStaticMesh **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UStaticMesh **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 14874f8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall UStaticMesh::PostLoad(UStaticMesh *this)

{
  int iVar1;
  FStaticMeshRenderData *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  UStaticMesh *this_00;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  UNavCollisionBase *pUVar8;
  longlong lVar9;
  undefined1 auVar10 [8];
  UMaterialInterface *this_01;
  wchar_t *pwVar11;
  EShaderPlatform EVar12;
  Type TVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  ForElementType<FVertexFactoryType_const_*> FVar17;
  ForElementType<short> FVar18;
  ForElementType<short> FVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  ForElementType<FVertexFactoryType_const_*> FVar22;
  undefined2 *puVar23;
  undefined1 auStackY_178 [32];
  char local_128 [4];
  uint local_124;
  FLLMScope local_120 [2];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  FPSOPrecacheParams_u_0 local_108;
  undefined1 local_100 [16];
  int local_f0;
  undefined4 uStack_ec;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_e8;
  UStaticMesh *local_d8;
  undefined8 local_d0;
  ForElementType<short> local_c8;
  FMemScope local_c0;
  ForElementType<FVertexFactoryType_const_*> local_b8;
  int *piStack_b0;
  undefined8 local_a8;
  ForElementType<FVertexFactoryType_const_*> local_a0;
  uint local_88;
  int local_84;
  TArray<short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_80;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_d8 = this;
  FLLMScope::FLLMScope(local_120,StaticMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_c0,StaticMesh,true);
  UObject::PostLoad((UObject *)this);
  puVar7 = ::operator_new(6);
  puVar20 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    *(undefined2 *)(puVar7 + 1) = 0;
    bVar5 = UE::GetIsEditorLoadingPackage();
    *(bool *)((longlong)puVar7 + 1) = bVar5;
    *(undefined2 *)((longlong)puVar7 + 3) = 0;
    *(undefined1 *)((longlong)puVar7 + 5) = 0;
    puVar20 = puVar7;
  }
  if ((this->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
    CreateBodySetup(this);
  }
  if (((this->bHasNavigationData != '\0') &&
      ((this->BodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0)) &&
     ((this->NavCollision).field0_0x0.DebugPtr == (UNavCollisionBase *)0x0)) {
    pUVar8 = UNavCollisionBase::ConstructNew((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UNavCollisionBase *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->NavCollision).field0_0x0.DebugPtr = pUVar8;
  }
  EnforceLightmapRestrictions(this,true);
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId8380,"UStaticMesh::FinishPostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x20bc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8380);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar11 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar11,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && ((this->_padding_ & 0x10) == 0)) {
    (**(code **)(this->_padding_ + 0x318))(this);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  ::operator_delete(puVar20,6);
  bVar5 = IsResourcePSOPrecachingEnabled();
  if ((bVar5) && ((this->RenderData).Ptr != (FStaticMeshRenderData *)0x0)) {
    lVar9 = (**(code **)(this->_padding_ + 0x180))(this);
    TVar13 = GMaxRHIFeatureLevel;
    if (lVar9 != 0) {
      lVar9 = (**(code **)(this->_padding_ + 0x180))(this);
      TVar13 = (uint)*(byte *)(lVar9 + 0x188);
    }
    if (TVar13 == Num) {
      EVar12 = SP_NumPlatforms;
    }
    else {
      EVar12 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar13];
    }
    bVar5 = UseNanite(EVar12,true,true);
    if (((!bVar5) || (pFVar2 = (this->RenderData).Ptr, pFVar2 == (FStaticMeshRenderData *)0x0)) ||
       (local_128[0] = '\x01',
       (((pFVar2->NaniteResourcesPtr).Ptr)->PageStreamingStates).ArrayNum < 1)) {
      local_128[0] = '\0';
    }
    pFVar2 = (this->RenderData).Ptr;
    uVar6 = 0;
    local_80.AllocatorInstance.SecondaryData = (ForElementType<short>)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 2;
    FVar22 = (ForElementType<FVertexFactoryType_const_*>)
             (pFVar2->LODResources).Array.AllocatorInstance.Data;
    local_100._8_8_ = &(pFVar2->LODResources).Array.ArrayNum;
    local_f0 = (pFVar2->LODResources).Array.ArrayNum;
    FVar17 = (ForElementType<FVertexFactoryType_const_*>)((longlong)FVar22 + (longlong)local_f0 * 8)
    ;
    local_a8 = CONCAT44(uStack_ec,local_f0);
    local_100._0_8_ = FVar22;
    local_b8 = FVar22;
    piStack_b0 = (int *)local_100._8_8_;
    while( true ) {
      if (*piStack_b0 != (int)local_a8) {
        local_128[1] = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_128 + 1);
      }
      if (FVar22 == FVar17) break;
      lVar9 = *(longlong *)FVar22;
      puVar16 = (undefined2 *)(lVar9 + 0x10);
      iVar1 = *(int *)(lVar9 + 0x38);
      if (*(undefined2 **)(lVar9 + 0x30) != (undefined2 *)0x0) {
        puVar16 = *(undefined2 **)(lVar9 + 0x30);
      }
      puVar23 = puVar16 + (longlong)iVar1 * 0xe;
      while( true ) {
        if (*(int *)(lVar9 + 0x38) != iVar1) {
          local_128[2] = 0;
          `TCheckedPointerIterator<FStaticMeshSection,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_128 + 2);
        }
        if (puVar16 == puVar23) break;
        local_124 = CONCAT22(local_124._2_2_,*puVar16);
        TArray<short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<short>
                  (&local_80,(short *)&local_124);
        uVar6 = (uint)(byte)((byte)uVar6 | *(byte *)((longlong)puVar16 + 0x15));
        puVar16 = puVar16 + 0xe;
      }
      FVar22 = (ForElementType<FVertexFactoryType_const_*>)((longlong)FVar22 + 8);
    }
    local_a0.SecondaryData = (ForElementType<FVertexFactoryType_const_*>)0x0;
    local_108.Data =
         (ulonglong)(uVar6 & 1) << 0xd | (ulonglong)((uint)local_108.Data & 0x8000) | 0x411c00;
    local_84 = 2;
    local_88 = 0;
    uVar6 = 0;
    local_b8 = FVar22;
    if (local_128[0] == '\0') {
      local_110 = (undefined1  [8])&FLocalVertexFactory::StaticType;
      if ((&local_a0 <= (ForElementType<FVertexFactoryType_const_*> *)local_110) &&
         (uVar6 = 0, local_110 < &local_a0.SecondaryData)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = local_88;
        if (local_88 == local_84) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactoryType_const_*>_>
                            (0x808,&local_a0,&local_84);
        }
      }
      local_88 = uVar6 + 1;
      auVar10 = local_110;
    }
    else {
      local_118 = (undefined1  [8])&FNaniteVertexFactory::StaticType;
      if ((&local_a0 <= (ForElementType<FVertexFactoryType_const_*> *)local_118) &&
         (uVar6 = 0, local_118 < &local_a0.SecondaryData)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = local_88;
        if (local_88 == local_84) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactoryType_const_*>_>
                            (0x808,&local_a0,&local_84);
        }
      }
      local_88 = uVar6 + 1;
      auVar10 = local_118;
    }
    this_00 = local_d8;
    FVar17 = (ForElementType<FVertexFactoryType_const_*>)&local_a0;
    if (local_a0.SecondaryData != (ForElementType<FVertexFactoryType_const_*>)0x0) {
      FVar17 = local_a0.SecondaryData;
    }
    *(undefined1 (*) [8])((longlong)FVar17 + (longlong)(int)uVar6 * 8) = auVar10;
    uVar15 = (ulonglong)local_80.ArrayNum;
    local_124 = local_80.ArrayNum;
    FVar19 = (ForElementType<short>)&local_80;
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<short>)0x0) {
      FVar19 = local_80.AllocatorInstance.SecondaryData;
    }
    FVar18 = (ForElementType<short>)((longlong)FVar19 + uVar15 * 2);
    uVar21 = uVar15;
    local_c8 = FVar18;
    while( true ) {
      if ((int)uVar15 != (int)uVar21) {
        `TCheckedPointerIterator<short,int,0>::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (FVar19 == FVar18) break;
      this_01 = GetMaterial(this_00,(uint)*(ushort *)FVar19);
      uVar6 = local_88;
      if (this_01 != (UMaterialInterface *)0x0) {
        uVar15 = (ulonglong)(int)local_88;
        FVar17 = (ForElementType<FVertexFactoryType_const_*>)&local_a0;
        if (local_a0.SecondaryData != (ForElementType<FVertexFactoryType_const_*>)0x0) {
          FVar17 = local_a0.SecondaryData;
        }
        FVar22 = (ForElementType<FVertexFactoryType_const_*>)((longlong)FVar17 + uVar15 * 8);
        while( true ) {
          if ((uint)uVar15 != uVar6) {
            `TCheckedPointerIterator<FVertexFactoryType_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_128 + 3);
          }
          FVar18 = local_c8;
          if (FVar17 == FVar22) break;
          uVar3 = *(undefined8 *)FVar17;
          bVar5 = IsComponentPSOPrecachingEnabled();
          if (bVar5) {
            local_100._0_8_ = &local_d0;
            local_100._8_4_ = 1;
            local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.ArrayNum = 0;
            local_e8.ArrayMax = 0;
            local_d0 = uVar3;
            UMaterialInterface::PrecachePSOs
                      (this_01,&local_68,
                       (TArrayView<FVertexFactoryType_const_*_const,int> *)local_100,
                       (FPSOPrecacheParams *)&local_108._s_0,Medium,&local_e8);
            if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.AllocatorInstance.Data);
            }
            FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
            if (local_68.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar14 = local_68.AllocatorInstance.SecondaryData;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_68.ArrayNum);
            if (local_68.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
            }
          }
          uVar15 = (ulonglong)local_88;
          FVar17 = (ForElementType<FVertexFactoryType_const_*>)((longlong)FVar17 + 8);
        }
      }
      uVar15 = (ulonglong)(uint)local_80.ArrayNum;
      FVar19 = (ForElementType<short>)((longlong)FVar19 + 2);
      uVar21 = (ulonglong)local_124;
    }
    if (local_a0.SecondaryData != (ForElementType<FVertexFactoryType_const_*>)0x0) {
      FMemory::Free((void *)local_a0.SecondaryData);
    }
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<short>)0x0) {
      FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
    }
  }
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(local_120);
  return;
}

// RecreateNavCollision @ 148750fa0

void __thiscall UStaticMesh::RecreateNavCollision(UStaticMesh *this)

{
  UNavCollisionBase *pUVar1;
  FGCScopeGuard local_res8 [8];
  
  (this->NavCollision).field0_0x0.DebugPtr = (UNavCollisionBase *)0x0;
  if ((this->bHasNavigationData != '\0') &&
     ((this->BodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0)) {
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar1 = UNavCollisionBase::ConstructNew((UObject *)this);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (UNavCollisionBase *)0x0)
       ) {
      (this->NavCollision).field0_0x0.DebugPtr = pUVar1;
      if (pUVar1 == (UNavCollisionBase *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
      (this->NavCollision).field0_0x0.DebugPtr = pUVar1;
    }
    (**(code **)(((this->BodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
    pUVar1 = (this->NavCollision).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,(this->BodySetup).field0_0x0.DebugPtr);
  }
  return;
}

// RegisterMeshAttributes @ 148751060

void __cdecl UStaticMesh::RegisterMeshAttributes(FMeshDescription *param_1)

{
  undefined **local_18;
  FMeshDescription *local_10;
  
  local_18 = &___7FStaticMeshAttributes__6B_;
  local_10 = param_1;
  FStaticMeshAttributes::Register((FStaticMeshAttributes *)&local_18,false);
  return;
}

// ReleaseResources @ 148752c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStaticMesh::ReleaseResources(UStaticMesh *this)

{
  FName FVar1;
  FStaticMeshRenderData *this_00;
  ulong64 uVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory2> FVar7;
  uchar auVar8 [8];
  bool bVar9;
  FName local_res8;
  FStatMessage local_38;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5194,"UStaticMesh::ReleaseResources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x144a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5194);
  }
  uVar2 = UObject::GetResourceSizeBytes((UObject *)this,Exclusive);
  auVar8 = (uchar  [8])(uVar2 & 0xffffffff);
  if ((int)uVar2 != 0) {
    FVar4 = StatPtr_STAT_StaticMeshTotalMemory;
    if (StatPtr_STAT_StaticMeshTotalMemory ==
        (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_StaticMeshTotalMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshTotalMemory,*pFVar3,
                         L"StaticMesh Total Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                         true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar8);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
    FVar7 = StatPtr_STAT_StaticMeshTotalMemory2;
    if (StatPtr_STAT_StaticMeshTotalMemory2 ==
        (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory2>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_StaticMeshTotalMemory2");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory2>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshTotalMemory2,*pFVar3,
                         L"StaticMesh Total Memory","STATGROUP_MemoryStaticMesh","STATCAT_Advanced",
                         L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar7;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar8);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  this_00 = (this->RenderData).Ptr;
  if (this_00 != (FStaticMeshRenderData *)0x0) {
    FStaticMeshRenderData::ReleaseResources(this_00);
    FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  }
  this->bRenderingResourcesInitialized = '\0';
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RemoveSocket @ 148753ff0

void __thiscall UStaticMesh::RemoveSocket(UStaticMesh *this,UStaticMeshSocket *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UStaticMeshSocket *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UStaticMeshSocket *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UStaticMeshSocket *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Sockets).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Sockets).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Sockets).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->Sockets).AllocatorInstance.Data;
    bVar4 = *(UStaticMeshSocket **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UStaticMeshSocket **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->Sockets).ArrayNum = iVar9;
  }
  return;
}

// RemoveUserDataOfClass @ 1487541a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UStaticMesh::RemoveUserDataOfClass(UStaticMesh *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < *(int *)((this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 1)) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < *(int *)((this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 1)) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)
               (lVar9 + (longlong)(this->MaterialsInfoCriticalSection).CriticalSection.Opaque3[0]);
      if (lVar2 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_14875424c;
LAB_14875427a:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_14875427a;
          UE::GC::MarkAsReachable(pUVar7);
LAB_14875424c:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_14875427a;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_14875427a;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)
                     (this->MaterialsInfoCriticalSection).CriticalSection.Opaque3,uVar8,Default);
          return;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < *(int *)((this->MaterialsInfoCriticalSection).CriticalSection.Opaque3 + 1)
            );
  }
  return;
}

// RemoveVertexColors @ 148754410

void __thiscall UStaticMesh::RemoveVertexColors(UStaticMesh *this)

{
  return;
}

// RequestUpdateCachedRenderState @ 148754420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall UStaticMesh::RequestUpdateCachedRenderState(UStaticMesh *this)

{
  uchar uVar1;
  int iVar2;
  FStaticMeshRenderData *pFVar3;
  code *pcVar4;
  bool bVar5;
  FStreamingManagerCollection *this_00;
  FCoarseMeshStreamingManager *this_01;
  
  this_00 = IStreamingManager::Get();
  this_01 = FStreamingManagerCollection::GetNaniteCoarseMeshStreamingManager(this_00);
  pFVar3 = (this->RenderData).Ptr;
  if (((pFVar3 != (FStaticMeshRenderData *)0x0) &&
      (0 < (((pFVar3->NaniteResourcesPtr).Ptr)->PageStreamingStates).ArrayNum)) &&
     (this_01 != (FCoarseMeshStreamingManager *)0x0)) {
    Nanite::FCoarseMeshStreamingManager::RequestUpdateCachedRenderState
              (this_01,(UStreamableRenderAsset *)this);
  }
  bVar5 = IsRayTracingAllowed();
  if ((bVar5) && (this->bSupportRayTracing != '\0')) {
    pFVar3 = (this->RenderData).Ptr;
    if (pFVar3->RayTracingProxy->bUsingRenderingLODs != false) {
      iVar2 = pFVar3->RayTracingGeometryGroupHandle;
      uVar1 = pFVar3->CurrentFirstLODIdx;
      bVar5 = IsInRenderingThread();
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FRayTracingGeometryManager::SetRayTracingGeometryGroupCurrentFirstLODIndex
                ((FRayTracingGeometryManager *)GRayTracingGeometryManager,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,iVar2,uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014875450d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*GRayTracingGeometryManager + 0x50))
              (GRayTracingGeometryManager,((this->RenderData).Ptr)->RayTracingGeometryGroupHandle);
    return;
  }
  return;
}

// SectionHasCollisionEnabled @ 1487560a0

bool __thiscall
UStaticMesh::SectionHasCollisionEnabled
          (UStaticMesh *this,FStaticMeshSection *param_1,int param_2,int param_3)

{
  return param_1->bEnableCollision;
}

// Serialize @ 148758a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStaticMesh::Serialize(UStaticMesh *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  TUniquePtr<FStaticMeshRenderData,TDefaultDelete<FStaticMeshRenderData>_> *pTVar4;
  TSharedPtr<FSpeedTreeWind,1> *pTVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  UBodySetup *pUVar9;
  UNavCollisionBase *pUVar10;
  FStaticMeshRenderData *this_00;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UStaticMesh::Serialize(FArchive_&)_::_2_::FStat_STAT_StaticMesh_Serialize>
  FVar20;
  FStaticMeshRenderData *pFVar21;
  FSpeedTreeWind *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  wchar_t *pwVar22;
  FName FVar23;
  FName FVar24;
  bool bVar25;
  bool bVar26;
  FName local_res8;
  FStripDataFlags local_res18 [4];
  FLLMScope local_res20 [2];
  uint local_168;
  FColor_u_0 local_164;
  FName local_160;
  FName local_158;
  FName local_150;
  FSpeedTreeWind *local_148;
  FSharedReferencer<1> local_140;
  FName local_138;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  LARGE_INTEGER local_110;
  FMemScope local_108;
  FStatMessage local_100;
  FSimpleScopeSecondsStat local_f0;
  FSimpleScopeSecondsStat local_d0;
  FSimpleScopeSecondsStat local_b0;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  undefined8 local_68;
  FGuid local_60 [2];
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name7201,L"StaticMesh/Serialize");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name7201,false,None,Default,true);
  FMemScope::FMemScope(&local_108,&LLMScope_Name7201,true);
  bVar26 = false;
  if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_StaticMesh_Serialize ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UStaticMesh::Serialize(FArchive_&)_::_2_::FStat_STAT_StaticMesh_Serialize>
         )0x0) {
      pFVar19 = ::FName::FName(&local_90,"STAT_StaticMesh_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMesh_Serialize,*pFVar19,
                 L"UStaticMesh::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar20 = StatPtr_STAT_StaticMesh_Serialize;
  if (StatPtr_STAT_StaticMesh_Serialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UStaticMesh::Serialize(FArchive_&)_::_2_::FStat_STAT_StaticMesh_Serialize>
       )0x0) {
    pFVar19 = ::FName::FName(&local_88,"STAT_StaticMesh_Serialize");
    FVar20 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UStaticMesh::Serialize(FArchive_&)_::_2_::FStat_STAT_StaticMesh_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMesh_Serialize,*pFVar19,
                          L"UStaticMesh::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                          L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar20;
  bVar12 = false;
  bVar14 = false;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_148758be1:
    bVar13 = false;
    FVar23 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_164.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_164._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_160.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                   ,0x1c23);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148758be1;
    local_res8 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar13 = true;
  }
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7205,"UStaticMesh::Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x1c25);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7205);
  }
  local_b0.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_StaticMesh_SerializeFull;
  if (StatPtr_STAT_StaticMesh_SerializeFull ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMesh_SerializeFull>)0x0) {
    pFVar19 = ::FName::FName(&local_80,"STAT_StaticMesh_SerializeFull");
    local_b0.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMesh_SerializeFull,*pFVar19,
                    L"UStaticMesh::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                    true,false,NumBits,false,false,MCR_Invalid);
  }
  local_b0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_128);
  dVar15 = __real_408f400000000000;
  local_b0.Scale = __real_408f400000000000;
  local_b0.StartTime =
       (double)local_128.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  cVar16 = (**(code **)(this->_padding_ + 0x10))();
  if ((cVar16 != '\0') && ((param_1->field_0x29 & 8) != 0)) goto LAB_148759422;
  local_f0.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_StaticMesh_SerializeParent;
  if (StatPtr_STAT_StaticMesh_SerializeParent ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMesh_SerializeParent>)0x0) {
    pFVar19 = ::FName::FName(&local_78,"STAT_StaticMesh_SerializeParent");
    local_f0.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMesh_SerializeParent,*pFVar19,
                    L"UStaticMesh_SerializeParent","STATGROUP_LoadTime","STATCAT_Advanced",
                    L"LoadTime",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_f0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_120);
  local_f0.Scale = dVar15;
  local_f0.StartTime =
       (double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  UObject::Serialize((UObject *)this,param_1);
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_f0);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  FStripDataFlags::FStripDataFlags(local_res18,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  if ((*(longlong *)&param_1->field_0x68 != 0) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    bVar26 = true;
  }
  puVar8 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar2) {
    local_168 = 0;
    if ((*puVar1 & 1) == 0) {
      local_168 = (uint)bVar26;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_168);
    if (1 < local_168) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar6 = local_168;
    if ((*puVar1 & 1) != 0) goto LAB_148758ed8;
  }
  else {
    uVar6 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar2;
LAB_148758ed8:
    bVar26 = uVar6 != 0;
  }
  local_158 = (FName)(this->BodySetup).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_158);
  local_res8 = local_158;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_158 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158);
  }
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)local_res8;
  if (0xd7 < *(int *)&param_1->field_0x40) {
    local_150 = (FName)(this->NavCollision).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_150);
    local_res8 = local_150;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_150);
    }
    (this->NavCollision).field0_0x0.DebugPtr = (UNavCollisionBase *)local_res8;
  }
  if ((((*puVar1 & 1) != 0) &&
      (iVar18 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID),
      iVar18 < 1)) && (pUVar9 = (this->BodySetup).field0_0x0.DebugPtr, pUVar9 != (UBodySetup *)0x0))
  {
    FBodyInstance::SetCollisionProfileName
              (&pUVar9->DefaultInstance,UCollisionProfile::BlockAll_ProfileName);
  }
  FVar24 = (FName)&param_1->field_0x2b;
  if ((param_1->field_0x2b & 4) != 0) {
    pUVar9 = (this->BodySetup).field0_0x0.DebugPtr;
    if (pUVar9 != (UBodySetup *)0x0) {
      local_res8 = FVar24;
      (**(code **)(pUVar9->_padding_ + 200))(pUVar9,param_1);
    }
    local_res8 = (FName)&param_1->field_0x2b;
    pUVar10 = (this->NavCollision).field0_0x0.DebugPtr;
    if (pUVar10 != (UNavCollisionBase *)0x0) {
      (**(code **)(pUVar10->_padding_ + 200))(pUVar10,param_1);
      FVar24 = local_res8;
    }
  }
  local_60[0] = `public:_struct_FGuid_const&___ptr64___cdecl_UStaticMesh::GetLightingGuid(void)const___ptr64'
                ::__l2::NullGuid;
  ::operator<<(param_1,local_60);
  TArrayPrivateFriend::Serialize<TObjectPtr<UStaticMeshSocket>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Sockets);
  if (((bVar26 != false) &&
      (bVar17 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
      !bVar17)) && (((*(byte *)FVar24 & 4) == 0 && ((param_1->field_0x28 & 1) != 0)))) {
    local_d0.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_StaticMesh_RenderData;
    if (StatPtr_STAT_StaticMesh_RenderData ==
        (FThreadSafeStaticStat<FStat_STAT_StaticMesh_RenderData>)0x0) {
      pFVar19 = ::FName::FName(&local_70,"STAT_StaticMesh_RenderData");
      local_d0.StatId.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMesh_RenderData,*pFVar19,
                      L"UStaticMesh_RenderDataLoad","STATGROUP_LoadTime","STATCAT_Advanced",
                      L"LoadTime",true,false,NumBits,false,false,MCR_Invalid);
    }
    local_d0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
    QueryPerformanceCounter(&local_118);
    local_d0.Scale = dVar15;
    local_d0.StartTime =
         (double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    pFVar21 = ::operator_new(0x98);
    if (pFVar21 == (FStaticMeshRenderData *)0x0) {
      pFVar21 = (FStaticMeshRenderData *)0x0;
    }
    else {
      pFVar21 = FStaticMeshRenderData::FStaticMeshRenderData(pFVar21);
    }
    FStaticMeshRenderData::Serialize(pFVar21,param_1,this,bVar26);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar22 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar22,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
        && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
            == false)) &&
       (pTVar4 = &this->RenderData,
       pTVar4 != (TUniquePtr<FStaticMeshRenderData,TDefaultDelete<FStaticMeshRenderData>_> *)
                 &local_68)) {
      this_00 = pTVar4->Ptr;
      pTVar4->Ptr = pFVar21;
      if (this_00 != (FStaticMeshRenderData *)0x0) {
        FStaticMeshRenderData::~FStaticMeshRenderData(this_00);
        pFVar21 = this_00;
LAB_1487591be:
        ::operator_delete(pFVar21,0x98);
      }
    }
    else if (pFVar21 != (FStaticMeshRenderData *)0x0) {
      FStaticMeshRenderData::~FStaticMeshRenderData(pFVar21);
      goto LAB_1487591be;
    }
    FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_d0);
  }
  if (0xea < *(int *)&param_1->field_0x40) {
    pTVar5 = &this->SpeedTreeWind;
    local_res8.ComparisonIndex.Value._0_1_ = pTVar5->Object != (FSpeedTreeWind *)0x0;
    ::operator<<(param_1,(bool *)&local_res8);
    if ((char)local_res8.ComparisonIndex.Value != '\0') {
      if (pTVar5->Object == (FSpeedTreeWind *)0x0) {
        this_01 = ::operator_new(0x890);
        if (this_01 == (FSpeedTreeWind *)0x0) {
          this_01 = (FSpeedTreeWind *)0x0;
        }
        else {
          FSpeedTreeWind::SParams::SParams(&this_01->m_sParams);
          this_01->m_bGustingEnabled = true;
          this_01->m_fStrength = 0.0;
          this_01->m_fLastTime = -1.0;
          this_01->m_fGustAtStart = 1.0;
          this_01->m_fElapsedTime = 0.0;
          this_01->m_fGust = 0.0;
          this_01->m_fGustTarget = 0.0;
          this_01->m_fGustRiseTarget = 0.0;
          this_01->m_fGustFallTarget = 0.0;
          this_01->m_fGustStart = 0.0;
          this_01->m_fGustFallStart = 0.0;
          this_01->m_fStrengthTarget = 0.0;
          this_01->m_fStrengthChangeStartTime = 0.0;
          this_01->m_fStrengthChangeEndTime = 0.0;
          this_01->m_fStrengthAtStart = 0.0;
          this_01->m_fDirectionChangeStartTime = 0.0;
          this_01->m_fDirectionChangeEndTime = 0.0;
          this_01->m_fCombinedStrength = 0.0;
          this_01->m_afOscillationTimes[0] = 0.0;
          *(undefined8 *)(this_01->m_afBranchWindAnchor + 2) = 0;
          this_01->m_bNeedsReload = false;
          this_01->m_afOscillationTimes[1] = 0.0;
          this_01->m_afOscillationTimes[2] = 0.0;
          this_01->m_afOscillationTimes[3] = 0.0;
          this_01->m_afOscillationTimes[4] = 0.0;
          this_01->m_afOscillationTimes[5] = 0.0;
          this_01->m_afOscillationTimes[6] = 0.0;
          this_01->m_afOscillationTimes[7] = 0.0;
          this_01->m_afOscillationTimes[8] = 0.0;
          *(undefined8 *)(this_01->m_afOscillationTimes + 9) = 0;
          this_01->m_abOptions[4] = false;
          this_01->m_abOptions[5] = false;
          this_01->m_abOptions[6] = false;
          this_01->m_abOptions[7] = false;
          this_01->m_abOptions[8] = false;
          this_01->m_abOptions[9] = false;
          this_01->m_abOptions[10] = false;
          this_01->m_abOptions[0xb] = false;
          this_01->m_abOptions[0xc] = false;
          this_01->m_abOptions[0xd] = false;
          this_01->m_abOptions[0xe] = false;
          this_01->m_abOptions[0xf] = false;
          this_01->m_abOptions[0x10] = false;
          this_01->m_abOptions[0x11] = false;
          this_01->m_abOptions[0x12] = false;
          this_01->m_abOptions[0x13] = false;
          this_01->m_abOptions[0x14] = false;
          this_01->m_abOptions[0x15] = false;
          this_01->m_abOptions[0x16] = false;
          this_01->m_abOptions[0x17] = false;
          this_01->m_abOptions[0x18] = false;
          this_01->m_abOptions[0x19] = false;
          this_01->m_abOptions[0x1a] = false;
          this_01->m_abOptions[0x1b] = false;
          this_01->m_afDirection[0] = 1.0;
          this_01->m_afDirection[1] = 0.0;
          this_01->m_afDirectionMidTarget[0] = 1.0;
          this_01->m_afDirectionMidTarget[1] = 0.0;
          this_01->m_afDirectionAtStart[0] = 1.0;
          this_01->m_afDirectionAtStart[1] = 0.0;
          this_01->m_afDirectionTarget[0] = 1.0;
          this_01->m_afDirectionTarget[1] = 0.0;
          this_01->m_afDirection[2] = 0.0;
          this_01->m_afDirectionMidTarget[2] = 0.0;
          *(undefined8 *)(this_01->m_afDirectionAtStart + 2) = 0;
          this_01->m_afDirectionTarget[2] = 0.0;
          this_01->m_afBranchWindAnchor[0] = 0.0;
          this_01->m_afBranchWindAnchor[1] = 0.0;
          this_01->m_afRollingOffset[1] = 0.0;
        }
        local_148 = this_01;
        local_140.ReferenceController = ::operator_new(0x18);
        if (local_140.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          (local_140.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          (local_140.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VFSpeedTreeWind__U__DefaultDeleter_VFSpeedTreeWind___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          (local_140.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          local_140.ReferenceController[1]._padding_ = (longlong)this_01;
        }
        if (pTVar5 != (TSharedPtr<FSpeedTreeWind,1> *)&local_148) {
          pTVar5->Object = this_01;
          local_148 = (FSpeedTreeWind *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->SpeedTreeWind).SharedReferenceCount,&local_140);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_140.ReferenceController);
        if (((this->SpeedTreeWind).Object == (FSpeedTreeWind *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar26)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      ::operator<<(param_1,(this->SpeedTreeWind).Object);
    }
  }
  TArrayPrivateFriend::Serialize<FStaticMaterial,TSizedDefaultAllocator<32>_>
            (param_1,&this->StaticMaterials);
  UpdateStaticMaterialsInfoCache(this,&this->StaticMaterials);
LAB_148759422:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_b0);
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar13) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_100.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_100.StatData.Pad[4] = '\0';
      local_100.StatData.Pad[5] = '\0';
      local_100.StatData.Pad[6] = '\0';
      local_100.StatData.Pad[7] = '\0';
      local_100.StatData.Pad[0] = local_110.s.LowPart._0_1_;
      local_100.StatData.Pad[1] = local_110.s.LowPart._1_1_;
      local_100.StatData.Pad[2] = local_110.s.LowPart._2_1_;
      local_100.StatData.Pad[3] = local_110.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_100);
      piVar3 = &this_02->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_108);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// Serialize @ 148759650

void __thiscall UStaticMesh::Serialize(UStaticMesh *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetMinLODIdx @ 14875b0c0

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

void __thiscall UStaticMesh::SetMinLODIdx(UStaticMesh *this,int param_1)

{
  FPerQualityLevelInt local_78;
  
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseStaticMeshMinLODPerQualityLevels != false)) {
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78.PerQuality._0_8_ = 0;
    local_78.PerQuality._8_8_ = 0;
    local_78.PerQuality._32_8_ = 0;
    local_78.PerQuality._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_78.PerQuality._48_8_ = _UNK_150631d98;
    local_78.PerQuality._64_8_ = 0;
    local_78.PerQuality._72_4_ = 0;
    local_78.Default = param_1;
    SetQualityLevelMinLOD(this,&local_78);
    return;
  }
  (this->MinLOD).Default = param_1;
  return;
}

// SetNavCollision @ 14875b1b0

void __thiscall UStaticMesh::SetNavCollision(UStaticMesh *this,UNavCollisionBase *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNavCollisionBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->NavCollision).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->NavCollision).field0_0x0.DebugPtr = param_1;
  return;
}

// SetQualityLevelMinLOD @ 14875b580

void __thiscall UStaticMesh::SetQualityLevelMinLOD(UStaticMesh *this,FPerQualityLevelInt *param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar1;
  undefined1 *puVar2;
  undefined1 *_Dst;
  int iVar3;
  void *pvVar4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  
  ::FString::operator=((FString *)&this->MinQualityLevelLOD,(FString *)param_1);
  pTVar1 = &param_1->PerQuality;
  (this->MinQualityLevelLOD).Default = param_1->Default;
  pTVar5 = &(this->MinQualityLevelLOD).PerQuality;
  if (pTVar5 != pTVar1) {
    if (*(void **)pTVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar5);
    }
    puVar2 = &(param_1->PerQuality).field_0x10;
    *(undefined8 *)pTVar5 = *(undefined8 *)pTVar1;
    _Dst = &(this->MinQualityLevelLOD).PerQuality.field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 =
         *(undefined4 *)&(param_1->PerQuality).field_0x8;
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0xc =
         *(undefined4 *)&(param_1->PerQuality).field_0xc;
    *(undefined8 *)&(param_1->PerQuality).field_0x8 = 0;
    if (_Dst != puVar2) {
      if (*(longlong *)&(param_1->PerQuality).field_0x20 == 0) {
        memmove(_Dst,puVar2,0x10);
      }
      pvVar4 = *(void **)&(this->MinQualityLevelLOD).PerQuality.field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x20 =
           *(undefined8 *)&(param_1->PerQuality).field_0x20;
      *(undefined8 *)&(param_1->PerQuality).field_0x20 = 0;
      *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x28 =
           *(undefined4 *)&(param_1->PerQuality).field_0x28;
      *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x2c =
           *(undefined4 *)&(param_1->PerQuality).field_0x2c;
      *(undefined8 *)&(param_1->PerQuality).field_0x28 = 0;
    }
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x30 =
         *(undefined4 *)&(param_1->PerQuality).field_0x30;
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x34 =
         *(undefined4 *)&(param_1->PerQuality).field_0x34;
    *(undefined4 *)&(param_1->PerQuality).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PerQuality).field_0x34 = 0;
    if (*(longlong *)&(param_1->PerQuality).field_0x40 == 0) {
      *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x38 =
           *(undefined4 *)&(param_1->PerQuality).field_0x38;
    }
    pvVar4 = *(void **)&(this->MinQualityLevelLOD).PerQuality.field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x40 =
         *(undefined8 *)&(param_1->PerQuality).field_0x40;
    *(undefined8 *)&(param_1->PerQuality).field_0x40 = 0;
    *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 =
         *(undefined4 *)&(param_1->PerQuality).field_0x48;
    *(undefined4 *)&(param_1->PerQuality).field_0x48 = 0;
  }
  *(undefined4 *)&(param_1->PerQuality).field_0x48 = 0;
  pvVar4 = *(void **)&(param_1->PerQuality).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  puVar2 = &(param_1->PerQuality).field_0xc;
  *(undefined4 *)&(param_1->PerQuality).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pTVar1,0,(int *)puVar2);
  }
  *(undefined4 *)&(param_1->PerQuality).field_0x34 = 0;
  *(undefined4 *)&(param_1->PerQuality).field_0x30 = 0xffffffff;
  iVar3 = *(int *)&(param_1->PerQuality).field_0x2c;
  *(undefined4 *)&(param_1->PerQuality).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(param_1->PerQuality).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_1->PerQuality).field_0x10,0);
  }
  pvVar4 = *(void **)&(param_1->PerQuality).field_0x20;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (*(void **)pTVar1 != (void *)0x0) {
    FMemory::Free(*(void **)pTVar1);
  }
  if ((void *)param_1->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_1->_padding_);
    return;
  }
  return;
}

// SetRenderData @ 14875b750

void __thiscall
UStaticMesh::SetRenderData
          (UStaticMesh *this,
          TUniquePtr<FStaticMeshRenderData,TDefaultDelete<FStaticMeshRenderData>_> *param_1)

{
  FStaticMeshRenderData *this_00;
  TUniquePtr<FStaticMeshRenderData,TDefaultDelete<FStaticMeshRenderData>_> *pTVar1;
  
  pTVar1 = &this->RenderData;
  if (pTVar1 != param_1) {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = param_1->Ptr;
    param_1->Ptr = (FStaticMeshRenderData *)0x0;
    if (this_00 != (FStaticMeshRenderData *)0x0) {
      FStaticMeshRenderData::~FStaticMeshRenderData(this_00);
      ::operator_delete(this_00,0x98);
      return;
    }
  }
  return;
}

// SetVertexColorData @ 14875b870

void __thiscall
UStaticMesh::SetVertexColorData
          (UStaticMesh *this,
          TMap<UE::Math::TVector<float>,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,FColor,0>_>
          *param_1)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9563,"UStaticMesh::SetVertexColorData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x255b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9563);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// StaticRegisterNativesUStaticMesh @ 14875d1a0

void __cdecl UStaticMesh::StaticRegisterNativesUStaticMesh(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1a;
  local_18.DataPtr = Z_Construct_UClass_UStaticMesh_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StreamIn @ 14875d220

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UStaticMesh::StreamIn(UStaticMesh *this,int param_1,bool param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FStaticMeshStreamIn_IO *pFVar6;
  FStaticMeshStreamIn_IO *pFVar7;
  byte bVar8;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x235a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar4 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if ((((!bVar4) && (bVar1 = (byte)this->_padding_, (bVar1 & 1) != 0)) &&
      (bVar2 = *(byte *)((longlong)&this->_padding_ + 5), (int)(uint)bVar2 < param_1)) &&
     ((bVar8 = *(byte *)((longlong)&this->_padding_ + 3), bVar2 < bVar8 &&
      (*(byte *)((longlong)&this->_padding_ + 6) == bVar2)))) {
    if (param_1 < (int)(uint)bVar8) {
      bVar8 = (byte)param_1;
    }
    *(byte *)&this->_padding_ = bVar1 | 8;
    *(byte *)((longlong)&this->_padding_ + 6) = bVar8;
    bVar4 = GRHIGlobals.SupportsAsyncTextureCreation;
    pFVar6 = ::operator_new(0x750);
    pFVar7 = (FStaticMeshStreamIn_IO *)0x0;
    if (pFVar6 != (FStaticMeshStreamIn_IO *)0x0) {
      pFVar7 = FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO
                         (pFVar6,this,param_2,(bVar4 != false) + TT_Render);
    }
    pFVar6 = (FStaticMeshStreamIn_IO *)this->_padding_;
    if (pFVar6 != pFVar7) {
      this->_padding_ = (longlong)pFVar7;
      if (pFVar7 != (FStaticMeshStreamIn_IO *)0x0) {
        LOCK();
        ((FThreadSafeCounter *)&pFVar7->field_0x64)->Counter =
             ((FThreadSafeCounter *)&pFVar7->field_0x64)->Counter + 1;
        UNLOCK();
      }
      if (pFVar6 != (FStaticMeshStreamIn_IO *)0x0) {
        FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar6);
      }
    }
    return *(char *)(this->_padding_ + 0x5c) == '\0';
  }
  return false;
}

// StreamOut @ 14875d360

bool __thiscall UStaticMesh::StreamOut(UStaticMesh *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FStaticMeshStreamOut *pFVar6;
  FStaticMeshStreamOut *pFVar7;
  byte bVar8;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x234e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar4 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if ((((!bVar4) && (bVar1 = (byte)this->_padding_, (bVar1 & 1) != 0)) &&
      (bVar2 = *(byte *)((longlong)&this->_padding_ + 5), param_1 < (int)(uint)bVar2)) &&
     ((bVar8 = *(byte *)((longlong)&this->_padding_ + 1), bVar8 < bVar2 &&
      (*(byte *)((longlong)&this->_padding_ + 6) == bVar2)))) {
    if ((int)(uint)bVar8 < param_1) {
      bVar8 = (byte)param_1;
    }
    *(byte *)&this->_padding_ = bVar1 | 8;
    *(byte *)((longlong)&this->_padding_ + 6) = bVar8;
    pFVar6 = ::operator_new(0xf0);
    pFVar7 = (FStaticMeshStreamOut *)0x0;
    if (pFVar6 != (FStaticMeshStreamOut *)0x0) {
      pFVar7 = FStaticMeshStreamOut::FStaticMeshStreamOut(pFVar6,this,this->bAllowCPUAccess);
    }
    pFVar6 = (FStaticMeshStreamOut *)this->_padding_;
    if (pFVar6 != pFVar7) {
      this->_padding_ = (longlong)pFVar7;
      if (pFVar7 != (FStaticMeshStreamOut *)0x0) {
        LOCK();
        ((FThreadSafeCounter *)((longlong)&pFVar7->_padding_ + 4))->Counter =
             ((FThreadSafeCounter *)((longlong)&pFVar7->_padding_ + 4))->Counter + 1;
        UNLOCK();
      }
      if (pFVar6 != (FStaticMeshStreamOut *)0x0) {
        FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar6);
      }
    }
    return *(char *)(this->_padding_ + 0x5c) == '\0';
  }
  return false;
}

// UpdateStaticMaterialsInfoCache @ 14875e7e0

/* WARNING: Removing unreachable block (ram,0x00014875eb3b) */

void __thiscall
UStaticMesh::UpdateStaticMaterialsInfoCache
          (UStaticMesh *this,TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FStaticMaterialMinimalInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FStaticMaterialMinimalInfo *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FString *pFVar12;
  uint uVar13;
  FScriptContainerElement *_Src;
  uint uVar14;
  longlong local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  FString local_50;
  
  bVar9 = false;
  bVar7 = false;
  lpCriticalSection = &this->MaterialsInfoCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar2 = &this->StaticMaterialsInfoCache;
  piVar1 = &(this->StaticMaterialsInfoCache).ArrayMax;
  pFVar3 = (FStaticMaterialMinimalInfo *)(pTVar2->AllocatorInstance).Data;
  iVar11 = (this->StaticMaterialsInfoCache).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FStaticMaterialMinimalInfo,int>(pFVar3,iVar11);
    (this->StaticMaterialsInfoCache).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FStaticMaterialMinimalInfo,int>(pFVar3,iVar11);
    (this->StaticMaterialsInfoCache).ArrayNum = 0;
  }
  iVar11 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar11) {
    local_res8 = 0;
    do {
      uVar13 = ~uVar14 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar14 < iVar11) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar10 = uVar13;
      }
      uVar4 = *(undefined8 *)((param_1->AllocatorInstance).Data + local_res8 + 8);
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)((param_1->AllocatorInstance).Data + local_res8) == 0) {
        bVar7 = true;
        local_78.Data.ArrayNum = 0;
        _Src = (FScriptContainerElement *)0x0;
        pFVar12 = &local_78;
      }
      else {
        uVar10 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar9 = true;
        pFVar12 = UObjectBaseUtility::GetPathName
                            (*(UObjectBaseUtility **)
                              ((param_1->AllocatorInstance).Data + local_res8),&local_68,
                             (UObject *)0x0);
        _Src = (pFVar12->Data).AllocatorInstance.Data;
      }
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar11 = (pFVar12->Data).ArrayNum;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
      if ((bVar7) &&
         (bVar7 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((bVar9) &&
         (bVar9 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = iVar11;
      if (iVar11 == 0) {
        local_88.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,0,(ForAnyElementType *)&local_88,iVar11,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,_Src,(longlong)iVar11 * 2);
      }
      local_58 = uVar4;
      ::FString::FString(&local_50,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      piVar1 = &(this->StaticMaterialsInfoCache).ArrayMax;
      if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 0x18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->StaticMaterialsInfoCache).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->StaticMaterialsInfoCache).ArrayNum = iVar11 + 1;
      pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x18;
      *(undefined8 *)pFVar5 = local_58;
      *(undefined8 *)(pFVar5 + 8) = 0;
      *(FScriptContainerElement **)(pFVar5 + 8) = local_50.Data.AllocatorInstance.Data;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar5 + 0x10) = local_50.Data.ArrayNum;
      *(int *)(pFVar5 + 0x14) = local_50.Data.ArrayMax;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src);
      }
      uVar14 = uVar14 + 1;
      iVar11 = param_1->ArrayNum;
      local_res8 = local_res8 + 0x38;
    } while ((int)uVar14 < iVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00014875eb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UpdateUVChannelData @ 14875ebb0

void __thiscall UStaticMesh::UpdateUVChannelData(UStaticMesh *this,bool param_1)

{
  return;
}

// WantsNegXTriMesh @ 14875ee10

bool __thiscall UStaticMesh::WantsNegXTriMesh(UStaticMesh *this)

{
  return true;
}

// _getUObject @ 1487601b0

UObject * __thiscall UStaticMesh::_getUObject(UStaticMesh *this)

{
  return (UObject *)&this[-1].LightMapCoordinateIndex;
}

// _getUObject`adjustor{8}' @ 1487601c0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UStaticMesh::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UStaticMesh::_getUObject_adjustor_8__(UStaticMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UStaticMesh *)&this[-1].NavCollision);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 1487601d0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UStaticMesh::_getUObject`adjustor{16}'
   (void)const __ptr64 */

UObject * __thiscall UStaticMesh::_getUObject_adjustor_16__(UStaticMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UStaticMesh *)&this[-1].AssetUserData.ArrayNum);
  return (UObject *)pUVar1;
}

// execAddMaterial @ 1487601f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UStaticMesh::execAddMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  UObject *pUVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  UObject *local_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  undefined2 uStack_56;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_70 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pUVar5 = local_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_70 == (UObject *)0x0) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    puVar11 = &param_1[9].field_0x8;
    lVar10 = *(longlong *)&local_70->field_0x18;
    iVar6 = *(int *)&param_1[9].field_0x10;
    lVar7 = *(longlong *)puVar11;
    lVar8 = lVar7 + (longlong)iVar6 * 0x38;
    local_60 = lVar10;
    while( true ) {
      if (*(int *)&param_1[9].field_0x10 != iVar6) {
        `TCheckedPointerIterator<FStaticMaterial,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      if (lVar7 == lVar8) break;
      iVar9 = (int)lVar10;
      if ((int)*(undefined8 *)(lVar7 + 8) == iVar9) {
        iStack_64 = (int)((ulonglong)*(undefined8 *)(lVar7 + 8) >> 0x20) + 1;
        if (iStack_64 < local_60._4_4_) {
          iStack_64 = local_60._4_4_;
        }
        lVar10 = CONCAT44(iStack_64,iVar9);
        local_68 = iVar9;
        local_60 = lVar10;
      }
      lVar7 = lVar7 + 0x38;
    }
    iVar6 = *(int *)&param_1[9].field_0x10;
    if (iVar6 == *(int *)&param_1[9].field_0x14) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,(ForAnyElementType *)puVar11,(int *)&param_1[9].field_0x14);
    }
    *(int *)&param_1[9].field_0x10 = iVar6 + 1;
    lVar7 = *(longlong *)puVar11;
    lVar8 = (longlong)iVar6 * 0x38;
    *(UObject **)(lVar7 + lVar8) = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(longlong *)(lVar7 + lVar8 + 8) = lVar10;
    *(undefined8 *)(lVar7 + lVar8 + 0x10) = 0;
    puVar1 = (undefined8 *)(lVar7 + lVar8 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar7 + lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar7 + lVar8 + 0x30) = 0;
    if ((*(longlong *)(lVar7 + lVar8) != 0) && (lVar10 == 0)) {
      *(undefined8 *)(lVar7 + lVar8 + 8) = *(undefined8 *)(*(longlong *)(lVar7 + lVar8) + 0x18);
    }
    uVar4 = _UNK_15076b1fc;
    uVar3 = CONCAT44(_UNK_15076b1f8,_UNK_15076b1f4);
    puVar1 = (undefined8 *)(lVar7 + lVar8 + 0x18);
    *puVar1 = CONCAT44(___xmm_3f8000003f8000003f8000003f800000,CONCAT22(uStack_56,1));
    puVar1[1] = uVar3;
    *(undefined4 *)(lVar7 + lVar8 + 0x28) = uVar4;
    *(longlong *)param_3 = lVar10;
  }
  return;
}

// execAddSocket @ 1487603d0

void __cdecl UStaticMesh::execAddSocket(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UStaticMeshSocket *local_res8;
  TObjectPtr<UStaticMeshSocket>_u_0 local_res10;
  
  local_res8 = (UStaticMeshSocket *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10.DebugPtr = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8 != (UStaticMeshSocket *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  TArray<TObjectPtr<UStaticMeshSocket>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UStaticMeshSocket>_>
            ((TArray<TObjectPtr<UStaticMeshSocket>,TSizedDefaultAllocator<32>_> *)
             &param_1[0xc].field_0x20,(TObjectPtr<UStaticMeshSocket> *)&local_res10.ObjectPtr);
  return;
}

// execBuildFromStaticMeshDescriptions @ 148760480

void __cdecl
UStaticMesh::execBuildFromStaticMeshDescriptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  FProperty *pFVar4;
  longlong lVar5;
  void **ppvVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  int local_res20 [2];
  int local_78 [2];
  TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> local_70;
  void *local_60;
  undefined8 local_58;
  FBuildMeshDescriptionsParams local_50;
  
  local_60 = (void *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20[0] = 0;
  ppvVar6 = &local_60;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar8 = local_res20[0] != 0;
  local_78[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  bVar9 = local_78[0] != 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(uint *)(ppvVar6 + 1);
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&local_70.AllocatorInstance,0,&local_70.ArrayMax);
    }
    plVar7 = *ppvVar6;
    iVar3 = *(int *)(ppvVar6 + 1);
    plVar1 = plVar7 + iVar3;
    while( true ) {
      if (*(int *)(ppvVar6 + 1) != iVar3) {
        `TCheckedPointerIterator<UStaticMeshDescription_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (plVar7 == plVar1) break;
      lVar5 = *plVar7;
      if (local_70.ArrayNum == local_70.ArrayMax) {
        local_70.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      plVar7 = plVar7 + 1;
      *(longlong *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 8) =
           lVar5 + 0x28;
      local_70.ArrayNum = local_70.ArrayNum + 1;
    }
    local_50.bMarkPackageDirty = true;
    local_50.bUseHashAsGuid = false;
    local_50.PerLODOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.PerLODOverrides.ArrayNum = 0;
    local_50.PerLODOverrides.ArrayMax = 0;
    local_50.bCommitMeshDescription = true;
    local_50.bAllowCpuAccess = false;
    local_50.bBuildSimpleCollision = bVar8;
    local_50.bFastBuild = bVar9;
    BuildFromMeshDescriptions((UStaticMesh *)param_1,&local_70,&local_50);
    if (local_50.PerLODOverrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.PerLODOverrides.AllocatorInstance.Data);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// execCreateStaticMeshDescription @ 1487606c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UStaticMesh::execCreateStaticMeshDescription(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  UPackage *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = (UPackage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8._8_8_ = local_b8;
  if (local_b8 == (UPackage *)0x0) {
    local_a8._8_8_ = GetTransientPackage();
  }
  local_b0 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)local_a8._8_8_,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UStaticMeshDescription_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3);
  *(UObject **)param_3 = pUVar3;
  return;
}

// execFindSocket @ 148760810

void __cdecl UStaticMesh::execFindSocket(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_res10;
  
  uVar8 = 0;
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar9 = uVar8;
    if (0 < *(int *)(param_1 + 0xd)) {
      do {
        uVar7 = (uint)uVar8;
        uVar6 = 0;
        if ((int)uVar7 < *(int *)(param_1 + 0xd)) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)(uVar9 + *(longlong *)&param_1[0xc].field_0x20);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) == lVar4)) {
          *(longlong *)param_3 = lVar2;
          return;
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 8;
      } while ((int)(uVar7 + 1) < *(int *)(param_1 + 0xd));
    }
    *(undefined8 *)param_3 = 0;
  }
  return;
}

// execGetBoundingBox @ 148760950

void __cdecl UStaticMesh::execGetBoundingBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined7 uStack_47;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar1 = *(double *)(param_1 + 0xf);
  dVar2 = *(double *)&param_1[0xf].field_0x8;
  dVar3 = *(double *)&param_1[0xf].field_0x18;
  dVar7 = *(double *)&param_1[0xe].field_0x20 + *(double *)&param_1[0xf].field_0x10;
  dVar4 = *(double *)&param_1[0xf].field_0x20;
  dVar8 = dVar2 + dVar4;
  dVar10 = dVar1 - dVar3;
  auVar6._8_4_ = SUB84(dVar10,0);
  auVar6._0_8_ = *(double *)&param_1[0xe].field_0x20 - *(double *)&param_1[0xf].field_0x10;
  auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar6;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar2 - dVar4;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x10) = auVar5;
  auVar9._8_4_ = SUB84(dVar8,0);
  auVar9._0_8_ = dVar1 + dVar3;
  auVar9._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar9;
  *(ulonglong *)((longlong)param_3 + 0x30) = CONCAT71(uStack_47,1);
  return;
}

// execGetBounds @ 148760a20

void __cdecl UStaticMesh::execGetBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)(param_1 + 0xf);
  uVar3 = *(undefined8 *)&param_1[0xf].field_0x8;
  uVar4 = *(undefined8 *)&param_1[0xf].field_0x10;
  uVar5 = *(undefined8 *)&param_1[0xf].field_0x18;
  uVar6 = *(undefined8 *)&param_1[0xf].field_0x20;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xe].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar1;
  return;
}

// execGetMaterial @ 148761120

void __cdecl UStaticMesh::execGetMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[9].field_0x10 <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[9].field_0x10) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)param_3 = *(undefined8 *)(lVar4 * 0x38 + *(longlong *)&param_1[9].field_0x8);
  }
  return;
}

// execGetMaterialIndex @ 148761220

void __cdecl UStaticMesh::execGetMaterialIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = 0;
  if (0 < *(int *)&param_1[9].field_0x10) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&param_1[9].field_0x10) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)(*(longlong *)&param_1[9].field_0x8 + 8 + lVar7) == lVar3) {
        *(uint *)param_3 = uVar6;
        return;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x38;
    } while ((int)uVar6 < *(int *)&param_1[9].field_0x10);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetMinLODForQualityLevels @ 148761340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UStaticMesh::execGetMinLODForQualityLevels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_a8 [32];
  undefined4 local_78 [4];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_58.MaxBits = 0x80;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetMinimumLODForPlatform @ 1487614d0

void __cdecl
UStaticMesh::execGetMinimumLODForPlatform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetMinimumLODForPlatforms @ 148761560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UStaticMesh::execGetMinimumLODForPlatforms(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_98 [32];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_58.MaxBits = 0x80;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetMinimumLODForQualityLevel @ 1487616b0

void __cdecl
UStaticMesh::execGetMinimumLODForQualityLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetMinimumLODForQualityLevels @ 148761740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UStaticMesh::execGetMinimumLODForQualityLevels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_98 [32];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_58.MaxBits = 0x80;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetNumLODs @ 1487618d0

void __cdecl UStaticMesh::execGetNumLODs(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[6].field_0x8 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[6].field_0x8 + 8);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumSections @ 148761950

void __cdecl UStaticMesh::execGetNumSections(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[6].field_0x8;
  lVar6 = (longlong)(int)local_res8[0];
  if (((plVar2 == (longlong *)0x0) || ((int)local_res8[0] < 0)) ||
     ((int)plVar2[1] <= (int)local_res8[0])) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  uVar5 = 0;
  if ((int)local_res8[0] < (int)plVar2[1]) {
    uVar5 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)(*plVar2 + lVar6 * 8) + 0x38);
  return;
}

// execGetNumTriangles @ 148761a50

void __cdecl UStaticMesh::execGetNumTriangles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[6].field_0x8;
  lVar7 = (longlong)(int)local_res8[0];
  if (((plVar2 == (longlong *)0x0) || ((int)local_res8[0] < 0)) ||
     ((int)plVar2[1] <= (int)local_res8[0])) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  uVar6 = 0;
  if ((int)local_res8[0] < (int)plVar2[1]) {
    uVar6 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = FStaticMeshLODResources::GetNumTriangles
                    (*(FStaticMeshLODResources **)(*plVar2 + lVar7 * 8));
  *(int *)param_3 = iVar5;
  return;
}

// execGetNumVertices @ 148761b50

void __cdecl UStaticMesh::execGetNumVertices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[6].field_0x8;
  lVar6 = (longlong)(int)local_res8[0];
  if (((plVar2 == (longlong *)0x0) || ((int)local_res8[0] < 0)) ||
     ((int)plVar2[1] <= (int)local_res8[0])) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  uVar5 = 0;
  if ((int)local_res8[0] < (int)plVar2[1]) {
    uVar5 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)(*plVar2 + lVar6 * 8) + 0x17c);
  return;
}

// execGetSocketsByTag @ 148761d10

void __cdecl UStaticMesh::execGetSocketsByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UStaticMeshSocket_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FString local_28;
  TArray<UStaticMeshSocket_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSocketsByTag((UStaticMesh *)param_1,&local_18,&local_28);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStaticMaterials @ 148761e00

void __cdecl UStaticMesh::execGetStaticMaterials(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *)&param_1[9].field_0x8);
  return;
}

// execGetStaticMeshDescription @ 148761e30

void __cdecl
UStaticMesh::execGetStaticMeshDescription(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  return;
}

// execRemoveSocket @ 148761ef0

void __cdecl UStaticMesh::execRemoveSocket(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UObject *local_res8;
  UObject *local_38 [2];
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  if (((*(UObject ***)&param_1[0xc].field_0x20 <= local_38) &&
      (local_38 < *(UObject ***)&param_1[0xc].field_0x20 + *(int *)&param_1[0xd].field_0x4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = *(int *)(param_1 + 0xd);
  if (iVar1 != 0) {
    iVar10 = 0;
    plVar3 = *(longlong **)&param_1[0xc].field_0x20;
    bVar5 = (UObject *)*plVar3 != local_38[0];
    lVar7 = 0;
    pUVar6 = local_38[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar5 == ((UObject *)plVar3[lVar7] != pUVar6));
      if (bVar5 != false) {
        if (iVar10 != iVar8) {
          memmove(plVar3 + iVar10,plVar3 + iVar8,(longlong)(iVar9 - iVar8) << 3);
          pUVar6 = local_38[0];
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    *(int *)(param_1 + 0xd) = iVar10;
  }
  return;
}

// execSetMinLODForQualityLevels @ 148762180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UStaticMesh::execSetMinLODForQualityLevels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_a8 [32];
  undefined4 local_78 [4];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_58.MaxBits = 0x80;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execSetMinimumLODForPlatform @ 148762310

void __cdecl
UStaticMesh::execSetMinimumLODForPlatform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
  local_res20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetMinimumLODForPlatforms @ 1487623d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UStaticMesh::execSetMinimumLODForPlatforms(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_98 [32];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_58.MaxBits = 0x80;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execSetStaticMaterials @ 1487625b0

void __cdecl UStaticMesh::execSetStaticMaterials(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *)&param_1[9].field_0x8,pTVar2);
  UpdateStaticMaterialsInfoCache
            ((UStaticMesh *)param_1,
             (TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *)&param_1[9].field_0x8);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// BatchBuild @ 1487897d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStaticMesh::BatchBuild
          (TArray<UStaticMesh_*,TSizedDefaultAllocator<32>_> *param_1,FBuildParameters *param_2,
          TFunction<bool___cdecl(UStaticMesh_*)> *param_3)

{
  longlong *plVar1;
  
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  if (*(longlong *)param_3 != 0) {
    plVar1 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_3->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000148789809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// BatchBuild @ 148789820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStaticMesh::BatchBuild
          (TArray<UStaticMesh_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          TFunction<bool___cdecl(UStaticMesh_*)> *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong local_28 [3];
  longlong *local_10;
  
  lVar1 = *(longlong *)param_3;
  local_10 = (longlong *)0x0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,local_28);
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  if (lVar1 != 0) {
    plVar3 = local_28;
    if (local_10 != (longlong *)0x0) {
      plVar3 = local_10;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar3 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return;
}

// Build @ 14878a690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStaticMesh::Build(UStaticMesh *this,FBuildParameters *param_1)

{
  longlong *plVar1;
  ForAnyElementType local_48;
  undefined4 local_40;
  int local_3c;
  longlong local_38;
  longlong local_28 [3];
  longlong *local_10;
  
  local_48.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  local_10 = (longlong *)0x0;
  local_40 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_48,1,&local_3c);
  *(UStaticMesh **)local_48.Data = this;
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  if (local_38 != 0) {
    plVar1 = local_28;
    if (local_10 != (longlong *)0x0) {
      plVar1 = local_10;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// Build @ 14878a740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStaticMesh::Build(UStaticMesh *this,bool param_1,TArray<FText,TSizedDefaultAllocator<32>_> *param_2
                  )

{
  longlong *plVar1;
  ForAnyElementType local_48;
  undefined4 local_40;
  int local_3c;
  longlong local_38;
  longlong local_28 [3];
  longlong *local_10;
  
  local_48.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  local_10 = (longlong *)0x0;
  local_40 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_48,1,&local_3c);
  *(UStaticMesh **)local_48.Data = this;
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  if (local_38 != 0) {
    plVar1 = local_28;
    if (local_10 != (longlong *)0x0) {
      plVar1 = local_10;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

