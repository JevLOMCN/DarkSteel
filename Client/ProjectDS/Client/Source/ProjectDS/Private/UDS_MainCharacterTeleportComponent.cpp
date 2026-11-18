// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b4e5d60

UClass * __cdecl UDS_MainCharacterTeleportComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacterTeleportComponent",
               &Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainCharacterTeleportComponent,0x180,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCharacterTeleportComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCharacterTeleportComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.InnerSingleton;
}

// UDS_MainCharacterTeleportComponent @ 14b4e8ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_MainCharacterTeleportComponent * __thiscall
UDS_MainCharacterTeleportComponent::UDS_MainCharacterTeleportComponent
          (UDS_MainCharacterTeleportComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnTeleportStart = 0;
  *(undefined8 *)&(this->OnTeleportStart).field_0x8 = 0;
  *(undefined8 *)&(this->OnTeleportStart).field_0x10 = 0;
  *(undefined8 *)&this->OnTeleportFinished = 0;
  *(undefined8 *)&(this->OnTeleportFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnTeleportFinished).field_0x10 = 0;
  (this->OwnerCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->OnTeleportStart).field_0x18 = 2;
  *(undefined8 *)&(this->OnTeleportFinished).field_0x18 = 2;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->DestinationTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->DestinationTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->DestinationTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DestinationTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->DestinationTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->DestinationTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->DestinationTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DestinationTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->DestinationTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->DestinationTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->DestinationTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->DestinationTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->IngameState).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_MainCharacterTeleportComponent @ 14b4e9ca0

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
UDS_MainCharacterTeleportComponent::~UDS_MainCharacterTeleportComponent
          (UDS_MainCharacterTeleportComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTeleportFinished).field_0x8,*(int *)&(this->OnTeleportFinished).field_0x10);
  pvVar1 = *(void **)&(this->OnTeleportFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTeleportFinished);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTeleportStart).field_0x8,*(int *)&(this->OnTeleportStart).field_0x10);
  pvVar1 = *(void **)&(this->OnTeleportStart).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTeleportStart);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eba50

UClass * __cdecl UDS_MainCharacterTeleportComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacterTeleportComponent",
               &Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainCharacterTeleportComponent,0x180,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCharacterTeleportComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCharacterTeleportComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterTeleportComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_MainCharacterTeleportComponent @ 14b4ec1e0

void __cdecl
UDS_MainCharacterTeleportComponent::StaticRegisterNativesUDS_MainCharacterTeleportComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_MainCharacterTeleportComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnStreamingComplete @ 14b4ed6c0

void __cdecl
UDS_MainCharacterTeleportComponent::execOnStreamingComplete
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnStreamingComplete((UDS_MainCharacterTeleportComponent *)param_1);
  return;
}

// UDS_MainCharacterTeleportComponent @ 14bbeadb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_MainCharacterTeleportComponent * __thiscall
UDS_MainCharacterTeleportComponent::UDS_MainCharacterTeleportComponent
          (UDS_MainCharacterTeleportComponent *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FObjectInitializer *pFVar4;
  
  pFVar4 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar4);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnTeleportStart = 0;
  *(undefined8 *)&(this->OnTeleportStart).field_0x8 = 0;
  *(undefined8 *)&(this->OnTeleportStart).field_0x10 = 0;
  *(undefined8 *)&this->OnTeleportFinished = 0;
  *(undefined8 *)&(this->OnTeleportFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnTeleportFinished).field_0x10 = 0;
  (this->OwnerCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->OnTeleportStart).field_0x18 = 2;
  *(undefined8 *)&(this->OnTeleportFinished).field_0x18 = 2;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->DestinationTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->DestinationTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->DestinationTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DestinationTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->DestinationTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->DestinationTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->DestinationTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DestinationTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->DestinationTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->DestinationTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->DestinationTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->DestinationTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->field_0x42 = this->field_0x42 & 0xfd;
  (this->IngameState).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ApplyTeleportTransform @ 14bbecde0

