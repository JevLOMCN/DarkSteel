// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// StaticClass @ 14822ece0

UClass * __cdecl UClusterUnionReplicatedProxyComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ClusterUnionReplicatedProxyComponent",
               &Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent.InnerSingleton,
               StaticRegisterNativesUClusterUnionReplicatedProxyComponent,0x150,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UClusterUnionReplicatedProxyComponent>,
               InternalVTableHelperCtorCaller<UClusterUnionReplicatedProxyComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent.InnerSingleton;
}

// UClusterUnionReplicatedProxyComponent @ 148251780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UClusterUnionReplicatedProxyComponent * __thiscall
UClusterUnionReplicatedProxyComponent::UClusterUnionReplicatedProxyComponent
          (UClusterUnionReplicatedProxyComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ParentClusterUnion).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ChildClusteredComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ParticleBoneIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleBoneIds).ArrayNum = 0;
  (this->ParticleBoneIds).ArrayMax = 0;
  *(undefined8 *)&(this->LastSyncedBoneIds).Elements = 0;
  *(undefined8 *)&(this->LastSyncedBoneIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LastSyncedBoneIds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LastSyncedBoneIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LastSyncedBoneIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LastSyncedBoneIds).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LastSyncedBoneIds).Elements.field_0x30 = 0xffffffff;
  (this->LastSyncedBoneIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LastSyncedBoneIds).HashSize = 0;
  (this->ParticleChildToParents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleChildToParents).ArrayNum = 0;
  (this->ParticleChildToParents).ArrayMax = 0;
  this->bIsPendingDeletion = false;
  (this->DeferSetChildToParentHandle).Handle = 0;
  return this;
}

// UClusterUnionReplicatedProxyComponent @ 148251840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UClusterUnionReplicatedProxyComponent * __thiscall
UClusterUnionReplicatedProxyComponent::UClusterUnionReplicatedProxyComponent
          (UClusterUnionReplicatedProxyComponent *this,FObjectInitializer *param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ParentClusterUnion).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->ChildClusteredComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ParticleBoneIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleBoneIds).ArrayNum = 0;
  (this->ParticleBoneIds).ArrayMax = 0;
  *(undefined8 *)&(this->LastSyncedBoneIds).Elements = 0;
  *(undefined8 *)&(this->LastSyncedBoneIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LastSyncedBoneIds).Elements.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&(this->LastSyncedBoneIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LastSyncedBoneIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LastSyncedBoneIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LastSyncedBoneIds).Elements.field_0x34 = 0;
  (this->LastSyncedBoneIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LastSyncedBoneIds).HashSize = 0;
  (this->ParticleChildToParents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleChildToParents).ArrayNum = 0;
  (this->ParticleChildToParents).ArrayMax = 0;
  this->bIsPendingDeletion = false;
  (this->DeferSetChildToParentHandle).Handle = 0;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->ParentClusterUnion).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->ChildClusteredComponent).WeakPtr = local_res8;
  this->bNetUpdateParentClusterUnion = false;
  this->bNetUpdateChildClusteredComponent = false;
  this->bNetUpdateParticleBoneIds = false;
  this->bNetUpdateParticleChildToParents = false;
  return this;
}

// ~UClusterUnionReplicatedProxyComponent @ 148253890

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
UClusterUnionReplicatedProxyComponent::~UClusterUnionReplicatedProxyComponent
          (UClusterUnionReplicatedProxyComponent *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ParticleChildToParents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->LastSyncedBoneIds).HashSize = 0;
  FVar2 = (this->LastSyncedBoneIds).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LastSyncedBoneIds).Elements);
  pFVar1 = (this->ParticleBoneIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddComponentToCluster @ 1482625c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UClusterUnionReplicatedProxyComponent::AddComponentToCluster
          (UClusterUnionReplicatedProxyComponent *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint *puVar1;
  ForElementType<FSetElementId> FVar2;
  undefined1 *puVar3;
  code *pcVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  undefined8 uVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TArrayView<int_const_,int> *pTVar12;
  ulonglong uVar13;
  ulong64 uVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  UClusterUnionComponent *pUVar16;
  UPrimitiveComponent *pUVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  ForElementType<FSetElementId> FVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  uint *puVar31;
  undefined1 *puVar32;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297 [3];
  uint local_294;
  uint local_290 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_288;
  TArray<int,TSizedDefaultAllocator<32>_> local_278;
  int local_268;
  uint local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  undefined4 local_250;
  uint uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  int local_240;
  uint uStack_23c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_238;
  undefined4 local_230;
  uint uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 local_1f8;
  uint *local_1f0;
  UClusterUnionReplicatedProxyComponent *local_1e8;
  FSparseArrayAllocationInfo local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  undefined4 local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  int local_19c;
  FWeakObjectPtr *local_198;
  FWeakObjectPtr *local_190;
  longlong *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TArrayView<int_const_,int> local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_8c;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_198 = &(this->ParentClusterUnion).WeakPtr;
  local_1e8 = this;
  bVar9 = FWeakObjectPtr::IsValid(local_198);
  if (!bVar9) {
    return;
  }
  local_190 = &(this->ChildClusteredComponent).WeakPtr;
  bVar9 = FWeakObjectPtr::IsValid(local_190);
  if (!bVar9) {
    return;
  }
  if (this->bIsPendingDeletion != false) {
    return;
  }
  pTVar12 = TArrayView<int_const_,int>::
            TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                      (&local_d8,&this->ParticleBoneIds);
  uVar18 = 0;
  local_1d8.Index = *(int *)&pTVar12->DataPtr;
  local_1d8._4_4_ = *(undefined4 *)((longlong)&pTVar12->DataPtr + 4);
  uVar10 = pTVar12->ArrayNum;
  local_1d8.Pointer._4_4_ = *(undefined4 *)&pTVar12->field_0xc;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_1d8.Pointer._0_4_ = uVar10;
  if (uVar10 == 0) goto LAB_14826290d;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar10);
  uVar23 = 1;
  if (3 < uVar10) {
    uVar28 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_1a8 = (undefined4)lVar21;
    uVar23 = 1 << ((byte)lVar21 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar23 <= (int)local_40)) goto LAB_14826290d;
  local_40 = uVar23;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar23 != 0) {
    uVar24 = uVar23;
    if (uVar23 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar24 = 0;
        goto LAB_148262761;
      }
    }
    else {
LAB_148262761:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar24,4);
    }
    if (0 < (int)uVar23) {
      uVar30 = (ulonglong)uVar23;
      uVar28 = uVar18;
      do {
        FVar20.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_48.Data;
        }
        uVar13 = (longlong)(int)uVar23 - 1U & uVar28;
        uVar28 = uVar28 + 1;
        *(undefined4 *)(FVar20.Data + uVar13 * 4) = 0xffffffff;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_260 = 0;
    uStack_25c = 1;
    uStack_24c = 0;
    uStack_248 = 0;
    if (local_60 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_68;
      }
      uVar23 = *(uint *)FVar19;
      uVar28 = uVar18;
      while (uVar23 == 0) {
        uStack_248 = (int)uVar28 + 0x20;
        uVar28 = (ulonglong)uStack_248;
        iVar11 = (int)uVar18;
        local_260 = iVar11 + 1;
        uVar18 = (ulonglong)local_260;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_260)
        goto LAB_14826286a;
        uVar23 = ((uint *)((longlong)FVar19 + 4))[iVar11];
      }
      uStack_25c = -uVar23 & uVar23;
      uVar18 = (ulonglong)uStack_25c * 2 + 1;
      lVar21 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_1a4 = (int)lVar21;
      uStack_24c = (uStack_248 - 1) + local_1a4;
      uVar18 = (ulonglong)uStack_24c;
      if ((int)local_60 < (int)uStack_24c) {
LAB_14826286a:
        uVar18 = (ulonglong)local_60;
        uStack_24c = local_60;
      }
    }
    local_250 = 0xffffffff;
    local_188 = (longlong *)local_88;
    local_180._padding_ = CONCAT44(uStack_25c,local_260);
    local_180.CurrentBitIndex = uStack_24c;
    local_180.UnvisitedBitMask = 0xffffffff;
    local_180._28_4_ = uStack_244;
    local_180.BaseBitIndex = uStack_248;
    local_180.Array = pTStack_258;
    if ((int)uVar18 < (int)local_60) {
      do {
        iVar11 = (int)uVar18;
        uVar23 = local_40 - 1 & *(uint *)(*local_188 + (longlong)iVar11 * 0xc);
        lVar21 = *local_188 + (longlong)iVar11 * 0xc;
        *(uint *)(lVar21 + 8) = uVar23;
        FVar20.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_48.Data;
        }
        uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar23;
        *(undefined4 *)(lVar21 + 4) = *(undefined4 *)(FVar20.Data + uVar18 * 4);
        *(int *)(FVar20.Data + uVar18 * 4) = iVar11;
        local_180.UnvisitedBitMask = local_180.UnvisitedBitMask & ~local_180._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_180);
        uVar18 = (ulonglong)(uint)local_180.CurrentBitIndex;
      } while (local_180.CurrentBitIndex < (local_180.Array)->NumBits);
    }
  }
