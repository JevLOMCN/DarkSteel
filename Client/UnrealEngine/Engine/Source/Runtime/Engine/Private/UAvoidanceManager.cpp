// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// StaticClass @ 147364a20

UClass * __cdecl UAvoidanceManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAvoidanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AvoidanceManager",
               &Z_Registration_Info_UClass_UAvoidanceManager.InnerSingleton,
               StaticRegisterNativesUAvoidanceManager,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAvoidanceManager>,
               InternalVTableHelperCtorCaller<UAvoidanceManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAvoidanceManager.InnerSingleton;
}

// UAvoidanceManager @ 14737c870

UAvoidanceManager * __thiscall
UAvoidanceManager::UAvoidanceManager(UAvoidanceManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  (this->TimerHandle_RemoveOutdatedObjects).Handle = 0;
  *(undefined8 *)&this->AvoidanceObjects = 0;
  *(undefined8 *)&(this->AvoidanceObjects).field_0x8 = 0;
  *(undefined8 *)&(this->AvoidanceObjects).field_0x20 = 0;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x28 = 0;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x34 = 0;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AvoidanceObjects).field_0x40 = 0;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x48 = 0;
  (this->NewKeyPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewKeyPool).ArrayNum = 0;
  (this->NewKeyPool).ArrayMax = 0;
  (this->AllCones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllCones).ArrayNum = 0;
  (this->AllCones).ArrayMax = 0;
  (this->EdgeProviderOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DebugUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugUIDs).ArrayNum = 0;
  (this->DebugUIDs).ArrayMax = 0;
  return this;
}

// UAvoidanceManager @ 14737c930

UAvoidanceManager * __thiscall
UAvoidanceManager::UAvoidanceManager(UAvoidanceManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  (this->TimerHandle_RemoveOutdatedObjects).Handle = 0;
  *(undefined8 *)&this->AvoidanceObjects = 0;
  *(undefined8 *)&(this->AvoidanceObjects).field_0x8 = 0;
  *(undefined8 *)&(this->AvoidanceObjects).field_0x20 = 0;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x28 = 0;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x34 = 0;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AvoidanceObjects).field_0x40 = 0;
  *(undefined4 *)&(this->AvoidanceObjects).field_0x48 = 0;
  this->bRequestedUpdateTimer = 0;
  this->bAutoPurgeOutdatedObjects = 1;
  (this->NewKeyPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewKeyPool).ArrayNum = 0;
  (this->NewKeyPool).ArrayMax = 0;
  (this->AllCones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllCones).ArrayNum = 0;
  (this->AllCones).ArrayMax = 0;
  (this->EdgeProviderOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DebugUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugUIDs).ArrayNum = 0;
  (this->DebugUIDs).ArrayMax = 0;
  this->bDebugAll = false;
  this->DefaultTimeToLive = 1.5;
  this->LockTimeAfterAvoid = 0.2;
  this->LockTimeAfterClean = 0.001;
  this->DeltaTimeToPredict = 0.5;
  this->ArtificialRadiusExpansion = 1.5;
  this->TestHeightDifference_DEPRECATED = 500.0;
  this->HeightCheckMargin = 10.0;
  return this;
}

// ~UAvoidanceManager @ 14737da70

void __thiscall UAvoidanceManager::~UAvoidanceManager(UAvoidanceManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  pFVar1 = (this->DebugUIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllCones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewKeyPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AvoidanceObjects).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AvoidanceObjects).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AvoidanceObjects);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AvoidanceDebugForAll @ 1473848c0

void __thiscall UAvoidanceManager::AvoidanceDebugForAll(UAvoidanceManager *this,bool param_1)

{
  this->bDebugAll = param_1;
  return;
}

// AvoidanceDebugForUID @ 1473848d0

void __thiscall
UAvoidanceManager::AvoidanceDebugForUID(UAvoidanceManager *this,int param_1,bool param_2)

{
  int local_res10 [6];
  
  local_res10[0] = param_1;
  if (param_2) {
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&this->DebugUIDs,local_res10);
    return;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Remove(&this->DebugUIDs,local_res10);
  return;
}

// AvoidanceSystemToggle @ 147384910

void __cdecl UAvoidanceManager::AvoidanceSystemToggle(bool param_1)

{
  bSystemActive = param_1;
  return;
}

// Exec_Dev @ 147391180

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
UAvoidanceManager::Exec_Dev
          (UAvoidanceManager *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"AvoidanceDisplayAll",true);
  if (bVar1) {
    *(bool *)&(this->EdgeProviderOb).WeakPtr.ObjectIndex =
         (char)(this->EdgeProviderOb).WeakPtr.ObjectIndex == '\0';
  }
  else {
    bVar1 = FParse::Command(local_res18,L"AvoidanceSystemToggle",true);
    if (bVar1) {
      bSystemActive = bSystemActive == false;
      FOutputDevice::LogfImpl(param_3,L"Avoidance system: %s");
      return true;
    }
  }
  return false;
}

// GetAvoidanceVelocity @ 1473980b0

TVector<double> * __thiscall
UAvoidanceManager::GetAvoidanceVelocity
          (UAvoidanceManager *this,TVector<double> *__return_storage_ptr__,
          FNavAvoidanceData *param_1,float param_2)

{
  GetAvoidanceVelocity_Internal(this,__return_storage_ptr__,param_1,param_2,(int *)0x0);
  return __return_storage_ptr__;
}

