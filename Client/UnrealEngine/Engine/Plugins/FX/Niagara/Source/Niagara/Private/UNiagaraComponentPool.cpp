// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// StaticClass @ 148fe7ea0

UClass * __cdecl UNiagaraComponentPool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraComponentPool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraComponentPool",
               &Z_Registration_Info_UClass_UNiagaraComponentPool.InnerSingleton,
               StaticRegisterNativesUNiagaraComponentPool,0xa8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraComponentPool>,
               InternalVTableHelperCtorCaller<UNiagaraComponentPool>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraComponentPool.InnerSingleton;
}

// UNiagaraComponentPool @ 149024350

UNiagaraComponentPool * __thiscall
UNiagaraComponentPool::UNiagaraComponentPool(UNiagaraComponentPool *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraComponentPool__6B_;
  *(undefined8 *)&this->WorldParticleSystemPools = 0;
  *(undefined8 *)&(this->WorldParticleSystemPools).field_0x8 = 0;
  *(undefined8 *)&(this->WorldParticleSystemPools).field_0x20 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x28 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x34 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldParticleSystemPools).field_0x40 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x48 = 0;
  (this->InUseComponents_Auto).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InUseComponents_Auto).ArrayNum = 0;
  (this->InUseComponents_Auto).ArrayMax = 0;
  (this->InUseComponents_Manual).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InUseComponents_Manual).ArrayNum = 0;
  (this->InUseComponents_Manual).ArrayMax = 0;
  this->MaxUsed = 0;
  return this;
}

// UNiagaraComponentPool @ 1490243d0

UNiagaraComponentPool * __thiscall
UNiagaraComponentPool::UNiagaraComponentPool
          (UNiagaraComponentPool *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraComponentPool__6B_;
  *(undefined8 *)&this->WorldParticleSystemPools = 0;
  *(undefined8 *)&(this->WorldParticleSystemPools).field_0x8 = 0;
  *(undefined8 *)&(this->WorldParticleSystemPools).field_0x20 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x28 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x34 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldParticleSystemPools).field_0x40 = 0;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x48 = 0;
  (this->InUseComponents_Auto).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InUseComponents_Auto).ArrayNum = 0;
  (this->InUseComponents_Auto).ArrayMax = 0;
  (this->InUseComponents_Manual).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InUseComponents_Manual).ArrayNum = 0;
  (this->InUseComponents_Manual).ArrayMax = 0;
  this->MaxUsed = 0;
  this->LastParticleSytemPoolCleanTime = 0.0;
  return this;
}

// ~UNiagaraComponentPool @ 149026850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UNiagaraComponentPool::~UNiagaraComponentPool(UNiagaraComponentPool *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraComponentPool__6B_;
  Cleanup(this,(UWorld *)0x0);
  pFVar1 = (this->InUseComponents_Manual).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InUseComponents_Auto).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WorldParticleSystemPools).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldParticleSystemPools);
  UObject::~UObject((UObject *)this);
  return;
}

// Cleanup @ 1490324e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraComponentPool::Cleanup(UNiagaraComponentPool *this,UWorld *param_1)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *this_00;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *pTVar7;
  bool bVar8;
  AWorldSettings *this_01;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  UClass *pUVar19;
  uint uVar20;
  FNiagaraCrashReporterScope local_res8 [8];
  UWorld *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_d8;
  undefined8 local_d0;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
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
  UClass *local_90;
  UClass *local_88;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  uVar4 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  puVar1 = &(this->WorldParticleSystemPools).field_0x10;
  pUVar11 = (UClass *)0x0;
  pUVar19 = (UClass *)0x0;
  this_00 = &this->WorldParticleSystemPools;
  uStack_c0 = 0;
  uStack_bc = 1;
  uStack_ac = uStack_c0;
  local_a8 = uStack_c0;
  if (uVar4 != 0) {
    puVar18 = *(uint **)&(this->WorldParticleSystemPools).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    pUVar9 = pUVar11;
    pUVar10 = pUVar11;
    local_a8 = 0;
    uStack_c0 = 0;
    while (uVar16 == 0) {
      iVar13 = (int)pUVar9;
      local_a8 = (int)pUVar10 + 0x20;
      pUVar10 = (UClass *)(ulonglong)local_a8;
      uStack_c0 = iVar13 + 1;
      pUVar9 = (UClass *)(ulonglong)uStack_c0;
      uStack_ac = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c0)
      goto LAB_14903258d;
      uVar16 = puVar18[(longlong)iVar13 + 1];
    }
    uStack_bc = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_bc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_98 = (int)lVar12;
    uStack_ac = (local_a8 - 1) + local_98;
    if ((int)uVar4 < (int)uStack_ac) {
      uStack_ac = uVar4;
    }
  }
