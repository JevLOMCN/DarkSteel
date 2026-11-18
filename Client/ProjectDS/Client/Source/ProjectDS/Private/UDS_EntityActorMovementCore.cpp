// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b48f910

UClass * __cdecl UDS_EntityActorMovementCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityActorMovementCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityActorMovementCore",
               &Z_Registration_Info_UClass_UDS_EntityActorMovementCore.InnerSingleton,
               StaticRegisterNativesUDS_EntityActorMovementCore,0x268,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EntityActorMovementCore>,
               InternalVTableHelperCtorCaller<UDS_EntityActorMovementCore>,local_res8,
               UDS_MovementCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityActorMovementCore.InnerSingleton;
}

// UDS_EntityActorMovementCore @ 14b4923e0

UDS_EntityActorMovementCore * __thiscall
UDS_EntityActorMovementCore::UDS_EntityActorMovementCore
          (UDS_EntityActorMovementCore *this,FVTableHelper *param_1)

{
  UDS_MovementCore::UDS_MovementCore((UDS_MovementCore *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EntityActorMovementCore__6B_;
  (this->MovementComponent).field0_0x0.DebugPtr = (UDS_BasicMovementComponent *)0x0;
  return this;
}

// ~UDS_EntityActorMovementCore @ 14b4934d0

void __thiscall
UDS_EntityActorMovementCore::~UDS_EntityActorMovementCore(UDS_EntityActorMovementCore *this)

{
  this->_padding_ = (longlong)&___7UDS_EntityActorMovementCore__6B_;
  UDS_MovementCore::~UDS_MovementCore((UDS_MovementCore *)this);
  return;
}

// GetDeceleration @ 14b494b40

float __thiscall UDS_EntityActorMovementCore::GetDeceleration(UDS_EntityActorMovementCore *this)

{
  return __real_450ca000;
}

// GetJumpZVelocity @ 14b494bc0

float __thiscall UDS_EntityActorMovementCore::GetJumpZVelocity(UDS_EntityActorMovementCore *this)

{
  return __real_44070000;
}

// GetMaxAcceleration @ 14b494c60

float __thiscall UDS_EntityActorMovementCore::GetMaxAcceleration(UDS_EntityActorMovementCore *this)

{
  return __real_44bb8000;
}

// GetPrivateStaticClass @ 14b494ea0

UClass * __cdecl UDS_EntityActorMovementCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityActorMovementCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityActorMovementCore",
               &Z_Registration_Info_UClass_UDS_EntityActorMovementCore.InnerSingleton,
               StaticRegisterNativesUDS_EntityActorMovementCore,0x268,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EntityActorMovementCore>,
               InternalVTableHelperCtorCaller<UDS_EntityActorMovementCore>,local_res8,
               UDS_MovementCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityActorMovementCore.InnerSingleton;
}

// StaticRegisterNativesUDS_EntityActorMovementCore @ 14b495810

void __cdecl UDS_EntityActorMovementCore::StaticRegisterNativesUDS_EntityActorMovementCore(void)

{
  return;
}

// UDS_EntityActorMovementCore @ 14bc2ab70

UDS_EntityActorMovementCore * __thiscall
UDS_EntityActorMovementCore::UDS_EntityActorMovementCore
          (UDS_EntityActorMovementCore *this,FObjectInitializer *param_1)

{
  UDS_MovementCore::UDS_MovementCore((UDS_MovementCore *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EntityActorMovementCore__6B_;
  (this->MovementComponent).field0_0x0.DebugPtr = (UDS_BasicMovementComponent *)0x0;
  return this;
}

// CheckWalkable @ 14bc32170

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

bool __thiscall
UDS_EntityActorMovementCore::CheckWalkable
          (UDS_EntityActorMovementCore *this,float param_1,TVector<double> *param_2,float param_3)

{
  uchar uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  TStatId TVar5;
  AActor *pAVar6;
  UWorld *this_00;
  UPrimitiveComponent *this_01;
  FWalkableSlopeOverride *this_02;
  double dVar7;
  float fVar8;
  undefined1 auStackY_268 [32];
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined1 uStack_1d4;
  undefined2 uStack_1d3;
  undefined1 uStack_1d1;
  undefined1 local_1c8 [164];
  int local_124;
  FWeakObjectPtr local_110;
  FWeakObjectPtr FStack_108;
  IActorInstanceManagerInterface *local_100;
  undefined8 uStack_f8;
  FWeakObjectPtr local_f0 [5];
  FCollisionQueryParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((this->MovementComponent).field0_0x0.DebugPtr == (UDS_BasicMovementComponent *)0x0) {
    return false;
  }
  UDS_MovementCore::GetActorLocation((UDS_MovementCore *)this,(TVector<double> *)&local_220._s_0);
  dVar7 = (double)param_1;
  local_220._s_0.Z =
       local_220._s_0.Z + (double)(float)((uint)param_3 ^ __xmm_80000000800000008000000080000000);
  local_208._s_0.X = dVar7 * (param_2->field0_0x0)._s_0.X + local_220._s_0.X;
  local_208._s_0.Y = dVar7 * (param_2->field0_0x0)._s_0.Y + local_220._s_0.Y;
  local_208._s_0.Z = dVar7 * (param_2->field0_0x0)._s_0.Z + local_220._s_0.Z;
  memset(local_1c8,0,0x100);
  uStack_1d8 = 0xffffffff;
  uStack_1d3 = 0;
  local_110.ObjectIndex = 0;
  local_110.ObjectSerialNumber = 0;
  FStack_108.ObjectIndex = 0;
  FStack_108.ObjectSerialNumber = 0;
  uStack_1d1 = 0;
  local_1e0 = 0;
  uStack_1d4 = 0;
  uStack_f8._0_4_ = -1;
  uStack_f8._4_1_ = Invalid;
  uStack_f8._5_3_ = 0;
  local_124 = -1;
  local_1c8._4_4_ = 1.0;
  local_100 = (IActorInstanceManagerInterface *)0x0;
  local_c8.OwnerTag.ComparisonIndex.Value = 0;
  local_c8.OwnerTag.Number = 0;
  local_c8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.IgnoreComponents.ArrayNum = 0;
  local_c8.IgnoreComponents.ArrayMax = 8;
  local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.IgnoreSourceObjects.ArrayNum = 0;
  local_c8.IgnoreSourceObjects.ArrayMax = 4;
  local_c8.bTraceComplex = false;
  local_c8.bFindInitialOverlaps = true;
  local_c8.bReturnFaceIndex = false;
  local_c8.bReturnPhysicalMaterial = false;
  local_c8.MobilityType = Any;
  local_c8.TraceTag.ComparisonIndex.Value = 0;
  local_c8.TraceTag.Number = 0;
  local_c8.bComponentListUnique = true;
  local_c8.IgnoreMask = '\0';
  local_c8.bIgnoreBlocks = false;
  local_c8.bIgnoreTouches = false;
  local_c8.bSkipNarrowPhase = false;
  TVar5 = FCollisionQueryParams::GetUnknownStatId();
  local_c8.StatId.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
  local_c8.bDebugQuery = false;
  local_c8.bTraceIntoSubComponents = true;
  local_c8.bReplaceHitWithSubComponents = true;
  pAVar6 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  FCollisionQueryParams::AddIgnoredActor(&local_c8,pAVar6);
  pAVar6 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = AActor::GetWorld(pAVar6);
  bVar4 = UWorld::LineTraceSingleByChannel
                    (this_00,(FHitResult *)local_1c8,(TVector<double> *)&local_220._s_0,
                     (TVector<double> *)&local_208._s_0,ECC_WorldStatic,&local_c8,
                     &FCollisionResponseParams::DefaultResponseParam);
  fVar2 = __real_40000000;
  DS_Util::ShowSyncLine
            ((TVector<double> *)&local_220._s_0,(TVector<double> *)&local_208._s_0,&FColor::Cyan,
             false,__real_40000000,'\0',__real_40a00000);
  fVar3 = __real_3f35c28f;
  if (bVar4) {
    this_01 = (UPrimitiveComponent *)FWeakObjectPtr::Get(local_f0);
    fVar8 = fVar3;
    if (this_01 != (UPrimitiveComponent *)0x0) {
      this_02 = UPrimitiveComponent::GetWalkableSlopeOverride(this_01);
      uVar1 = (this_02->WalkableSlopeBehavior).Value;
      if (uVar1 != '\0') {
        if (uVar1 == '\x01') {
          FWalkableSlopeOverride::CheckCachedData(this_02);
          fVar8 = this_02->CachedSlopeCos;
          if (fVar3 <= this_02->CachedSlopeCos) {
            fVar8 = fVar3;
          }
        }
        else if (uVar1 == '\x02') {
          FWalkableSlopeOverride::CheckCachedData(this_02);
          fVar8 = this_02->CachedSlopeCos;
          if (this_02->CachedSlopeCos <= fVar3) {
            fVar8 = fVar3;
          }
        }
        else if (uVar1 == '\x03') {
          fVar8 = fVar2;
        }
      }
    }
    if ((double)local_1c8._104_8_ < (double)fVar8) {
      bVar4 = false;
      goto LAB_14bc32413;
    }
  }
  bVar4 = true;
LAB_14bc32413:
  if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_c8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_c8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar4;
}

// GetParentDiffLocation @ 14bc42f50

TVector<double> * __thiscall
UDS_EntityActorMovementCore::GetParentDiffLocation
          (UDS_EntityActorMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)this->_padding_;
  dVar1 = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetParentLocationDelta @ 14bc43050

TVector<double> * __thiscall
UDS_EntityActorMovementCore::GetParentLocationDelta
          (UDS_EntityActorMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)this->_padding_;
  dVar1 = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPredictedStopLocation @ 14bc43170

TVector<double> * __thiscall
UDS_EntityActorMovementCore::GetPredictedStopLocation
          (UDS_EntityActorMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  float fVar1;
  TVector<double>_u_0 local_28;
  
  local_28._0_4_ = (undefined4)this->_padding_;
  local_28._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_28._8_4_ = (undefined4)this->_padding_;
  local_28._12_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_28._s_0.Z = (double)this->_padding_;
  fVar1 = (float)(**(code **)(this->_padding_ + 0x3b0))();
  UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation
            (__return_storage_ptr__,(TVector<double> *)&local_28._s_0,true,0.0,__real_41000000,
             __real_3f800000,fVar1);
  return __return_storage_ptr__;
}

// Initialize @ 14bc48840

void __thiscall
UDS_EntityActorMovementCore::Initialize
          (UDS_EntityActorMovementCore *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UActorComponent,FWeakObjectPtr> param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_BasicMovementComponent *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr local_res18 [2];
  
  local_res18[0] = param_2.WeakPtr;
  UDS_MovementCore::Initialize((UDS_MovementCore *)this,param_1,param_2);
  pUVar4 = (UDS_BasicMovementComponent *)FWeakObjectPtr::Get(local_res18);
  if (pUVar4 != (UDS_BasicMovementComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_BasicMovementComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bc4888e;
  }
  pUVar4 = (UDS_BasicMovementComponent *)0x0;
LAB_14bc4888e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_BasicMovementComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->MovementComponent).field0_0x0.DebugPtr = pUVar4;
    return;
  }
  (this->MovementComponent).field0_0x0.DebugPtr = pUVar4;
  if (pUVar4 == (UDS_BasicMovementComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovementComponent",
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Movement\\DS_EntityActorMovementCore.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// IsFullySubmerged @ 14bc4a920

bool __thiscall UDS_EntityActorMovementCore::IsFullySubmerged(UDS_EntityActorMovementCore *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res8 [8];
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8[0] = SwimSubmerge;
    bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsWalkable @ 14bc4bd20

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
UDS_EntityActorMovementCore::IsWalkable
          (UDS_EntityActorMovementCore *this,float param_1,TVector<double> *param_2)

{
  float fVar1;
  char cVar2;
  FDS_EntityBase *pFVar3;
  undefined4 in_XMM1_Db;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  
  pFVar3 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    return false;
  }
  local_38 = (param_2->field0_0x0)._s_0.Z;
  local_48 = *(undefined4 *)&param_2->field0_0x0;
  uStack_44 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_40 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_3c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  fVar1 = pFVar3->ScaledCapsuleHalfHeight;
  cVar2 = (**(code **)(this->_padding_ + 0x4f8))
                    (this,CONCAT44(in_XMM1_Db,param_1),&local_48,fVar1 - __real_40000000);
  if (cVar2 == '\0') {
    local_38 = (param_2->field0_0x0)._s_0.Z;
    local_48 = *(undefined4 *)&param_2->field0_0x0;
    uStack_44 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uStack_40 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uStack_3c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    cVar2 = (**(code **)(this->_padding_ + 0x4f8))
                      (this,CONCAT44(in_XMM1_Db,param_1),&local_48,fVar1 - __real_42340000);
  }
  return (bool)cVar2;
}

// MoveSmooth @ 14bc4c100

void __thiscall
UDS_EntityActorMovementCore::MoveSmooth
          (UDS_EntityActorMovementCore *this,TVector<double> *param_1,float param_2,bool param_3)

{
  undefined8 uVar1;
  double dVar2;
  TVector<double>_u_0 local_38 [2];
  
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&param_1->field0_0x0 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10),
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    UDS_MovementCore::GetActorLocation
              ((UDS_MovementCore *)this,(TVector<double> *)&local_38[0]._s_0);
    dVar2 = (double)param_2;
    local_38[0]._0_8_ = (double)local_38[0]._0_8_ + dVar2 * (param_1->field0_0x0)._s_0.X;
    local_38[0]._8_8_ = (double)local_38[0]._8_8_ + dVar2 * (param_1->field0_0x0)._s_0.Y;
    local_38[0]._16_8_ = (double)local_38[0]._16_8_ + dVar2 * (param_1->field0_0x0)._s_0.Z;
    (**(code **)(this->_padding_ + 0x358))(this,local_38);
  }
  return;
}

// SetActorLocation @ 14bc5bee0

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
UDS_EntityActorMovementCore::SetActorLocation
          (UDS_EntityActorMovementCore *this,TVector<double> *param_1)

{
  longlong *this_00;
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  AActor *this_01;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStackY_1a8 [32];
  TVector<double>_u_0 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = &this->_padding_;
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)*this_00);
  if ((pFVar2 != (FDS_EntityBase *)0x0) && (pFVar2->EntityType == NPC)) {
    UDS_MovementCore::GetActorLocation((UDS_MovementCore *)this,(TVector<double> *)&local_168._s_0);
    dVar4 = (param_1->field0_0x0)._s_0.Y - local_168._s_0.Y;
    dVar6 = (param_1->field0_0x0)._s_0.X - local_168._s_0.X;
    auVar5._0_8_ = dVar4 * dVar4 + dVar6 * dVar6;
    auVar5._8_8_ = 0;
    auVar5 = sqrtpd(auVar5,auVar5);
    if ((__real_43c80000 < (float)auVar5._0_8_) &&
       (pUVar3 = UDS_LogManager::GetInst(), pUVar3 != (UDS_LogManager *)0x0)) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_EntityActorMovementCore::SetActorLocation",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Display,local_148.Ptr,0xfe,L"SERIN SetActorLocation %f");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    this_01 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    AActor::SetActorLocation(this_01,param_1,false,(FHitResult *)0x0,None);
  }
  return;
}

// SetMoveToFloor @ 14bc61370

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
UDS_EntityActorMovementCore::SetMoveToFloor
          (UDS_EntityActorMovementCore *this,bool param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FDS_EntityBase *pFVar6;
  FDS_EntityBase *pFVar7;
  TVector<double> *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  FWeakObjectPtr FStackX_8;
  TVector<double>_u_0 TStack_e8;
  ForAnyElementType FStack_d0;
  undefined8 uStack_c8;
  TVector<double>_u_0 TStack_c0;
  TVector<double>_u_0 TStack_a8;
  TVector<double> aTStack_88 [4];
  
  pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_);
  if (pFVar6 != (FDS_EntityBase *)0x0) {
    fVar1 = pFVar6->ScaledCapsuleHalfHeight;
    if (param_1) {
      pFVar7 = FDS_EntityBase::GetEntityBaseFromActor
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_);
      dVar3 = __real_3f1a36e2e0000000;
      uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (pFVar7 != (FDS_EntityBase *)0x0) {
        UDS_MovementCore::GetActorLocation
                  ((UDS_MovementCore *)this,(TVector<double> *)&TStack_e8._s_0);
        uVar13 = (uint)((ulonglong)TStack_e8._0_8_ >> 0x20);
        uVar10 = SUB84(TStack_e8._s_0.X,0) & uVar11;
        uVar12 = uVar13 & uVar14;
        if (((dVar3 <= (double)CONCAT44(uVar12,uVar10) && (double)CONCAT44(uVar12,uVar10) != dVar3)
            || (dVar3 <= (double)CONCAT44(TStack_e8._12_4_ & uVar14,TStack_e8._8_4_ & uVar11) &&
                (double)CONCAT44(TStack_e8._12_4_ & uVar14,TStack_e8._8_4_ & uVar11) != dVar3)) ||
           (uVar10 = SUB84(TStack_e8._s_0.Z,0) & uVar11,
           uVar12 = (uint)((ulonglong)TStack_e8._16_8_ >> 0x20) & uVar14,
           uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
           uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
           uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
           uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
           uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           dVar3 <= (double)CONCAT44(uVar12,uVar10) && (double)CONCAT44(uVar12,uVar10) != dVar3)) {
          TStack_e8._s_0.Z = TStack_e8._s_0.Z + (double)pFVar7->ScaledCapsuleHalfHeight;
          uVar15 = SUB84(TStack_e8._s_0.X,0);
          uVar16 = uVar13;
          uVar17 = TStack_e8._8_4_;
          uVar18 = TStack_e8._12_4_;
          uVar2 = TStack_e8._s_0.Z;
        }
      }
      TStack_c0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      TStack_c0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      TStack_c0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      TStack_c0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      TStack_c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      (**(code **)(pFVar6->_padding_ + 0x1d0))(pFVar6,&FStackX_8);
      bVar4 = FWeakObjectPtr::IsValid(&FStackX_8);
      TStack_a8._0_4_ = uVar15;
      TStack_a8._4_4_ = uVar16;
      TStack_a8._8_4_ = uVar17;
      TStack_a8._12_4_ = uVar18;
      TStack_a8._s_0.Z = (double)uVar2;
      if (bVar4) {
        FStack_d0.Data = (FScriptContainerElement *)0x0;
        uStack_c8 = 0;
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&FStack_d0,(int *)((longlong)&uStack_c8 + 4));
        _Src.Data = FStack_d0.Data;
        TStack_e8._s_0.X = 0.0;
        TStack_e8._8_4_ = iVar5 + 1;
        uStack_c8 = CONCAT44(uStack_c8._4_4_,TStack_e8._8_4_);
        *(undefined4 *)(FStack_d0.Data + (longlong)iVar5 * 4) = 0x13;
        lVar9 = (longlong)(int)TStack_e8._8_4_;
        if (TStack_e8._8_4_ == 0) {
          TStack_e8._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,TStack_e8._8_4_,0,(ForAnyElementType *)&TStack_e8._s_0,TStack_e8._8_4_,
                     (int *)((longlong)&TStack_e8._s_0.Y + 4));
          memcpy((void *)TStack_e8._s_0.X,_Src.Data,lVar9 << 2);
        }
        pTVar8 = DS_Util::GetFloorLocationByLocation
                           (aTStack_88,(TVector<double> *)&TStack_a8._s_0,
                            (TArray<ECollisionChannel,TSizedDefaultAllocator<32>_> *)&TStack_e8._s_0
                            ,__real_43160000,false);
        TStack_c0._s_0.X = (double)*(undefined8 *)&pTVar8->field0_0x0;
        TStack_c0._s_0.Y = *(double *)((longlong)&pTVar8->field0_0x0 + 8);
        TStack_c0._s_0.Z = *(double *)((longlong)&pTVar8->field0_0x0 + 0x10);
        if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_d0.Data);
        }
      }
      else {
        pTVar8 = DS_Util::GetNPCFloorLocationByLocation
                           (aTStack_88,(TVector<double> *)&TStack_a8._s_0,__real_43160000,false);
        TStack_c0._s_0.X = (double)*(undefined8 *)&pTVar8->field0_0x0;
        TStack_c0._s_0.Y = *(double *)((longlong)&pTVar8->field0_0x0 + 8);
        TStack_c0._s_0.Z = *(double *)((longlong)&pTVar8->field0_0x0 + 0x10);
      }
      uVar10 = SUB84(TStack_c0._s_0.X,0) & uVar11;
      uVar13 = (uint)((ulonglong)TStack_c0._0_8_ >> 0x20) & uVar14;
      if (((dVar3 <= (double)CONCAT44(uVar13,uVar10) && (double)CONCAT44(uVar13,uVar10) != dVar3) ||
          (uVar10 = SUB84(TStack_c0._s_0.Y,0) & uVar11,
          uVar13 = (uint)((ulonglong)TStack_c0._8_8_ >> 0x20) & uVar14,
          dVar3 <= (double)CONCAT44(uVar13,uVar10) && (double)CONCAT44(uVar13,uVar10) != dVar3)) ||
         (uVar11 = SUB84(TStack_c0._s_0.Z,0) & uVar11,
         uVar14 = (uint)((ulonglong)TStack_c0._16_8_ >> 0x20) & uVar14,
         dVar3 <= (double)CONCAT44(uVar14,uVar11) && (double)CONCAT44(uVar14,uVar11) != dVar3)) {
        TStack_c0._s_0.Z = TStack_c0._s_0.Z + (double)fVar1;
        (**(code **)(this->_padding_ + 0x358))(this,&TStack_c0);
      }
    }
    else {
      UDS_MovementCore::GetActorLocation
                ((UDS_MovementCore *)this,(TVector<double> *)&TStack_e8._s_0);
      TStack_e8._s_0.Z = (double)(fVar1 + param_2);
      (**(code **)(this->_padding_ + 0x358))(this,&TStack_e8);
    }
  }
  return;
}