// GetAvoidanceVelocityForComponent @ 1473980e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
UAvoidanceManager::GetAvoidanceVelocityForComponent
          (UAvoidanceManager *this,TVector<double> *__return_storage_ptr__,
          UCharacterMovementComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  IRVOAvoidanceInterface *pIVar4;
  int local_res8 [2];
  FNavAvoidanceData local_68;
  
  if (param_1 == (UCharacterMovementComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovementComp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\AvoidanceManager.cpp"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pIVar4 = (IRVOAvoidanceInterface *)&param_1->field_0x190;
  if (param_1 == (UCharacterMovementComponent *)0x0) {
    pIVar4 = (IRVOAvoidanceInterface *)0x0;
  }
  FNavAvoidanceData::FNavAvoidanceData(&local_68,this,pIVar4);
  local_res8[0] = param_1->AvoidanceUID;
  GetAvoidanceVelocity_Internal
            (this,__return_storage_ptr__,&local_68,this->DeltaTimeToPredict,local_res8);
  return __return_storage_ptr__;
}

// GetAvoidanceVelocityForComponent @ 147398190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UAvoidanceManager::GetAvoidanceVelocityForComponent
          (UAvoidanceManager *this,TVector<double> *__return_storage_ptr__,
          UMovementComponent *param_1)

{
  undefined8 uVar1;
  UClass *pUVar2;
  IRVOAvoidanceInterface *pIVar3;
  int local_res18 [4];
  FNavAvoidanceData local_68;
  
  if (param_1 != (UMovementComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (pIVar3 != (IRVOAvoidanceInterface *)0x0) {
      FNavAvoidanceData::FNavAvoidanceData(&local_68,this,pIVar3);
      local_res18[0] = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
      GetAvoidanceVelocity_Internal
                (this,__return_storage_ptr__,&local_68,this->DeltaTimeToPredict,local_res18);
      return __return_storage_ptr__;
    }
  }
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetAvoidanceVelocityIgnoringUID @ 147398250

TVector<double> * __thiscall
UAvoidanceManager::GetAvoidanceVelocityIgnoringUID
          (UAvoidanceManager *this,TVector<double> *__return_storage_ptr__,
          FNavAvoidanceData *param_1,float param_2,int param_3)

{
  GetAvoidanceVelocity_Internal(this,__return_storage_ptr__,param_1,param_2,&param_3);
  return __return_storage_ptr__;
}

// GetAvoidanceVelocity_Internal @ 147398280

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

TVector<double> * __thiscall
UAvoidanceManager::GetAvoidanceVelocity_Internal
          (UAvoidanceManager *this,TVector<double> *__return_storage_ptr__,
          FNavAvoidanceData *param_1,float param_2,int *param_3)

{
  TArray<FVelocityAvoidanceCone,TSizedDefaultAllocator<32>_> *pTVar1;
  ulonglong uVar2;
  UWorld *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  TAlignedBytes<8,8> TVar13;
  double dVar14;
  double dVar15;
  uchar _X [8];
  bool bVar16;
  bool bVar17;
  UAvoidanceManager *pUVar18;
  TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
  *pTVar19;
  TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
  *pTVar20;
  bool bVar21;
  bool bVar22;
  UClass *pUVar23;
  TVector<double> *pTVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<_protected:_struct_UE::Math::TVector<double>___cdecl_UAvoidanceManager::GetAvoidanceVelocity_Internal(FNavAvoidanceData_const_&,float,int_*)_::_66_::FStat_STAT_AIAvoidanceEdgeCollect>
  FVar26;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar27;
  int *piVar28;
  longlong lVar29;
  int iVar30;
  FName FVar31;
  double *pdVar32;
  uint uVar33;
  ForElementType<unsigned_int> FVar34;
  uint *puVar35;
  FNameEntryId FVar36;
  uint uVar37;
  FNameEntryId FVar38;
  uint uVar39;
  float fVar40;
  uint uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  double dVar53;
  undefined8 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar57 [16];
  uint uVar58;
  undefined1 auStackY_4c8 [32];
  undefined1 local_467 [3];
  uint local_464;
  FColor_u_0 local_460;
  float local_45c;
  uint local_458;
  ForElementType<unsigned_int> local_450;
  FName local_448;
  FColor_u_0 local_440;
  int local_43c;
  UWorld *local_438;
  UAvoidanceManager *local_430;
  TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
  *local_428;
  FStatMessage local_420;
  double local_410;
  TVector<double>_u_0 local_408;
  TArray<FNavEdgeSegment,TSizedDefaultAllocator<32>_> local_3f0;
  FName local_3e0;
  uchar local_3d0 [8];
  double local_3c8;
  TVector<double> *local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
  *local_3a0;
  int iStack_398;
  uint uStack_394;
  undefined1 *local_390;
  undefined4 uStack_388;
  uint uStack_384;
  uint local_380;
  uint uStack_37c;
  int iStack_378;
  undefined4 uStack_374;
  double local_370;
  double local_368;
  int local_360;
  undefined1 local_358 [16];
  double local_348;
  undefined1 local_340 [16];
  double local_330;
  double local_328;
  double local_320;
  LARGE_INTEGER local_318;
  TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
  *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_308;
  undefined8 uStack_2e8;
  undefined1 local_2d8 [16];
  double local_2c8;
  undefined1 local_2b8 [16];
  double local_2a8;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  double local_258;
  TVector<double>_u_0 local_250;
  double local_228 [3];
  undefined8 local_210;
  undefined8 local_1f8;
  undefined8 local_1e0;
  undefined8 local_1c8;
  undefined8 local_1b0;
  undefined8 local_198;
  undefined8 local_180;
  double local_178;
  FName local_170;
  FName local_168 [2];
  double local_158;
  double local_150;
  double local_128;
  double dStack_120;
  double local_118;
  UAvoidanceManager *pUStack_110;
  TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
  *local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  if (!bSystemActive) {
LAB_1473995b6:
    dVar14 = (param_1->Velocity).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Velocity).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar14;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->Velocity).field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  if (param_2 <= 0.0) {
    dVar14 = (param_1->Velocity).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Velocity).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar14;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->Velocity).field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  pUVar3 = (UWorld *)this->_padding_;
  local_368 = (double)param_2;
  dVar15 = local_368 * (param_1->Velocity).field0_0x0._s_0.Y;
  TVar13.Pad = (uchar  [8])(local_368 * (param_1->Velocity).field0_0x0._s_0.X);
  dVar14 = local_368 * (param_1->Velocity).field0_0x0._s_0.Z;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = dVar15 * dVar15 + (double)TVar13.Pad * (double)TVar13.Pad;
  auVar57 = sqrtpd(unaff_XMM13,auVar57);
  if (pUVar3 == (UWorld *)0x0) goto LAB_1473995b6;
  local_45c = param_2;
  local_430 = this;
  local_3d0 = TVar13.Pad;
  local_3c8 = dVar14;
  local_3c0 = __return_storage_ptr__;
  local_370 = auVar57._0_8_;
  local_320 = dVar15;
  pUVar23 = Z_Construct_UClass_UWorld_NoRegister();
  iVar30 = (int)pUVar23->_padding_;
  if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar30) ||
     (lVar29 = *(longlong *)(pUVar3->_padding_ + 0x30),
     (longlong *)*(undefined1 **)(lVar29 + (longlong)iVar30 * 8) != &pUVar23->_padding_))
  goto LAB_1473995b6;
  local_328 = pUVar3->TimeSeconds;
  local_458 = (uint)CONCAT71((int7)((ulonglong)lVar29 >> 8),1);
  if ((this->bDebugAll != false) ||
     ((param_3 != (int *)0x0 && (bVar21 = IsDebugOnForUID(this,*param_3), bVar21)))) {
    bVar21 = true;
  }
  else {
    bVar21 = false;
  }
  if (auVar57._0_8_ < __real_3f847ae140000000) goto LAB_1473995b6;
  uVar58 = (this->AllCones).ArrayMax;
  pTVar1 = &this->AllCones;
  if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
  }
  piVar28 = &(this->AllCones).ArrayMax;
  FVar36.Value = 0;
  (this->AllCones).ArrayNum = 0;
  if (*piVar28 != uVar58) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar58,&pTVar1->AllocatorInstance,0,piVar28);
  }
  local_428 = &this->AvoidanceObjects;
  uVar58 = *(uint *)&(this->AvoidanceObjects).field_0x28;
  local_450 = (ForElementType<unsigned_int>)&(this->AvoidanceObjects).field_0x10;
  uStack_394 = 1;
  uStack_384 = FVar36.Value;
  local_380 = FVar36.Value;
  iStack_398 = 0;
  if (uVar58 != 0) {
    puVar35 = *(uint **)&(this->AvoidanceObjects).field_0x20;
    if (puVar35 == (uint *)0x0) {
      puVar35 = (uint *)local_450;
    }
    uVar37 = *puVar35;
    local_380 = 0;
    while (uVar37 == 0) {
      iStack_398 = iStack_398 + 1;
      local_380 = local_380 + 0x20;
      uStack_384 = uVar58;
      if ((int)(((int)(uVar58 - 1) >> 0x1f & 0x1fU) + (uVar58 - 1)) >> 5 < iStack_398)
      goto LAB_147398504;
      uVar37 = puVar35[iStack_398];
    }
    uStack_394 = ~(uVar37 - 1) & uVar37;
    uVar2 = (ulonglong)uStack_394 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_360 = (int)lVar29;
    uStack_384 = (local_380 - 1) + local_360;
    if ((int)uVar58 < (int)uStack_384) {
      uStack_384 = uVar58;
    }
  }