void __thiscall
UDS_MainCharacterTeleportComponent::ApplyTeleportTransform
          (UDS_MainCharacterTeleportComponent *this,TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TRotator<double> *pTVar4;
  FWeakObjectPtr local_res8;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x78))
              (&pUVar3[0x29].field_0x10,&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res8);
      local_48.Pitch._0_4_ = *(undefined4 *)(param_1->Translation).XY.m128d_f64;
      local_48.Pitch._4_4_ = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 4);
      local_48.Yaw._0_4_ = *(undefined4 *)((param_1->Translation).XY.m128d_f64 + 1);
      local_48.Yaw._4_4_ = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 0xc);
      local_48.Roll._0_4_ = *(undefined4 *)(param_1->Translation).ZW.m128d_f64;
      local_48.Roll._4_4_ = *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 4);
      (**(code **)(*(longlong *)pUVar3 + 0x358))(pUVar3,&local_48);
      pUVar3 = FWeakObjectPtr::Get(&local_res8);
      local_28.X = (param_1->Rotation).XY.m128d_f64[0];
      local_28.Y = (param_1->Rotation).XY.m128d_f64[1];
      local_28.Z = (param_1->Rotation).ZW.m128d_f64[0];
      local_28.W = (param_1->Rotation).ZW.m128d_f64[1];
      pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x370);
      pTVar4 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
      (*pcVar1)(pUVar3,pTVar4);
    }
  }
  return;
}

// BeginPlay @ 14bbed0c0

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

void __thiscall
UDS_MainCharacterTeleportComponent::BeginPlay(UDS_MainCharacterTeleportComponent *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  UObject *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UActorComponent::BeginPlay((UActorComponent *)this);
  local_148[0] = *(UObject **)&this->field_0xa8;
  if (local_148[0] != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_148[0]->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_148[0]->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bbed118;
  }
  local_148[0] = (UObject *)0x0;
LAB_14bbed118:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_148[0]);
  }
  FWeakObjectPtr::operator=(&(this->OwnerCharacter).WeakPtr,(FObjectPtr)local_148);
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2654595826822676450>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterTeleportComponent.cpp"
                       ,0x1e,"OwnerCharacter.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MainCharacterTeleportComponent::BeginPlay",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x20,L"OwnerCharacter is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// CalculateDestinationTransform @ 14bbed7d0

TTransform<double> * __thiscall
UDS_MainCharacterTeleportComponent::CalculateDestinationTransform
          (UDS_MainCharacterTeleportComponent *this,TTransform<double> *__return_storage_ptr__)

{
  __m128d _Var1;
  __m128d _Var2;
  bool bVar3;
  TRotator<double> *pTVar4;
  UObject *pUVar5;
  bool local_res8 [8];
  float local_res18 [4];
  TTransform<double> local_d8;
  TVector<double>_u_0 local_78;
  TQuat<double> local_58;
  TRotator<double> local_38;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  _Var1 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  if (bVar3) {
    local_d8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_d8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_d8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_d8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_d8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_58.Z = (this->DestinationTransform).Rotation.ZW.m128d_f64[0];
    local_58.W = (this->DestinationTransform).Rotation.ZW.m128d_f64[1];
    local_d8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_58.X = (this->DestinationTransform).Rotation.XY.m128d_f64[0];
    local_58.Y = (this->DestinationTransform).Rotation.XY.m128d_f64[1];
    local_res8[0] = true;
    pTVar4 = UE::Math::TQuat<double>::Rotator(&local_58,&local_38);
    local_res18[0] = (float)pTVar4->Yaw;
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    local_78._s_0.X = (this->DestinationTransform).Translation.XY.m128d_f64[0];
    local_78._s_0.Y = (this->DestinationTransform).Translation.XY.m128d_f64[1];
    local_78._s_0.Z = (this->DestinationTransform).Translation.ZW.m128d_f64[0];
    FDS_SpawnService::AdjustSpawnTransform
              (&local_d8,(TVector<double> *)&local_78._s_0,(float *)&pUVar5[0x2b].field_0x18,
               local_res18,local_res8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_d8.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_d8.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_d8.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
  }
  else {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
    _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
    local_d8.Scale3D.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    local_d8.Scale3D.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
    local_d8.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_d8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       local_d8.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) =
       local_d8.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) =
       local_d8.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) =
       local_d8.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_d8.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_d8.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_d8.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_d8.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// EndPlay @ 14bbf0520

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
UDS_MainCharacterTeleportComponent::EndPlay(UDS_MainCharacterTeleportComponent *this,Type param_1)

{
  uint uVar1;
  AActor *this_00;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  FUObjectItem *pFVar5;
  UFunction *pUVar6;
  undefined1 auStackX_10 [8];
  
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar3) {
    if (this == (UDS_MainCharacterTeleportComponent *)0x0) goto LAB_14781e7e6;
    this_00 = *(AActor **)&this->field_0xa8;
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar3) || (this_00 == (AActor *)0x0)) goto LAB_14781e7e6;
    pUVar4 = AActor::GetWorld(this_00);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (!bVar3) goto LAB_14781e7e6;
  }
  FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
