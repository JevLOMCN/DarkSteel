// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b4ab240

UClass * __cdecl UDS_HitProcessAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HitProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HitProcessAbility",
               &Z_Registration_Info_UClass_UDS_HitProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_HitProcessAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HitProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_HitProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HitProcessAbility.InnerSingleton;
}

// UDS_HitProcessAbility @ 14b4b2500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_HitProcessAbility * __thiscall
UDS_HitProcessAbility::UDS_HitProcessAbility(UDS_HitProcessAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->TimerHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimerHandles).ArrayNum = 0;
  (this->TimerHandles).ArrayMax = 0;
  this->ChainEffectProcessingCount = 0;
  return this;
}

// ~UDS_HitProcessAbility @ 14b4b37b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_HitProcessAbility::~UDS_HitProcessAbility(UDS_HitProcessAbility *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->TimerHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7550

UClass * __cdecl UDS_HitProcessAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HitProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HitProcessAbility",
               &Z_Registration_Info_UClass_UDS_HitProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_HitProcessAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HitProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_HitProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HitProcessAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_HitProcessAbility @ 14b4b8520

void __cdecl UDS_HitProcessAbility::StaticRegisterNativesUDS_HitProcessAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_HitProcessAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execStartSkillAttack @ 14b4babd0

void __cdecl
UDS_HitProcessAbility::execStartSkillAttack(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool local_e8;
  undefined7 uStack_e7;
  ulong64 uStack_e0;
  ulong64 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  int local_98;
  undefined4 uStack_94;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  FDS_StruckInfo local_78;
  
  local_e8 = false;
  uStack_e0 = 0;
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_d8 = 0;
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98 = -1;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_78._1_7_ = uStack_e7;
  local_78.HasDamage = local_e8;
  local_78.AttackerEntityID = uStack_e0;
  local_78.EventTime = local_c8;
  local_78.ExecuteTime = dStack_c0;
  local_78.DefenderEntityID = local_d8;
  local_78.SkillAttackID = (int)uStack_d0;
  local_78.Damage = uStack_d0._4_4_;
  local_78.AbnormalDestination.field0_0x0._s_0.Y = dStack_a8;
  local_78.AbnormalDestination.field0_0x0._s_0.Z = dStack_a0;
  local_78.AbnormalID = (int)local_b8;
  local_78.DamageInfo = local_b8._4_4_;
  local_78.AbnormalDestination.field0_0x0._s_0.X = dStack_b0;
  local_78._84_4_ = uStack_94;
  local_78.MultiHitPointIndex = local_98;
  local_78.EffectLocation.field0_0x0._s_0.Y = dStack_88;
  local_78.EffectLocation.field0_0x0._s_0.Z = dStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78.EffectLocation.field0_0x0._s_0.X = dStack_90;
  StartSkillAttack((UDS_HitProcessAbility *)param_1,&local_78);
  return;
}

// UDS_HitProcessAbility @ 14b7d7f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_HitProcessAbility * __thiscall
UDS_HitProcessAbility::UDS_HitProcessAbility
          (UDS_HitProcessAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->TimerHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimerHandles).ArrayNum = 0;
  (this->TimerHandles).ArrayMax = 0;
  this->ChainEffectProcessingCount = 0;
  return this;
}

// AddContinousHitInfo @ 14b7d9d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __cdecl
UDS_HitProcessAbility::AddContinousHitInfo
          (ulong64 param_1,int param_2,FDS_StruckInfo *param_3,EDS_SkillTargetCheckType param_4)

{
  double dVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  FDS_EntityBase *pFVar15;
  TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
  *pTVar16;
  TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
  *pTVar17;
  FDS_HitInfo *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  TPairInitializer<unsigned___int64_const_&,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_&>
  local_198;
  FDS_HitInfo *local_188;
  undefined1 local_180 [32];
  ForElementType<unsigned_int> local_160;
  TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
  *pTStack_158;
  undefined1 local_148 [12];
  uint uStack_13c;
  undefined1 local_138 [24];
  undefined8 uStack_120;
  FDS_HitInfo *local_118;
  uchar local_110 [8];
  ForElementType<FSetElementId> local_108;
  int local_100;
  FDS_HitInfo local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a8._0_4_ = param_2;
  local_1a0 = (undefined1  [8])param_1;
  if ((param_4 == InstantContinuous) && (ContinousHitInfoMap._8_4_ != ContinousHitInfoMap._52_4_)) {
    lVar20 = 0x154cef718;
    if (ContinousHitInfoMap._64_8_ != 0) {
      lVar20 = ContinousHitInfoMap._64_8_;
    }
    for (iVar14 = *(int *)(lVar20 + (ulonglong)
                                    (ContinousHitInfoMap._72_4_ - 1 &
                                    (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4); iVar14 != -1
        ; iVar14 = *(int *)((longlong)iVar14 * 0x60 + 0x58 + ContinousHitInfoMap._0_8_)) {
      if (*(ulong64 *)((longlong)iVar14 * 0x60 + ContinousHitInfoMap._0_8_) == param_1) {
        if (iVar14 != -1) {
          bVar10 = false;
          pTVar17 = (TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                     *)TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                       ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                                      *)&ContinousHitInfoMap,param_1);
          local_f8.FirstAttackerEntityID = 0;
          local_f8.AttackerEntityID = 0;
          local_f8.EventTime = 0.0;
          local_f8.ExecuteTime._0_4_ = 0;
          local_f8.ExecuteTime._4_4_ = 0x80;
          local_f8.SkillEndTime._0_4_ = 0xffffffff;
          local_f8.SkillEndTime._4_4_ = 0;
          local_f8.EffectLocation.field0_0x0._s_0.X = 0.0;
          local_f8.EffectLocation.field0_0x0._8_4_ = 0;
          TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                       *)&local_f8,pTVar17);
          TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    ((TIterator *)local_180,
                     (TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                      *)&local_f8);
          local_118 = &local_f8;
          local_110[0] = '\0';
          local_110[1] = '\0';
          local_138._0_16_ = local_180._16_16_;
          local_148._0_8_ = local_180._0_8_;
          stack0xfffffffffffffec0 = local_180._8_8_;
          local_138._16_8_ = local_160;
          uStack_120 = pTStack_158;
          uVar19 = local_180._24_8_ >> 0x20;
          if (local_180._28_4_ < *(int *)(local_180._16_8_ + 0x18)) goto LAB_14b7d9e80;
          goto LAB_14b7d9f52;
        }
        break;
      }
    }
  }
  goto LAB_14b7d9f72;
  while( true ) {
    local_138._8_4_ = local_138._8_4_ & ~uStack_13c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_148 + 8));
    uVar19 = (ulonglong)(uint)local_138._12_4_;
    if (*(int *)(local_138._0_8_ + 0x18) <= (int)local_138._12_4_) break;
LAB_14b7d9e80:
    if (param_3->ExecuteTime !=
        *(double *)((longlong)(int)uVar19 * 0x68 + 0x30 + *(longlong *)local_148._0_8_)) {
      bVar10 = true;
      break;
    }
  }
  if ((local_110[0] != '\0') && (local_110[1] != '\0')) {
    uVar21 = (int)local_118->AttackerEntityID - *(int *)((longlong)&local_118->SkillEndTime + 4);
    if (uVar21 < 4) {
      iVar14 = 1;
    }
    else {
      uVar19 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar20 & 0x1f);
    }
    if (((0 < (int)uVar21) &&
        (*(int *)((longlong)&(local_118->EffectLocation).field0_0x0 + 8) < iVar14)) ||
       (iVar14 < *(int *)((longlong)&(local_118->EffectLocation).field0_0x0 + 8))) {
      *(int *)((longlong)&(local_118->EffectLocation).field0_0x0 + 8) = iVar14;
      TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                *)local_118);
    }
  }
  if ((bVar10) &&
     (local_198.Key = (ulong64 *)local_1a0, ContinousHitInfoMap._8_4_ != ContinousHitInfoMap._52_4_)
     ) {
    TSet<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>,FDefaultSetAllocator>
                *)&ContinousHitInfoMap,local_1a0._4_4_ * 0x17 + local_1a0._0_4_,
               (ulong64 *)&local_198);
  }
LAB_14b7d9f52:
  local_f8.EffectLocation.field0_0x0._8_4_ = 0;
  if ((void *)local_f8.EffectLocation.field0_0x0._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_f8.EffectLocation.field0_0x0._s_0.X);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_HitInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_HitInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_HitInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_f8);
LAB_14b7d9f72:
  if (ContinousHitInfoMap._8_4_ != ContinousHitInfoMap._52_4_) {
    lVar20 = 0x154cef718;
    if (ContinousHitInfoMap._64_8_ != 0) {
      lVar20 = ContinousHitInfoMap._64_8_;
    }
    for (iVar14 = *(int *)(lVar20 + (((ulonglong)local_1a0 >> 0x20) * 0x17 + (longlong)local_1a0 &
                                    (ulonglong)(ContinousHitInfoMap._72_4_ - 1)) * 4); iVar14 != -1;
        iVar14 = *(int *)((longlong)iVar14 * 0x60 + 0x58 + ContinousHitInfoMap._0_8_)) {
      if ((undefined1  [8])*(ulong64 **)((longlong)iVar14 * 0x60 + ContinousHitInfoMap._0_8_) ==
          local_1a0) {
        if (iVar14 != -1) {
          pTVar16 = TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                                   *)&ContinousHitInfoMap,(ulong64)local_1a0);
          if (*(int *)&pTVar16->field_0x8 != *(int *)&pTVar16->field_0x34) {
            puVar22 = *(undefined1 **)&pTVar16->field_0x40;
            if (*(undefined1 **)&pTVar16->field_0x40 == (undefined1 *)0x0) {
              puVar22 = &pTVar16->field_0x38;
            }
            iVar14 = *(int *)(puVar22 +
                             (ulonglong)(*(int *)&pTVar16->field_0x48 - 1U & local_1a8._0_4_) * 4);
            if (iVar14 != -1) {
              do {
                if (*(uint *)((longlong)iVar14 * 0x68 + *(longlong *)pTVar16) == local_1a8._0_4_) {
                  pTVar16 = TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                            ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                                           *)&ContinousHitInfoMap,(ulong64)local_1a0);
                  pFVar18 = TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                            ::FindChecked((TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                                           *)pTVar16,local_1a8._0_4_);
                  pFVar15 = FDS_EntityBase::GetEntityBase(&pFVar18->DefenderEntityID);
                  pFVar18 = FDS_HitInfo::FDS_HitInfo(&local_f8,param_3);
                  uVar2 = pFVar18->FirstAttackerEntityID;
                  uVar3 = pFVar18->AttackerEntityID;
                  uVar4 = pFVar18->DefenderEntityID;
                  iVar14 = pFVar18->SkillAttackID;
                  iVar11 = pFVar18->Damage;
                  dVar5 = pFVar18->EventTime;
                  dVar6 = pFVar18->ExecuteTime;
                  dVar7 = pFVar18->SkillEndTime;
                  iVar12 = pFVar18->MultiHitPointIndex;
                  uVar13 = *(undefined4 *)&pFVar18->field_0x3c;
                  dVar8 = (pFVar18->EffectLocation).field0_0x0._s_0.X;
                  dVar9 = (pFVar18->EffectLocation).field0_0x0._s_0.Y;
                  dVar1 = (pFVar18->EffectLocation).field0_0x0._s_0.Z;
                  pTVar16 = TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                            ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                                           *)&ContinousHitInfoMap,(ulong64)local_1a0);
                  pFVar18 = TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                            ::FindChecked((TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                                           *)pTVar16,local_1a8._0_4_);
                  pFVar18->FirstAttackerEntityID = uVar2;
                  pFVar18->AttackerEntityID = uVar3;
                  pFVar18->DefenderEntityID = uVar4;
                  pFVar18->SkillAttackID = iVar14;
                  pFVar18->Damage = iVar11;
                  pFVar18->EventTime = dVar5;
                  pFVar18->ExecuteTime = dVar6;
                  pFVar18->SkillEndTime = dVar7;
                  pFVar18->MultiHitPointIndex = iVar12;
                  *(undefined4 *)&pFVar18->field_0x3c = uVar13;
                  (pFVar18->EffectLocation).field0_0x0._s_0.X = dVar8;
                  (pFVar18->EffectLocation).field0_0x0._s_0.Y = dVar9;
                  (pFVar18->EffectLocation).field0_0x0._s_0.Z = dVar1;
                  uVar2 = param_3->DefenderEntityID;
                  pTVar16 = TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                            ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                                           *)&ContinousHitInfoMap,(ulong64)local_1a0);
                  pFVar18 = TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                            ::FindChecked((TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                                           *)pTVar16,local_1a8._0_4_);
                  pFVar18->AttackerEntityID = uVar2;
                  return pFVar15;
                }
                iVar14 = *(int *)((longlong)iVar14 * 0x68 + 0x60 + *(longlong *)pTVar16);
              } while (iVar14 != -1);
            }
          }
          pTVar17 = (TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                     *)TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                       ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                                      *)&ContinousHitInfoMap,(ulong64)local_1a0);
          local_198.Value =
               (TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                *)local_1a8;
          local_188 = FDS_HitInfo::FDS_HitInfo(&local_f8,param_3);
          TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&,FDS_HitInfo_&&>_>
                    (pTVar17,(TPairInitializer<int_&,FDS_HitInfo_&&> *)&local_198,
                     (bool *)&local_198.Value);
          uVar2 = param_3->DefenderEntityID;
          pTVar16 = TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
                                   *)&ContinousHitInfoMap,(ulong64)local_1a0);
          pFVar18 = TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                    ::FindChecked((TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                                   *)pTVar16,local_1a8._0_4_);
          pFVar18->AttackerEntityID = uVar2;
          return (FDS_EntityBase *)0x0;
        }
        break;
      }
    }
  }
  local_198.Value =
       (TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_> *
       )local_1a8;
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  stack0xfffffffffffffec0 = 0;
  local_138._16_8_ = (ForElementType<unsigned_int>)0x0;
  uStack_120._0_4_ = 0;
  uStack_120._4_4_ = 0x80;
  local_118 = (FDS_HitInfo *)0xffffffff;
  local_108 = (ForElementType<FSetElementId>)0x0;
  local_100 = 0;
  local_188 = FDS_HitInfo::FDS_HitInfo(&local_f8,param_3);
  TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,FDS_HitInfo_&&>_>
            ((TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
              *)local_148,(TPairInitializer<int_&,FDS_HitInfo_&&> *)&local_198,
             (bool *)&local_198.Value);
  local_198.Value =
       (TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_> *
       )(local_1a8 + 8);
  local_188 = (FDS_HitInfo *)local_148;
  TSet<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_const_&,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_&>_>
            ((TSet<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>,FDefaultSetAllocator>
              *)&ContinousHitInfoMap,&local_198,(bool *)&local_198.Value);
  pFVar15 = FDS_EntityBase::GetEntityBase((ulong64 *)(local_1a8 + 8));
  local_100 = 0;
  if (local_108 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108);
  }
  uVar19 = stack0xfffffffffffffec0 >> 0x20;
  stack0xfffffffffffffec0 = stack0xfffffffffffffec0 & 0xffffffff00000000;
  if ((int)uVar19 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)local_148,0,(int *)&uStack_13c);
  }
  uVar21 = uStack_120._4_4_;
  local_118 = (FDS_HitInfo *)0xffffffff;
  uStack_120 = (TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                *)((ulonglong)uStack_120._4_4_ << 0x20);
  if (0x80 < uVar21) {
    uStack_120 = (TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                  *)0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)local_138,0);
  }
  if ((ForElementType<unsigned_int>)local_138._16_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_138._16_8_);
  }
  if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  return pFVar15;
}