LAB_147398504:
  iStack_378 = *(int *)&(this->AvoidanceObjects).field_0x8 -
               *(int *)&(this->AvoidanceObjects).field_0x34;
  local_464 = *(uint *)&(this->AvoidanceObjects).field_0x28;
  TStack_308._padding_ = CONCAT44(uStack_394,iStack_398);
  uVar37 = local_464 & 0xffffffe0;
  uStack_388 = 0xffffffff;
  TStack_308.CurrentBitIndex = uStack_384;
  TStack_308.UnvisitedBitMask = 0xffffffff;
  iVar30 = (int)local_464 >> 5;
  bVar27 = (byte)local_464;
  TStack_308._28_4_ = uStack_384;
  TStack_308.BaseBitIndex = local_380;
  uStack_2e8 = CONCAT44(uStack_374,iStack_378);
  local_438 = pUVar3;
  local_3a0 = local_428;
  local_390 = (undefined1 *)local_450;
  uStack_37c = uStack_384;
  local_310 = local_428;
  TStack_308.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_450;
  if ((((int)local_464 < 0) || ((int)uVar58 < (int)local_464)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar22)) {
    pcVar5 = (code *)swi(3);
    pTVar24 = (TVector<double> *)(*pcVar5)();
    return pTVar24;
  }
  pTVar19 = local_428;
  pUVar18 = local_430;
  uVar58 = *(int *)((longlong)local_450 + 0x18);
  if (local_464 != uVar58) {
    FVar34 = local_450;
    if (*(ForElementType<unsigned_int> *)((longlong)local_450 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar34 = *(ForElementType<unsigned_int> *)((longlong)local_450 + 0x10);
    }
    uVar33 = -1 << (bVar27 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar30 * 4);
    while (uVar33 == 0) {
      iVar30 = iVar30 + 1;
      uVar37 = uVar37 + 0x20;
      local_464 = uVar58;
      if ((int)(((int)(uVar58 - 1) >> 0x1f & 0x1fU) + (uVar58 - 1)) >> 5 < iVar30)
      goto LAB_147398620;
      uVar33 = *(uint *)((longlong)FVar34 + (longlong)iVar30 * 4);
    }
    uVar2 = (ulonglong)(~(uVar33 - 1) & uVar33) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_43c = (int)lVar29;
    local_464 = (uVar37 - 1) + local_43c;
    if ((int)uVar58 < (int)local_464) {
      local_464 = uVar58;
    }
  }
LAB_147398620:
  uVar33 = local_464;
  dVar45 = 0.0;
  uVar55 = SUB84(__real_3ff0000000000000,0);
  uVar56 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar46 = SUB84(__real_3e45798ee0000000,0);
  uVar48 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  fVar47 = __real_3f800000;
  uVar58 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar37 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  while( true ) {
    pTVar20 = local_310;
    if (*(int *)&local_310->field_0x8 - *(int *)&local_310->field_0x34 != (int)uStack_2e8) {
      local_467[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_467);
    }
    dVar9 = local_320;
    if (((TStack_308.CurrentBitIndex == uVar33) &&
        ((ForElementType<unsigned_int>)TStack_308.Array == local_450)) && (pTVar20 == pTVar19))
    break;
    piVar28 = (int *)((longlong)TStack_308.CurrentBitIndex * 0x68 + *(longlong *)pTVar20);
    if ((((param_3 == (int *)0x0) || (*param_3 != *piVar28)) && (0.0 < (float)piVar28[0xe])) &&
       (((param_1->GroupsToAvoid & piVar28[0x14]) != 0 &&
        ((param_1->GroupsToIgnore & piVar28[0x14]) == 0)))) {
      dVar42 = *(double *)(piVar28 + 2) - (param_1->Center).field0_0x0._s_0.X;
      dVar44 = *(double *)(piVar28 + 4) - (param_1->Center).field0_0x0._s_0.Y;
      if ((dVar44 * dVar44 + dVar42 * dVar42 <=
           (double)(param_1->TestRadius2D * param_1->TestRadius2D)) &&
         ((dVar53 = *(double *)(piVar28 + 6) - (param_1->Center).field0_0x0._s_0.Z,
          uVar39 = SUB84(dVar53,0) & uVar58, uVar41 = (uint)((ulonglong)dVar53 >> 0x20) & uVar37,
          dVar6 = (double)(param_1->HalfHeight + (float)piVar28[0x10] + pUVar18->HeightCheckMargin),
          (double)CONCAT44(uVar41,uVar39) < dVar6 || (double)CONCAT44(uVar41,uVar39) == dVar6 &&
          (0.0 < dVar42 * (double)TVar13.Pad + dVar15 * dVar44 + dVar14 * dVar53)))) {
        local_330 = (param_1->Center).field0_0x0._s_0.Z;
        dVar44 = *(double *)(piVar28 + 2) - (param_1->Center).field0_0x0._s_0.X;
        dVar42 = *(double *)(piVar28 + 4) - (param_1->Center).field0_0x0._s_0.Y;
        local_3a8 = 0.0;
        dVar14 = dVar42 * dVar42 + dVar44 * dVar44;
        uVar54 = dVar44;
        uVar12 = dVar42;
        if (dVar14 == (double)CONCAT44(uVar56,uVar55)) {
LAB_14739885b:
          local_258 = 0.0;
          local_358._8_4_ = (int)uVar12;
          local_358._0_8_ = uVar54;
          local_358._12_4_ = (int)((ulonglong)uVar12 >> 0x20);
        }
        else {
          if ((double)CONCAT44(uVar48,uVar46) <= dVar14) {
            local_150 = (double)CONCAT44(uVar56,uVar55) / SQRT(dVar14);
            uVar54 = dVar44 * local_150;
            uVar12 = dVar42 * local_150;
            goto LAB_14739885b;
          }
          local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_358._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_358._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
        TVar13.Pad = local_3d0;
        dVar14 = local_3c8;
        local_348 = local_258;
        if ((((double)uVar54 != 0.0) || ((double)uVar12 != 0.0)) || (local_258 != 0.0)) {
          if (local_328 < *(double *)(piVar28 + 0x12)) {
LAB_14739893f:
            dVar6 = (double)local_45c * *(double *)(piVar28 + 8);
            dVar53 = (double)local_45c * *(double *)(piVar28 + 10);
            dVar15 = (double)local_45c * *(double *)(piVar28 + 0xc);
          }
          else {
            if (0.0 <= *(double *)(piVar28 + 8) * dVar44 + *(double *)(piVar28 + 10) * dVar42)
            goto LAB_14739893f;
            fVar40 = ((fVar47 - param_1->Weight) + (float)piVar28[0x11]) * __real_3f000000;
            dVar53 = (double)fVar40;
            dVar11 = (double)(fVar47 - fVar40);
            dVar6 = (dVar53 * *(double *)(piVar28 + 8) +
                    dVar11 * (param_1->Velocity).field0_0x0._s_0.X) * local_368;
            dVar15 = (dVar11 * (param_1->Velocity).field0_0x0._s_0.Z +
                     dVar53 * *(double *)(piVar28 + 0xc)) * local_368;
            dVar53 = (dVar53 * *(double *)(piVar28 + 10) +
                     dVar11 * (param_1->Velocity).field0_0x0._s_0.Y) * local_368;
          }
          dVar11 = (double)(param_1->Radius + (float)piVar28[0xf]);
          dVar10 = (double)uVar54 * dVar11;
          dVar11 = dVar11 * (double)CONCAT44((uint)((ulonglong)uVar12 >> 0x20) ^
                                             __xmm_80000000000000008000000000000000._4_4_,
                                             (uint)uVar12 ^
                                             (uint)__xmm_80000000000000008000000000000000);
          dVar43 = dVar10 + dVar42;
          dVar8 = dVar11 + dVar44;
          dVar7 = (dVar15 + __real_4059000000000000) - dVar15;
          local_128 = dVar43 * dVar7;
          dVar7 = dVar8 * dVar7;
          uVar58 = SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar37 = (uint)((ulonglong)dVar7 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          dStack_120 = (double)CONCAT44(uVar37,uVar58);
          local_340._8_8_ = dStack_120;
          local_340._0_8_ = local_128;
          local_330 = ((dVar43 + dVar53) - dVar53) * dVar8 - ((dVar8 + dVar6) - dVar6) * dVar43;
          dVar7 = local_128 * local_128 +
                  (double)CONCAT44(uVar37,uVar58) * (double)CONCAT44(uVar37,uVar58) +
                  local_330 * local_330;
          if (dVar7 == __real_3ff0000000000000) {
            local_2d8._8_4_ = uVar58;
            local_2d8._0_8_ = local_128;
            local_2d8._12_4_ = uVar37;
            local_340._8_4_ = uVar58;
            local_340._12_4_ = uVar37;
            local_2c8 = local_330;
          }
          else if (__real_3e45798ee0000000 <= dVar7) {
            local_158 = __real_3ff0000000000000 / SQRT(dVar7);
            local_128 = local_128 * local_158;
            dStack_120 = (double)CONCAT44(uVar37,uVar58) * local_158;
            local_2c8 = local_330 * local_158;
            local_2d8._8_8_ = dStack_120;
            local_2d8._0_8_ = local_128;
          }
          else {
            local_2c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_2d8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_2d8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
          dVar44 = dVar44 - dVar11;
          dVar42 = dVar42 - dVar10;
          local_430 = (UAvoidanceManager *)
                      (local_128 * dVar6 + dStack_120 * dVar53 + local_2c8 * dVar15);
          dVar11 = (dVar15 - __real_4059000000000000) - dVar15;
          dVar7 = dVar44 * dVar11;
          local_3b8._8_4_ = SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000;
          local_3b8._12_4_ =
               (uint)((ulonglong)dVar7 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          local_428 = (TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
                       *)(dVar42 * dVar11);
          local_3a8 = ((dVar42 + dVar53) - dVar53) * dVar44 - ((dVar44 + dVar6) - dVar6) * dVar42;
          local_3b8._0_8_ = local_428;
          dVar44 = (double)local_428 * (double)local_428 +
                   (double)CONCAT44(local_3b8._12_4_,local_3b8._8_4_) *
                   (double)CONCAT44(local_3b8._12_4_,local_3b8._8_4_) + local_3a8 * local_3a8;
          if (dVar44 == __real_3ff0000000000000) {
            local_2b8._8_4_ = local_3b8._8_4_;
            local_2b8._0_8_ = local_428;
            local_2b8._12_4_ = local_3b8._12_4_;
            local_108 = local_428;
            dStack_100 = (double)CONCAT44(local_3b8._12_4_,local_3b8._8_4_);
            local_2a8 = local_3a8;
          }
          else if (__real_3e45798ee0000000 <= dVar44) {
            local_178 = __real_3ff0000000000000 / SQRT(dVar44);
            dStack_100 = (double)CONCAT44(local_3b8._12_4_,local_3b8._8_4_) * local_178;
            local_108 = (TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
                         *)((double)local_428 * local_178);
            local_2a8 = local_3a8 * local_178;
            local_2b8._8_8_ = dStack_100;
            local_2b8._0_8_ = local_108;
          }
          else {
            local_2b8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_2b8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_108 = (TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
                         *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
          dStack_f0 = (double)local_108 * dVar6 + dStack_100 * dVar53 + local_2a8 * dVar15;
          if ((0.0 < (local_320 * dStack_120 + local_128 * (double)local_3d0 + local_3c8 * local_2c8
                     ) - (double)local_430) &&
             (local_458 = local_458 & 0xff,
             0.0 < (local_320 * dStack_100 + (double)local_108 * (double)local_3d0 +
                   local_3c8 * local_2a8) - dStack_f0)) {
            local_458 = 0;
          }
          pFVar4 = (pTVar1->AllocatorInstance).Data;
          local_118 = local_2c8;
          pUStack_110 = local_430;
          local_f8 = local_2a8;
          if (((pFVar4 <= (FScriptContainerElement *)&local_128) &&
              ((FScriptContainerElement *)&local_128 <
               pFVar4 + (longlong)(this->AllCones).ArrayMax * 0x40)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar5 = (code *)swi(3);
            pTVar24 = (TVector<double> *)(*pcVar5)();
            return pTVar24;
          }
          iVar30 = (this->AllCones).ArrayNum;
          if (iVar30 == (this->AllCones).ArrayMax) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1040,&pTVar1->AllocatorInstance,&(this->AllCones).ArrayMax);
          }
          uVar37 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar58 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          fVar47 = __real_3f800000;
          uVar55 = SUB84(__real_3ff0000000000000,0);
          uVar56 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          uVar46 = SUB84(__real_3e45798ee0000000,0);
          uVar48 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          (this->AllCones).ArrayNum = iVar30 + 1;
          pFVar4 = (pTVar1->AllocatorInstance).Data;
          lVar29 = (longlong)iVar30 * 0x40;
          *(double *)(pFVar4 + lVar29) = local_128;
          *(double *)(pFVar4 + lVar29 + 8) = dStack_120;
          *(double *)(pFVar4 + lVar29 + 0x10) = local_118;
          *(UAvoidanceManager **)(pFVar4 + lVar29 + 0x10 + 8) = pUStack_110;
          *(TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
            **)(pFVar4 + lVar29 + 0x20) = local_108;
          *(double *)(pFVar4 + lVar29 + 0x20 + 8) = dStack_100;
          *(double *)(pFVar4 + lVar29 + 0x30) = local_f8;
          *(double *)(pFVar4 + lVar29 + 0x30 + 8) = dStack_f0;
          dVar15 = dVar9;
        }
      }
    }
    TStack_308.UnvisitedBitMask = TStack_308.UnvisitedBitMask & ~TStack_308._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_308);
  }
  __return_storage_ptr__ = local_3c0;
  if ((char)local_458 != '\0') goto LAB_1473995b6;
  local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f0.ArrayNum = 0;
  local_3f0.ArrayMax = 0;
  bVar22 = FWeakObjectPtr::IsValid(&(pUVar18->EdgeProviderOb).WeakPtr);
  if (!bVar22) goto LAB_147399086;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_AIAvoidanceEdgeCollect ==
        (FThreadSafeStaticStat<_protected:_struct_UE::Math::TVector<double>___cdecl_UAvoidanceManager::GetAvoidanceVelocity_Internal(FNavAvoidanceData_const_&,float,int_*)_::_66_::FStat_STAT_AIAvoidanceEdgeCollect>
         )0x0) {
      pFVar25 = ::FName::FName(&local_170,"STAT_AIAvoidanceEdgeCollect");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AIAvoidanceEdgeCollect,*pFVar25,
                 L"Avoidance: collect nav edges","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar26 = StatPtr_STAT_AIAvoidanceEdgeCollect;
  if (StatPtr_STAT_AIAvoidanceEdgeCollect ==
      (FThreadSafeStaticStat<_protected:_struct_UE::Math::TVector<double>___cdecl_UAvoidanceManager::GetAvoidanceVelocity_Internal(FNavAvoidanceData_const_&,float,int_*)_::_66_::FStat_STAT_AIAvoidanceEdgeCollect>
       )0x0) {
    pFVar25 = ::FName::FName(local_168,"STAT_AIAvoidanceEdgeCollect");
    FVar26 = (FThreadSafeStaticStat<_protected:_struct_UE::Math::TVector<double>___cdecl_UAvoidanceManager::GetAvoidanceVelocity_Internal(FNavAvoidanceData_const_&,float,int_*)_::_66_::FStat_STAT_AIAvoidanceEdgeCollect>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AIAvoidanceEdgeCollect,*pFVar25
                          ,L"Avoidance: collect nav edges","STATGROUP_AI","STATCAT_Advanced",L"AI",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar26;
  bVar22 = false;
  bVar17 = false;
  local_3e0.ComparisonIndex.Value = 0;
  local_3e0.Number = 0;
  FVar38 = FVar31.ComparisonIndex.Value;
  uVar58 = FVar31.Number;
  if ((FVar38.Value == 0) && (uVar58 == 0)) {
LAB_147398f99:
    bVar16 = false;
    FVar31 = local_3e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_440.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_440._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar22 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_448.ComparisonIndex.Value = FVar38.Value;
        local_448.Number = uVar58;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_448,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\AvoidanceManager.cpp"
                   ,0x20c);
        bVar22 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147398f99;
    local_448.ComparisonIndex.Value = FVar38.Value;
    local_448.Number = uVar58;
    local_3e0 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar16 = true;
    FVar36.Value = local_3e0.ComparisonIndex.Value;
  }
  (**(code **)((longlong)*pUVar18->EdgeProviderInterface + 0x10))
            (pUVar18->EdgeProviderInterface,param_1,param_1->TestRadius2D,&local_3f0);
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar16) && (FVar31 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_420.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
      local_420.NameAndInfo.Index.Value = FVar36.Value;
      QueryPerformanceCounter(&local_318);
      local_420.StatData.Pad[4] = '\0';
      local_420.StatData.Pad[5] = '\0';
      local_420.StatData.Pad[6] = '\0';
      local_420.StatData.Pad[7] = '\0';
      local_420.StatData.Pad[0] = local_318.s.LowPart._0_1_;
      local_420.StatData.Pad[1] = local_318.s.LowPart._1_1_;
      local_420.StatData.Pad[2] = local_318.s.LowPart._2_1_;
      local_420.StatData.Pad[3] = local_318.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_420);
      piVar28 = &this_00->ScopeCount;
      *piVar28 = *piVar28 + -1;
      if (*piVar28 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_147399086:
  uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar47 = local_45c;
  if ((pUVar18->AllCones).ArrayNum != 0) {
    uVar49 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
    uVar50 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20)
    ;
    uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uVar52 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20)
    ;
    dVar9 = dVar15 * dVar15 + (double)TVar13.Pad * (double)TVar13.Pad;
    if (dVar9 == (double)CONCAT44(uVar56,uVar55)) {
      local_408._s_0.Z = 0.0;
      uVar12 = TVar13.Pad;
    }
    else if ((double)CONCAT44(uVar48,uVar46) <= dVar9) {
      local_408._s_0.Z = 0.0;
      uVar12 = ((double)CONCAT44(uVar56,uVar55) / SQRT(dVar9)) * (double)TVar13.Pad;
    }
    else {
      local_408._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    _X = __real_bff0000000000000;
    if (((double)__real_bff0000000000000 <= (double)uVar12) &&
       (_X = (uchar  [8])uVar12, (double)CONCAT44(uVar56,uVar55) <= (double)uVar12)) {
      _X[4] = (char)uVar56;
      _X[5] = (char)((uint)uVar56 >> 8);
      _X[6] = (char)((uint)uVar56 >> 0x10);
      _X[7] = (char)((uint)uVar56 >> 0x18);
      _X[0] = (char)uVar55;
      _X[1] = (char)((uint)uVar55 >> 8);
      _X[2] = (char)((uint)uVar55 >> 0x10);
      _X[3] = (char)((uint)uVar55 >> 0x18);
    }
    acos((double)_X);
    local_408._s_0.Z = (double)uVar54;
    __libm_sse2_sincos_();
    local_228[0] = 0.0;
    __libm_sse2_sincos_();
    local_210 = 0;
    __libm_sse2_sincos_();
    local_1f8 = 0;
    __libm_sse2_sincos_();
    local_1e0 = 0;
    __libm_sse2_sincos_();
    local_1c8 = 0;
    __libm_sse2_sincos_();
    local_1b0 = 0;
    __libm_sse2_sincos_();
    local_198 = 0;
    __libm_sse2_sincos_();
    dVar9 = local_370;
    pdVar32 = local_228;
    local_180 = 0;
    lVar29 = 8;
    do {
      local_298._s_0.Y = dVar9 * pdVar32[-1];
      local_298._s_0.X = dVar9 * pdVar32[-2];
      local_298._s_0.Z = dVar9 * *pdVar32;
      if ((dVar45 < (dVar15 * local_298._s_0.Y + (double)TVar13.Pad * local_298._s_0.X +
                    dVar14 * local_298._s_0.Z) *
                    (local_298._s_0.Y * local_298._s_0.Y + local_298._s_0.X * local_298._s_0.X +
                    local_298._s_0.Z * local_298._s_0.Z)) &&
         ((local_3f0.ArrayNum < 1 ||
          (bVar22 = AvoidsNavEdges(&param_1->Center,(TVector<double> *)&local_298._s_0,&local_3f0,
                                   param_1->HalfHeight), bVar22)))) {
        AvoidCones((TVector<double> *)&local_280._s_0,&pUVar18->AllCones,
                   &UE::Math::TVector<double>::ZeroVector,(TVector<double> *)&local_298._s_0,
                   (pUVar18->AllCones).ArrayNum);
        dVar42 = (double)CONCAT44(local_280._12_4_,local_280._8_4_);
        dVar44 = (double)CONCAT44(local_280._4_4_,local_280._0_4_);
        dVar44 = (dVar42 * dVar42 + dVar44 * dVar44 + local_280._s_0.Z * local_280._s_0.Z) *
                 (dVar15 * dVar42 + dVar44 * (double)TVar13.Pad + dVar14 * local_280._s_0.Z);
        if (dVar45 < dVar44) {
          uVar49 = local_280._0_4_;
          uVar50 = local_280._4_4_;
          uVar51 = local_280._8_4_;
          uVar52 = local_280._12_4_;
          dVar45 = dVar44;
          uVar54 = local_280._s_0.Z;
        }
      }
      fVar47 = local_45c;
      pdVar32 = pdVar32 + 3;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    local_420.StatData.Pad[4] = (char)uVar50;
    local_420.StatData.Pad[5] = (char)((uint)uVar50 >> 8);
    local_420.StatData.Pad[6] = (char)((uint)uVar50 >> 0x10);
    local_420.StatData.Pad[7] = (char)((uint)uVar50 >> 0x18);
    local_420.StatData.Pad[0] = (char)uVar49;
    local_420.StatData.Pad[1] = (char)((uint)uVar49 >> 8);
    local_420.StatData.Pad[2] = (char)((uint)uVar49 >> 0x10);
    local_420.StatData.Pad[3] = (char)((uint)uVar49 >> 0x18);
    local_420.NameAndInfo.Index.Value = uVar51;
    local_420.NameAndInfo.Number = uVar52;
    local_410 = (double)uVar54;
    local_408._s_0.Z = (double)uVar54;
    if (bVar21) {
      dVar14 = (param_1->Center).field0_0x0._s_0.X;
      dVar15 = (param_1->Center).field0_0x0._s_0.Y;
      local_460.Bits = 0xff40ff40;
      dVar45 = (double)CONCAT44(uVar56,uVar55) / (double)local_45c;
      local_250._s_0.X = dVar45 * (double)CONCAT44(uVar50,uVar49) + dVar14;
      local_408._s_0.X = dVar14 + (param_1->Velocity).field0_0x0._s_0.X;
      local_250._s_0.Y = dVar45 * (double)CONCAT44(uVar52,uVar51) + dVar15;
      local_408._s_0.Y = dVar15 + (param_1->Velocity).field0_0x0._s_0.Y;
      dVar14 = (param_1->Center).field0_0x0._s_0.Z;
      local_250._s_0.Z = dVar45 * (double)uVar54 + dVar14;
      local_408._s_0.Z = dVar14 + (param_1->Velocity).field0_0x0._s_0.Z;
      DrawDebugDirectionalArrow
                (local_438,(TVector<double> *)&local_408._s_0,(TVector<double> *)&local_250._s_0,
                 __real_42960000,(FColor *)&local_460._s_0,true,__real_40000000,'\x02',0.0);
    }
    dVar15 = (double)CONCAT44(local_420.NameAndInfo.Number,local_420.NameAndInfo.Index.Value);
    TVar13.Pad = local_420.StatData.Pad;
    dVar14 = local_410;
  }
  pTVar24 = local_3c0;
  dVar45 = (double)CONCAT44(uVar56,uVar55) / (double)fVar47;
  (local_3c0->field0_0x0)._s_0.X = dVar45 * (double)TVar13.Pad;
  (local_3c0->field0_0x0)._s_0.Y = dVar45 * dVar15;
  (local_3c0->field0_0x0)._s_0.Z = dVar45 * dVar14;
  if (local_3f0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return local_3c0;
  }
  FMemory::Free(local_3f0.AllocatorInstance.Data);
  return pTVar24;
}

// GetNewAvoidanceUID @ 14739e860

int __thiscall UAvoidanceManager::GetNewAvoidanceUID(UAvoidanceManager *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = *(int *)&(this->AvoidanceObjects).field_0x8 - *(int *)&(this->AvoidanceObjects).field_0x34
  ;
  iVar5 = (this->NewKeyPool).ArrayNum;
  if (iVar5 != 0) {
    uVar7 = iVar5 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar5) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = (this->NewKeyPool).ArrayNum;
    uVar8 = iVar5 - 1;
    iVar4 = *(int *)((this->NewKeyPool).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
    uVar6 = 0;
    if ((int)uVar8 < iVar5) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = (this->NewKeyPool).ArrayNum + ~uVar8;
    _Dst = (this->NewKeyPool).AllocatorInstance.Data + (longlong)(int)uVar8 * 4;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 4,(longlong)iVar5 << 2);
    }
    piVar1 = &(this->NewKeyPool).ArrayNum;
    *piVar1 = *piVar1 + -1;
  }
  return iVar4;
}

// GetObjectCount @ 14739e9a0

int __thiscall UAvoidanceManager::GetObjectCount(UAvoidanceManager *this)

{
  return *(int *)&(this->AvoidanceObjects).field_0x8 - *(int *)&(this->AvoidanceObjects).field_0x34;
}

// GetPrivateStaticClass @ 1473a09f0

UClass * __cdecl UAvoidanceManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAvoidanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AvoidanceManager",
               &Z_Registration_Info_UClass_UAvoidanceManager.InnerSingleton,
               StaticRegisterNativesUAvoidanceManager,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAvoidanceManager>,
               InternalVTableHelperCtorCaller<UAvoidanceManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAvoidanceManager.InnerSingleton;
}

// HandleToggleAvoidance @ 1473a1de0

void __thiscall
UAvoidanceManager::HandleToggleAvoidance
          (UAvoidanceManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bSystemActive = !bSystemActive;
  FOutputDevice::LogfImpl(param_2,L"Avoidance system: %s");
  return;
}

// HandleToggleDebugAll @ 1473a1e20

void __thiscall
UAvoidanceManager::HandleToggleDebugAll
          (UAvoidanceManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  this->bDebugAll = this->bDebugAll == false;
  return;
}

// IsDebugEnabled @ 1473a66a0

bool __thiscall UAvoidanceManager::IsDebugEnabled(UAvoidanceManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (this->bDebugAll != false) {
    return true;
  }
  pFVar1 = (this->DebugUIDs).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  if (pFVar1 != pFVar1 + (longlong)(this->DebugUIDs).ArrayNum * 4) {
    while (*(int *)pFVar2 != param_1) {
      pFVar2 = pFVar2 + 4;
      if (pFVar2 == pFVar1 + (longlong)(this->DebugUIDs).ArrayNum * 4) {
        return false;
      }
    }
    if ((int)((longlong)pFVar2 - (longlong)pFVar1 >> 2) != -1) {
      return true;
    }
  }
  return false;
}

// IsDebugOnForAll @ 1473a66f0

bool __thiscall UAvoidanceManager::IsDebugOnForAll(UAvoidanceManager *this)

{
  return this->bDebugAll;
}

// IsDebugOnForUID @ 1473a6700

bool __thiscall UAvoidanceManager::IsDebugOnForUID(UAvoidanceManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->DebugUIDs).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->DebugUIDs).ArrayNum * 4) {
      return false;
    }
    if (*(int *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 4;
  }
  return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 2) != -1;
}

