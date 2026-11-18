// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 46

// UMeshComponent @ 1478aa160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMeshComponent * __thiscall
UMeshComponent::UMeshComponent(UMeshComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).ArrayMax = 0;
  (this->MaterialParameterCache).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialParameterCache).Pairs.ArrayNum = 0;
  (this->MaterialParameterCache).Pairs.ArrayMax = 0;
  return this;
}

// UMeshComponent @ 1478aa200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMeshComponent * __thiscall
UMeshComponent::UMeshComponent(UMeshComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x80;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).ArrayMax = 0;
  (this->MaterialParameterCache).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialParameterCache).Pairs.ArrayNum = 0;
  (this->MaterialParameterCache).Pairs.ArrayMax = 0;
  this->bEnableMaterialParameterCaching = '\0';
  this->bCachedMaterialParameterIndicesAreDirty = '\x01';
  return this;
}

// ~UMeshComponent @ 1478ac280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMeshComponent::~UMeshComponent(UMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  DestructItems<TTuple<FName,UMeshComponent::FMaterialParameterCache>,int>
            ((TTuple<FName,UMeshComponent::FMaterialParameterCache> *)
             (this->MaterialParameterCache).Pairs.AllocatorInstance.Data,
             (this->MaterialParameterCache).Pairs.ArrayNum);
  pFVar1 = (this->MaterialParameterCache).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// BeginDestroy @ 1478b6290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMeshComponent::BeginDestroy(UMeshComponent *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < (this->OverrideMaterials).ArrayNum) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->OverrideMaterials).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->OverrideMaterials).AllocatorInstance.Data + uVar7);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2c8))(plVar1,this);
      }
      uVar4 = 0;
      if ((int)uVar5 < (this->OverrideMaterials).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      *(undefined8 *)((this->OverrideMaterials).AllocatorInstance.Data + uVar7) = 0;
      uVar7 = uVar7 + 8;
    } while ((int)(uVar5 + 1) < (this->OverrideMaterials).ArrayNum);
  }
  UPrimitiveComponent::BeginDestroy((UPrimitiveComponent *)this);
  return;
}

// CacheMaterialParameterNameIndices @ 1478b6de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshComponent::CacheMaterialParameterNameIndices(UMeshComponent *this)

{
  int *piVar1;
  TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  int iVar2;
  UMaterialInterface *this_01;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  char cVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_protected:_void___cdecl_UMeshComponent::CacheMaterialParameterNameIndices(void)_::_2_::FStat_STAT_CacheMaterialParameterNameIndices>
  FVar15;
  UWorld *pUVar16;
  FMaterialParameterCache *pFVar17;
  TTuple<FName,UMeshComponent::FMaterialParameterCache> *pTVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  FName FVar21;
  ForAnyElementType FVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  char local_res18 [8];
  undefined1 local_res20 [8];
  int local_138;
  undefined1 local_134 [4];
  TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> local_130;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_120;
  FColor_u_0 local_110;
  uint local_10c;
  undefined8 *local_108;
  FName local_100;
  undefined8 *local_f8;
  FName local_f0;
  FName local_e8;
  undefined8 *local_d8;
  uint local_d0;
  FMemoryImageMaterialParameterInfo local_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  FName local_60;
  FName local_58 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_CacheMaterialParameterNameIndices ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UMeshComponent::CacheMaterialParameterNameIndices(void)_::_2_::FStat_STAT_CacheMaterialParameterNameIndices>
         )0x0) {
      pFVar14 = ::FName::FName(&local_60,"STAT_CacheMaterialParameterNameIndices");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CacheMaterialParameterNameIndices,
                 *pFVar14,L"STAT_CacheMaterialParameterNameIndices","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_CacheMaterialParameterNameIndices;
  if (StatPtr_STAT_CacheMaterialParameterNameIndices ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UMeshComponent::CacheMaterialParameterNameIndices(void)_::_2_::FStat_STAT_CacheMaterialParameterNameIndices>
       )0x0) {
    pFVar14 = ::FName::FName(local_58,"STAT_CacheMaterialParameterNameIndices");
    FVar15 = (FThreadSafeStaticStat<_protected:_void___cdecl_UMeshComponent::CacheMaterialParameterNameIndices(void)_::_2_::FStat_STAT_CacheMaterialParameterNameIndices>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_CacheMaterialParameterNameIndices,*pFVar14,
                          L"STAT_CacheMaterialParameterNameIndices","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar15;
  bVar5 = false;
  bVar8 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar12 = false;
  bVar6 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) ||
     (bVar4 = bVar5, bVar7 = bVar8, FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar5 = false;
      bVar8 = true;
      bVar12 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_100.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\MeshComponent.cpp"
                   ,0x240);
        bVar5 = true;
        bVar8 = true;
        bVar12 = true;
        bVar6 = true;
      }
    }
    bVar4 = bVar5;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar12 = true;
      bVar6 = true;
      goto LAB_1478b6f79;
    }
  }
  bVar8 = bVar6;
  bVar5 = bVar12;
  bVar12 = false;
  bVar6 = false;
  local_f0 = local_e8;
  FVar21 = local_e8;
