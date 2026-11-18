// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 94

// StaticClass @ 14b4ef3d0

UClass * __cdecl UDS_MainPlayerMovementCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerMovementCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerMovementCore",
               &Z_Registration_Info_UClass_UDS_MainPlayerMovementCore.InnerSingleton,
               StaticRegisterNativesUDS_MainPlayerMovementCore,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MainPlayerMovementCore>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerMovementCore>,local_res8,
               UDS_MovementCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerMovementCore.InnerSingleton;
}

// UDS_MainPlayerMovementCore @ 14b4f1240

UDS_MainPlayerMovementCore * __thiscall
UDS_MainPlayerMovementCore::UDS_MainPlayerMovementCore
          (UDS_MainPlayerMovementCore *this,FVTableHelper *param_1)

{
  UDS_MovementCore::UDS_MovementCore((UDS_MovementCore *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MainPlayerMovementCore__6B_;
  (this->MovementComponent).field0_0x0.DebugPtr = (UDS_MainPlayerMovementComponent *)0x0;
  (this->MainPlayerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ParentActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->PrevMovementMode = MOVE_None;
  this->IsRideFalling = false;
  this->bIsMounted = false;
  return this;
}

// ~UDS_MainPlayerMovementCore @ 14b4f18a0

void __thiscall
UDS_MainPlayerMovementCore::~UDS_MainPlayerMovementCore(UDS_MainPlayerMovementCore *this)

{
  this->_padding_ = (longlong)&___7UDS_MainPlayerMovementCore__6B_;
  UDS_MovementCore::~UDS_MovementCore((UDS_MovementCore *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f2260

UClass * __cdecl UDS_MainPlayerMovementCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerMovementCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerMovementCore",
               &Z_Registration_Info_UClass_UDS_MainPlayerMovementCore.InnerSingleton,
               StaticRegisterNativesUDS_MainPlayerMovementCore,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MainPlayerMovementCore>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerMovementCore>,local_res8,
               UDS_MovementCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerMovementCore.InnerSingleton;
}

// StaticRegisterNativesUDS_MainPlayerMovementCore @ 14b4f26f0

void __cdecl UDS_MainPlayerMovementCore::StaticRegisterNativesUDS_MainPlayerMovementCore(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_MainPlayerMovementCore_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnMovementModeChange @ 14b4f3350

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
UDS_MainPlayerMovementCore::execOnMovementModeChange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
  uchar local_res20 [8];
  ACharacter *local_18 [2];
  
  local_18[0] = (ACharacter *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnMovementModeChange
            ((UDS_MainPlayerMovementCore *)param_1,local_18[0],(uint)local_res10[0],local_res20[0]);
  return;
}

// UDS_MainPlayerMovementCore @ 14bc2b100

UDS_MainPlayerMovementCore * __thiscall
UDS_MainPlayerMovementCore::UDS_MainPlayerMovementCore
          (UDS_MainPlayerMovementCore *this,FObjectInitializer *param_1)

{
  UDS_MovementCore::UDS_MovementCore((UDS_MovementCore *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MainPlayerMovementCore__6B_;
  (this->MovementComponent).field0_0x0.DebugPtr = (UDS_MainPlayerMovementComponent *)0x0;
  (this->MainPlayerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ParentActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->PrevMovementMode = MOVE_None;
  this->IsRideFalling = false;
  this->bIsMounted = false;
  return this;
}

// AddHitCapsule @ 14bc2d120

void __thiscall
UDS_MainPlayerMovementCore::AddHitCapsule
          (UDS_MainPlayerMovementCore *this,
          TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *param_1)

{
  int *piVar1;
  UDS_MainPlayerMovementComponent *pUVar2;
  int iVar3;
  
  pUVar2 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_MainPlayerMovementComponent *)0x0) {
    iVar3 = (pUVar2->CachedCapsuleComps).ArrayNum;
    piVar1 = &(pUVar2->CachedCapsuleComps).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(pUVar2->CachedCapsuleComps).AllocatorInstance,piVar1);
    }
    (pUVar2->CachedCapsuleComps).ArrayNum = iVar3 + 1;
    *(FWeakObjectPtr *)((pUVar2->CachedCapsuleComps).AllocatorInstance.Data + (longlong)iVar3 * 8) =
         param_1->WeakPtr;
  }
  return;
}

// AddHitCollision @ 14bc2d190

void __thiscall
UDS_MainPlayerMovementCore::AddHitCollision(UDS_MainPlayerMovementCore *this,FHitResult *param_1)

{
  int *piVar1;
  UDS_MainPlayerMovementComponent *pUVar2;
  int iVar3;
  
  pUVar2 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_MainPlayerMovementComponent *)0x0) {
    iVar3 = (pUVar2->CachedBlockHits).ArrayNum;
    piVar1 = &(pUVar2->CachedBlockHits).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x100,8,&(pUVar2->CachedBlockHits).AllocatorInstance,piVar1);
    }
    (pUVar2->CachedBlockHits).ArrayNum = iVar3 + 1;
    FHitResult::FHitResult
              ((FHitResult *)
               ((pUVar2->CachedBlockHits).AllocatorInstance.Data + (longlong)iVar3 * 0x100),param_1)
    ;
  }
  return;
}

// AddInputVector @ 14bc2d210

void __thiscall
UDS_MainPlayerMovementCore::AddInputVector
          (UDS_MainPlayerMovementCore *this,TVector<double> *param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  local_28 = *(undefined4 *)&param_1->field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  local_18 = (param_1->field0_0x0)._s_0.Z;
  (**(code **)(pUVar1->_padding_ + 0x620))(pUVar1,&local_28,0);
  return;
}

// CalcSlopeDeg @ 14bc2fe10

float __thiscall
UDS_MainPlayerMovementCore::CalcSlopeDeg(UDS_MainPlayerMovementCore *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float _X;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar6 = dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
  if (dVar6 == __real_3ff0000000000000) {
    uVar5 = (param_1->field0_0x0)._s_0.Y;
    uVar7 = (param_1->field0_0x0)._s_0.X;
    uVar8 = (param_1->field0_0x0)._s_0.Z;
  }
  else {
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar6) {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
      uVar5 = dVar1 * dVar6;
      uVar7 = dVar6 * dVar3;
      uVar8 = dVar2 * dVar6;
    }
  }
  fVar4 = (float)((double)uVar5 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
                  (double)uVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
                 (double)uVar8 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z);
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= __real_bf800000) {
    fVar4 = __real_bf800000;
  }
  _X = __real_bf800000;
  if ((__real_bf800000 <= fVar4) && (_X = fVar4, __real_3f800000 <= fVar4)) {
    _X = __real_3f800000;
  }
  fVar4 = acosf(_X);
  return fVar4 * __real_42652ee0;
}

// CheckLocationDownSweepTest @ 14bc31b80

bool __thiscall
UDS_MainPlayerMovementCore::CheckLocationDownSweepTest
          (UDS_MainPlayerMovementCore *this,TVector<double> *param_1,TVector<double> *param_2,
          FHitResult *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainPlayerMovementCore.cpp"
                     ,0x42a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// CheckLocationSweepTest @ 14bc31bc0

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
UDS_MainPlayerMovementCore::CheckLocationSweepTest
          (UDS_MainPlayerMovementCore *this,TVector<double> *param_1,TVector<double> *param_2,
          FHitResult *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  TStatId TVar5;
  AActor *pAVar6;
  UWorld *this_00;
  FCollisionShape *pFVar7;
  undefined1 auStackY_138 [32];
  FCollisionObjectQueryParams local_f8;
  undefined8 local_f0;
  FWeakObjectPtr local_e8 [2];
  undefined1 local_d8 [16];
  FCollisionQueryParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pUVar4 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
  (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x160))(&pUVar4[0x29].field_0x10,local_e8);
  bVar2 = FWeakObjectPtr::IsValid(local_e8);
  if (bVar2) {
    local_c8.IgnoreComponents.ArrayMax = 8;
    local_c8.OwnerTag.ComparisonIndex.Value = 0;
    local_c8.OwnerTag.Number = 0;
    local_c8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c8.IgnoreComponents.ArrayNum = 0;
    local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
    ;
    local_c8.IgnoreSourceObjects.ArrayNum = 0;
    local_c8.MobilityType = Any;
    local_f0 = 0;
    local_c8.TraceTag.ComparisonIndex.Value = 0;
    local_c8.TraceTag.Number = 0;
    local_c8.IgnoreMask = '\0';
    local_c8.bIgnoreBlocks = false;
    local_c8.bIgnoreTouches = false;
    local_c8.bSkipNarrowPhase = false;
    local_c8.IgnoreSourceObjects.ArrayMax = 4;
    local_c8.bTraceComplex = false;
    local_c8.bFindInitialOverlaps = true;
    local_c8.bReturnFaceIndex = false;
    local_c8.bReturnPhysicalMaterial = false;
    local_c8.bComponentListUnique = true;
    TVar5 = FCollisionQueryParams::GetUnknownStatId();
    local_c8.StatId.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
    local_c8.bDebugQuery = false;
    local_c8.bTraceIntoSubComponents = true;
    local_c8.bReplaceHitWithSubComponents = true;
    pAVar6 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FCollisionQueryParams::AddIgnoredActor(&local_c8,pAVar6);
    local_f8.IgnoreMask = '\0';
    local_f8.ObjectTypesToQuery = 0x1000001;
    bVar2 = UDS_GameInstance::IsPlayerCollisionBlock();
    if (bVar2) {
      local_f8.ObjectTypesToQuery = local_f8.ObjectTypesToQuery | 0x100000;
    }
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pUVar4 = FWeakObjectPtr::Get(local_e8);
    pFVar7 = (FCollisionShape *)(**(code **)(*(longlong *)pUVar4 + 0x8b8))(pUVar4,local_d8,0);
    bVar2 = UWorld::SweepSingleByObjectType
                      (this_00,param_3,param_1,param_2,&UE::Math::TQuat<double>::Identity,&local_f8,
                       pFVar7,&local_c8);
    if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_c8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2622091849333996525>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainPlayerMovementCore.cpp"
                       ,0x413,"capsuleComponent.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = false;
  }
  return bVar2;
}

// CheckWalkableByHitResult @ 14bc32470

void __thiscall
UDS_MainPlayerMovementCore::CheckWalkableByHitResult
          (UDS_MainPlayerMovementCore *this,FHitResult *param_1,float param_2,bool *param_3,
          bool *param_4)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  char cVar2;
  float fVar3;
  double dVar4;
  double _X;
  float fVar5;
  
  dVar4 = *(double *)&(param_1->ImpactNormal).field_0x10;
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  if (dVar4 <= __real_bff0000000000000) {
    dVar4 = __real_bff0000000000000;
  }
  _X = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar4) && (_X = dVar4, __real_3ff0000000000000 <= dVar4)) {
    _X = __real_3ff0000000000000;
  }
  dVar4 = acos(_X);
  fVar5 = (float)dVar4 * __real_42652ee0;
  fVar3 = (float)(**(code **)(this->_padding_ + 0x480))(this);
  *param_3 = fVar5 <= fVar3;
  if (((fVar5 > fVar3) && (fVar5 <= __real_42480000)) ||
     (pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr,
     cVar2 = (**(code **)(pUVar1->_padding_ + 0x7a8))(pUVar1,param_1), cVar2 == '\0')) {
    *param_4 = false;
  }
  else {
    fVar5 = (float)((uint)(float)(*(double *)&(param_1->ImpactPoint).field_0x10 - (double)param_2) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar3 = (float)(**(code **)(this->_padding_ + 0x490))(this);
    *param_4 = fVar5 < fVar3;
  }
  return;
}

// CleanupDelegates @ 14bc32570

void __thiscall UDS_MainPlayerMovementCore::CleanupDelegates(UDS_MainPlayerMovementCore *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x18,this);
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
  }
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->MainPlayerActor,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[0x1e].field_0x8,
               (UObject *)this);
  }
  return;
}

// ClearHitCollisionCapsuleList @ 14bc329b0

void __thiscall
UDS_MainPlayerMovementCore::ClearHitCollisionCapsuleList(UDS_MainPlayerMovementCore *this)

{
  int *piVar1;
  UDS_MainPlayerMovementComponent *pUVar2;
  
  pUVar2 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_MainPlayerMovementComponent *)0x0) {
    piVar1 = &(pUVar2->CachedCapsuleComps).ArrayMax;
    (pUVar2->CachedCapsuleComps).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(pUVar2->CachedCapsuleComps).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// ClearHitCollisionList @ 14bc32a00

void __thiscall UDS_MainPlayerMovementCore::ClearHitCollisionList(UDS_MainPlayerMovementCore *this)

{
  int *piVar1;
  UDS_MainPlayerMovementComponent *pUVar2;
  
  pUVar2 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_MainPlayerMovementComponent *)0x0) {
    piVar1 = &(pUVar2->CachedBlockHits).ArrayMax;
    (pUVar2->CachedBlockHits).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,8,0,&(pUVar2->CachedBlockHits).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// Deinitialize @ 14bc387f0

void __thiscall UDS_MainPlayerMovementCore::Deinitialize(UDS_MainPlayerMovementCore *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x18,this);
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
  }
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->MainPlayerActor,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[0x1e].field_0x8,
               (UObject *)this);
  }
  return;
}

// FindReachableAlongSegment_CenterCapsule @ 14bc3e1a0

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