// OverrideToMaxWeight @ 1473aae50

void __thiscall
UAvoidanceManager::OverrideToMaxWeight(UAvoidanceManager *this,int param_1,float param_2)

{
  UClass *pUVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->AvoidanceObjects).field_0x8 == *(int *)&(this->AvoidanceObjects).field_0x34) {
    return;
  }
  puVar5 = *(undefined1 **)&(this->AvoidanceObjects).field_0x40;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &(this->AvoidanceObjects).field_0x38;
  }
  iVar2 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->AvoidanceObjects).field_0x48 - 1U & param_1)
                            * 4);
  if (iVar2 == -1) {
    return;
  }
  lVar3 = *(longlong *)&this->AvoidanceObjects;
  while (*(int *)((longlong)iVar2 * 0x68 + lVar3) != param_1) {
    iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + lVar3);
    if (iVar2 == -1) {
      return;
    }
  }
  if (iVar2 == -1) {
    return;
  }
  lVar3 = (longlong)iVar2 * 0x68 + lVar3;
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 == -8) {
    return;
  }
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
    iVar2 = (int)pUVar1->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar1->_padding_)) goto LAB_1473aaf0e;
  }
  lVar4 = 0;
LAB_1473aaf0e:
  *(double *)(lVar3 + 0x48) = (double)param_2 + *(double *)(lVar4 + 0x8f8);
  return;
}

