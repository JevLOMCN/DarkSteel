// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 1476daec0

UClass * __cdecl UCameraShakeSourceComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraShakeSourceComponent",
               &Z_Registration_Info_UClass_UCameraShakeSourceComponent.InnerSingleton,
               StaticRegisterNativesUCameraShakeSourceComponent,0x270,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraShakeSourceComponent>,
               InternalVTableHelperCtorCaller<UCameraShakeSourceComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeSourceComponent.InnerSingleton;
}

// UCameraShakeSourceComponent @ 1476e8220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCameraShakeSourceComponent * __thiscall
UCameraShakeSourceComponent::UCameraShakeSourceComponent
          (UCameraShakeSourceComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CameraShake).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UCameraShakeSourceComponent @ 1476e8270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCameraShakeSourceComponent * __thiscall
UCameraShakeSourceComponent::UCameraShakeSourceComponent
          (UCameraShakeSourceComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->Attenuation = Quadratic;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->InnerAttenuationRadius = 100.0;
  this->OuterAttenuationRadius = 1000.0;
  (this->CameraShake).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bAutoStart = false;
  return this;
}

// ~UCameraShakeSourceComponent @ 1476e9110

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
UCameraShakeSourceComponent::~UCameraShakeSourceComponent(UCameraShakeSourceComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// BeginPlay @ 1476f0670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCameraShakeSourceComponent::BeginPlay(UCameraShakeSourceComponent *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
  if (this->bAutoStart != false) {
    Start(this);
    return;
  }
  return;
}

// EndPlay @ 147703920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCameraShakeSourceComponent::EndPlay(UCameraShakeSourceComponent *this,Type param_1)

{
  StopAllCameraShakes(this,true);
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  return;
}

// GetAttenuationFactor @ 147706a00

float __thiscall
UCameraShakeSourceComponent::GetAttenuationFactor
          (UCameraShakeSourceComponent *this,TVector<double> *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  
  dVar4 = (double)this->_padding_ - (param_1->field0_0x0)._s_0.X;
  dVar6 = (double)this->_padding_ - (param_1->field0_0x0)._s_0.Z;
  dVar3 = (double)this->_padding_ - (param_1->field0_0x0)._s_0.Y;
  fVar2 = __real_3f800000;
  if (this->Attenuation == Quadratic) {
    fVar2 = __real_40000000;
  }
  fVar5 = this->OuterAttenuationRadius;
  fVar1 = this->InnerAttenuationRadius;
  if (fVar1 < fVar5) {
    fVar5 = (float)((SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar6 * dVar6) - (double)fVar1) /
                   (double)(fVar5 - fVar1));
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar2 = powf(__real_3f800000 - fVar5,fVar2);
    return fVar2;
  }
  fVar2 = __real_3f800000;
  if ((0.0 < fVar5) && ((double)(fVar5 * fVar5) <= dVar4 * dVar4 + dVar3 * dVar3 + dVar6 * dVar6)) {
    fVar2 = 0.0;
  }
  return fVar2;
}

// GetPrivateStaticClass @ 147709fb0

UClass * __cdecl UCameraShakeSourceComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraShakeSourceComponent",
               &Z_Registration_Info_UClass_UCameraShakeSourceComponent.InnerSingleton,
               StaticRegisterNativesUCameraShakeSourceComponent,0x270,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraShakeSourceComponent>,
               InternalVTableHelperCtorCaller<UCameraShakeSourceComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeSourceComponent.InnerSingleton;
}

// OnRegister @ 14771c930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCameraShakeSourceComponent::OnRegister(UCameraShakeSourceComponent *this)

