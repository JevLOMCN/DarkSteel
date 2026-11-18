// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 1481ba890

UScriptStruct * __cdecl FWorldPSCPool::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldPSCPool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPSCPool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPSCPool,(UObject *)pUVar1,L"WorldPSCPool");
  }
  return Z_Registration_Info_UScriptStruct_FWorldPSCPool.OuterSingleton;
}

// FWorldPSCPool @ 1481c8140

FWorldPSCPool * __thiscall FWorldPSCPool::FWorldPSCPool(FWorldPSCPool *this)

{
  *(undefined8 *)&(this->WorldParticleSystemPools).field_0x8 = 0;
  *(undefined8 *)&this->WorldParticleSystemPools = 0;
  *(undefined8 *)&(this->WorldParticleSystemPools).field_0x20 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x28 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x34 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldParticleSystemPools).field_0x40 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x48 = 0;
  this->LastParticleSytemPoolCleanTime = 0.0;
  this->CachedWorldTime = 0.0;
  return this;
}

// ~FWorldPSCPool @ 1481c95d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FWorldPSCPool::~FWorldPSCPool(FWorldPSCPool *this)

{
  void *pvVar1;
  
  Cleanup(this,(UWorld *)0x0);
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldParticleSystemPools).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Cleanup @ 1481d9bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FWorldPSCPool::Cleanup(FWorldPSCPool *this,UWorld *param_1)

{
  undefined1 *this_00;
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  FWorldPSCPool *pFVar5;
  bool bVar6;
  AWorldSettings *this_01;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  UClass *pUVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  FWorldPSCPool *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  UClass *local_88;
  UClass *local_80;
  FWorldPSCPool *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar2 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  this_00 = &(this->WorldParticleSystemPools).field_0x10;
  pUVar9 = (UClass *)0x0;
  pUVar14 = (UClass *)0x0;
  local_a0 = 0;
  uStack_b4 = 1;
  pUVar7 = pUVar9;
  uStack_a4 = local_a0;
  if (uVar2 != 0) {
    puVar18 = *(uint **)&(this->WorldParticleSystemPools).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)this_00;
    }
    uVar16 = *puVar18;
    pUVar8 = pUVar9;
    local_a0 = 0;
    while (uVar16 == 0) {
      iVar11 = (int)pUVar7;
      local_a0 = (int)pUVar8 + 0x20;
      pUVar8 = (UClass *)(ulonglong)local_a0;
      uVar16 = iVar11 + 1;
      pUVar7 = (UClass *)(ulonglong)uVar16;
      uStack_a4 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_1481d9c6d;
      uVar16 = puVar18[(longlong)iVar11 + 1];
    }
    uStack_b4 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_b4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_90 = (int)lVar10;
    uStack_a4 = (local_a0 - 1) + local_90;
    if ((int)uVar2 < (int)uStack_a4) {
      uStack_a4 = uVar2;
    }
  }