// RegisterMovementComponent @ 1473afba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAvoidanceManager::RegisterMovementComponent
          (UAvoidanceManager *this,UCharacterMovementComponent *param_1,float param_2)

{
  int iVar1;
  IRVOAvoidanceInterface *pIVar2;
  FNavAvoidanceData local_78;
  
  iVar1 = GetNewAvoidanceUID(this);
  pIVar2 = (IRVOAvoidanceInterface *)&param_1->field_0x190;
  (**(code **)(*(longlong *)pIVar2 + 0x10))(pIVar2,iVar1);
  (**(code **)(*(longlong *)pIVar2 + 0x20))(pIVar2,param_2);
  RequestUpdateTimer(this);
  if (param_1 == (UCharacterMovementComponent *)0x0) {
    pIVar2 = (IRVOAvoidanceInterface *)0x0;
  }
  FNavAvoidanceData::FNavAvoidanceData(&local_78,this,pIVar2);
  UpdateRVO_Internal(this,iVar1,&local_78);
  return true;
}

// RegisterMovementComponent @ 1473afc50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UAvoidanceManager::RegisterMovementComponent
          (UAvoidanceManager *this,UMovementComponent *param_1,float param_2)

{
  int iVar1;
  UClass *pUVar2;
  IRVOAvoidanceInterface *pIVar3;
  FNavAvoidanceData local_78;
  
  if (param_1 != (UMovementComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (pIVar3 != (IRVOAvoidanceInterface *)0x0) {
      iVar1 = GetNewAvoidanceUID(this);
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,iVar1);
      (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,param_2);
      RequestUpdateTimer(this);
      FNavAvoidanceData::FNavAvoidanceData(&local_78,this,pIVar3);
      UpdateRVO_Internal(this,iVar1,&local_78);
      return true;
    }
  }
  return false;
}