// CleanupTimerHandle @ 14b7dc440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_HitProcessAbility::CleanupTimerHandle(UDS_HitProcessAbility *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  UDS_GameInstance *pUVar4;
  FTimerManager *pFVar5;
  FTimerData *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  FTimerHandle local_res10;
  
  pUVar4 = UDS_GameInstance::GetInst();
  if (pUVar4 == (UDS_GameInstance *)0x0) {
    return;
  }
  iVar1 = (this->TimerHandles).ArrayNum;
  if (iVar1 == 0) {
    return;
  }
  iVar10 = 0;
  pFVar2 = (this->TimerHandles).AllocatorInstance.Data;
  if (*(longlong *)pFVar2 != 0) {
    pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
    local_res10.Handle = *(ulong64 *)pFVar2;
    pFVar6 = FTimerManager::FindTimer(pFVar5,&local_res10);
    if (pFVar6 != (FTimerData *)0x0) {
      bVar11 = 1;
      goto LAB_14b7dc4c7;
    }
  }
  bVar11 = 0;
LAB_14b7dc4c7:
  lVar7 = 0;
  iVar8 = 0;
  do {
    iVar9 = iVar8;
    do {
      lVar7 = lVar7 + 1;
      iVar9 = iVar9 + 1;
      if (iVar1 <= lVar7) break;
      if (*(longlong *)(pFVar2 + lVar7 * 8) == 0) {
LAB_14b7dc511:
        bVar3 = 0;
      }
      else {
        pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
        local_res10.Handle = *(ulong64 *)(pFVar2 + lVar7 * 8);
        pFVar6 = FTimerManager::FindTimer(pFVar5,&local_res10);
        if (pFVar6 == (FTimerData *)0x0) goto LAB_14b7dc511;
        bVar3 = 1;
      }
    } while (bVar11 == bVar3);
    if (bVar11 != 0) {
      if (iVar10 != iVar8) {
        memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                (longlong)(iVar9 - iVar8) << 3);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar11 = bVar11 ^ 1;
    iVar8 = iVar9;
    if (iVar1 <= lVar7) {
      (this->TimerHandles).ArrayNum = iVar10;
      return;
    }
  } while( true );
}

// ClearVariables @ 14b7dc850

void __thiscall UDS_HitProcessAbility::ClearVariables(UDS_HitProcessAbility *this)

{
  RefreshContinousHitInfoMap();
  this->ChainEffectProcessingCount = 0;
  return;
}

// CompleteChainEffect @ 14b7dcbc0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HitProcessAbility::CompleteChainEffect
          (UDS_HitProcessAbility *this,FDS_EffectSpawnCompleteInfo param_1,int param_2,
          ulong64 param_3,ulong64 param_4,FDS_StruckInfo *param_5,FWN_EndOfRefs *param_6)