bool __thiscall
UDS_MainPlayerMovementCore::FindReachableAlongSegment_CenterCapsule
          (UDS_MainPlayerMovementCore *this,UWorld *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FWalkParams *param_4,TVector<double> *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  double dVar11;
  bool bVar12;
  FName *pFVar13;
  AActor *pAVar14;
  FThreadSafeStaticStat<_public:___cdecl__private:_bool___cdecl_UDS_MainPlayerMovementCore::SnapCenterToFloor(UWorld_*,UE::Math::TVector<double>_const_&,FWalkParams_const_&,UE::Math::TVector<double>_&,FHitResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SnapCenterToFloor>
  FVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float _X;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  float fVar32;
  undefined1 auStackY_558 [32];
  TVector<double>_u_0 local_4f8;
  TVector<double>_u_0 local_4e0;
  undefined4 uStack_4c8;
  undefined1 uStack_4c4;
  undefined2 uStack_4c3;
  undefined1 uStack_4c1;
  FName local_4c0;
  ECollisionChannel local_4b8;
  float local_4b4;
  TStatId local_4b0;
  TVector<double>_u_0 local_4a8;
  TVector<double>_u_0 local_490;
  FCollisionShape local_478;
  FWeakObjectPtr *local_468;
  UDS_MainPlayerMovementCore *local_460;
  FCollisionShape local_450;
  TVector<double>_u_0 local_440;
  FName local_428;
  FName local_420;
  undefined1 local_418 [88];
  double local_3c0;
  double local_3b8;
  double local_3b0;
  float local_378;
  int local_374;
  byte local_36b;
  FWeakObjectPtr local_360;
  FWeakObjectPtr FStack_358;
  IActorInstanceManagerInterface *local_350;
  undefined8 uStack_348;
  FHitResult local_318;
  FCollisionQueryParams local_218;
  FCollisionQueryParams local_188;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_558;
  if (param_1 == (UWorld *)0x0) {
    bVar12 = false;
  }
  else {
    local_4b8 = param_4->MoveChannel;
    local_478.field1_0x4.Box.HalfExtentY = param_4->CapsuleHalfHeight;
    fVar18 = param_4->WallContactPadding;
    if (param_4->WallContactPadding <= 0.0) {
      fVar18 = 0.0;
    }
    local_478.field1_0x4.Box.HalfExtentX = param_4->CapsuleRadius;
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_478.ShapeType = Capsule;
    local_4b4 = fVar18;
    local_460 = this;
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_MoveSegment =
           (FThreadSafeStaticStat<_public:___cdecl__private:_bool___cdecl_UDS_MainPlayerMovementCore::FindReachableAlongSegment_CenterCapsule(UWorld_*,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FWalkParams_const_&,UE::Math::TVector<double>_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_MoveSegment>
            )0x0;
      pFVar13 = ::FName::FName(&local_4c0,"MoveSegment");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_MoveSegment,*pFVar13,L"MoveSegment",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_4b0.StatIdPtr = (TStatIdData *)StatPtr_MoveSegment;
    if (StatPtr_MoveSegment ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_bool___cdecl_UDS_MainPlayerMovementCore::FindReachableAlongSegment_CenterCapsule(UWorld_*,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FWalkParams_const_&,UE::Math::TVector<double>_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_MoveSegment>
         )0x0) {
      pFVar13 = ::FName::FName(&local_4c0,"MoveSegment");
      local_4b0.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_MoveSegment,*pFVar13,L"MoveSegment",
                      "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                      ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"MoveSegment");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_188,::StaticName,&local_4b0,false,(AActor *)0x0);
    local_468 = (FWeakObjectPtr *)&this->_padding_;
    pAVar14 = (AActor *)FWeakObjectPtr::Get(local_468);
    FCollisionQueryParams::AddIgnoredActor(&local_188,pAVar14);
    dVar11 = __real_3f1a36e2e0000000;
    fVar10 = __real_bf800000;
    uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar7 = __real_3ff0000000000000;
    local_4f8._0_16_ = *(undefined1 (*) [16])&param_2->field0_0x0;
    local_4f8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    uVar5 = (param_3->field0_0x0)._s_0.X - local_4f8._0_8_;
    uVar4 = (param_3->field0_0x0)._s_0.Z - local_4f8._s_0.Z;
    uVar6 = (param_3->field0_0x0)._s_0.Y - local_4f8._8_8_;
    auVar23._0_8_ = (double)uVar6 * (double)uVar6;
    auVar23._8_8_ = 0;
    dVar20 = (double)uVar5 * (double)uVar5 + auVar23._0_8_ + (double)uVar4 * (double)uVar4;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar20;
    auVar24 = sqrtpd(auVar23,auVar24);
    fVar32 = (float)auVar24._0_8_;
    if (__real_38d1b717 <= fVar32) {
      if (dVar20 != __real_3ff0000000000000) {
        if (__real_3e45798ee0000000 <= dVar20) {
          dVar20 = __real_3ff0000000000000 / SQRT(dVar20);
          uVar6 = (double)uVar6 * dVar20;
          uVar4 = (double)uVar4 * dVar20;
          uVar5 = (double)uVar5 * dVar20;
        }
        else {
          local_4e0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      dVar20 = (double)param_4->SampleStride;
      iVar16 = 0;
      local_4c0 = (FName)((double)uVar4 * dVar20);
      iVar17 = -((int)ROUND(__real_bf000000 - (fVar32 + fVar32) / param_4->SampleStride) >> 1);
      uVar27 = local_4f8._0_4_;
      uVar28 = local_4f8._4_4_;
      uVar29 = local_4f8._8_4_;
      uVar30 = local_4f8._12_4_;
      if (-1 < iVar17) {
        do {
          if (iVar16 == iVar17) {
            local_440._s_0.X = (param_3->field0_0x0)._s_0.X;
            local_440._s_0.Y = (param_3->field0_0x0)._s_0.Y;
            local_440._s_0.Z = (param_3->field0_0x0)._s_0.Z;
          }
          else {
            local_440._s_0.X = (double)CONCAT44(uVar28,uVar27) + (double)uVar5 * dVar20;
            local_440._s_0.Z = (double)local_4c0 + local_4f8._s_0.Z;
            local_440._s_0.Y = (double)CONCAT44(uVar30,uVar29) + (double)uVar6 * dVar20;
            local_4e0._s_0.Z = local_440._s_0.Z;
          }
          memset(&local_318,0,0x100);
          uStack_4c8 = 0xffffffff;
          uStack_4c3 = 0;
          uStack_4c1 = 0;
          local_4e0._s_0.Z = 0.0;
          uStack_4c4 = 0;
          local_318.Time = 1.0;
          local_318.MyItem = -1;
          local_318.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
          local_318.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
          local_318.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
          local_318.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
          local_318.HitObjectHandle.InstanceIndex = -1;
          local_318.HitObjectHandle.ResolutionStatus = Invalid;
          local_318.HitObjectHandle._29_3_ = 0;
          local_318.HitObjectHandle.ManagerInterface.InterfaceInstance =
               (IActorInstanceManagerInterface *)0x0;
          UWorld::SweepSingleByChannel
                    (param_1,&local_318,(TVector<double> *)&local_4f8._s_0,
                     (TVector<double> *)&local_440._s_0,&UE::Math::TQuat<double>::Identity,local_4b8
                     ,&local_478,&local_188,&FCollisionResponseParams::DefaultResponseParam);
          local_4a8._s_0.Z = local_440._s_0.Z;
          local_4a8._s_0.X = local_440._s_0.X;
          local_4a8._s_0.Y = local_440._s_0.Y;
          uVar4 = local_440._s_0.X;
          uVar26 = local_440._s_0.Y;
          uVar22 = local_440._s_0.Z;
          if (0.0 < fVar18) {
            uVar2 = local_440._s_0.X - local_4f8._s_0.X;
            uVar3 = local_440._s_0.Z - local_4f8._s_0.Z;
            uVar31 = local_440._s_0.Y - local_4f8._s_0.Y;
            dVar21 = (double)uVar2 * (double)uVar2 + (double)uVar31 * (double)uVar31 +
                     (double)uVar3 * (double)uVar3;
            if (dVar21 != dVar7) {
              if (__real_3e45798ee0000000 <= dVar21) {
                dVar21 = dVar7 / SQRT(dVar21);
                uVar2 = (double)uVar2 * dVar21;
                uVar31 = (double)uVar31 * dVar21;
                uVar3 = (double)uVar3 * dVar21;
              }
              else {
                local_4e0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
            }
            if (((dVar11 < (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) & uVar9,
                                            (uint)uVar2 & uVar8)) ||
                (dVar11 < (double)CONCAT44((uint)((ulonglong)uVar31 >> 0x20) & uVar9,
                                           (uint)uVar31 & uVar8))) ||
               (dVar11 < (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar9,
                                          (uint)uVar3 & uVar8))) {
              dVar21 = (double)fVar18;
              uVar4 = local_440._s_0.X - (double)uVar2 * dVar21;
              uVar26 = local_440._s_0.Y - (double)uVar31 * dVar21;
              uVar22 = local_440._s_0.Z - (double)uVar3 * dVar21;
            }
          }
          memset(local_418,0,0x100);
          local_450.field1_0x4.Box.HalfExtentY = param_4->CapsuleHalfHeight;
          local_360.ObjectIndex = 0;
          local_360.ObjectSerialNumber = 0;
          FStack_358.ObjectIndex = 0;
          FStack_358.ObjectSerialNumber = 0;
          uStack_4c3 = 0;
          uStack_4c1 = 0;
          uStack_4c4 = 0;
          uStack_4c8 = 0xffffffff;
          uStack_348._0_4_ = -1;
          uStack_348._4_1_ = Invalid;
          uStack_348._5_3_ = 0;
          dVar21 = (double)(local_450.field1_0x4.Box.HalfExtentY + param_4->PenetrationSlop);
          local_418._4_4_ = 1.0;
          local_374 = -1;
          local_450.ShapeType = Capsule;
          local_350 = (IActorInstanceManagerInterface *)0x0;
          local_450.field1_0x4.Box.HalfExtentX = param_4->CapsuleRadius;
          local_4e0._s_0.X =
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar21 + (double)uVar4;
          local_4e0._s_0.Y =
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar21 + (double)uVar26;
          dVar25 = (double)param_4->FloorProbe;
          local_4e0._s_0.Z =
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar21 + (double)uVar22;
          local_4a8._s_0.X =
               (double)uVar4 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar25;
          local_4a8._s_0.Z =
               (double)uVar22 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar25;
          local_4a8._s_0.Y =
               (double)uVar26 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar25;
          if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)
             ) {
            StatPtr_SnapCenterToFloor =
                 (FThreadSafeStaticStat<_public:___cdecl__private:_bool___cdecl_UDS_MainPlayerMovementCore::SnapCenterToFloor(UWorld_*,UE::Math::TVector<double>_const_&,FWalkParams_const_&,UE::Math::TVector<double>_&,FHitResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SnapCenterToFloor>
                  )0x0;
            pFVar13 = ::FName::FName(&local_428,"SnapCenterToFloor");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_SnapCenterToFloor,*pFVar13,
                       L"SnapCenterToFloor","STATGROUP_CollisionTags","STATCAT_Advanced",
                       L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
            _Init_thread_footer(&::_TSS0);
          }
          FVar15 = StatPtr_SnapCenterToFloor;
          if (StatPtr_SnapCenterToFloor ==
              (FThreadSafeStaticStat<_public:___cdecl__private:_bool___cdecl_UDS_MainPlayerMovementCore::SnapCenterToFloor(UWorld_*,UE::Math::TVector<double>_const_&,FWalkParams_const_&,UE::Math::TVector<double>_&,FHitResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SnapCenterToFloor>
               )0x0) {
            pFVar13 = ::FName::FName(&local_420,"SnapCenterToFloor");
            FVar15 = (FThreadSafeStaticStat<_public:___cdecl__private:_bool___cdecl_UDS_MainPlayerMovementCore::SnapCenterToFloor(UWorld_*,UE::Math::TVector<double>_const_&,FWalkParams_const_&,UE::Math::TVector<double>_&,FHitResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SnapCenterToFloor>
                      )FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_SnapCenterToFloor,*pFVar13,
                                  L"SnapCenterToFloor","STATGROUP_CollisionTags","STATCAT_Advanced",
                                  L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
          }
          local_4b0.StatIdPtr = (TStatIdData *)FVar15;
          if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)
             ) {
            ::FName::FName(&::StaticName,"SnapCenterToFloor");
            _Init_thread_footer(&::_TSS0);
          }
          FCollisionQueryParams::FCollisionQueryParams
                    (&local_218,::StaticName,&local_4b0,false,(AActor *)0x0);
          pAVar14 = (AActor *)FWeakObjectPtr::Get(local_468);
          FCollisionQueryParams::AddIgnoredActor(&local_218,pAVar14);
          bVar12 = UWorld::SweepSingleByChannel
                             (param_1,(FHitResult *)local_418,(TVector<double> *)&local_4e0._s_0,
                              (TVector<double> *)&local_4a8._s_0,&UE::Math::TQuat<double>::Identity,
                              ECC_WorldStatic,&local_450,&local_218,
                              &FCollisionResponseParams::DefaultResponseParam);
          if (!bVar12) {
            if (local_218.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_218.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
            }
            if (local_218.IgnoreComponents.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_218.IgnoreComponents.AllocatorInstance.SecondaryData);
            }
LAB_14bc3eaf2:
            (param_5->field0_0x0)._s_0.X = local_4f8._s_0.X;
            (param_5->field0_0x0)._s_0.Y = local_4f8._s_0.Y;
            (param_5->field0_0x0)._s_0.Z = local_4f8._s_0.Z;
            goto LAB_14bc3eb33;
          }
          fVar18 = (float)(double)local_418._56_8_;
          if ((local_36b & 2) != 0) {
            fVar18 = fVar18 - local_378;
          }
          local_490._s_0.Z =
               (double)(fVar18 + param_4->CapsuleHalfHeight + param_4->PenetrationSlop);
          local_490._s_0.X = (double)uVar4;
          local_490._s_0.Y = (double)uVar26;
          if (local_218.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_218.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
          }
          if (local_218.IgnoreComponents.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_218.IgnoreComponents.AllocatorInstance.SecondaryData);
          }
          fVar18 = local_4b4;
          ResolveInitialPenetrationIfAny
                    (local_460,param_1,(TVector<double> *)&local_490._s_0,&local_478,&local_188,
                     ECC_WorldStatic,local_4b4,(TVector<double> *)&local_490._s_0);
          fVar32 = (float)(local_490._s_0.Z - local_4f8._s_0.Z);
          if (fVar10 <= fVar32) {
            dVar21 = local_3c0 * local_3c0 + local_3b8 * local_3b8 + local_3b0 * local_3b0;
            if (dVar21 == dVar7) {
              local_4e0._s_0.Z = local_3b0;
              uVar26 = local_3b0;
              uVar22 = local_3b8;
              uVar4 = local_3c0;
            }
            else if (__real_3e45798ee0000000 <= dVar21) {
              dVar21 = dVar7 / SQRT(dVar21);
              uVar4 = local_3c0 * dVar21;
              uVar22 = dVar21 * local_3b8;
              uVar26 = dVar21 * local_3b0;
            }
            else {
              local_4e0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            }
            fVar19 = (float)((double)uVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
                             (double)uVar22 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y
                            + (double)uVar26 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z
                            );
            if (__real_3f800000 <= fVar19) {
              fVar19 = __real_3f800000;
            }
            if (fVar19 <= fVar10) {
              fVar19 = fVar10;
            }
            _X = fVar10;
            if ((fVar10 <= fVar19) && (_X = fVar19, __real_3f800000 <= fVar19)) {
              _X = __real_3f800000;
            }
            fVar19 = acosf(_X);
            if (param_4->MaxWalkableSlopeDeg <= fVar19 * __real_42652ee0 &&
                fVar19 * __real_42652ee0 != param_4->MaxWalkableSlopeDeg) goto LAB_14bc3eaf2;
          }
          if ((0.0 < fVar32) &&
             (param_4->MaxStepUpHeight <= fVar32 && fVar32 != param_4->MaxStepUpHeight))
          goto LAB_14bc3eaf2;
          iVar16 = iVar16 + 1;
          local_4f8._s_0.Z = local_490._s_0.Z;
          local_4f8._8_4_ = local_490._8_4_;
          local_4f8._s_0.X = local_490._s_0.X;
          local_4f8._12_4_ = local_490._12_4_;
          uVar27 = local_490._0_4_;
          uVar28 = local_490._4_4_;
          uVar29 = local_490._8_4_;
          uVar30 = local_490._12_4_;
        } while (iVar16 <= iVar17);
      }
      *(undefined4 *)&param_5->field0_0x0 = uVar27;
      *(undefined4 *)((longlong)&param_5->field0_0x0 + 4) = uVar28;
      *(undefined4 *)((longlong)&param_5->field0_0x0 + 8) = uVar29;
      *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc) = uVar30;
      (param_5->field0_0x0)._s_0.Z = local_4f8._s_0.Z;
    }
    else {
      *(undefined1 (*) [16])&param_5->field0_0x0 = local_4f8._0_16_;
      (param_5->field0_0x0)._s_0.Z = local_4f8._s_0.Z;
    }
LAB_14bc3eb33:
    if (local_188.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_188.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_188.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_188.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    bVar12 = true;
  }
  return bVar12;
}

// GetCurrentFloor @ 14bc40550

FHitResult * __thiscall
UDS_MainPlayerMovementCore::GetCurrentFloor
          (UDS_MainPlayerMovementCore *this,FHitResult *__return_storage_ptr__)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    memset(__return_storage_ptr__,0,0x100);
    (__return_storage_ptr__->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
    (__return_storage_ptr__->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr =
         (FWeakObjectPtr)0x0;
    __return_storage_ptr__->Time = 1.0;
    __return_storage_ptr__->MyItem = -1;
    (__return_storage_ptr__->HitObjectHandle).ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    (__return_storage_ptr__->HitObjectHandle).InstanceIndex = -1;
    (__return_storage_ptr__->HitObjectHandle).ResolutionStatus = Invalid;
    *(undefined3 *)&(__return_storage_ptr__->HitObjectHandle).field_0x1d = 0;
    return __return_storage_ptr__;
  }
  FHitResult::FHitResult(__return_storage_ptr__,(FHitResult *)&pUVar1->_padding_);
  return __return_storage_ptr__;
}

// GetDeceleration @ 14bc40650

float __thiscall UDS_MainPlayerMovementCore::GetDeceleration(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    return 0.0;
  }
  return *(float *)&pUVar1->_padding_;
}

// GetFallingLateralAcceleration @ 14bc40b00

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetFallingLateralAcceleration
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  undefined8 uVar2;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  (**(code **)(pUVar1->_padding_ + 0x808))();
  return __return_storage_ptr__;
}