// RemoveAvoidanceObject @ 1473b1f70

void __thiscall UAvoidanceManager::RemoveAvoidanceObject(UAvoidanceManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  int local_res10 [6];
  
  if (-1 < param_1) {
    if (*(int *)&(this->AvoidanceObjects).field_0x8 != *(int *)&(this->AvoidanceObjects).field_0x34)
    {
      puVar6 = *(undefined1 **)&(this->AvoidanceObjects).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->AvoidanceObjects).field_0x38;
      }
      iVar2 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->AvoidanceObjects).field_0x48 - 1U & param_1) * 4);
      if (iVar2 != -1) {
        do {
          piVar3 = (int *)((longlong)iVar2 * 0x68 + *(longlong *)&this->AvoidanceObjects);
          if (*piVar3 == param_1) {
            piVar4 = piVar3 + 2;
            if (piVar3 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            if (piVar4 != (int *)0x0) {
              piVar4[0xc] = 0;
            }
            break;
          }
          iVar2 = piVar3[0x18];
        } while (iVar2 != -1);
      }
    }
    local_res10[0] = param_1;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&this->NewKeyPool,local_res10);
    pFVar5 = (this->DebugUIDs).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)(this->DebugUIDs).ArrayNum * 4;
    if (pFVar5 != pFVar1) {
      while (*(int *)pFVar5 != local_res10[0]) {
        pFVar5 = pFVar5 + 4;
        if (pFVar5 == pFVar1) {
          return;
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::Remove(&this->DebugUIDs,local_res10);
    }
  }
  return;
}