{
  float fVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FDS_EntityBase *pFVar5;
  FDS_EntityBase *pFVar6;
  FName *pFVar7;
  UClass *pUVar8;
  UNiagaraDataInterfaceSkeletalMesh *this_00;
  FDS_SkillAttackTableRow *pFVar9;
  USkeletalMeshComponent *pUVar10;
  UNiagaraDataInterfaceSkeletalMesh *this_01;
  ulong64 uVar11;
  FTimerManager *this_02;
  undefined8 *puVar12;
  atomic<unsigned_char> *paVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  ulong64 local_res20;
  FDelegateAllocation local_108;
  TArray<FName,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_d8;
  FWeakObjectPtr local_c8;
  FWeakObjectPtr local_c0;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> local_b8;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  UNiagaraComponent *local_90;
  FTimerHandle local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  
  local_res20 = param_3;
  pFVar5 = FDS_EntityBase::GetEntityBase(&local_res20);
  pFVar6 = FDS_EntityBase::GetEntityBase(&param_4);
  if ((pFVar5 == (FDS_EntityBase *)0x0) || (pFVar6 == (FDS_EntityBase *)0x0)) {
LAB_14b7dcc8b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_6->TaskCaller).SharedReferenceCount.ReferenceController);
    return;
  }
  UDS_MovementCore::GetMovementCore((ulong64)&local_b8);
  UDS_MovementCore::GetMovementCore((ulong64)&local_b0);
  bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(&local_b8,(void *)0x0);
  if ((bVar4) ||
     (bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(&local_b0,(void *)0x0),
     bVar4)) goto LAB_14b7dcc8b;
  (**(code **)(pFVar5->_padding_ + 0x80))(pFVar5);
  bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_c8,(void *)0x0)
  ;
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8769076200447409423>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_HitProcessAbility.cpp"
                       ,0x2f1,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_14b7dcc8b;
  }
  if (param_1.NiagaraComponent == (UNiagaraComponent *)0x0) goto LAB_14b7dcc8b;
  pFVar7 = ::FName::FName(&local_80,"beam_start_s");
  FVar2 = *pFVar7;
  pUVar8 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
  this_00 = (UNiagaraDataInterfaceSkeletalMesh *)
            UNiagaraFunctionLibrary::GetDataInterface(pUVar8,param_1.NiagaraComponent,FVar2);
  if (this_00 == (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
LAB_14b7dd1a2:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8769076200447409410>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_HitProcessAbility.cpp"
                       ,0x2fe,"false");
    if (!bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_6->TaskCaller).SharedReferenceCount.ReferenceController);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar8 = Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
  iVar16 = (int)pUVar8->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar16) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar16 * 8)
      != &pUVar8->_padding_)) goto LAB_14b7dd1a2;
  pFVar9 = FDS_SkillAttackTableRow::GetRef((longlong)param_2,true);
  pUVar10 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_c8);
  UNiagaraDataInterfaceSkeletalMesh::SetSourceComponentFromBlueprints(this_00,pUVar10);
  pFVar7 = ::FName::FName(&local_78,"beam_end_s");
  FVar2 = *pFVar7;
  pUVar8 = Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
  this_01 = (UNiagaraDataInterfaceSkeletalMesh *)
            UNiagaraFunctionLibrary::GetDataInterface(pUVar8,param_1.NiagaraComponent,FVar2);
  if (this_01 == (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
    iVar16 = 0x309;
    paVar13 = &bGEnsureHasExecuted<_8769076200447409399>;
LAB_14b7dcd89:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar13,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_HitProcessAbility.cpp"
                       ,iVar16,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (pFVar9->IsContinuous == true) {
      (**(code **)(pFVar6->_padding_ + 0x80))(pFVar6);
      bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_c0,
                         (void *)0x0);
      if (bVar4) {
        iVar16 = 0x312;
        paVar13 = &bGEnsureHasExecuted<_8769076200447409390>;
        goto LAB_14b7dcd89;
      }
      uVar11 = GetFirstAttackerEntityID(param_5);
      pwVar15 = L"";
      if (local_res20 == uVar11) {
        if ((pFVar9->StartChainSocket).Data.ArrayNum == 0) {
LAB_14b7dce4f:
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar9->StartChainSocket).Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((pFVar9->ChainContinuousSocket).Data.ArrayNum == 0) goto LAB_14b7dce4f;
        pwVar14 = (wchar_t *)(pFVar9->ChainContinuousSocket).Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_a8,pwVar14);
      local_f8.ArrayNum = 1;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
      *(FName *)local_f8.AllocatorInstance.Data = local_a8;
      UNiagaraDataInterfaceSkeletalMesh::SetFilteredSocketsFromBlueprints(this_00,&local_f8);
      if ((FName *)local_f8.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      pUVar10 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_c0);
      UNiagaraDataInterfaceSkeletalMesh::SetSourceComponentFromBlueprints(this_01,pUVar10);
      if ((pFVar9->ChainContinuousSocket).Data.ArrayNum != 0) {
        pwVar15 = (wchar_t *)(pFVar9->ChainContinuousSocket).Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_a0,pwVar15);
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,0,&local_e8.AllocatorInstance,1,&local_e8.ArrayMax);
      *(FName *)local_e8.AllocatorInstance.Data = local_a0;
      UNiagaraDataInterfaceSkeletalMesh::SetFilteredSocketsFromBlueprints(this_01,&local_e8);
      if ((FName *)local_e8.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      pcVar3 = *(code **)((param_1.NiagaraComponent)->_padding_ + 0xa90);
      pFVar7 = ::FName::FName(&local_70,"beam_end_bUsePosition");
      (*pcVar3)(param_1.NiagaraComponent,*pFVar7,0);
    }
    else {
      if ((pFVar9->StartChainSocket).Data.ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar9->StartChainSocket).Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_98,pwVar15);
      local_d8.ArrayNum = 1;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
      *(FName *)local_d8.AllocatorInstance.Data = local_98;
      UNiagaraDataInterfaceSkeletalMesh::SetFilteredSocketsFromBlueprints(this_00,&local_d8);
      if ((FName *)local_d8.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      pcVar3 = *(code **)((param_1.NiagaraComponent)->_padding_ + 0xa90);
      pFVar7 = ::FName::FName(&local_68,"beam_end_bUsePosition");
      (*pcVar3)(param_1.NiagaraComponent,*pFVar7,1);
      pcVar3 = *(code **)((param_1.NiagaraComponent)->_padding_ + 0xaa8);
      pFVar7 = ::FName::FName(&local_60,"beam_end_Position");
      local_58 = *(undefined4 *)&(param_5->EffectLocation).field0_0x0;
      uStack_54 = *(undefined4 *)((longlong)&(param_5->EffectLocation).field0_0x0 + 4);
      uStack_50 = *(undefined4 *)((longlong)&(param_5->EffectLocation).field0_0x0 + 8);
      uStack_4c = *(undefined4 *)((longlong)&(param_5->EffectLocation).field0_0x0 + 0xc);
      local_48 = (param_5->EffectLocation).field0_0x0._s_0.Z;
      (*pcVar3)(param_1.NiagaraComponent,*pFVar7,&local_58);
    }
    (**(code **)((param_1.NiagaraComponent)->_padding_ + 0x2b8))(param_1.NiagaraComponent,1);
    local_88.Handle = 0;
    this_02 = FDS_TimerManager::Get((UObject *)0x0);
    fVar1 = pFVar9->ChainSkillEffectTime;
    local_108.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_108.DelegateSize = 0;
    puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_108);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar11;
      *puVar12 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::`2'::<lambda_1>_>
                  ::_vftable_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
      }
      puVar12[3] = 0;
      local_90 = param_1.NiagaraComponent;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_90);
      puVar12[4] = param_1.NiagaraComponent;
    }
    FTimerManager::SetTimer
              (this_02,&local_88,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
               &local_108,fVar1,false,__real_bf800000);
    if (local_108.DelegateSize != 0) {
      if (local_108.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
      goto LAB_14b7dcd94;
      (*(code *)**(undefined8 **)local_108.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_108,0,0,0x10);
      local_108.DelegateSize = 0;
    }
    if (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_108.DelegateAllocator);
    }
  }
LAB_14b7dcd94:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// DoHitProcess @ 14b7e45d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_HitProcessAbility::DoHitProcess(UDS_HitProcessAbility *this)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FTimerManager *this_00;
  undefined8 *puVar8;
  ulong64 uVar9;
  FWeakObjectPtr local_res10;
  FTimerHandle local_res18;
  UDS_HitProcessAbility *local_res20;
  FDelegateAllocation local_d8;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FDS_StruckInfo local_b8;
  
  UDS_GameplayAbility::GetContextData<UDS_HitAbilityContext>((UDS_GameplayAbility *)this);
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar5) {
    dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    dVar2 = *(double *)(pUVar7 + 2);
    if (dVar2 - dVar3 <= 0.0) {
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      local_b8.HasDamage = (bool)pUVar7[1].field_0x0;
      local_b8._1_7_ = *(undefined7 *)&pUVar7[1].field_0x1;
      local_b8.AttackerEntityID = *(ulong64 *)&pUVar7[1].field_0x8;
      local_b8.DefenderEntityID = *(ulong64 *)&pUVar7[1].field_0x10;
      local_b8.SkillAttackID = *(int *)&pUVar7[1].field_0x18;
      local_b8.Damage = *(int *)&pUVar7[1].field_0x1c;
      local_b8.EventTime = *(double *)&pUVar7[1].field_0x20;
      local_b8.ExecuteTime = *(double *)(pUVar7 + 2);
      local_b8.AbnormalID = *(int *)&pUVar7[2].field_0x8;
      local_b8.DamageInfo = *(int *)&pUVar7[2].field_0xc;
      local_b8.AbnormalDestination.field0_0x0._s_0.X = (double)*(undefined8 *)&pUVar7[2].field_0x10;
      local_b8.AbnormalDestination.field0_0x0._s_0.Y = (double)*(undefined8 *)&pUVar7[2].field_0x18;
      local_b8.AbnormalDestination.field0_0x0._s_0.Z = (double)*(undefined8 *)&pUVar7[2].field_0x20;
      local_b8.MultiHitPointIndex = *(int *)&pUVar7[3].field_0x0;
      local_b8._84_4_ = *(undefined4 *)&pUVar7[3].field_0x4;
      local_b8.EffectLocation.field0_0x0._s_0.X = (double)*(undefined8 *)&pUVar7[3].field_0x8;
      local_b8.EffectLocation.field0_0x0._s_0.Y = (double)*(undefined8 *)&pUVar7[3].field_0x10;
      local_b8.EffectLocation.field0_0x0._s_0.Z = (double)*(undefined8 *)&pUVar7[3].field_0x18;
      StartSkillAttack(this,&local_b8);
      return;
    }
    local_res18.Handle = 0;
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    uStack_c0 = 0;
    local_c8 = StartSkillAttack;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    puVar8 = UE::Core::Private::DelegateAllocate(0x98,&local_d8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFDS_StruckInfo____6B_
      ;
      uVar4 = *(undefined8 *)&pUVar7[1].field_0x8;
      puVar8[1] = *(undefined8 *)(pUVar7 + 1);
      puVar8[2] = uVar4;
      uVar4 = *(undefined8 *)&pUVar7[1].field_0x18;
      puVar8[3] = *(undefined8 *)&pUVar7[1].field_0x10;
      puVar8[4] = uVar4;
      uVar4 = *(undefined8 *)(pUVar7 + 2);
      puVar8[5] = *(undefined8 *)&pUVar7[1].field_0x20;
      puVar8[6] = uVar4;
      uVar4 = *(undefined8 *)&pUVar7[2].field_0x10;
      puVar8[7] = *(undefined8 *)&pUVar7[2].field_0x8;
      puVar8[8] = uVar4;
      uVar4 = *(undefined8 *)&pUVar7[2].field_0x20;
      puVar8[9] = *(undefined8 *)&pUVar7[2].field_0x18;
      puVar8[10] = uVar4;
      uVar4 = *(undefined8 *)&pUVar7[3].field_0x8;
      puVar8[0xb] = *(undefined8 *)(pUVar7 + 3);
      puVar8[0xc] = uVar4;
      uVar4 = *(undefined8 *)&pUVar7[3].field_0x18;
      puVar8[0xd] = *(undefined8 *)&pUVar7[3].field_0x10;
      puVar8[0xe] = uVar4;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[0xf] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_HitProcessAbility____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFDS_StruckInfo____6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_HitProcessAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[0x10] = 0;
      local_res20 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_HitProcessAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 0x10),(FObjectPtr)&local_res20);
      puVar8[0x11] = local_c8;
      puVar8[0x12] = CONCAT44(uStack_bc,uStack_c0);
    }
    FTimerManager::SetTimer
              (this_00,&local_res18,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_d8
               ,(float)(dVar2 - dVar3),false,__real_bf800000);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    iVar6 = (this->TimerHandles).ArrayNum;
    piVar1 = &(this->TimerHandles).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->TimerHandles).AllocatorInstance,piVar1);
    }
    (this->TimerHandles).ArrayNum = iVar6 + 1;
    *(ulong64 *)((this->TimerHandles).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         local_res18.Handle;
  }
  return;
}

// GetFirstAttackerEntityID @ 14b7eb9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl UDS_HitProcessAbility::GetFirstAttackerEntityID(FDS_StruckInfo *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TMap<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
  *pTVar8;
  bool bVar9;
  ulong64 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  ulong64 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_238 [32];
  undefined1 local_208;
  undefined1 local_207 [7];
  TMap<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
  *local_200;
  uint uStack_1f8;
  uint uStack_1f4;
  undefined8 local_1f0;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint local_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  longlong *local_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  TMap<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
  *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_ac;
  ulong64 local_a8;
  undefined1 local_a0 [32];
  uint *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uStack_1f8 = 0;
  uStack_1f4 = 1;
  local_1e0 = 0;
  uVar17 = ContinousHitInfoMap._40_4_;
  uStack_1e4 = uStack_1f8;
  if (uVar17 != 0) {
    puVar18 = (uint *)&ContinousHitInfoMap.field_0x10;
    if (ContinousHitInfoMap._32_8_ != 0) {
      puVar18 = (uint *)ContinousHitInfoMap._32_8_;
    }
    uVar16 = *puVar18;
    local_1e0 = 0;
    uStack_1f8 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)(int)uStack_1f8;
      local_1e0 = local_1e0 + 0x20;
      uStack_1f8 = uStack_1f8 + 1;
      uStack_1e4 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1f8)
      goto LAB_14b7ebaae;
      uVar16 = puVar18[lVar12 + 1];
    }
    uStack_1f4 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_1f4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1d0 = (int)lVar12;
    uStack_1e4 = local_1d0 + -1 + local_1e0;
    if ((int)uVar17 < (int)uStack_1e4) {
      uStack_1e4 = uVar17;
    }
  }
LAB_14b7ebaae:
  local_200 = &ContinousHitInfoMap;
  bVar11 = ContinousHitInfoMap._40_1_;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_1d8 = ContinousHitInfoMap._8_4_ - ContinousHitInfoMap._52_4_;
  TStack_158._padding_ = CONCAT44(uStack_1f4,uStack_1f8);
  local_1f0 = 0x154cef6f0;
  uStack_1e8 = 0xffffffff;
  TStack_158.CurrentBitIndex = uStack_1e4;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  local_160 = &ContinousHitInfoMap;
  iVar15 = (int)uVar17 >> 5;
  TStack_158._28_4_ = local_ac;
  TStack_158.BaseBitIndex = local_1e0;
  uStack_138 = CONCAT44(uStack_1d4,iStack_1d8);
  TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)&ContinousHitInfoMap.field_0x10;
  uVar19 = uVar17;
  if ((int)uVar17 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    uVar19 = ContinousHitInfoMap._40_4_;
  }
  uVar6 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  if (uVar17 != uVar19) {
    lVar12 = 0x154cef6f0;
    if (ContinousHitInfoMap._32_8_ != 0) {
      lVar12 = ContinousHitInfoMap._32_8_;
    }
    uVar17 = -1 << (bVar11 & 0x1f) & *(uint *)(lVar12 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14b7ebbe0;
      uVar17 = *(uint *)(lVar12 + 4 + lVar13 * 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1cc = (int)lVar12;
    uVar17 = local_1cc + -1 + uVar16;
    if ((int)uVar19 < (int)uVar17) {
      uVar17 = uVar19;
    }
  }
LAB_14b7ebbe0:
  do {
    pTVar8 = local_160;
    uVar16 = 0;
    if (*(int *)&local_160->field_0x8 - *(int *)&local_160->field_0x34 != (int)uStack_138) {
      local_208 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
    }
    if (((TStack_158.CurrentBitIndex == uVar17) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)&ContinousHitInfoMap.field_0x10
        )) && (pTVar8 == &ContinousHitInfoMap)) {
      return param_1->AttackerEntityID;
    }
    puVar14 = (ulong64 *)((longlong)TStack_158.CurrentBitIndex * 0x60 + *(longlong *)pTVar8);
    local_a8 = *puVar14;
    local_a0._0_8_ = (FScriptContainerElement *)0x0;
    local_a0._8_8_ = 0;
    local_80 = (uint *)0x0;
    local_78 = uVar5;
    uStack_70 = uVar6;
    local_60 = (ForElementType<FSetElementId>)0x0;
    uVar19 = 0;
    local_58 = 0;
    TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                 *)local_a0,
                (TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                 *)(puVar14 + 1));
    uVar20 = (uint)local_78;
    uStack_1b4 = 1;
    uStack_1a4 = uVar19;
    uStack_1b8 = uVar16;
    if ((uint)local_78 != 0) {
      puVar18 = (uint *)(local_a0 + 0x10);
      if (local_80 != (uint *)0x0) {
        puVar18 = local_80;
      }
      uVar3 = *puVar18;
      uVar19 = uVar16;
      while (uVar3 == 0) {
        lVar12 = (longlong)(int)uStack_1b8;
        uVar19 = uVar19 + 0x20;
        uStack_1b8 = uStack_1b8 + 1;
        uStack_1a4 = (uint)local_78;
        if ((int)(((uint)local_78 - 1) + ((int)((uint)local_78 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)uStack_1b8) goto LAB_14b7ebd01;
        uVar3 = (puVar18 + 1)[lVar12];
      }
      uStack_1b4 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_1c8 = (int)lVar12;
      uStack_1a4 = (uVar19 - 1) + local_1c8;
      if ((int)(uint)local_78 < (int)uStack_1a4) {
        uStack_1a4 = (uint)local_78;
      }
    }
LAB_14b7ebd01:
    local_1c0 = (longlong *)local_a0;
    uStack_19c = uStack_1e4;
    local_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10);
    uVar16 = (uint)local_78 & 0xffffffe0;
    iStack_198 = local_a0._8_4_ - uStack_70._4_4_;
    TStack_188._padding_ = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_1a8 = 0xffffffff;
    TStack_188.CurrentBitIndex = uStack_1a4;
    TStack_188.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)(uint)local_78 >> 5;
    TStack_188._28_4_ = uStack_1e4;
    TStack_188.BaseBitIndex = uVar19;
    uStack_168 = CONCAT44(uStack_194,iStack_198);
    bVar11 = (byte)local_78;
    local_1a0 = uVar19;
    local_190 = local_1c0;
    TStack_188.Array = local_1b0;
    if ((int)(uint)local_78 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return uVar10;
      }
    }
    if (uVar20 != (uint)local_78) {
      puVar18 = (uint *)(local_a0 + 0x10);
      if (local_80 != (uint *)0x0) {
        puVar18 = local_80;
      }
      uVar19 = -1 << (bVar11 & 0x1f) & puVar18[iVar15];
      while (uVar19 == 0) {
        lVar12 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar20 = (uint)local_78;
        if ((int)(((uint)local_78 - 1) + ((int)((uint)local_78 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14b7ebe21;
        uVar19 = (puVar18 + 1)[lVar12];
      }
      uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_1c4 = (int)lVar12;
      uVar20 = local_1c4 + -1 + uVar16;
      if ((int)(uint)local_78 < (int)uVar20) {
        uVar20 = (uint)local_78;
      }
    }
LAB_14b7ebe21:
    while( true ) {
      plVar7 = local_190;
      if ((int)local_190[1] - *(int *)((longlong)local_190 + 0x34) != (int)uStack_168) {
        local_207[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,FDS_HitInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_207);
      }
      uVar10 = local_a8;
      if (((TStack_188.CurrentBitIndex == uVar20) &&
          (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10))) &&
         (plVar7 == (longlong *)local_a0)) break;
      lVar13 = (longlong)TStack_188.CurrentBitIndex * 0x68;
      lVar12 = *plVar7;
      puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar12);
      local_118 = *puVar2;
      uStack_110 = puVar2[1];
      puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar12);
      local_108 = *puVar2;
      uStack_100 = puVar2[1];
      local_128 = *(undefined8 *)(lVar13 + lVar12);
      uStack_120 = ((undefined8 *)(lVar13 + lVar12))[1];
      puVar2 = (undefined8 *)(lVar13 + 0x30 + lVar12);
      local_f8 = *puVar2;
      uStack_f0 = puVar2[1];
      puVar2 = (undefined8 *)(lVar13 + 0x40 + lVar12);
      local_e8 = *puVar2;
      uStack_e0 = puVar2[1];
      puVar2 = (undefined8 *)(lVar13 + 0x50 + lVar12);
      local_d8 = *puVar2;
      uStack_d0 = puVar2[1];
      if (param_1->AttackerEntityID == *(ulong64 *)(lVar13 + 8 + lVar12)) {
        local_58 = 0;
        if (local_60 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_60);
        }
        iVar15 = SUB84(local_a0._8_8_,4);
        local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
        if (iVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
        }
        uVar17 = local_78._4_4_;
        uStack_70 = 0xffffffff;
        local_78 = (ulonglong)local_78._4_4_ << 0x20;
        if (0x80 < uVar17) {
          local_78 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
        }
        if (local_80 != (uint *)0x0) {
          FMemory::Free(local_80);
        }
        if ((FScriptContainerElement *)local_a0._0_8_ == (FScriptContainerElement *)0x0) {
          return uVar10;
        }
        FMemory::Free((void *)local_a0._0_8_);
        return uVar10;
      }
      TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
    }
    local_58 = 0;
    if (local_60 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60);
    }
    iVar15 = SUB84(local_a0._8_8_,4);
    local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
    if (iVar15 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
    }
    uVar16 = local_78._4_4_;
    uStack_70 = 0xffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    if (0x80 < uVar16) {
      local_78 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
    }
    if (local_80 != (uint *)0x0) {
      FMemory::Free(local_80);
    }
    if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a0._0_8_);
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  } while( true );
}

// IsFacing2D @ 14b7f3150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UDS_HitProcessAbility::IsFacing2D
          (TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          TWeakObjectPtr<AActor,FWeakObjectPtr> param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  UObject *pUVar4;
  TVector<double>_u_0 *pTVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  TVector<double>_u_0 local_70 [4];
  
  local_res8 = param_1.WeakPtr;
  local_res10[0] = param_2.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    return false;
  }
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar3) {
    return false;
  }
  pUVar4 = FWeakObjectPtr::Get(local_res10);
  lVar1 = *(longlong *)(pUVar4 + 0xb);
  if (lVar1 == 0) {
    uVar6 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar8 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    uVar6 = *(undefined4 *)(lVar1 + 0x220);
    uVar8 = *(undefined4 *)(lVar1 + 0x224);
    uVar16 = *(undefined4 *)(lVar1 + 0x210);
    uVar17 = *(undefined4 *)(lVar1 + 0x214);
    uVar18 = *(undefined4 *)(lVar1 + 0x218);
    uVar19 = *(undefined4 *)(lVar1 + 0x21c);
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  dVar14 = __real_3ff0000000000000;
  lVar1 = *(longlong *)(pUVar4 + 0xb);
  if (lVar1 == 0) {
    dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    dVar13 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_70[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_70[0]._16_8_ = *(double *)(lVar1 + 0x220);
    dVar11 = *(double *)(lVar1 + 0x210);
    dVar13 = *(double *)(lVar1 + 0x218);
  }
  dVar11 = (double)CONCAT44(uVar17,uVar16) - dVar11;
  uVar2 = (double)CONCAT44(uVar8,uVar6) - (double)local_70[0]._16_8_;
  uVar20 = 0;
  uVar21 = 0;
  dVar13 = (double)CONCAT44(uVar19,uVar18) - dVar13;
  dVar12 = dVar13 * dVar13 + dVar11 * dVar11;
  if (dVar12 == __real_3ff0000000000000) {
    if ((double)uVar2 == 0.0) goto LAB_14b7f32b7;
  }
  else {
    if (dVar12 < __real_3e45798ee0000000) {
      dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      dVar13 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14b7f32b7;
    }
    dVar11 = dVar11 * (__real_3ff0000000000000 / SQRT(dVar12));
    dVar13 = dVar13 * (__real_3ff0000000000000 / SQRT(dVar12));
  }
  uVar2 = 0.0;
LAB_14b7f32b7:
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  if (*(USceneComponent **)(pUVar4 + 0xb) == (USceneComponent *)0x0) {
    pTVar5 = local_70;
    local_70[0]._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_70[0]._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_70[0]._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar5 = &USceneComponent::GetForwardVector
                        (*(USceneComponent **)(pUVar4 + 0xb),(TVector<double> *)&local_70[0]._s_0)->
              field0_0x0;
  }
  dVar12 = (((TVector<double>_u_0 *)&(pTVar5->_s_0).X)->_s_0).X;
  dVar15 = (pTVar5->_s_0).Y;
  dVar10 = dVar15 * dVar15 + dVar12 * dVar12;
  if (dVar10 == dVar14) {
    if ((pTVar5->_s_0).Z == 0.0) {
      uVar20 = SUB84((pTVar5->_s_0).Z,0);
      uVar21 = (uint)((ulonglong)(pTVar5->_s_0).Z >> 0x20);
    }
  }
  else if (__real_3e45798ee0000000 <= dVar10) {
    dVar14 = dVar14 / SQRT(dVar10);
    dVar12 = dVar12 * dVar14;
    dVar15 = dVar14 * dVar15;
  }
  else {
    dVar12 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    dVar15 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar21 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
         (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) ||
       (uVar7 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000)) ||
      (uVar7 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar9 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
      (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000)) &&
     (((uVar7 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000 ||
       (uVar7 = SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)dVar15 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000)) ||
      (__real_3f1a36e2e0000000 <=
       (double)CONCAT44(uVar21 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        uVar20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
       (double)CONCAT44(uVar21 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        uVar20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
       __real_3f1a36e2e0000000)))) {
    return __real_b8d1b717 <=
           (float)(dVar13 * dVar15 + dVar11 * dVar12 +
                  (double)uVar2 * (double)CONCAT44(uVar21,uVar20));
  }
  return false;
}

// OnAbilityRetryActivate @ 14b7f4560

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_HitProcessAbility::OnAbilityRetryActivate(UDS_HitProcessAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_GameplayAbility::GetContextData<UDS_HitAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(local_148);
  if (bVar1) {
    DoHitProcess(this);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_HitProcessAbility::OnAbilityRetryActivate",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x59,L"hitContext is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnCanActivate @ 14b7f5fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_HitProcessAbility::OnCanActivate(UDS_HitProcessAbility *this)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    UDS_GameplayAbility::GetContextData<UDS_HitAbilityContext>((UDS_GameplayAbility *)this);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    return bVar1;
  }
  return false;
}

// OnDeactivateAbility @ 14b7fb480

void __thiscall
UDS_HitProcessAbility::OnDeactivateAbility(UDS_HitProcessAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b8018d0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_HitProcessAbility::OnPostActivateAbility(UDS_HitProcessAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *this_00;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [8];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_GameplayAbility::GetContextData<UDS_HitAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar1) {
    DoHitProcess(this);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_HitProcessAbility::OnPostActivateAbility",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x4a,L"hitContext is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_148);
  }
  return;
}

// OnProcessEnd @ 14b8074b0

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
UDS_HitProcessAbility::OnProcessEnd(UDS_HitProcessAbility *this,EDS_HitEndType param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  UDS_GameInstance *pUVar4;
  FTimerManager *pFVar5;
  FTimerData *pFVar6;
  UDS_AbilitySystemComponent *this_00;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  EDS_AbilityDeactivateType local_res18 [8];
  FTimerHandle local_res20;
  
  if (param_1 == ChainEnd) {
    this->ChainEffectProcessingCount = this->ChainEffectProcessingCount + -1;
  }
  if (0 < this->ChainEffectProcessingCount) {
    return;
  }
  pUVar4 = UDS_GameInstance::GetInst();
  if ((pUVar4 == (UDS_GameInstance *)0x0) || (iVar1 = (this->TimerHandles).ArrayNum, iVar1 == 0))
  goto LAB_14b80761b;
  iVar10 = 0;
  pFVar2 = (this->TimerHandles).AllocatorInstance.Data;
  if (*(longlong *)pFVar2 == 0) {
LAB_14b807554:
    bVar11 = 0;
  }
  else {
    pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
    local_res20.Handle = *(ulong64 *)pFVar2;
    pFVar6 = FTimerManager::FindTimer(pFVar5,&local_res20);
    if (pFVar6 == (FTimerData *)0x0) goto LAB_14b807554;
    bVar11 = 1;
  }
  lVar7 = 0;
  iVar8 = 0;
  do {
    iVar9 = iVar8;
    do {
      lVar7 = lVar7 + 1;
      iVar9 = iVar9 + 1;
      if (iVar1 <= lVar7) break;
      if (*(longlong *)(pFVar2 + lVar7 * 8) == 0) {
LAB_14b8075a7:
        bVar3 = 0;
      }
      else {
        pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
        local_res20.Handle = *(ulong64 *)(pFVar2 + lVar7 * 8);
        pFVar6 = FTimerManager::FindTimer(pFVar5,&local_res20);
        if (pFVar6 == (FTimerData *)0x0) goto LAB_14b8075a7;
        bVar3 = 1;
      }
    } while (bVar11 == bVar3);
    if (bVar11 != 0) {
      if (iVar10 != iVar8) {
        memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                (longlong)(iVar9 - iVar8) << 3);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar11 = bVar11 ^ 1;
    iVar8 = iVar9;
  } while (lVar7 < iVar1);
  (this->TimerHandles).ArrayNum = iVar10;
LAB_14b80761b:
  if ((this->TimerHandles).ArrayNum < 1) {
    local_res18[0] = (param_1 == Cancel) + Success;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_res18);
  }
  return;
}

// PlayAdditiveHit @ 14b80d160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HitProcessAbility::PlayAdditiveHit
          (UDS_HitProcessAbility *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2,
          FDS_SkillAttackTableRow *param_3)

{
  EDS_AttackDirectionType EVar1;
  code *pcVar2;
  bool bVar3;
  FGameplayTag *pFVar4;
  EDS_StateTagType local_res10 [8];
  FWeakObjectPtr local_18;
  FWeakObjectPtr local_10;
  
  if (param_1 == (FDS_EntityBase *)0x0) {
    return;
  }
  if (param_2 == (FDS_EntityBase *)0x0) {
    return;
  }
  if (param_3 == (FDS_SkillAttackTableRow *)0x0) {
    return;
  }
  (**(code **)(param_1->_padding_ + 0x150))(param_1,&local_18);
  (**(code **)(param_2->_padding_ + 0x150))(param_2);
  bVar3 = FWeakObjectPtr::IsValid(&local_18);
  if (bVar3) {
    bVar3 = FWeakObjectPtr::IsValid(&local_10);
    if (bVar3) {
      bVar3 = IsFacing2D((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_18,
                         (TWeakObjectPtr<AActor,FWeakObjectPtr>)local_10);
      if ((bVar3) &&
         (bVar3 = IsFacing2D((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_10,
                             (TWeakObjectPtr<AActor,FWeakObjectPtr>)local_18), bVar3)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      EVar1 = param_3->AttackDirectionType;
      local_res10[0] = HitAdditive_Forward;
      if (EVar1 == None) {
        if (!bVar3) {
          local_res10[0] = HitAdditive_Backward;
        }
      }
      else {
        local_res10[0] = HitAdditive_Left;
        if (EVar1 == Right) {
          if (!bVar3) goto LAB_14b80d2a4;
        }
        else if ((EVar1 != Left) || (bVar3)) goto LAB_14b80d2a4;
        local_res10[0] = HitAdditive_Right;
      }
LAB_14b80d2a4:
      SetHitDirection2D(this,param_1,param_2,local_res10);
      pFVar4 = FDS_GameplayTags::GetStateTag(local_res10);
      UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar4);
      pFVar4 = FDS_GameplayTags::GetStateTag(local_res10);
      UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8769076200447409872>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_HitProcessAbility.cpp"
                       ,0x130,"defenderActor.IsValid()");
    if (!bVar3) {
      return;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8769076200447409872>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_HitProcessAbility.cpp"
                       ,0x130,"attackerActor.IsValid()");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// PlayCameraShake @ 14b80d300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HitProcessAbility::PlayCameraShake
          (UDS_HitProcessAbility *this,FDS_SkillAttackTableRow *param_1,FDS_EntityBase *param_2)

{
  int iVar1;
  bool bVar2;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr FVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  ADS_CameraManager *this_01;
  FWeakObjectPtr FVar6;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18;
  FWeakObjectPtr local_10;
  
  if (param_2 == (FDS_EntityBase *)0x0) {
    return;
  }
  if (param_1 == (FDS_SkillAttackTableRow *)0x0) {
    return;
  }
  if (param_2->EntityType != MainCharacter) {
    return;
  }
  this_00 = (FWeakObjectPtr *)(**(code **)(param_2->_padding_ + 0x150))(param_2,&local_10);
  FVar3 = (FWeakObjectPtr)FWeakObjectPtr::Get(this_00);
  FVar6.ObjectIndex = 0;
  FVar6.ObjectSerialNumber = 0;
  if (FVar3 != (FWeakObjectPtr)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b80d378;
  }
  FVar3 = FVar6;
LAB_14b80d378:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_res18 = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if ((bVar2) && (param_1->CameraShake != 0)) {
    ADS_PlayerController::GetPlayerController();
    bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_18,(void *)0x0)
    ;
    if (!bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_18);
      if (*(longlong *)&pUVar5[0x16].field_0x20 != 0) {
        pUVar4 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&pUVar5[0x16].field_0x20,pUVar4);
        if (bVar2) {
          FVar6.ObjectIndex = *(int *)&pUVar5[0x16].field_0x20;
          FVar6.ObjectSerialNumber = *(int *)&pUVar5[0x16].field_0x24;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_10 = FVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_10);
      bVar2 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar2) {
        this_01 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_res18);
        ADS_CameraManager::CameraShake(this_01,param_1->CameraShake);
      }
    }
  }
  return;
}

// PlayChainEffectAsync @ 14b80d4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_HitProcessAbility::PlayChainEffectAsync
          (UDS_HitProcessAbility *this,FDS_SkillAttackTableRow *param_1,FDS_EntityBase *param_2,
          FDS_EntityBase *param_3,FDS_StruckInfo *param_4,FWN_EndOfRefs *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  UDS_MovementCore *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FWeakObjectPtr local_1c8 [2];
  code *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  FWeakObjectPtr local_1a8;
  UDS_HitProcessAbility *local_1a0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  TRotator<double> local_178;
  TVector<double> local_160;
  undefined1 local_148 [192];
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  TVector<double> local_70 [2];
  
  this->ChainEffectProcessingCount = this->ChainEffectProcessingCount + 1;
  if ((((param_1 != (FDS_SkillAttackTableRow *)0x0) && (param_2 != (FDS_EntityBase *)0x0)) &&
      (param_3 != (FDS_EntityBase *)0x0)) && (param_1->ChainSkillEffect != 0)) {
    (**(code **)(param_2->_padding_ + 0x78))(param_2,local_1c8);
    local_1a8 = (FWeakObjectPtr)this->_padding_;
    bVar6 = FWeakObjectPtr::IsValid(local_1c8);
    if (bVar6) {
      pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_1c8);
      UDS_MovementCore::GetActorRotation(pUVar7,&local_178);
      uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_178.Roll = local_178.Roll + (double)param_1->HitEffectRotation;
      pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_1c8);
      UDS_MovementCore::GetActorLocation(pUVar7,&local_160);
      local_160.field0_0x0._s_0.Z =
           (local_160.field0_0x0._s_0.Z - (double)param_2->ScaledCapsuleHalfHeight) +
           param_1->HitEffectZOffset;
      pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1a8);
      UDS_MovementCore::GetActorLocation(pUVar7,local_70);
      FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_148);
      local_148._0_4_ = param_1->ChainSkillEffect;
      local_148._40_8_ = this->_padding_;
      local_148._72_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_148._80_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_148._88_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1b8 = CompleteChainEffect;
      local_148._112_8_ = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_148._96_8_ = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_148._104_8_ = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      uStack_1b0 = 0;
      local_148._144_8_ = uVar2;
      local_148._152_8_ = uVar4;
      local_148._160_8_ = uVar5;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
                 (FWriteAccessScope *)&local_198);
      local_180 = &local_80;
      puVar8 = UE::Core::Private::DelegateAllocate(0xc0,&local_80);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__H_K_KUFDS_StruckInfo__VFWN_EndOfRefs____6B_
        ;
        *(int *)(puVar8 + 1) = param_1->ID;
        puVar8[2] = param_2->EntityID;
        puVar8[3] = param_3->EntityID;
        uVar9 = param_4->AttackerEntityID;
        puVar8[4] = *(undefined8 *)param_4;
        puVar8[5] = uVar9;
        uVar2 = *(undefined8 *)&param_4->SkillAttackID;
        puVar8[6] = param_4->DefenderEntityID;
        puVar8[7] = uVar2;
        dVar3 = param_4->ExecuteTime;
        puVar8[8] = param_4->EventTime;
        puVar8[9] = dVar3;
        dVar3 = (param_4->AbnormalDestination).field0_0x0._s_0.X;
        puVar8[10] = *(undefined8 *)&param_4->AbnormalID;
        puVar8[0xb] = dVar3;
        dVar3 = (param_4->AbnormalDestination).field0_0x0._s_0.Z;
        puVar8[0xc] = (param_4->AbnormalDestination).field0_0x0._s_0.Y;
        puVar8[0xd] = dVar3;
        dVar3 = (param_4->EffectLocation).field0_0x0._s_0.X;
        puVar8[0xe] = *(undefined8 *)&param_4->MultiHitPointIndex;
        puVar8[0xf] = dVar3;
        dVar3 = (param_4->EffectLocation).field0_0x0._s_0.Z;
        puVar8[0x10] = (param_4->EffectLocation).field0_0x0._s_0.Y;
        puVar8[0x11] = dVar3;
        puVar8[0x12] = (param_5->TaskCaller).Object;
        pTVar1 = (param_5->TaskCaller).SharedReferenceCount.ReferenceController;
        puVar8[0x13] = pTVar1;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[0x14] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_HitProcessAbility____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__H_K_KUFDS_StruckInfo__VFWN_EndOfRefs____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[0x15] = 0;
        local_1a0 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 0x15),(FObjectPtr)&local_1a0);
        puVar8[0x16] = local_1b8;
        puVar8[0x17] = CONCAT44(uStack_1ac,uStack_1b0);
      }
      if (local_198.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
      }
      local_148[0x44] = false;
      UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_148);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
      if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_80.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_148._184_8_);
      if ((FScriptContainerElement *)local_148._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_148._24_8_);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// PlayHitEffect @ 14b80d910

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HitProcessAbility::PlayHitEffect
          (UDS_HitProcessAbility *this,int param_1,float param_2,FString *param_3,
          FDS_EntityBase *param_4,TVector<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_ResourceEffectTableRow *pFVar5;
  UObject *pUVar6;
  FName *pFVar7;
  double *pdVar8;
  FWeakObjectPtr *pFVar9;
  UDS_MovementCore *this_00;
  TRotator<double> *pTVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  double dVar13;
  undefined1 auStackY_2b8 [32];
  FWeakObjectPtr local_288;
  FWeakObjectPtr local_280;
  FName local_278;
  TRotator<double> local_270;
  undefined1 local_258 [192];
  undefined1 local_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if (param_4 == (FDS_EntityBase *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_HitProcessAbility::PlayHitEffect",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_178.Ptr,0x1f8,L"InAttackerEntity is nullptr");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    pFVar5 = FDS_ResourceEffectTableRow::Get((longlong)param_1,true);
    if (pFVar5 != (FDS_ResourceEffectTableRow *)0x0) {
      (**(code **)(param_4->_padding_ + 0x78))(param_4,&local_280);
      bVar3 = FWeakObjectPtr::IsValid(&local_280);
      if (bVar3) {
        (**(code **)(*(longlong *)this->_padding_ + 0x80))((longlong *)this->_padding_,&local_288);
        bVar3 = FWeakObjectPtr::IsValid(&local_288);
        pwVar12 = L"";
        if (bVar3) {
          pUVar6 = FWeakObjectPtr::Get(&local_288);
          pcVar2 = *(code **)(*(longlong *)pUVar6 + 0x528);
          if ((param_3->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
          }
          pFVar7 = ::FName::FName(&local_278,pwVar11);
          pdVar8 = (double *)(*pcVar2)(pUVar6,&local_270,*pFVar7);
          dVar13 = pdVar8[1];
          (param_5->field0_0x0)._s_0.X = *pdVar8;
          (param_5->field0_0x0)._s_0.Y = dVar13;
          (param_5->field0_0x0)._s_0.Z = pdVar8[2];
        }
        FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_258);
        local_258._0_4_ = pFVar5->ID;
        local_258._40_8_ = this->_padding_;
        pFVar9 = (FWeakObjectPtr *)
                 (**(code **)(*(longlong *)this->_padding_ + 0x80))
                           ((longlong *)this->_padding_,&local_278);
        local_258._52_8_ = *pFVar9;
        if ((param_3->Data).ArrayNum != 0) {
          pwVar12 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
        }
        pFVar7 = ::FName::FName(&local_278,pwVar12);
        local_258._60_8_ = *pFVar7;
        this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_280);
        pTVar10 = UDS_MovementCore::GetActorRotation(this_00,&local_270);
        dVar13 = (double)param_2;
        local_258._96_8_ = pTVar10->Pitch;
        local_258._104_8_ = pTVar10->Yaw;
        local_258._112_8_ = pTVar10->Roll;
        local_258._160_8_ = dVar13 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_258._152_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar13,0)
        ;
        local_258._144_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar13;
        local_258._156_4_ =
             (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar13) >>
                  0x20);
        UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_258);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
        if ((void *)local_198._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_198._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_258._184_8_);
        if ((FScriptContainerElement *)local_258._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_258._24_8_);
        }
      }
    }
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// PlayHitEffect @ 14b80dbf0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HitProcessAbility::PlayHitEffect
          (UDS_HitProcessAbility *this,FDS_SkillAttackTableRow *param_1,int param_2,
          FDS_EntityBase *param_3,TVector<double> *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  UDS_LogManager *pUVar13;
  FDS_ResourceEffectTableRow *pFVar14;
  UDS_MovementCore *pUVar15;
  longlong lVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_3d8 [32];
  TVector<double>_u_0 local_3a0;
  FWeakObjectPtr local_388;
  double local_380;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_360;
  FWeakObjectPtr local_348;
  double local_340;
  double local_338;
  double local_330;
  undefined1 local_328 [16];
  TRotator<double> local_318;
  undefined1 local_2f8 [16];
  undefined1 local_2d0 [192];
  undefined1 local_210 [24];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1f8;
  ulonglong local_d8;
  
  if (param_1 == (FDS_SkillAttackTableRow *)0x0) {
    return;
  }
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  iVar12 = param_1->ID_HitEffect;
  dVar1 = param_1->HitEffectScale;
  if (param_2 == 0x15) {
    dVar1 = param_1->CriticalHitEffectScale;
    iVar12 = param_1->ID_CriticalHitEffect;
  }
  if (param_3 == (FDS_EntityBase *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar13 = UDS_LogManager::GetInst();
    local_1f8._padding_ = (longlong)param_3;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1f8,"UDS_HitProcessAbility::PlayHitEffect",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar13,1,Warning,local_1f8.Ptr,0x164,L"InAttackerEntity is nullptr");
    if ((FDS_EntityBase *)local_1f8._padding_ == (FDS_EntityBase *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1f8._padding_);
    return;
  }
  pFVar14 = FDS_ResourceEffectTableRow::Get((longlong)iVar12,true);
  if (pFVar14 == (FDS_ResourceEffectTableRow *)0x0) {
    return;
  }
  (**(code **)(param_3->_padding_ + 0x78))(param_3,&local_388);
  local_348 = (FWeakObjectPtr)this->_padding_;
  bVar11 = FWeakObjectPtr::IsValid(&local_388);
  if (!bVar11) {
    return;
  }
  pUVar15 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_388);
  UDS_MovementCore::GetActorRotation(pUVar15,&local_318);
  local_318.Roll = local_318.Roll + (double)param_1->HitEffectRotation;
  local_330 = (double)(float)dVar1;
  local_340 = local_330 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_338 = local_330 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_330 = local_330 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  pUVar15 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_388);
  UDS_MovementCore::GetActorLocation(pUVar15,(TVector<double> *)&local_360._s_0);
  uVar10 = local_360._s_0.Y;
  uVar8 = local_360._s_0.X;
  local_3a0._s_0.Z =
       local_360._s_0.Z +
       (double)(float)((uint)param_3->ScaledCapsuleHalfHeight ^
                      __xmm_80000000800000008000000080000000);
  dVar3 = local_3a0._s_0.Z + param_1->HitEffectZOffset;
  local_360._s_0.Z = local_3a0._s_0.Z;
  pUVar15 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_348);
  UDS_MovementCore::GetActorLocation(pUVar15,(TVector<double> *)&local_378._s_0);
  uVar20 = local_378._s_0.Y;
  local_328._8_8_ = local_378._s_0.Y;
  local_328._0_8_ = local_378._s_0.X;
  uVar23 = SUB84(local_378._s_0.Y,0);
  uVar9 = (ulonglong)local_378._8_8_ >> 0x20;
  dVar6 = local_378._s_0.Z +
          (double)(float)(*(uint *)((longlong *)this->_padding_ + 0xb) ^
                         __xmm_80000000800000008000000080000000);
  local_378._s_0.Z = dVar6;
  lVar16 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  uVar21 = 0;
  uVar22 = 0;
  dVar6 = dVar6 + *(double *)(lVar16 + 0x60);
  local_2f8._8_4_ = uVar23;
  local_2f8._0_8_ = uVar20;
  local_2f8._12_4_ = (int)uVar9;
  dVar1 = (double)*(float *)(this->_padding_ + 0x5c);
  local_380 = dVar1;
  if (local_378._s_0.Z <= dVar3) {
    local_3a0._s_0.Z = dVar3;
    if (dVar3 <= dVar6) goto LAB_14b80e058;
    local_3a0._s_0.Z = 0.0;
    dVar7 = (double)uVar8 - (double)local_328._0_8_;
    dVar19 = (double)uVar10 - (double)uVar20;
    local_3a0._s_0.X = dVar7;
    local_3a0._s_0.Y = dVar19;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_3a0._s_0,__real_3e45798ee0000000)
    ;
    if (dVar7 == 0.0) {
      local_3a0._s_0.Z = dVar6;
      if (dVar19 != 0.0) {
        dVar7 = (dVar1 * local_3a0._s_0.Y * (dVar3 - dVar6)) / dVar19;
        goto LAB_14b80e030;
      }
    }
    else {
      dVar7 = (dVar1 * local_3a0._s_0.X * (dVar3 - dVar6)) / dVar7;
LAB_14b80e030:
      local_3a0._s_0.Z = dVar7 + dVar6;
    }
    if (dVar3 <= local_3a0._s_0.Z) {
      local_3a0._s_0.Z = dVar6;
    }
    goto LAB_14b80e058;
  }
  local_3a0._s_0.Z = 0.0;
  dVar17 = dVar3 - local_378._s_0.Z;
  dVar7 = (double)uVar8 - local_378._s_0.X;
  dVar19 = (double)uVar10 - local_378._s_0.Y;
  local_3a0._s_0.X = dVar7;
  local_3a0._s_0.Y = dVar19;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_3a0._s_0,__real_3e45798ee0000000);
  if (dVar7 == 0.0) {
    local_3a0._s_0.Z = local_378._s_0.Z;
    if (dVar19 != 0.0) {
      dVar7 = (dVar1 * local_3a0._s_0.Y * dVar17) / dVar19;
      goto LAB_14b80df79;
    }
  }
  else {
    dVar7 = (dVar1 * local_3a0._s_0.X * dVar17) / dVar7;
LAB_14b80df79:
    local_3a0._s_0.Z = dVar7 + local_378._s_0.Z;
  }
  if (local_3a0._s_0.Z <= dVar3) {
    local_3a0._s_0.Z = local_378._s_0.Z;
  }
LAB_14b80e058:
  dVar19 = (double)uVar8 - (double)local_328._0_8_;
  dVar1 = (double)uVar10 - (double)local_2f8._0_8_;
  dVar7 = dVar1 * dVar1 + dVar19 * dVar19;
  uVar18 = dVar19;
  uVar20 = dVar1;
  if (dVar7 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar7) {
      uVar18 = dVar19 * (__real_3ff0000000000000 / SQRT(dVar7));
      uVar20 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar7));
    }
    else {
      uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar22 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
  }
  dVar17 = param_1->HitEffectXOffset;
  dVar4 = ((double)uVar8 - (double)uVar18 * dVar17) - (double)local_328._0_8_;
  dVar5 = ((double)uVar10 - (double)uVar20 * dVar17) - (double)local_2f8._0_8_;
  dVar6 = (dVar3 - (double)CONCAT44(uVar22,uVar21) * dVar17) - dVar6;
  uVar20 = local_378._s_0.X;
  if (dVar17 <= SQRT(dVar7)) {
    if (SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6) <= local_380) {
      uVar20 = dVar19;
      uVar8 = dVar1;
      if ((dVar7 != __real_3ff0000000000000) &&
         (uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         __real_3e45798ee0000000 <= dVar7)) {
        uVar20 = dVar19 * (__real_3ff0000000000000 / SQRT(dVar7));
        uVar8 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar7));
      }
      uVar20 = local_360._s_0.X - dVar17 * (double)uVar20;
      local_378._s_0.Y = local_360._s_0.Y - (double)uVar8 * dVar17;
    }
    else {
      uVar20 = dVar19;
      uVar8 = dVar1;
      if ((dVar7 != __real_3ff0000000000000) &&
         (uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         __real_3e45798ee0000000 <= dVar7)) {
        uVar20 = dVar19 * (__real_3ff0000000000000 / SQRT(dVar7));
        uVar8 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar7));
      }
      uVar20 = local_378._s_0.X + (double)uVar20 * local_380;
      local_378._s_0.Y = local_378._s_0.Y + (double)uVar8 * local_380;
    }
  }
  uVar23 = (undefined4)((ulonglong)local_378._s_0.Y >> 0x20);
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_2d0);
  uVar8 = local_3a0._s_0.Z;
  local_2d0._0_4_ = pFVar14->ID;
  local_2d0._40_8_ = this->_padding_;
  local_2d0._96_8_ = local_318.Pitch;
  local_2d0._104_8_ = local_318.Yaw;
  local_2d0._144_8_ = local_340;
  local_2d0._160_8_ = local_330;
  local_2d0._152_8_ = local_338;
  local_2d0._80_4_ = SUB84(local_378._s_0.Y,0);
  local_2d0._72_8_ = uVar20;
  local_2d0._84_4_ = uVar23;
  local_2d0._88_8_ = local_3a0._s_0.Z;
  local_2d0._112_8_ = local_318.Roll;
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_2d0);
  auVar2._8_4_ = SUB84(local_378._s_0.Y,0);
  auVar2._0_8_ = uVar20;
  auVar2._12_4_ = uVar23;
  *(undefined1 (*) [16])&param_4->field0_0x0 = auVar2;
  (param_4->field0_0x0)._s_0.Z = (double)uVar8;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_210);
  if ((void *)local_210._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_210._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_210);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2d0._184_8_);
  if ((FScriptContainerElement *)local_2d0._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2d0._24_8_);
  }
  return;
}

// PlayHitSound @ 14b80e370

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
UDS_HitProcessAbility::PlayHitSound(UDS_HitProcessAbility *this,FDS_SkillAttackTableRow *param_1)

{
  UDS_SoundManager *this_00;
  
  if ((param_1 != (FDS_SkillAttackTableRow *)0x0) &&
     (this_00 = UDS_SoundManager::GetInst(), this_00 != (UDS_SoundManager *)0x0)) {
    UDS_SoundManager::PlaySound(this_00,param_1->ID_HitEffectSound);
  }
  return;
}

// PlayMultiHitPointEffect @ 14b80e780

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HitProcessAbility::PlayMultiHitPointEffect
          (UDS_HitProcessAbility *this,FDS_SkillAttackTableRow *param_1,FDS_StruckInfo *param_2,
          FDS_EntityBase *param_3,TVector<double> *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  UDS_LogManager *pUVar15;
  FDS_ResourceEffectTableRow *pFVar16;
  UDS_MovementCore *pUVar17;
  UObject *pUVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStackY_3b8 [32];
  FWeakObjectPtr local_388;
  double local_380;
  TVector<double>_u_0 local_378;
  FWeakObjectPtr local_360;
  TVector<double>_u_0 local_358;
  double local_340;
  double local_338;
  double local_330;
  TRotator<double> local_328;
  double local_308;
  undefined8 uStack_300;
  undefined1 local_2e0 [192];
  undefined1 local_220 [24];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_208;
  ulonglong local_e8;
  
  if (param_1 != (FDS_SkillAttackTableRow *)0x0) {
    local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
    iVar14 = param_1->ID_HitEffect;
    dVar1 = param_1->HitEffectScale;
    if (param_2->DamageInfo == 0x15) {
      dVar1 = param_1->CriticalHitEffectScale;
      iVar14 = param_1->ID_CriticalHitEffect;
    }
    if (param_3 == (FDS_EntityBase *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 != (UDS_LogManager *)0x0) {
        pUVar15 = UDS_LogManager::GetInst();
        local_208._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_208,"UDS_HitProcessAbility::PlayMultiHitPointEffect",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar15,1,Warning,local_208.Ptr,0x22c,L"InAttackerEntity is nullptr");
        if ((void *)local_208._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_208._padding_);
        }
      }
    }
    else {
      pFVar16 = FDS_ResourceEffectTableRow::Get((longlong)iVar14,true);
      if (pFVar16 != (FDS_ResourceEffectTableRow *)0x0) {
        (**(code **)(param_3->_padding_ + 0x78))(param_3,&local_360);
        bVar13 = FWeakObjectPtr::IsValid(&local_360);
        if (bVar13) {
          local_388.ObjectIndex = 0;
          local_388.ObjectSerialNumber = 0;
          local_380 = 0.0;
          FWeakObjectPtr::operator=(&local_388,(FObjectPtr)&local_380);
          (**(code **)(*(longlong *)this->_padding_ + 0xf8))
                    ((longlong *)this->_padding_,param_2->MultiHitPointIndex,&local_388);
          bVar13 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                             ((TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&local_388,
                              (void *)0x0);
          if (!bVar13) {
            pUVar17 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_360);
            UDS_MovementCore::GetActorRotation(pUVar17,&local_328);
            local_328.Roll = local_328.Roll + (double)param_1->HitEffectRotation;
            local_330 = (double)(float)dVar1;
            local_340 = local_330 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            local_338 = local_330 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            local_330 = local_330 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            pUVar17 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_360);
            UDS_MovementCore::GetActorLocation(pUVar17,(TVector<double> *)&local_358._s_0);
            uVar12 = local_358._s_0.Y;
            uVar11 = local_358._s_0.X;
            local_378._s_0.Z =
                 local_358._s_0.Z +
                 (double)(float)((uint)param_3->ScaledCapsuleHalfHeight ^
                                __xmm_80000000800000008000000080000000);
            dVar1 = local_378._s_0.Z + param_1->HitEffectZOffset;
            local_358._s_0.Z = local_378._s_0.Z;
            pUVar18 = FWeakObjectPtr::Get(&local_388);
            dVar3 = *(double *)&pUVar18[0xd].field_0x18;
            uStack_300 = *(undefined8 *)&pUVar18[0xd].field_0x20;
            dVar8 = *(double *)&pUVar18[0xd].field_0x8;
            dVar9 = *(double *)&pUVar18[0xd].field_0x10;
            local_308 = dVar3;
            pUVar18 = FWeakObjectPtr::Get(&local_388);
            uVar43 = _UNK_15061cc8c;
            uVar41 = _UNK_15061cc88;
            uVar39 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar37 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar44 = *(uint *)(pUVar18 + 0xe) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar45 = *(uint *)&pUVar18[0xe].field_0x4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
            ;
            uVar46 = *(uint *)&pUVar18[0xe].field_0x8 & _UNK_15061cc88;
            uVar47 = *(uint *)&pUVar18[0xe].field_0xc & _UNK_15061cc8c;
            uVar36 = *(uint *)&pUVar18[0xe].field_0x10 &
                     (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar38 = *(uint *)&pUVar18[0xe].field_0x14 &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar40 = *(uint *)&pUVar18[0xe].field_0x18 & _UNK_15061cc88;
            uVar42 = *(uint *)&pUVar18[0xe].field_0x1c & _UNK_15061cc8c;
            auVar19._4_4_ = uVar45;
            auVar19._0_4_ = uVar44;
            auVar19._8_4_ = uVar46;
            auVar19._12_4_ = uVar47;
            auVar20._12_4_ = uVar38;
            auVar20._8_4_ = uVar36;
            auVar20._0_8_ = auVar19._8_8_;
            auVar30._4_4_ = uVar45;
            auVar30._0_4_ = uVar44;
            auVar30._8_4_ = uVar46;
            auVar30._12_4_ = uVar47;
            auVar31 = minpd(auVar30,auVar20);
            auVar21._4_4_ = uVar45;
            auVar21._0_4_ = uVar44;
            auVar21._8_4_ = uVar46;
            auVar21._12_4_ = uVar47;
            auVar26._4_4_ = uVar38;
            auVar26._0_4_ = uVar36;
            auVar26._12_4_ = uVar45;
            auVar26._8_4_ = uVar44;
            auVar32 = minpd(auVar31,auVar26);
            auVar31._4_4_ = uVar38;
            auVar31._0_4_ = uVar36;
            auVar31._8_4_ = uVar40;
            auVar31._12_4_ = uVar42;
            auVar31 = blendpd(auVar21,auVar31,2);
            auVar27._4_4_ = uVar38;
            auVar27._0_4_ = uVar36;
            auVar27._8_4_ = uVar40;
            auVar27._12_4_ = uVar42;
            auVar34._4_4_ = uVar47;
            auVar34._0_4_ = uVar46;
            auVar31 = minpd(auVar27,auVar31);
            auVar34._8_4_ = uVar40;
            auVar34._12_4_ = uVar42;
            minpd(auVar31,auVar34);
            dVar10 = dVar3 - (double)((float)auVar32._0_8_ * *(float *)&pUVar18[0x22].field_0x18);
            local_378._s_0.Z = dVar3;
            pUVar18 = FWeakObjectPtr::Get(&local_388);
            uVar36 = *(uint *)(pUVar18 + 0xe) & uVar37;
            uVar38 = *(uint *)&pUVar18[0xe].field_0x4 & uVar39;
            uVar40 = *(uint *)&pUVar18[0xe].field_0x8 & uVar41;
            uVar42 = *(uint *)&pUVar18[0xe].field_0xc & uVar43;
            uVar37 = *(uint *)&pUVar18[0xe].field_0x10 & uVar37;
            uVar39 = *(uint *)&pUVar18[0xe].field_0x14 & uVar39;
            uVar41 = *(uint *)&pUVar18[0xe].field_0x18 & uVar41;
            uVar43 = *(uint *)&pUVar18[0xe].field_0x1c & uVar43;
            auVar22._4_4_ = uVar38;
            auVar22._0_4_ = uVar36;
            auVar22._8_4_ = uVar40;
            auVar22._12_4_ = uVar42;
            auVar33._4_4_ = uVar38;
            auVar33._0_4_ = uVar36;
            auVar33._8_4_ = uVar40;
            auVar33._12_4_ = uVar42;
            auVar23._12_4_ = uVar39;
            auVar23._8_4_ = uVar37;
            auVar23._0_8_ = auVar22._8_8_;
            auVar28._4_4_ = uVar39;
            auVar28._0_4_ = uVar37;
            auVar28._12_4_ = uVar38;
            auVar28._8_4_ = uVar36;
            auVar31 = minpd(auVar33,auVar23);
            auVar24._4_4_ = uVar38;
            auVar24._0_4_ = uVar36;
            auVar24._8_4_ = uVar40;
            auVar24._12_4_ = uVar42;
            auVar34 = minpd(auVar31,auVar28);
            auVar32._4_4_ = uVar39;
            auVar32._0_4_ = uVar37;
            auVar32._8_4_ = uVar41;
            auVar32._12_4_ = uVar43;
            auVar31 = blendpd(auVar24,auVar32,2);
            auVar29._4_4_ = uVar39;
            auVar29._0_4_ = uVar37;
            auVar29._8_4_ = uVar41;
            auVar29._12_4_ = uVar43;
            auVar2._4_4_ = uVar42;
            auVar2._0_4_ = uVar40;
            auVar31 = minpd(auVar29,auVar31);
            uVar49 = 0;
            uVar50 = 0;
            auVar2._8_4_ = uVar41;
            auVar2._12_4_ = uVar43;
            minpd(auVar31,auVar2);
            dVar7 = (double)((float)auVar34._0_8_ * *(float *)&pUVar18[0x22].field_0x18);
            if (dVar10 <= dVar1) {
              local_378._s_0.Z = dVar1;
              if (dVar3 < dVar1) {
                local_378._s_0.Z = 0.0;
                local_378._s_0.Y = (double)uVar12 - dVar9;
                local_378._s_0.X = (double)uVar11 - dVar8;
                UE::Math::TVector<double>::Normalize
                          ((TVector<double> *)&local_378._s_0,__real_3e45798ee0000000);
                local_378._s_0.Z =
                     ((dVar1 - dVar3) * dVar7 * local_378._s_0.X) / ((double)uVar11 - dVar8) + dVar3
                ;
              }
            }
            else {
              local_378._s_0.Z = 0.0;
              local_378._s_0.Y = (double)uVar12 - dVar9;
              local_378._s_0.X = (double)uVar11 - dVar8;
              UE::Math::TVector<double>::Normalize
                        ((TVector<double> *)&local_378._s_0,__real_3e45798ee0000000);
              local_378._s_0.Z =
                   ((dVar1 - dVar10) * dVar7 * local_378._s_0.X) / ((double)uVar11 - dVar8) + dVar10
              ;
            }
            dVar3 = (double)uVar11 - dVar8;
            dVar10 = (double)uVar12 - dVar9;
            dVar48 = dVar10 * dVar10 + dVar3 * dVar3;
            uVar35 = dVar3;
            uVar25 = dVar10;
            if (dVar48 != __real_3ff0000000000000) {
              if (__real_3e45798ee0000000 <= dVar48) {
                uVar35 = dVar3 * (__real_3ff0000000000000 / SQRT(dVar48));
                uVar25 = dVar10 * (__real_3ff0000000000000 / SQRT(dVar48));
              }
              else {
                uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar50 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20
                         );
                uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              }
            }
            local_380 = param_1->HitEffectXOffset;
            dVar5 = (dVar1 - (double)CONCAT44(uVar50,uVar49) * local_380) - local_308;
            dVar1 = ((double)uVar11 - local_380 * (double)uVar35) - dVar8;
            dVar6 = ((double)uVar12 - (double)uVar25 * local_380) - dVar9;
            if (local_380 <= SQRT(dVar48)) {
              if (SQRT(dVar1 * dVar1 + dVar6 * dVar6 + dVar5 * dVar5) <= dVar7) {
                uVar11 = dVar3;
                uVar12 = dVar10;
                if ((dVar48 != __real_3ff0000000000000) &&
                   (uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                   uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                   __real_3e45798ee0000000 <= dVar48)) {
                  uVar11 = dVar3 * (__real_3ff0000000000000 / SQRT(dVar48));
                  uVar12 = dVar10 * (__real_3ff0000000000000 / SQRT(dVar48));
                }
                dVar8 = local_358._s_0.X - local_380 * (double)uVar11;
                dVar9 = local_358._s_0.Y - (double)uVar12 * local_380;
              }
              else {
                uVar11 = dVar3;
                uVar12 = dVar10;
                if ((dVar48 != __real_3ff0000000000000) &&
                   (uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                   uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                   __real_3e45798ee0000000 <= dVar48)) {
                  uVar11 = dVar3 * (__real_3ff0000000000000 / SQRT(dVar48));
                  uVar12 = dVar10 * (__real_3ff0000000000000 / SQRT(dVar48));
                }
                dVar9 = dVar9 + dVar7 * (double)uVar12;
                dVar8 = dVar8 + dVar7 * (double)uVar11;
              }
            }
            uVar49 = (undefined4)((ulonglong)dVar9 >> 0x20);
            FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_2e0);
            uVar11 = local_378._s_0.Z;
            local_2e0._0_4_ = pFVar16->ID;
            local_2e0._40_8_ = this->_padding_;
            local_2e0._96_8_ = local_328.Pitch;
            local_2e0._104_8_ = local_328.Yaw;
            local_2e0._144_8_ = local_340;
            local_2e0._160_8_ = local_330;
            local_2e0._152_8_ = local_338;
            local_2e0._80_4_ = SUB84(dVar9,0);
            local_2e0._72_8_ = dVar8;
            local_2e0._84_4_ = uVar49;
            local_2e0._88_8_ = local_378._s_0.Z;
            local_2e0._112_8_ = local_328.Roll;
            UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_2e0);
            auVar4._8_4_ = SUB84(dVar9,0);
            auVar4._0_8_ = dVar8;
            auVar4._12_4_ = uVar49;
            *(undefined1 (*) [16])&param_4->field0_0x0 = auVar4;
            (param_4->field0_0x0)._s_0.Z = (double)uVar11;
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_220);
            if ((void *)local_220._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_220._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_220);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_2e0._184_8_);
            if ((FScriptContainerElement *)local_2e0._24_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_2e0._24_8_);
            }
          }
        }
      }
    }
  }
  return;
}

// RefreshContinousHitInfoMap @ 14b80f030

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_HitProcessAbility::RefreshContinousHitInfoMap(void)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TMap<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
  *pTVar7;
  bool bVar8;
  FDS_EntityBase *pFVar9;
  UDS_CharStateData *this;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  double dVar19;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  FWeakObjectPtr local_1b0;
  longlong *local_1a8;
  undefined1 auStack_1a0 [16];
  uint uStack_190;
  uint uStack_18c;
  longlong local_188;
  TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
  *pTStack_180;
  TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
  *local_178;
  undefined2 local_170;
  TMap<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  uint local_148;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  EDS_CharState local_130;
  ulong64 local_128;
  TMap<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined1 local_f0 [32];
  longlong local_d0;
  TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
  *pTStack_c8;
  ulong64 local_b8;
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ForElementType<FSetElementId> local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  dVar19 = UDS_TimeUtilManager::GetCurrentServerTime();
  local_148 = 0;
  uStack_15c = 1;
  uVar16 = ContinousHitInfoMap._40_4_;
  uStack_14c = local_148;
  iStack_160 = 0;
  if (uVar16 != 0) {
    puVar18 = (uint *)&ContinousHitInfoMap.field_0x10;
    if (ContinousHitInfoMap._32_8_ != 0) {
      puVar18 = (uint *)ContinousHitInfoMap._32_8_;
    }
    uVar15 = *puVar18;
    local_148 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_14b80f10d;
      uVar15 = puVar18[lVar10 + 1];
    }
    uStack_15c = -uVar15 & uVar15;
    uVar12 = (ulonglong)uStack_15c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_138 = (int)lVar10;
    uStack_14c = (local_148 - 1) + local_138;
    if ((int)uVar16 < (int)uStack_14c) {
      uStack_14c = uVar16;
    }
  }
LAB_14b80f10d:
  bVar4 = ContinousHitInfoMap._40_1_;
  iStack_140 = ContinousHitInfoMap._8_4_ - ContinousHitInfoMap._52_4_;
  uVar15 = uVar16 & 0xffffffe0;
  local_168 = &ContinousHitInfoMap;
  uStack_150 = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_15c,iStack_160);
  local_158 = 0x154cef6f0;
  TStack_118.CurrentBitIndex = uStack_14c;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  local_120 = &ContinousHitInfoMap;
  iVar13 = (int)uVar16 >> 5;
  TStack_118._28_4_ = uStack_14c;
  TStack_118.BaseBitIndex = local_148;
  uStack_f8 = CONCAT44(uStack_13c,iStack_140);
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)&ContinousHitInfoMap.field_0x10;
  uVar17 = uVar16;
  uStack_144 = uStack_14c;
  if ((int)uVar16 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar17 = ContinousHitInfoMap._40_4_;
  }
  uVar6 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  if (uVar16 != uVar17) {
    lVar10 = 0x154cef6f0;
    if (ContinousHitInfoMap._32_8_ != 0) {
      lVar10 = ContinousHitInfoMap._32_8_;
    }
    uVar16 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14b80f230;
      uVar16 = *(uint *)(lVar10 + 4 + lVar11 * 4);
    }
    uVar12 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar16 = (uVar15 - 1) + (int)lVar10;
    if ((int)uVar17 < (int)uVar16) {
      uVar16 = uVar17;
    }
  }
LAB_14b80f230:
  do {
    pTVar7 = local_120;
    if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    if (((TStack_118.CurrentBitIndex == uVar16) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)&ContinousHitInfoMap.field_0x10
        )) && (pTVar7 == &ContinousHitInfoMap)) {
      iVar13 = (int)local_1c0;
      pFVar1 = local_1c8.Data + (longlong)(int)local_1c0 * 8;
      FVar14.Data = local_1c8.Data;
      while( true ) {
        if ((int)local_1c0 != iVar13) {
          `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1b7);
        }
        if (FVar14.Data == pFVar1) break;
        local_128 = *(ulong64 *)FVar14.Data;
        if (ContinousHitInfoMap._8_4_ != ContinousHitInfoMap._52_4_) {
          TSet<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned___int64>
                    ((TSet<TTuple<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>,FDefaultSetAllocator>
                      *)&ContinousHitInfoMap,(int)(local_128 >> 0x20) * 0x17 + (int)local_128,
                     &local_128);
        }
        FVar14.Data = FVar14.Data + 8;
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      return;
    }
    lVar10 = *(longlong *)pTVar7;
    local_b8 = *(ulong64 *)((longlong)TStack_118.CurrentBitIndex * 0x60 + lVar10);
    local_b0._0_8_ = (FScriptContainerElement *)0x0;
    local_b0._8_8_ = 0;
    local_90 = (void *)0x0;
    local_88 = uVar5;
    uStack_80 = uVar6;
    local_70 = (ForElementType<FSetElementId>)0x0;
    local_68 = 0;
    TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                 *)local_b0,
                (TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                 *)((longlong)TStack_118.CurrentBitIndex * 0x60 + lVar10 + 8));
    pFVar9 = FDS_EntityBase::GetEntityBase(&local_b8);
    if (pFVar9 == (FDS_EntityBase *)0x0) {
LAB_14b80f40c:
      iVar13 = (int)local_1c0;
      if ((int)local_1c0 == local_1c0._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
      }
      local_1c0 = CONCAT44(local_1c0._4_4_,iVar13 + 1);
      *(ulong64 *)(local_1c8.Data + (longlong)iVar13 * 8) = local_b8;
    }
    else {
      UDS_CharStateData::GetData((ulong64)&local_1b0);
      bVar8 = FWeakObjectPtr::IsValid(&local_1b0);
      if (!bVar8) goto LAB_14b80f40c;
      this = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_1b0);
      local_130 = Skill;
      bVar8 = UDS_CharStateData::HasCharState(this,&local_130);
      if (!bVar8) goto LAB_14b80f40c;
      TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_f0,
                 (TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                  *)local_b0);
      local_178 = (TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
                   *)local_b0;
      local_170 = 0;
      stack0xfffffffffffffe68 = local_f0._16_16_;
      local_1a8 = (longlong *)local_f0._0_8_;
      auStack_1a0._0_8_ = local_f0._8_8_;
      local_188 = local_d0;
      pTStack_180 = pTStack_c8;
      uVar12 = local_f0._24_8_ >> 0x20;
      if (local_f0._28_4_ < *(int *)(local_f0._16_8_ + 0x18)) {
        do {
          pdVar2 = (double *)((longlong)(int)uVar12 * 0x68 + 0x38 + *local_1a8);
          if (*pdVar2 <= dVar19 && dVar19 != *pdVar2) {
            TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_180,(int)uVar12);
            local_170 = CONCAT11(local_170._1_1_,1);
          }
          uStack_190 = uStack_190 & ~auStack_1a0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1a0);
          uVar12 = (ulonglong)uStack_18c;
        } while ((int)uStack_18c < *(int *)(auStack_1a0._8_8_ + 0x18));
        if (((char)local_170 != '\0') && (local_170._1_1_ != '\0')) {
          uVar15 = *(int *)&(local_178->Elements).field_0x8 -
                   *(int *)&(local_178->Elements).field_0x34;
          if (uVar15 < 4) {
            iVar13 = 1;
          }
          else {
            uVar12 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
            lVar10 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            iVar13 = 1 << ((byte)lVar10 & 0x1f);
          }
          if (((0 < (int)uVar15) && (local_178->HashSize < iVar13)) ||
             (iVar13 < local_178->HashSize)) {
            local_178->HashSize = iVar13;
            TSet<TTuple<int,FDS_HitInfo>,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>,FDefaultSetAllocator>
            ::Rehash(local_178);
          }
        }
      }
      if (local_b0._8_4_ == uStack_80._4_4_) goto LAB_14b80f40c;
    }
    local_68 = 0;
    if (local_70 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_70);
    }
    iVar13 = SUB84(local_b0._8_8_,4);
    local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
    if (iVar13 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
    }
    uVar15 = local_88._4_4_;
    uStack_80 = 0xffffffff;
    local_88 = (ulonglong)local_88._4_4_ << 0x20;
    if (0x80 < uVar15) {
      local_88 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
    }
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b0._0_8_);
    }
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  } while( true );
}