LAB_14826290d:
  puVar31 = (uint *)CONCAT44(local_1d8._4_4_,local_1d8.Index);
  local_1f0 = puVar31 + (int)uVar10;
  if (puVar31 != local_1f0) {
    do {
      if (local_54 == 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                            (int *)(local_88 + 0xc));
        uVar10 = local_60;
        if (local_60 == 0) {
          iVar26 = 0;
LAB_1482629cf:
          if (local_5c < (int)(local_60 + 1)) {
            uVar23 = local_5c + 0x1fU >> 5;
            uVar24 = local_60 + 0x20 >> 5;
            if (uVar24 < 5) {
              local_5c = 4;
            }
            else {
              uVar18 = (ulonglong)uVar24;
              if (uVar23 < 5) {
                uVar23 = 0;
              }
              if (uVar23 == 0) {
                uVar28 = 4;
                if (4 < uVar18) {
                  uVar28 = uVar18;
                }
              }
              else {
                uVar28 = ((ulonglong)uVar24 * 3 >> 3) + 0x10 + uVar18;
              }
              uVar14 = FMemory::QuantizeSize(uVar28 * 4,0);
              local_5c = (int)(uVar14 >> 2);
              if (local_5c < (int)uVar24) {
                local_5c = 0x7fffffff;
              }
            }
            local_5c = local_5c << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),local_60);
          }
          local_60 = local_60 + 1;
          uVar24 = (int)local_60 >> 0x1f & 0x1f;
          uVar23 = local_60 + uVar24;
          iVar25 = (uVar23 & 0x1f) - uVar24;
          if (iVar25 != 0) {
            FVar19 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_68;
            }
            puVar1 = (uint *)((longlong)FVar19 + (longlong)((int)uVar23 >> 5) * 4);
            *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar25 & 0x1f);
          }
        }
        else {
          iVar26 = (int)(local_60 + ((int)local_60 >> 0x1f & 0x1fU)) >> 5;
          if (iVar26 != (int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5)
          goto LAB_1482629cf;
          local_60 = local_60 + 1;
        }
        FVar19 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_68;
        }
        puVar1 = (uint *)((longlong)FVar19 + (longlong)iVar26 * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)uVar10 & 0x1f));
        iVar26 = local_58;
      }
      else {
        local_54 = local_54 + -1;
        iVar26 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0xc + 4);
        iVar11 = local_58;
        if (local_54 != 0) {
          *(undefined4 *)(local_88._0_8_ + (longlong)iVar26 * 0xc) = 0xffffffff;
        }
      }
      local_58 = iVar26;
      puVar27 = (uint *)0x0;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,&local_1d8,iVar11);
      puVar1 = (uint *)CONCAT44(local_1d8.Pointer._4_4_,(uint)local_1d8.Pointer);
      if (puVar1 != (uint *)0x0) {
        *puVar1 = *puVar31;
        puVar1[1] = 0xffffffff;
        puVar27 = puVar1;
      }
      uVar10 = *puVar27;
      if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
        FVar20.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_48.Data;
        }
        for (iVar11 = *(int *)(FVar20.Data + (ulonglong)(local_40 - 1 & uVar10) * 4); iVar11 != -1;
            iVar11 = *(int *)(local_88._0_8_ + (longlong)iVar11 * 0xc + 4)) {
          if (*(uint *)(local_88._0_8_ + (longlong)iVar11 * 0xc) == uVar10) {
            if (iVar11 != -1) {
              *(uint *)(local_88._0_8_ + (longlong)iVar11 * 0xc) = uVar10;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_88,local_1d8.Index,1);
              goto LAB_148262e83;
            }
            break;
          }
        }
      }
      uVar24 = 1;
      uVar23 = local_88._8_4_ - local_54;
      if (3 < uVar23) {
        uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_1a0 = (undefined4)lVar21;
        uVar24 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((int)uVar23 < 1) || ((int)uVar24 <= (int)local_40)) {
        uVar10 = local_40 - 1 & uVar10;
        puVar27[2] = uVar10;
        FVar20.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_48.Data;
        }
        uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar10;
        puVar27[1] = *(uint *)(FVar20.Data + uVar18 * 4);
        *(int *)(FVar20.Data + uVar18 * 4) = local_1d8.Index;
      }
      else {
        local_40 = uVar24;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
        }
        if (uVar24 != 0) {
          uVar10 = uVar24;
          if (uVar24 < 2) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              uVar10 = 0;
              goto LAB_148262c68;
            }
          }
          else {
LAB_148262c68:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_48,0,uVar10,4);
          }
          uVar18 = 0;
          if (0 < (int)uVar24) {
            uVar28 = (ulonglong)uVar24;
            do {
              FVar20.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar20.Data = local_48.Data;
              }
              uVar30 = (longlong)(int)uVar24 - 1U & uVar18;
              uVar18 = uVar18 + 1;
              *(undefined4 *)(FVar20.Data + uVar30 * 4) = 0xffffffff;
              uVar28 = uVar28 - 1;
            } while (uVar28 != 0);
          }
        }
        if (local_40 != 0) {
          pTStack_238 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
          local_240 = 0;
          uStack_23c = 1;
          uStack_22c = 0;
          iStack_228 = 0;
          if (local_60 != 0) {
            FVar19 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_68;
            }
            uVar10 = *(uint *)FVar19;
            while (uVar10 == 0) {
              iStack_228 = iStack_228 + 0x20;
              lVar21 = (longlong)local_240;
              local_240 = local_240 + 1;
              if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < local_240)
              goto LAB_148262d7a;
              uVar10 = ((uint *)((longlong)FVar19 + 4))[lVar21];
            }
            uStack_23c = -uVar10 & uVar10;
            uVar18 = (ulonglong)uStack_23c * 2 + 1;
            lVar21 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_19c = (int)lVar21;
            uStack_22c = local_19c + -1 + iStack_228;
            if ((int)local_60 < (int)uStack_22c) {
LAB_148262d7a:
              uStack_22c = local_60;
            }
          }
          local_230 = 0xffffffff;
          local_160 = (longlong *)local_88;
          local_158._padding_ = CONCAT44(uStack_23c,local_240);
          local_158.CurrentBitIndex = uStack_22c;
          local_158.UnvisitedBitMask = 0xffffffff;
          local_158._28_4_ = uStack_224;
          local_158.BaseBitIndex = iStack_228;
          local_158.Array = pTStack_238;
          uVar10 = uStack_22c;
          if ((int)uStack_22c < (int)local_60) {
            do {
              uVar23 = local_40 - 1 & *(uint *)(*local_160 + (longlong)(int)uVar10 * 0xc);
              lVar21 = *local_160 + (longlong)(int)uVar10 * 0xc;
              *(uint *)(lVar21 + 8) = uVar23;
              FVar20.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar20.Data = local_48.Data;
              }
              uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar23;
              *(undefined4 *)(lVar21 + 4) = *(undefined4 *)(FVar20.Data + uVar18 * 4);
              *(uint *)(FVar20.Data + uVar18 * 4) = uVar10;
              local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
              uVar10 = local_158.CurrentBitIndex;
            } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
          }
        }
      }