// RemoveOutdatedObjects @ 1473b2380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAvoidanceManager::RemoveOutdatedObjects(UAvoidanceManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_AI_ObstacleAvoidance> FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  float fVar25;
  undefined1 local_res10 [8];
  int local_res18 [2];
  FColor_u_0 local_res20 [2];
  FName local_118;
  FName local_110;
  FName local_108;
  TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
  *local_f8;
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
  LARGE_INTEGER local_c0;
  FStatMessage local_b8;
  TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FName local_78 [7];
  
  if (this->bAutoPurgeOutdatedObjects == 0) {
    return;
  }
  FVar16 = StatPtr_STAT_AI_ObstacleAvoidance;
  if (StatPtr_STAT_AI_ObstacleAvoidance ==
      (FThreadSafeStaticStat<FStat_STAT_AI_ObstacleAvoidance>)0x0) {
    pFVar15 = ::FName::FName(local_78,"STAT_AI_ObstacleAvoidance");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_AI_ObstacleAvoidance>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_ObstacleAvoidance,*pFVar15,
                        L"Avoidance Time","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64
                        ,true,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar16;
  bVar10 = false;
  bVar9 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar7.ComparisonIndex.Value.Value != 0) || (FVar7.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar7.ComparisonIndex.Value.Value;
        local_118.Number = FVar7.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\AvoidanceManager.cpp"
                   ,0x67);
        bVar10 = true;
        bVar9 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_110 = FVar7;
      FThreadStats::AddMessage(FVar7,CycleScopeStart);
      bVar13 = true;
      goto LAB_1473b2512;
    }
  }
  bVar10 = bVar14;
  bVar9 = bVar13;
  bVar13 = false;
  local_110 = local_108;
LAB_1473b2512:
  this->bRequestedUpdateTimer = 0;
  local_e8 = &(this->AvoidanceObjects).field_0x10;
  iVar5 = *(int *)&(this->AvoidanceObjects).field_0x28;
  local_f8 = &this->AvoidanceObjects;
  local_d8 = 0;
  uStack_ec = 1;
  iStack_dc = 0;
  iStack_f0 = 0;
  if (iVar5 != 0) {
    puVar23 = *(uint **)&(this->AvoidanceObjects).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)local_e8;
    }
    uVar20 = *puVar23;
    while (uVar20 == 0) {
      lVar17 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_1473b259e;
      uVar20 = puVar23[lVar17 + 1];
    }
    uStack_ec = -uVar20 & uVar20;
    uVar3 = (ulonglong)uStack_ec * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_c8 = (int)lVar17;
    iStack_dc = local_c8 + -1 + local_d8;
    if (iVar5 < iStack_dc) {
      iStack_dc = iVar5;
    }
  }