LAB_14781e7e6:
  if ((this->field_0x9b & 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x65d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 - EndPlayInEditor & 0xfffffffd) != 0) {
    UE::Net::FReplicationSystemUtil::StopReplicatingActorComponent((UActorComponent *)this);
  }
  if ((*(uint *)&this->field_0x8 >> 0xf & 1) == 0) {
    pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
    if ((((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) &&
       ((uVar1 = *(uint *)(*(longlong *)&this->field_0x10 + 0xd4), (uVar1 >> 0x12 & 1) != 0 ||
        (-1 < (char)uVar1)))) {
      auStackX_10[0] = (undefined1)param_1;
      pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveEndPlay);
      (**(code **)(*(longlong *)this + 0x260))(this,pUVar6,auStackX_10);
    }
  }
  this->field_0x9b = this->field_0x9b & 0xcf;
  return;
}

// HandleDungeonHUD @ 14bbf8910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCharacterTeleportComponent::HandleDungeonHUD
          (UDS_MainCharacterTeleportComponent *this,UDS_ZoneManager *param_1,UDS_HudManager *param_2
          )

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_HudManager *pUStackX_10;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  if ((param_1 != (UDS_ZoneManager *)0x0) && (param_2 != (UDS_HudManager *)0x0)) {
    if (param_1->IslandID != 6) {
      UDS_HudManager::CloseBossHUD(param_2);
      return;
    }
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      auStack_58 = (undefined1  [8])0x0;
      FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
                 (FWriteAccessScope *)&FStack_40);
      pFStack_28 = &FStack_50;
      puVar1 = UE::Core::Private::DelegateAllocate(0x28,&FStack_50);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        *puVar1 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_HudManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UDS_HudManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        puVar1[3] = 0;
        pUStackX_10 = param_2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UDS_HudManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&pUStackX_10);
        puVar1[4] = UDS_HudManager::OnOpenBossHUD;
      }
      if (FStack_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
      }
      pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &FStack_40,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          auStack_58);
      UDS_WindowManager::OpenWindow(this_00,-0x14,pTVar3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
                 (FWriteAccessScope *)&FStack_40);
      if ((FStack_50.DelegateSize != 0) &&
         (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_50,0,0,0x10);
        FStack_50.DelegateSize = 0;
      }
      if (FStack_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
      }
      if (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_58);
    }
    return;
  }
  return;
}

// HandleGMModeTeleport @ 14bbf8940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCharacterTeleportComponent::HandleGMModeTeleport(UDS_MainCharacterTeleportComponent *this)

{
  EDS_AccountAuthority EVar1;
  bool bVar2;
  FDS_AuthData *this_00;
  UDS_ZoneManager *pUVar3;
  UDS_HudManager *this_01;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = TDS_Singleton<FDS_AuthData>::GetInst();
  EVar1 = FDS_AuthData::GetAccountAuthority(this_00);
  if ((EVar1 == GmInvisible) &&
     (bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr), bVar2)) {
    pUVar3 = UDS_ZoneManager::GetInst();
    this_01 = UDS_HudManager::GetInst();
    if ((pUVar3 != (UDS_ZoneManager *)0x0) && (this_01 != (UDS_HudManager *)0x0)) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_MainCharacterTeleportComponent::HandleGMModeTeleport",0x38,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Display,local_148.Ptr,0xd5,L"[GM] Teleport IslandID : %d")
        ;
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      pUVar5 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
      (**(code **)(*(longlong *)pUVar5 + 0x368))(pUVar5,1);
      if (pUVar3->IslandID == 6) {
        UDS_HudManager::OpenBossHUD(this_01);
      }
      else {
        UDS_HudManager::CloseBossHUD(this_01);
      }
    }
  }
  return;
}