LAB_14903258d:
  iStack_a0 = *(int *)&(this->WorldParticleSystemPools).field_0x8 -
              *(int *)&(this->WorldParticleSystemPools).field_0x34;
  uVar16 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  uStack_b0 = 0xffffffff;
  uVar20 = uVar16 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_bc,uStack_c0);
  TStack_78.CurrentBitIndex = uStack_ac;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_78._28_4_ = uStack_ac;
  TStack_78.BaseBitIndex = local_a8;
  uStack_58 = CONCAT44(uStack_9c,iStack_a0);
  local_res10 = param_1;
  local_c8 = this_00;
  local_b8 = puVar1;
  uStack_a4 = uStack_ac;
  local_80 = this_00;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || ((int)uVar4 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->WorldParticleSystemPools).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar20 = uVar20 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149032690;
      uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar20;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_149032690:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)(&local_80->field_0x0 + 8) - *(int *)(&local_80->field_0x0 + 0x34) != (int)uStack_58
       ) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == this_00))
    break;
    puVar14 = (undefined8 *)
              (*(longlong *)&pTVar7->field_0x0 + (longlong)TStack_78.CurrentBitIndex * 0x20);
    FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_res8,(UNiagaraSystem *)*puVar14);
    FNCPool::Cleanup((FNCPool *)(puVar14 + 1));
    FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_res8);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  bVar8 = 1 < *(int *)&(this->WorldParticleSystemPools).field_0x48;
  if (!bVar8) {
    TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->WorldParticleSystemPools).field_0x8);
  puVar1 = &(this->WorldParticleSystemPools).field_0xc;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x34 = 0;
  iVar13 = *(int *)&(this->WorldParticleSystemPools).field_0x2c;
  *(undefined4 *)&(this->WorldParticleSystemPools).field_0x28 = 0;
  if ((iVar13 < 0) || (0x80 < iVar13)) {
    *(undefined4 *)&(this->WorldParticleSystemPools).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WorldParticleSystemPools).field_0x10,
               0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->WorldParticleSystemPools).field_0x48 = 1;
    TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (local_res10 == (UWorld *)0x0) {
    return;
  }
  this_01 = UWorld::GetWorldSettings(local_res10,false,false);
  if (this_01 == (AWorldSettings *)0x0) {
    return;
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  pUVar9 = UNiagaraComponent::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar9 == (UClass *)0x0) goto LAB_14903280e;
  }
  else {
    pUVar19 = pUVar11;
    if (pUVar9 == (UClass *)0x0) goto LAB_14903280e;
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar19 = pUVar11;
  if (pUVar10 != (UClass *)0x0) {
    iVar13 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar13) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar13 * 8) !=
        &pUVar10->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      pUVar19 = pUVar9;
    }
  }
