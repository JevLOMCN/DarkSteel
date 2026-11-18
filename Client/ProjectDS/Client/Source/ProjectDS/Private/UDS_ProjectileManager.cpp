// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b56a160

UClass * __cdecl UDS_ProjectileManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ProjectileManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ProjectileManager",
               &Z_Registration_Info_UClass_UDS_ProjectileManager.InnerSingleton,
               StaticRegisterNativesUDS_ProjectileManager,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ProjectileManager>,
               InternalVTableHelperCtorCaller<UDS_ProjectileManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ProjectileManager.InnerSingleton;
}

// UDS_ProjectileManager @ 14b56dae0

UDS_ProjectileManager * __thiscall
UDS_ProjectileManager::UDS_ProjectileManager(UDS_ProjectileManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ProjectileManager__6B_;
  *(undefined8 *)&this->SkillInfoMap = 0;
  *(undefined8 *)&(this->SkillInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->SkillInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->SkillInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->SkillInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkillInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->SkillInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkillInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->SkillInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->ProjectileCurveMap = 0;
  *(undefined8 *)&(this->ProjectileCurveMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProjectileCurveMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x34 = 0;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ProjectileCurveMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x48 = 0;
  *(undefined8 *)&this->ProjectileEffectMap = 0;
  *(undefined8 *)&(this->ProjectileEffectMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProjectileEffectMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x34 = 0;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ProjectileEffectMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x48 = 0;
  return this;
}

// UDS_ProjectileManager @ 14b56dbc0

UDS_ProjectileManager * __thiscall
UDS_ProjectileManager::UDS_ProjectileManager
          (UDS_ProjectileManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ProjectileManager__6B_;
  *(undefined8 *)&this->SkillInfoMap = 0;
  *(undefined8 *)&(this->SkillInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->SkillInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->SkillInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->SkillInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkillInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->SkillInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkillInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->SkillInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->ProjectileCurveMap = 0;
  *(undefined8 *)&(this->ProjectileCurveMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProjectileCurveMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x34 = 0;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ProjectileCurveMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x48 = 0;
  *(undefined8 *)&this->ProjectileEffectMap = 0;
  *(undefined8 *)&(this->ProjectileEffectMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProjectileEffectMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x34 = 0;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ProjectileEffectMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x48 = 0;
  return this;
}

// ~UDS_ProjectileManager @ 14b56e3c0

void __thiscall UDS_ProjectileManager::~UDS_ProjectileManager(UDS_ProjectileManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ProjectileManager__6B_;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ProjectileEffectMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UNiagaraSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UNiagaraSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UNiagaraSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProjectileEffectMap);
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ProjectileCurveMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UCurveFloat>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UCurveFloat>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UCurveFloat>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProjectileCurveMap);
  *(undefined4 *)&(this->SkillInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkillInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkillInfoMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f870

UClass * __cdecl UDS_ProjectileManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ProjectileManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ProjectileManager",
               &Z_Registration_Info_UClass_UDS_ProjectileManager.InnerSingleton,
               StaticRegisterNativesUDS_ProjectileManager,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ProjectileManager>,
               InternalVTableHelperCtorCaller<UDS_ProjectileManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ProjectileManager.InnerSingleton;
}

// StaticRegisterNativesUDS_ProjectileManager @ 14b56fdc0

void __cdecl UDS_ProjectileManager::StaticRegisterNativesUDS_ProjectileManager(void)

{
  return;
}

// AddProjectileSkillInfo @ 14baf0b40

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

bool __thiscall
UDS_ProjectileManager::AddProjectileSkillInfo
          (UDS_ProjectileManager *this,ulong64 *param_1,
          TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr> param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  ulonglong uVar5;
  FDS_SkillAttackTableRow *pFVar6;
  FDS_SkillProjectileTableRow *pFVar7;
  TWeakObjectPtr<UCurveFloat,FWeakObjectPtr> TVar8;
  FDS_ProjectileSkillInfo *pFVar9;
  FDS_ProjectileSkillAttackInfo *this_00;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_328 [32];
  uint uVar16;
  wchar_t *pwVar17;
  undefined1 local_2f8 [8];
  TPairInitializer<unsigned___int64_const_&,FDS_ProjectileSkillInfo_&> local_2f0;
  UDS_ProjectileManager *local_2e0;
  undefined8 local_2d8;
  undefined1 auStack_2d0 [16];
  TVector<double>_u_0 TStack_2c0;
  TVector<double>_u_0 local_2a8;
  float local_290;
  double local_288;
  ForAnyElementType local_280;
  undefined8 local_278;
  ForAnyElementType local_270;
  undefined8 local_268;
  FWeakObjectPtr FStack_260;
  undefined8 local_258;
  FScriptContainerElement *local_250;
  undefined1 local_248 [16];
  FString local_238;
  undefined1 local_228 [32];
  double local_208;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *pTStack_200;
  bool local_1f8 [8];
  ulong64 local_1f0;
  FDS_EntityBase *local_1e8;
  FWeakObjectPtr local_1e0;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  local_1d8;
  FDS_ProjectileSkillAttackInfo *local_188;
  undefined8 local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_res18 = param_2.WeakPtr;
  local_2e0 = this;
  local_250 = (FScriptContainerElement *)param_1;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_ProjectileManager::AddProjectileSkillInfo",0x2d,Yes);
    pwVar17 = L"shooterEntity is nullptr.";
    uVar16 = 0x357;
  }
  else {
    UDS_MovementCore::GetMovementCore((ulong64)&local_2f0.Value);
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_2f0.Value,
                       (void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_ProjectileManager::AddProjectileSkillInfo",0x2d,Yes);
      pwVar17 = L"shooterMovementCore is nullptr.";
      uVar16 = 0x35e;
    }
    else {
      bVar1 = TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr> *)&local_res18,
                         (void *)0x0);
      if (!bVar1) {
        local_1f0 = 0;
        local_1e8 = (FDS_EntityBase *)0x0;
        local_1e0.ObjectIndex = 0;
        local_1e0.ObjectSerialNumber = 0;
        local_2f0.Key = (ulong64 *)0x0;
        local_1f8[0] = false;
        FWeakObjectPtr::operator=(&local_1e0,(FObjectPtr)&local_2f0);
        local_1f0 = *param_1;
        local_1e0 = (FWeakObjectPtr)local_2f0.Value;
        local_1d8.Elements._0_8_ = 0;
        local_1d8.Elements._8_8_ = 0;
        local_1d8.Elements._32_8_ = 0;
        local_1d8.Elements._40_4_ = 0;
        local_1d8.Elements._44_4_ = 0x80;
        local_1d8.Elements._48_4_ = 0xffffffff;
        local_1d8.Elements._52_4_ = 0;
        local_1d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_1d8.HashSize = 0;
        local_188 = (FDS_ProjectileSkillAttackInfo *)0x0;
        local_180 = 0;
        local_1e8 = pFVar2;
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        lVar13 = *(longlong *)&pUVar4[3].field_0x8;
        uVar5 = (ulonglong)*(int *)&pUVar4[3].field_0x10;
        local_2f0.Key = (ulong64 *)CONCAT44(local_2f0.Key._4_4_,*(int *)&pUVar4[3].field_0x10);
        lVar15 = uVar5 * 0x78 + lVar13;
        while( true ) {
          if (*(int *)&pUVar4[3].field_0x10 != (int)uVar5) {
            `TCheckedPointerIterator<FDS_AtomicImpactInfo_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_2f8);
          }
          if (lVar13 == lVar15) break;
          pFVar6 = FDS_SkillAttackTableRow::Get((longlong)*(int *)(lVar13 + 0x28),true);
          if (((pFVar6 != (FDS_SkillAttackTableRow *)0x0) && (pFVar6->ProjectileType != None)) &&
             ((0 < pFVar6->ID_SkillProjectileLink &&
              ((pFVar7 = FDS_SkillProjectileTableRow::Get
                                   ((longlong)pFVar6->ID_SkillProjectileLink,true),
               pFVar7 != (FDS_SkillProjectileTableRow *)0x0 && (pFVar7->ProjectileMoveType != None))
              )))) {
            TStack_2c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_2a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_268._0_4_ = 0;
            local_268._4_4_ = 0;
            FStack_260.ObjectIndex = 0;
            FStack_260.ObjectSerialNumber = 0;
            local_288 = 0.0;
            local_2d8 = (longlong *)(((ulonglong)local_2d8 >> 0x10 & 0xffff) << 0x10);
            auStack_2d0._0_8_ = (FDS_SkillAttackTableRow *)0x0;
            auStack_2d0._8_8_ = (FDS_SkillProjectileTableRow *)0x0;
            TStack_2c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            TStack_2c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_290 = 0.0;
            local_2a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_2a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_280.Data = (FScriptContainerElement *)0x0;
            local_278._0_4_ = 0;
            local_278._4_4_ = 0;
            local_270.Data = (FScriptContainerElement *)0x0;
            local_258 = 0;
            FWeakObjectPtr::operator=(&FStack_260,(FObjectPtr)&local_258);
            local_2d8 = (longlong *)CONCAT44(pFVar6->ID,(undefined4)local_2d8);
            auStack_2d0._8_8_ = pFVar7;
            auStack_2d0._0_8_ = pFVar6;
            FSoftObjectPath::ToString(&pFVar7->CurveData,&local_238);
            TVar8 = GetProjectileCurve(local_2e0,(FString *)local_248);
                    /* WARNING: Load size is inaccurate */
            FStack_260 = *TVar8.WeakPtr;
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
            ::Emplace<int_const_&,FDS_ProjectileSkillAttackInfo_&>
                      ((TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
                        *)&local_1d8,(int *)(lVar13 + 0x28),
                       (FDS_ProjectileSkillAttackInfo *)&local_2d8);
            if (local_270.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data);
            }
            if (local_280.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_280.Data);
            }
          }
          uVar5 = (ulonglong)local_2f0.Key & 0xffffffff;
          lVar13 = lVar13 + 0x78;
        }
        if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
          uVar5 = *(ulonglong *)local_250;
          if (*(int *)&(local_2e0->SkillInfoMap).field_0x8 !=
              *(int *)&(local_2e0->SkillInfoMap).field_0x34) {
            puVar10 = *(undefined1 **)&(local_2e0->SkillInfoMap).field_0x40;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = &(local_2e0->SkillInfoMap).field_0x38;
            }
            iVar12 = *(int *)(puVar10 +
                             ((ulonglong)(*(int *)&(local_2e0->SkillInfoMap).field_0x48 - 1) &
                             (uVar5 >> 0x20) * 0x17 + uVar5) * 4);
            if (iVar12 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)&local_2e0->SkillInfoMap + (longlong)iVar12 * 0x90)
                    == uVar5) {
                  if (iVar12 != -1) {
                    pFVar9 = TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
                             ::FindChecked((TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
                                            *)&local_2e0->SkillInfoMap,uVar5);
                    pFVar9->bIsFinish_SkillInfo = local_1f8[0];
                    pFVar9->ShooterEntityID = local_1f0;
                    pFVar9->ShooterEntity = local_1e8;
                    (pFVar9->ShooterMovementCore).WeakPtr = local_1e0;
                    TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
                    ::TIterator::TIterator((TIterator *)local_228,&local_1d8);
                    unique0x0000d600 = local_228._16_16_;
                    local_2a8._s_0.X = (double)&local_1d8;
                    local_2a8._s_0.Y = (double)((ulonglong)local_2a8._s_0.Y & 0xffffffffffff0000);
                    local_2d8 = (longlong *)local_228._0_8_;
                    auStack_2d0._0_8_ = local_228._8_8_;
                    TStack_2c0._s_0.Y = local_208;
                    TStack_2c0._s_0.Z = (double)pTStack_200;
                    uVar5 = local_228._24_8_ >> 0x20;
                    if (local_228._28_4_ < *(int *)(local_228._16_8_ + 0x18)) {
                      do {
                        puVar14 = (uint *)((longlong)(int)uVar5 * 0x90 + *local_2d8);
                        uVar16 = *puVar14;
                        if (*(int *)&(pFVar9->PendingSkillAttackInfoMap).field_0x8 !=
                            *(int *)&(pFVar9->PendingSkillAttackInfoMap).field_0x34) {
                          puVar10 = *(undefined1 **)&(pFVar9->PendingSkillAttackInfoMap).field_0x40;
                          puVar11 = &(pFVar9->PendingSkillAttackInfoMap).field_0x38;
                          if (puVar10 != (undefined1 *)0x0) {
                            puVar11 = puVar10;
                          }
                          iVar12 = *(int *)(puVar11 +
                                           (ulonglong)
                                           (*(int *)&(pFVar9->PendingSkillAttackInfoMap).field_0x48
                                            - 1U & uVar16) * 4);
                          if (iVar12 != -1) {
                            do {
                              if (*(uint *)(*(longlong *)&pFVar9->PendingSkillAttackInfoMap +
                                           (longlong)iVar12 * 0x90) == uVar16) {
                                this_00 = TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
                                          ::FindChecked((
                                                  TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
                                                  *)&pFVar9->PendingSkillAttackInfoMap,uVar16);
                                FDS_ProjectileSkillAttackInfo::ClearSkillAttackInfo(this_00);
                                break;
                              }
                              iVar12 = *(int *)(*(longlong *)&pFVar9->PendingSkillAttackInfoMap +
                                                0x88 + (longlong)iVar12 * 0x90);
                            } while (iVar12 != -1);
                          }
                        }
                        TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
                        ::Emplace<int_const_&,FDS_ProjectileSkillAttackInfo_const_&>
                                  ((TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
                                    *)&pFVar9->PendingSkillAttackInfoMap,(int *)puVar14,
                                   (FDS_ProjectileSkillAttackInfo *)(puVar14 + 2));
                        TStack_2c0._0_4_ = TStack_2c0._0_4_ & ~auStack_2d0._4_4_;
                        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2d0);
                        uVar5 = (ulonglong)(uint)TStack_2c0._4_4_;
                      } while ((int)TStack_2c0._4_4_ < *(int *)(auStack_2d0._8_8_ + 0x18));
                      if ((local_2a8._8_1_ != '\0') && (local_2a8._9_1_ != '\0')) {
                        iVar12 = 1;
                        uVar16 = *(int *)((longlong)local_2a8._s_0.X + 8) -
                                 *(int *)((longlong)local_2a8._s_0.X + 0x34);
                        if (3 < uVar16) {
                          uVar5 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
                          lVar13 = 0x3f;
                          if (uVar5 != 0) {
                            for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                            }
                          }
                          iVar12 = 1 << ((byte)lVar13 & 0x1f);
                        }
                        if (((0 < (int)uVar16) &&
                            (*(int *)((longlong)local_2a8._s_0.X + 0x48) < iVar12)) ||
                           (iVar12 < *(int *)((longlong)local_2a8._s_0.X + 0x48))) {
                          *(int *)((longlong)local_2a8._s_0.X + 0x48) = iVar12;
                          TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
                          ::Rehash((TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
                                    *)local_2a8._s_0.X);
                        }
                      }
                    }
                    goto LAB_14baf0fc3;
                  }
                  break;
                }
                iVar12 = *(int *)(*(longlong *)&local_2e0->SkillInfoMap + 0x88 +
                                 (longlong)iVar12 * 0x90);
              } while (iVar12 != -1);
            }
          }
          local_248._8_8_ = local_1f8;
          local_248._0_8_ = local_250;
          TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned___int64_const_&,FDS_ProjectileSkillInfo_&>_>
                    ((TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
                      *)&local_2e0->SkillInfoMap,&local_2f0,(bool *)local_248);
        }
LAB_14baf0fc3:
        DestructItems<FDS_ProjectileSkillAttackInfo,int>(local_188,(int)local_180);
        if (local_188 != (FDS_ProjectileSkillAttackInfo *)0x0) {
          FMemory::Free(local_188);
        }
        local_1d8.HashSize = 0;
        if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1d8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<int,FDS_ProjectileSkillAttackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ProjectileSkillAttackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1d8.Elements);
        return true;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_ProjectileManager::AddProjectileSkillInfo",0x2d,Yes);
      pwVar17 = L"InAttackTargetData is nullptr.";
      uVar16 = 0x364;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_178.Ptr,uVar16,pwVar17);
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  return false;
}

// ClearProjectileCurve @ 14baf93f0

void __thiscall UDS_ProjectileManager::ClearProjectileCurve(UDS_ProjectileManager *this)

{
  undefined1 *puVar1;
  TMap<FString,TObjectPtr<UCurveFloat>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->ProjectileCurveMap;
  bVar3 = 1 < *(int *)&(this->ProjectileCurveMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UCurveFloat>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UCurveFloat>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ProjectileCurveMap).field_0x8);
  puVar1 = &(this->ProjectileCurveMap).field_0xc;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ProjectileCurveMap).field_0x2c;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ProjectileCurveMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ProjectileCurveMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ProjectileCurveMap).field_0x48 = 1;
    TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// ClearProjectileEffect @ 14baf94b0

void __thiscall UDS_ProjectileManager::ClearProjectileEffect(UDS_ProjectileManager *this)

{
  undefined1 *puVar1;
  TMap<int,TObjectPtr<UNiagaraSystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->ProjectileEffectMap;
  bVar3 = 1 < *(int *)&(this->ProjectileEffectMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ProjectileEffectMap).field_0xc;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ProjectileEffectMap).field_0x2c;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ProjectileEffectMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ProjectileEffectMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ProjectileEffectMap).field_0x48 = 1;
    TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// ClearProjectileSkillInfo @ 14baf9690

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

void __thiscall UDS_ProjectileManager::ClearProjectileSkillInfo(UDS_ProjectileManager *this)

{
  TMap<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->SkillInfoMap;
  TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      FDS_ProjectileSkillInfo::ClearSkillInfo
                ((FDS_ProjectileSkillInfo *)(*local_48 + 8 + (longlong)(int)uVar5 * 0x90));
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar4 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar2 = 1 < *(int *)&(this->SkillInfoMap).field_0x48;
  if (!bVar2) {
    TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->SkillInfoMap).field_0x8);
  puVar1 = &(this->SkillInfoMap).field_0xc;
  *(undefined4 *)&(this->SkillInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SkillInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkillInfoMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->SkillInfoMap).field_0x2c;
  *(undefined4 *)&(this->SkillInfoMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->SkillInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SkillInfoMap).field_0x10,0);
  }
  if (bVar2) {
    *(undefined4 *)&(this->SkillInfoMap).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// Created @ 14bb01e80

void __thiscall UDS_ProjectileManager::Created(UDS_ProjectileManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb03020

void __thiscall UDS_ProjectileManager::Destroyed(UDS_ProjectileManager *this)

{
  return;
}

// GetInst @ 14bb0be10

UDS_ProjectileManager * __cdecl UDS_ProjectileManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ProjectileManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_ProjectileManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_ProjectileManager_NoRegister();
  pUVar3 = (UDS_ProjectileManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ProjectileManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ProjectileManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_ProjectileManager *)0x0;
}

// GetProjectileCurve @ 14bb0d680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UCurveFloat,FWeakObjectPtr> __thiscall
UDS_ProjectileManager::GetProjectileCurve(UDS_ProjectileManager *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  TObjectPtr<UCurveFloat>_u_0 TVar3;
  UClass *pUVar4;
  TObjectPtr<UCurveFloat> *pTVar5;
  UDS_LogManager *pUVar6;
  FString *in_R8;
  TMap<FString,TObjectPtr<UCurveFloat>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>_>
  *this_00;
  undefined1 auStackY_1e8 [32];
  TObjectPtr<UCurveFloat>_u_0 local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [16];
  undefined8 local_188;
  void *local_180;
  undefined8 local_178;
  TObjectPtr<UCurveFloat>_u_0 local_168;
  TObjectPtr<UCurveFloat>_u_0 *pTStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  iVar2 = (in_R8->Data).ArrayNum;
  if (iVar2 < 2) {
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.DebugPtr = (UCurveFloat *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1a8);
    return (TWeakObjectPtr<UCurveFloat,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this_00 = &this->ProjectileCurveMap;
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>
                    (iVar2 + -1,(wchar_t *)(in_R8->Data).AllocatorInstance.Data);
  iVar2 = TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
                      *)this_00,uVar1,in_R8);
  if (iVar2 != -1) goto LAB_14bb0d7f3;
  local_1a8 = (TObjectPtr<UCurveFloat>_u_0)(in_R8->Data).AllocatorInstance.Data;
  iVar2 = (in_R8->Data).ArrayNum;
  local_198._8_8_ = (UCurveFloat **)0x0;
  local_188 = 0;
  local_180 = (void *)0x0;
  local_178 = 0;
  iStack_1a0 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_1a0 = 0;
  }
  pTStack_160 = (TObjectPtr<UCurveFloat>_u_0 *)CONCAT44(uStack_19c,iStack_1a0);
  local_168 = local_1a8;
  FSoftObjectPath::SetPath
            ((FSoftObjectPath *)(local_198 + 8),(TStringView<wchar_t> *)&local_168.ObjectPtr);
  TVar3.DebugPtr = (UCurveFloat *)FSoftObjectPath::ResolveObject((FSoftObjectPath *)(local_198 + 8))
  ;
  if (TVar3.DebugPtr == (UCurveFloat *)0x0) {
LAB_14bb0d77b:
    TVar3.DebugPtr =
         (UCurveFloat *)
         FSoftObjectPath::TryLoad
                   ((FSoftObjectPath *)(local_198 + 8),(FUObjectSerializeContext *)0x0);
    if (TVar3.DebugPtr == (UCurveFloat *)0x0) {
LAB_14bb0d884:
      local_1a8.DebugPtr = (UCurveFloat *)0x0;
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_ProjectileManager::GetProjectileCurve",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x45f,L"Failed to TryLoad. (%s)");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198._0_8_ = (FString *)0x0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_198);
      if (local_180 == (void *)0x0) {
        return (TWeakObjectPtr<UCurveFloat,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      FMemory::Free(local_180);
      return (TWeakObjectPtr<UCurveFloat,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
    pUVar4 = Z_Construct_UClass_UCurveFloat_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)((TVar3.DebugPtr)->_padding_ + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar3.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_)) goto LAB_14bb0d884;
  }
  else {
    pUVar4 = Z_Construct_UClass_UCurveFloat_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)((TVar3.DebugPtr)->_padding_ + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar3.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_)) goto LAB_14bb0d77b;
  }
  pTStack_160 = &local_1a8;
  local_1a8 = TVar3;
  TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,UCurveFloat_*_&>_>
            ((TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FString_const_&,UCurveFloat_*_&> *)local_198,
             (bool *)&local_168);
  if (local_180 != (void *)0x0) {
    FMemory::Free(local_180);
  }
LAB_14bb0d7f3:
  pTVar5 = TMapBase<FString,TObjectPtr<UCurveFloat>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>_>
           ::FindChecked((TMapBase<FString,TObjectPtr<UCurveFloat>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>_>
                          *)this_00,in_R8);
  TVar3.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar5->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar3.DebugPtr != (UCurveFloat *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ObjectPtr.field0_0x0 = TVar3.ObjectPtr.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UCurveFloat *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1a8);
  return (TWeakObjectPtr<UCurveFloat,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetProjectileEffect @ 14bb0d950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> __thiscall
UDS_ProjectileManager::GetProjectileEffect(UDS_ProjectileManager *this,int *param_1)

{
  FSoftObjectPath *this_00;
  TObjectPtr<UNiagaraSystem>_u_0 TVar1;
  int iVar2;
  FDS_ResourceEffectTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  UClass *pUVar5;
  TObjectPtr<UNiagaraSystem> *pTVar6;
  undefined1 *puVar7;
  FObjectPtr_u_0 FVar8;
  TMap<int,TObjectPtr<UNiagaraSystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>_>
  *this_01;
  uint *in_R8;
  undefined1 auStackY_1c8 [32];
  TObjectPtr<UNiagaraSystem>_u_0 local_188;
  undefined1 local_180 [8];
  undefined1 local_178 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((int)*in_R8 < 1) {
    param_1[0] = 0;
    param_1[1] = 0;
    local_188.DebugPtr = (UNiagaraSystem *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_188);
    return (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pFVar3 = FDS_ResourceEffectTableRow::Get((longlong)(int)*in_R8,true);
  if (pFVar3 == (FDS_ResourceEffectTableRow *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ProjectileManager::GetProjectileEffect",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_168.Ptr,0x473,L"resourceEffectTable is nullptr. (%d)");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    param_1[0] = 0;
    param_1[1] = 0;
    local_188.DebugPtr = (UNiagaraSystem *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_188);
    return (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this_00 = &pFVar3->EffectPath;
  if ((pFVar3->EffectPath).AssetPath.PackageName == (FName)0x0) {
    FVar8.Handle = (UObject *)&local_188;
    local_188.DebugPtr = (UNiagaraSystem *)0x0;
  }
  else {
    this_01 = &this->ProjectileEffectMap;
    if (*(int *)&(this->ProjectileEffectMap).field_0x8 !=
        *(int *)&(this->ProjectileEffectMap).field_0x34) {
      puVar7 = *(undefined1 **)&(this->ProjectileEffectMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->ProjectileEffectMap).field_0x38;
      }
      iVar2 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->ProjectileEffectMap).field_0x48 - 1U & *in_R8) * 4)
      ;
      if (iVar2 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar2 * 0x18) == *in_R8)
          goto LAB_14bb0db66;
          iVar2 = *(int *)(*(longlong *)&this_01->field_0x0 + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
    }
    local_188.DebugPtr = (UNiagaraSystem *)FSoftObjectPath::ResolveObject(this_00);
    if (local_188.DebugPtr != (UNiagaraSystem *)0x0) {
      pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((*(int *)((local_188.DebugPtr)->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((local_188.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) goto LAB_14bb0dafc;
LAB_14bb0db3d:
      local_178._8_8_ = &local_188;
      TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UNiagaraSystem_*_&>_>
                ((TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
                  *)this_01,(TPairInitializer<int_const_&,UNiagaraSystem_*_&> *)local_180,
                 (bool *)local_178);
LAB_14bb0db66:
      pTVar6 = TMapBase<int,TObjectPtr<UNiagaraSystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>_>
               ::FindChecked((TMapBase<int,TObjectPtr<UNiagaraSystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>_>
                              *)this_01,*in_R8);
      TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar6->field0_0x0).DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar1.DebugPtr != (UNiagaraSystem *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar1.DebugPtr != (UNiagaraSystem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
        }
      }
      param_1[0] = 0;
      param_1[1] = 0;
      local_188.ObjectPtr.field0_0x0 = TVar1.ObjectPtr.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UNiagaraSystem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      FVar8.Handle = (UObject *)&local_188;
      goto LAB_14bb0dc85;
    }
LAB_14bb0dafc:
    local_188.DebugPtr =
         (UNiagaraSystem *)FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
    if (local_188.DebugPtr != (UNiagaraSystem *)0x0) {
      pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)((local_188.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((local_188.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) goto LAB_14bb0db3d;
    }
    local_188.DebugPtr = (UNiagaraSystem *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(this_00,(FString *)local_178);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ProjectileManager::GetProjectileEffect",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_168.Ptr,0x487,L"Failed to TryLoad. (%s)");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_178._0_8_);
      }
    }
    local_180 = (undefined1  [8])0x0;
    FVar8.Handle = (UObject *)local_180;
  }
  param_1[0] = 0;
  param_1[1] = 0;
LAB_14bb0dc85:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)FVar8);
  return (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// ImpactProjectile @ 14bb12870

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

bool __thiscall
UDS_ProjectileManager::ImpactProjectile(UDS_ProjectileManager *this,ulong64 *param_1,int *param_2)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FDS_ProjectileSkillInfo *pFVar9;
  UDS_LogManager *pUVar10;
  TRotator<double> *this_00;
  UObject *pUVar11;
  FName *pFVar12;
  undefined1 (*pauVar13) [16];
  UDS_MovementCore *pUVar14;
  TVector<double> *pTVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_2c8 [32];
  float local_288 [2];
  TVector<double>_u_0 local_280;
  FWeakObjectPtr local_268 [2];
  FDS_ProjectileSkillAttackInfo local_258;
  TRotator<double> local_1d8;
  FName local_1c0;
  TVector<double> local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  uVar4 = *param_1;
  if (*(int *)&(this->SkillInfoMap).field_0x8 == *(int *)&(this->SkillInfoMap).field_0x34) {
    return true;
  }
  puVar16 = *(undefined1 **)&(this->SkillInfoMap).field_0x40;
  if (puVar16 == (undefined1 *)0x0) {
    puVar16 = &(this->SkillInfoMap).field_0x38;
  }
  iVar8 = *(int *)(puVar16 +
                  ((ulonglong)(*(int *)&(this->SkillInfoMap).field_0x48 - 1) &
                  (uVar4 >> 0x20) * 0x17 + uVar4) * 4);
  if (iVar8 == -1) {
    return true;
  }
  lVar5 = *(longlong *)&this->SkillInfoMap;
  while (*(ulonglong *)(lVar5 + (longlong)iVar8 * 0x90) != uVar4) {
    iVar8 = *(int *)(lVar5 + 0x88 + (longlong)iVar8 * 0x90);
    if (iVar8 == -1) {
      return true;
    }
  }
  pFVar9 = TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
           ::FindChecked((TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
                          *)&this->SkillInfoMap,uVar4);
  if ((pFVar9->ShooterEntity == (FDS_EntityBase *)0x0) ||
     (bVar7 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        (&pFVar9->ShooterMovementCore,(void *)0x0), bVar7)) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"UDS_ProjectileManager::ImpactProjectile",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_198.Ptr,0x3de,L"Invalid skillInfo.");
  }
  else {
    if (*(int *)&(pFVar9->PendingSkillAttackInfoMap).field_0x8 !=
        *(int *)&(pFVar9->PendingSkillAttackInfoMap).field_0x34) {
      puVar16 = &(pFVar9->PendingSkillAttackInfoMap).field_0x38;
      puVar17 = *(undefined1 **)&(pFVar9->PendingSkillAttackInfoMap).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar16;
      }
      iVar8 = *(int *)(puVar17 +
                      (ulonglong)
                      (*(int *)&(pFVar9->PendingSkillAttackInfoMap).field_0x48 - 1U & *param_2) * 4)
      ;
      if (iVar8 != -1) {
        do {
          if (*(uint *)(*(longlong *)&pFVar9->PendingSkillAttackInfoMap + (longlong)iVar8 * 0x90) ==
              *param_2) {
            FDS_ProjectileSkillAttackInfo::FDS_ProjectileSkillAttackInfo(&local_258);
            if (*(int *)&(pFVar9->PendingSkillAttackInfoMap).field_0x8 ==
                *(int *)&(pFVar9->PendingSkillAttackInfoMap).field_0x34) goto LAB_14bb12a81;
            puVar17 = *(undefined1 **)&(pFVar9->PendingSkillAttackInfoMap).field_0x40;
            if (puVar17 == (undefined1 *)0x0) {
              puVar17 = puVar16;
            }
            iVar8 = *(int *)(puVar17 +
                            (ulonglong)
                            (*(int *)&(pFVar9->PendingSkillAttackInfoMap).field_0x48 - 1U & *param_2
                            ) * 4);
            if (iVar8 == -1) goto LAB_14bb12a81;
            lVar5 = *(longlong *)&pFVar9->PendingSkillAttackInfoMap;
            goto LAB_14bb12a60;
          }
          iVar8 = *(int *)(*(longlong *)&pFVar9->PendingSkillAttackInfoMap + 0x88 +
                          (longlong)iVar8 * 0x90);
        } while (iVar8 != -1);
      }
    }
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"UDS_ProjectileManager::ImpactProjectile",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar10,1,Warning,local_198.Ptr,0x3e4,
               L"Couldn\'t find ProjectileSkillAttackInfo. (%d)");
  }
  if ((void *)local_198._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_198._padding_);
  }
  return false;
  while (iVar8 = *(int *)(lVar19 + 0x88 + lVar5), iVar8 != -1) {
LAB_14bb12a60:
    lVar19 = (longlong)iVar8 * 0x90;
    if (*(uint *)(lVar19 + lVar5) == *param_2) {
      local_258.bIsFinish_SkillAttackInfo = *(bool *)(lVar19 + 8 + lVar5);
      local_258.bIsImpacted = *(bool *)(lVar19 + 9 + lVar5);
      local_258.SkillAttackTableID = *(int *)(lVar19 + 0xc + lVar5);
      local_258.SkillAttackTable = *(FDS_SkillAttackTableRow **)(lVar19 + 0x10 + lVar5);
      local_258.SkillProjectileTable = *(FDS_SkillProjectileTableRow **)(lVar19 + 0x18 + lVar5);
      pdVar2 = (double *)(lVar19 + 0x20 + lVar5);
      local_258.StartLocation.field0_0x0._s_0.X = *pdVar2;
      local_258.StartLocation.field0_0x0._s_0.Y = pdVar2[1];
      puVar20 = (undefined8 *)(lVar5 + 0x60 + lVar19);
      local_258.StartLocation.field0_0x0._s_0.Z = *(double *)(lVar19 + 0x30 + lVar5);
      pdVar2 = (double *)(lVar19 + 0x38 + lVar5);
      local_258.StartDirection.field0_0x0._s_0.X = *pdVar2;
      local_258.StartDirection.field0_0x0._s_0.Y = pdVar2[1];
      local_258.StartDirection.field0_0x0._s_0.Z = *(double *)(lVar19 + 0x48 + lVar5);
      local_258.StartHeight = *(float *)(lVar19 + 0x50 + lVar5);
      local_258.ElapsedTime = *(double *)(lVar19 + 0x58 + lVar5);
      if (&local_258.ProjectileInfoArray !=
          (TArray<FDS_ProjectileInfo,TSizedDefaultAllocator<32>_> *)puVar20) {
        if (local_258.ProjectileInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_258.ProjectileInfoArray.AllocatorInstance.Data);
        }
        local_258.ProjectileInfoArray.AllocatorInstance.Data = (FScriptContainerElement *)*puVar20;
        *puVar20 = 0;
        local_258.ProjectileInfoArray.ArrayNum = *(int *)(puVar20 + 1);
        local_258.ProjectileInfoArray.ArrayMax = *(int *)((longlong)puVar20 + 0xc);
        puVar20[1] = 0;
      }
      puVar20 = (undefined8 *)(lVar5 + 0x70 + lVar19);
      if (&local_258.TargetInfoArray !=
          (TArray<FDS_ProjectileTargetInfo,TSizedDefaultAllocator<32>_> *)puVar20) {
        if (local_258.TargetInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.TargetInfoArray.AllocatorInstance.Data);
        }
        local_258.TargetInfoArray.AllocatorInstance.Data = (FScriptContainerElement *)*puVar20;
        *puVar20 = 0;
        local_258.TargetInfoArray.ArrayNum = *(int *)(puVar20 + 1);
        local_258.TargetInfoArray.ArrayMax = *(int *)((longlong)puVar20 + 0xc);
        puVar20[1] = 0;
      }
      local_258.CurveData.WeakPtr = *(FWeakObjectPtr *)(lVar19 + 0x80 + lVar5);
      TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
                       *)&pFVar9->PendingSkillAttackInfoMap,iVar8);
      if ((local_258.SkillAttackTable != (FDS_SkillAttackTableRow *)0x0) &&
         (local_258.SkillProjectileTable != (FDS_SkillProjectileTableRow *)0x0)) {
        (**(code **)(pFVar9->ShooterEntity->_padding_ + 0x80))();
        bVar7 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_268,
                           (void *)0x0);
        if (bVar7) {
          bVar7 = true;
        }
        else {
          local_280._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_280._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_280._s_0.Z = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
          this_00 = FDS_EntityBase::GetEntityRotation(pFVar9->ShooterEntity,&local_1d8);
          UE::Math::TRotator<double>::Vector(this_00,&local_1b8);
          UE::Math::TVector<double>::Normalize(&local_1b8,__real_3e45798ee0000000);
          local_288[0] = 0.0;
          if (((local_258.SkillProjectileTable)->ProjectileSocketName).Data.ArrayNum < 2) {
            uVar23 = SUB84(local_280._s_0.Z,0);
            uVar24 = (undefined4)((ulonglong)local_280._16_8_ >> 0x20);
            uVar25 = local_280._8_4_;
            uVar26 = local_280._12_4_;
            uVar27 = local_280._0_4_;
            uVar28 = local_280._4_4_;
            uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar22 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          }
          else {
            pUVar11 = FWeakObjectPtr::Get(local_268);
            pcVar6 = *(code **)(*(longlong *)pUVar11 + 0x528);
            if (((local_258.SkillProjectileTable)->ProjectileSocketName).Data.ArrayNum == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)
                        ((local_258.SkillProjectileTable)->ProjectileSocketName).Data.
                        AllocatorInstance.Data;
            }
            pFVar12 = ::FName::FName(&local_1c0,pwVar18);
            pauVar13 = (undefined1 (*) [16])(*pcVar6)(pUVar11,&local_1d8,*pFVar12);
            local_280._0_16_ = *pauVar13;
            uVar27 = local_280._0_4_;
            uVar28 = local_280._4_4_;
            uVar25 = local_280._8_4_;
            uVar26 = local_280._12_4_;
            dVar3 = *(double *)pauVar13[1];
            uVar23 = SUB84(dVar3,0);
            uVar24 = (undefined4)((ulonglong)dVar3 >> 0x20);
            local_280._s_0.Z = dVar3;
            if ((local_280._0_8_ == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) &&
               (local_280._8_8_ == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) {
              uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar22 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              if (dVar3 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)
              goto LAB_14bb12e18;
            }
            pUVar14 = (UDS_MovementCore *)
                      FWeakObjectPtr::Get(&(pFVar9->ShooterMovementCore).WeakPtr);
            pTVar15 = UDS_MovementCore::GetActorFootLocation(pUVar14,(TVector<double> *)&local_1d8);
            local_288[0] = (float)(dVar3 - (pTVar15->field0_0x0)._s_0.Z);
            uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar22 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          }
LAB_14bb12e18:
          if ((((double)CONCAT44(uVar28,uVar27) ==
                UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) &&
              ((double)CONCAT44(uVar26,uVar25) ==
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) &&
             ((double)CONCAT44(uVar24,uVar23) == (double)CONCAT44(uVar22,uVar21))) {
            pUVar14 = (UDS_MovementCore *)
                      FWeakObjectPtr::Get(&(pFVar9->ShooterMovementCore).WeakPtr);
            pTVar15 = UDS_MovementCore::GetActorFootLocation(pUVar14,(TVector<double> *)&local_1d8);
            local_288[0] = 140.0;
            local_280._s_0.Z = (pTVar15->field0_0x0)._s_0.Z + __real_4061800000000000;
            local_280._0_16_ = *(undefined1 (*) [16])&pTVar15->field0_0x0;
          }
          FDS_ProjectileSkillAttackInfo::ImpactProjectile
                    (&local_258,(TVector<double> *)&local_280._s_0,&local_1b8,local_288);
          if (local_258.bIsFinish_SkillAttackInfo == false) {
            iVar8 = (pFVar9->ActiveSkillAttackInfoList).ArrayNum;
            piVar1 = &(pFVar9->ActiveSkillAttackInfoList).ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x880,&(pFVar9->ActiveSkillAttackInfoList).AllocatorInstance,piVar1
                                );
            }
            (pFVar9->ActiveSkillAttackInfoList).ArrayNum = iVar8 + 1;
            FDS_ProjectileSkillAttackInfo::FDS_ProjectileSkillAttackInfo
                      ((FDS_ProjectileSkillAttackInfo *)
                       ((pFVar9->ActiveSkillAttackInfoList).AllocatorInstance.Data +
                       (longlong)iVar8 * 0x80),&local_258);
          }
          bVar7 = true;
        }
        goto LAB_14bb12b01;
      }
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 == (UDS_LogManager *)0x0) goto LAB_14bb12aff;
      pUVar10 = UDS_LogManager::GetInst();
      local_198._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_198,"UDS_ProjectileManager::ImpactProjectile",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_198.Ptr,0x3f1,L"Invalid skillAttackInfo.");
      goto LAB_14bb12aee;
    }
  }
LAB_14bb12a81:
  pUVar10 = UDS_LogManager::GetInst();
  if (pUVar10 != (UDS_LogManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"UDS_ProjectileManager::ImpactProjectile",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar10,1,Warning,local_198.Ptr,0x3eb,L"Failed to RemoveAndCopyValue(). (%d)");
LAB_14bb12aee:
    if ((void *)local_198._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_198._padding_);
    }
  }
LAB_14bb12aff:
  bVar7 = false;
LAB_14bb12b01:
  if (local_258.TargetInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.TargetInfoArray.AllocatorInstance.Data);
  }
  if (local_258.ProjectileInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.ProjectileInfoArray.AllocatorInstance.Data);
  }
  return bVar7;
}

// Init @ 14bb13c30

void __thiscall UDS_ProjectileManager::Init(UDS_ProjectileManager *this)

{
  PreloadProjectileCurve(this);
  PreloadProjectileEffect(this);
  return;
}

// OnCompletePreloadProjectileCurve @ 14bb1d1e0

void __thiscall UDS_ProjectileManager::OnCompletePreloadProjectileCurve(UDS_ProjectileManager *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  FString local_res18;
  TArray<FDS_SkillProjectileTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  FDS_SkillProjectileTableRow::GetAll(&local_38);
  iVar3 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_SkillProjectileTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar4.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar4.Data;
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x48) != 0)) {
      FSoftObjectPath::ToString((FSoftObjectPath *)(lVar2 + 0x48),&local_28);
      GetProjectileCurve(this,&local_res18);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// OnCompletePreloadProjectileEffect @ 14bb1d280

void __thiscall
UDS_ProjectileManager::OnCompletePreloadProjectileEffect(UDS_ProjectileManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FDS_ResourceEffectTableRow *pFVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [8];
  int local_res18 [2];
  TArray<FDS_SkillProjectileTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  FDS_SkillProjectileTableRow::GetAll(&local_28);
  iVar3 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar5.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_SkillProjectileTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    if ((*(longlong *)FVar5.Data != 0) &&
       (iVar2 = *(int *)(*(longlong *)FVar5.Data + 0x38), 0 < iVar2)) {
      pFVar4 = FDS_ResourceEffectTableRow::Get((longlong)iVar2,true);
      if ((pFVar4 != (FDS_ResourceEffectTableRow *)0x0) &&
         ((pFVar4->EffectPath).AssetPath.PackageName != (FName)0x0)) {
        GetProjectileEffect(this,local_res18);
      }
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// PreDestroyed @ 14bb276b0

void __thiscall UDS_ProjectileManager::PreDestroyed(UDS_ProjectileManager *this)

{
  *(undefined1 *)&this->_padding_ = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bb276b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// PreloadProjectileCurve @ 14bb27a60

void __thiscall UDS_ProjectileManager::PreloadProjectileCurve(UDS_ProjectileManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  UAssetManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  UDS_ProjectileManager *local_res10;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_a8 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [24];
  TArray<FDS_SkillProjectileTableRow_const_*,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  TSharedPtr<FStreamableHandle,1> local_40;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  FDS_SkillProjectileTableRow::GetAll(&local_60);
  iVar4 = local_60.ArrayNum;
  pFVar1 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 8;
  FVar8.Data = local_60.AllocatorInstance.Data;
  while( true ) {
    if (local_60.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_SkillProjectileTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (FVar8.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar8.Data;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x48) != 0)) {
      iVar2 = *(int *)(lVar3 + 0x60);
      _Src = *(void **)(lVar3 + 0x58);
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90._0_4_ = iVar2;
      local_a8._0_8_ = *(FName *)(lVar3 + 0x48);
      local_a8._8_8_ = *(FName *)(lVar3 + 0x50);
      if (iVar2 == 0) {
        local_90._0_4_ = 0;
        local_90._4_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,&local_98,iVar2,(int *)((longlong)&local_90 + 4));
        memcpy(local_98.Data,_Src,(longlong)iVar2);
      }
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath>
                (&local_88,(FSoftObjectPath *)local_a8);
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
    }
    FVar8.Data = FVar8.Data + 8;
  }
  pUVar5 = UAssetManager::Get();
  local_78._0_4_ = 0x4b2;
  local_78._4_4_ = 0x28;
  local_78._8_8_ =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ProjectileManager.cpp";
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78._16_8_ = "void __cdecl UDS_ProjectileManager::PreloadProjectileCurve(void)";
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_a8);
  local_90 = &local_c0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ProjectileManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ProjectileManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ProjectileManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res10);
    puVar6[4] = OnCompletePreloadProjectileCurve;
  }
  if (local_98.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a8._8_8_,(FDestructionSentinel *)local_a8);
  }
  local_a8._4_4_ = local_78._4_4_;
  local_a8._0_4_ = local_78._0_4_;
  local_a8._8_8_ = local_78._8_8_;
  local_98.Data = (FScriptContainerElement *)local_78._16_8_;
  FStreamableManager::
  RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
            (&pUVar5->StreamableManager,&local_40,&local_88,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8,0,false,false,
             &local_50,(FSourceLocation *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_78);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_78[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FSoftObjectPath *)local_88.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// PreloadProjectileEffect @ 14bb27d80

void __thiscall UDS_ProjectileManager::PreloadProjectileEffect(UDS_ProjectileManager *this)

{
  FSoftObjectPath *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FDS_ResourceEffectTableRow *pFVar8;
  UAssetManager *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  ForAnyElementType this_00;
  FSoftObjectPath *pFVar12;
  ForAnyElementType FVar13;
  undefined1 local_res10 [8];
  UDS_ProjectileManager *local_res18;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  undefined1 local_c0 [24];
  TArray<FDS_SkillProjectileTableRow_const_*,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  TSharedPtr<FStreamableHandle,1> local_68;
  source_location local_58;
  
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  FDS_SkillProjectileTableRow::GetAll(&local_a8);
  iVar5 = local_a8.ArrayNum;
  pFVar2 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 8;
  FVar13.Data = local_a8.AllocatorInstance.Data;
  do {
    if (local_a8.ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_SkillProjectileTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar13.Data == pFVar2) {
      pUVar9 = UAssetManager::Get();
      local_c0._0_4_ = 0x4c6;
      local_c0._4_4_ = 0x28;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0._8_8_ =
           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ProjectileManager.cpp";
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_c0._16_8_ = "void __cdecl UDS_ProjectileManager::PreloadProjectileEffect(void)";
      local_d8 = (undefined1  [8])0x0;
      local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                 (FWriteAccessScope *)&local_88);
      local_70 = &local_d0;
      puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ProjectileManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_ProjectileManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar10[3] = 0;
        local_res18 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_ProjectileManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
        puVar10[4] = OnCompletePreloadProjectileEffect;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      local_58._Column = local_c0._4_4_;
      local_58._Line = local_c0._0_4_;
      local_58._File = (char *)local_c0._8_8_;
      local_58._Function = (char *)local_c0._16_8_;
      FStreamableManager::
      RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                (&pUVar9->StreamableManager,&local_68,&local_e8,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_d8,0,false,false,
                 &local_98,(FSourceLocation *)&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                 (FWriteAccessScope *)local_c0);
      if ((local_d0.DelegateSize != 0) &&
         (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_d0,0,0,0x10);
        local_d0.DelegateSize = 0;
      }
      if (local_c0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_c0._8_8_,(FDestructionSentinel *)local_c0);
      }
      if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_d8);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
      if ((FSoftObjectPath *)local_e8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      return;
    }
    if ((((*(longlong *)FVar13.Data != 0) &&
         (iVar7 = *(int *)(*(longlong *)FVar13.Data + 0x38), 0 < iVar7)) &&
        (pFVar8 = FDS_ResourceEffectTableRow::Get((longlong)iVar7,true),
        FVar4.Data = local_e8.AllocatorInstance.Data, pFVar8 != (FDS_ResourceEffectTableRow *)0x0))
       && (pFVar1 = &pFVar8->EffectPath, (pFVar8->EffectPath).AssetPath.PackageName != (FName)0x0))
    {
      pFVar12 = (FSoftObjectPath *)
                (local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x20);
      this_00.Data = local_e8.AllocatorInstance.Data;
      if ((FSoftObjectPath *)local_e8.AllocatorInstance.Data != pFVar12) {
        do {
          bVar6 = FSoftObjectPath::operator==((FSoftObjectPath *)this_00.Data,pFVar1);
          if (bVar6) {
            if ((int)((longlong)this_00.Data - (longlong)FVar4.Data >> 5) != -1) goto LAB_14bb27efb;
            break;
          }
          this_00.Data = this_00.Data + 0x20;
        } while ((FSoftObjectPath *)this_00.Data != pFVar12);
      }
      iVar7 = local_e8.ArrayNum;
      if ((local_e8.AllocatorInstance.Data <= pFVar1) &&
         (pFVar1 < local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_e8.ArrayNum;
      }
      if (iVar7 == local_e8.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      local_e8.ArrayNum = iVar7 + 1;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_e8.AllocatorInstance.Data + (longlong)iVar7 * 0x20),
                 pFVar1);
    }
LAB_14bb27efb:
    FVar13.Data = FVar13.Data + 8;
  } while( true );
}

// ReceiveProjectileResponse @ 14bb2ba10

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

bool __thiscall
UDS_ProjectileManager::ReceiveProjectileResponse
          (UDS_ProjectileManager *this,ProjectileResponse *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  FDS_ProjectileSkillInfo *pFVar6;
  FDS_ProjectileSkillAttackInfo *this_00;
  undefined1 *puVar7;
  undefined1 auStackY_188 [32];
  uint uVar8;
  wchar_t *pwVar9;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar1 = (param_1->_impl_).attacker_entity_id_;
  if (*(int *)&(this->SkillInfoMap).field_0x8 != *(int *)&(this->SkillInfoMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->SkillInfoMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->SkillInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)(*(int *)&(this->SkillInfoMap).field_0x48 - 1)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->SkillInfoMap;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar4 * 0x90) == uVar1) {
          pFVar6 = TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
                   ::FindChecked((TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
                                  *)&this->SkillInfoMap,uVar1);
          if (pFVar6->bIsFinish_SkillInfo == true) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_ProjectileManager::ReceiveProjectileResponse",0x30,Yes);
            pwVar9 = L"SkillInfo is finished.";
            uVar8 = 0x42a;
            goto LAB_14bb2bb97;
          }
          if ((pFVar6->ShooterEntity == (FDS_EntityBase *)0x0) ||
             (bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                (&pFVar6->ShooterMovementCore,(void *)0x0), bVar3)) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_ProjectileManager::ReceiveProjectileResponse",0x30,Yes);
            pwVar9 = L"SkillInfo is invalid.";
            uVar8 = 0x430;
            goto LAB_14bb2bb97;
          }
          uVar8 = (param_1->_impl_).skill_attack_id_;
          if (*(int *)&(pFVar6->PendingSkillAttackInfoMap).field_0x8 ==
              *(int *)&(pFVar6->PendingSkillAttackInfoMap).field_0x34) goto LAB_14bb2bc1b;
          puVar7 = *(undefined1 **)&(pFVar6->PendingSkillAttackInfoMap).field_0x40;
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &(pFVar6->PendingSkillAttackInfoMap).field_0x38;
          }
          iVar4 = *(int *)(puVar7 + (ulonglong)
                                    (*(int *)&(pFVar6->PendingSkillAttackInfoMap).field_0x48 - 1U &
                                    uVar8) * 4);
          if (iVar4 == -1) goto LAB_14bb2bc1b;
          goto LAB_14bb2bc00;
        }
        iVar4 = *(int *)(lVar2 + 0x88 + (longlong)iVar4 * 0x90);
      } while (iVar4 != -1);
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 == (UDS_LogManager *)0x0) {
    return false;
  }
  pUVar5 = UDS_LogManager::GetInst();
  local_148._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_148,"UDS_ProjectileManager::ReceiveProjectileResponse",0x30,Yes);
  pwVar9 = L"Couldn\'t find ProjectileSkillInfo. (%llu)";
  uVar8 = 0x423;
  goto LAB_14bb2baf3;
  while (iVar4 = *(int *)(*(longlong *)&pFVar6->PendingSkillAttackInfoMap + 0x88 +
                         (longlong)iVar4 * 0x90), iVar4 != -1) {
LAB_14bb2bc00:
    if (*(uint *)(*(longlong *)&pFVar6->PendingSkillAttackInfoMap + (longlong)iVar4 * 0x90) == uVar8
       ) {
      this_00 = TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
                ::FindChecked((TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
                               *)&pFVar6->PendingSkillAttackInfoMap,uVar8);
      if (this_00->bIsFinish_SkillAttackInfo == true) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_ProjectileManager::ReceiveProjectileResponse",0x30,Yes);
        pwVar9 = L"SkillAttackInfo is finished.";
        uVar8 = 0x43d;
      }
      else {
        if ((this_00->SkillAttackTable != (FDS_SkillAttackTableRow *)0x0) &&
           (this_00->SkillProjectileTable != (FDS_SkillProjectileTableRow *)0x0)) {
          FDS_ProjectileSkillAttackInfo::AddTargetInfo(this_00,&(param_1->_impl_).projectiles_);
          return true;
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_ProjectileManager::ReceiveProjectileResponse",0x30,Yes);
        pwVar9 = L"SkillAttackInfo is invalid.";
        uVar8 = 0x443;
      }
LAB_14bb2bb97:
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar8,pwVar9);
      goto LAB_14bb2bb0a;
    }
  }
LAB_14bb2bc1b:
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 == (UDS_LogManager *)0x0) {
    return false;
  }
  pUVar5 = UDS_LogManager::GetInst();
  local_148._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_148,"UDS_ProjectileManager::ReceiveProjectileResponse",0x30,Yes);
  pwVar9 = L"Couldn\'t find ProjectileSkillAttackInfo. (%d)";
  uVar8 = 0x436;
LAB_14bb2baf3:
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar8,pwVar9);
LAB_14bb2bb0a:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// RemoveProjectileSkillInfo @ 14bb31960

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

bool __thiscall
UDS_ProjectileManager::RemoveProjectileSkillInfo(UDS_ProjectileManager *this,ulong64 *param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_ProjectileSkillInfo *pFVar3;
  ulonglong uVar4;
  FDS_ProjectileSkillAttackInfo *this_00;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  uVar4 = *param_1;
  if (*(int *)&(this->SkillInfoMap).field_0x8 != *(int *)&(this->SkillInfoMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->SkillInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SkillInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)(*(int *)&(this->SkillInfoMap).field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->SkillInfoMap;
      while (*(ulonglong *)(lVar1 + (longlong)iVar2 * 0x90) != uVar4) {
        iVar2 = *(int *)(lVar1 + 0x88 + (longlong)iVar2 * 0x90);
        if (iVar2 == -1) {
          return true;
        }
      }
      pFVar3 = TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
               ::FindChecked((TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
                              *)&this->SkillInfoMap,uVar4);
      TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_78,
                 (TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
                  *)&pFVar3->PendingSkillAttackInfoMap);
      stack0xffffffffffffffc8 = local_78._16_16_;
      local_48 = (longlong *)local_78._0_8_;
      auStack_40._0_8_ = local_78._8_8_;
      local_10 = 0;
      local_28 = local_58;
      pTStack_20 = pTStack_50;
      uVar4 = local_78._24_8_ >> 0x20;
      local_18 = (TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
                  *)&pFVar3->PendingSkillAttackInfoMap;
      if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
        do {
          this_00 = (FDS_ProjectileSkillAttackInfo *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x90);
          if (this_00->bIsImpacted == false) {
            FDS_ProjectileSkillAttackInfo::ClearSkillAttackInfo(this_00);
          }
          uStack_30 = uStack_30 & ~auStack_40._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
          uVar4 = (ulonglong)uStack_2c;
        } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
        if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
          uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34
          ;
          if (uVar5 < 4) {
            iVar2 = 1;
          }
          else {
            uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
            lVar1 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            iVar2 = 1 << ((byte)lVar1 & 0x1f);
          }
          if (((0 < (int)uVar5) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
            local_18->HashSize = iVar2;
            TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
            ::Rehash(local_18);
          }
        }
      }
    }
  }
  return true;
}

// Reset @ 14bb33150

void __thiscall UDS_ProjectileManager::Reset(UDS_ProjectileManager *this)

{
  undefined1 *puVar1;
  TMap<FString,TObjectPtr<UCurveFloat>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>_>
  *this_00;
  TMap<int,TObjectPtr<UNiagaraSystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>_>
  *this_01;
  int iVar2;
  bool bVar3;
  
  ClearProjectileSkillInfo(this);
  this_00 = &this->ProjectileCurveMap;
  bVar3 = 1 < *(int *)&(this->ProjectileCurveMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UCurveFloat>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UCurveFloat>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ProjectileCurveMap).field_0x8);
  puVar1 = &(this->ProjectileCurveMap).field_0xc;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ProjectileCurveMap).field_0x2c;
  *(undefined4 *)&(this->ProjectileCurveMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ProjectileCurveMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ProjectileCurveMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ProjectileCurveMap).field_0x48 = 1;
    TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->ProjectileEffectMap;
  bVar3 = 1 < *(int *)&(this->ProjectileEffectMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar1 = &(this->ProjectileEffectMap).field_0xc;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ProjectileEffectMap).field_0x2c;
  *(undefined4 *)&(this->ProjectileEffectMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ProjectileEffectMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ProjectileEffectMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ProjectileEffectMap).field_0x48 = 1;
    TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TObjectPtr<UNiagaraSystem>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  return;
}

// Update @ 14bb3f320

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

void __thiscall UDS_ProjectileManager::Update(UDS_ProjectileManager *this,float *param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_ProjectileSkillInfo *this_00;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
              *)&this->SkillInfoMap);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
              *)&this->SkillInfoMap;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = (FDS_ProjectileSkillInfo *)(*local_48 + 8 + (longlong)(int)uVar3 * 0x90);
      if (this_00->bIsFinish_SkillInfo == true) {
        TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,(int)uVar3);
        local_10 = '\x01';
      }
      else {
        FDS_ProjectileSkillInfo::ProcessSkillInfo(this_00,param_1);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<unsigned___int64,FDS_ProjectileSkillInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