LAB_148262e83:
      puVar31 = puVar31 + 1;
      this = local_1e8;
    } while (puVar31 != local_1f0);
  }
  uVar10 = local_88._8_4_ - local_54;
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&local_278.AllocatorInstance,0,&local_278.ArrayMax);
  }
  local_1c8._padding_._0_4_ = 0;
  local_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  local_1c8._padding_._4_4_ = 1;
  local_1c8.UnvisitedBitMask = 0xffffffff;
  local_1c8.CurrentBitIndex = 0;
  local_1c8.BaseBitIndex = 0;
  if (local_60 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
  }
  TStack_218._padding_ = CONCAT44(local_1c8._padding_._4_4_,(undefined4)local_1c8._padding_);
  local_220 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88;
  TStack_218.CurrentBitIndex = local_1c8.CurrentBitIndex;
  TStack_218.UnvisitedBitMask = local_1c8.UnvisitedBitMask;
  TStack_218._28_4_ = local_1c8._28_4_;
  TStack_218.BaseBitIndex = local_1c8.BaseBitIndex;
  TStack_218.Array = local_1c8.Array;
  local_1f8 = CONCAT44(local_1f8._4_4_,local_88._8_4_ - local_54);
  TStack_100.Array = local_1c8.Array;
  uStack_e0 = local_1f8;
  local_108 = (longlong *)local_220;
  TStack_100._padding_ = TStack_218._padding_;
  TStack_100._16_8_ = TStack_218._16_8_;
  TStack_100._24_8_ = TStack_218._24_8_;
  pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_c8,(TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),local_60)
  ;
  TStack_218._padding_ = pTVar15->_padding_;
  pTVar5 = pTVar15->Array;
  uVar6._0_4_ = pTVar15->UnvisitedBitMask;
  uVar6._4_4_ = pTVar15->CurrentBitIndex;
  TStack_218.BaseBitIndex = pTVar15->BaseBitIndex;
  TStack_218._28_4_ = *(undefined4 *)&pTVar15->field_0x1c;
  TStack_218.Array = pTVar5;
  TStack_218._16_8_ = uVar6;
  while( true ) {
    plVar8 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_298 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
    }
    if (((TStack_100.CurrentBitIndex == uVar6._4_4_) && (TStack_100.Array == pTVar5)) &&
       (plVar8 == (longlong *)local_88)) break;
    local_294 = *(uint *)(*plVar8 + (longlong)TStack_100.CurrentBitIndex * 0xc);
    if (*(int *)&(this->LastSyncedBoneIds).Elements.field_0x8 !=
        *(int *)&(this->LastSyncedBoneIds).Elements.field_0x34) {
      FVar2 = (this->LastSyncedBoneIds).Hash.SecondaryData;
      FVar22 = (ForElementType<FSetElementId>)&(this->LastSyncedBoneIds).Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar22 = FVar2;
      }
      iVar11 = *(int *)((longlong)FVar22 +
                       (ulonglong)((this->LastSyncedBoneIds).HashSize - 1U & local_294) * 4);
      if (iVar11 != -1) {
        lVar21 = *(longlong *)&(this->LastSyncedBoneIds).Elements;
        do {
          if (*(uint *)(lVar21 + (longlong)iVar11 * 0xc) == local_294) goto LAB_1482630f1;
          iVar11 = *(int *)(lVar21 + 4 + (longlong)iVar11 * 0xc);
        } while (iVar11 != -1);
      }
    }
    if (((local_278.AllocatorInstance.Data <= (FScriptContainerElement *)&local_294) &&
        ((FScriptContainerElement *)&local_294 <
         local_278.AllocatorInstance.Data + (longlong)local_278.ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = local_278.ArrayNum;
    if (local_278.ArrayNum == local_278.ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
    }
    local_278.ArrayNum = iVar11 + 1;
    *(uint *)(local_278.AllocatorInstance.Data + (longlong)iVar11 * 4) = local_294;
LAB_1482630f1:
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  if (local_278.ArrayNum != 0) {
    pUVar16 = (UClusterUnionComponent *)FWeakObjectPtr::Get(&(this->ParentClusterUnion).WeakPtr);
    pUVar17 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->ChildClusteredComponent).WeakPtr);
    UClusterUnionComponent::AddComponentToCluster(pUVar16,pUVar17,&local_278,true);
  }
  iVar11 = 0;
  this_00 = &this->LastSyncedBoneIds;
  uVar10 = *(int *)&(this->LastSyncedBoneIds).Elements.field_0x8 -
           *(int *)&(this->LastSyncedBoneIds).Elements.field_0x34;
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&local_288.AllocatorInstance,0,&local_288.ArrayMax);
  }
  puVar32 = &(this->LastSyncedBoneIds).Elements.field_0x10;
  iVar26 = *(int *)&(this->LastSyncedBoneIds).Elements.field_0x28;
  iStack_11c = iVar11;
  local_118 = iVar11;
  uStack_12c = 1;
  if (iVar26 != 0) {
    puVar31 = *(uint **)&(this->LastSyncedBoneIds).Elements.field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)puVar32;
    }
    uVar10 = *puVar31;
    local_118 = 0;
    iVar11 = 0;
    while (uVar10 == 0) {
      lVar21 = (longlong)iVar11;
      local_118 = local_118 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_11c = iVar26;
      if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14826320e;
      uVar10 = puVar31[lVar21 + 1];
    }
    uStack_12c = -uVar10 & uVar10;
    uVar18 = (ulonglong)uStack_12c * 2 + 1;
    lVar21 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_268 = (int)lVar21;
    iStack_11c = local_118 + -1 + local_268;
    if (iVar26 < iStack_11c) {
      iStack_11c = iVar26;
    }
  }