LAB_14903280e:
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar19 == pUVar11) {
    local_90 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    AActor::
    ForEachComponent_Internal<UNiagaraComponent,1,0,_AActor::GetComponents<UNiagaraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this_01,(TSubclassOf<UActorComponent>)&local_90,
               (TArray<UNiagaraComponent_*,TSizedDefaultAllocator<32>_> *)&local_d8);
  }
  else {
    local_88 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    AActor::
    ForEachComponent_Internal<UNiagaraComponent,0,0,_AActor::GetComponents<UNiagaraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this_01,(TSubclassOf<UActorComponent>)&local_88,
               (TArray<UNiagaraComponent_*,TSizedDefaultAllocator<32>_> *)&local_d8);
  }
  iVar13 = (int)local_d0;
  plVar2 = local_d8 + (int)local_d0;
  plVar15 = local_d8;
  while( true ) {
    if ((int)local_d0 != iVar13) {
      `TCheckedPointerIterator<UNiagaraComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (plVar15 == plVar2) break;
    plVar5 = (longlong *)*plVar15;
    if (((char)plVar5[0xd0] == '\x01') || ((char)plVar5[0xd0] == '\x02')) {
      *(undefined1 *)(plVar5 + 0xd0) = 0;
      (**(code **)(*plVar5 + 0x4a0))(plVar5,0);
    }
    plVar15 = plVar15 + 1;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}

// ClearPool @ 149032aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraComponentPool::ClearPool(UNiagaraComponentPool *this,UNiagaraSystem *param_1)

{
  FNCPool *this_00;
  UNiagaraSystem *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
            ::Find((TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
                    *)&this->WorldParticleSystemPools,(TObjectPtr<UNiagaraSystem_const_>)local_res8)
  ;
  if (this_00 != (FNCPool *)0x0) {
    FNCPool::Cleanup(this_00);
    return;
  }
  return;
}

// CreateWorldParticleSystem @ 14903c120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __thiscall
UNiagaraComponentPool::CreateWorldParticleSystem
          (UNiagaraComponentPool *this,UNiagaraSystem *param_1,UWorld *param_2,ENCPoolMethod param_3
          )

{
  int *piVar1;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *this_00;
  undefined1 *puVar2;
  TArray<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  byte *pbVar4;
  FWeakObjectPtr *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UNiagaraComponent *pUVar9;
  FNCPool *this_01;
  uint uVar10;
  TObjectPtr<UNiagaraSystem>_u_0 TVar11;
  FNiagaraCrashReporterScope local_res10 [8];
  TObjectPtr<UNiagaraSystem>_u_0 local_res18;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  UNiagaraComponent *local_48;
  UNiagaraComponent *local_40;
  UNiagaraComponent *local_38 [2];
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x176,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar9 = (UNiagaraComponent *)(*pcVar6)();
    return pUVar9;
  }
  if ((param_2 == (UWorld *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x177,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar9 = (UNiagaraComponent *)(*pcVar6)();
    return pUVar9;
  }
  if (param_1 == (UNiagaraSystem *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return (UNiagaraComponent *)0x0;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    return (UNiagaraComponent *)0x0;
  }
  if (param_2->bIsTearingDown != '\0') {
    if ((byte)LogNiagara._0_1_ < 3) {
      return (UNiagaraComponent *)0x0;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    return (UNiagaraComponent *)0x0;
  }
  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_res10,param_1);
  if (GbEnableNiagaraSystemPooling == 0) {
    this_00 = &this->WorldParticleSystemPools;
    bVar7 = 1 < *(int *)&(this->WorldParticleSystemPools).field_0x48;
    if (!bVar7) {
      TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->WorldParticleSystemPools).field_0x8);
    puVar2 = &(this->WorldParticleSystemPools).field_0xc;
    *(undefined4 *)&(this->WorldParticleSystemPools).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->WorldParticleSystemPools).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->WorldParticleSystemPools).field_0x34 = 0;
    iVar8 = *(int *)&(this->WorldParticleSystemPools).field_0x2c;
    *(undefined4 *)&(this->WorldParticleSystemPools).field_0x28 = 0;
    if ((iVar8 < 0) || (0x80 < iVar8)) {
      *(undefined4 *)&(this->WorldParticleSystemPools).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->WorldParticleSystemPools).field_0x10,0);
    }
    if (bVar7) {
      *(undefined4 *)&(this->WorldParticleSystemPools).field_0x48 = 1;
      TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  else if ((int)param_1->_padding_ != 0) {
    TVar11.DebugPtr = param_1;
    local_res18.DebugPtr = param_1;
    if (((UE::GC::GIsIncrementalReachabilityPending != false) &&
        (UE::GC::MarkAsReachable((UObject *)param_1), TVar11 = local_res18,
        UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (local_res18.DebugPtr != (UNiagaraSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
    uVar10 = ((uint)((ulonglong)TVar11.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)TVar11.DebugPtr >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    this_01 = TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
              ::FindOrAddImpl<TObjectPtr<UNiagaraSystem>_>
                        ((TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
                          *)&this->WorldParticleSystemPools,uVar10 >> 0x10 ^ uVar10,
                         (TObjectPtr<UNiagaraSystem> *)&local_res18.ObjectPtr);
    pUVar9 = FNCPool::Acquire(this_01,param_2,param_1,param_3,false);
    if (pUVar9 != (UNiagaraComponent *)0x0) {
      if (param_3 == AutoRelease) {
        pTVar3 = &this->InUseComponents_Auto;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        local_58.ObjectIndex = 0;
        local_58.ObjectSerialNumber = 0;
        local_48 = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_48);
        pFVar5 = (FWeakObjectPtr *)(pTVar3->AllocatorInstance).Data;
        if (((pFVar5 <= &local_58) && (&local_58 < pFVar5 + (this->InUseComponents_Auto).ArrayMax))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pUVar9 = (UNiagaraComponent *)(*pcVar6)();
          return pUVar9;
        }
        iVar8 = (this->InUseComponents_Auto).ArrayNum;
        piVar1 = &(this->InUseComponents_Auto).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->InUseComponents_Auto).ArrayNum = iVar8 + 1;
        *(FWeakObjectPtr *)((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_58;
      }
      else if (param_3 == ManualRelease) {
        pTVar3 = &this->InUseComponents_Manual;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        local_50.ObjectIndex = 0;
        local_50.ObjectSerialNumber = 0;
        local_40 = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
        pFVar5 = (FWeakObjectPtr *)(pTVar3->AllocatorInstance).Data;
        if (((pFVar5 <= &local_50) && (&local_50 < pFVar5 + (this->InUseComponents_Manual).ArrayMax)
            ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pUVar9 = (UNiagaraComponent *)(*pcVar6)();
          return pUVar9;
        }
        iVar8 = (this->InUseComponents_Manual).ArrayNum;
        piVar1 = &(this->InUseComponents_Manual).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->InUseComponents_Manual).ArrayNum = iVar8 + 1;
        *(FWeakObjectPtr *)((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_50;
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2076570787300507244>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                           ,0x194,"PoolingMethod == ENCPoolMethod::ManualRelease");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pUVar9 = (UNiagaraComponent *)(*pcVar6)();
          return pUVar9;
        }
      }
      goto LAB_14903c5a9;
    }
  }
  pUVar9 = NewObject<UNiagaraComponent>((UObject *)param_2);
  if ((pUVar9->PoolingMethod == None) ||
     (local_38[0] = pUVar9,
     bVar7 = `UNiagaraComponent::SetAutoDestroy'::__l3::<lambda_1>::operator()(local_38), bVar7)) {
    pUVar9->bAutoDestroy = 1;
  }
  pbVar4 = (byte *)((longlong)&pUVar9->_padding_ + 2);
  *pbVar4 = *pbVar4 & 0xf7;
  UNiagaraComponent::SetAsset(pUVar9,param_1,true);
  pUVar9->PoolingMethod = param_3;
LAB_14903c5a9:
  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_res10);
  return pUVar9;
}

// Dump @ 14903ec70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNiagaraComponentPool::Dump(UNiagaraComponentPool *this)