{
  byte *pbVar1;
  char cVar2;
  UWorld *pUVar3;
  ULevel *pUVar4;
  FLevelCollection *pFVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId846,"USceneComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
               ,0x34e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId846);
  }
  pFVar5 = (FLevelCollection *)0x0;
  if ((this->_padding_ != 0) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x508))
                        (this,this->_padding_,&FAttachmentTransformRules::KeepRelativeTransform,
                         this->_padding_), cVar2 == '\0')) {
    this->_padding_ = 0;
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x3f;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfc;
    this->_padding_ = 0;
  }
  if ((this->_padding_ != 0) ||
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 != (UWorld *)0x0)
     ) {
    pUVar4 = UActorComponent::GetComponentLevel((UActorComponent *)this);
    if (pUVar4 != (ULevel *)0x0) {
      pFVar5 = pUVar4->CachedLevelCollection;
    }
    this->_padding_ = (longlong)pFVar5;
  }
  UActorComponent::OnRegister((UActorComponent *)this);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Start @ 14772aad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCameraShakeSourceComponent::Start(UCameraShakeSourceComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  undefined1 auStack_1d8 [32];
  FScriptContainerElement *local_1b8;
  TObjectPtr<UClass>_u_0 local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  double local_198;
  double dStack_190;
  double local_188;
  undefined1 local_17c;
  FString local_178;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pUVar2 = (this->CameraShake).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar8 = UCameraShakeBase::StaticClass(), dVar7 = UE::Math::TRotator<double>::ZeroRotator.Roll
     , dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw,
     dVar5 = UE::Math::TRotator<double>::ZeroRotator.Pitch, pUVar8 != (UClass *)0x0)) {
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (TVar3 = (TObjectPtr<UClass>_u_0)(this->CameraShake).Class.field0_0x0.DebugPtr,
       TVar3.DebugPtr != (UClass *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      local_17c = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      local_1a0 = 0x3f800000;
      local_19c = 0;
      local_198 = dVar5;
      dStack_190 = dVar6;
      local_188 = dVar7;
      local_1a8 = TVar3;
      StartCameraShake(this,(FCameraShakeSourceComponentStartParams *)&local_1a8.ObjectPtr);
      return;
    }
  }
  if (1 < (byte)LogCameraShakeSourceComponent._0_1_) {
    pFVar9 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this->_padding_,&local_168,(UObject *)0x0,None);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_178,(UObject *)0x0,None);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UCameraShakeSourceComponent::Start",0x22,Yes);
    local_1b8 = (FScriptContainerElement *)pwVar10;
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogCameraShakeSourceComponent);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StartCameraShake @ 14772ace0

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
UCameraShakeSourceComponent::StartCameraShake
          (UCameraShakeSourceComponent *this,FCameraShakeSourceComponentStartParams *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  UWorld *this_00;
  UObject *pUVar7;
  TObjectPtr<UClass>_u_0 local_res8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_78;
  FDestructionSentinel local_68;
  float local_50;
  ECameraShakePlaySpace local_4c;
  double local_48;
  double dStack_40;
  double local_38;
  UCameraShakeSourceComponent *local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  float local_10;
  undefined1 local_c;
  
  this_00 = (UWorld *)this->_padding_;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 == (UWorld *)0x0)) {
    return;
  }
  local_4c = param_1->PlaySpace;
  local_38 = (param_1->UserPlaySpaceRot).Roll;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_50 = param_1->Scale;
  local_18 = 0;
  local_c = 0;
  local_48 = (param_1->UserPlaySpaceRot).Pitch;
  dStack_40 = (param_1->UserPlaySpaceRot).Yaw;
  if ((&param_1->DurationOverride != (TOptional<float> *)&local_10) &&
     ((param_1->DurationOverride).bIsSet != false)) {
    local_10 = (param_1->DurationOverride).TypedValue;
    local_c = 1;
  }
  local_30 = this;
  UWorld::GetPlayerControllerIterator(this_00,&local_78);
  while( true ) {
    iVar4 = local_78.Index;
    pTVar3 = local_78.Container;
    if ((local_78.Index < 0) || ((local_78.Container)->ArrayNum <= local_78.Index)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_28,(FWriteAccessScope *)&local_68);
      if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        local_18 = 0;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
      return;
    }
    uVar6 = 0;
    if (local_78.Index < (local_78.Container)->ArrayNum) {
      uVar6 = (uint)~local_78.Index >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
    if ((pUVar7 != (UObject *)0x0) &&
       (plVar1 = *(longlong **)&pUVar7[0x16].field_0x20, plVar1 != (longlong *)0x0)) {
      local_res8 = (TObjectPtr<UClass>_u_0)(param_1->ShakeClass).Class.field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*plVar1 + 0x8c8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      (*pcVar2)(plVar1,&local_res8);
    }
    local_78.Index = local_78.Index + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// StartCameraShake @ 14772aee0

void __thiscall
UCameraShakeSourceComponent::StartCameraShake
          (UCameraShakeSourceComponent *this,TSubclassOf<UCameraShakeBase> param_1,float param_2,
          ECameraShakePlaySpace param_3,TRotator<double> *param_4)

{
  TObjectPtr<UClass>_u_0 local_48;
  float local_40;
  ECameraShakePlaySpace local_3c;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_1c;
  
  local_1c = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  local_48 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  local_38 = param_4->Pitch;
  dStack_30 = param_4->Yaw;
  local_28 = param_4->Roll;
  local_40 = param_2;
  local_3c = param_3;
  StartCameraShake(this,(FCameraShakeSourceComponentStartParams *)&local_48.ObjectPtr);
  return;
}

// StaticRegisterNativesUCameraShakeSourceComponent @ 14772be40

void __cdecl UCameraShakeSourceComponent::StaticRegisterNativesUCameraShakeSourceComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UCameraShakeSourceComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAllCameraShakes @ 14772c960

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
UCameraShakeSourceComponent::StopAllCameraShakes(UCameraShakeSourceComponent *this,bool param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  bool bVar5;
  UWorld *this_00;
  UObject *pUVar6;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  this_00 = (UWorld *)this->_padding_;
  if ((this_00 != (UWorld *)0x0) ||
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 != (UWorld *)0x0)) {
    UWorld::GetPlayerControllerIterator(this_00,&local_18);
    for (; (iVar4 = local_18.Index, pTVar3 = local_18.Container, -1 < local_18.Index &&
           (local_18.Index < (local_18.Container)->ArrayNum)); local_18.Index = local_18.Index + 1)
    {
      if ((local_18.Index < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if ((pUVar6 != (UObject *)0x0) &&
         (plVar1 = *(longlong **)&pUVar6[0x16].field_0x20, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x900))(plVar1,this,param_1);
      }
    }
  }
  return;
}

// StopAllCameraShakesOfType @ 14772ca60

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
UCameraShakeSourceComponent::StopAllCameraShakesOfType
          (UCameraShakeSourceComponent *this,TSubclassOf<UCameraShakeBase> param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  bool bVar5;
  UWorld *this_00;
  UObject *pUVar6;
  UObject *local_res8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_28;
  
  this_00 = (UWorld *)this->_padding_;
  if ((this_00 != (UWorld *)0x0) ||
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 != (UWorld *)0x0)) {
    UWorld::GetPlayerControllerIterator(this_00,&local_28);
    for (; (iVar4 = local_28.Index, pTVar3 = local_28.Container, -1 < local_28.Index &&
           (local_28.Index < (local_28.Container)->ArrayNum)); local_28.Index = local_28.Index + 1)
    {
      if ((local_28.Index < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if ((pUVar6 != (UObject *)0x0) &&
         (plVar1 = *(longlong **)&pUVar6[0x16].field_0x20, plVar1 != (longlong *)0x0)) {
        local_res8 = *(UObject **)param_1.Class.field0_0x0;
        pcVar2 = *(code **)(*plVar1 + 0x8f8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res8);
        }
        (*pcVar2)(plVar1,&local_res8,this,param_2);
      }
    }
  }
  return;
}

// UpdateEditorSpriteTexture @ 147732260

void __thiscall
UCameraShakeSourceComponent::UpdateEditorSpriteTexture(UCameraShakeSourceComponent *this)

{
  return;
}

// execGetAttenuationFactor @ 1477364f0

void __cdecl
UCameraShakeSourceComponent::execGetAttenuationFactor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float _Y;
  double local_48 [8];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  fVar4 = __real_3f800000;
  pdVar3 = local_48;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar6 = *(double *)&param_1[0xd].field_0x8 - *pdVar3;
  dVar8 = *(double *)&param_1[0xd].field_0x18 - pdVar3[2];
  dVar5 = *(double *)&param_1[0xd].field_0x10 - pdVar3[1];
  _Y = fVar4;
  if (param_1[0xe].field_0x20 == '\x01') {
    _Y = __real_40000000;
  }
  fVar7 = *(float *)(param_1 + 0xf);
  fVar1 = *(float *)&param_1[0xe].field_0x24;
  if (fVar7 <= fVar1) {
    if ((fVar7 <= 0.0) || (dVar6 * dVar6 + dVar5 * dVar5 + dVar8 * dVar8 < (double)(fVar7 * fVar7)))
    {
      *(float *)param_3 = fVar4;
    }
    else {
      *(undefined4 *)param_3 = 0;
    }
  }
  else {
    fVar7 = (float)((SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar8 * dVar8) - (double)fVar1) /
                   (double)(fVar7 - fVar1));
    if (fVar4 <= fVar7) {
      fVar7 = fVar4;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar4 = powf(fVar4 - fVar7,_Y);
    *(float *)param_3 = fVar4;
  }
  return;
}

