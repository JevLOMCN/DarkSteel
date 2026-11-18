// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 12

// StaticClass @ 146ceaea0

UClass * __cdecl UGameplayTask_SpawnActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_SpawnActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_SpawnActor",
               &Z_Registration_Info_UClass_UGameplayTask_SpawnActor.InnerSingleton,
               StaticRegisterNativesUGameplayTask_SpawnActor,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameplayTask_SpawnActor>,
               InternalVTableHelperCtorCaller<UGameplayTask_SpawnActor>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_SpawnActor.InnerSingleton;
}

// UGameplayTask_SpawnActor @ 146cedab0

UGameplayTask_SpawnActor * __thiscall
UGameplayTask_SpawnActor::UGameplayTask_SpawnActor
          (UGameplayTask_SpawnActor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Success = 0;
  *(undefined8 *)&(this->Success).field_0x8 = 0;
  *(undefined8 *)&(this->Success).field_0x10 = 0;
  *(undefined8 *)&this->DidNotSpawn = 0;
  *(undefined8 *)&(this->DidNotSpawn).field_0x8 = 0;
  *(undefined8 *)&(this->DidNotSpawn).field_0x10 = 0;
  (this->ClassToSpawn).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UGameplayTask_SpawnActor @ 146cedb40

UGameplayTask_SpawnActor * __thiscall
UGameplayTask_SpawnActor::UGameplayTask_SpawnActor
          (UGameplayTask_SpawnActor *this,FObjectInitializer *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&this->Success = 0;
  *(undefined8 *)&(this->Success).field_0x8 = 0;
  *(undefined8 *)&(this->Success).field_0x10 = 0;
  *(undefined8 *)&this->DidNotSpawn = 0;
  *(undefined8 *)&(this->DidNotSpawn).field_0x8 = 0;
  *(undefined8 *)&(this->DidNotSpawn).field_0x10 = 0;
  (this->ClassToSpawn).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UGameplayTask_SpawnActor @ 146cee160

void __thiscall UGameplayTask_SpawnActor::~UGameplayTask_SpawnActor(UGameplayTask_SpawnActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pvVar1 = *(void **)&(this->DidNotSpawn).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DidNotSpawn);
  pvVar1 = *(void **)&(this->Success).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Success);
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UGameplayTask::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginSpawningActor @ 146ceff40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __thiscall
UGameplayTask_SpawnActor::BeginSpawningActor
          (UGameplayTask_SpawnActor *this,UObject *param_1,AActor **param_2)

{
  int iVar1;
  bool bVar2;
  UWorld *this_00;
  TQuat<double> *pTVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  longlong *plVar6;
  UClass *pUVar7;
  undefined1 auStack_148 [32];
  undefined8 local_128 [2];
  TQuat<double> local_118;
  undefined1 local_f8 [112];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this_00 == (UWorld *)0x0) goto LAB_146cf00b6;
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&this->CachedSpawnRotation,&local_118);
  local_88.Translation.XY.m128d_f64[0] = (this->CachedSpawnLocation).field0_0x0._s_0.X;
  local_88.Translation.XY.m128d_f64[1] = (this->CachedSpawnLocation).field0_0x0._s_0.Y;
  pUVar7 = (this->ClassToSpawn).Class.field0_0x0.DebugPtr;
  local_88.Rotation.XY.m128d_f64[0] = pTVar3->X;
  local_88.Rotation.XY.m128d_f64[1] = pTVar3->Y;
  local_88.Rotation.ZW.m128d_f64[0] = pTVar3->Z;
  local_88.Rotation.ZW.m128d_f64[1] = pTVar3->W;
  local_88.Translation.ZW.m128d_f64[0] = (this->CachedSpawnLocation).field0_0x0._s_0.Z;
  local_88.Translation.ZW.m128d_f64[1] = 0.0;
  local_88.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_88.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_88.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_88.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  if ((pUVar7 == (UClass *)0x0) ||
     (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 == (UClass *)0x0)) {
LAB_146cf003c:
    pUVar7 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_146cf003c;
    pUVar7 = (this->ClassToSpawn).Class.field0_0x0.DebugPtr;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_f8);
  local_f8[0x32] = local_f8[0x32] | 4;
  local_f8._16_8_ = (AActor *)0x0;
  local_f8._24_8_ = (APawn *)0x0;
  local_f8[0x30] = AlwaysSpawn;
  local_f8[0x31] = MultiplyWithRoot;
  pAVar5 = (AActor *)0x0;
  if (pUVar7 != (UClass *)0x0) {
    pAVar5 = UWorld::SpawnActor(this_00,pUVar7,&local_88,(FActorSpawnParameters *)local_f8);
  }
  if (local_f8._64_8_ != 0) {
    plVar6 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *param_2 = pAVar5;
LAB_146cf00b6:
  pAVar5 = *param_2;
  if (pAVar5 == (AActor *)0x0) {
    local_128[0] = 0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->DidNotSpawn,local_128)
    ;
  }
  return pAVar5 != (AActor *)0x0;
}