{
  FWeakObjectPtr *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  UObjectBaseUtility *this_00;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  FWeakObjectPtr *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *pTVar19;
  int iVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_138 [4];
  int local_134;
  uint local_130;
  int local_12c;
  int local_128;
  undefined4 local_124;
  FString local_120;
  longlong local_110;
  longlong local_108;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  UObjectBaseUtility *local_c8;
  FWeakObjectPtr local_c0;
  FWeakObjectPtr local_b8;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *local_a8;
  FString local_a0;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60 [2];
  
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WorldParticleSystemPools).field_0x10;
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar19 = &this->WorldParticleSystemPools;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  iVar16 = *(int *)&(this->WorldParticleSystemPools).field_0x28;
  iStack_f8 = 0;
  local_134 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  local_e0 = iStack_f8;
  if (iVar16 != 0) {
    puVar18 = *(uint **)&(this->WorldParticleSystemPools).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar21;
    }
    uVar14 = *puVar18;
    local_e0 = 0;
    iStack_f8 = 0;
    while (uVar14 == 0) {
      lVar9 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14903ed2d;
      uVar14 = puVar18[lVar9 + 1];
    }
    uStack_f4 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_d0 = (int)lVar9;
    iStack_e4 = local_e0 + -1 + local_d0;
    if (iVar16 < iStack_e4) {
      iStack_e4 = iVar16;
    }
  }
LAB_14903ed2d:
  uVar14 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  iStack_d8 = *(int *)&(this->WorldParticleSystemPools).field_0x8 -
              *(int *)&(this->WorldParticleSystemPools).field_0x34;
  uVar13 = uVar14 & 0xffffffe0;
  uStack_e8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_88.CurrentBitIndex = iStack_e4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar14 >> 5;
  TStack_88._28_4_ = iStack_e4;
  TStack_88.BaseBitIndex = local_e0;
  uStack_68 = CONCAT44(uStack_d4,iStack_d8);
  local_130 = uVar14;
  local_100 = pTVar19;
  local_f0 = (undefined1 *)pTVar21;
  iStack_dc = iStack_e4;
  local_b0 = pTVar21;
  local_a8 = pTVar19;
  local_90 = pTVar19;
  TStack_88.Array = pTVar21;
  if ((((int)uVar14 < 0) || (iVar16 < (int)uVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
  if (uVar14 != uVar3) {
    puVar17 = *(undefined1 **)&(this->WorldParticleSystemPools).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar21;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar10 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar14 = uVar3;
      local_130 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14903ee40;
      uVar14 = *(uint *)(puVar17 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_cc = (int)lVar9;
    uVar14 = local_cc + -1 + uVar13;
    local_130 = uVar14;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
      local_130 = uVar3;
    }
  }
LAB_14903ee40:
  while( true ) {
    pTVar5 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_88.CurrentBitIndex == uVar14) && (TStack_88.Array == pTVar21)) &&
       (pTVar5 == pTVar19)) break;
    iVar10 = 0;
    local_108 = *(longlong *)pTVar5;
    lVar9 = (longlong)TStack_88.CurrentBitIndex * 0x20;
    local_c8 = *(UObjectBaseUtility **)(lVar9 + local_108);
    iVar16 = *(int *)(local_108 + 0x10 + lVar9);
    plVar11 = *(longlong **)(local_108 + 8 + lVar9);
    plVar15 = plVar11 + (longlong)iVar16 * 2;
    local_110 = lVar9;
    while( true ) {
      if (*(int *)(local_108 + 0x10 + lVar9) != iVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNCPoolElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      this_00 = local_c8;
      if (plVar11 == plVar15) break;
      if ((longlong *)*plVar11 == (longlong *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2076570787300507060>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                           ,0x24c,"Elem.Component");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        iVar7 = (**(code **)(*(longlong *)*plVar11 + 0xae8))();
        iVar10 = iVar10 + iVar7;
      }
      plVar11 = plVar11 + 2;
    }
    iVar20 = 0;
    iVar7 = 0;
    local_124 = 0;
    pFVar12 = (FWeakObjectPtr *)(this->InUseComponents_Auto).AllocatorInstance.Data;
    iVar16 = (this->InUseComponents_Auto).ArrayNum;
    pFVar1 = pFVar12 + iVar16;
    local_12c = iVar10;
    while( true ) {
      if ((this->InUseComponents_Auto).ArrayNum != iVar16) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar12 == pFVar1) break;
      local_c0 = *pFVar12;
      pUVar8 = FWeakObjectPtr::Get(&local_c0);
      if (pUVar8 == (UObject *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2076570787300507049>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                           ,599,"Component");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (*(UObjectBaseUtility **)(pUVar8 + 0x22) == this_00) {
        iVar10 = (**(code **)(*(longlong *)pUVar8 + 0xae8))(pUVar8);
        iVar7 = iVar7 + iVar10;
        iVar20 = iVar20 + 1;
      }
      pFVar12 = pFVar12 + 1;
    }
    pFVar12 = (FWeakObjectPtr *)(this->InUseComponents_Manual).AllocatorInstance.Data;
    iVar16 = (this->InUseComponents_Manual).ArrayNum;
    pFVar1 = pFVar12 + iVar16;
    local_128 = iVar20;
    while( true ) {
      if ((this->InUseComponents_Manual).ArrayNum != iVar16) {
        local_138[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_138);
      }
      if (pFVar12 == pFVar1) break;
      local_b8 = *pFVar12;
      pUVar8 = FWeakObjectPtr::Get(&local_b8);
      if (pUVar8 == (UObject *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2076570787300507040>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                           ,0x260,"Component");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (*(UObjectBaseUtility **)(pUVar8 + 0x22) == this_00) {
        iVar10 = (**(code **)(*(longlong *)pUVar8 + 0xae8))(pUVar8);
        iVar7 = iVar7 + iVar10;
      }
      pFVar12 = pFVar12 + 1;
    }
    local_134 = local_134 + iVar7 + local_12c;
    UObjectBaseUtility::GetFullName(this_00,local_60,(UObject *)0x0,None);
    ::FString::PrintfImpl
              (&local_a0,
               L"Free: %d (%uB) \t|\t Used(Auto - Manual): %d - %d (%uB) \t|\t System: %s\n");
    iVar16 = local_a0.Data.ArrayNum + -1;
    if (local_a0.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    ::FString::AppendChars(&local_120,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar16);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    pTVar19 = local_a8;
    pTVar21 = local_b0;
    uVar14 = local_130;
  }
  if (((4 < (byte)LogNiagara._0_1_) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
      4 < (byte)LogNiagara._0_1_)) &&
     ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
      4 < (byte)LogNiagara._0_1_ &&
      ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
       4 < (byte)LogNiagara._0_1_ &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
       4 < (byte)LogNiagara._0_1_)))))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  return;
}