// OnStreamingComplete @ 14bbfd8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_MainCharacterTeleportComponent::OnStreamingComplete(UDS_MainCharacterTeleportComponent *this)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  EDS_AccountAuthority EVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  TRotator<double> *pTVar6;
  UDS_IngameState *this_01;
  FDS_AuthData *this_02;
  UDS_ZoneManager *pUVar7;
  UDS_HudManager *this_03;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStackY_598 [32];
  bool local_558 [4];
  float local_554;
  FWeakObjectPtr local_550;
  FWeakObjectPtr local_548 [2];
  TTransform<double> local_538;
  TVector<double>_u_0 local_4d8;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined8 local_4b0;
  TQuat<double> local_4a8;
  TQuat<double> local_488;
  TRotator<double> local_468;
  TRotator<double> local_450 [5];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_598;
  this_00 = &this->OwnerCharacter;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)&pUVar5[0x29].field_0x10 + 0x78))();
    bVar2 = FWeakObjectPtr::IsValid(local_548);
    if (bVar2) {
      bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar2) {
        local_538.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_538.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_538.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_4a8.Z = (this->DestinationTransform).Rotation.ZW.m128d_f64[0];
        local_4a8.W = (this->DestinationTransform).Rotation.ZW.m128d_f64[1];
        local_538.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_4a8.X = (this->DestinationTransform).Rotation.XY.m128d_f64[0];
        local_4a8.Y = (this->DestinationTransform).Rotation.XY.m128d_f64[1];
        local_558[0] = true;
        pTVar6 = UE::Math::TQuat<double>::Rotator(&local_4a8,&local_468);
        local_554 = (float)pTVar6->Yaw;
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_4d8._s_0.X = (this->DestinationTransform).Translation.XY.m128d_f64[0];
        local_4d8._s_0.Y = (this->DestinationTransform).Translation.XY.m128d_f64[1];
        local_4d8._s_0.Z = (this->DestinationTransform).Translation.ZW.m128d_f64[0];
        FDS_SpawnService::AdjustSpawnTransform
                  (&local_538,(TVector<double> *)&local_4d8._s_0,(float *)&pUVar5[0x2b].field_0x18,
                   &local_554,local_558);
        uVar8 = local_538.Rotation.XY.m128d_f64[0]._0_4_;
        uVar9 = local_538.Rotation.XY.m128d_f64[0]._4_4_;
        uVar10 = local_538.Rotation.XY.m128d_f64[1]._0_4_;
        uVar11 = local_538.Rotation.XY.m128d_f64[1]._4_4_;
        uVar12 = local_538.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar13 = local_538.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar14 = local_538.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar15 = local_538.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar16 = local_538.Translation.XY.m128d_f64[0]._0_4_;
        uVar17 = local_538.Translation.XY.m128d_f64[0]._4_4_;
        uVar18 = local_538.Translation.XY.m128d_f64[1]._0_4_;
        uVar19 = local_538.Translation.XY.m128d_f64[1]._4_4_;
        uVar20 = local_538.Translation.ZW.m128d_f64[0]._0_4_;
        uVar21 = local_538.Translation.ZW.m128d_f64[0]._4_4_;
      }
      else {
        uVar8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar9 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar10 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar11 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar12 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar13 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar14 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar15 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar16 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar17 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar18 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar19 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar20 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar21 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      }
      bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        (**(code **)(*(longlong *)&pUVar5[0x29].field_0x10 + 0x78))
                  (&pUVar5[0x29].field_0x10,&local_550);
        bVar2 = FWeakObjectPtr::IsValid(&local_550);
        if (bVar2) {
          pUVar5 = FWeakObjectPtr::Get(&local_550);
          local_4b0 = CONCAT44(uVar21,uVar20);
          local_4c0 = uVar16;
          uStack_4bc = uVar17;
          uStack_4b8 = uVar18;
          uStack_4b4 = uVar19;
          (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5,&local_4c0);
          pUVar5 = FWeakObjectPtr::Get(&local_550);
          pcVar1 = *(code **)(*(longlong *)pUVar5 + 0x370);
          local_488.X._0_4_ = uVar8;
          local_488.X._4_4_ = uVar9;
          local_488.Y._0_4_ = uVar10;
          local_488.Y._4_4_ = uVar11;
          local_488.Z._0_4_ = uVar12;
          local_488.Z._4_4_ = uVar13;
          local_488.W._0_4_ = uVar14;
          local_488.W._4_4_ = uVar15;
          pTVar6 = UE::Math::TQuat<double>::Rotator(&local_488,local_450);
          (*pcVar1)(pUVar5,pTVar6);
        }
      }
      bVar2 = FWeakObjectPtr::IsValid(&(this->IngameState).WeakPtr);
      if (bVar2) {
        this_01 = (UDS_IngameState *)FWeakObjectPtr::Get(&(this->IngameState).WeakPtr);
        UDS_IngameState::DisableStreamingSource(this_01);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnTeleportFinished);
      this_02 = TDS_Singleton<FDS_AuthData>::GetInst();
      EVar3 = FDS_AuthData::GetAccountAuthority(this_02);
      if ((EVar3 == GmInvisible) && (bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr), bVar2)) {
        pUVar7 = UDS_ZoneManager::GetInst();
        this_03 = UDS_HudManager::GetInst();
        if ((pUVar7 != (UDS_ZoneManager *)0x0) && (this_03 != (UDS_HudManager *)0x0)) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_198._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_198,"UDS_MainCharacterTeleportComponent::HandleGMModeTeleport",0x38,
                       Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Display,local_198.Ptr,0xd5,L"[GM] Teleport IslandID : %d");
            if ((void *)local_198._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_198._padding_);
            }
          }
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          (**(code **)(*(longlong *)pUVar5 + 0x368))(pUVar5,1);
          if (pUVar7->IslandID == 6) {
            UDS_HudManager::OpenBossHUD(this_03);
          }
          else {
            UDS_HudManager::CloseBossHUD(this_03);
          }
        }
      }
      *&(this->DestinationTransform).Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *&(this->DestinationTransform).Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *&(this->DestinationTransform).Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *&(this->DestinationTransform).Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *&(this->DestinationTransform).Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *&(this->DestinationTransform).Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_2b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_2b8,"UDS_MainCharacterTeleportComponent::OnStreamingComplete",0x37,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_2b8.Ptr,0x84,L"MovementCore is nullptr.");
        if ((void *)local_2b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_2b8._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2654595826822676347>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterTeleportComponent.cpp"
                         ,0x85,"false");
      if (bVar2) goto code_r0x00014bbfda66;
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_3d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3d8,"UDS_MainCharacterTeleportComponent::OnStreamingComplete",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_3d8.Ptr,0x7c,L"OwnerCharacter is nullptr.");
      if ((void *)local_3d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3d8._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2654595826822676355>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterTeleportComponent.cpp"
                       ,0x7d,"false");
    if (bVar2) {
code_r0x00014bbfda66:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetupIngameState @ 14bc1f460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_MainCharacterTeleportComponent::SetupIngameState(UDS_MainCharacterTeleportComponent *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  TVar2 = UDS_IngameState::GetInst();
                    /* WARNING: Load size is inaccurate */
  (this->IngameState).WeakPtr = *TVar2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->IngameState).WeakPtr);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MainCharacterTeleportComponent::SetupIngameState",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x52,L"IngameState is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// SetupStreamingSourceActor @ 14bc1f550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_MainCharacterTeleportComponent::SetupStreamingSourceActor
          (UDS_MainCharacterTeleportComponent *this)