LAB_14826320e:
  uStack_114 = local_8c;
  iStack_110 = *(int *)&(local_1e8->LastSyncedBoneIds).Elements.field_0x8 -
               *(int *)&(local_1e8->LastSyncedBoneIds).Elements.field_0x34;
  uVar10 = *(uint *)&(local_1e8->LastSyncedBoneIds).Elements.field_0x28;
  uStack_120 = 0xffffffff;
  uVar23 = uVar10 & 0xffffffe0;
  TStack_218._padding_ = CONCAT44(uStack_12c,iVar11);
  TStack_218.CurrentBitIndex = iStack_11c;
  TStack_218.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar10 >> 5;
  TStack_218._28_4_ = local_8c;
  TStack_218.BaseBitIndex = local_118;
  local_1f8 = CONCAT44(uStack_10c,iStack_110);
  local_220 = this_00;
  TStack_218.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar32;
  local_138 = this_00;
  iStack_130 = iVar11;
  local_128 = puVar32;
  if ((((int)uVar10 < 0) || (iVar26 < (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar24 = *(uint *)&(this->LastSyncedBoneIds).Elements.field_0x28;
  if (uVar10 != uVar24) {
    puVar3 = *(undefined1 **)&(this->LastSyncedBoneIds).Elements.field_0x20;
    puVar29 = puVar32;
    if (puVar3 != (undefined1 *)0x0) {
      puVar29 = puVar3;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar25 * 4);
    while (uVar10 == 0) {
      lVar21 = (longlong)iVar25;
      uVar23 = uVar23 + 0x20;
      iVar25 = iVar25 + 1;
      uVar10 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_148263340;
      uVar10 = *(uint *)(puVar29 + lVar21 * 4 + 4);
    }
    uVar18 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_1f0 = (uint *)CONCAT44(local_1f0._4_4_,(int)lVar21);
    uVar10 = (int)lVar21 + -1 + uVar23;
    if ((int)uVar24 < (int)uVar10) {
      uVar10 = uVar24;
    }
  }
LAB_148263340:
  do {
    pTVar7 = local_220;
    if (*(int *)&(local_220->Elements).field_0x8 - *(int *)&(local_220->Elements).field_0x34 !=
        (int)local_1f8) {
      local_297[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_297);
    }
    if (((TStack_218.CurrentBitIndex == uVar10) &&
        (TStack_218.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar32)) &&
       (pTVar7 == this_00)) {
      if (local_288.ArrayNum != 0) {
        pUVar16 = (UClusterUnionComponent *)FWeakObjectPtr::Get(local_198);
        pUVar17 = (UPrimitiveComponent *)FWeakObjectPtr::Get(local_190);
        UClusterUnionComponent::RemoveComponentBonesFromCluster(pUVar16,pUVar17,&local_288);
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (this_00,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88);
      if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.AllocatorInstance.Data);
      }
      if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.AllocatorInstance.Data);
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    local_290[0] = *(uint *)(*(longlong *)&pTVar7->Elements +
                            (longlong)TStack_218.CurrentBitIndex * 0xc);
    if (local_88._8_4_ != local_54) {
      FVar20.Data = local_50;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FVar20.Data = local_48.Data;
      }
      for (iVar11 = *(int *)(FVar20.Data + (ulonglong)(local_40 - 1 & local_290[0]) * 4);
          iVar11 != -1; iVar11 = *(int *)(local_88._0_8_ + (longlong)iVar11 * 0xc + 4)) {
        if (*(uint *)(local_88._0_8_ + (longlong)iVar11 * 0xc) == local_290[0]) goto LAB_148263495;
      }
    }
    if (((local_288.AllocatorInstance.Data <= (FScriptContainerElement *)local_290) &&
        ((FScriptContainerElement *)local_290 <
         local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_288.ArrayNum == local_288.ArrayMax) {
      local_288.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_288.AllocatorInstance,&local_288.ArrayMax);
    }
    lVar21 = (longlong)local_288.ArrayNum;
    local_288.ArrayNum = local_288.ArrayNum + 1;
    *(uint *)(local_288.AllocatorInstance.Data + lVar21 * 4) = local_290[0];
LAB_148263495:
    TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
  } while( true );
}

// DeferSetChildToParentChildUntilClusteredComponentInParentUnion @ 148279340

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
UClusterUnionReplicatedProxyComponent::
DeferSetChildToParentChildUntilClusteredComponentInParentUnion
          (UClusterUnionReplicatedProxyComponent *this)

{
  bool bVar1;
  UClusterUnionComponent *pUVar2;
  UPrimitiveComponent *pUVar3;
  FTimerManager *this_00;
  FTimerHandle FVar4;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentClusterUnion).WeakPtr);
  if (((bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&(this->ChildClusteredComponent).WeakPtr), bVar1)
      ) && (this->bIsPendingDeletion == false)) {
    (this->DeferSetChildToParentHandle).Handle = 0;
    pUVar2 = (UClusterUnionComponent *)FWeakObjectPtr::Get(&(this->ParentClusterUnion).WeakPtr);
    pUVar3 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->ChildClusteredComponent).WeakPtr);
    bVar1 = UClusterUnionComponent::IsComponentAdded(pUVar2,pUVar3);
    if (bVar1) {
      pUVar2 = (UClusterUnionComponent *)FWeakObjectPtr::Get(&(this->ParentClusterUnion).WeakPtr);
      pUVar3 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->ChildClusteredComponent).WeakPtr);
      UClusterUnionComponent::ForceSetChildToParent
                (pUVar2,pUVar3,&this->ParticleBoneIds,&this->ParticleChildToParents);
    }
    else if ((AActor *)this->_padding_ != (AActor *)0x0) {
      this_00 = AActor::GetWorldTimerManager((AActor *)this->_padding_);
      FVar4 = FTimerManager::SetTimerForNextTick<UClusterUnionReplicatedProxyComponent>
                        (this_00,(UClusterUnionReplicatedProxyComponent *)&stack0x00000008,
                         (pmf_f4e6f580 *)this);
                    /* WARNING: Load size is inaccurate */
      (this->DeferSetChildToParentHandle).Handle = *FVar4.Handle;
    }
  }
  return;
}