// Tick @ 14bc669c0

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

void __thiscall UDS_EntityActorMovementCore::Tick(UDS_EntityActorMovementCore *this,float *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  bool bVar4;
  double dVar5;
  bool bVar6;
  FDS_EntityBase *pFVar7;
  UObject *pUVar8;
  TRotator<double> *pTVar9;
  TVector<double> *pTVar10;
  UDS_LogManager *pUVar11;
  UDS_MovementCore *this_00;
  longlong *plVar12;
  TVector<double>_u_0 *pTVar13;
  UDS_CharInfoData *this_01;
  uint uVar14;
  uint uVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStackY_228 [32];
  FWeakObjectPtr local_1f8 [2];
  TVector<double>_u_0 local_1e8;
  undefined1 local_1c8 [16];
  double local_1b8;
  FWeakObjectPtr local_1b0;
  TRotator<double> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  UDS_MovementCore::Tick((UDS_MovementCore *)this,param_1);
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  pFVar7 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_);
  if (pFVar7 != (FDS_EntityBase *)0x0) {
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    lVar3 = *(longlong *)(pUVar8 + 0xb);
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar3 != 0) {
      uVar19 = *(undefined4 *)(lVar3 + 0x210);
      uVar22 = *(undefined4 *)(lVar3 + 0x214);
      uVar24 = *(undefined4 *)(lVar3 + 0x218);
      uVar25 = *(undefined4 *)(lVar3 + 0x21c);
      uVar26 = *(double *)(lVar3 + 0x220);
    }
    *(undefined4 *)&this->_padding_ = uVar19;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar22;
    *(undefined4 *)&this->_padding_ = uVar24;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar25;
    this->_padding_ = uVar26;
    (**(code **)(pFVar7->_padding_ + 0x1d0))(pFVar7,&local_1b0);
    pFVar7 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_1b0);
    auVar2._8_8_ = __real_3ff0000000000000;
    if (pFVar7 == (FDS_EntityBase *)0x0) {
      if ((((double)this->_padding_ !=
            (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_)) ||
          ((double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_) !=
           (double)this->_padding_)) ||
         (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z != (double)this->_padding_)) {
        dVar29 = (double)this->_padding_ - (double)this->_padding_;
        dVar30 = __real_3ff0000000000000 / (double)*param_1;
        this->_padding_ = (longlong)(((double)this->_padding_ - (double)this->_padding_) * dVar30);
        this->_padding_ = (longlong)(((double)this->_padding_ - (double)this->_padding_) * dVar30);
        this->_padding_ = (longlong)(dVar30 * dVar29);
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        if (*(USceneComponent **)(pUVar8 + 0xb) == (USceneComponent *)0x0) {
          pTVar13 = &local_1e8;
          local_1e8._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          local_1e8._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_1e8._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
        }
        else {
          pTVar13 = (TVector<double>_u_0 *)
                    USceneComponent::GetComponentRotation
                              (*(USceneComponent **)(pUVar8 + 0xb),&local_1a8);
        }
        dVar30 = (pTVar13->_s_0).Y;
        this->_padding_ = (longlong)(pTVar13->_s_0).X;
        this->_padding_ = (longlong)dVar30;
        this->_padding_ = (longlong)(pTVar13->_s_0).Z;
        fVar1 = *param_1;
        dVar30 = FMath::FindDeltaAngleDegrees<double,double>
                           ((double)this->_padding_,(double)this->_padding_);
        *(float *)&this->_padding_ = (float)(dVar30 / (double)fVar1);
        fVar1 = *param_1;
        fVar16 = UDS_MovementCore::GetMaxMoveSpeed((UDS_MovementCore *)this);
        if (fVar16 * fVar1 == 0.0) {
          *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
        }
        else {
          dVar29 = dVar29 / (double)(fVar16 * fVar1);
          if (auVar2._8_8_ <= dVar29) {
            dVar29 = auVar2._8_8_;
          }
          if (dVar29 <= __real_bff0000000000000) {
            dVar29 = __real_bff0000000000000;
          }
          *(float *)((longlong)&this->_padding_ + 4) = (float)dVar29 * __real_42b40000;
        }
      }
    }
    else if (pFVar7->EntityType == Transport) {
      auVar2._0_8_ = this->_padding_;
      auVar2._8_8_ = (double)this->_padding_;
      uVar20 = (uint)auVar2._0_8_;
      uVar23 = (uint)((ulonglong)auVar2._0_8_ >> 0x20);
      local_1b8 = (double)this->_padding_;
      local_1c8 = auVar2;
      pUVar8 = FWeakObjectPtr::Get(&local_1b0);
      dVar29 = __real_3f1a36e2e0000000;
      uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      lVar3 = *(longlong *)(pUVar8 + 0xb);
      uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar3 != 0) {
        uVar19 = *(uint *)(lVar3 + 0x210);
        uVar22 = *(uint *)(lVar3 + 0x214);
        uVar24 = *(undefined4 *)(lVar3 + 0x218);
        uVar25 = *(undefined4 *)(lVar3 + 0x21c);
        uVar26 = *(double *)(lVar3 + 0x220);
      }
      bVar6 = (double)CONCAT44(uVar23 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               uVar20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
              __real_3f1a36e2e0000000;
      bVar4 = __real_3f1a36e2e0000000 <=
              (double)CONCAT44(uVar23 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               uVar20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      *(undefined4 *)&this->_padding_ = uVar19;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar22;
      *(undefined4 *)&this->_padding_ = uVar24;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar25;
      this->_padding_ = uVar26;
      if (bVar4 && bVar6) {
        auVar2._8_8_ = (double)local_1c8._8_8_;
      }
      else {
        uVar14 = SUB84(auVar2._8_8_,0) & uVar15;
        uVar17 = (uint)((ulonglong)auVar2._8_8_ >> 0x20) & uVar18;
        if (((double)CONCAT44(uVar17,uVar14) < dVar29 || (double)CONCAT44(uVar17,uVar14) == dVar29)
           && (uVar14 = SUB84(local_1b8,0) & uVar15,
              uVar17 = (uint)((ulonglong)local_1b8 >> 0x20) & uVar18,
              (double)CONCAT44(uVar17,uVar14) < dVar29 || (double)CONCAT44(uVar17,uVar14) == dVar29)
           ) {
          auVar2._8_8_ = (double)CONCAT44(uVar25,uVar24);
          uVar20 = uVar19;
          uVar23 = uVar22;
          local_1b8 = (double)uVar26;
        }
      }
      this->_padding_ = (longlong)((double)this->_padding_ - (double)CONCAT44(uVar23,uVar20));
      this->_padding_ = (longlong)((double)this->_padding_ - auVar2._8_8_);
      this->_padding_ = (longlong)((double)this->_padding_ - local_1b8);
      dVar5 = __real_3ff0000000000000;
      auVar2._8_8_ = (double)this->_padding_;
      dVar30 = (double)this->_padding_;
      dVar28 = (double)this->_padding_;
      if ((((auVar2._8_8_ == 0.0) && (dVar30 == 0.0)) && (dVar28 == 0.0)) ||
         (((dVar27 = auVar2._8_8_ - (double)this->_padding_,
           (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar18,SUB84(dVar27,0) & uVar15) <=
           dVar29 && (dVar27 = dVar30 - (double)this->_padding_, uVar20 = SUB84(dVar27,0) & uVar15,
                     uVar23 = (uint)((ulonglong)dVar27 >> 0x20) & uVar18,
                     (double)CONCAT44(uVar23,uVar20) < dVar29 ||
                     (double)CONCAT44(uVar23,uVar20) == dVar29)) &&
          (dVar27 = dVar28 - (double)this->_padding_, uVar15 = SUB84(dVar27,0) & uVar15,
          uVar18 = (uint)((ulonglong)dVar27 >> 0x20) & uVar18,
          (double)CONCAT44(uVar18,uVar15) < dVar29 || (double)CONCAT44(uVar18,uVar15) == dVar29))))
      {
        lVar3 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        this->_padding_ =
             CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        this->_padding_ = lVar3;
        this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        dVar29 = __real_3ff0000000000000 / (double)*param_1;
        this->_padding_ = (longlong)(((double)this->_padding_ - auVar2._8_8_) * dVar29);
        this->_padding_ = (longlong)(((double)this->_padding_ - dVar30) * dVar29);
        this->_padding_ = (longlong)(((double)this->_padding_ - dVar28) * dVar29);
      }
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (*(USceneComponent **)(pUVar8 + 0xb) == (USceneComponent *)0x0) {
        pTVar9 = (TRotator<double> *)local_1c8;
        local_1c8._8_8_ = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_1c8._0_8_ = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_1b8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      else {
        pTVar9 = USceneComponent::GetComponentRotation
                           (*(USceneComponent **)(pUVar8 + 0xb),(TRotator<double> *)&local_1e8._s_0)
        ;
      }
      auVar2._8_8_ = pTVar9->Yaw;
      this->_padding_ = (longlong)pTVar9->Pitch;
      this->_padding_ = (longlong)auVar2._8_8_;
      this->_padding_ = (longlong)pTVar9->Roll;
      fVar1 = *param_1;
      auVar2._8_8_ = FMath::FindDeltaAngleDegrees<double,double>
                               ((double)this->_padding_,(double)this->_padding_);
      *(float *)&this->_padding_ = (float)(auVar2._8_8_ / (double)fVar1);
      pUVar8 = FWeakObjectPtr::Get(&local_1b0);
      if (*(USceneComponent **)(pUVar8 + 0xb) == (USceneComponent *)0x0) {
        pTVar9 = (TRotator<double> *)local_1c8;
        local_1c8._8_8_ = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_1c8._0_8_ = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_1b8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      else {
        pTVar9 = USceneComponent::GetComponentRotation
                           (*(USceneComponent **)(pUVar8 + 0xb),(TRotator<double> *)local_1c8);
      }
      local_1e8._s_0.X = pTVar9->Pitch;
      local_1e8._s_0.Y = pTVar9->Yaw;
      local_1e8._s_0.Z = pTVar9->Roll;
      pTVar10 = UE::Math::TRotator<double>::UnrotateVector
                          ((TRotator<double> *)&local_1e8._s_0,(TVector<double> *)&local_1a8,
                           (TVector<double> *)&this->_padding_);
      auVar2._8_8_ = (pTVar10->field0_0x0)._s_0.Y;
      this->_padding_ = (longlong)(pTVar10->field0_0x0)._s_0.X;
      this->_padding_ = (longlong)auVar2._8_8_;
      this->_padding_ = (longlong)(pTVar10->field0_0x0)._s_0.Z;
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      auVar2._8_8_ = (double)this->_padding_ - (double)this->_padding_;
      dVar29 = ((double)this->_padding_ - (double)this->_padding_) - (double)this->_padding_;
      dVar30 = auVar2._8_8_ - (double)this->_padding_;
      this->_padding_ =
           (longlong)(((double)this->_padding_ - (double)this->_padding_) - (double)this->_padding_)
      ;
      this->_padding_ = (longlong)dVar29;
      this->_padding_ = (longlong)dVar30;
      if ((((double)this->_padding_ != 0.0) || ((double)this->_padding_ != 0.0)) ||
         ((double)this->_padding_ != 0.0)) {
        dVar28 = dVar5 / (double)*param_1;
        this->_padding_ = (longlong)(dVar28 * (double)this->_padding_);
        this->_padding_ = (longlong)(dVar28 * dVar29);
        this->_padding_ = (longlong)(dVar28 * dVar30);
      }
      fVar1 = *param_1;
      fVar16 = UDS_MovementCore::GetMaxMoveSpeed((UDS_MovementCore *)this);
      fVar21 = 0.0;
      if (fVar16 * fVar1 != 0.0) {
        auVar2._8_8_ = auVar2._8_8_ / (double)(fVar16 * fVar1);
        if (dVar5 <= auVar2._8_8_) {
          auVar2._8_8_ = dVar5;
        }
        if (auVar2._8_8_ <= __real_bff0000000000000) {
          auVar2._8_8_ = __real_bff0000000000000;
        }
        fVar21 = (float)auVar2._8_8_ * __real_42b40000;
      }
      *(float *)((longlong)&this->_padding_ + 4) = fVar21;
    }
    else {
      (**(code **)(pFVar7->_padding_ + 0x78))(pFVar7);
      bVar6 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)local_1f8,(void *)0x0);
      if (bVar6) {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar11 = UDS_LogManager::GetInst();
        local_188._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_188,"UDS_EntityActorMovementCore::Tick",0x21,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_188.Ptr,0x7e,L"parentMovementCore is nullptr");
        if ((void *)local_188._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_188._padding_);
        return;
      }
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_1f8);
      pTVar10 = UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_1a8);
      auVar2._8_8_ = (pTVar10->field0_0x0)._s_0.Y;
      this->_padding_ = (longlong)(pTVar10->field0_0x0)._s_0.X;
      this->_padding_ = (longlong)auVar2._8_8_;
      this->_padding_ = (longlong)(pTVar10->field0_0x0)._s_0.Z;
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      pUVar8 = FWeakObjectPtr::Get(local_1f8);
      lVar3 = *(longlong *)&pUVar8[4].field_0x18;
      this->_padding_ = *(longlong *)&pUVar8[4].field_0x10;
      this->_padding_ = lVar3;
      this->_padding_ = *(longlong *)&pUVar8[4].field_0x20;
      pUVar8 = FWeakObjectPtr::Get(local_1f8);
      plVar12 = (longlong *)(**(code **)(*(longlong *)pUVar8 + 0x330))(pUVar8,&local_1a8);
      lVar3 = plVar12[1];
      this->_padding_ = *plVar12;
      this->_padding_ = lVar3;
      this->_padding_ = plVar12[2];
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      local_1e8._s_0.Z = 0.0;
      this->_padding_ = 0;
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      this->_padding_ = this->_padding_;
      pUVar8 = FWeakObjectPtr::Get(local_1f8);
      lVar3 = *(longlong *)&pUVar8[8].field_0x8;
      this->_padding_ = *(longlong *)(pUVar8 + 8);
      this->_padding_ = lVar3;
      this->_padding_ = *(longlong *)&pUVar8[8].field_0x10;
      pUVar8 = FWeakObjectPtr::Get(local_1f8);
      *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)&pUVar8[0xb].field_0x4;
      pUVar8 = FWeakObjectPtr::Get(local_1f8);
      *(undefined4 *)&this->_padding_ = *(undefined4 *)(pUVar8 + 0xb);
      pUVar8 = FWeakObjectPtr::Get(local_1f8);
      lVar3 = *(longlong *)&pUVar8[0xc].field_0x8;
      this->_padding_ = *(longlong *)(pUVar8 + 0xc);
      this->_padding_ = lVar3;
      this->_padding_ = *(longlong *)&pUVar8[0xc].field_0x10;
      pUVar8 = FWeakObjectPtr::Get(local_1f8);
      lVar3 = *(longlong *)&pUVar8[0xc].field_0x20;
      this->_padding_ = *(longlong *)&pUVar8[0xc].field_0x18;
      this->_padding_ = lVar3;
      this->_padding_ = *(longlong *)(pUVar8 + 0xd);
    }
  }
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar6) {
    this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_1e8._s_0.X = (double)this->_padding_;
    local_1e8._s_0.Y = (double)this->_padding_;
    local_1e8._s_0.Z = (double)this->_padding_;
    UDS_CharInfoData::SetPosition(this_01,(TVector<double> *)&local_1e8._s_0);
  }
  return;
}