// Enabled @ 14903f890

bool __cdecl UNiagaraComponentPool::Enabled(void)

{
  return GbEnableNiagaraSystemPooling != 0;
}

// GetPrivateStaticClass @ 1490482f0

UClass * __cdecl UNiagaraComponentPool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraComponentPool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraComponentPool",
               &Z_Registration_Info_UClass_UNiagaraComponentPool.InnerSingleton,
               StaticRegisterNativesUNiagaraComponentPool,0xa8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraComponentPool>,
               InternalVTableHelperCtorCaller<UNiagaraComponentPool>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraComponentPool.InnerSingleton;
}

// PooledComponentDestroyed @ 14905da30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponentPool::PooledComponentDestroyed
          (UNiagaraComponentPool *this,UNiagaraComponent *param_1)

{
  ENCPoolMethod EVar1;
  UNiagaraSystem *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNCPool *this_00;
  FStaticBasicLogRecord *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  UNiagaraSystem *local_res18 [2];
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x1fe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (GbEnableNiagaraSystemPooling == 0) {
    return;
  }
  EVar1 = param_1->PoolingMethod;
  if ((((EVar1 == None) || (EVar1 == AutoRelease)) || (EVar1 == ManualRelease)) ||
     (EVar1 == ManualRelease_OnComplete)) goto LAB_14905db1b;
  if (EVar1 == FreeInPool) {
    pUVar2 = (param_1->Asset).field0_0x0.DebugPtr;
    if (pUVar2 == (UNiagaraSystem *)0x0) goto LAB_14905db1b;
    local_res18[0] = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    this_00 = TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
              ::Find((TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
                      *)&this->WorldParticleSystemPools,
                     (TObjectPtr<UNiagaraSystem_const_>)local_res18);
    if (((this_00 == (FNCPool *)0x0) || (bVar5 = FNCPool::RemoveComponent(this_00,param_1), bVar5))
       || ((byte)LogNiagara._0_1_ < 3)) goto LAB_14905db1b;
    pFVar7 = &::LOG_Static;
  }
  else {
    if ((byte)LogNiagara._0_1_ < 3) goto LAB_14905db1b;
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogNiagara);
LAB_14905db1b:
  if (GbEnableNiagaraSystemPoolValidation != 0) {
    TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
                *)&this->WorldParticleSystemPools);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
                *)&this->WorldParticleSystemPools;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        bVar5 = FNCPool::RemoveComponent
                          ((FNCPool *)(*local_48 + 8 + (longlong)(int)uVar8 * 0x20),param_1);
        if ((bVar5) && (2 < (byte)LogNiagara._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar6 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_18->HashSize < iVar6)) || (iVar6 < local_18->HashSize)) {
          local_18->HashSize = iVar6;
          TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  param_1->PoolingMethod = None;
  return;
}

// PrimePool @ 14905f380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponentPool::PrimePool
          (UNiagaraComponentPool *this,UNiagaraSystem *param_1,UWorld *param_2)