// GetGravityScale @ 14bc40c90

float __thiscall UDS_MainPlayerMovementCore::GetGravityScale(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    return 0.0;
  }
  return *(float *)&pUVar1->_padding_;
}

// GetGravityZ @ 14bc40cb0

float __thiscall UDS_MainPlayerMovementCore::GetGravityZ(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  float fVar2;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    return 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bc40cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x4f8))();
  return fVar2;
}

// GetHitCollisionCapsuleList @ 14bc41000

TArray<TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MainPlayerMovementCore::GetHitCollisionCapsuleList(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UDS_MovementCore::GetHitCollisionCapsuleList'::__l2::
               _dynamic_atexit_destructor_for__emptyHitCollisions__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &emptyHitCollisions;
  }
  return &pUVar1->CachedCapsuleComps;
}

// GetHitCollisionList @ 14bc410f0

TArray<FHitResult,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MainPlayerMovementCore::GetHitCollisionList(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UDS_MovementCore::GetHitCollisionList'::__l2::
               _dynamic_atexit_destructor_for__emptyHits__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &emptyHits;
  }
  return &pUVar1->CachedBlockHits;
}

// GetJumpZVelocity @ 14bc41990

float __thiscall UDS_MainPlayerMovementCore::GetJumpZVelocity(UDS_MainPlayerMovementCore *this)

{
  return *(float *)&((this->MovementComponent).field0_0x0.DebugPtr)->_padding_;
}

// GetLastInputVector @ 14bc419b0

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
UDS_MainPlayerMovementCore::GetLastInputVector
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  UDS_MainPlayerMovementComponent *this_00;
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this_00 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (this_00 == (UDS_MainPlayerMovementComponent *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  UPawnMovementComponent::GetLastInputVector
            ((UPawnMovementComponent *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLastRotateVector @ 14bc41a00

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetLastRotateVector
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  TRotator<double> *this_00;
  TVector<double>_u_0 *pTVar3;
  uint uVar4;
  uint uVar5;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  TVector<double>_u_0 local_40;
  TVector<double> local_28;
  
  (**(code **)(this->_padding_ + 0x458))(this,&local_58);
  uVar4 = SUB84(local_58,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)local_58 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
        (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
      (uVar4 = (uint)uStack_50 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)uStack_50 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
     (uVar4 = (uint)local_48 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar5 = (uint)((ulonglong)local_48 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
     (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) {
    pTVar3 = &local_40;
    local_40._16_8_ = local_48;
    local_40._0_8_ = local_58;
    local_40._8_8_ = uStack_50;
  }
  else {
    this_00 = UDS_MovementCore::GetActorRotation
                        ((UDS_MovementCore *)this,(TRotator<double> *)&local_40._s_0);
    pTVar3 = &UE::Math::TRotator<double>::Vector(this_00,&local_28)->field0_0x0;
  }
  dVar2 = (pTVar3->_s_0).Y;
  dVar1 = (pTVar3->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetLastRotateYaw @ 14bc41b80

float __thiscall UDS_MainPlayerMovementCore::GetLastRotateYaw(UDS_MainPlayerMovementCore *this)

{
  TRotator<double> *pTVar1;
  TVector<double> local_58;
  TRotator<double> local_40;
  TRotator<double> local_28;
  
  (**(code **)(this->_padding_ + 0x458))(this,&local_58);
  if ((((double)CONCAT44((uint)((ulonglong)local_58.field0_0x0._0_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_58.field0_0x0._s_0.X,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      && ((double)CONCAT44((uint)((ulonglong)local_58.field0_0x0._8_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_58.field0_0x0._s_0.Y,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      ) && ((double)CONCAT44((uint)((ulonglong)local_58.field0_0x0._16_8_ >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_58.field0_0x0._s_0.Z,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) {
    pTVar1 = UDS_MovementCore::GetActorRotation((UDS_MovementCore *)this,&local_28);
    return (float)pTVar1->Yaw;
  }
  UE::Math::TVector<double>::ToOrientationRotator(&local_58,&local_40);
  return (float)local_40.Yaw;
}

// GetLastSavedInputVector @ 14bc41cc0

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetLastSavedInputVector
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  (**(code **)(this->_padding_ + 0x458))(this,&local_28);
  uVar3 = (uint)local_28 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)local_28 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000) ||
      (uVar3 = (uint)lStack_20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar4 = (uint)((ulonglong)lStack_20 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000)) ||
     (uVar3 = (uint)local_18 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar4 = (uint)((ulonglong)local_18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
     (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000)) {
    this->_padding_ = local_28;
    this->_padding_ = lStack_20;
    this->_padding_ = local_18;
  }
  dVar2 = (double)this->_padding_;
  dVar1 = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetLastUpdateVelocity @ 14bc41d60

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetLastUpdateVelocity
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  UDS_MainPlayerMovementComponent *pUVar2;
  double dVar3;
  undefined8 uVar4;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pUVar2 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (UDS_MainPlayerMovementComponent *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar3 = (double)pUVar2->_padding_;
  dVar1 = (double)pUVar2->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)pUVar2->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetMaxAcceleration @ 14bc42080

float __thiscall UDS_MainPlayerMovementCore::GetMaxAcceleration(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    return 0.0;
  }
  return *(float *)((longlong)&pUVar1->_padding_ + 4);
}

// GetMaxStepHeight @ 14bc420f0

float __thiscall UDS_MainPlayerMovementCore::GetMaxStepHeight(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
    return *(float *)((longlong)&pUVar1->_padding_ + 4);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2622091849333996948>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainPlayerMovementCore.cpp"
                     ,0x26c,"MovementComponent");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    fVar4 = (float)(*pcVar2)();
    return fVar4;
  }
  return 0.0;
}

// GetMaxSwimSpeed @ 14bc42160

float __thiscall UDS_MainPlayerMovementCore::GetMaxSwimSpeed(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    return 0.0;
  }
  return *(float *)&pUVar1->_padding_;
}

// GetMountRotateAngle @ 14bc42180

float __thiscall UDS_MainPlayerMovementCore::GetMountRotateAngle(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    return 0.0;
  }
  return pUVar1->MountRotateAngle;
}

// GetMovementMode @ 14bc42380

EMovementMode __thiscall
UDS_MainPlayerMovementCore::GetMovementMode(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    return MOVE_None;
  }
  return (EMovementMode)*(byte *)((longlong)&pUVar1->_padding_ + 1);
}

// GetParentDiffLocation @ 14bc42f80

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetParentDiffLocation
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

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

// GetParentLocationDelta @ 14bc43080

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetParentLocationDelta
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

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

// GetPredictedStopLocation @ 14bc431e0

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetPredictedStopLocation
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  undefined8 uVar2;
  TVector<double>_u_0 local_28;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  local_28._s_0.X = (double)pUVar1->_padding_;
  local_28._s_0.Y = (double)pUVar1->_padding_;
  local_28._s_0.Z = (double)pUVar1->_padding_;
  UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation
            (__return_storage_ptr__,(TVector<double> *)&local_28._s_0,
             (bool)((byte)pUVar1->_padding_ & 1),*(float *)&pUVar1->_padding_,
             *(float *)((longlong)&pUVar1->_padding_ + 4),
             *(float *)((longlong)&pUVar1->_padding_ + 4),*(float *)&pUVar1->_padding_);
  return __return_storage_ptr__;
}

// GetPrevMovementMode @ 14bc432e0

EMovementMode __thiscall
UDS_MainPlayerMovementCore::GetPrevMovementMode(UDS_MainPlayerMovementCore *this)

{
  return this->PrevMovementMode;
}

// GetQuatFromCurrentFloorPitch @ 14bc43570

TQuat<double> * __thiscall
UDS_MainPlayerMovementCore::GetQuatFromCurrentFloorPitch
          (UDS_MainPlayerMovementCore *this,TQuat<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  UDS_MainPlayerMovementComponent *this_00;
  double dVar1;
  
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  this_00 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (this_00 == (UDS_MainPlayerMovementComponent *)0x0) {
    __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
    __return_storage_ptr__->Y = dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
    __return_storage_ptr__->W = dVar1;
    return __return_storage_ptr__;
  }
  UDS_MainPlayerMovementComponent::GetQuatFromCurrentFloorPitch
            (this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetServerFootLocation @ 14bc436c0

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetServerFootLocation
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  UDS_MovementCore::GetActorFootLocation((UDS_MovementCore *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetServerHeadLocation @ 14bc437c0

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetServerHeadLocation
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  UDS_MovementCore::GetActorHeadLocation((UDS_MovementCore *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetServerLocation @ 14bc43a80

TVector<double> * __thiscall
UDS_MainPlayerMovementCore::GetServerLocation
          (UDS_MainPlayerMovementCore *this,TVector<double> *__return_storage_ptr__)

{
  UDS_MovementCore::GetActorLocation((UDS_MovementCore *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSwimDeceleration @ 14bc44490

float __thiscall UDS_MainPlayerMovementCore::GetSwimDeceleration(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    return 0.0;
  }
  return *(float *)&pUVar1->_padding_;
}

// GetTerminalVelocity @ 14bc44660

float __thiscall UDS_MainPlayerMovementCore::GetTerminalVelocity(UDS_MainPlayerMovementCore *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(((this->MovementComponent).field0_0x0.DebugPtr)->_padding_ + 0x520))();
  return *(float *)(lVar1 + 0x2f8);
}

// GetWalkableFloorAngle @ 14bc44bf0

float __thiscall UDS_MainPlayerMovementCore::GetWalkableFloorAngle(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
    return *(float *)((longlong)&pUVar1->_padding_ + 4);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2622091849333996963>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainPlayerMovementCore.cpp"
                     ,0x25d,"MovementComponent");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    fVar4 = (float)(*pcVar2)();
    return fVar4;
  }
  return 0.0;
}

// Initialize @ 14bc48900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainPlayerMovementCore::Initialize
          (UDS_MainPlayerMovementCore *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UActorComponent,FWeakObjectPtr> param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_MainPlayerMovementComponent *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar7;
  UDS_MountEvent *pUVar8;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [264];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_MovementCore::Initialize((UDS_MovementCore *)this,param_1,param_2);
  local_168 = param_1.WeakPtr;
  local_160 = param_2.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_168);
  if (!bVar3) {
    return;
  }
  bVar3 = FWeakObjectPtr::IsValid(&local_160);
  if (!bVar3) {
    return;
  }
  local_158 = param_2.WeakPtr;
  pUVar4 = (UDS_MainPlayerMovementComponent *)FWeakObjectPtr::Get(&local_158);
  if (pUVar4 != (UDS_MainPlayerMovementComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_MainPlayerMovementComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14bc4899c;
  }
  pUVar4 = (UDS_MainPlayerMovementComponent *)0x0;
LAB_14bc4899c:
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar4 == (UDS_MainPlayerMovementComponent *)0x0)) {
    (this->MovementComponent).field0_0x0.DebugPtr = pUVar4;
    if ((pUVar4 == (UDS_MainPlayerMovementComponent *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MovementComponent",
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainPlayerMovementCore.cpp"
                           ,0x43a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->MovementComponent).field0_0x0.DebugPtr = pUVar4;
  }
  SetupMainPlayerActor(this,param_1);
  bVar3 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar3) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateRegistration<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_MainPlayerMovementCore>
              ((TMulticastDelegateRegistration<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar6[4].field_0x18,(UDS_MainPlayerMovementCore *)local_150,(pmf_6e8350d7)this);
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar4 = (this->MovementComponent).field0_0x0.DebugPtr;
    if (pUVar4 != (UDS_MainPlayerMovementComponent *)0x0) {
      *(float *)&pUVar4->_padding_ = (float)*(double *)&pUVar6[4].field_0x10;
      *(float *)&((this->MovementComponent).field0_0x0.DebugPtr)->_padding_ =
           (float)*(double *)&pUVar6[4].field_0x10;
    }
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_MainPlayerMovementCore>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar6[7].field_0x20,(UDS_MainPlayerMovementCore *)(local_150 + 8),
               (pmf_4a40e378)this);
  }
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_140 + 8),
                   "UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_30,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
    else {
      pUVar8 = UDS_EventManager::GetEventInternal<UDS_MountEvent>(this_00);
      if (pUVar8 != (UDS_MountEvent *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar8->SetMountRotationAngleDel,this);
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_MainPlayerMovementCore>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&pUVar8->SetMountRotationAngleDel,(UDS_MainPlayerMovementCore *)local_140,
                   (pmf_ae051338)this);
      }
    }
  }
  return;
}

// IsAimModeState @ 14bc4a090

bool __thiscall
UDS_MainPlayerMovementCore::IsAimModeState
          (UDS_MainPlayerMovementCore *this,EDS_CharDetailState param_1)

{
  return param_1 - SkillMode_Aim < 2;
}

// IsFullySubmerged @ 14bc4a970

bool __thiscall UDS_MainPlayerMovementCore::IsFullySubmerged(UDS_MainPlayerMovementCore *this)

{
  bool bVar1;
  int iVar2;
  ADS_MainCharacter *this_00;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainPlayerActor).WeakPtr);
  if (bVar1) {
    iVar2 = (**(code **)(this->_padding_ + 0x438))(this);
    if (iVar2 == 4) {
      this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
      ADS_MainCharacter::GetFluxSurfaceLocation(this_00,(TVector<double> *)&local_38._s_0);
      if (((local_38._s_0.X != 0.0) || (local_38._s_0.Y != 0.0)) || (local_38._s_0.Z != 0.0)) {
        UDS_MovementCore::GetActorHeadLocation((UDS_MovementCore *)this,&local_20);
        return local_20.field0_0x0._s_0.Z - __real_4049000000000000 < local_38._s_0.Z;
      }
    }
  }
  return false;
}

// IsLocationOnceWalkable @ 14bc4b050

bool __thiscall
UDS_MainPlayerMovementCore::IsLocationOnceWalkable
          (UDS_MainPlayerMovementCore *this,TVector<double> *param_1,TVector<double> *param_2)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  bool local_res8 [8];
  double local_68;
  double dStack_60;
  double local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    lVar1 = *(longlong *)(pUVar3 + 0xb);
    if (lVar1 == 0) {
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_68 = *(double *)(lVar1 + 0x210);
      dStack_60 = *(double *)(lVar1 + 0x218);
      local_58 = *(double *)(lVar1 + 0x220);
    }
  }
  else {
    local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_28._s_0.X = local_68;
  local_28._s_0.Y = dStack_60;
  local_28._s_0.Z = local_58;
  bVar2 = UpdateWalkable(this,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0,
                         param_2,local_res8,local_res8);
  return bVar2;
}

// IsLocationWalkable @ 14bc4b170

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

bool __thiscall
UDS_MainPlayerMovementCore::IsLocationWalkable
          (UDS_MainPlayerMovementCore *this,TVector<double> *param_1,TVector<double> *param_2,
          bool param_3)

{
  float fVar1;
  float fVar2;
  UDS_MainPlayerMovementComponent *pUVar3;
  bool bVar4;
  FDS_EntityBase *pFVar5;
  UWorld *pUVar6;
  TVector<double> local_68;
  FWalkParams local_50 [2];
  
  pFVar5 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_);
  bVar4 = false;
  if (pFVar5 != (FDS_EntityBase *)0x0) {
    fVar1 = pFVar5->ScaledCapsuleRadius;
    fVar2 = pFVar5->ScaledCapsuleHalfHeight;
    UDS_MovementCore::GetActorLocation((UDS_MovementCore *)this,&local_68);
    pUVar3 = (this->MovementComponent).field0_0x0.DebugPtr;
    local_50[0].SampleStride = ___xmm_400000004000000042f0000041a00000;
    local_50[0].FloorProbe = _UNK_152798ee4;
    local_50[0].PenetrationSlop = _UNK_152798ee8;
    local_50[0].WallContactPadding = _UNK_152798eec;
    local_50[0].MoveChannel = ECC_Pawn;
    local_50[0].MaxWalkableSlopeDeg = *(float *)((longlong)&pUVar3->_padding_ + 4);
    local_50[0].MaxStepUpHeight = *(float *)((longlong)&pUVar3->_padding_ + 4);
    local_50[0].CapsuleRadius = fVar1;
    local_50[0].CapsuleHalfHeight = fVar2;
    pUVar6 = UDS_GameInstance::GetGameInstanceWorld();
    bVar4 = FindReachableAlongSegment_CenterCapsule(this,pUVar6,&local_68,param_1,local_50,param_2);
    bVar4 = !bVar4;
  }
  return bVar4;
}

// IsMovingOnGround @ 14bc4b380

bool __thiscall UDS_MainPlayerMovementCore::IsMovingOnGround(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bc4b399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(pUVar1->_padding_ + 0xe0))();
  return (bool)uVar2;
}

// IsValidForTick @ 14bc4bcc0

bool __thiscall UDS_MainPlayerMovementCore::IsValidForTick(UDS_MainPlayerMovementCore *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainPlayerActor).WeakPtr);
  if ((bVar1) &&
     ((this->MovementComponent).field0_0x0.DebugPtr != (UDS_MainPlayerMovementComponent *)0x0)) {
    return true;
  }
  return false;
}

// IsWalkable @ 14bc4bdf0

bool __thiscall
UDS_MainPlayerMovementCore::IsWalkable
          (UDS_MainPlayerMovementCore *this,float param_1,TVector<double> *param_2)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  code *pcVar2;
  undefined1 uVar3;
  TQuat<double> *pTVar4;
  TRotator<double> local_148;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  TQuat<double> local_128;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_MainPlayerMovementComponent *)0x0) {
    uVar3 = 0;
  }
  else {
    memset(local_108,0,0x100);
    uStack_130 = 0xffffffff;
    uStack_12b = 0;
    uStack_129 = 0;
    local_148.Roll = 0.0;
    uStack_12c = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_104 = 0x3f800000;
    uStack_38 = 0xffffffff;
    local_64 = 0xffffffff;
    local_40 = 0;
    UE::Math::TVector<double>::ToOrientationRotator(param_2,&local_148);
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x570);
    pTVar4 = UE::Math::TRotator<double>::Quaternion(&local_148,&local_128);
    (*pcVar2)(pUVar1,param_2,pTVar4,1,local_108,0);
    pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
    uVar3 = (**(code **)(pUVar1->_padding_ + 0x908))(pUVar1,local_108);
  }
  return (bool)uVar3;
}