LAB_1478b6f79:
  if (this->bEnableMaterialParameterCaching != 0) {
    this_00 = &this->MaterialParameterCache;
    piVar1 = &(this->MaterialParameterCache).Pairs.ArrayMax;
    pTVar18 = (TTuple<FName,UMeshComponent::FMaterialParameterCache> *)
              (this_00->Pairs).AllocatorInstance.Data;
    iVar2 = (this->MaterialParameterCache).Pairs.ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TTuple<FName,UMeshComponent::FMaterialParameterCache>,int>(pTVar18,iVar2);
      (this->MaterialParameterCache).Pairs.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)this_00,0,piVar1);
      }
    }
    else {
      DestructItems<TTuple<FName,UMeshComponent::FMaterialParameterCache>,int>(pTVar18,iVar2);
      (this->MaterialParameterCache).Pairs.ArrayNum = 0;
    }
    pUVar16 = (UWorld *)this->_padding_;
    if (((pUVar16 == (UWorld *)0x0) &&
        (pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar16 == (UWorld *)0x0)) || (local_res18[0] = '\x01', (pUVar16->WorldType).Value == '\a'))
    {
      local_res18[0] = '\0';
    }
    (**(code **)(this->_padding_ + 0xa90))(this,&local_d8);
    cVar10 = local_res18[0];
    uVar19 = (ulonglong)(int)local_d0;
    local_138 = 0;
    local_10c = local_d0;
    puVar23 = local_d8 + uVar19;
    puVar24 = local_d8;
    local_f8 = puVar23;
    while( true ) {
      local_108 = puVar24;
      if (local_d0 != (uint)uVar19) {
        local_res18[0] = '\0';
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      FVar21 = local_f0;
      if (puVar24 == puVar23) break;
      this_01 = (UMaterialInterface *)*puVar24;
      if (this_01 != (UMaterialInterface *)0x0) {
        local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_130.ArrayNum = 0;
        local_130.ArrayMax = 0;
        local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.ArrayNum = 0;
        local_120.ArrayMax = 0;
        UMaterialInterface::GetAllScalarParameterInfo(this_01,&local_130,&local_120);
        iVar2 = local_130.ArrayNum;
        uVar19 = (ulonglong)local_130.ArrayNum;
        pFVar14 = (FName *)(local_130.AllocatorInstance.Data + uVar19 * 0x10);
        FVar22.Data = local_130.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar19 != iVar2) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          uVar11 = local_130._8_8_;
          if ((FName *)FVar22.Data == pFVar14) break;
          pFVar17 = TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>
                    ::Find(this_00,*(FName *)FVar22.Data);
          if (pFVar17 == (FMaterialParameterCache *)0x0) {
            pTVar18 = TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>
                      ::AllocateMemoryForEmplace<FName_const_&>(this_00,(FName *)FVar22.Data);
            uVar9 = ((FName *)FVar22.Data)->Number;
            pFVar20 = (FScriptContainerElement *)0x0;
            local_90 = 0;
            local_b0 = 0;
            *(uint *)&pTVar18->field_0x0 = (((FName *)FVar22.Data)->ComparisonIndex).Value;
            *(uint *)&pTVar18->field_0x4 = uVar9;
            pFVar17 = (FMaterialParameterCache *)&pTVar18->field_0x8;
            *(undefined8 *)pFVar17 = 0;
            *(undefined8 *)&pTVar18->field_0x10 = 0;
            *(undefined8 *)&pTVar18->field_0x18 = 0;
            *(undefined8 *)&pTVar18->field_0x20 = 0;
            *(undefined4 *)&pTVar18->field_0x28 = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_98 = 0;
          }
          else {
            pFVar20 = (pFVar17->ScalarParameterMaterialIndices).AllocatorInstance.Data;
          }
          if (((pFVar20 <= (FScriptContainerElement *)&local_138) &&
              ((FScriptContainerElement *)&local_138 <
               pFVar20 + (longlong)(pFVar17->ScalarParameterMaterialIndices).ArrayMax * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar13 = (pFVar17->ScalarParameterMaterialIndices).ArrayNum;
          piVar1 = &(pFVar17->ScalarParameterMaterialIndices).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar17,piVar1);
          }
          (pFVar17->ScalarParameterMaterialIndices).ArrayNum = iVar13 + 1;
          *(int *)((pFVar17->ScalarParameterMaterialIndices).AllocatorInstance.Data +
                  (longlong)iVar13 * 4) = local_138;
          if (cVar10 != '\0') {
            local_c8.Name.ComparisonIndex = (*(FName *)FVar22.Data).ComparisonIndex;
            local_c8.Name.Number = (*(FName *)FVar22.Data).Number;
            local_c8.Index = ((FName *)((longlong)FVar22.Data + 8))->Number;
            local_c8.Association.Value =
                 (uchar)(((FName *)((longlong)FVar22.Data + 8))->ComparisonIndex).Value;
            local_c8.Name.DisplayIndex.Value = 0;
            UMaterialInterface::GetScalarParameterDefaultValue
                      (this_01,&local_c8,&pFVar17->ScalarParameterDefaultValue);
          }
          uVar19 = local_130._8_8_ & 0xffffffff;
          FVar22.Data = FVar22.Data + 0x10;
        }
        iVar2 = local_130.ArrayMax;
        local_130._8_8_ = (ulonglong)(uint)local_130.ArrayMax << 0x20;
        if (((longlong)uVar11 < 0) && (iVar2 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,&local_130.AllocatorInstance,0,&local_130.ArrayMax);
        }
        uVar11 = local_120._8_8_;
        iVar2 = local_120.ArrayMax;
        local_120._8_8_ = (ulonglong)(uint)local_120.ArrayMax << 0x20;
        if (((longlong)uVar11 < 0) && (iVar2 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,&local_120.AllocatorInstance,0,&local_120.ArrayMax);
        }
        UMaterialInterface::GetAllVectorParameterInfo(this_01,&local_130,&local_120);
        iVar2 = local_130.ArrayNum;
        uVar19 = (ulonglong)local_130.ArrayNum;
        pFVar14 = (FName *)(local_130.AllocatorInstance.Data + uVar19 * 0x10);
        FVar22.Data = local_130.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar19 != iVar2) {
            local_134[0] = 0;
            `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_134);
          }
          if ((FName *)FVar22.Data == pFVar14) break;
          pFVar17 = TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>
                    ::Find(this_00,*(FName *)FVar22.Data);
          if (pFVar17 == (FMaterialParameterCache *)0x0) {
            pTVar18 = TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>
                      ::AllocateMemoryForEmplace<FName_const_&>(this_00,(FName *)FVar22.Data);
            uVar9 = ((FName *)FVar22.Data)->Number;
            local_68 = 0;
            local_88 = 0;
            *(uint *)&pTVar18->field_0x0 = (((FName *)FVar22.Data)->ComparisonIndex).Value;
            *(uint *)&pTVar18->field_0x4 = uVar9;
            pFVar17 = (FMaterialParameterCache *)&pTVar18->field_0x8;
            *(undefined8 *)pFVar17 = 0;
            *(undefined8 *)&pTVar18->field_0x10 = 0;
            *(undefined8 *)&pTVar18->field_0x18 = 0;
            *(undefined8 *)&pTVar18->field_0x20 = 0;
            *(undefined4 *)&pTVar18->field_0x28 = 0;
            local_80 = 0;
            local_78 = 0;
            local_70 = 0;
          }
          pFVar20 = (pFVar17->VectorParameterMaterialIndices).AllocatorInstance.Data;
          if (((pFVar20 <= (FScriptContainerElement *)&local_138) &&
              ((FScriptContainerElement *)&local_138 <
               pFVar20 + (longlong)(pFVar17->VectorParameterMaterialIndices).ArrayMax * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar13 = (pFVar17->VectorParameterMaterialIndices).ArrayNum;
          piVar1 = &(pFVar17->VectorParameterMaterialIndices).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(pFVar17->VectorParameterMaterialIndices).AllocatorInstance,
                                piVar1);
          }
          (pFVar17->VectorParameterMaterialIndices).ArrayNum = iVar13 + 1;
          FVar22.Data = FVar22.Data + 0x10;
          *(int *)((pFVar17->VectorParameterMaterialIndices).AllocatorInstance.Data +
                  (longlong)iVar13 * 4) = local_138;
          uVar19 = local_130._8_8_ & 0xffffffff;
        }
        if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.AllocatorInstance.Data);
        }
        puVar23 = local_f8;
        puVar24 = local_108;
        if ((FName *)local_130.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_130.AllocatorInstance.Data);
          puVar23 = local_f8;
          puVar24 = local_108;
        }
      }
      local_138 = local_138 + 1;
      uVar19 = (ulonglong)local_10c;
      puVar24 = puVar24 + 1;
    }
    this->bCachedMaterialParameterIndicesAreDirty = '\0';
    bVar4 = bVar5;
    bVar12 = bVar6;
    bVar7 = bVar8;
    if (local_d8 != (undefined8 *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// EmptyOverrideMaterials @ 1478cb660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshComponent::EmptyOverrideMaterials(UMeshComponent *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  bVar5 = false;
  iVar2 = (this->OverrideMaterials).ArrayNum;
  if (iVar2 != 0) {
    uVar7 = 0;
    if (0 < iVar2) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->OverrideMaterials).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)((this->OverrideMaterials).AllocatorInstance.Data + lVar8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x2c8))(plVar3,this);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < (this->OverrideMaterials).ArrayNum);
    }
    piVar1 = &(this->OverrideMaterials).ArrayMax;
    (this->OverrideMaterials).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->OverrideMaterials).AllocatorInstance,0,piVar1);
    }
    bVar5 = true;
  }
  if ((this->MaterialSlotsOverlayMaterial).ArrayNum == 0) {
    if (!bVar5) {
      return;
    }
  }
  else {
    (this->MaterialSlotsOverlayMaterial).ArrayNum = 0;
    if ((this->MaterialSlotsOverlayMaterial).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->MaterialSlotsOverlayMaterial).AllocatorInstance,0,
                 &(this->MaterialSlotsOverlayMaterial).ArrayMax);
    }
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  (**(code **)(this->_padding_ + 0x378))(this);
  return;
}

// GetComponentMaterialSlotsOverlayMaterial @ 1478d0a10

TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
UMeshComponent::GetComponentMaterialSlotsOverlayMaterial(UMeshComponent *this)

{
  return &this->MaterialSlotsOverlayMaterial;
}

// GetMaterial @ 1478d5d60

UMaterialInterface * __thiscall UMeshComponent::GetMaterial(UMeshComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UMaterialInterface *pUVar4;
  UMaterialInterface *pUVar5;
  uint uVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((-1 < param_1) && (param_1 < (this->OverrideMaterials).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (this->OverrideMaterials).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    pUVar4 = *(UMaterialInterface **)
              ((this->OverrideMaterials).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (pUVar4 != (UMaterialInterface *)0x0) {
      cVar3 = (**(code **)(this->_padding_ + 0xa98))(this);
      if (cVar3 != '\0') {
        local_18 = 0;
        uStack_10 = 0;
        pUVar5 = (UMaterialInterface *)(**(code **)(pUVar4->_padding_ + 0x3a8))(pUVar4,&local_18);
        if (pUVar5 != (UMaterialInterface *)0x0) {
          pUVar4 = pUVar5;
        }
      }
    }
    return pUVar4;
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialByName @ 1478d5ee0

UMaterialInterface * __thiscall
UMeshComponent::GetMaterialByName(UMeshComponent *this,FName param_1)

{
  int iVar1;
  UMaterialInterface *pUVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 0x698))();
  if (iVar1 < 0) {
    return (UMaterialInterface *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478d5f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UMaterialInterface *)(**(code **)(this->_padding_ + 0x690))(this,iVar1);
  return pUVar2;
}

// GetMaterialRelevance @ 1478d6130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UMeshComponent::GetMaterialRelevance(UMeshComponent *this,EShaderPlatform param_1)

{
  undefined6 in_register_00000012;
  FMaterialRelevance_u_0 FVar1;
  
  FVar1.Raw._2_6_ = in_register_00000012;
  FVar1.Raw._0_2_ = param_1;
  FMeshComponentHelper::GetMaterialRelevance<UMeshComponent>
            ((UMeshComponent *)FVar1,(EShaderPlatform)this);
  return (FMaterialRelevance)FVar1;
}

// GetMaterialRelevance @ 1478d6160

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UMeshComponent::GetMaterialRelevance(UMeshComponent *this,Type param_1)

{
  code *pcVar1;
  FMaterialRelevance_u_0 FVar2;
  undefined4 in_register_00000014;
  int in_R8D;
  
  FVar2.Raw._4_4_ = in_register_00000014;
  FVar2.Raw._0_4_ = param_1;
  pcVar1 = *(code **)(this->_padding_ + 0xaa8);
  if (in_R8D == 5) {
    (*pcVar1)(this,param_1,0x9b);
    return (FMaterialRelevance)FVar2;
  }
  (*pcVar1)(this,param_1,GRHIGlobals.ShaderPlatformForFeatureLevel[in_R8D]);
  return (FMaterialRelevance)FVar2._s_0;
}

// GetMaterialSlotsOverlayMaterial @ 1478d61d0

/* WARNING: Removing unreachable block (ram,0x00014789eb22) */
/* WARNING: Removing unreachable block (ram,0x00014789eb30) */
/* WARNING: Removing unreachable block (ram,0x00014789eb37) */
/* WARNING: Removing unreachable block (ram,0x00014789eb3b) */
/* WARNING: Removing unreachable block (ram,0x00014789eb44) */
/* WARNING: Removing unreachable block (ram,0x00014789eb51) */
/* WARNING: Removing unreachable block (ram,0x00014789eb63) */
/* WARNING: Removing unreachable block (ram,0x00014789eb73) */
/* WARNING: Removing unreachable block (ram,0x00014789eb76) */
/* WARNING: Removing unreachable block (ram,0x00014789eb7a) */
/* WARNING: Removing unreachable block (ram,0x00014789ebaf) */
/* WARNING: Removing unreachable block (ram,0x00014789ebb0) */
/* WARNING: Removing unreachable block (ram,0x00014789ebbd) */
/* WARNING: Removing unreachable block (ram,0x00014789ebc7) */
/* WARNING: Removing unreachable block (ram,0x00014789ebca) */
/* WARNING: Removing unreachable block (ram,0x00014789ebce) */
/* WARNING: Removing unreachable block (ram,0x00014789ec03) */
/* WARNING: Removing unreachable block (ram,0x00014789ec04) */
/* WARNING: Removing unreachable block (ram,0x00014789ec16) */
/* WARNING: Removing unreachable block (ram,0x00014789ec19) */
/* WARNING: Removing unreachable block (ram,0x00014789ec1d) */
/* WARNING: Removing unreachable block (ram,0x00014789ec4c) */
/* WARNING: Removing unreachable block (ram,0x00014789ec4d) */
/* WARNING: Removing unreachable block (ram,0x00014789ec5d) */
/* WARNING: Removing unreachable block (ram,0x00014789ec65) */
/* WARNING: Removing unreachable block (ram,0x00014789ec6a) */
/* WARNING: Removing unreachable block (ram,0x00014789ec70) */
/* WARNING: Removing unreachable block (ram,0x00014789ec7f) */
/* WARNING: Removing unreachable block (ram,0x00014789ecaa) */

void __thiscall
UMeshComponent::GetMaterialSlotsOverlayMaterial
          (UMeshComponent *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (param_1 != &this->MaterialSlotsOverlayMaterial) {
    iVar2 = (this->MaterialSlotsOverlayMaterial).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar3 = (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                ((param_1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar3,iVar2);
    }
  }
  (**(code **)(this->_padding_ + 0xb10))(this);
  return;
}

// GetMaterials @ 1478d61e0

TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> * __thiscall
UMeshComponent::GetMaterials
          (UMeshComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar4 = (**(code **)(this->_padding_ + 0x810))();
  if (0 < iVar4) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar4,&__return_storage_ptr__->AllocatorInstance,piVar1,
                       &__return_storage_ptr__->ArrayMax);
    memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8,0,
           (longlong)iVar4 * 8);
    uVar10 = 0;
    if (0 < iVar4) {
      lVar9 = 0;
      do {
        uVar6 = (**(code **)(this->_padding_ + 0x690))(this,uVar10);
        uVar8 = 0;
        if ((int)uVar10 < *piVar1) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        uVar10 = uVar10 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + lVar9 * 8) = uVar6;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
    }
  }
  return __return_storage_ptr__;
}

// GetNumMaterials @ 1478d66e0

int __thiscall UMeshComponent::GetNumMaterials(UMeshComponent *this)

{
  return 0;
}

// GetNumOverrideMaterials @ 1478d6710

int __thiscall UMeshComponent::GetNumOverrideMaterials(UMeshComponent *this)

{
  return (this->OverrideMaterials).ArrayNum;
}

// GetOverlayMaterial @ 1478d7640

UMaterialInterface * __thiscall UMeshComponent::GetOverlayMaterial(UMeshComponent *this)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = (this->OverlayMaterial).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d764f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UMaterialInterface *)(**(code **)(this->_padding_ + 0xb18))();
    return pUVar1;
  }
  return pUVar1;
}

// GetOverlayMaterialMaxDrawDistance @ 1478d7660

float __thiscall UMeshComponent::GetOverlayMaterialMaxDrawDistance(UMeshComponent *this)

{
  float fVar1;
  
  if (this->OverlayMaterialMaxDrawDistance == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d7673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(this->_padding_ + 0xb20))();
    return fVar1;
  }
  return this->OverlayMaterialMaxDrawDistance;
}

// GetPrivateStaticClass @ 1478d99b0

UClass * __cdecl UMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshComponent",
               &Z_Registration_Info_UClass_UMeshComponent.InnerSingleton,
               StaticRegisterNativesUMeshComponent,0x590,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshComponent>,InternalVTableHelperCtorCaller<UMeshComponent>,
               local_res8,UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshComponent.InnerSingleton;
}

// GetStreamingTextureInfoInner @ 1478dd590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UMeshComponent::GetStreamingTextureInfoInner
          (UMeshComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FPrimitiveMaterialInfo local_48 [2];
  
  if ((GEnableAutoDetectNoStreamableTextures == 0) || ((this->_padding_ & 0x200000000) == 0)) {
    FStreamingTextureLevelContext::BindBuildData(param_1,param_2);
    iVar2 = (**(code **)(this->_padding_ + 0x810))(this);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        local_48[0].PackedRelativeBox = 0;
        local_48[0].Material = (UMaterialInterface *)0x0;
        local_48[0].UVChannelData = (FMeshUVChannelInfo *)0x0;
        cVar1 = (**(code **)(this->_padding_ + 0xae0))(this,iVar3,local_48);
        if (cVar1 != '\0') {
          FStreamingTextureLevelContext::ProcessMaterial
                    (param_1,(TBoxSphereBounds<double,double> *)&this->_padding_,local_48,param_3,
                     param_4,(bool)(*(byte *)((longlong)&this->_padding_ + 2) >> 2 & 1),
                     (UPrimitiveComponent *)this);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return;
}

// GetUsedMaterials @ 1478ddf80

void __thiscall
UMeshComponent::GetUsedMaterials
          (UMeshComponent *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined7 in_register_00000081;
  undefined1 local_res8 [8];
  TObjectPtr<UMaterialInterface>_u_0 local_48;
  longlong local_40;
  longlong local_38;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_30;
  
  iVar8 = 0;
  iVar7 = (**(code **)(this->_padding_ + 0x810))
                    (this,param_1,CONCAT71(in_register_00000081,param_2));
  if (0 < iVar7) {
    do {
      local_40 = (**(code **)(this->_padding_ + 0x690))(this,iVar8);
      if (local_40 != 0) {
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_40;
      }
      iVar8 = iVar8 + 1;
      iVar7 = (**(code **)(this->_padding_ + 0x810))(this);
    } while (iVar8 < iVar7);
  }
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  FMeshComponentHelper::GetMaterialSlotsOverlayMaterial<UMeshComponent>(this,&local_30);
  iVar7 = local_30.ArrayNum;
  pFVar1 = local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8;
  FVar9.Data = local_30.AllocatorInstance.Data;
  while( true ) {
    if (local_30.ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar9.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar9.Data;
    if (lVar2 != 0) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_38 = lVar2;
      if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar8 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38;
    }
    FVar9.Data = FVar9.Data + 8;
  }
  local_48 = (TObjectPtr<UMaterialInterface>_u_0)(this->OverlayMaterial).field0_0x0.DebugPtr;
  if ((local_48.DebugPtr != (UMaterialInterface *)0x0) ||
     (local_48.DebugPtr = (UMaterialInterface *)(**(code **)(this->_padding_ + 0xb18))(this),
     local_48.DebugPtr != (UMaterialInterface *)0x0)) {
    pTVar4 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    if ((pTVar4 <= &local_48) &&
       ((&local_48 < pTVar4 + param_1->ArrayMax &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    ((TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8)
    )->DebugPtr = (UMaterialInterface *)local_48;
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// GetWireframeColorForSceneProxy @ 1478df0f0

FColor __thiscall UMeshComponent::GetWireframeColorForSceneProxy(UMeshComponent *this)

{
  char cVar1;
  longlong lVar2;
  FColor FVar3;
  undefined4 *in_RDX;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 3);
  FVar3.field0_0x0 = SUB84(in_RDX,0);
  if (cVar1 == '\0') {
    *in_RDX = 0xff00ffff;
    return (FColor)FVar3.field0_0x0;
  }
  if (cVar1 == '\x01') {
    *in_RDX = 0xff8080ff;
    return (FColor)FVar3.field0_0x0;
  }
  lVar2 = this->_padding_;
  *(undefined1 *)((longlong)in_RDX + 3) = 0xff;
  if ((lVar2 & 1) != 0) {
    *(undefined2 *)in_RDX = 0xff80;
    *(undefined1 *)((longlong)in_RDX + 2) = 0;
    return (FColor)FVar3.field0_0x0;
  }
  *(undefined2 *)in_RDX = 0xff;
  *(undefined1 *)((longlong)in_RDX + 2) = 0xff;
  return (FColor)FVar3.field0_0x0;
}

// HasOverrideMaterials @ 1478df430

bool __thiscall UMeshComponent::HasOverrideMaterials(UMeshComponent *this)

{
  return 0 < (this->OverrideMaterials).ArrayNum;
}

// LogMaterialsAndTextures @ 1478e2260

void __thiscall
UMeshComponent::LogMaterialsAndTextures(UMeshComponent *this,FOutputDevice *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FName local_res8;
  void *local_58;
  int local_50;
  FString local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_48);
  if ((0xff < (uint)param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumTabs >= 0 && NumTabs <= TCStringSpcHelper<T>::MAX_TABS",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x279,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FOutputDevice::LogfImpl(param_1,L"%s%s:");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  uVar10 = 0;
  if (0 < (this->OverrideMaterials).ArrayNum) {
    uVar11 = uVar10;
    do {
      if ((0xff < param_2 + 1U) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumTabs >= 0 && NumTabs <= TCStringSpcHelper<T>::MAX_TABS",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                             ,0x279,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FOutputDevice::LogfImpl(param_1,L"%s[Material Override: %d]");
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < (this->OverrideMaterials).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->OverrideMaterials).AllocatorInstance.Data + uVar11);
      if (plVar1 == (longlong *)0x0) {
        if ((0xff < param_2 + 2U) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumTabs >= 0 && NumTabs <= TCStringSpcHelper<T>::MAX_TABS",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                               ,0x279,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FOutputDevice::LogfImpl(param_1,L"%snullptr");
      }
      else {
        (**(code **)(*plVar1 + 0x3d0))(plVar1,param_1,param_2 + 2U);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < (this->OverrideMaterials).ArrayNum);
  }
  uVar10 = 0;
  local_38 = *(undefined4 *)&(this->OverrideMaterials).AllocatorInstance.Data;
  uStack_34 = *(undefined4 *)((longlong)&(this->OverrideMaterials).AllocatorInstance.Data + 4);
  iStack_30 = (this->OverrideMaterials).ArrayNum;
  iStack_2c = (this->OverrideMaterials).ArrayMax;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (**(code **)(this->_padding_ + 0xa90))(this,&local_58);
  if (0 < local_50) {
    uVar11 = uVar10;
    do {
      if ((0xff < param_2 + 1U) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumTabs >= 0 && NumTabs <= TCStringSpcHelper<T>::MAX_TABS",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                             ,0x279,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FOutputDevice::LogfImpl(param_1,L"%s[Mesh Material: %d]");
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < local_50) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(uVar11 + (longlong)local_58);
      if (plVar1 == (longlong *)0x0) {
        if ((0xff < param_2 + 2U) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumTabs >= 0 && NumTabs <= TCStringSpcHelper<T>::MAX_TABS",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                               ,0x279,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FOutputDevice::LogfImpl(param_1,L"%snullptr");
      }
      else {
        (**(code **)(*plVar1 + 0x3d0))(plVar1,param_1,param_2 + 2U);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < local_50);
  }
  uVar3 = *(undefined4 *)&(this->OverrideMaterials).AllocatorInstance.Data;
  uVar4 = *(undefined4 *)((longlong)&(this->OverrideMaterials).AllocatorInstance.Data + 4);
  iVar5 = (this->OverrideMaterials).ArrayNum;
  iVar6 = (this->OverrideMaterials).ArrayMax;
  (this->OverrideMaterials).AllocatorInstance.Data =
       (FScriptContainerElement *)CONCAT44(uStack_34,local_38);
  (this->OverrideMaterials).ArrayNum = iStack_30;
  (this->OverrideMaterials).ArrayMax = iStack_2c;
  local_38 = uVar3;
  uStack_34 = uVar4;
  iStack_30 = iVar5;
  iStack_2c = iVar6;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((void *)CONCAT44(uStack_34,local_38) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_34,local_38));
  }
  return;
}

// MarkCachedMaterialParameterNameIndicesDirty @ 1478e2b90

void __thiscall UMeshComponent::MarkCachedMaterialParameterNameIndicesDirty(UMeshComponent *this)

{
  this->bCachedMaterialParameterIndicesAreDirty = '\x01';
  return;
}

// PrestreamTextures @ 1478e8370

void __thiscall
UMeshComponent::PrestreamTextures(UMeshComponent *this,float param_1,bool param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  UStreamableRenderAsset *this_00;
  int iVar4;
  Type TVar5;
  FStreamingManagerCollection *pFVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  undefined1 local_res18 [16];
  undefined8 *local_38;
  undefined8 local_30;
  
  if (param_2) {
    pFVar6 = IStreamingManager::Get();
    (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6,0x1e);
  }
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  pcVar3 = *(code **)(this->_padding_ + 0x7f8);
  TVar5 = GetCurrentMaterialQualityLevelChecked();
  (*pcVar3)(this,&local_38,TVar5);
  iVar4 = (int)local_30;
  puVar1 = local_38 + (int)local_30;
  puVar8 = local_38;
  while( true ) {
    if ((int)local_30 != iVar4) {
      `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (puVar8 == puVar1) break;
    this_00 = (UStreamableRenderAsset *)*puVar8;
    if (this_00 != (UStreamableRenderAsset *)0x0) {
      pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar7->_padding_)) {
        UStreamableRenderAsset::SetForceMipLevelsToBeResident(this_00,param_1,param_3);
      }
    }
    puVar8 = puVar8 + 1;
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// RegisterLODStreamingCallback @ 1478e9040