{
  int *piVar1;
  byte *pbVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FFXSystemInterface *pFVar9;
  FNiagaraGpuComputeDispatchInterface *pFVar10;
  FNCPool *pFVar11;
  UWorld *pUVar12;
  UNiagaraComponent *this_00;
  uint uVar13;
  UWorld *pUVar14;
  TObjectPtr<UNiagaraSystem>_u_0 TVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  TArray<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined1 local_res10 [8];
  FNiagaraCrashReporterScope local_res18 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_78;
  TObjectPtr<UNiagaraSystem>_u_0 local_70;
  UNiagaraComponent *local_68;
  ForAnyElementType local_60;
  int local_58 [6];
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x112,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 == (UWorld *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x113,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_1 == (UNiagaraSystem *)0x0) {
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
  }
  else if (param_1->bFullyLoaded != '\0') {
    uVar17 = (uint)param_1->_padding_;
    if (*(uint *)((longlong)&param_1->_padding_ + 4) < uVar17) {
      uVar17 = *(uint *)((longlong)&param_1->_padding_ + 4);
    }
    if (uVar17 != 0) {
      if (param_2->bIsTearingDown == '\0') {
        if (param_2->Scene == (FSceneInterface *)0x0) {
          if (5 < (byte)LogNiagara._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
        }
        else {
          bVar6 = UNiagaraSystem::IsReadyToRun(param_1);
          if (bVar6) {
            pFVar9 = (FFXSystemInterface *)(**(code **)(param_2->Scene->_padding_ + 0x478))();
            if (pFVar9 == (FFXSystemInterface *)0x0) {
              if (5 < (byte)LogNiagara._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          ((FStaticBasicLogRecord *)&PTR_u_Failed_to_prime_151d55230,
                           (FLogCategoryBase *)&LogNiagara);
              }
            }
            else {
              pFVar10 = FNiagaraGpuComputeDispatchInterface::Get(pFVar9);
              if (pFVar10 == (FNiagaraGpuComputeDispatchInterface *)0x0) {
                if (5 < (byte)LogNiagara._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
                }
              }
              else {
                bVar6 = UWorld::IsGameWorld(param_2);
                if (bVar6) {
                  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_res18,param_1);
                  TVar15.DebugPtr = param_1;
                  local_70.DebugPtr = param_1;
                  if (((UE::GC::GIsIncrementalReachabilityPending != false) &&
                      (UE::GC::MarkAsReachable((UObject *)param_1), TVar15 = local_70,
                      UE::GC::GIsIncrementalReachabilityPending != false)) &&
                     (local_70.DebugPtr != (UNiagaraSystem *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_70.DebugPtr);
                  }
                  uVar13 = ((uint)((ulonglong)TVar15.DebugPtr >> 0x14) & 0xffff ^
                           (uint)((ulonglong)TVar15.DebugPtr >> 4)) * -0x7a143595;
                  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
                  pFVar11 = TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
                            ::FindOrAddImpl<TObjectPtr<UNiagaraSystem>_>
                                      ((TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
                                        *)&this->WorldParticleSystemPools,uVar13 >> 0x10 ^ uVar13,
                                       (TObjectPtr<UNiagaraSystem> *)&local_70.ObjectPtr);
                  uVar13 = (pFVar11->FreeElements).ArrayNum;
                  if (uVar13 < uVar17) {
                    uVar17 = uVar17 - uVar13;
                    local_60.Data = (FScriptContainerElement *)0x0;
                    local_58[0] = 0;
                    local_58[1] = 0;
                    if ((int)uVar17 < 1) {
                      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
                      }
                    }
                    else {
                      iVar7 = UE::Core::Private::
                              ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (8,8,uVar17,&local_60,local_58,local_58 + 1);
                      memset(local_60.Data + (longlong)iVar7 * 8,0,(longlong)(int)uVar17 << 3);
                    }
                    iVar7 = local_58[0];
                    pFVar3 = local_60.Data + (longlong)local_58[0] * 8;
                    FVar16.Data = local_60.Data;
                    while( true ) {
                      if (local_58[0] != iVar7) {
                        local_res10[0] = 0;
                        `TCheckedPointerIterator<UNiagaraComponent_*,int,0>::operator!='::__l2::
                        <lambda_1>::operator()(local_res10);
                      }
                      if (FVar16.Data == pFVar3) break;
                      if ((GbEnableNiagaraSystemPooling == 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("GbEnableNiagaraSystemPooling",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                                             ,0x56,L""), bVar6)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      pUVar12 = (UWorld *)UWorld::GetWorldSettings(param_2,false,true);
                      pUVar14 = param_2;
                      if (pUVar12 != (UWorld *)0x0) {
                        pUVar14 = pUVar12;
                      }
                      this_00 = NewObject<UNiagaraComponent>((UObject *)pUVar14);
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (this_00 != (UNiagaraComponent *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)this_00);
                      }
                      this_00->bAutoDestroy = 0;
                      pbVar2 = (byte *)((longlong)&this_00->_padding_ + 2);
                      *pbVar2 = *pbVar2 & 0xf7;
                      UPrimitiveComponent::SetVisibleInRayTracing
                                ((UPrimitiveComponent *)this_00,false);
                      UNiagaraComponent::SetAsset(this_00,param_1,true);
                      this_00->PoolingMethod = ManualRelease;
                      pTVar18 = &this->InUseComponents_Manual;
                      *(UNiagaraComponent **)FVar16.Data = this_00;
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)this_00);
                      }
                      local_78.ObjectIndex = 0;
                      local_78.ObjectSerialNumber = 0;
                      local_68 = this_00;
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)this_00);
                      }
                      FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_68);
                      pFVar4 = (FWeakObjectPtr *)(pTVar18->AllocatorInstance).Data;
                      if (((pFVar4 <= &local_78) &&
                          (&local_78 < pFVar4 + (this->InUseComponents_Manual).ArrayMax)) &&
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
                      iVar8 = (this->InUseComponents_Manual).ArrayNum;
                      piVar1 = &(this->InUseComponents_Manual).ArrayMax;
                      if (iVar8 == *piVar1) {
                        iVar8 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x408,&pTVar18->AllocatorInstance,piVar1);
                      }
                      (this->InUseComponents_Manual).ArrayNum = iVar8 + 1;
                      *(FWeakObjectPtr *)((pTVar18->AllocatorInstance).Data + (longlong)iVar8 * 8) =
                           local_78;
                      UNiagaraComponent::InitializeSystem(*(UNiagaraComponent **)FVar16.Data);
                      if (GNiagaraKeepPooledComponentsRegistered != 0) {
                        UActorComponent::RegisterComponentWithWorld
                                  (*(UActorComponent **)FVar16.Data,param_2,
                                   (FRegisterComponentContext *)0x0);
                      }
                      FVar16.Data = FVar16.Data + 8;
                    }
                    iVar7 = local_58[0];
                    pFVar3 = local_60.Data + (longlong)local_58[0] * 8;
                    FVar16.Data = local_60.Data;
                    while( true ) {
                      if (local_58[0] != iVar7) {
                        `TCheckedPointerIterator<UNiagaraComponent_*,int,0>::operator!='::__l2::
                        <lambda_1>::operator()(local_res20);
                      }
                      if (FVar16.Data == pFVar3) break;
                      (**(code **)(**(longlong **)FVar16.Data + 0xae0))();
                      FVar16.Data = FVar16.Data + 8;
                    }
                    if (local_60.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_60.Data);
                    }
                  }
                  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_res18);
                }
              }
            }
          }
          else if (5 < (byte)LogNiagara._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
        }
      }
      else if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
    }
  }
  return;
}