// IsWallLike @ 14bc4bfc0

bool __thiscall
UDS_MainPlayerMovementCore::IsWallLike
          (UDS_MainPlayerMovementCore *this,FHitResult *param_1,bool param_2,bool param_3)

{
  UDS_MainPlayerMovementComponent *this_00;
  bool bVar1;
  
  this_00 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (this_00 == (UDS_MainPlayerMovementComponent *)0x0) {
    return false;
  }
  bVar1 = UDS_MainPlayerMovementComponent::IsWallLike(this_00,param_1,param_2,param_3);
  return bVar1;
}

// Jump @ 14bc4bfe0

void __thiscall UDS_MainPlayerMovementCore::Jump(UDS_MainPlayerMovementCore *this,float param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  if ((this->MovementComponent).field0_0x0.DebugPtr == (UDS_MainPlayerMovementComponent *)0x0) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bc4c03a;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bc4c03a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    *(float *)&((this->MovementComponent).field0_0x0.DebugPtr)->_padding_ = param_1;
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*(longlong *)pUVar3 + 0x900))(pUVar3);
  }
  return;
}

// MoveSmooth @ 14bc4c1d0

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
UDS_MainPlayerMovementCore::MoveSmooth
          (UDS_MainPlayerMovementCore *this,TVector<double> *param_1,float param_2,bool param_3)

{
  UDS_MainPlayerMovementComponent *this_00;
  
  this_00 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (this_00 != (UDS_MainPlayerMovementComponent *)0x0) {
    this_00->UseSweepTest = param_3;
    UCharacterMovementComponent::MoveSmooth
              ((UCharacterMovementComponent *)this_00,param_1,param_2,(FStepDownResult *)0x0);
    return;
  }
  return;
}

// OnChangedCharState @ 14bc4d790

void __thiscall
UDS_MainPlayerMovementCore::OnChangedCharState
          (UDS_MainPlayerMovementCore *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1
          ,FDS_ChangedCharStateInfo *param_2)

{
  double dVar1;
  UDS_MainPlayerMovementComponent *pUVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8;
  FWeakObjectPtr local_res10;
  
  if ((this->MovementComponent).field0_0x0.DebugPtr != (UDS_MainPlayerMovementComponent *)0x0) {
    local_res10 = param_1.WeakPtr;
    bVar5 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar5) {
      if ((param_2->AddedCharDetailState == SkillMode_Aim) ||
         (param_2->AddedCharDetailState == SkillMode_Throw)) {
        pUVar2 = (this->MovementComponent).field0_0x0.DebugPtr;
        dVar3 = (pUVar2->AimModeRotationRate).Yaw;
        dVar1 = (pUVar2->AimModeRotationRate).Roll;
        pUVar2->_padding_ = (longlong)(pUVar2->AimModeRotationRate).Pitch;
        pUVar2->_padding_ = (longlong)dVar3;
        pUVar2->_padding_ = (longlong)dVar1;
        *(byte *)&pUVar2->_padding_ = (byte)pUVar2->_padding_ | 8;
      }
      else if ((param_2->RemovedCharDetailState == SkillMode_Aim) ||
              (param_2->RemovedCharDetailState == SkillMode_Throw)) {
        pUVar2 = (this->MovementComponent).field0_0x0.DebugPtr;
        dVar3 = (pUVar2->OriginRotationRate).Pitch;
        dVar4 = (pUVar2->OriginRotationRate).Yaw;
        *(byte *)&pUVar2->_padding_ = (byte)pUVar2->_padding_ & 0xf7;
        dVar1 = (pUVar2->OriginRotationRate).Roll;
        pUVar2->_padding_ = (longlong)dVar3;
        pUVar2->_padding_ = (longlong)dVar4;
        pUVar2->_padding_ = (longlong)dVar1;
      }
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_res8 = Mount;
      bVar5 = UDS_CharStateData::HasCharState(this_00,&local_res8);
      this->bIsMounted = bVar5;
    }
  }
  return;
}

// OnChangedMaxMoveSpeed @ 14bc4dbf0

void __thiscall
UDS_MainPlayerMovementCore::OnChangedMaxMoveSpeed(UDS_MainPlayerMovementCore *this,double *param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
    *(float *)&pUVar1->_padding_ = (float)*param_1;
    *(float *)&((this->MovementComponent).field0_0x0.DebugPtr)->_padding_ = (float)*param_1;
  }
  return;
}

// OnMovementModeChange @ 14bc502a0

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
UDS_MainPlayerMovementCore::OnMovementModeChange
          (UDS_MainPlayerMovementCore *this,ACharacter *param_1,EMovementMode param_2,uchar param_3)

{
  return;
}

// ResetParentMovement @ 14bc5aed0