void __thiscall
UMeshComponent::RegisterLODStreamingCallback
          (UMeshComponent *this,
          TFunction<void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,ELODStreamingCallbackResult)>
          *param_1,TFunction<void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,ELODStreamingCallbackResult)>
                   *param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_res8 [2];
  undefined8 local_res18 [2];
  UMeshComponent *local_18 [2];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\MeshComponent.cpp"
                       ,0x186,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = 5;
  local_res18[0] = 0;
  local_18[0] = this;
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar4 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_2->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,local_18,local_res18,local_res8);
  return;
}

// RegisterLODStreamingCallback @ 1478e90e0

void __thiscall
UMeshComponent::RegisterLODStreamingCallback
          (UMeshComponent *this,
          TFunction<void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,ELODStreamingCallbackResult)>
          *param_1,int param_2,float param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  UMeshComponent *local_18 [2];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\MeshComponent.cpp"
                       ,0x180,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = 5;
  local_res10 = 0;
  local_18[0] = this;
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,local_18,&local_res10,local_res8);
  return;
}

// SetColorParameterValueOnMaterials @ 1478f0c90

void __thiscall
UMeshComponent::SetColorParameterValueOnMaterials
          (UMeshComponent *this,FName param_1,FLinearColor *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UMaterialInstanceDynamic *pUVar8;
  FMaterialParameterCache *pFVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  void *local_68;
  int local_60;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48;
  
  if (this->bEnableMaterialParameterCaching == 0) {
    (**(code **)(this->_padding_ + 0xa90))(this,&local_68);
    uVar11 = 0;
    if (0 < local_60) {
      lVar13 = 0;
      iVar10 = local_60;
      do {
        uVar6 = 0;
        if ((int)uVar11 < iVar10) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar10 = local_60, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar8 = *(UMaterialInstanceDynamic **)(lVar13 + (longlong)local_68);
        if (pUVar8 != (UMaterialInstanceDynamic *)0x0) {
          pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar10 = (int)pUVar7->_padding_;
          if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar7->_padding_)) {
            pUVar8 = (UMaterialInstanceDynamic *)(**(code **)(this->_padding_ + 0x6c8))(this,uVar11)
            ;
          }
          local_58._0_8_ = *(undefined8 *)&param_2->field0_0x0;
          local_58._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
          UMaterialInstanceDynamic::SetVectorParameterValue
                    (pUVar8,param_1,(FLinearColor *)&local_58._s_0);
          iVar10 = local_60;
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar11 < iVar10);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
      return;
    }
  }
  else {
    if (this->bCachedMaterialParameterIndicesAreDirty != '\0') {
      CacheMaterialParameterNameIndices(this);
    }
    pFVar9 = TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&this->MaterialParameterCache,param_1);
    if (pFVar9 != (FMaterialParameterCache *)0x0) {
      pFVar12 = (pFVar9->VectorParameterMaterialIndices).AllocatorInstance.Data;
      iVar10 = (pFVar9->VectorParameterMaterialIndices).ArrayNum;
      pFVar1 = pFVar12 + (longlong)iVar10 * 4;
      while( true ) {
        if ((pFVar9->VectorParameterMaterialIndices).ArrayNum != iVar10) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar12 == pFVar1) break;
        uVar2 = *(undefined4 *)pFVar12;
        pUVar8 = (UMaterialInstanceDynamic *)(**(code **)(this->_padding_ + 0x690))(this,uVar2);
        if (pUVar8 != (UMaterialInstanceDynamic *)0x0) {
          pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar3 = (int)pUVar7->_padding_;
          if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar7->_padding_)) {
            pUVar8 = (UMaterialInstanceDynamic *)(**(code **)(this->_padding_ + 0x6c8))(this,uVar2);
          }
          local_48._0_8_ = *(undefined8 *)&param_2->field0_0x0;
          local_48._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
          UMaterialInstanceDynamic::SetVectorParameterValue
                    (pUVar8,param_1,(FLinearColor *)&local_48._s_0);
        }
        pFVar12 = pFVar12 + 4;
      }
    }
  }
  return;
}