LAB_1481d9c6d:
  local_d8 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  uVar16 = local_d8 & 0xffffffe0;
  iStack_98 = *(int *)&(this->WorldParticleSystemPools).field_0x8 -
              *(int *)&(this->WorldParticleSystemPools).field_0x34;
  uStack_a8 = 0xffffffff;
  uStack_b8 = SUB84(pUVar7,0);
  TStack_70._padding_ = CONCAT44(uStack_b4,uStack_b8);
  TStack_70.CurrentBitIndex = uStack_a4;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)local_d8 >> 5;
  TStack_70._28_4_ = uStack_a4;
  TStack_70.BaseBitIndex = local_a0;
  uStack_50 = CONCAT44(uStack_94,iStack_98);
  local_res10 = param_1;
  local_c0 = this;
  local_b0 = this_00;
  uStack_9c = uStack_a4;
  local_78 = this;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  if ((((int)local_d8 < 0) || ((int)uVar2 < (int)local_d8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  if (local_d8 != uVar2) {
    puVar17 = *(undefined1 **)&(this->WorldParticleSystemPools).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = this_00;
    }
    uVar15 = -1 << ((byte)local_d8 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      local_d8 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1481d9d70;
      uVar15 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_d8 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar2 < (int)local_d8) {
      local_d8 = uVar2;
    }
  }
LAB_1481d9d70:
  while( true ) {
    pFVar5 = local_78;
    if (*(int *)&(local_78->WorldParticleSystemPools).field_0x8 -
        *(int *)&(local_78->WorldParticleSystemPools).field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == local_d8) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) && (pFVar5 == this))
    break;
    lVar10 = *(longlong *)&pFVar5->WorldParticleSystemPools;
    iVar11 = *(int *)(lVar10 + 0x10 + (longlong)TStack_70.CurrentBitIndex * 0x48);
    lVar10 = lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x48;
    plVar12 = *(longlong **)(lVar10 + 8);
    plVar13 = plVar12 + (longlong)iVar11 * 2;
    while( true ) {
      if (*(int *)(lVar10 + 0x10) != iVar11) {
        `TCheckedPointerIterator<FPSCPoolElem,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (plVar12 == plVar13) break;
      if (*plVar12 == 0) {
        if (1 < (byte)LogParticles._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
        plVar12 = plVar12 + 2;
      }
      else {
        *(undefined1 *)(*plVar12 + 0x584) = 0;
        (**(code **)(*(longlong *)*plVar12 + 0x4a0))();
        plVar12 = plVar12 + 2;
      }
    }
    *(undefined4 *)(lVar10 + 0x10) = 0;
    if (*(int *)(lVar10 + 0x14) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(lVar10 + 8),0,(int *)(lVar10 + 0x14));
    }
    *(undefined4 *)(lVar10 + 0x20) = 0;
    if (*(int *)(lVar10 + 0x24) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)(lVar10 + 0x18),0,(int *)(lVar10 + 0x24));
    }
    *(undefined4 *)(lVar10 + 0x30) = 0;
    if (*(int *)(lVar10 + 0x34) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)(lVar10 + 0x28),0,(int *)(lVar10 + 0x34));
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  bVar6 = 1 < *(int *)&(this->WorldParticleSystemPools).field_0x48;
  if (!bVar6) {
    TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->WorldParticleSystemPools).field_0x8);
  puVar17 = &(this->WorldParticleSystemPools).field_0xc;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x8 = 0;
  if (*(int *)puVar17 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this,0,(int *)puVar17);
  }
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x34 = 0;
  iVar11 = *(int *)&(this->WorldParticleSystemPools).field_0x2c;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->WorldParticleSystemPools).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  if (bVar6) {
    *(undefined4 *)&(this->WorldParticleSystemPools).field_0x48 = 1;
    TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
              *)this);
  }
  if (local_res10 == (UWorld *)0x0) {
    return;
  }
  this_01 = UWorld::GetWorldSettings(local_res10,false,false);
  if (this_01 == (AWorldSettings *)0x0) {
    return;
  }
  local_d0 = (longlong *)0x0;
  local_c8 = 0;
  pUVar7 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UClass *)0x0) goto LAB_1481d9fca;
  }
  else {
    pUVar14 = pUVar9;
    if (pUVar7 == (UClass *)0x0) goto LAB_1481d9fca;
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar14 = pUVar9;
  if (pUVar8 != (UClass *)0x0) {
    iVar11 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar11 * 8) != &pUVar8->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar14 = pUVar7;
    }
  }
LAB_1481d9fca:
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == pUVar9) {
    local_88 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UParticleSystemComponent,1,0,_AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this_01,(TSubclassOf<UActorComponent>)&local_88,
               (TArray<UParticleSystemComponent_*,TSizedDefaultAllocator<32>_> *)&local_d0);
  }
  else {
    local_80 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UParticleSystemComponent,0,0,_AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this_01,(TSubclassOf<UActorComponent>)&local_80,
               (TArray<UParticleSystemComponent_*,TSizedDefaultAllocator<32>_> *)&local_d0);
  }
  iVar11 = (int)local_c8;
  plVar12 = local_d0 + (int)local_c8;
  plVar13 = local_d0;
  while( true ) {
    if ((int)local_c8 != iVar11) {
      `TCheckedPointerIterator<UParticleSystemComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (plVar13 == plVar12) break;
    plVar3 = (longlong *)*plVar13;
    if ((*(char *)((longlong)plVar3 + 0x584) == '\x01') ||
       (*(char *)((longlong)plVar3 + 0x584) == '\x02')) {
      *(undefined1 *)((longlong)plVar3 + 0x584) = 0;
      (**(code **)(*plVar3 + 0x4a0))(plVar3,0);
    }
    plVar13 = plVar13 + 1;
  }
  if (local_d0 != (longlong *)0x0) {
    FMemory::Free(local_d0);
  }
  return;
}

// CreateWorldParticleSystem @ 1481e0690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UParticleSystemComponent * __thiscall
FWorldPSCPool::CreateWorldParticleSystem
          (FWorldPSCPool *this,UParticleSystem *param_1,UWorld *param_2,EPSCPoolMethod param_3)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UParticleSystemComponent *pUVar5;
  FPSCPool *this_00;
  uint uVar6;
  TObjectPtr<UParticleSystem>_u_0 TVar7;
  TObjectPtr<UParticleSystem>_u_0 local_res10;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                         ,0xff,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UParticleSystemComponent *)(*pcVar3)();
    return pUVar5;
  }
  if ((param_2 == (UWorld *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                         ,0x100,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UParticleSystemComponent *)(*pcVar3)();
    return pUVar5;
  }
  if (param_1 == (UParticleSystem *)0x0) {
    if ((byte)LogParticles._0_1_ < 3) {
      return (UParticleSystemComponent *)0x0;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    return (UParticleSystemComponent *)0x0;
  }
  if (param_2->bIsTearingDown == '\0') {
    if (GbEnableParticleSystemPooling == 0) {
      bVar4 = 1 < *(int *)&(this->WorldParticleSystemPools).field_0x48;
      if (!bVar4) {
        TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
                          *)this);
      }
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,0,*(int *)&(this->WorldParticleSystemPools).field_0x8);
      puVar1 = &(this->WorldParticleSystemPools).field_0xc;
      *(undefined4 *)&(this->WorldParticleSystemPools).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->WorldParticleSystemPools).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->WorldParticleSystemPools).field_0x34 = 0;
      iVar2 = *(int *)&(this->WorldParticleSystemPools).field_0x2c;
      *(undefined4 *)&(this->WorldParticleSystemPools).field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->WorldParticleSystemPools).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->WorldParticleSystemPools).field_0x10,0);
      }
      if (bVar4) {
        *(undefined4 *)&(this->WorldParticleSystemPools).field_0x48 = 1;
        TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
                  *)this);
      }
    }
    else {
      bVar4 = UParticleSystem::CanBePooled(param_1);
      if (bVar4) {
        TVar7.DebugPtr = param_1;
        local_res10.DebugPtr = param_1;
        if (((UE::GC::GIsIncrementalReachabilityPending != false) &&
            (UE::GC::MarkAsReachable((UObject *)param_1), TVar7 = local_res10,
            UE::GC::GIsIncrementalReachabilityPending != false)) &&
           (local_res10.DebugPtr != (UParticleSystem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
        }
        uVar6 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
                (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        this_00 = TMapBase<TObjectPtr<UParticleSystem>,FPSCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>_>
                  ::FindOrAddImpl<TObjectPtr<UParticleSystem>_>
                            ((TMapBase<TObjectPtr<UParticleSystem>,FPSCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>_>
                              *)this,uVar6 >> 0x10 ^ uVar6,
                             (TObjectPtr<UParticleSystem> *)&local_res10.ObjectPtr);
        pUVar5 = FPSCPool::Acquire(this_00,param_2,param_1,param_3);
        if (pUVar5 != (UParticleSystemComponent *)0x0) {
          return pUVar5;
        }
      }
    }
    pUVar5 = NewObject<UParticleSystemComponent>((UObject *)param_2);
    pUVar5->bAutoDestroy = '\x01';
    pUVar5->field_0x9a = pUVar5->field_0x9a & 0xf7;
    pUVar5->SecondsBeforeInactive = 0.0;
    UParticleSystemComponent::SetTemplate(pUVar5,param_1);
    pUVar5->bOverrideLODMethod = '\0';
    return pUVar5;
  }
  if ((byte)LogParticles._0_1_ < 3) {
    return (UParticleSystemComponent *)0x0;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  return (UParticleSystemComponent *)0x0;
}

// Dump @ 1481e2b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWorldPSCPool::Dump(FWorldPSCPool *this)

{
  FWeakObjectPtr *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  FWorldPSCPool *pFVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  FWeakObjectPtr *pFVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_118 [4];
  int local_114;
  uint local_110;
  int local_10c;
  FString local_108;
  FWorldPSCPool *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int local_c4;
  FWeakObjectPtr local_c0;
  FWeakObjectPtr local_b8;
  UObjectBaseUtility *local_b0;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  FString local_a0;
  FWorldPSCPool *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60 [2];
  
  iStack_f0 = 0;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WorldParticleSystemPools).field_0x10;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  iVar17 = *(int *)&(this->WorldParticleSystemPools).field_0x28;
  uStack_ec = 1;
  local_114 = 0;
  local_d8 = 0;
  iStack_dc = 0;
  if (iVar17 != 0) {
    puVar19 = *(uint **)&(this->WorldParticleSystemPools).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar20;
    }
    uVar15 = *puVar19;
    local_d8 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_1481e2bbd;
      uVar15 = puVar19[lVar10 + 1];
    }
    uStack_ec = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_ec * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_c8 = (int)lVar10;
    iStack_dc = local_d8 + -1 + local_c8;
    if (iVar17 < iStack_dc) {
      iStack_dc = iVar17;
    }
  }