{
  bool bVar1;
  UDS_IngameState *this_00;
  UDS_LogManager *pUVar2;
  ADS_StreamingSourceActor *this_01;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  undefined1 local_150 [280];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = FWeakObjectPtr::IsValid(&(this->IngameState).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_IngameState *)FWeakObjectPtr::Get(&(this->IngameState).WeakPtr);
    UDS_IngameState::GetStreamingSourceActor(this_00,(TTransform<double> *)local_150);
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_150);
    if (bVar1) {
      this_01 = (ADS_StreamingSourceActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_150);
      ::FName::FName((FName *)(local_150 + 0x10),"OnStreamingComplete");
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_MainCharacterTeleportComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_158.ObjectIndex = 0;
      local_158.ObjectSerialNumber = 0;
      local_150._8_8_ = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_MainCharacterTeleportComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_158,(FObjectPtr)((longlong)local_150 + 8));
      ADS_StreamingSourceActor::BindStreamingCompleteNotify
                (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_158,
                 (FName *)(local_150 + 0x10));
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_150 + 0x18),
                 "UDS_MainCharacterTeleportComponent::SetupStreamingSourceActor",0x3d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,99,L"streamingSourceActor is nullptr.");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  return false;
}

// SetupZoneManager @ 14bc1f6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_MainCharacterTeleportComponent::SetupZoneManager
          (UDS_MainCharacterTeleportComponent *this,uint param_1)