// EndPlay @ 14827be50

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
UClusterUnionReplicatedProxyComponent::EndPlay
          (UClusterUnionReplicatedProxyComponent *this,Type param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UClusterUnionReplicatedProxyComponent::EndPlay(EEndPlayReason::Type)_::_2_::FStat_UClusterUnionReplicatedProxyComponent_EndPlay>
  FVar7;
  FTimerManager *this_00;
  FTimerData *pFVar8;
  UClusterUnionComponent *this_01;
  UPrimitiveComponent *pUVar9;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  FVar13.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UClusterUnionReplicatedProxyComponent_EndPlay ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UClusterUnionReplicatedProxyComponent::EndPlay(EEndPlayReason::Type)_::_2_::FStat_UClusterUnionReplicatedProxyComponent_EndPlay>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,
                                "UClusterUnionReplicatedProxyComponent_EndPlay");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_UClusterUnionReplicatedProxyComponent_EndPlay,*pFVar6,
                   L"UClusterUnionReplicatedProxyComponent_EndPlay","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_UClusterUnionReplicatedProxyComponent_EndPlay;
  if (StatPtr_UClusterUnionReplicatedProxyComponent_EndPlay ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UClusterUnionReplicatedProxyComponent::EndPlay(EEndPlayReason::Type)_::_2_::FStat_UClusterUnionReplicatedProxyComponent_EndPlay>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,"UClusterUnionReplicatedProxyComponent_EndPlay");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UClusterUnionReplicatedProxyComponent::EndPlay(EEndPlayReason::Type)_::_2_::FStat_UClusterUnionReplicatedProxyComponent_EndPlay>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_UClusterUnionReplicatedProxyComponent_EndPlay,*pFVar6,
                         L"UClusterUnionReplicatedProxyComponent_EndPlay","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionReplicatedProxyComponent.cpp"
                   ,0x30);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_14827bfe4;
    }
  }
  bVar3 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_14827bfe4:
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  this->bIsPendingDeletion = true;
  if (((AActor *)this->_padding_ != (AActor *)0x0) &&
     ((this->DeferSetChildToParentHandle).Handle != 0)) {
    this_00 = AActor::GetWorldTimerManager((AActor *)this->_padding_);
    pFVar8 = FTimerManager::FindTimer(this_00,&this->DeferSetChildToParentHandle);
    if (pFVar8 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->DeferSetChildToParentHandle).Handle);
    }
    (this->DeferSetChildToParentHandle).Handle = 0;
  }
  if (*(char *)(this->_padding_ + 0x168) != '\x03') {
    bVar5 = FWeakObjectPtr::IsValid(&(this->ParentClusterUnion).WeakPtr);
    if (bVar5) {
      bVar5 = FWeakObjectPtr::IsValid(&(this->ChildClusteredComponent).WeakPtr);
      if (bVar5) {
        this_01 = (UClusterUnionComponent *)FWeakObjectPtr::Get(&(this->ParentClusterUnion).WeakPtr)
        ;
        pUVar9 = (UPrimitiveComponent *)
                 FWeakObjectPtr::Get(&(this->ChildClusteredComponent).WeakPtr);
        UClusterUnionComponent::RemoveComponentFromCluster(this_01,pUVar9);
      }
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_38);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// FlushNetDormancyIfNeeded @ 148282720

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
UClusterUnionReplicatedProxyComponent::FlushNetDormancyIfNeeded
          (UClusterUnionReplicatedProxyComponent *this)

{
  int iVar1;
  longlong *plVar2;
  AActor *this_00;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  ENetMode EVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_void___cdecl_AActor::FlushNetDormancy(void)_::_2_::FStat_NET_AActor_FlushNetDormancy>
  FVar9;
  UWorld *this_01;
  FWorldContext *pFVar10;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  FName FStackX_8;
  FName FStackX_10;
  
  if ((!ClusterUnionCVars::ClusterUnionUseFlushNetDormancy) ||
     (this_00 = (AActor *)this->_padding_, this_00 == (AActor *)0x0)) {
    return;
  }
  if (this_00->NetDriverName != (FName)0x0) {
    FNameEntryId::FromValidEName((EName)&FStackX_8);
  }
  EVar7 = AActor::InternalGetNetMode(this_00);
  if (EVar7 == NM_Client) {
    return;
  }
  if ((this_00->NetDormancy).Value < 2) {
    return;
  }
  if (this_00->bActorIsBeingDestroyed != '\0') {
    return;
  }
  if (((uint)this_00->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_NET_AActor_FlushNetDormancy ==
        (FThreadSafeStaticStat<_public:_void___cdecl_AActor::FlushNetDormancy(void)_::_2_::FStat_NET_AActor_FlushNetDormancy>
         )0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"NET_AActor_FlushNetDormancy");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_NET_AActor_FlushNetDormancy,*pFVar8,
                 L"NET_AActor_FlushNetDormancy","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_NET_AActor_FlushNetDormancy;
  if (StatPtr_NET_AActor_FlushNetDormancy ==
      (FThreadSafeStaticStat<_public:_void___cdecl_AActor::FlushNetDormancy(void)_::_2_::FStat_NET_AActor_FlushNetDormancy>
       )0x0) {
    pFVar8 = ::FName::FName(&FStackX_10,"NET_AActor_FlushNetDormancy");
    FVar9 = (FThreadSafeStaticStat<_public:_void___cdecl_AActor::FlushNetDormancy(void)_::_2_::FStat_NET_AActor_FlushNetDormancy>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_NET_AActor_FlushNetDormancy,*pFVar8,
                         L"NET_AActor_FlushNetDormancy","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStackX_8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStackX_8,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_8.ComparisonIndex.Value = FVar12.Value;
        FStackX_8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Actor.cpp"
                   ,0xc0a);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FStackX_8.ComparisonIndex.Value = FVar12.Value;
      FStackX_8.Number = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_147395967;
    }
  }
  bVar4 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_147395967:
  bVar16 = (this_00->NetDormancy).Value == '\x04';
  if (bVar16) {
    (this_00->NetDormancy).Value = '\x02';
  }
  if ((this_00->bReplicates != '\0') &&
     (this_01 = AActor::GetWorld(this_00), this_01 != (UWorld *)0x0)) {
    UWorld::AddNetworkActor(this_01,this_00);
    pFVar10 = UEngine::GetWorldContextFromWorld(GEngine,this_01);
    if (pFVar10 != (FWorldContext *)0x0) {
      pFVar14 = (pFVar10->ActiveNetDrivers).AllocatorInstance.Data;
      iVar1 = (pFVar10->ActiveNetDrivers).ArrayNum;
      pFVar15 = pFVar14 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pFVar10->ActiveNetDrivers).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&FStackX_8);
        }
        if (pFVar14 == pFVar15) break;
        plVar2 = *(longlong **)pFVar14;
        if ((plVar2 != (longlong *)0x0) &&
           (cVar6 = (**(code **)(*plVar2 + 0x488))(plVar2,this_00), cVar6 != '\0')) {
          UNetDriver::FlushActorDormancy(*(UNetDriver **)pFVar14,this_00,bVar16);
        }
        pFVar14 = pFVar14 + 0x10;
      }
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// GetLifetimeReplicatedProps @ 148289720

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
UClusterUnionReplicatedProxyComponent::GetLifetimeReplicatedProps
          (UClusterUnionReplicatedProxyComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepPropertyDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  UActorComponent::GetLifetimeReplicatedProps((UActorComponent *)this,param_1);
  local_28.bIsPushBased = true;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.RepIndex = 2;
  local_38.PropertyName = L"ParentClusterUnion";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 3;
  local_38.PropertyName = L"ChildClusteredComponent";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 4;
  local_38.PropertyName = L"ParticleBoneIds";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 5;
  local_38.PropertyName = L"ParticleChildToParents";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 14828c0e0

UClass * __cdecl UClusterUnionReplicatedProxyComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ClusterUnionReplicatedProxyComponent",
               &Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent.InnerSingleton,
               StaticRegisterNativesUClusterUnionReplicatedProxyComponent,0x150,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UClusterUnionReplicatedProxyComponent>,
               InternalVTableHelperCtorCaller<UClusterUnionReplicatedProxyComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent.InnerSingleton;
}

// OnRep_ChildClusteredComponent @ 148298c30

void __thiscall
UClusterUnionReplicatedProxyComponent::OnRep_ChildClusteredComponent
          (UClusterUnionReplicatedProxyComponent *this)

{
  this->bNetUpdateChildClusteredComponent = true;
  return;
}

// OnRep_ParentClusterUnion @ 148298c40

void __thiscall
UClusterUnionReplicatedProxyComponent::OnRep_ParentClusterUnion
          (UClusterUnionReplicatedProxyComponent *this)

{
  this->bNetUpdateParentClusterUnion = true;
  return;
}

// OnRep_ParticleBoneIds @ 148298c50