// FinishSpawningActor @ 146cf1d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UGameplayTask_SpawnActor::FinishSpawningActor
          (UGameplayTask_SpawnActor *this,UObject *param_1,AActor *param_2)

{
  TQuat<double> *pTVar1;
  undefined1 auStack_d8 [32];
  AActor *local_a8 [2];
  TQuat<double> local_98;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 != (AActor *)0x0) {
    pTVar1 = UE::Math::TRotator<double>::Quaternion(&this->CachedSpawnRotation,&local_98);
    local_78.Translation.XY.m128d_f64[0] = (this->CachedSpawnLocation).field0_0x0._s_0.X;
    local_78.Translation.XY.m128d_f64[1] = (this->CachedSpawnLocation).field0_0x0._s_0.Y;
    local_78.Rotation.XY.m128d_f64[0] = pTVar1->X;
    local_78.Rotation.XY.m128d_f64[1] = pTVar1->Y;
    local_78.Rotation.ZW.m128d_f64[0] = pTVar1->Z;
    local_78.Rotation.ZW.m128d_f64[1] = pTVar1->W;
    local_78.Translation.ZW.m128d_f64[0] = (this->CachedSpawnLocation).field0_0x0._s_0.Z;
    local_78.Translation.ZW.m128d_f64[1] = 0.0;
    local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    AActor::FinishSpawning
              (param_2,&local_78,false,(FComponentInstanceDataCache *)0x0,OverrideRootScale);
    local_a8[0] = param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->Success,local_a8);
  }
  UGameplayTask::EndTask((UGameplayTask *)this);
  return;
}

// GetPrivateStaticClass @ 146cf3020

UClass * __cdecl UGameplayTask_SpawnActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_SpawnActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_SpawnActor",
               &Z_Registration_Info_UClass_UGameplayTask_SpawnActor.InnerSingleton,
               StaticRegisterNativesUGameplayTask_SpawnActor,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameplayTask_SpawnActor>,
               InternalVTableHelperCtorCaller<UGameplayTask_SpawnActor>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_SpawnActor.InnerSingleton;
}

// SpawnActor @ 146cf7a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTask_SpawnActor * __cdecl
UGameplayTask_SpawnActor::SpawnActor
          (TScriptInterface<IGameplayTaskOwnerInterface> *param_1,TVector<double> *param_2,
          TRotator<double> *param_3,TSubclassOf<AActor> param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uchar uVar4;
  longlong lVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UGameplayTask_SpawnActor *this;
  longlong *plVar8;
  UGameplayTask_SpawnActor *pUVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((*(longlong *)param_1 == 0) ||
     (plVar8 = *(longlong **)&param_1->field_0x8, plVar8 == (longlong *)0x0)) {
    this = (UGameplayTask_SpawnActor *)0x0;
  }
  else {
    bVar10 = true;
    if ((param_5) && (lVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,0), lVar5 != 0)) {
      bVar10 = *(char *)(lVar5 + 0x168) == '\x03';
    }
    this = (UGameplayTask_SpawnActor *)0x0;
    if (bVar10) {
      pUVar6 = *(UObject **)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pUVar9 = *(UGameplayTask_SpawnActor **)&param_1->field_0x8;
      if (pUVar6 == (UObject *)0x0) {
        pUVar9 = this;
      }
      if (pUVar9 != (UGameplayTask_SpawnActor *)0x0) {
        pUVar6 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar6,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar7 = StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar7);
        local_b8._8_8_ = pUVar6;
        this = (UGameplayTask_SpawnActor *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar8 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar8 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        *(FNameEntryId *)&this->_padding_ = 0;
        *(uint *)((longlong)&this->_padding_ + 4) = 0;
        uVar4 = (**(code **)(pUVar9->_padding_ + 0x28))(pUVar9);
        UGameplayTask::InitTask((UGameplayTask *)this,(IGameplayTaskOwnerInterface *)pUVar9,uVar4);
        if (this != (UGameplayTask_SpawnActor *)0x0) {
          dVar2 = (param_2->field0_0x0)._s_0.Y;
          dVar1 = (param_2->field0_0x0)._s_0.Z;
          (this->CachedSpawnLocation).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
          (this->CachedSpawnLocation).field0_0x0._s_0.Y = dVar2;
          dVar2 = param_3->Pitch;
          dVar3 = param_3->Yaw;
          (this->CachedSpawnLocation).field0_0x0._s_0.Z = dVar1;
          dVar1 = param_3->Roll;
          (this->CachedSpawnRotation).Pitch = dVar2;
          (this->CachedSpawnRotation).Yaw = dVar3;
          (this->CachedSpawnRotation).Roll = dVar1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (*(UObject **)param_4.Class.field0_0x0 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(*(UObject **)param_4.Class.field0_0x0);
          }
          (this->ClassToSpawn).Class.field0_0x0 =
               *(TObjectPtr<UClass>_u_0 *)param_4.Class.field0_0x0;
        }
      }
    }
  }
  return this;
}