LAB_1481e2bbd:
  uVar15 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_d0 = *(int *)&(this->WorldParticleSystemPools).field_0x8 -
              *(int *)&(this->WorldParticleSystemPools).field_0x34;
  uStack_e0 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_88.CurrentBitIndex = iStack_dc;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_88._28_4_ = iStack_dc;
  TStack_88.BaseBitIndex = local_d8;
  uStack_68 = CONCAT44(uStack_cc,iStack_d0);
  local_110 = uVar15;
  local_f8 = this;
  local_e8 = (undefined1 *)pTVar20;
  iStack_d4 = iStack_dc;
  local_a8 = pTVar20;
  local_90 = this;
  TStack_88.Array = pTVar20;
  if ((((int)uVar15 < 0) || (iVar17 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  if (uVar15 != uVar3) {
    puVar18 = *(undefined1 **)&(this->WorldParticleSystemPools).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar20;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar3;
      local_110 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1481e2ce0;
      uVar15 = *(uint *)(puVar18 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_c4 = (int)lVar10;
    uVar15 = local_c4 + -1 + uVar14;
    local_110 = uVar15;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
      local_110 = uVar3;
    }
  }
LAB_1481e2ce0:
  while( true ) {
    pFVar6 = local_90;
    if (*(int *)&(local_90->WorldParticleSystemPools).field_0x8 -
        *(int *)&(local_90->WorldParticleSystemPools).field_0x34 != (int)uStack_68) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar10 = (longlong)TStack_88.CurrentBitIndex;
    if (((TStack_88.CurrentBitIndex == uVar15) && (TStack_88.Array == pTVar20)) && (pFVar6 == this))
    break;
    lVar4 = *(longlong *)&pFVar6->WorldParticleSystemPools;
    iVar11 = 0;
    iVar17 = *(int *)(lVar4 + 0x10 + lVar10 * 0x48);
    local_b0 = *(UObjectBaseUtility **)(lVar4 + lVar10 * 0x48);
    plVar12 = *(longlong **)(lVar4 + 8 + lVar10 * 0x48);
    plVar16 = plVar12 + (longlong)iVar17 * 2;
    while( true ) {
      if (*(int *)(lVar4 + 0x10 + lVar10 * 0x48) != iVar17) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPSCPoolElem,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (plVar12 == plVar16) break;
      if ((longlong *)*plVar12 == (longlong *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7702978739629457055>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                           ,0x161,"Elem.PSC");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        iVar8 = (**(code **)(*(longlong *)*plVar12 + 0xae8))();
        iVar11 = iVar11 + iVar8;
      }
      plVar12 = plVar12 + 2;
    }
    pFVar13 = *(FWeakObjectPtr **)(lVar4 + 0x18 + lVar10 * 0x48);
    iVar8 = 0;
    iVar17 = *(int *)(lVar4 + 0x20 + lVar10 * 0x48);
    pFVar1 = pFVar13 + iVar17;
    local_10c = iVar11;
    while( true ) {
      if (*(int *)(lVar4 + 0x20 + lVar10 * 0x48) != iVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar13 == pFVar1) break;
      local_c0 = *pFVar13;
      pUVar9 = FWeakObjectPtr::Get(&local_c0);
      if (pUVar9 == (UObject *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7702978739629457046>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                           ,0x16a,"PSC");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        iVar11 = (**(code **)(*(longlong *)pUVar9 + 0xae8))(pUVar9);
        iVar8 = iVar8 + iVar11;
      }
      pFVar13 = pFVar13 + 1;
    }
    pFVar13 = *(FWeakObjectPtr **)(lVar4 + 0x28 + lVar10 * 0x48);
    iVar17 = *(int *)(lVar4 + 0x30 + lVar10 * 0x48);
    pFVar1 = pFVar13 + iVar17;
    while( true ) {
      if (*(int *)(lVar4 + 0x30 + lVar10 * 0x48) != iVar17) {
        local_118[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_118);
      }
      if (pFVar13 == pFVar1) break;
      local_b8 = *pFVar13;
      pUVar9 = FWeakObjectPtr::Get(&local_b8);
      if (pUVar9 == (UObject *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7702978739629457038>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                           ,0x172,"PSC");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        iVar11 = (**(code **)(*(longlong *)pUVar9 + 0xae8))(pUVar9);
        iVar8 = iVar8 + iVar11;
      }
      pFVar13 = pFVar13 + 1;
    }
    local_114 = local_114 + iVar8 + local_10c;
    UObjectBaseUtility::GetFullName(local_b0,local_60,(UObject *)0x0,None);
    ::FString::PrintfImpl
              (&local_a0,
               L"Free: %d (%uB) \t|\t Used(Auto - Manual): %d - %d (%uB) \t|\t MaxUsed: %d \t|\t System: %s\n"
              );
    iVar17 = local_a0.Data.ArrayNum + -1;
    if (local_a0.Data.ArrayNum == 0) {
      iVar17 = 0;
    }
    ::FString::AppendChars(&local_108,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar17);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    pTVar20 = local_a8;
    uVar15 = local_110;
  }
  if (((4 < (byte)LogParticles._0_1_) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
      4 < (byte)LogParticles._0_1_)) &&
     ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
      4 < (byte)LogParticles._0_1_ &&
      ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
       4 < (byte)LogParticles._0_1_ &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
       4 < (byte)LogParticles._0_1_)))))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return;
}