void __thiscall
UClusterUnionReplicatedProxyComponent::OnRep_ParticleBoneIds
          (UClusterUnionReplicatedProxyComponent *this)

{
  this->bNetUpdateParticleBoneIds = true;
  return;
}

// OnRep_ParticleChildToParents @ 148298c60

void __thiscall
UClusterUnionReplicatedProxyComponent::OnRep_ParticleChildToParents
          (UClusterUnionReplicatedProxyComponent *this)

{
  this->bNetUpdateParticleChildToParents = true;
  return;
}

// PostRepNotifies @ 14829ba80

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
UClusterUnionReplicatedProxyComponent::PostRepNotifies(UClusterUnionReplicatedProxyComponent *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UClusterUnionReplicatedProxyComponent::PostRepNotifies(void)_::_2_::FStat_UClusterUnionReplicatedProxyComponent_PostRepNotifies>
  FVar8;
  UWorld *this_00;
  FTimerManager *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  bVar2 = false;
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UClusterUnionReplicatedProxyComponent_PostRepNotifies ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UClusterUnionReplicatedProxyComponent::PostRepNotifies(void)_::_2_::FStat_UClusterUnionReplicatedProxyComponent_PostRepNotifies>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,
                                "UClusterUnionReplicatedProxyComponent_PostRepNotifies");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_UClusterUnionReplicatedProxyComponent_PostRepNotifies,*pFVar7,
                   L"UClusterUnionReplicatedProxyComponent_PostRepNotifies","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_UClusterUnionReplicatedProxyComponent_PostRepNotifies;
  if (StatPtr_UClusterUnionReplicatedProxyComponent_PostRepNotifies ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UClusterUnionReplicatedProxyComponent::PostRepNotifies(void)_::_2_::FStat_UClusterUnionReplicatedProxyComponent_PostRepNotifies>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"UClusterUnionReplicatedProxyComponent_PostRepNotifies");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UClusterUnionReplicatedProxyComponent::PostRepNotifies(void)_::_2_::FStat_UClusterUnionReplicatedProxyComponent_PostRepNotifies>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_UClusterUnionReplicatedProxyComponent_PostRepNotifies,*pFVar7,
                         L"UClusterUnionReplicatedProxyComponent_PostRepNotifies","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
LAB_14829bc02:
    bVar4 = false;
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionReplicatedProxyComponent.cpp"
                   ,0x8d);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14829bc02;
    local_res8.s.LowPart = FVar10.Value;
    local_res8.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar4 = true;
    FVar12.Value = FVar10.Value;
  }
  if (this->bIsPendingDeletion == false) {
    bVar6 = FWeakObjectPtr::IsValid(&(this->ParentClusterUnion).WeakPtr);
    if (bVar6) {
      bVar6 = FWeakObjectPtr::IsValid(&(this->ChildClusteredComponent).WeakPtr);
      if ((bVar6) && ((this->ParticleBoneIds).ArrayNum != 0)) {
        if (((this->bNetUpdateParentClusterUnion != false) ||
            (this->bNetUpdateChildClusteredComponent != false)) ||
           (this->bNetUpdateParticleBoneIds != false)) {
          bVar2 = true;
          AddComponentToCluster(this);
          this->bNetUpdateParentClusterUnion = false;
          this->bNetUpdateChildClusteredComponent = false;
          this->bNetUpdateParticleBoneIds = false;
        }
        if (((this->bNetUpdateParticleChildToParents != false) || (bVar2)) &&
           ((this->ParticleBoneIds).ArrayNum == (this->ParticleChildToParents).ArrayNum)) {
          if ((this->DeferSetChildToParentHandle).Handle == 0) {
            DeferSetChildToParentChildUntilClusteredComponentInParentUnion(this);
          }
          this->bNetUpdateParticleChildToParents = false;
        }
        goto LAB_14829bd2d;
      }
    }
    if ((this->bNetUpdateParentClusterUnion != false) &&
       (((this->bNetUpdateChildClusteredComponent != false &&
         (this->bNetUpdateParticleBoneIds != false)) &&
        (this->bNetUpdateParticleChildToParents != false)))) {
      this_00 = (UWorld *)this->_padding_;
      if (this_00 == (UWorld *)0x0) {
        this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        if (this_00 == (UWorld *)0x0) goto LAB_14829bd2d;
      }
      this_01 = UWorld::GetTimerManager(this_00);
      local_38.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)(uint)local_38.NameAndInfo.Number << 0x20);
      local_38.StatData.Pad = (uchar  [8])_vcall__560__flat______;
      FTimerManager::SetTimerForNextTick<UClusterUnionReplicatedProxyComponent>
                (this_01,(UClusterUnionReplicatedProxyComponent *)&local_res8.s,(pmf_f4e6f580 *)this
                );
    }
  }
LAB_14829bd2d:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_38.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar11.Number,FVar12.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_38);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// ResetTransientState @ 1482a6cb0

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
UClusterUnionReplicatedProxyComponent::ResetTransientState
          (UClusterUnionReplicatedProxyComponent *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->LastSyncedBoneIds);
  if (((AActor *)this->_padding_ != (AActor *)0x0) &&
     ((this->DeferSetChildToParentHandle).Handle != 0)) {
    this_00 = AActor::GetWorldTimerManager((AActor *)this->_padding_);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->DeferSetChildToParentHandle);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->DeferSetChildToParentHandle).Handle);
    }
    (this->DeferSetChildToParentHandle).Handle = 0;
  }
  return;
}

// SetChildClusteredComponent @ 1482aa2f0

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
UClusterUnionReplicatedProxyComponent::SetChildClusteredComponent
          (UClusterUnionReplicatedProxyComponent *this,UPrimitiveComponent *param_1)

{
  bool bVar1;
  UPrimitiveComponent *local_res8;
  
  bVar1 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals<UPrimitiveComponent,bool>
                    (&this->ChildClusteredComponent,param_1);
  if (!bVar1) {
    if ((ClusterUnionCVars::ClusterUnionUseFlushNetDormancy != false) &&
       ((AActor *)this->_padding_ != (AActor *)0x0)) {
      AActor::FlushNetDormancy((AActor *)this->_padding_);
    }
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->ChildClusteredComponent).WeakPtr,(FObjectPtr)&local_res8);
  }
  return;
}

// SetParentClusterUnion @ 1482adb80

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
UClusterUnionReplicatedProxyComponent::SetParentClusterUnion
          (UClusterUnionReplicatedProxyComponent *this,UClusterUnionComponent *param_1)

{
  bool bVar1;
  UClusterUnionComponent *local_res8;
  
  bVar1 = TWeakObjectPtr<UClusterUnionComponent,FWeakObjectPtr>::
          UEOpEquals<UClusterUnionComponent,bool>(&this->ParentClusterUnion,param_1);
  if (!bVar1) {
    if ((ClusterUnionCVars::ClusterUnionUseFlushNetDormancy != false) &&
       ((AActor *)this->_padding_ != (AActor *)0x0)) {
      AActor::FlushNetDormancy((AActor *)this->_padding_);
    }
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UClusterUnionComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->ParentClusterUnion).WeakPtr,(FObjectPtr)&local_res8);
  }
  return;
}