// SetHitDirection2D @ 14b810e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HitProcessAbility::SetHitDirection2D
          (UDS_HitProcessAbility *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2,
          EDS_StateTagType *param_3)

{
  EDS_StateTagType EVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  UObject *pUVar7;
  TVector<double>_u_0 *pTVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_a8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [5];
  
  if (param_1 == (FDS_EntityBase *)0x0) {
    return;
  }
  if (param_2 == (FDS_EntityBase *)0x0) {
    return;
  }
  (**(code **)(param_1->_padding_ + 0x150))(param_1,&local_res10);
  bVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar6) {
    return;
  }
  (**(code **)(param_2->_padding_ + 0x80))(param_2,&local_a8);
  bVar6 = FWeakObjectPtr::IsValid(&local_a8);
  if (!bVar6) {
    return;
  }
  EVar1 = *param_3;
  local_a0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_a0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((EVar1 == HitAdditive_Forward) || (EVar1 == HitAdditive_Backward)) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    if (*(USceneComponent **)(pUVar7 + 0xb) == (USceneComponent *)0x0) {
      local_88[0]._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_88[0]._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      uVar9 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
      uVar10 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
LAB_14b810fed:
      local_88[0]._s_0.Z = CONCAT44(uVar10,uVar9);
      pTVar8 = local_88;
    }
    else {
      pTVar8 = &USceneComponent::GetForwardVector
                          (*(USceneComponent **)(pUVar7 + 0xb),(TVector<double> *)&local_88[0]._s_0)
                ->field0_0x0;
    }
  }
  else {
    if (EVar1 == HitAdditive_Left) {
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      if (*(USceneComponent **)(pUVar7 + 0xb) == (USceneComponent *)0x0) {
        pTVar8 = local_88;
        local_88[0]._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        local_88[0]._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        local_88[0]._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar8 = &USceneComponent::GetRightVector
                            (*(USceneComponent **)(pUVar7 + 0xb),
                             (TVector<double> *)&local_88[0]._s_0)->field0_0x0;
      }
      local_a0._s_0.Y =
           (double)CONCAT44(*(uint *)((longlong)&(pTVar8->_s_0).Y + 4) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            *(uint *)&(pTVar8->_s_0).Y ^
                            (uint)__xmm_80000000000000008000000000000000);
      local_a0._s_0.X =
           (double)CONCAT44(*(uint *)((longlong)&(pTVar8->_s_0).X + 4) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            *(uint *)&(pTVar8->_s_0).X ^
                            (uint)__xmm_80000000000000008000000000000000);
      goto LAB_14b811007;
    }
    if (EVar1 != HitAdditive_Right) goto LAB_14b811007;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    if (*(USceneComponent **)(pUVar7 + 0xb) == (USceneComponent *)0x0) {
      local_88[0]._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
      local_88[0]._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
      uVar9 = SUB84(UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z,0);
      uVar10 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::RightVector.field0_0x0._16_8_ >> 0x20);
      goto LAB_14b810fed;
    }
    pTVar8 = &USceneComponent::GetRightVector
                        (*(USceneComponent **)(pUVar7 + 0xb),(TVector<double> *)&local_88[0]._s_0)->
              field0_0x0;
  }
  local_a0._s_0.X = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X;
  local_a0._s_0.Y = (pTVar8->_s_0).Y;