// ReclaimWorldParticleSystem @ 14820ce60

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
FWorldPSCPool::ReclaimWorldParticleSystem(FWorldPSCPool *this,UParticleSystemComponent *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  TObjectPtr<UParticleSystem>_u_0 TVar4;
  code *pcVar5;
  FWorldPSCPool *pFVar6;
  bool bVar7;
  int iVar8;
  UWorld *pUVar9;
  longlong lVar10;
  FPSCPool *this_00;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  float fVar16;
  undefined1 local_res10 [8];
  TKeyInitializer<TObjectPtr<UParticleSystem>_const_&> local_res18;
  int local_res20;
  TObjectPtr<UParticleSystem>_u_0 local_f8;
  TObjectPtr<UParticleSystem>_u_0 *local_f0;
  FWorldPSCPool *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  FWorldPSCPool *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                         ,0x12d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1 == (UParticleSystemComponent *)0x0) ||
     ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
    if (4 < (byte)LogParticles._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(param_1->Template).field0_0x0.DebugPtr,local_78,
                 (UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  if (GbEnableParticleSystemPooling == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014820d2f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x4a0))(param_1,0);
    return;
  }
  pUVar9 = *(UWorld **)&param_1->field_0xb0;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  fVar16 = (float)pUVar9->TimeSeconds;
  if (GParticleSystemPoolingCleanTime < fVar16 - this->LastParticleSytemPoolCleanTime) {
    iStack_e0 = 0;
    puVar1 = &(this->WorldParticleSystemPools).field_0x10;
    this->LastParticleSytemPoolCleanTime = fVar16;
    iVar8 = *(int *)&(this->WorldParticleSystemPools).field_0x28;
    uStack_dc = 1;
    local_c8 = 0;
    iStack_cc = iStack_e0;
    if (iVar8 != 0) {
      puVar14 = *(uint **)&(this->WorldParticleSystemPools).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar12 = *puVar14;
      local_c8 = 0;
      iStack_e0 = 0;
      while (uVar12 == 0) {
        lVar10 = (longlong)iStack_e0;
        local_c8 = local_c8 + 0x20;
        iStack_e0 = iStack_e0 + 1;
        iStack_cc = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14820cfbd;
        uVar12 = puVar14[lVar10 + 1];
      }
      uStack_dc = -uVar12 & uVar12;
      uVar2 = (ulonglong)uStack_dc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iStack_cc = local_c8 + -1 + local_res20;
      if (iVar8 < iStack_cc) {
        iStack_cc = iVar8;
      }
    }
LAB_14820cfbd:
    uVar12 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
    uStack_c4 = local_4c;
    uVar15 = uVar12 & 0xffffffe0;
    iStack_c0 = *(int *)&(this->WorldParticleSystemPools).field_0x8 -
                *(int *)&(this->WorldParticleSystemPools).field_0x34;
    uStack_d0 = 0xffffffff;
    TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
    TStack_b0.CurrentBitIndex = iStack_cc;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar12 >> 5;
    TStack_b0._28_4_ = local_4c;
    TStack_b0.BaseBitIndex = local_c8;
    uStack_90 = CONCAT44(uStack_bc,iStack_c0);
    local_e8 = this;
    local_d8 = puVar1;
    local_b8 = this;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
    if (uVar12 != uVar3) {
      puVar13 = *(undefined1 **)&(this->WorldParticleSystemPools).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar12 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14820d0e0;
        uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar12 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar3 < (int)uVar12) {
        uVar12 = uVar3;
      }
    }