// SetMaterial @ 1478f3cd0

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
UMeshComponent::SetMaterial(UMeshComponent *this,int param_1,UMaterialInterface *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UMaterialInterface *pUVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  int iVar8;
  UClass *pUVar9;
  FStreamingManagerCollection *pFVar10;
  FBodyInstance *this_00;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  if (param_1 < 0) {
    return;
  }
  lVar12 = (longlong)param_1;
  pTVar2 = &this->OverrideMaterials;
  piVar1 = &(this->OverrideMaterials).ArrayNum;
  if (param_1 < *piVar1) {
    pUVar4 = *(UMaterialInterface **)((pTVar2->AllocatorInstance).Data + lVar12 * 8);
    if (pUVar4 == (UMaterialInterface *)0x0) {
      bVar13 = param_2 == (UMaterialInterface *)0x0;
    }
    else {
      bVar13 = pUVar4 == param_2;
    }
    if (bVar13) {
      return;
    }
  }
  iVar8 = (this->OverrideMaterials).ArrayNum;
  if (iVar8 <= param_1) {
    iVar11 = (param_1 - iVar8) + 1;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar11,&pTVar2->AllocatorInstance,piVar1,
                       &(this->OverrideMaterials).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8,0,(longlong)iVar11 << 3);
  }
  if (param_2 != (UMaterialInterface *)0x0) {
    pUVar9 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar8 = (int)pUVar9->_padding_;
    if ((iVar8 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar9->_padding_)) {
      if ((*piVar1 <= param_1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5._0_4_ = param_2[1].SubsurfaceProfiles.ArrayNum;
      lVar5._4_4_ = param_2[1].SubsurfaceProfiles.ArrayMax;
      if (lVar5 == *(longlong *)((pTVar2->AllocatorInstance).Data + lVar12 * 8)) goto LAB_1478f3e41;
    }
    if ((*piVar1 <= param_1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar12 * 8) != 0) {
      this->bCachedMaterialParameterIndicesAreDirty = '\x01';
    }
  }
LAB_1478f3e41:
  if (((this->OverrideMaterials).ArrayNum <= param_1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar6 = *(longlong **)((this->OverrideMaterials).AllocatorInstance.Data + lVar12 * 8);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2c8))(plVar6,this);
  }
  if (((this->OverrideMaterials).ArrayNum <= param_1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = (this->OverrideMaterials).AllocatorInstance.Data + lVar12 * 8;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_2 == (UMaterialInterface *)0x0)
     ) {
    *(UMaterialInterface **)pFVar3 = param_2;
    if (param_2 == (UMaterialInterface *)0x0) goto LAB_1478f3f12;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_2);
    *(UMaterialInterface **)pFVar3 = param_2;
  }
  (**(code **)(param_2->_padding_ + 0x2c0))(param_2,this);