// ReclaimWorldParticleSystem @ 1490601e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraComponentPool::ReclaimWorldParticleSystem
          (UNiagaraComponentPool *this,UNiagaraComponent *param_1)

{
  ulonglong uVar1;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *this_00;
  double dVar2;
  uint uVar3;
  code *pcVar4;
  ForElementType<unsigned_int> FVar5;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *pTVar6;
  bool bVar7;
  bool bVar8;
  UWorld *pUVar9;
  FNCPool *this_01;
  longlong lVar10;
  TArray<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_02;
  int iVar11;
  FWeakObjectPtr *pFVar12;
  uint uVar13;
  TObjectPtr<UNiagaraSystem>_u_0 this_03;
  int iVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  uint uVar18;
  uint local_res18 [2];
  FNiagaraCrashReporterScope local_res20 [8];
  TKeyInitializer<TObjectPtr<UNiagaraSystem>_&&> local_158;
  ForElementType<unsigned_int> local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  int local_138;
  int local_134;
  TObjectPtr<UNiagaraSystem>_u_0 local_130;
  UNiagaraComponent *local_128;
  UNiagaraComponent *local_120;
  TObjectPtr<UNiagaraSystem>_u_0 local_118;
  TObjectPtr<UNiagaraSystem>_u_0 local_110;
  TObjectPtr<UNiagaraSystem>_u_0 *local_108;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FString local_a0;
  FString local_90 [2];
  undefined4 local_64;
  
  iVar15 = 0;
  local_res18[0] = 0;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x1b6,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_03 = (TObjectPtr<UNiagaraSystem>_u_0)(param_1->Asset).field0_0x0.DebugPtr;
  local_130 = this_03;
  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_res20,this_03.DebugPtr);
  if (((uint)param_1->_padding_ >> 0x1e & 1) != 0) {
    if (4 < (byte)LogNiagara._0_1_) {
      if (this_03.DebugPtr != (UNiagaraSystem *)0x0) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_03.DebugPtr,&local_a0,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if ((this_03.DebugPtr != (UNiagaraSystem *)0x0) &&
         (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_1490607b7;
  }
  if (((GbEnableNiagaraSystemPooling == 0) || (this_03.DebugPtr == (UNiagaraSystem *)0x0)) ||
     (this_00 = &this->WorldParticleSystemPools,
     *(int *)&(this->WorldParticleSystemPools).field_0x8 -
     *(int *)&(this->WorldParticleSystemPools).field_0x34 < 1)) {
    param_1->PoolingMethod = None;
    (**(code **)(param_1->_padding_ + 0x4a0))(param_1,0);
    goto LAB_1490607b7;
  }
  pUVar9 = (UWorld *)param_1->_padding_;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  dVar2 = pUVar9->TimeSeconds;
  if ((double)GNiagaraSystemPoolingCleanTime < dVar2 - this->LastParticleSytemPoolCleanTime) {
    local_150 = (ForElementType<unsigned_int>)&(this->WorldParticleSystemPools).field_0x10;
    this->LastParticleSytemPoolCleanTime = dVar2;
    iVar14 = *(int *)&(this->WorldParticleSystemPools).field_0x28;
    uStack_f4 = 1;
    local_e0 = 0;
    iVar11 = 0;
    iStack_e4 = 0;
    if (iVar14 != 0) {
      puVar17 = *(uint **)&(this->WorldParticleSystemPools).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)local_150;
      }
      uVar13 = *puVar17;
      local_e0 = 0;
      iVar15 = 0;
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar15;
        local_e0 = local_e0 + 0x20;
        iVar15 = iVar15 + 1;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) {
          iVar11 = *(int *)&(this->WorldParticleSystemPools).field_0x28;
          iStack_e4 = iVar14;
          goto LAB_1490603e9;
        }
        uVar13 = puVar17[lVar10 + 1];
      }
      iVar11 = *(int *)&(this->WorldParticleSystemPools).field_0x28;
      uStack_f4 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_f4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_138 = (int)lVar10;
      iStack_e4 = local_e0 + -1 + local_138;
      if (iVar11 < iStack_e4) {
        iStack_e4 = iVar14;
      }
    }