LAB_1473b259e:
  iStack_d0 = *(int *)&(this->AvoidanceObjects).field_0x8 -
              *(int *)&(this->AvoidanceObjects).field_0x34;
  uVar20 = *(uint *)&(this->AvoidanceObjects).field_0x28;
  TStack_a0._padding_ = CONCAT44(uStack_ec,iStack_f0);
  uStack_e0 = 0xffffffff;
  uVar24 = uVar20 & 0xffffffe0;
  TStack_a0.CurrentBitIndex = iStack_dc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar20 >> 5;
  TStack_a0._28_4_ = iStack_dc;
  TStack_a0.BaseBitIndex = local_d8;
  uStack_80 = CONCAT44(uStack_cc,iStack_d0);
  iStack_d4 = iStack_dc;
  local_a8 = local_f8;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e8;
  if ((((int)uVar20 < 0) || (iVar5 < (int)uVar20)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar11 = __real_3f000000;
  uVar6 = *(uint *)&(this->AvoidanceObjects).field_0x28;
  if (uVar20 != uVar6) {
    puVar22 = *(undefined1 **)&(this->AvoidanceObjects).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->AvoidanceObjects).field_0x10;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar21 * 4);
    while (uVar20 == 0) {
      lVar17 = (longlong)iVar21;
      uVar24 = uVar24 + 0x20;
      iVar21 = iVar21 + 1;
      uVar20 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_1473b26ab;
      uVar20 = *(uint *)(puVar22 + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar20 = (int)lVar17 + -1 + uVar24;
    if ((int)uVar6 < (int)uVar20) {
      uVar20 = uVar6;
    }
  }
LAB_1473b26ab:
  bVar14 = false;
  do {
    pTVar12 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    FVar7 = local_110;
    if (((TStack_a0.CurrentBitIndex == uVar20) &&
        (TStack_a0.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->AvoidanceObjects).field_0x10)) &&
       (pTVar12 == &this->AvoidanceObjects)) {
      if (bVar14) {
        RequestUpdateTimer(this);
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar13) && (FVar7 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_b8.NameAndInfo.Index = FVar7.ComparisonIndex.Value;
          local_b8.NameAndInfo.Number = FVar7.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_c0);
          local_b8.StatData.Pad[4] = '\0';
          local_b8.StatData.Pad[5] = '\0';
          local_b8.StatData.Pad[6] = '\0';
          local_b8.StatData.Pad[7] = '\0';
          local_b8.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
          local_b8.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
          local_b8.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
          local_b8.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_b8);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      return;
    }
    lVar17 = *(longlong *)pTVar12;
    lVar18 = (longlong)TStack_a0.CurrentBitIndex * 0x68;
    fVar25 = this->DefaultTimeToLive * fVar11;
    fVar4 = *(float *)(lVar18 + 0x38 + lVar17);
    if (fVar4 <= fVar25) {
      if (0.0 < fVar4) {
        local_res18[0] = *(int *)(lVar18 + lVar17);
        *(undefined4 *)(lVar18 + 0x38 + lVar17) = 0;
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&this->NewKeyPool,local_res18);
        pFVar19 = (this->DebugUIDs).AllocatorInstance.Data;
        pFVar2 = pFVar19 + (longlong)(this->DebugUIDs).ArrayNum * 4;
        for (; pFVar19 != pFVar2; pFVar19 = pFVar19 + 4) {
          if (*(int *)pFVar19 == local_res18[0]) {
            TArray<int,TSizedDefaultAllocator<32>_>::Remove(&this->DebugUIDs,local_res18);
            break;
          }
        }
      }
    }
    else {
      bVar14 = true;
      *(float *)(lVar18 + 0x38 + lVar17) = fVar4 - fVar25;
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// RequestUpdateTimer @ 1473b3410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAvoidanceManager::RequestUpdateTimer(UAvoidanceManager *this)

{
  int iVar1;
  UClass *pUVar2;
  FTimerManager *this_00;
  UWorld *this_01;
  code *local_18;
  undefined8 uStack_10;
  
  this_01 = (UWorld *)this->_padding_;
  if (this_01 != (UWorld *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_1473b344b;
  }
  this_01 = (UWorld *)0x0;
LAB_1473b344b:
  if ((ZPULL(*(undefined4 *)&this->field_0xd8,0,1) == 0) && (this_01 != (UWorld *)0x0)) {
    *(uint *)&this->field_0xd8 = *(undefined4 *)&this->field_0xd8 | 1;
    this_00 = UWorld::GetTimerManager(this_01);
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = RemoveOutdatedObjects;
    FTimerManager::SetTimer<UAvoidanceManager>
              (this_00,&this->TimerHandle_RemoveOutdatedObjects,this,(pmf_7be10c0a *)&local_18,
               this->DefaultTimeToLive * __real_3f000000,false,__real_bf800000);
  }
  return;
}

// SetNavEdgeProvider @ 1473b7450

void __thiscall
UAvoidanceManager::SetNavEdgeProvider(UAvoidanceManager *this,INavEdgeProviderInterface *param_1)

{
  UObject *local_res8 [4];
  
  this->EdgeProviderInterface = param_1;
  if (param_1 != (INavEdgeProviderInterface *)0x0) {
    local_res8[0] = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (local_res8[0] != (UObject *)0x0) goto LAB_1473b7475;
  }
  local_res8[0] = (UObject *)0x0;
LAB_1473b7475:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  FWeakObjectPtr::operator=(&(this->EdgeProviderOb).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUAvoidanceManager @ 1473b8910

void __cdecl UAvoidanceManager::StaticRegisterNativesUAvoidanceManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UAvoidanceManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateRVO @ 1473bc920

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
UAvoidanceManager::UpdateRVO(UAvoidanceManager *this,UCharacterMovementComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  IRVOAvoidanceInterface *pIVar3;
  FNavAvoidanceData local_68;
  
  if (param_1 == (UCharacterMovementComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovementComp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\AvoidanceManager.cpp"
                       ,0xef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar3 = (IRVOAvoidanceInterface *)&param_1->field_0x190;
  if (param_1 == (UCharacterMovementComponent *)0x0) {
    pIVar3 = (IRVOAvoidanceInterface *)0x0;
  }
  FNavAvoidanceData::FNavAvoidanceData(&local_68,this,pIVar3);
  UpdateRVO_Internal(this,param_1->AvoidanceUID,&local_68);
  return;
}

// UpdateRVO @ 1473bc9b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAvoidanceManager::UpdateRVO(UAvoidanceManager *this,UMovementComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  IRVOAvoidanceInterface *pIVar3;
  FNavAvoidanceData local_68;
  
  if (param_1 != (UMovementComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (pIVar3 != (IRVOAvoidanceInterface *)0x0) {
      FNavAvoidanceData::FNavAvoidanceData(&local_68,this,pIVar3);
      iVar1 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
      UpdateRVO_Internal(this,iVar1,&local_68);
    }
  }
  return;
}

// UpdateRVO_Internal @ 1473bca30

void __thiscall
UAvoidanceManager::UpdateRVO_Internal
          (UAvoidanceManager *this,int param_1,FNavAvoidanceData *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  double *pdVar5;
  undefined1 *puVar6;
  TPairInitializer<int_const_&,FNavAvoidanceData_const_&> local_res8 [2];
  FNavAvoidanceData **local_18;
  FNavAvoidanceData *local_10;
  
  if (*(int *)&(this->AvoidanceObjects).field_0x8 != *(int *)&(this->AvoidanceObjects).field_0x34) {
    puVar6 = *(undefined1 **)&(this->AvoidanceObjects).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AvoidanceObjects).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->AvoidanceObjects).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar3 * 0x68 + *(longlong *)&(this->AvoidanceObjects).field_0x0);
        if (*piVar4 == param_1) {
          pdVar5 = (double *)(piVar4 + 2);
          if (piVar4 == (int *)0x0) {
            pdVar5 = (double *)0x0;
          }
          if (pdVar5 != (double *)0x0) {
            dVar2 = (param_2->Center).field0_0x0._s_0.Y;
            dVar1 = pdVar5[8];
            *pdVar5 = (param_2->Center).field0_0x0._s_0.X;
            pdVar5[1] = dVar2;
            dVar2 = (param_2->Velocity).field0_0x0._s_0.X;
            pdVar5[2] = (param_2->Center).field0_0x0._s_0.Z;
            pdVar5[3] = dVar2;
            dVar2 = (param_2->Velocity).field0_0x0._s_0.Z;
            pdVar5[4] = (param_2->Velocity).field0_0x0._s_0.Y;
            pdVar5[5] = dVar2;
            dVar2 = *(double *)&param_2->HalfHeight;
            pdVar5[6] = *(double *)&param_2->RemainingTimeToLive;
            pdVar5[7] = dVar2;
            dVar2 = *(double *)&param_2->GroupMask;
            pdVar5[8] = param_2->OverrideWeightTime;
            pdVar5[9] = dVar2;
            pdVar5[10] = *(double *)&param_2->GroupsToIgnore;
            pdVar5[8] = dVar1;
            return;
          }
          break;
        }
        iVar3 = piVar4[0x18];
      } while (iVar3 != -1);
    }
  }
  local_18 = &local_res8[0].Value;
  local_res8[0].Value._0_4_ = param_1;
  local_10 = param_2;
  TSet<TTuple<int,FNavAvoidanceData>,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FNavAvoidanceData_const_&>_>
            ((TSet<TTuple<int,FNavAvoidanceData>,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0>,FDefaultSetAllocator>
              *)&this->AvoidanceObjects,local_res8,(bool *)&local_18);
  return;
}

// execGetAvoidanceVelocityForComponent @ 1473bfde0

void __cdecl
UAvoidanceManager::execGetAvoidanceVelocityForComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  IRVOAvoidanceInterface *pIVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_res10 [2];
  UObjectBaseUtility *local_res18 [2];
  TVector<double>_u_0 local_98;
  FNavAvoidanceData local_78;
  
  local_res18[0] = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  this = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (local_res18[0] != (UObjectBaseUtility *)0x0) {
    pUVar2 = Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    if (pIVar3 != (IRVOAvoidanceInterface *)0x0) {
      FNavAvoidanceData::FNavAvoidanceData(&local_78,(UAvoidanceManager *)param_1,pIVar3);
      local_res10[0] = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
      GetAvoidanceVelocity_Internal
                ((UAvoidanceManager *)param_1,(TVector<double> *)&local_98._s_0,&local_78,
                 *(float *)&param_1[1].field_0x14,local_res10);
      uVar4 = local_98._s_0.Z;
      uVar5 = local_98._0_4_;
      uVar6 = local_98._4_4_;
      uVar7 = local_98._8_4_;
      uVar8 = local_98._12_4_;
    }
  }
  *(undefined4 *)param_3 = uVar5;
  *(undefined4 *)((longlong)param_3 + 4) = uVar6;
  *(undefined4 *)((longlong)param_3 + 8) = uVar7;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar4;
  return;
}

// execGetNewAvoidanceUID @ 1473c1270

void __cdecl
UAvoidanceManager::execGetNewAvoidanceUID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetNewAvoidanceUID((UAvoidanceManager *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetObjectCount @ 1473c12b0

void __cdecl UAvoidanceManager::execGetObjectCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = *(int *)&param_1[2].field_0x10 - *(int *)&param_1[3].field_0x14;
  return;
}

// execRegisterMovementComponent @ 1473c5800

void __cdecl
UAvoidanceManager::execRegisterMovementComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  UObjectBaseUtility *this;
  int iVar3;
  UClass *pUVar4;
  IRVOAvoidanceInterface *pIVar5;
  undefined4 local_res10 [2];
  UObjectBaseUtility *local_res18 [2];
  FNavAvoidanceData local_98;
  
  local_res18[0] = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res18[0];
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UObjectBaseUtility *)0x0) {
    pUVar4 = Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
    pIVar5 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar4);
    if (pIVar5 != (IRVOAvoidanceInterface *)0x0) {
      iVar3 = GetNewAvoidanceUID((UAvoidanceManager *)param_1);
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,iVar3);
      (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,uVar2);
      RequestUpdateTimer((UAvoidanceManager *)param_1);
      FNavAvoidanceData::FNavAvoidanceData(&local_98,(UAvoidanceManager *)param_1,pIVar5);
      UpdateRVO_Internal((UAvoidanceManager *)param_1,iVar3,&local_98);
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