LAB_1478f3f12:
  (**(code **)(this->_padding_ + 0x378))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  if ((-1 < *(char *)((longlong)&this->_padding_ + 2)) &&
     (bVar13 = OwnerLevelHasRegisteredStaticComponentsInStreamingManager((AActor *)this->_padding_),
     bVar13)) {
    pFVar10 = IStreamingManager::Get();
    (**(code **)(pFVar10->_padding_ + 0x78))(pFVar10,this);
  }
  if (param_2 != (UMaterialInterface *)0x0) {
    UObjectBaseUtility::AddToCluster((UObjectBaseUtility *)param_2,(UObjectBaseUtility *)this,true);
  }
  this_00 = (FBodyInstance *)(**(code **)(this->_padding_ + 0x818))(this,0,1,0xffffffff);
  if ((this_00 != (FBodyInstance *)0x0) &&
     (bVar13 = FBodyInstance::IsValidBodyInstance(this_00), bVar13)) {
    FBodyInstance::UpdatePhysicalMaterials(this_00);
  }
  return;
}

// SetMaterialByName @ 1478f3fe0

void __thiscall
UMeshComponent::SetMaterialByName(UMeshComponent *this,FName param_1,UMaterialInterface *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x698))();
  if (-1 < iVar1) {
    (**(code **)(this->_padding_ + 0x6b8))(this,iVar1,param_2);
  }
  return;
}