LAB_14b811007:
  local_a0._s_0.Z = 0.0;
  bVar6 = UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_a0._s_0,__real_3e45798ee0000000);
  uVar5 = local_a0._s_0.Z;
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&local_a8);
    auVar15._8_8_ = local_a0._s_0.Y;
    auVar15._0_8_ = local_a0._s_0.X;
    dVar16 = *(double *)&pUVar7[0xc].field_0x10 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar17 = *(double *)&pUVar7[0xc].field_0x18 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar3 = *(double *)&pUVar7[0xc].field_0x20 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar4 = *(double *)(pUVar7 + 0xd) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
    ;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar5;
    auVar11 = blendpd(auVar15,auVar11,2);
    auVar14._8_4_ = SUB84(dVar17,0);
    auVar14._0_8_ = dVar16;
    auVar14._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar19._8_4_ = SUB84(dVar4,0);
    auVar19._0_8_ = dVar3;
    auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar15 = blendpd(auVar14,auVar19,2);
    auVar18._0_8_ = local_a0._s_0.Y * dVar16 - local_a0._s_0.X * dVar17;
    auVar18._8_8_ = (double)uVar5 * dVar17 - local_a0._s_0.Y * dVar3;
    auVar12._0_8_ = auVar11._0_8_ * dVar3 - auVar15._0_8_ * (double)uVar5;
    auVar12._8_8_ = auVar11._8_8_ * dVar4 - auVar15._8_8_ * 0.0;
    dVar2 = auVar12._0_8_ + auVar12._0_8_;
    auVar19 = blendpd(auVar18,auVar12,2);
    auVar13._8_4_ = SUB84(dVar2,0);
    auVar13._0_8_ = auVar18._8_8_ + auVar18._8_8_;
    auVar13._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar19 = blendpd(auVar13,auVar20,2);
    dVar16 = (auVar18._8_8_ + auVar18._8_8_) * dVar4 + local_a0._s_0.X +
             (auVar20._0_8_ * dVar17 - dVar2 * dVar3);
    (param_2->HitDirection2D).field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar16,0) ^ (uint)__xmm_80000000000000008000000000000000);
    (param_2->HitDirection2D).field0_0x0._s_0.Y =
         dVar2 * dVar4 + local_a0._s_0.Y + (auVar19._0_8_ * dVar3 - auVar20._0_8_ * auVar15._0_8_);
  }
  return;
}