// SetParticleBoneIds @ 1482add30

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
UClusterUnionReplicatedProxyComponent::SetParticleBoneIds
          (UClusterUnionReplicatedProxyComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  
  iVar6 = (this->ParticleBoneIds).ArrayNum;
  if ((iVar6 != param_1->ArrayNum) ||
     ((iVar6 != 0 &&
      (iVar6 = memcmp((this->ParticleBoneIds).AllocatorInstance.Data,
                      (param_1->AllocatorInstance).Data,(longlong)iVar6 << 2), iVar6 != 0)))) {
    if ((ClusterUnionCVars::ClusterUnionUseFlushNetDormancy != false) &&
       ((AActor *)this->_padding_ != (AActor *)0x0)) {
      AActor::FlushNetDormancy((AActor *)this->_padding_);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ParticleBoneIds,param_1);
    uVar2 = param_1->ArrayNum;
    pTVar9 = &this->ParticleChildToParents;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &(this->ParticleChildToParents).ArrayMax;
    iVar6 = 0;
    (this->ParticleChildToParents).ArrayNum = 0;
    if ((this->ParticleChildToParents).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar2,&pTVar9->AllocatorInstance,0,piVar1);
    }
    if (0 < param_1->ArrayNum) {
      do {
        pFVar3 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar3 < (FScriptContainerElement *)0x154eba441) &&
            (&UE::Math::TTransform<double>::Identity <
             (TTransform<double> *)(pFVar3 + (longlong)*piVar1 * 0x60))) &&
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
        iVar7 = (this->ParticleChildToParents).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1060,&pTVar9->AllocatorInstance,piVar1);
        }
        iVar6 = iVar6 + 1;
        (this->ParticleChildToParents).ArrayNum = iVar7 + 1;
        pFVar3 = (pTVar9->AllocatorInstance).Data;
        lVar8 = (longlong)iVar7 * 0x60;
        *(double (*) [2])(pFVar3 + lVar8) =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        *(double (*) [2])(pFVar3 + lVar8 + 0x10) =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        *(double (*) [2])(pFVar3 + lVar8 + 0x20) =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        *(double (*) [2])(pFVar3 + lVar8 + 0x30) =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        *(double (*) [2])(pFVar3 + lVar8 + 0x40) =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        *(double (*) [2])(pFVar3 + lVar8 + 0x50) =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      } while (iVar6 < param_1->ArrayNum);
    }
  }
  return;
}

// SetParticleChildToParent @ 1482adf10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UClusterUnionReplicatedProxyComponent::SetParticleChildToParent
          (UClusterUnionReplicatedProxyComponent *this,int param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  undefined7 extraout_var;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  pFVar1 = (this->ParticleBoneIds).AllocatorInstance.Data;
  pFVar21 = pFVar1;
  if (pFVar1 == pFVar1 + (longlong)(this->ParticleBoneIds).ArrayNum * 4) {
    return;
  }
  while (*(int *)pFVar21 != param_1) {
    pFVar21 = pFVar21 + 4;
    if (pFVar21 == pFVar1 + (longlong)(this->ParticleBoneIds).ArrayNum * 4) {
      return;
    }
  }
  uVar20 = (uint)((longlong)pFVar21 - (longlong)pFVar1 >> 2);
  if (uVar20 == 0xffffffff) {
    return;
  }
  iVar16 = (this->ParticleChildToParents).ArrayNum;
  uVar17 = 0;
  if ((int)uVar20 < iVar16) {
    uVar17 = ~uVar20 >> 0x1f;
  }
  if (uVar17 == 0) {
    iVar16 = 0x506106c8;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar17 = (uint)CONCAT71(extraout_var,bVar15);
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->ParticleChildToParents).AllocatorInstance.Data;
  lVar22 = (longlong)(int)uVar20 * 0x60;
  dVar24 = *(double *)(pFVar1 + lVar22 + 0x30) - (param_2->Translation).ZW.m128d_f64[0];
  dVar26 = *(double *)(pFVar1 + lVar22 + 0x30 + 8) - (param_2->Translation).ZW.m128d_f64[1];
  dVar28 = *(double *)(pFVar1 + lVar22 + 0x20) - (param_2->Translation).XY.m128d_f64[0];
  dVar30 = *(double *)(pFVar1 + lVar22 + 0x20 + 8) - (param_2->Translation).XY.m128d_f64[1];
  lVar23 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar26,0) & _UNK_15061cc88));
  auVar3._8_4_ = (int)lVar23;
  auVar3._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  uVar18 = movmskpd(iVar16,auVar3);
  lVar23 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar30,0) & _UNK_15061cc88));
  auVar8._8_4_ = (int)lVar23;
  auVar8._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar8._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  iVar16 = movmskpd(uVar17,auVar8);
  if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
    dVar28 = *(double *)(pFVar1 + lVar22 + 0x10);
    dVar30 = *(double *)(pFVar1 + lVar22 + 0x10 + 8);
    dVar24 = *(double *)(pFVar1 + lVar22);
    dVar26 = *(double *)(pFVar1 + lVar22 + 8);
    dVar25 = dVar28 - (param_2->Rotation).ZW.m128d_f64[0];
    dVar27 = dVar30 - (param_2->Rotation).ZW.m128d_f64[1];
    dVar28 = dVar28 + (param_2->Rotation).ZW.m128d_f64[0];
    dVar30 = dVar30 + (param_2->Rotation).ZW.m128d_f64[1];
    dVar29 = dVar24 - (param_2->Rotation).XY.m128d_f64[0];
    dVar31 = dVar26 - (param_2->Rotation).XY.m128d_f64[1];
    dVar24 = dVar24 + (param_2->Rotation).XY.m128d_f64[0];
    dVar26 = dVar26 + (param_2->Rotation).XY.m128d_f64[1];
    lVar23 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar27,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar23;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar19 = movmskpd(0,auVar4);
    lVar23 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar31,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar23;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    uVar17 = movmskpd(iVar16,auVar5);
    uVar18 = iVar19 << 2 | uVar17;
    if (uVar18 != 0) {
      lVar23 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar30,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar23;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar28,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      uVar18 = movmskpd(uVar18,auVar6);
      lVar23 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar26,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar23;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar24,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      uVar17 = movmskpd(uVar17,auVar9);
      if ((uVar18 & 0x3fffffff) != 0 || uVar17 != 0) goto LAB_1482ae11a;
    }
    dVar24 = *(double *)(pFVar1 + lVar22 + 0x50) - (param_2->Scale3D).ZW.m128d_f64[0];
    dVar26 = *(double *)(pFVar1 + lVar22 + 0x50 + 8) - (param_2->Scale3D).ZW.m128d_f64[1];
    dVar28 = *(double *)(pFVar1 + lVar22 + 0x40) - (param_2->Scale3D).XY.m128d_f64[0];
    dVar30 = *(double *)(pFVar1 + lVar22 + 0x40 + 8) - (param_2->Scale3D).XY.m128d_f64[1];
    lVar23 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar26,0) & _UNK_15061cc88));
    auVar7._8_4_ = (int)lVar23;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar7._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    uVar18 = movmskpd(0,auVar7);
    lVar23 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar30,0) & _UNK_15061cc88));
    auVar10._8_4_ = (int)lVar23;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar10._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar16 = movmskpd(uVar17,auVar10);
    if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
      return;
    }
  }