// execStart @ 147739160

void __cdecl UCameraShakeSourceComponent::execStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Start((UCameraShakeSourceComponent *)param_1);
  return;
}

// execStartCameraShake @ 147739180

void __cdecl
UCameraShakeSourceComponent::execStartCameraShake(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ECameraShakePlaySpace EVar2;
  float fVar3;
  UClass *pUVar4;
  ECameraShakePlaySpace local_res10 [8];
  float local_res20 [2];
  UClass *local_88;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  TObjectPtr<UClass>_u_0 local_68;
  float local_60;
  ECameraShakePlaySpace local_5c;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_3c;
  
  local_88 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = CameraLocal;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pUVar4 = local_88;
  fVar3 = local_res20[0];
  EVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  local_3c = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_60 = fVar3;
  local_68.DebugPtr = pUVar4;
  local_5c = EVar2;
  local_58 = local_80;
  uStack_50 = uStack_78;
  local_48 = local_70;
  StartCameraShake((UCameraShakeSourceComponent *)param_1,
                   (FCameraShakeSourceComponentStartParams *)&local_68.ObjectPtr);
  return;
}

// execStopAllCameraShakes @ 147739370

void __cdecl
UCameraShakeSourceComponent::execStopAllCameraShakes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopAllCameraShakes((UCameraShakeSourceComponent *)param_1,local_res10[0] != 0);
  return;
}