// StaticRegisterNativesUGameplayTask_SpawnActor @ 146cf7cb0

void __cdecl UGameplayTask_SpawnActor::StaticRegisterNativesUGameplayTask_SpawnActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBeginSpawningActor @ 146cf9180

void __cdecl
UGameplayTask_SpawnActor::execBeginSpawningActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x310))(param_1,local_res10,puVar3);
  *(undefined1 *)param_3 = uVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar3);
  }
  return;
}

// execFinishSpawningActor @ 146cf98b0

void __cdecl
UGameplayTask_SpawnActor::execFinishSpawningActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1,local_res10,local_res8);
  return;
}

// execSpawnActor @ 146cf9c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UGameplayTask_SpawnActor::execSpawnActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TObjectPtr<UGameplayTask>_u_0 TVar3;
  uchar uVar4;
  UGameplayTask *pUVar5;
  longlong lVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UGameplayTask *this;
  longlong *plVar9;
  UGameplayTask *pUVar10;
  UGameplayTask *pUVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_178 [32];
  int local_158 [2];
  TObjectPtr<UGameplayTask>_u_0 local_150;
  UObject *local_148;
  UGameplayTask *pUStack_140;
  FWeakObjectPtr local_138;
  IGameplayTaskOwnerInterface *pIStack_130;
  FWeakObjectPtr local_128;
  FName local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108 [128];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148 = (UObject *)0x0;
  pUStack_140 = (UGameplayTask *)0x0;
  FInterfaceProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  pUVar10 = (UGameplayTask *)0x0;
  local_150.DebugPtr = (UGameplayTask *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_158[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  TVar3 = local_150;
  bVar12 = local_158[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_150.DebugPtr != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_150.DebugPtr);
  }
  pUVar7 = local_148;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_148);
  }
  pUVar11 = pUStack_140;
  pUVar5 = pUStack_140;
  if (pUVar7 == (UObject *)0x0) {
    pUVar5 = pUVar10;
  }
  this = pUVar10;
  if (pUVar5 != (UGameplayTask *)0x0) {
    bVar13 = true;
    if (bVar12) {
      pUVar5 = pUVar10;
      if (pUVar7 != (UObject *)0x0) {
        pUVar5 = pUStack_140;
      }
      lVar6 = (**(code **)(pUVar5->_padding_ + 0x18))(pUVar5,0);
      if (lVar6 != 0) {
        bVar13 = *(char *)(lVar6 + 0x168) == '\x03';
      }
    }
    if ((bVar13) && (pUVar7 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      this = (UGameplayTask *)0x0;
      if (pUVar11 != (UGameplayTask *)0x0) {
        if (pUVar7 == (UObject *)0x0) {
          pUVar11 = pUVar10;
        }
        pUVar7 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_108,pUVar8);
        local_108._8_8_ = pUVar7;
        this = (UGameplayTask *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_108);
        if (local_108._64_8_ != 0) {
          plVar9 = (longlong *)(local_108 + 0x50);
          if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
            plVar9 = (longlong *)local_108._104_8_;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        (this->InstanceName).ComparisonIndex = 0;
        (this->InstanceName).Number = 0;
        uVar4 = (**(code **)(pUVar11->_padding_ + 0x28))(pUVar11);
        UGameplayTask::InitTask(this,(IGameplayTaskOwnerInterface *)pUVar11,uVar4);
        if (this != (UGameplayTask *)0x0) {
          this[1].InstanceName = local_120;
          this[1].Priority = (undefined1)uStack_118;
          this[1].TaskState = uStack_118._1_1_;
          this[1].ResourceOverlapPolicy = uStack_118._2_1_;
          *(undefined5 *)&this[1].field_0x3b = uStack_118._3_5_;
          this[1].TaskOwner.ObjectInstance.WeakPtr = local_138;
          this[1].TaskOwner.InterfaceInstance = pIStack_130;
          this[1].RequiredResources = (FGameplayResourceSet)(undefined2)local_110;
          this[1].ClaimedResources = (FGameplayResourceSet)local_110._2_2_;
          *(undefined4 *)&this[1].field_0x44 = local_110._4_4_;
          this[1].TasksComponent.WeakPtr = local_128;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar3.DebugPtr != (UGameplayTask *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
          }
          this[1].ChildTask.field0_0x0.DebugPtr = (UGameplayTask *)TVar3;
        }
      }
    }
  }
  *(UGameplayTask **)param_3 = this;
  return;
}