void __thiscall UDS_MainPlayerMovementCore::ResetParentMovement(UDS_MainPlayerMovementCore *this)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 uVar5;
  
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  lVar1 = this->_padding_;
  this->_padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
  this->_padding_ = (longlong)dVar4;
  this->_padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  *(undefined4 *)&this->_padding_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined4 *)&this->_padding_ = uVar2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
  uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (**(code **)(lVar1 + 0x368))(uVar5,&UE::Math::TVector<double>::ZeroVector);
                    /* WARNING: Could not recover jumptable at 0x00014bc5af37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x378))(this,&UE::Math::TRotator<double>::ZeroRotator);
  return;
}

// ResolveInitialPenetrationIfAny @ 14bc5b990

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

void __thiscall
UDS_MainPlayerMovementCore::ResolveInitialPenetrationIfAny
          (UDS_MainPlayerMovementCore *this,UWorld *param_1,TVector<double> *param_2,
          FCollisionShape *param_3,FCollisionQueryParams *param_4,ECollisionChannel param_5,
          float param_6,TVector<double> *param_7)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  double *pdVar5;
  ForElementType<unsigned_int> FVar6;
  ForElementType<unsigned_int> FVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  undefined1 auStackY_258 [32];
  undefined1 local_1d8 [88];
  double local_180 [9];
  float local_138;
  int local_134;
  byte local_12b;
  FWeakObjectPtr local_120;
  FWeakObjectPtr FStack_118;
  IActorInstanceManagerInterface *local_110;
  undefined8 uStack_108;
  FCollisionQueryParams local_d8;
  ulonglong local_48;
  
  if (param_1 != (UWorld *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
    local_d8.TraceTag = param_4->TraceTag;
    FVar7 = (param_4->IgnoreComponents).AllocatorInstance.SecondaryData;
    local_d8.IgnoreComponents.ArrayNum = (param_4->IgnoreComponents).ArrayNum;
    lVar8 = (longlong)local_d8.IgnoreComponents.ArrayNum;
    local_d8.OwnerTag = param_4->OwnerTag;
    local_d8.bTraceComplex = param_4->bTraceComplex;
    local_d8.bFindInitialOverlaps = param_4->bFindInitialOverlaps;
    local_d8.bReturnFaceIndex = param_4->bReturnFaceIndex;
    local_d8.bReturnPhysicalMaterial = param_4->bReturnPhysicalMaterial;
    local_d8.bIgnoreBlocks = param_4->bIgnoreBlocks;
    local_d8.bIgnoreTouches = param_4->bIgnoreTouches;
    local_d8.bSkipNarrowPhase = param_4->bSkipNarrowPhase;
    local_d8.bTraceIntoSubComponents = param_4->bTraceIntoSubComponents;
    local_d8.bReplaceHitWithSubComponents = param_4->bReplaceHitWithSubComponents;
    local_d8.MobilityType = param_4->MobilityType;
    local_d8.IgnoreMask = param_4->IgnoreMask;
    local_d8.StatId.StatIdPtr = (param_4->StatId).StatIdPtr;
    local_d8.bDebugQuery = param_4->bDebugQuery;
    local_d8.bComponentListUnique = param_4->bComponentListUnique;
    bVar3 = false;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&param_4->IgnoreComponents;
    }
    local_d8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    if (local_d8.IgnoreComponents.ArrayNum == 0) {
      local_d8.IgnoreComponents.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_d8.IgnoreComponents.ArrayNum,0,
                 &local_d8.IgnoreComponents.AllocatorInstance,local_d8.IgnoreComponents.ArrayNum,
                 &local_d8.IgnoreComponents.ArrayMax);
      FVar6 = (ForElementType<unsigned_int>)&local_d8.IgnoreComponents;
      if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar6 = local_d8.IgnoreComponents.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar6,(void *)FVar7,lVar8 << 2);
    }
    FVar7 = (param_4->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    local_d8.IgnoreSourceObjects.ArrayNum = (param_4->IgnoreSourceObjects).ArrayNum;
    lVar8 = (longlong)local_d8.IgnoreSourceObjects.ArrayNum;
    local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
    ;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&param_4->IgnoreSourceObjects;
    }
    if (local_d8.IgnoreSourceObjects.ArrayNum == 0) {
      local_d8.IgnoreSourceObjects.ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_d8.IgnoreSourceObjects.ArrayNum,0,
                 &local_d8.IgnoreSourceObjects.AllocatorInstance,
                 local_d8.IgnoreSourceObjects.ArrayNum,&local_d8.IgnoreSourceObjects.ArrayMax);
      FVar6 = (ForElementType<unsigned_int>)&local_d8.IgnoreSourceObjects;
      if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar6 = local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar6,(void *)FVar7,lVar8 << 2);
    }
    local_d8.bFindInitialOverlaps = true;
    local_d8.bIgnoreTouches = false;
    memset(local_1d8,0,0x100);
    local_120.ObjectIndex = 0;
    local_120.ObjectSerialNumber = 0;
    FStack_118.ObjectIndex = 0;
    FStack_118.ObjectSerialNumber = 0;
    uStack_108._0_4_ = -1;
    uStack_108._4_1_ = Invalid;
    uStack_108._5_3_ = 0;
    local_1d8._4_4_ = 1.0;
    local_110 = (IActorInstanceManagerInterface *)0x0;
    local_134 = -1;
    bVar4 = UWorld::SweepSingleByChannel
                      (param_1,(FHitResult *)local_1d8,param_2,param_2,
                       &UE::Math::TQuat<double>::Identity,param_5,param_3,&local_d8,
                       &FCollisionResponseParams::DefaultResponseParam);
    if ((bVar4) && ((local_12b & 2) != 0)) {
      uVar9 = (uint)local_1d8._64_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar10 = SUB84(local_1d8._64_8_,4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((double)CONCAT44(uVar10,uVar9) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar10,uVar9) == __real_3f1a36e2e0000000) &&
         ((uVar9 = (uint)local_1d8._72_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar10 = SUB84(local_1d8._72_8_,4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar10,uVar9) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar10,uVar9) == __real_3f1a36e2e0000000 &&
          (uVar9 = (uint)local_1d8._80_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar10 = SUB84(local_1d8._80_8_,4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar10,uVar9) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar10,uVar9) == __real_3f1a36e2e0000000)))) {
        bVar3 = true;
      }
      pdVar5 = (double *)(local_1d8 + 0x40);
      if (bVar3) {
        pdVar5 = local_180;
      }
      dVar11 = (double)(local_138 + param_6);
      dVar1 = *pdVar5;
      dVar2 = pdVar5[1];
      (param_7->field0_0x0)._s_0.Z = dVar11 * pdVar5[2] + (param_7->field0_0x0)._s_0.Z;
      (param_7->field0_0x0)._s_0.X = dVar11 * dVar1 + (param_7->field0_0x0)._s_0.X;
      (param_7->field0_0x0)._s_0.Y = dVar11 * dVar2 + (param_7->field0_0x0)._s_0.Y;
    }
    if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// SetActorLocation @ 14bc5c060

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
UDS_MainPlayerMovementCore::SetActorLocation
          (UDS_MainPlayerMovementCore *this,TVector<double> *param_1)

{
  bool bVar1;
  AActor *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    AActor::SetActorLocation(this_00,param_1,false,(FHitResult *)0x0,None);
  }
  return;
}

// SetActorRelativeLocation @ 14bc5c190

void __thiscall
UDS_MainPlayerMovementCore::SetActorRelativeLocation
          (UDS_MainPlayerMovementCore *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.Z;
  return;
}

// SetActorRelativeRotation @ 14bc5c240

void __thiscall
UDS_MainPlayerMovementCore::SetActorRelativeRotation
          (UDS_MainPlayerMovementCore *this,TRotator<double> *param_1)

{
  double dVar1;
  
  dVar1 = param_1->Yaw;
  this->_padding_ = (longlong)param_1->Pitch;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)param_1->Roll;
  return;
}

// SetActorRotation @ 14bc5c2f0

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
UDS_MainPlayerMovementCore::SetActorRotation
          (UDS_MainPlayerMovementCore *this,TRotator<double> *param_1)

{
  bool bVar1;
  AActor *this_00;
  UDS_CharInfoData *this_01;
  TRotator<double> local_28;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_28.Pitch = param_1->Pitch;
    local_28.Yaw = param_1->Yaw;
    local_28.Roll = param_1->Roll;
    AActor::SetActorRotation(this_00,&local_28,None);
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_CharInfoData::SetDirection(this_01,(float)param_1->Yaw);
    }
  }
  return;
}

// SetBrakingDecelerationMountFlying @ 14bc5d380

void __thiscall
UDS_MainPlayerMovementCore::SetBrakingDecelerationMountFlying
          (UDS_MainPlayerMovementCore *this,float param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) &&
     (pUVar1->MountFlyingSetInvalidate != true)) {
    *(float *)((longlong)&pUVar1->_padding_ + 4) = param_1;
  }
  return;
}

// SetBrakingDecelerationSwimming @ 14bc5d3b0

void __thiscall
UDS_MainPlayerMovementCore::SetBrakingDecelerationSwimming
          (UDS_MainPlayerMovementCore *this,float param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
    *(float *)&pUVar1->_padding_ = param_1;
  }
  return;
}

// SetGravityScale @ 14bc5ecb0

void __thiscall
UDS_MainPlayerMovementCore::SetGravityScale(UDS_MainPlayerMovementCore *this,float param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
    *(float *)&pUVar1->_padding_ = param_1;
  }
  return;
}

// SetMaxAcceleration @ 14bc611e0

void __thiscall
UDS_MainPlayerMovementCore::SetMaxAcceleration(UDS_MainPlayerMovementCore *this,float param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
    *(float *)((longlong)&pUVar1->_padding_ + 4) = param_1;
  }
  return;
}

// SetMaxMountFlyingSpeed @ 14bc61200

void __thiscall
UDS_MainPlayerMovementCore::SetMaxMountFlyingSpeed(UDS_MainPlayerMovementCore *this,float param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) &&
     (pUVar1->MountFlyingSetInvalidate != true)) {
    *(float *)((longlong)&pUVar1->_padding_ + 4) = param_1;
  }
  return;
}

// SetMountRotationAngleEvent @ 14bc61340

void __thiscall
UDS_MainPlayerMovementCore::SetMountRotationAngleEvent
          (UDS_MainPlayerMovementCore *this,float param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
    pUVar1->MountRotateAngle = param_1;
    pUVar1->OriginMountRotateAngle = param_1;
  }
  return;
}

// SetMoveToFloor @ 14bc61380

void __thiscall
UDS_MainPlayerMovementCore::SetMoveToFloor
          (UDS_MainPlayerMovementCore *this,bool param_1,float param_2)

{
  return;
}

// SetMovementMode @ 14bc616c0

void __thiscall
UDS_MainPlayerMovementCore::SetMovementMode(UDS_MainPlayerMovementCore *this,EMovementMode param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  EMovementMode EVar2;
  
  if ((this->MovementComponent).field0_0x0.DebugPtr != (UDS_MainPlayerMovementComponent *)0x0) {
    EVar2 = (**(code **)(this->_padding_ + 0x438))();
    this->PrevMovementMode = EVar2;
    if (EVar2 != param_1) {
      pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x658))(pUVar1,param_1,0);
    }
  }
  return;
}

// SetPrevMovementMode @ 14bc64190

void __thiscall
UDS_MainPlayerMovementCore::SetPrevMovementMode
          (UDS_MainPlayerMovementCore *this,EMovementMode param_1)

{
  this->PrevMovementMode = param_1;
  return;
}

// SetTerminalVelocity @ 14bc64b20

void __thiscall
UDS_MainPlayerMovementCore::SetTerminalVelocity(UDS_MainPlayerMovementCore *this,float param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(((this->MovementComponent).field0_0x0.DebugPtr)->_padding_ + 0x520))();
  *(float *)(lVar1 + 0x2f8) = param_1;
  return;
}

// SetUseSweepTest @ 14bc64dd0

void __thiscall
UDS_MainPlayerMovementCore::SetUseSweepTest(UDS_MainPlayerMovementCore *this,bool param_1)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  *(bool *)((longlong)&this->_padding_ + 4) = param_1;
  if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
    pUVar1->UseSweepTest = param_1;
  }
  return;
}

// SetVelocity @ 14bc64df0

void __thiscall
UDS_MainPlayerMovementCore::SetVelocity(UDS_MainPlayerMovementCore *this,TVector<double> *param_1)

{
  double dVar1;
  UDS_MainPlayerMovementComponent *pUVar2;
  double dVar3;
  
  pUVar2 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_MainPlayerMovementComponent *)0x0) {
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    pUVar2->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
    pUVar2->_padding_ = (longlong)dVar3;
    pUVar2->_padding_ = (longlong)dVar1;
  }
  return;
}

// SetWalkableFloorAngle @ 14bc64f20

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
UDS_MainPlayerMovementCore::SetWalkableFloorAngle(UDS_MainPlayerMovementCore *this,float param_1)

{
  UCharacterMovementComponent::SetWalkableFloorAngle
            ((UCharacterMovementComponent *)(this->MovementComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// SetupDelegates @ 14bc652e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MainPlayerMovementCore::SetupDelegates(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar4;
  UDS_MountEvent *pUVar5;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateRegistration<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_MainPlayerMovementCore>
              ((TMulticastDelegateRegistration<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar3[4].field_0x18,(UDS_MainPlayerMovementCore *)local_148,(pmf_6e8350d7)this);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
    if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
      *(float *)&pUVar1->_padding_ = (float)*(double *)&pUVar3[4].field_0x10;
      *(float *)&((this->MovementComponent).field0_0x0.DebugPtr)->_padding_ =
           (float)*(double *)&pUVar3[4].field_0x10;
    }
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_MainPlayerMovementCore>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar3[7].field_0x20,(UDS_MainPlayerMovementCore *)local_148,(pmf_4a40e378)this);
  }
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                   "UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_30,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
    else {
      pUVar5 = UDS_EventManager::GetEventInternal<UDS_MountEvent>(this_00);
      if (pUVar5 != (UDS_MountEvent *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar5->SetMountRotationAngleDel,this);
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_MainPlayerMovementCore>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&pUVar5->SetMountRotationAngleDel,(UDS_MainPlayerMovementCore *)local_148,
                   (pmf_ae051338)this);
      }
    }
  }
  return;
}

// SetupMainPlayerActor @ 14bc654b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_MainPlayerMovementCore::SetupMainPlayerActor
          (UDS_MainPlayerMovementCore *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  UDS_MainPlayerMovementCore *pUVar4;
  UDS_MainPlayerMovementCore *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UDS_MainPlayerMovementCore *pUVar9;
  UObject *this_00;
  UFunction *pUVar10;
  UDS_MainPlayerMovementCore *pUVar11;
  <lambda_1> local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FWeakObjectPtr local_c0;
  FName local_b8;
  UDS_MainPlayerMovementCore *local_b0;
  FName local_a8;
  UDS_MainPlayerMovementCore *local_a0;
  FName *local_98;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_90;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  local_res10 = param_1.WeakPtr;
  local_b0 = (UDS_MainPlayerMovementCore *)FWeakObjectPtr::Get(&local_res10);
  pUVar11 = (UDS_MainPlayerMovementCore *)0x0;
  if (local_b0 == (UDS_MainPlayerMovementCore *)0x0) {
LAB_14bc65501:
    local_b0 = pUVar11;
  }
  else {
    pUVar7 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(local_b0->_padding_ + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_b0->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bc65501;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_b0 != (UDS_MainPlayerMovementCore *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b0);
  }
  FWeakObjectPtr::operator=(&(this->MainPlayerActor).WeakPtr,(FObjectPtr)&local_b0);
  bVar6 = FWeakObjectPtr::IsValid(&(this->MainPlayerActor).WeakPtr);
  if (!bVar6) {
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
  pUVar9 = (UDS_MainPlayerMovementCore *)
           strstr("&UDS_MainPlayerMovementCore::OnMovementModeChange","::");
  pUVar5 = pUVar11;
  while (pUVar4 = pUVar9, pUVar4 != (UDS_MainPlayerMovementCore *)0x0) {
    pUVar9 = (UDS_MainPlayerMovementCore *)strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
    pUVar5 = pUVar4;
  }
  pcVar1 = (char *)((longlong)&pUVar5->_padding_ + 2);
  if (((pUVar5 == (UDS_MainPlayerMovementCore *)0x0) || (*pcVar1 == '0')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_a8,pcVar1);
  if ((this == (UDS_MainPlayerMovementCore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.ObjectIndex = 0;
  local_c0.ObjectSerialNumber = 0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  local_res20 = local_a8;
  local_a0 = this;
  if ((this == (UDS_MainPlayerMovementCore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), local_a0 = pUVar11, bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UDS_MainPlayerMovementCore *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_a0);
  local_b8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_68);
  local_res18 = 0;
  if ((local_b8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_c0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    pUVar10 = UObject::FindFunction(this_00,local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (pUVar10 != (UFunction *)0x0) goto LAB_14bc656f2;
  }
  local_98 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,ACharacter_*,enum_EMovementMode,unsigned_char>
  ::__Internal_BindDynamic<UDS_MainPlayerMovementCore>'::__l2::<lambda_1>::operator()(&local_98);
LAB_14bc656f2:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_50);
  local_90.Object = local_c0;
  local_90.FunctionName = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar8[0x1e].field_0x8,
             (FWriteAccessScope *)&local_80);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar8[0x1e].field_0x10,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar8[0x1e].field_0x8,
             &local_90);
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// SetupMovementComponent @ 14bc65780

void __thiscall
UDS_MainPlayerMovementCore::SetupMovementComponent
          (UDS_MainPlayerMovementCore *this,TWeakObjectPtr<UActorComponent,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_MainPlayerMovementComponent *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  pUVar4 = (UDS_MainPlayerMovementComponent *)FWeakObjectPtr::Get(local_res10);
  if (pUVar4 != (UDS_MainPlayerMovementComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_MainPlayerMovementComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14bc657c9;
  }
  pUVar4 = (UDS_MainPlayerMovementComponent *)0x0;
LAB_14bc657c9:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_MainPlayerMovementComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->MovementComponent).field0_0x0.DebugPtr = pUVar4;
    return;
  }
  (this->MovementComponent).field0_0x0.DebugPtr = pUVar4;
  if (pUVar4 == (UDS_MainPlayerMovementComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovementComponent",
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainPlayerMovementCore.cpp"
                       ,0x43a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SnapCenterToFloor @ 14bc66360

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

bool __thiscall
UDS_MainPlayerMovementCore::SnapCenterToFloor
          (UDS_MainPlayerMovementCore *this,UWorld *param_1,TVector<double> *param_2,
          FWalkParams *param_3,TVector<double> *param_4,FHitResult *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  FName *pFVar8;
  AActor *pAVar9;
  float fVar10;
  double dVar11;
  undefined1 auStackY_198 [32];
  TStatId local_138;
  FName local_130;
  FCollisionShape local_128;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (UWorld *)0x0) {
    bVar7 = false;
  }
  else {
    local_128.field1_0x4.Box.HalfExtentY = param_3->CapsuleHalfHeight;
    local_128.field1_0x4.Box.HalfExtentX = param_3->CapsuleRadius;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.X;
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    dVar11 = (double)(local_128.field1_0x4.Box.HalfExtentY + param_3->PenetrationSlop);
    local_128.ShapeType = Capsule;
    dVar5 = (param_2->field0_0x0)._s_0.Z;
    local_100._s_0.Z = dVar11 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z + dVar5;
    local_100._s_0.X = dVar11 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X + dVar4;
    local_100._s_0.Y = dVar11 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y + dVar3;
    dVar11 = (double)param_3->FloorProbe;
    local_118._s_0.X = dVar4 - dVar11 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    local_118._s_0.Z = dVar5 - dVar11 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    local_118._s_0.Y = dVar3 - dVar11 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_SnapCenterToFloor =
           (FThreadSafeStaticStat<_public:___cdecl__private:_bool___cdecl_UDS_MainPlayerMovementCore::SnapCenterToFloor(UWorld_*,UE::Math::TVector<double>_const_&,FWalkParams_const_&,UE::Math::TVector<double>_&,FHitResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SnapCenterToFloor>
            )0x0;
      pFVar8 = ::FName::FName(&local_130,"SnapCenterToFloor");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SnapCenterToFloor,*pFVar8,
                 L"SnapCenterToFloor","STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",
                 true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_138.StatIdPtr = (TStatIdData *)StatPtr_SnapCenterToFloor;
    if (StatPtr_SnapCenterToFloor ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_bool___cdecl_UDS_MainPlayerMovementCore::SnapCenterToFloor(UWorld_*,UE::Math::TVector<double>_const_&,FWalkParams_const_&,UE::Math::TVector<double>_&,FHitResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SnapCenterToFloor>
         )0x0) {
      pFVar8 = ::FName::FName(&local_130,"SnapCenterToFloor");
      local_138.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_SnapCenterToFloor,*pFVar8,
                      L"SnapCenterToFloor","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"SnapCenterToFloor");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_e8,::StaticName,&local_138,false,(AActor *)0x0);
    pAVar9 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FCollisionQueryParams::AddIgnoredActor(&local_e8,pAVar9);
    bVar7 = UWorld::SweepSingleByChannel
                      (param_1,param_5,(TVector<double> *)&local_100._s_0,
                       (TVector<double> *)&local_118._s_0,&UE::Math::TQuat<double>::Identity,
                       ECC_WorldStatic,&local_128,&local_e8,
                       &FCollisionResponseParams::DefaultResponseParam);
    if (bVar7) {
      fVar10 = (float)*(double *)&(param_5->ImpactPoint).field_0x10;
      if (param_5->bStartPenetrating != '\0') {
        fVar10 = fVar10 - param_5->PenetrationDepth;
      }
      fVar1 = param_3->CapsuleHalfHeight;
      bVar7 = true;
      dVar3 = (param_2->field0_0x0)._s_0.Y;
      fVar2 = param_3->PenetrationSlop;
      (param_4->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
      (param_4->field0_0x0)._s_0.Y = dVar3;
      (param_4->field0_0x0)._s_0.Z = (double)(fVar10 + fVar1 + fVar2);
    }
    else {
      bVar7 = false;
    }
    if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar7;
}

// StopMove @ 14bc66770

void __thiscall UDS_MainPlayerMovementCore::StopMove(UDS_MainPlayerMovementCore *this)

{
  UDS_MainPlayerMovementComponent *pUVar1;
  
  pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_MainPlayerMovementComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bc6677f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x510))();
    return;
  }
  return;
}

// Tick @ 14bc67350

void __thiscall UDS_MainPlayerMovementCore::Tick(UDS_MainPlayerMovementCore *this,float *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  longlong lVar7;
  UDS_CharInfoData *this_00;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  UDS_MovementCore::Tick((UDS_MovementCore *)this,param_1);
  bVar5 = FWeakObjectPtr::IsValid(&(this->MainPlayerActor).WeakPtr);
  if ((bVar5) &&
     ((this->MovementComponent).field0_0x0.DebugPtr != (UDS_MainPlayerMovementComponent *)0x0)) {
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    lVar7 = *(longlong *)(pUVar6 + 0xb);
    local_48._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_48._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_48._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_48._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar7 != 0) {
      local_48._0_4_ = *(undefined4 *)(lVar7 + 0x210);
      local_48._4_4_ = *(undefined4 *)(lVar7 + 0x214);
      local_48._8_4_ = *(undefined4 *)(lVar7 + 0x218);
      local_48._12_4_ = *(undefined4 *)(lVar7 + 0x21c);
      local_48._s_0.Z = *(double *)(lVar7 + 0x220);
    }
    local_28._s_0.X = (double)this->_padding_;
    local_28._s_0.Y = (double)this->_padding_;
    local_28._s_0.Z = (double)this->_padding_;
    *(undefined4 *)&this->_padding_ = local_48._0_4_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_48._4_4_;
    *(undefined4 *)&this->_padding_ = local_48._8_4_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_48._12_4_;
    this->_padding_ = (longlong)local_48._s_0.Z;
    pUVar6 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
    lVar7 = (**(code **)(*(longlong *)&pUVar6[0x29].field_0x10 + 0x1d8))();
    dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    if (lVar7 == 0) {
      lVar7 = this->_padding_;
      this->_padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
      this->_padding_ = (longlong)dVar4;
      this->_padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      *(undefined4 *)&this->_padding_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
      *(undefined4 *)&this->_padding_ = uVar2;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
      this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      (**(code **)(lVar7 + 0x368))(this,&UE::Math::TVector<double>::ZeroVector);
      (**(code **)(this->_padding_ + 0x378))(this,&UE::Math::TRotator<double>::ZeroRotator);
    }
    else {
      UpdateParentMovement
                (this,*param_1,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0);
    }
    UpdateVelocityAndRotation
              (this,*param_1,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0);
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar5) {
      this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_28._s_0.X = (double)this->_padding_;
      local_28._s_0.Y = (double)this->_padding_;
      local_28._s_0.Z = (double)this->_padding_;
      UDS_CharInfoData::SetPosition(this_00,(TVector<double> *)&local_28._s_0);
    }
  }
  return;
}

// TryStepUp @ 14bc68d30

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
UDS_MainPlayerMovementCore::TryStepUp
          (UDS_MainPlayerMovementCore *this,UWorld *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FWalkParams *param_4,FCollisionShape *param_5,
          FCollisionQueryParams *param_6,TVector<double> *param_7)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainPlayerMovementCore.cpp"
                     ,0x35e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// UpdateActorLocation @ 14bc69fa0

void __thiscall UDS_MainPlayerMovementCore::UpdateActorLocation(UDS_MainPlayerMovementCore *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UObject *pUVar6;
  
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  lVar2 = *(longlong *)(pUVar6 + 0xb);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x218);
    lVar1 = *(longlong *)(lVar2 + 0x220);
    this->_padding_ = *(longlong *)(lVar2 + 0x210);
    this->_padding_ = lVar3;
    this->_padding_ = lVar1;
    return;
  }
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar4;
  this->_padding_ = uVar5;
  return;
}

// UpdateCharacterInfo @ 14bc6b530

void __thiscall UDS_MainPlayerMovementCore::UpdateCharacterInfo(UDS_MainPlayerMovementCore *this)

{
  bool bVar1;
  UDS_CharInfoData *this_00;
  TVector<double>_u_0 local_28;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_28._s_0.X = (double)this->_padding_;
    local_28._s_0.Y = (double)this->_padding_;
    local_28._s_0.Z = (double)this->_padding_;
    UDS_CharInfoData::SetPosition(this_00,(TVector<double> *)&local_28._s_0);
  }
  return;
}

// UpdateParentMovement @ 14bc6dbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_MainPlayerMovementCore::UpdateParentMovement
          (UDS_MainPlayerMovementCore *this,float param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  code *pcVar1;
  uint uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  undefined4 uVar17;
  UObject *pUVar18;
  UObject *pUVar19;
  longlong lVar20;
  FWeakObjectPtr *this_00;
  UClass *pUVar21;
  TVector<double>_u_0 *pTVar22;
  TVector<double> *pTVar23;
  TRotator<double> *pTVar24;
  TQuat<double> *pTVar25;
  uint uVar26;
  UDS_MainPlayerMovementCore *pUVar27;
  TTransform<double> *pTVar28;
  TTransform<double> *pTVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  undefined8 uVar60;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined8 uVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  uint uVar75;
  undefined1 auVar74 [16];
  double dVar76;
  double dVar77;
  undefined1 auVar78 [16];
  double dVar79;
  undefined4 uVar80;
  double dVar81;
  double dVar84;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar85;
  double dVar88;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  TVector<double>_u_0 local_1d8;
  float local_1c0;
  UObject *local_1b8;
  undefined1 local_1b0 [16];
  double local_1a0;
  double local_198;
  undefined8 uStack_190;
  TQuat<double> local_188;
  undefined1 local_168 [16];
  TVector<double>_u_0 local_158;
  double local_140;
  double dStack_138;
  TVector<double>_u_0 local_130;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_e8;
  
  local_1c0 = param_1;
  bVar15 = FWeakObjectPtr::IsValid(&(this->ParentActor).WeakPtr);
  if (bVar15) {
    pUVar18 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
    pUVar19 = FWeakObjectPtr::Get(&(this->ParentActor).WeakPtr);
    lVar20 = (**(code **)(*(longlong *)&pUVar18[0x29].field_0x10 + 0x1d8))
                       (&pUVar18[0x29].field_0x10);
    if (*(longlong *)&pUVar19[0x11].field_0x20 == lVar20) goto LAB_14bc6dccf;
  }
  pUVar18 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
  this_00 = (FWeakObjectPtr *)
            (**(code **)(*(longlong *)&pUVar18[0x29].field_0x10 + 0x1d0))
                      (&pUVar18[0x29].field_0x10,&local_198);
  local_1b8 = FWeakObjectPtr::Get(this_00);
  if (local_1b8 == (UObject *)0x0) {
LAB_14bc6dca1:
    local_1b8 = (UObject *)0x0;
  }
  else {
    pUVar21 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
    iVar16 = (int)pUVar21->_padding_;
    if ((*(int *)(*(longlong *)&local_1b8->field_0x10 + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_1b8->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar21->_padding_)) goto LAB_14bc6dca1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1b8);
  }
  FWeakObjectPtr::operator=(&(this->ParentActor).WeakPtr,(FObjectPtr)&local_1b8);
LAB_14bc6dccf:
  bVar15 = FWeakObjectPtr::IsValid(&(this->ParentActor).WeakPtr);
  if (bVar15) {
    local_1a0 = (double)this->_padding_;
    auVar51._0_8_ = (double)this->_padding_;
    auVar51._8_8_ = this->_padding_;
    uVar2 = (uint)((ulonglong)auVar51._8_8_ >> 0x20);
    local_140 = (double)this->_padding_;
    dStack_138 = (double)this->_padding_;
    local_1b8 = (UObject *)this->_padding_;
    local_1b0 = auVar51;
    local_168 = auVar51;
    local_e8 = (double)local_1b8;
    pUVar18 = FWeakObjectPtr::Get(&(this->ParentActor).WeakPtr);
    lVar20 = *(longlong *)(pUVar18 + 0xb);
    uVar65 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (lVar20 != 0) {
      uVar65 = *(double *)(lVar20 + 0x220);
      uVar48 = *(double *)(lVar20 + 0x210);
      uVar60 = *(double *)(lVar20 + 0x218);
    }
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar65;
    this->_padding_ = uVar48;
    this->_padding_ = uVar60;
    this->_padding_ = uVar65;
    pUVar18 = FWeakObjectPtr::Get(&(this->ParentActor).WeakPtr);
    uVar65 = auVar68._8_8_;
    if (*(USceneComponent **)(pUVar18 + 0xb) == (USceneComponent *)0x0) {
      pTVar22 = &local_1d8;
      local_1d8._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_1d8._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_1d8._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    else {
      pTVar22 = (TVector<double>_u_0 *)
                USceneComponent::GetComponentRotation
                          (*(USceneComponent **)(pUVar18 + 0xb),(TRotator<double> *)&local_1d8._s_0)
      ;
      uVar65 = auVar68._8_8_;
    }
    dVar77 = __real_3f1a36e2e0000000;
    dVar73 = (pTVar22->_s_0).Y;
    this->_padding_ = (longlong)(pTVar22->_s_0).X;
    this->_padding_ = (longlong)dVar73;
    uVar75 = (uint)((ulonglong)auVar51._0_8_ >> 0x20);
    this->_padding_ = (longlong)(pTVar22->_s_0).Z;
    if (dVar77 < (double)CONCAT44(uVar75 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(auVar51._0_8_,0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uStack_190 = 0;
      local_198 = (double)local_1b0._8_8_;
    }
    else {
      auVar10._4_8_ = uVar65;
      auVar10._0_4_ = uVar75;
      auVar61._0_8_ = auVar10._0_8_ << 0x20;
      auVar61._8_4_ = (uint)auVar51._8_8_;
      auVar61._12_4_ = uVar2;
      local_198 = auVar61._8_8_;
      uStack_190 = auVar51._8_8_;
      if (((double)CONCAT44(uVar2 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)auVar51._8_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           dVar77) &&
         ((double)CONCAT44((uint)((ulonglong)local_1a0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_1a0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          dVar77)) {
        pUVar18 = FWeakObjectPtr::Get(&(this->ParentActor).WeakPtr);
        lVar20 = *(longlong *)(pUVar18 + 0xb);
        if (lVar20 == 0) {
          local_168._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_168._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          local_168 = *(undefined1 (*) [16])(lVar20 + 0x210);
          local_1a0 = *(double *)(lVar20 + 0x220);
        }
        auVar51._0_8_ = local_168._0_8_;
        auVar11._4_8_ = auVar51._8_8_;
        auVar11._0_4_ = local_168._4_4_;
        auVar62._0_8_ = auVar11._0_8_ << 0x20;
        auVar62._8_4_ = local_168._8_4_;
        auVar62._12_4_ = local_168._12_4_;
        local_198 = auVar62._8_8_;
        uStack_190 = local_168._8_8_;
      }
    }
    local_1d8._s_0.Z = (double)this->_padding_ - local_1a0;
    this->_padding_ = (longlong)((double)this->_padding_ - auVar51._0_8_);
    this->_padding_ = (longlong)((double)this->_padding_ - local_198);
    this->_padding_ = (longlong)local_1d8._s_0.Z;
    iVar16 = (**(code **)(this->_padding_ + 0x438))(this);
    if (iVar16 == 3) {
      local_1d8._s_0.X = (double)this->_padding_ + (double)this->_padding_;
      local_1d8._s_0.Y = (double)this->_padding_ + (double)this->_padding_;
      local_1d8._s_0.Z = (double)this->_padding_ + (double)this->_padding_;
      (**(code **)(this->_padding_ + 0x358))(this,&local_1d8);
      this->IsRideFalling = true;
    }
    else if (this->IsRideFalling == true) {
      this->IsRideFalling = false;
      local_1d8._s_0.X = (double)this->_padding_ + (double)this->_padding_;
      local_1d8._s_0.Y = (double)this->_padding_ + (double)this->_padding_;
      local_1d8._s_0.Z = (double)this->_padding_ + (double)this->_padding_;
      (**(code **)(this->_padding_ + 0x358))(this,&local_1d8);
      (**(code **)(((this->MovementComponent).field0_0x0.DebugPtr)->_padding_ + 0x6e0))();
    }
    pTVar23 = UDS_MovementCore::GetActorLocation
                        ((UDS_MovementCore *)this,(TVector<double> *)&local_1d8._s_0);
    auVar51._0_8_ = (pTVar23->field0_0x0)._s_0.Y;
    this->_padding_ = (longlong)(pTVar23->field0_0x0)._s_0.X;
    this->_padding_ = (longlong)auVar51._0_8_;
    this->_padding_ = (longlong)(pTVar23->field0_0x0)._s_0.Z;
    pUVar18 = FWeakObjectPtr::Get(&(this->ParentActor).WeakPtr);
    pTVar29 = &UE::Math::TTransform<double>::Identity;
    if (*(longlong *)(pUVar18 + 0xb) == 0) {
      pTVar28 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar28 = (TTransform<double> *)(*(longlong *)(pUVar18 + 0xb) + 0x1f0);
    }
    pTVar24 = UDS_MovementCore::GetActorRotation
                        ((UDS_MovementCore *)this,(TRotator<double> *)&local_1d8._s_0);
    pTVar25 = UE::Math::TRotator<double>::Quaternion(pTVar24,&local_188);
    dVar81 = (pTVar28->Rotation).XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar84 = (pTVar28->Rotation).XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar73 = pTVar25->Z;
    dVar3 = pTVar25->W;
    dVar5 = pTVar25->X;
    dVar6 = pTVar25->Y;
    dVar85 = (pTVar28->Rotation).ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar88 = (pTVar28->Rotation).ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar66._8_4_ = SUB84(dVar88,0);
    auVar66._0_8_ = dVar85;
    auVar66._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
    auVar49._8_4_ = SUB84(dVar84,0);
    auVar49._0_8_ = dVar84;
    auVar49._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
    auVar37._8_4_ = SUB84(dVar85,0);
    auVar37._0_8_ = dVar85;
    auVar37._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
    auVar51._0_8_ =
         dVar81 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
         dVar6 * dVar88 +
         auVar49._8_8_ * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
         auVar37._8_8_ * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_108 = dVar81 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar73 * auVar66._8_8_ +
                dVar84 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar85 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dStack_100 = dVar81 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar3 * dVar88 +
                 dVar84 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar85 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_118._8_4_ = SUB84(auVar51._0_8_,0);
    local_118._0_8_ =
         dVar81 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar5 * auVar66._8_8_ +
         dVar84 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar85 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_118._12_4_ = (int)((ulonglong)auVar51._0_8_ >> 0x20);
    pUVar18 = FWeakObjectPtr::Get(&(this->ParentActor).WeakPtr);
    if (*(longlong *)(pUVar18 + 0xb) != 0) {
      pTVar29 = (TTransform<double> *)(*(longlong *)(pUVar18 + 0xb) + 0x1f0);
    }
    dVar73 = (pTVar29->Rotation).XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar3 = (pTVar29->Rotation).XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar5 = (pTVar29->Rotation).ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar6 = (pTVar29->Rotation).ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar63._8_4_ = SUB84(dVar3,0);
    auVar63._0_8_ = dVar73;
    auVar63._12_4_ = uVar17;
    dVar85 = (double)this->_padding_ - (pTVar29->Translation).ZW.m128d_f64[0];
    dVar81 = (double)this->_padding_ - (pTVar29->Translation).XY.m128d_f64[0];
    dVar84 = (double)this->_padding_ - (pTVar29->Translation).XY.m128d_f64[1];
    uVar80 = (undefined4)((ulonglong)dVar84 >> 0x20);
    dVar88 = auVar63._8_8_;
    auVar89._8_4_ = SUB84(dVar84,0);
    auVar89._0_8_ = dVar81;
    auVar89._12_4_ = uVar80;
    auVar38._8_4_ = SUB84(dVar5,0);
    auVar38._0_8_ = dVar88;
    auVar38._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar67._8_4_ = SUB84(dVar3,0);
    auVar67._0_8_ = dVar73;
    auVar67._12_4_ = uVar17;
    auVar90._0_8_ = auVar89._8_8_ * dVar73 - dVar88 * dVar81;
    auVar90._8_8_ = dVar85 * dVar3 - auVar38._8_8_ * dVar84;
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar68 = blendpd(auVar67,auVar4,2);
    auVar78._8_4_ = SUB84(auVar90._8_8_,0);
    auVar78._0_8_ = auVar90._0_8_;
    auVar78._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
    auVar50._8_4_ = SUB84(dVar84,0);
    auVar50._0_8_ = dVar81;
    auVar50._12_4_ = uVar80;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar85;
    auVar51 = blendpd(auVar50,auVar8,2);
    auVar52._0_8_ = auVar51._0_8_ * dVar5 - auVar68._0_8_ * dVar85;
    auVar52._8_8_ = auVar51._8_8_ * dVar6 - auVar68._8_8_ * 0.0;
    auVar51 = blendpd(auVar90,auVar52,2);
    dVar76 = auVar78._8_8_ + auVar78._8_8_;
    dVar79 = auVar52._0_8_ + auVar52._0_8_;
    auVar91._0_8_ = auVar51._0_8_ + auVar51._0_8_;
    auVar91._8_8_ = auVar51._8_8_ + auVar51._8_8_;
    uVar17 = SUB84(dVar79,0);
    auVar86._8_4_ = uVar17;
    auVar86._0_8_ = dVar76;
    uVar80 = (undefined4)((ulonglong)dVar79 >> 0x20);
    auVar86._12_4_ = uVar80;
    auVar39._8_4_ = uVar17;
    auVar39._0_8_ = dVar76;
    auVar39._12_4_ = uVar80;
    auVar82._8_4_ = uVar17;
    auVar82._0_8_ = dVar76;
    auVar82._12_4_ = uVar80;
    auVar51 = blendpd(auVar82,auVar91,2);
    auVar87._0_8_ = auVar86._8_8_ * dVar73 - dVar76 * dVar88;
    auVar87._8_8_ = auVar91._0_8_ * dVar3 - auVar39._8_8_ * dVar5;
    auVar40._8_4_ = SUB84(auVar91._8_8_,0);
    auVar40._0_8_ = auVar91._0_8_;
    auVar40._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
    auVar83._0_8_ = auVar51._0_8_ * dVar5 - auVar91._0_8_ * auVar68._0_8_;
    auVar83._8_8_ = auVar51._8_8_ * dVar6 - auVar40._8_8_ * auVar68._8_8_;
    auVar51 = *(undefined1 (*) [16])(pTVar29->Scale3D).ZW.m128d_f64;
    auVar69._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(pTVar29->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(pTVar29->Scale3D).XY.m128d_f64);
    auVar69._8_4_ = _UNK_15061cc88 & *(uint *)((pTVar29->Scale3D).XY.m128d_f64 + 1);
    auVar69._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(pTVar29->Scale3D).XY.m128d_f64 + 0xc);
    lVar20 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar51._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar51._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar68 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(pTVar29->Scale3D).XY.m128d_f64);
    lVar30 = -(ulonglong)(auVar69._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar33 = -(ulonglong)(auVar69._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar41._8_4_ = SUB84(auVar87._8_8_,0);
    auVar41._0_8_ = auVar87._0_8_;
    auVar41._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
    auVar70._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar68._4_4_,
                          ~(uint)lVar30 & auVar68._0_4_);
    auVar70._8_4_ = ~(uint)lVar33 & auVar68._8_4_;
    auVar70._12_4_ = ~(uint)((ulonglong)lVar33 >> 0x20) & auVar68._12_4_;
    auVar7._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar7._0_8_ = auVar51._0_8_;
    auVar7._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar7);
    local_158._s_0.X = auVar70._0_8_ * (dVar76 * dVar6 + dVar81 + auVar41._8_8_);
    local_158._s_0.Y = auVar70._8_8_ * (dVar79 * dVar6 + dVar84 + auVar83._0_8_);
    auVar68 = blendpd(auVar87,auVar83,2);
    local_1d8._s_0.X = (double)this->_padding_;
    local_1d8._s_0.Y = (double)this->_padding_;
    local_158._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar51._4_4_,
                          ~(uint)lVar20 & auVar51._0_4_) *
         (auVar91._0_8_ * dVar6 + dVar85 + auVar68._0_8_);
    local_1d8._s_0.Z = (double)this->_padding_;
    pTVar23 = UE::Math::TRotator<double>::RotateVector
                        ((TRotator<double> *)&this->_padding_,(TVector<double> *)&local_188,
                         (TVector<double> *)&local_1d8._s_0);
    auVar51._0_8_ = (pTVar23->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (pTVar23->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = auVar51._0_8_;
    (param_2->field0_0x0)._s_0.Z = (pTVar23->field0_0x0)._s_0.Z;
    UE::Math::TRotator<double>::RotateVector
              ((TRotator<double> *)&this->_padding_,(TVector<double> *)&local_130._s_0,
               (TVector<double> *)&local_158._s_0);
    uVar14 = _UNK_15061cc8c;
    uVar13 = _UNK_15061cc88;
    uVar75 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    (param_3->field0_0x0)._s_0.X = local_130._s_0.X;
    (param_3->field0_0x0)._s_0.Y = local_130._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_130._s_0.Z;
    if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) & uVar75,
                           (uint)*(undefined8 *)&param_2->field0_0x0 & uVar2) <= dVar77) &&
        (auVar51._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
        (double)CONCAT44((uint)((ulonglong)auVar51._8_8_ >> 0x20) & uVar75,
                         (uint)auVar51._8_8_ & uVar2) <= dVar77)) &&
       (auVar51._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
       (double)CONCAT44((uint)((ulonglong)auVar51._8_8_ >> 0x20) & uVar75,
                        (uint)auVar51._8_8_ & uVar2) <= dVar77)) {
      (param_2->field0_0x0)._s_0.X = local_130._s_0.X;
      (param_2->field0_0x0)._s_0.Y = local_130._s_0.Y;
      (param_2->field0_0x0)._s_0.Z = local_130._s_0.Z;
    }
    (**(code **)(this->_padding_ + 0x368))(this,&local_158);
    pcVar1 = *(code **)(this->_padding_ + 0x378);
    pTVar24 = UE::Math::TQuat<double>::Rotator
                        ((TQuat<double> *)local_118,(TRotator<double> *)&local_188);
    pUVar27 = this;
    uVar17 = (*pcVar1)(this,pTVar24);
    auVar12._8_8_ = dStack_138;
    auVar12._0_8_ = local_140;
    this->_padding_ =
         (longlong)
         (((double)this->_padding_ - (double)this->_padding_) -
         ((double)this->_padding_ - (double)local_168._0_8_));
    this->_padding_ =
         (longlong)
         (((double)this->_padding_ - (double)this->_padding_) -
         ((double)this->_padding_ - local_198));
    auVar51._0_8_ = __real_3ff0000000000000;
    this->_padding_ =
         (longlong)
         (((double)this->_padding_ - (double)this->_padding_) -
         ((double)this->_padding_ - local_1a0));
    auVar51._0_8_ = auVar51._0_8_ / (double)local_1c0;
    auVar53._0_8_ = auVar51._0_8_ * (double)this->_padding_;
    auVar53._8_8_ = 0;
    local_188.Z = auVar51._0_8_ * (double)this->_padding_;
    this->_padding_ = (longlong)(auVar51._0_8_ * (double)this->_padding_);
    this->_padding_ = (longlong)auVar53._0_8_;
    this->_padding_ = (longlong)local_188.Z;
    auVar51 = divpd(auVar12,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar51 = roundpd(auVar53,auVar51,3);
    dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar54._0_8_ = auVar51._0_8_ * dVar6;
    dVar81 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar54._8_8_ = auVar51._8_8_ * dVar81;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = local_1b8;
    auVar51 = divpd(auVar42,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar85 = local_140 - auVar54._0_8_;
    dVar88 = dStack_138 - auVar54._8_8_;
    auVar51 = roundpd(auVar54,auVar51,3);
    dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar43._8_4_ = SUB84(dVar88,0);
    auVar43._0_8_ = dVar85;
    auVar43._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
    dVar73 = (double)local_1b8 - auVar51._0_8_ * dVar3;
    auVar51._0_8_ = 0.0 - auVar51._8_8_ * dVar5;
    dVar84 = auVar43._8_8_ + dVar81;
    uVar31 = -(ulonglong)(0.0 <= dVar73);
    uVar34 = -(ulonglong)(0.0 <= auVar51._0_8_);
    uVar32 = -(ulonglong)(0.0 <= dVar85);
    uVar35 = -(ulonglong)(0.0 <= dVar88);
    auVar55._0_8_ = uVar32 & (ulonglong)dVar85;
    auVar55._8_4_ = (undefined4)(uVar35 & (ulonglong)dVar88);
    auVar55._12_4_ = (undefined4)((uVar35 & (ulonglong)dVar88) >> 0x20);
    auVar74._0_4_ = ~(uint)uVar32 & SUB84(dVar85 + dVar6,0);
    auVar74._4_4_ = ~(uint)(uVar32 >> 0x20) & (uint)((ulonglong)(dVar85 + dVar6) >> 0x20);
    auVar74._8_4_ = ~(uint)uVar35 & SUB84(dVar84,0);
    auVar74._12_4_ = ~(uint)(uVar35 >> 0x20) & (uint)((ulonglong)dVar84 >> 0x20);
    auVar71._0_8_ = (ulonglong)dVar73 & uVar31;
    auVar71._8_4_ = (undefined4)(uVar34 & (ulonglong)auVar51._0_8_);
    auVar71._12_4_ = (undefined4)((uVar34 & (ulonglong)auVar51._0_8_) >> 0x20);
    auVar74 = auVar74 | auVar55;
    auVar44._8_4_ = SUB84(auVar51._0_8_,0);
    auVar44._0_8_ = dVar73;
    auVar44._12_4_ = (int)((ulonglong)auVar51._0_8_ >> 0x20);
    auVar51._0_8_ = auVar44._8_8_ + dVar5;
    auVar64._0_4_ = ~(uint)uVar31 & SUB84(dVar73 + dVar3,0);
    auVar64._4_4_ = ~(uint)(uVar31 >> 0x20) & (uint)((ulonglong)(dVar73 + dVar3) >> 0x20);
    auVar64._8_4_ = ~(uint)uVar34 & SUB84(auVar51._0_8_,0);
    auVar64._12_4_ = ~(uint)(uVar34 >> 0x20) & (uint)((ulonglong)auVar51._0_8_ >> 0x20);
    auVar64 = auVar64 | auVar71;
    uVar32 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar74._0_8_);
    uVar35 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar74._8_8_);
    uVar34 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar64._0_8_);
    uVar36 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar64._8_8_);
    auVar56._0_8_ = uVar34 & (ulonglong)(auVar64._0_8_ - dVar3);
    uVar31 = uVar36 & (ulonglong)(auVar64._8_8_ - dVar5);
    auVar56._8_4_ = (undefined4)uVar31;
    auVar56._12_4_ = (undefined4)(uVar31 >> 0x20);
    auVar45._0_4_ = ~(uint)uVar34 & auVar64._0_4_;
    auVar45._4_4_ = ~(uint)(uVar34 >> 0x20) & auVar64._4_4_;
    auVar45._8_4_ = ~(uint)uVar36 & auVar64._8_4_;
    auVar45._12_4_ = ~(uint)(uVar36 >> 0x20) & auVar64._12_4_;
    auVar56 = auVar56 | auVar45;
    auVar46._8_4_ = SUB84(dVar77,0);
    auVar46._0_8_ = dVar77;
    auVar46._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
    auVar57._0_8_ = (double)CONCAT44(auVar56._4_4_ & uVar75,auVar56._0_4_ & uVar2);
    auVar57._8_4_ = auVar56._8_4_ & uVar13;
    auVar57._12_4_ = auVar56._12_4_ & uVar14;
    auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < auVar57._8_8_);
    auVar47._0_8_ = -(ulonglong)(dVar77 < auVar57._0_8_);
    uVar26 = movmskpd((int)pUVar27,auVar47);
    auVar58._0_8_ = (ulonglong)(auVar74._0_8_ - dVar6) & uVar32;
    uVar31 = uVar35 & (ulonglong)(auVar74._8_8_ - dVar81);
    auVar58._8_4_ = (undefined4)uVar31;
    auVar58._12_4_ = (undefined4)(uVar31 >> 0x20);
    auVar72._0_4_ = ~(uint)uVar32 & auVar74._0_4_;
    auVar72._4_4_ = ~(uint)(uVar32 >> 0x20) & auVar74._4_4_;
    auVar72._8_4_ = ~(uint)uVar35 & auVar74._8_4_;
    auVar72._12_4_ = ~(uint)(uVar35 >> 0x20) & auVar74._12_4_;
    auVar58 = auVar58 | auVar72;
    auVar59._0_8_ = (double)CONCAT44(auVar58._4_4_ & uVar75,auVar58._0_4_ & uVar2);
    auVar59._8_4_ = auVar58._8_4_ & uVar13;
    auVar59._12_4_ = auVar58._12_4_ & uVar14;
    lVar20 = -(ulonglong)(dVar77 < auVar59._8_8_);
    auVar9._8_4_ = (int)lVar20;
    auVar9._0_8_ = -(ulonglong)(dVar77 < auVar59._0_8_);
    auVar9._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    iVar16 = movmskpd(uVar17,auVar9);
    if ((uVar26 & 0x3fffffff) != 0 || iVar16 != 0) {
      dVar73 = (double)this->_padding_ - local_140;
      dVar77 = (double)this->_padding_ - local_e8;
      pcVar1 = *(code **)(this->_padding_ + 0x370);
      auVar51._0_8_ = (double)this->_padding_ - dStack_138;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (*(USceneComponent **)(pUVar18 + 0xb) == (USceneComponent *)0x0) {
        pTVar24 = (TRotator<double> *)local_1b0;
        local_1b0._8_8_ = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_1b0._0_8_ = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_1a0 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      else {
        pTVar24 = USceneComponent::GetComponentRotation
                            (*(USceneComponent **)(pUVar18 + 0xb),(TRotator<double> *)&local_188);
      }
      local_1d8._s_0.Z = pTVar24->Roll + dVar77;
      local_1d8._s_0.X = pTVar24->Pitch + dVar73;
      local_1d8._s_0.Y = pTVar24->Yaw + auVar51._0_8_;
      (*pcVar1)(this,&local_1d8);
    }
  }
  return;
}

// UpdateVelocityAndRotation @ 14bc6ea20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_MainPlayerMovementCore::UpdateVelocityAndRotation
          (UDS_MainPlayerMovementCore *this,float param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  UObject *pUVar9;
  TRotator<double> *pTVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  TRotator<double> local_68 [4];
  
  dVar7 = __real_3ff0000000000000;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = __real_3ff0000000000000 / (double)param_1;
  this->_padding_ =
       (longlong)(((param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) * dVar4);
  dVar2 = (dVar2 - dVar5) * dVar4;
  dVar3 = (dVar3 - dVar6) * dVar4;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = auVar1._8_8_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (*(USceneComponent **)(pUVar9 + 0xb) == (USceneComponent *)0x0) {
    pTVar10 = local_68;
    local_68[0].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_68[0].Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_68[0].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    pTVar10 = USceneComponent::GetComponentRotation(*(USceneComponent **)(pUVar9 + 0xb),local_68);
  }
  dVar2 = pTVar10->Yaw;
  this->_padding_ = (longlong)pTVar10->Pitch;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = (longlong)pTVar10->Roll;
  if (this->bIsMounted == true) {
    dVar2 = FMath::FindDeltaAngleDegrees<double,double>
                      ((double)this->_padding_,(double)this->_padding_);
    fVar12 = *(float *)&this->_padding_;
    fVar14 = (float)(dVar2 * dVar4);
    if (fVar12 == 0.0) {
      fVar12 = 0.0;
    }
    else if (fVar14 <= 0.0) {
      if (fVar14 <= fVar12) {
        fVar12 = fVar14;
      }
    }
    else if (fVar12 <= fVar14) {
      fVar12 = fVar14;
    }
    *(float *)&this->_padding_ = fVar12;
    *(undefined4 *)&this->_padding_ = 0;
  }
  else if (*(float *)&this->_padding_ == 0.0) {
    dVar2 = FMath::FindDeltaAngleDegrees<double,double>
                      ((double)this->_padding_,(double)this->_padding_);
    *(float *)&this->_padding_ = (float)(dVar2 * dVar4);
  }
  dVar2 = (double)this->_padding_;
  dVar3 = (double)this->_padding_;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar8) {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar11 = (undefined4)*(undefined8 *)&pUVar9[4].field_0x10;
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)&pUVar9[4].field_0x10 >> 0x20);
  }
  else {
    uVar11 = 0;
    uVar13 = 0;
  }
  fVar12 = (float)(double)CONCAT44(uVar13,uVar11) * param_1;
  if (this->bIsMounted == true) {
    fVar12 = *(float *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  }
  else {
    if (fVar12 == 0.0) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
      return;
    }
    dVar2 = (dVar2 - dVar3) / (double)fVar12;
    if (dVar7 <= dVar2) {
      dVar2 = dVar7;
    }
    if (dVar2 <= __real_bff0000000000000) {
      dVar2 = __real_bff0000000000000;
    }
    fVar12 = (float)dVar2 * __real_42b40000;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar12;
  return;
}

// UpdateWalkable @ 14bc6eec0

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
UDS_MainPlayerMovementCore::UpdateWalkable
          (UDS_MainPlayerMovementCore *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,bool *param_4,bool *param_5)

{
  double dVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  TVector<double>_u_0 local_1b8;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  undefined2 uStack_19b;
  undefined1 uStack_199;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  undefined1 local_148 [24];
  double dStack_130;
  double local_128;
  TVector<double> local_120 [5];
  int local_a4;
  FWeakObjectPtr local_90;
  FWeakObjectPtr FStack_88;
  IActorInstanceManagerInterface *local_80;
  undefined8 uStack_78;
  
  pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_);
  if (pFVar6 == (FDS_EntityBase *)0x0) {
    return false;
  }
  memset(local_148,0,0x100);
  local_180._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_148._4_4_ = 1.0;
  uStack_19b = 0;
  local_90.ObjectIndex = 0;
  local_90.ObjectSerialNumber = 0;
  FStack_88.ObjectIndex = 0;
  FStack_88.ObjectSerialNumber = 0;
  uStack_199 = 0;
  local_1b8._s_0.Z = 0.0;
  uStack_19c = 0;
  local_a4 = -1;
  uStack_1a0 = 0xffffffff;
  uStack_78._0_4_ = -1;
  uStack_78._4_1_ = Invalid;
  uStack_78._5_3_ = 0;
  local_80 = (IActorInstanceManagerInterface *)0x0;
  fVar7 = pFVar6->ScaledCapsuleRadius;
  local_168._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_168._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_180._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_180._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_168._s_0.Z = local_180._s_0.Z;
  bVar5 = CheckLocationSweepTest
                    (this,(TVector<double> *)&local_168._s_0,(TVector<double> *)&local_180._s_0,
                     (FHitResult *)local_148);
  if (!bVar5) {
    dVar10 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (param_3->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar10;
    (param_3->field0_0x0)._s_0.Z = dVar1;
    return true;
  }
  local_1b8._s_0.X = (double)local_148._16_8_;
  local_1b8._s_0.Y = dStack_130;
  local_1b8._s_0.Z = local_128;
  DS_Util::GetNPCFloorLocationByLocation
            ((TVector<double> *)&local_198._s_0,(TVector<double> *)&local_1b8._s_0,__real_43160000,
             false);
  fVar4 = __real_40a00000;
  fVar3 = __real_41200000;
  DS_Util::ShowSyncSphere
            (local_120,__real_41200000,5,&FColor::Magenta,false,__real_40a00000,'\0',__real_40a00000
            );
  DS_Util::ShowSyncSphere
            ((TVector<double> *)&local_198._s_0,fVar3,5,&FColor::Blue,false,fVar4,'\0',fVar4);
  dVar10 = (param_1->field0_0x0)._s_0.X - local_198._s_0.X;
  dVar12 = (param_1->field0_0x0)._s_0.Y - local_198._s_0.Y;
  auVar8._0_8_ = dVar10 * dVar10;
  auVar8._8_8_ = 0;
  dVar1 = dVar12 * dVar12 + auVar8._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar1;
  auVar9 = sqrtpd(auVar8,auVar9);
  if ((float)auVar9._0_8_ <= fVar7) {
    dVar10 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (param_3->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar10;
    (param_3->field0_0x0)._s_0.Z = dVar1;
    fVar7 = (float)(**(code **)(this->_padding_ + 0x490))(this);
    return (float)((double)local_120[0].field0_0x0._16_8_ - local_198._s_0.Z) < fVar7;
  }
  uVar2 = (param_1->field0_0x0)._s_0.Z - local_198._s_0.Z;
  if (dVar1 == __real_3ff0000000000000) {
    uVar11 = dVar10;
    uVar13 = dVar12;
    if ((double)uVar2 == 0.0) goto LAB_14bc6f102;
  }
  else {
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (dVar1 < __real_3e45798ee0000000) goto LAB_14bc6f102;
    dVar12 = dVar12 * (__real_3ff0000000000000 / SQRT(dVar1));
    dVar10 = dVar10 * (__real_3ff0000000000000 / SQRT(dVar1));
  }
  uVar11 = dVar10;
  uVar13 = dVar12;
  uVar2 = 0.0;
LAB_14bc6f102:
  dVar1 = (double)fVar7;
  (param_3->field0_0x0)._s_0.X = dVar1 * (double)uVar11 + local_198._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1 * (double)uVar13 + local_198._s_0.Y;
  (param_3->field0_0x0)._s_0.Z = dVar1 * (double)uVar2 + local_198._s_0.Z;
  return true;
}

// ValidateInitialization @ 14bc6f2a0

bool __thiscall
UDS_MainPlayerMovementCore::ValidateInitialization
          (UDS_MainPlayerMovementCore *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UActorComponent,FWeakObjectPtr> param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