// execStopAllCameraShakesOfType @ 147739400

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
UCameraShakeSourceComponent::execStopAllCameraShakesOfType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  UObject *pUVar4;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  bool bVar7;
  UWorld *this;
  UObject *pUVar8;
  bool bVar9;
  int local_res8 [2];
  UObject *local_res10 [2];
  UObject *local_res20;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_38;
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pUVar4 = local_res10[0];
  bVar9 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  this = *(UWorld **)&param_1[4].field_0x10;
  if ((this == (UWorld *)0x0) &&
     (this = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1), this == (UWorld *)0x0))
  {
    return;
  }
  UWorld::GetPlayerControllerIterator(this,&local_38);
  while( true ) {
    iVar6 = local_38.Index;
    pTVar5 = local_38.Container;
    if (local_38.Index < 0) {
      return;
    }
    if ((local_38.Container)->ArrayNum <= local_38.Index) break;
    if ((local_38.Index < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar5->AllocatorInstance).Data + (longlong)iVar6 * 8));
    if ((pUVar8 != (UObject *)0x0) &&
       (plVar2 = *(longlong **)&pUVar8[0x16].field_0x20, plVar2 != (longlong *)0x0)) {
      local_res20 = pUVar4;
      pcVar3 = *(code **)(*plVar2 + 0x8f8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      (*pcVar3)(plVar2,&local_res20,param_1,bVar9);
    }
    local_38.Index = local_38.Index + 1;
  }
  return;
}