{
  UDS_ZoneManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  uint local_148 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_148[0] = param_1;
  this_00 = UDS_ZoneManager::GetInst();
  if (this_00 == (UDS_ZoneManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MainCharacterTeleportComponent::SetupZoneManager",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x70,L"ZoneManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  UDS_ZoneManager::SetIslandID(this_00,local_148);
  return true;
}

// StartTeleport @ 14bc1f7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_MainCharacterTeleportComponent::StartTeleport
          (UDS_MainCharacterTeleportComponent *this,TVector<double> *param_1,
          TRotator<double> *param_2,uint *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  TQuat<double> *pTVar6;
  TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> TVar7;
  UDS_IngameState *this_00;
  ADS_StreamingSourceActor *this_01;
  UDS_ZoneManager *this_02;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  FWeakObjectPtr local_198;
  undefined1 local_190 [312];
  void *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (bVar4) {
    *&(this->DestinationTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->DestinationTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->DestinationTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->DestinationTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->DestinationTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(this->DestinationTransform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->DestinationTransform).Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
    (this->DestinationTransform).Translation.XY.m128d_f64[1] = dVar2;
    (this->DestinationTransform).Translation.ZW.m128d_f64[0] = dVar1;
    (this->DestinationTransform).Translation.ZW.m128d_f64[1] = 0.0;
    pTVar6 = UE::Math::TRotator<double>::Quaternion(param_2,(TQuat<double> *)(local_190 + 0x18));
    dVar1 = pTVar6->Y;
    dVar2 = pTVar6->Z;
    dVar3 = pTVar6->W;
    (this->DestinationTransform).Rotation.XY.m128d_f64[0] = pTVar6->X;
    (this->DestinationTransform).Rotation.XY.m128d_f64[1] = dVar1;
    (this->DestinationTransform).Rotation.ZW.m128d_f64[0] = dVar2;
    (this->DestinationTransform).Rotation.ZW.m128d_f64[1] = dVar3;
    TVar7 = UDS_IngameState::GetInst();
                    /* WARNING: Load size is inaccurate */
    (this->IngameState).WeakPtr = *TVar7.WeakPtr;
    bVar4 = FWeakObjectPtr::IsValid(&(this->IngameState).WeakPtr);
    if (bVar4) {
      bVar4 = FWeakObjectPtr::IsValid(&(this->IngameState).WeakPtr);
      if (!bVar4) {
        return;
      }
      this_00 = (UDS_IngameState *)FWeakObjectPtr::Get(&(this->IngameState).WeakPtr);
      UDS_IngameState::GetStreamingSourceActor(this_00,(TTransform<double> *)local_190);
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_190);
      if (bVar4) {
        this_01 = (ADS_StreamingSourceActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_190);
        ::FName::FName((FName *)(local_190 + 8),"OnStreamingComplete");
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_MainCharacterTeleportComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_198.ObjectIndex = 0;
        local_198.ObjectSerialNumber = 0;
        local_190._16_8_ = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_MainCharacterTeleportComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_198,(FObjectPtr)((longlong)local_190 + 0x10));
        ADS_StreamingSourceActor::BindStreamingCompleteNotify
                  (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_198,
                   (FName *)(local_190 + 8));
        local_198.ObjectIndex = *param_3;
        this_02 = UDS_ZoneManager::GetInst();
        if (this_02 != (UDS_ZoneManager *)0x0) {
          UDS_ZoneManager::SetIslandID(this_02,(uint *)&local_198);
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->OnTeleportStart);
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_58 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_190 + 0x38),
                   "UDS_MainCharacterTeleportComponent::SetupZoneManager",0x34,Yes);
        pwVar9 = L"ZoneManager is nullptr.";
        uVar8 = 0x70;
      }
      else {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_58 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_190 + 0x38),
                   "UDS_MainCharacterTeleportComponent::SetupStreamingSourceActor",0x3d,Yes);
        pwVar9 = L"streamingSourceActor is nullptr.";
        uVar8 = 99;
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_58 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_190 + 0x38),
                 "UDS_MainCharacterTeleportComponent::SetupIngameState",0x34,Yes);
      pwVar9 = L"IngameState is nullptr.";
      uVar8 = 0x52;
    }
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_50,uVar8,pwVar9);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    return;
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar5 = UDS_LogManager::GetInst();
  local_58 = (void *)0x0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_190 + 0x38),
             "UDS_MainCharacterTeleportComponent::StartTeleport",0x31,Yes);
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_50,0x2e,L"OwnerCharacter is nullptr.");
  if (local_58 == (void *)0x0) {
    return;
  }
  FMemory::Free(local_58);
  return;
}