LAB_1490603e9:
    uStack_dc = local_64;
    iStack_d8 = *(int *)&(this->WorldParticleSystemPools).field_0x8 -
                *(int *)&(this->WorldParticleSystemPools).field_0x34;
    uVar13 = *(uint *)&(this->WorldParticleSystemPools).field_0x28;
    uStack_e8 = 0xffffffff;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_c8._padding_ = CONCAT44(uStack_f4,iVar15);
    TStack_c8.CurrentBitIndex = iStack_e4;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_c8._28_4_ = local_64;
    TStack_c8.BaseBitIndex = local_e0;
    uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
    local_100 = this_00;
    iStack_f8 = iVar15;
    local_f0 = (undefined1 *)local_150;
    local_d0 = this_00;
    TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_150;
    if ((((int)uVar13 < 0) || (iVar11 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar5 = local_150;
    uVar3 = *(int *)((longlong)local_150 + 0x18);
    if (uVar13 != uVar3) {
      FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_150 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_150 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_150;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_149060500;
        uVar13 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar10 * 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_134 = (int)lVar10;
      uVar13 = local_134 + -1 + uVar18;
      if ((int)uVar3 < (int)uVar13) {
        uVar13 = uVar3;
      }
    }
LAB_149060500:
    while( true ) {
      pTVar6 = local_d0;
      if (*(int *)(&local_d0->field_0x0 + 8) - *(int *)(&local_d0->field_0x0 + 0x34) !=
          (int)uStack_a8) {
        local_res18[0] = local_res18[0] & 0xffffff00;
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_c8.CurrentBitIndex == uVar13) &&
          ((ForElementType<unsigned_int>)TStack_c8.Array == FVar5)) &&
         (this_03 = local_130, pTVar6 == this_00)) break;
      lVar10 = *(longlong *)&pTVar6->field_0x0;
      FNCPool::KillUnusedComponents
                ((FNCPool *)(lVar10 + 8 + (longlong)TStack_c8.CurrentBitIndex * 0x20),
                 dVar2 - (double)GNiagaraSystemPoolKillUnusedTime,
                 *(UNiagaraSystem **)((longlong)TStack_c8.CurrentBitIndex * 0x20 + lVar10));
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    }
  }
  bVar7 = false;
  if (param_1->PoolingMethod == AutoRelease) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    local_128 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_128);
    pFVar12 = &local_148;
    this_02 = &this->InUseComponents_Auto;
LAB_149060673:
    iVar15 = TArray<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
             RemoveSingleSwap(this_02,(TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)pFVar12,
                              Default);
    bVar7 = 0 < iVar15;
    if (!bVar7) goto LAB_149060686;
  }
  else {
    if (param_1->PoolingMethod == ManualRelease) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_140.ObjectIndex = 0;
      local_140.ObjectSerialNumber = 0;
      local_120 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_120);
      pFVar12 = &local_140;
      this_02 = &this->InUseComponents_Manual;
      goto LAB_149060673;
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2076570787300507177>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                       ,0x1d7,"Component->PoolingMethod == ENCPoolMethod::ManualRelease");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_149060686:
    if (1 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  local_118 = this_03;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_03.DebugPtr);
  }
  this_01 = TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
            ::Find((TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
                    *)this_00,(TObjectPtr<UNiagaraSystem_const_>)&local_118);
  if (this_01 == (FNCPool *)0x0) {
    if ((!bVar7) && (2 < (byte)LogNiagara._0_1_)) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(param_1->Asset).field0_0x0.DebugPtr,local_90,(UObject *)0x0,
                 None);
      if (param_1->_padding_ == 0) {
        UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_90[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90[0].Data.AllocatorInstance.Data);
      }
    }
    local_110 = this_03;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_03.DebugPtr);
    }
    local_108 = &local_110;
    TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TObjectPtr<UNiagaraSystem>_&&>_>
              ((TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
                *)this_00,&local_158,(bool *)&local_108);
    this_01 = (FNCPool *)
              (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_158.Key * 0x20 + 8);
  }
  FNCPool::Reclaim(this_01,param_1,dVar2);
LAB_1490607b7:
  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_res20);
  return;
}

// RemoveComponentsBySystem @ 149063010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraComponentPool::RemoveComponentsBySystem(UNiagaraComponentPool *this,UNiagaraSystem *param_1)

{
  FNCPool *this_00;
  uint uVar1;
  TObjectPtr<UNiagaraSystem_const_>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
            ::Find((TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
                    *)&this->WorldParticleSystemPools,(TObjectPtr<UNiagaraSystem_const_>)&local_res8
                  );
  if (this_00 != (FNCPool *)0x0) {
    FNCPool::Cleanup(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraSystem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraSystem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->WorldParticleSystemPools).field_0x8 !=
        *(int *)&(this->WorldParticleSystemPools).field_0x34) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraSystem *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UNiagaraSystem_const_>_>
                ((TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
                  *)&this->WorldParticleSystemPools,uVar1 >> 0x10 ^ uVar1,
                 (TObjectPtr<UNiagaraSystem_const_> *)&local_res8.ObjectPtr);
    }
  }
  return;
}

// StaticRegisterNativesUNiagaraComponentPool @ 14906a500

void __cdecl UNiagaraComponentPool::StaticRegisterNativesUNiagaraComponentPool(void)

{
  return;
}