// StartSkillAttack @ 14b812970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HitProcessAbility::StartSkillAttack(UDS_HitProcessAbility *this,FDS_StruckInfo *param_1)

{
  double dVar1;
  EDS_AttackDirectionType EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FTimerManager *pFVar8;
  UDS_GameInstance *pUVar9;
  FTimerData *pFVar10;
  FDS_SkillAttackTableRow *pFVar11;
  FDS_EntityBase *this_00;
  FDS_EntityBase *pFVar12;
  ulong64 uVar13;
  UObject *pUVar14;
  FDS_SkillActLevelTableRow *pFVar15;
  FDS_EntityBase *pFVar16;
  UDS_AbilitySystemComponent *this_01;
  FGameplayTag *pFVar17;
  UDS_SoundManager *this_02;
  FString *pFVar18;
  undefined8 *puVar19;
  TReferenceControllerBase<1> *pTVar20;
  int iVar21;
  EDS_HitEndType EVar22;
  longlong lVar23;
  TReferenceControllerBase<1> *pTVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  void *pvVar29;
  FSharedReferencer<1> FVar30;
  uint local_res18 [2];
  EDS_AbilityTagType local_res20 [8];
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  FWeakObjectPtr local_1b0;
  FWeakObjectPtr local_1a8 [2];
  code *local_198;
  FSharedReferencer<1> FStack_190;
  FWeakObjectPtr local_188;
  FDS_EmissiveEffectSpec local_180;
  code *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  FTimerHandle local_168;
  FTimerHandle local_160;
  longlong local_158;
  UDS_HitProcessAbility *local_150;
  undefined1 local_148 [32];
  void *local_128;
  FSharedReferencer<1> FStack_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  code *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FWN_EndOfRefs local_98;
  FString local_88;
  FReadAccessScope local_78 [2];
  
  pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
  uVar26 = 0;
  local_198 = CleanupTimerHandle;
  FStack_190.ReferenceController =
       (TReferenceControllerBase<1> *)((ulonglong)FStack_190.ReferenceController._4_4_ << 0x20);
  local_a8 = CleanupTimerHandle;
  pTStack_a0 = FStack_190.ReferenceController;
  FTimerManager::SetTimerForNextTick<UDS_HitProcessAbility>
            (pFVar8,(UDS_HitProcessAbility *)&local_178,(pmf_062bb25f *)this);
  pUVar9 = UDS_GameInstance::GetInst();
  if ((pUVar9 != (UDS_GameInstance *)0x0) && (iVar21 = (this->TimerHandles).ArrayNum, iVar21 != 0))
  {
    pFVar3 = (this->TimerHandles).AllocatorInstance.Data;
    uVar27 = uVar26;
    if (*(longlong *)pFVar3 != 0) {
      pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
      local_168.Handle = *(ulong64 *)pFVar3;
      pFVar10 = FTimerManager::FindTimer(pFVar8,&local_168);
      if (pFVar10 != (FTimerData *)0x0) {
        uVar27 = 1;
      }
    }
    lVar23 = 0;
    uVar28 = uVar26;
    do {
      local_res18[0] = uVar26;
      do {
        lVar23 = lVar23 + 1;
        uVar26 = uVar26 + 1;
        if (iVar21 <= lVar23) break;
        if (*(longlong *)(pFVar3 + lVar23 * 8) == 0) {
LAB_14b812a74:
          uVar7 = 0;
        }
        else {
          pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
          local_160.Handle = *(ulong64 *)(pFVar3 + lVar23 * 8);
          pFVar10 = FTimerManager::FindTimer(pFVar8,&local_160);
          if (pFVar10 == (FTimerData *)0x0) goto LAB_14b812a74;
          uVar7 = 1;
        }
      } while (uVar27 == uVar7);
      iVar25 = uVar26 - local_res18[0];
      if ((char)uVar27 != '\0') {
        if (uVar28 != local_res18[0]) {
          memmove(pFVar3 + (longlong)(int)uVar28 * 8,pFVar3 + (longlong)(int)local_res18[0] * 8,
                  (longlong)iVar25 << 3);
        }
        uVar28 = uVar28 + iVar25;
      }
      uVar27 = uVar27 ^ 1;
    } while (lVar23 < iVar21);
    (this->TimerHandles).ArrayNum = uVar28;
  }
  pTVar24 = (TReferenceControllerBase<1> *)0x0;
  pFVar11 = FDS_SkillAttackTableRow::Get((longlong)param_1->SkillAttackID,true);
  if (pFVar11 != (FDS_SkillAttackTableRow *)0x0) {
    this_00 = FDS_EntityBase::GetEntityBase(&param_1->AttackerEntityID);
    pFVar12 = FDS_EntityBase::GetEntityBase(&param_1->DefenderEntityID);
    if ((this_00 != (FDS_EntityBase *)0x0) && (pFVar12 != (FDS_EntityBase *)0x0)) {
      if (pFVar11->IsContinuous == true) {
        RefreshContinousHitInfoMap();
        uVar13 = GetFirstAttackerEntityID(param_1);
        FDS_EntityBase::GetSkillData(this_00,(int)&local_188);
        bVar5 = FWeakObjectPtr::IsValid(&local_188);
        if (bVar5) {
          pUVar14 = FWeakObjectPtr::Get(&local_188);
          pFVar15 = FDS_SkillActLevelTableRow::Get((longlong)*(int *)&pUVar14[2].field_0x24,true);
          if (pFVar15 != (FDS_SkillActLevelTableRow *)0x0) {
            if (pFVar15->SkillTargetCheckType == InstantContinuous) {
              iVar21 = param_1->SkillAttackID;
            }
            else {
              iVar21 = pFVar11->ID_Skill;
            }
            pFVar16 = AddContinousHitInfo(uVar13,iVar21,param_1,pFVar15->SkillTargetCheckType);
            if (pFVar16 != (FDS_EntityBase *)0x0) {
              this_00 = pFVar16;
            }
          }
        }
      }
      if (param_1->DamageInfo != 0) {
        local_180.Type = Hit;
        local_180.Duration = 0.2;
        UDS_EmissiveEffectAbilityData::AddEmissiveEffect(pFVar12->EntityID,&local_180);
        local_res20[0] = EmissiveEffect;
        this_01 = (UDS_AbilitySystemComponent *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_158 = 0;
        pFVar17 = FDS_GameplayTags::GetAbilityTag(local_res20);
        UDS_AbilitySystemComponent::TryActivateAbilityByTag
                  (this_01,pFVar17,(TObjectPtr<UWN_AbilityContext>)&local_158);
        if (this_00 != (FDS_EntityBase *)0x0) {
          (**(code **)(this_00->_padding_ + 0x150))(this_00,&local_1b0);
          (**(code **)(pFVar12->_padding_ + 0x150))(pFVar12);
          bVar5 = FWeakObjectPtr::IsValid(&local_1b0);
          if (bVar5) {
            bVar5 = FWeakObjectPtr::IsValid(local_1a8);
            if (bVar5) {
              bVar5 = IsFacing2D((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_1b0,
                                 (TWeakObjectPtr<AActor,FWeakObjectPtr>)local_1a8[0]);
              if ((bVar5) &&
                 (bVar5 = IsFacing2D((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_1a8[0],
                                     (TWeakObjectPtr<AActor,FWeakObjectPtr>)local_1b0), bVar5)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              EVar2 = pFVar11->AttackDirectionType;
              local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x1d);
              if (EVar2 == None) {
                if (!bVar5) {
                  local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x1e);
                }
              }
              else {
                local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x1f);
                if (EVar2 == Right) {
                  if (bVar5) {
LAB_14b812d06:
                    local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x20);
                  }
                }
                else if ((EVar2 == Left) && (!bVar5)) goto LAB_14b812d06;
              }
              SetHitDirection2D(this,this_00,pFVar12,(EDS_StateTagType *)local_res18);
              pFVar17 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res18);
              UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar17);
              pFVar17 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res18);
              UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar17);
            }
            else {
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_8769076200447409872>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_HitProcessAbility.cpp"
                                 ,0x130,"defenderActor.IsValid()");
              if (bVar5) goto code_r0x00014b812c9a;
            }
          }
          else {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8769076200447409872>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_HitProcessAbility.cpp"
                               ,0x130,"attackerActor.IsValid()");
            if (bVar5) {
code_r0x00014b812c9a:
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        this_02 = UDS_SoundManager::GetInst();
        if (this_02 != (UDS_SoundManager *)0x0) {
          UDS_SoundManager::PlaySound(this_02,pFVar11->ID_HitEffectSound);
        }
        PlayCameraShake(this,pFVar11,this_00);
      }
      if ((pFVar11->ChainSkillEffect != 0) || (pFVar11->IsContinuous == true)) {
        iVar21 = pFVar11->ID_HitEffect;
        dVar1 = pFVar11->HitEffectScale;
        if (param_1->DamageInfo == 0x15) {
          dVar1 = pFVar11->CriticalHitEffectScale;
          iVar21 = pFVar11->ID_CriticalHitEffect;
        }
        if (param_1->MultiHitPointIndex == -1) {
          pFVar18 = ::FString::FString(&local_88,&pFVar11->ChainContinuousSocket);
          PlayHitEffect(this,iVar21,(float)dVar1,pFVar18,this_00,(TVector<double> *)&local_100._s_0)
          ;
        }
        else {
          PlayMultiHitPointEffect(this,pFVar11,param_1,this_00,(TVector<double> *)&local_100._s_0);
        }
        uStack_170 = 0;
        local_178 = OnProcessEnd;
        (param_1->EffectLocation).field0_0x0._s_0.X = local_100._s_0.X;
        (param_1->EffectLocation).field0_0x0._s_0.Y = local_100._s_0.Y;
        iStack_16c = local_88.Data.ArrayMax;
        (param_1->EffectLocation).field0_0x0._s_0.Z = local_100._s_0.Z;
        local_1c8 = (undefined1  [8])0x0;
        local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1c0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                   (FWriteAccessScope *)&local_d0);
        local_b8 = &local_1c0;
        puVar19 = UE::Core::Private::DelegateAllocate(0x30,&local_1c0);
        if (puVar19 != (undefined8 *)0x0) {
          *puVar19 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EDS_HitEndType____6B_
          ;
          *(undefined4 *)(puVar19 + 1) = 2;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar19[2] = uVar13;
          *puVar19 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_HitProcessAbility____A6AXXZUFDefaultDelegateUserPolicy__W4EDS_HitEndType____6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_HitProcessAbility *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar19[3] = 0;
          local_150 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_HitProcessAbility *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_150);
          puVar19[4] = local_178;
          puVar19[5] = CONCAT44(iStack_16c,uStack_170);
        }
        if (local_d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
        }
        local_128 = (void *)0x0;
        FStack_120.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,local_78);
        if (((local_1c0.DelegateSize == 0) ||
            (local_1c0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
           (cVar6 = (**(code **)(*(longlong *)local_1c0.DelegateAllocator + 0x38))(), cVar6 == '\0')
           ) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_78);
        pvVar29 = (void *)0x0;
        FVar30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (bVar5) {
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_148,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c8);
          pTVar20 = ::operator_new(0x30);
          if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar20 + 1),
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_148);
            pTVar20->SharedReferenceCount = (atomic<int>)0x1;
            pTVar20->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
            ;
            pTVar20->WeakReferenceCount = (atomic<int>)0x1;
            pTVar20[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar20[2].WeakReferenceCount = (atomic<int>)0x0;
            pTVar24 = pTVar20;
          }
          local_198 = (code *)0x0;
          FStack_190.ReferenceController = pTVar24;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_120,&FStack_190);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_190.ReferenceController);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
          if ((void *)local_148._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_148._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_148);
          pvVar29 = local_128;
          FVar30.ReferenceController = FStack_120.ReferenceController;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                   (FWriteAccessScope *)&local_e8);
        if ((local_1c0.DelegateSize != 0) &&
           (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_1c0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_1c0,0,0,0x10);
          local_1c0.DelegateSize = 0;
        }
        if (local_e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
        }
        if (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_1c0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1c8);
        if (FVar30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar30.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar30.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98.TaskCaller.Object = pvVar29;
        local_98.TaskCaller.SharedReferenceCount.ReferenceController = FVar30.ReferenceController;
        PlayChainEffectAsync(this,pFVar11,this_00,pFVar12,param_1,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar30.ReferenceController);
        return;
      }
      if (param_1->DamageInfo != 0) {
        if (param_1->MultiHitPointIndex == -1) {
          PlayHitEffect(this,pFVar11,param_1->DamageInfo,this_00,(TVector<double> *)&local_118._s_0)
          ;
        }
        else {
          PlayMultiHitPointEffect(this,pFVar11,param_1,this_00,(TVector<double> *)&local_118._s_0);
        }
        (param_1->EffectLocation).field0_0x0._s_0.X = local_118._s_0.X;
        (param_1->EffectLocation).field0_0x0._s_0.Y = local_118._s_0.Y;
        (param_1->EffectLocation).field0_0x0._s_0.Z = local_118._s_0.Z;
      }
      EVar22 = Success;
      goto LAB_14b8130eb;
    }
  }
  EVar22 = Cancel;
LAB_14b8130eb:
  OnProcessEnd(this,EVar22);
  return;
}