// SetOverlayMaterial @ 1478f44a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshComponent::SetOverlayMaterial(UMeshComponent *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->OverlayMaterial).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    bVar2 = param_1 == (UMaterialInterface *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->OverlayMaterial).field0_0x0.DebugPtr = param_1;
    (**(code **)(this->_padding_ + 0x378))(this);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetOverlayMaterialMaxDrawDistance @ 1478f4510

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
UMeshComponent::SetOverlayMaterialMaxDrawDistance(UMeshComponent *this,float param_1)

{
  if (param_1 != this->OverlayMaterialMaxDrawDistance) {
    this->OverlayMaterialMaxDrawDistance = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetScalarParameterValueOnMaterials @ 1478f4c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshComponent::SetScalarParameterValueOnMaterials(UMeshComponent *this,FName param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UMaterialInstanceDynamic *pUVar8;
  FMaterialParameterCache *pFVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  FName local_res10;
  void *local_68;
  int local_60;
  FString local_58;
  FString local_48 [2];
  
  local_res10 = param_1;
  if (this->bEnableMaterialParameterCaching == 0) {
    (**(code **)(this->_padding_ + 0xa90))(this,&local_68);
    uVar11 = 0;
    if (0 < local_60) {
      lVar13 = 0;
      iVar10 = local_60;
      do {
        uVar6 = 0;
        if ((int)uVar11 < iVar10) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar10 = local_60, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar8 = *(UMaterialInstanceDynamic **)(lVar13 + (longlong)local_68);
        if (pUVar8 != (UMaterialInstanceDynamic *)0x0) {
          pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar10 = (int)pUVar7->_padding_;
          if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar7->_padding_)) {
            pUVar8 = (UMaterialInstanceDynamic *)(**(code **)(this->_padding_ + 0x6c8))(this,uVar11)
            ;
          }
          UMaterialInstanceDynamic::SetScalarParameterValue(pUVar8,local_res10,param_2);
          iVar10 = local_60;
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar11 < iVar10);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
      return;
    }
  }
  else {
    if (this->bCachedMaterialParameterIndicesAreDirty != '\0') {
      CacheMaterialParameterNameIndices(this);
    }
    pFVar9 = TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&this->MaterialParameterCache,local_res10);
    if (pFVar9 == (FMaterialParameterCache *)0x0) {
      if (4 < (byte)LogMaterialParameter._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,local_48,(UObject *)0x0);
        ::FName::ToString(&local_res10,&local_58);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMaterialParameter);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      pFVar12 = (pFVar9->ScalarParameterMaterialIndices).AllocatorInstance.Data;
      iVar10 = (pFVar9->ScalarParameterMaterialIndices).ArrayNum;
      pFVar1 = pFVar12 + (longlong)iVar10 * 4;
      while( true ) {
        if ((pFVar9->ScalarParameterMaterialIndices).ArrayNum != iVar10) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar12 == pFVar1) break;
        uVar2 = *(undefined4 *)pFVar12;
        pUVar8 = (UMaterialInstanceDynamic *)(**(code **)(this->_padding_ + 0x690))(this,uVar2);
        if (pUVar8 != (UMaterialInstanceDynamic *)0x0) {
          pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar3 = (int)pUVar7->_padding_;
          if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar7->_padding_)) {
            pUVar8 = (UMaterialInstanceDynamic *)(**(code **)(this->_padding_ + 0x6c8))(this,uVar2);
          }
          UMaterialInstanceDynamic::SetScalarParameterValue(pUVar8,local_res10,param_2);
        }
        pFVar12 = pFVar12 + 4;
      }
    }
  }
  return;
}