LAB_14820d0e0:
    while( true ) {
      pFVar6 = local_b8;
      if (*(int *)&(local_b8->WorldParticleSystemPools).field_0x8 -
          *(int *)&(local_b8->WorldParticleSystemPools).field_0x34 != (int)uStack_90) {
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_b0.CurrentBitIndex == uVar12) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == this))
      break;
      FPSCPool::KillUnusedComponents
                ((FPSCPool *)
                 (*(longlong *)&pFVar6->WorldParticleSystemPools + 8 +
                 (longlong)TStack_b0.CurrentBitIndex * 0x48),
                 fVar16 - GParticleSystemPoolKillUnusedTime,(param_1->Template).field0_0x0.DebugPtr)
      ;
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
  }
  TVar4 = (TObjectPtr<UParticleSystem>_u_0)(param_1->Template).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UParticleSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  local_f8 = TVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar4.DebugPtr != (UParticleSystem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar4.DebugPtr != (UParticleSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
  }
  uVar12 = ((uint)((ulonglong)TVar4.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar4.DebugPtr >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  iVar8 = TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UParticleSystem_const_>_>
                    ((TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
                      *)this,uVar12 >> 0x10 ^ uVar12,
                     (TObjectPtr<UParticleSystem_const_> *)&local_f8.ObjectPtr);
  if (iVar8 != -1) {
    lVar10 = *(longlong *)&this->WorldParticleSystemPools + (longlong)iVar8 * 0x48;
    this_00 = (FPSCPool *)(lVar10 + 8);
    if (lVar10 == 0) {
      this_00 = (FPSCPool *)0x0;
    }
    if (this_00 != (FPSCPool *)0x0) goto LAB_14820d2b1;
  }
  if (2 < (byte)LogParticles._0_1_) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)(param_1->Template).field0_0x0.DebugPtr,&local_88,
               (UObject *)0x0,None);
    if (*(longlong *)&param_1->field_0xb0 == 0) {
      UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  local_f0 = &(param_1->Template).field0_0x0;
  TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TObjectPtr<UParticleSystem>_const_&>_>
            ((TSet<TTuple<TObjectPtr<UParticleSystem>,FPSCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UParticleSystem>,FPSCPool,0>,FDefaultSetAllocator>
              *)this,&local_res18,(bool *)&local_f0);
  this_00 = (FPSCPool *)
            (*(longlong *)&this->WorldParticleSystemPools +
            ((longlong)(int)local_res18.Key * 9 + 1) * 8);
LAB_14820d2b1:
  FPSCPool::Reclaim(this_00,param_1,fVar16);
  return;
}