LAB_1482ae11a:
  if ((ClusterUnionCVars::ClusterUnionUseFlushNetDormancy != false) &&
     ((AActor *)this->_padding_ != (AActor *)0x0)) {
    AActor::FlushNetDormancy((AActor *)this->_padding_);
  }
  dVar24 = (param_2->Rotation).XY.m128d_f64[0];
  dVar26 = (param_2->Rotation).XY.m128d_f64[1];
  dVar28 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar30 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar25 = (param_2->Translation).XY.m128d_f64[0];
  dVar27 = (param_2->Translation).XY.m128d_f64[1];
  uVar17 = 0;
  if ((int)uVar20 < (this->ParticleChildToParents).ArrayNum) {
    uVar17 = ~uVar20 >> 0x1f;
  }
  dVar29 = (param_2->Translation).ZW.m128d_f64[0];
  dVar31 = (param_2->Translation).ZW.m128d_f64[1];
  dVar11 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar12 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar13 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar14 = (param_2->Scale3D).ZW.m128d_f64[1];
  if ((uVar17 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->ParticleChildToParents).AllocatorInstance.Data;
  *(double *)(pFVar1 + lVar22) = dVar24;
  *(double *)(pFVar1 + lVar22 + 8) = dVar26;
  *(double *)(pFVar1 + lVar22 + 0x10) = dVar28;
  *(double *)(pFVar1 + lVar22 + 0x10 + 8) = dVar30;
  *(double *)(pFVar1 + lVar22 + 0x20) = dVar25;
  *(double *)(pFVar1 + lVar22 + 0x20 + 8) = dVar27;
  *(double *)(pFVar1 + lVar22 + 0x30) = dVar29;
  *(double *)(pFVar1 + lVar22 + 0x30 + 8) = dVar31;
  *(double *)(pFVar1 + lVar22 + 0x40) = dVar11;
  *(double *)(pFVar1 + lVar22 + 0x40 + 8) = dVar12;
  *(double *)(pFVar1 + lVar22 + 0x50) = dVar13;
  *(double *)(pFVar1 + lVar22 + 0x50 + 8) = dVar14;
  return;
}

// StaticRegisterNativesUClusterUnionReplicatedProxyComponent @ 1482b1d60

void __cdecl
UClusterUnionReplicatedProxyComponent::StaticRegisterNativesUClusterUnionReplicatedProxyComponent
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 1482be2a0

void __thiscall
UClusterUnionReplicatedProxyComponent::ValidateGeneratedRepEnums
          (UClusterUnionReplicatedProxyComponent *this,
          TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_ParentClusterUnion,L"ParentClusterUnion");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_ChildClusteredComponent,L"ChildClusteredComponent");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_ParticleBoneIds,L"ParticleBoneIds");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_ParticleChildToParents,L"ParticleChildToParents");
    _Init_thread_footer(&::_TSS3);
  }
  if ((param_1->ArrayNum < 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x20);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_ParentClusterUnion == FVar4) {
    if ((param_1->ArrayNum < 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x30);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_ChildClusteredComponent == FVar4) {
      if ((param_1->ArrayNum < 5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x40);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_ParticleBoneIds == FVar4) {
        if ((param_1->ArrayNum < 6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x50);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        if (bVar3) {
          FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_ParticleChildToParents == FVar6) {
          return;
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\ClusterUnionReplicatedProxyComponent.gen.cpp"
                     ,0x35a,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UClusterUnionReplicatedProxyComponent"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execGetChildClusteredComponent @ 1482c2120

void __cdecl
UClusterUnionReplicatedProxyComponent::execGetChildClusteredComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 5));
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetParentClusterUnionComponent @ 1482c38d0

void __cdecl
UClusterUnionReplicatedProxyComponent::execGetParentClusterUnionComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x20);
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetParticleBoneIds @ 1482c39f0

void __cdecl
UClusterUnionReplicatedProxyComponent::execGetParticleBoneIds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[5].field_0x8);
  return;
}

// execIsPendingDeletion @ 1482c41e0

void __cdecl
UClusterUnionReplicatedProxyComponent::execIsPendingDeletion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[8].field_0x4;
  return;
}

// execMarkPendingDeletion @ 1482c4210

void __cdecl
UClusterUnionReplicatedProxyComponent::execMarkPendingDeletion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[8].field_0x4 = 1;
  return;
}

// execOnRep_ChildClusteredComponent @ 1482c4240

void __cdecl
UClusterUnionReplicatedProxyComponent::execOnRep_ChildClusteredComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[8].field_0x1 = 1;
  return;
}

// execOnRep_ParentClusterUnion @ 1482c4270

void __cdecl
UClusterUnionReplicatedProxyComponent::execOnRep_ParentClusterUnion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

// execOnRep_ParticleBoneIds @ 1482c42a0

void __cdecl
UClusterUnionReplicatedProxyComponent::execOnRep_ParticleBoneIds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[8].field_0x2 = 1;
  return;
}

// execOnRep_ParticleChildToParents @ 1482c42d0

void __cdecl
UClusterUnionReplicatedProxyComponent::execOnRep_ParticleChildToParents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[8].field_0x3 = 1;
  return;
}

// execSetChildClusteredComponent @ 1482c59e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UClusterUnionReplicatedProxyComponent::execSetChildClusteredComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPrimitiveComponent *pUVar2;
  bool bVar3;
  UPrimitiveComponent *local_res8;
  UPrimitiveComponent *local_res10;
  
  local_res8 = (UPrimitiveComponent *)0x0;
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
  bVar3 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals<UPrimitiveComponent,bool>
                    ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)(param_1 + 5),local_res8)
  ;
  if (!bVar3) {
    if ((ClusterUnionCVars::ClusterUnionUseFlushNetDormancy != false) &&
       (*(AActor **)&param_1[4].field_0x8 != (AActor *)0x0)) {
      AActor::FlushNetDormancy(*(AActor **)&param_1[4].field_0x8);
    }
    local_res10 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(param_1 + 5),(FObjectPtr)&local_res10);
  }
  return;
}

// execSetParentClusterUnion @ 1482c7500

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
UClusterUnionReplicatedProxyComponent::execSetParentClusterUnion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClusterUnionComponent *pUVar2;
  bool bVar3;
  UClusterUnionComponent *local_res8;
  UClusterUnionComponent *local_res10;
  
  local_res8 = (UClusterUnionComponent *)0x0;
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
  bVar3 = TWeakObjectPtr<UClusterUnionComponent,FWeakObjectPtr>::
          UEOpEquals<UClusterUnionComponent,bool>
                    ((TWeakObjectPtr<UClusterUnionComponent,FWeakObjectPtr> *)&param_1[4].field_0x20
                     ,local_res8);
  if (!bVar3) {
    if ((ClusterUnionCVars::ClusterUnionUseFlushNetDormancy != false) &&
       (*(AActor **)&param_1[4].field_0x8 != (AActor *)0x0)) {
      AActor::FlushNetDormancy(*(AActor **)&param_1[4].field_0x8);
    }
    local_res10 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UClusterUnionComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[4].field_0x20,(FObjectPtr)&local_res10);
  }
  return;
}

// execSetParticleBoneIds @ 1482c7770

void __cdecl
UClusterUnionReplicatedProxyComponent::execSetParticleBoneIds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
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
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetParticleBoneIds((UClusterUnionReplicatedProxyComponent *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetParticleChildToParent @ 1482c7820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UClusterUnionReplicatedProxyComponent::execSetParticleChildToParent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TTransform<double> *pTVar12;
  undefined1 auStack_a8 [32];
  int local_88 [4];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar12 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar12 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetParticleChildToParent((UClusterUnionReplicatedProxyComponent *)param_1,local_88[0],pTVar12);
  return;
}