// SetTextureForceResidentFlag @ 1478f5870

void __thiscall UMeshComponent::SetTextureForceResidentFlag(UMeshComponent *this,bool param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  UStreamableRenderAsset *this_00;
  float fVar4;
  int iVar5;
  Type TVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined8 *local_38;
  undefined8 local_30;
  
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  pcVar3 = *(code **)(this->_padding_ + 0x7f8);
  TVar6 = GetCurrentMaterialQualityLevelChecked();
  (*pcVar3)(this,&local_38,TVar6);
  fVar4 = __real_bf800000;
  iVar5 = (int)local_30;
  puVar1 = local_38 + (int)local_30;
  puVar8 = local_38;
  while( true ) {
    if ((int)local_30 != iVar5) {
      `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar8 == puVar1) break;
    this_00 = (UStreamableRenderAsset *)*puVar8;
    if (this_00 != (UStreamableRenderAsset *)0x0) {
      pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar7->_padding_)) {
        UStreamableRenderAsset::SetForceMipLevelsToBeResident(this_00,fVar4,0);
        this_00->bForceMiplevelsToBeResident = '\0';
        this_00->field_0xd0 = this_00->field_0xd0 | param_1 << 3;
      }
    }
    puVar8 = puVar8 + 1;
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// SetVectorParameterValueOnMaterials @ 1478f6410

void __thiscall
UMeshComponent::SetVectorParameterValueOnMaterials
          (UMeshComponent *this,FName param_1,TVector<double> *param_2)

{
  FLinearColor *pFVar1;
  FLinearColor_u_0 local_28;
  FLinearColor local_18;
  
  pFVar1 = FLinearColor::FLinearColor(&local_18,param_2);
  local_28._0_8_ = *(undefined8 *)&pFVar1->field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&pFVar1->field0_0x0 + 8);
  SetColorParameterValueOnMaterials(this,param_1,(FLinearColor *)&local_28._s_0);
  return;
}

// StaticRegisterNativesUMeshComponent @ 1478f80e0

void __cdecl UMeshComponent::StaticRegisterNativesUMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMaterials @ 147904200

void __cdecl UMeshComponent::execGetMaterials(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0xa90))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetOverlayMaterial @ 147904580

void __cdecl UMeshComponent::execGetOverlayMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x22].field_0x8 != 0) {
    *(longlong *)param_3 = *(longlong *)&param_1[0x22].field_0x8;
    return;
  }
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb18))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetOverlayMaterialMaxDrawDistance @ 1479045d0

void __cdecl
UMeshComponent::execGetOverlayMaterialMaxDrawDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(float *)&param_1[0x22].field_0x10 != 0.0) {
    *(float *)param_3 = *(float *)&param_1[0x22].field_0x10;
    return;
  }
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb20))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execPrestreamMeshLODs @ 1479077f0

void __cdecl UMeshComponent::execPrestreamMeshLODs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xac8))(param_1,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execPrestreamTextures @ 147907890

void __cdecl UMeshComponent::execPrestreamTextures(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
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
  (**(code **)(*(longlong *)param_1 + 0xac0))(param_1,local_res20[0],bVar2,local_res10[0]);
  return;
}

// execSetColorParameterValueOnMaterials @ 14790a4d0

void __cdecl
UMeshComponent::execSetColorParameterValueOnMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetColorParameterValueOnMaterials
            ((UMeshComponent *)param_1,local_res10,(FLinearColor *)&local_18._s_0);
  return;
}

// execSetOverlayMaterial @ 14790ffb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UMeshComponent::execSetOverlayMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)&param_1[0x22].field_0x8 == (UObject *)0x0) {
    bVar3 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar3 = *(UObject **)&param_1[0x22].field_0x8 == local_res8;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)&param_1[0x22].field_0x8 = pUVar2;
    (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetOverlayMaterialMaxDrawDistance @ 147910080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMeshComponent::execSetOverlayMaterialMaxDrawDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] != *(float *)&param_1[0x22].field_0x10) {
    *(float *)&param_1[0x22].field_0x10 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetScalarParameterValueOnMaterials @ 1479113d0

void __cdecl
UMeshComponent::execSetScalarParameterValueOnMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetScalarParameterValueOnMaterials((UMeshComponent *)param_1,local_res20,local_res10[0]);
  return;
}

// execSetVectorParameterValueOnMaterials @ 1479132a0

void __cdecl
UMeshComponent::execSetVectorParameterValueOnMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FLinearColor *pFVar3;
  FName local_res10;
  FLinearColor_u_0 local_68;
  FLinearColor local_58;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FVar2 = local_res10;
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FLinearColor::FLinearColor(&local_58,(TVector<double> *)&local_28._s_0);
  local_68._0_8_ = *(undefined8 *)&pFVar3->field0_0x0;
  local_68._8_8_ = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
  SetColorParameterValueOnMaterials((UMeshComponent *)param_1,FVar2,(FLinearColor *)&local_68._s_0);
  return;
}

