// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// StaticClass @ 14b52a560

UClass * __cdecl ADS_NetCharacter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_NetCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NetCharacter",
               &Z_Registration_Info_UClass_ADS_NetCharacter.InnerSingleton,
               StaticRegisterNativesADS_NetCharacter,0x768,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_NetCharacter>,
               InternalVTableHelperCtorCaller<ADS_NetCharacter>,local_res8,
               ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_NetCharacter.InnerSingleton;
}

// ADS_NetCharacter @ 14b52ea40

ADS_NetCharacter * __thiscall
ADS_NetCharacter::ADS_NetCharacter(ADS_NetCharacter *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->PartsComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartsComponents).ArrayNum = 0;
  (this->PartsComponents).ArrayMax = 0;
  (this->CustomizableSkmComponent).field0_0x0.DebugPtr = (UDS_CustomizableSkeletalComponent *)0x0;
  (this->NameTagWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->SmiteEffectUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->TargetInfoWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->PredictedDamageWidgetComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->DamageEffectWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->BlockEffectWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  return this;
}

// ~ADS_NetCharacter @ 14b530580

void __thiscall ADS_NetCharacter::~ADS_NetCharacter(ADS_NetCharacter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  pFVar1 = (this->PartsComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetFluxSurfaceLocation @ 14b5326a0

TVector<double> * __thiscall
ADS_NetCharacter::GetFluxSurfaceLocation
          (ADS_NetCharacter *this,TVector<double> *__return_storage_ptr__)

{
  UFunction *this_00;
  UClass *pUVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ADS_NetCharacter_GetFluxSurfaceLocation);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = 0.0;
    local_28 = 0.0;
    dStack_20 = 0.0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_28);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
    return __return_storage_ptr__;
  }
  (**(code **)(this->_padding_ + 0x778))(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFluxSurfaceLocation_Implementation @ 14b532750

TVector<double> * __thiscall
ADS_NetCharacter::GetFluxSurfaceLocation_Implementation
          (ADS_NetCharacter *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14b532840

UClass * __cdecl ADS_NetCharacter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_NetCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NetCharacter",
               &Z_Registration_Info_UClass_ADS_NetCharacter.InnerSingleton,
               StaticRegisterNativesADS_NetCharacter,0x768,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_NetCharacter>,
               InternalVTableHelperCtorCaller<ADS_NetCharacter>,local_res8,
               ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_NetCharacter.InnerSingleton;
}

// StaticRegisterNativesADS_NetCharacter @ 14b5330a0

void __cdecl ADS_NetCharacter::StaticRegisterNativesADS_NetCharacter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_NetCharacter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFluxSurfaceLocation @ 14b5341a0

void __cdecl
ADS_NetCharacter::execGetFluxSurfaceLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x778))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// ADS_NetCharacter @ 14bc81d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_NetCharacter * __thiscall
ADS_NetCharacter::ADS_NetCharacter(ADS_NetCharacter *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UDS_ActorAttachedWidgetComponent *pUVar6;
  USkeletalMeshComponent *this_00;
  UDS_CustomizableSkeletalComponent *this_01;
  FName local_res8;
  
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->PartsComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartsComponents).ArrayNum = 0;
  (this->PartsComponents).ArrayMax = 0;
  (this->CustomizableSkmComponent).field0_0x0.DebugPtr = (UDS_CustomizableSkeletalComponent *)0x0;
  (this->NameTagWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->SmiteEffectUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->TargetInfoWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->PredictedDamageWidgetComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->DamageEffectWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->BlockEffectWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  if (this->_padding_ != 0) {
    ::FName::FName(&local_res8,L"NetPlayer");
    this->_padding_ = (longlong)local_res8;
    (**(code **)(*(longlong *)this->_padding_ + 0x788))((longlong *)this->_padding_,local_res8,1);
  }
  pFVar3 = ::FName::FName(&local_res8,L"CharacterTrajectory");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_CharacterTrajectoryComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  pFVar3 = ::FName::FName(&local_res8,"NameTagComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
  pUVar6 = (UDS_ActorAttachedWidgetComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->NameTagWidgetComponent).field0_0x0.DebugPtr = pUVar6;
  pFVar3 = ::FName::FName(&local_res8,L"SkeletalMeshComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  this_00 = (USkeletalMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  pFVar3 = ::FName::FName(&local_res8,"CustomizableSkmComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_CustomizableSkeletalComponent_NoRegister();
  this_01 = (UDS_CustomizableSkeletalComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UDS_CustomizableSkeletalComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->CustomizableSkmComponent).field0_0x0.DebugPtr = this_01;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_01,
             (USceneComponent *)(this->SkeletalMeshComp).field0_0x0.DebugPtr,(FName)0x0);
  ((this->CustomizableSkmComponent).field0_0x0.DebugPtr)->field_0x271 = 0;
  ((this->CustomizableSkmComponent).field0_0x0.DebugPtr)->field_0x272 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  return this;
}

// BeginPlay @ 14bc89000

void __thiscall ADS_NetCharacter::BeginPlay(ADS_NetCharacter *this)

{
  UDS_ActorAttachedWidgetComponent *pUVar1;
  bool bVar2;
  UDS_SyncRecvComponent *pUVar3;
  undefined1 local_18 [4];
  undefined8 local_14;
  undefined4 local_c;
  
  bVar2 = UDS_GameInstance::GetIsAIGymMode();
  if ((bVar2) &&
     (pUVar1 = (this->NameTagWidgetComponent).field0_0x0.DebugPtr,
     pUVar1 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
    (**(code **)(*(longlong *)pUVar1 + 0xb58))(pUVar1,0);
  }
  ADS_EntityActorBase::BeginPlay((ADS_EntityActorBase *)this);
  pUVar3 = NewObject<UDS_SyncRecvComponent>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDS_SyncRecvComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->_padding_ = (longlong)pUVar3;
  *(undefined1 *)(this->_padding_ + 0x287) = 0;
  local_18[0] = 3;
  local_14 = 0;
  local_c = 0x3f800000;
  (**(code **)(*(longlong *)this->_padding_ + 0x6e8))((longlong *)this->_padding_,local_18);
  RefreshCOICoreAsync(this);
  return;
}

// EndPlay @ 14bc96d10

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

void __thiscall ADS_NetCharacter::EndPlay(ADS_NetCharacter *this,Type param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar6;
  UWorld *pUVar7;
  FStopReplicatingActorParams *pFVar8;
  UFunction *pUVar9;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar10;
  ADS_NetCharacter *pAVar11;
  UClass *pUVar12;
  ADS_NetCharacter *pAVar13;
  longlong *plVar14;
  ADS_NetCharacter *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_NetCharacter *pAStack_148;
  ADS_NetCharacter *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_NetCharacter *pAStack_120;
  undefined1 uStack_118;
  FStopReplicatingActorParams FStack_110;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_108;
  longlong alStack_f8 [24];
  longlong *plStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((this->_padding_ & 0x180000000000) != 0x100000000000) {
    return;
  }
  pAVar13 = (ADS_NetCharacter *)0x0;
  pAVar15 = (ADS_NetCharacter *)0x0;
  pAVar11 = this;
  if (this == (ADS_NetCharacter *)0x0) {
    pAVar11 = pAVar13;
  }
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar11);
  if (bVar6) {
    pUVar7 = AActor::GetWorld((AActor *)this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
    if (bVar6) {
      FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xe7;
  pFVar8 = FStopReplicatingActorParams::FStopReplicatingActorParams(&FStack_110,param_1);
  UE::Net::FReplicationSystemUtil::StopReplicatingActor((AActor *)this,pFVar8);
  uStack_168 = (char)param_1;
  pUVar9 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveEndPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar9,&uStack_168);
  pTStack_158 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 7) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnEndPlay");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar5 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar10 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_108,(UObject *)this,FVar5);
    FStack_128.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    pTStack_158 = pTVar10->Object;
    if (FStack_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_128.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_128.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_130 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_150,&FStack_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_128.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_108.SharedReferenceCount.ReferenceController);
  }
  this_00 = pTStack_158;
  if (pTStack_158 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((pTStack_158 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAStack_120 = this;
    uStack_118 = (char)param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,&pAStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_150.ReferenceController);
  plStack_38 = (longlong *)0x0;
  uStack_2c = 0x18;
  iStack_30 = 0;
  pAVar11 = (ADS_NetCharacter *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ADS_NetCharacter *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ADS_NetCharacter *)0x0) goto LAB_147390f4f;
    UE::GC::MarkAsReachable((UObject *)pAVar11);
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar15 = pAVar13;
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if (((int)pAVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pAVar11->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pAVar15 = pAVar11;
    }
  }
LAB_147390f4f:
  pAVar13 = (ADS_NetCharacter *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (ADS_NetCharacter *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_148,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  else {
    pAStack_140 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (ADS_NetCharacter *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_140,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  iVar3 = iStack_30;
  plVar14 = alStack_f8;
  if (plStack_38 != (longlong *)0x0) {
    plVar14 = plStack_38;
  }
  plVar2 = plVar14 + iStack_30;
  while( true ) {
    if (iStack_30 != iVar3) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_167);
    }
    if (plVar14 == plVar2) break;
    plStack_160 = (longlong *)*plVar14;
    if (((*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0) &&
       ((**(code **)(*plStack_160 + 0x400))(plStack_160,param_1),
       (*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0)) {
      pplStack_138 = &plStack_160;
      `AActor::EndPlay'::__l15::<lambda_1>::operator()(&pplStack_138);
    }
    plVar14 = plVar14 + 1;
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free(plStack_38);
  }
  return;
}

// GetAnimBPPath @ 14bc9ec20

FSoftObjectPath * __thiscall
ADS_NetCharacter::GetAnimBPPath(ADS_NetCharacter *this,FSoftObjectPath *__return_storage_ptr__)

{
  FDS_ResourcePresetTableRow *this_00;
  FDS_ResourceAbpTableRow *pFVar1;
  
  this_00 = (FDS_ResourcePresetTableRow *)(**(code **)(this->_padding_ + 0x28))();
  pFVar1 = FDS_ResourcePresetTableRow::ID_AbpLinkTable(this_00);
  FSoftObjectPath::FSoftObjectPath(__return_storage_ptr__,&pFVar1->AbpPath);
  return __return_storage_ptr__;
}

// GetCOICorePath @ 14bc9f360

FSoftObjectPath * __thiscall
ADS_NetCharacter::GetCOICorePath(ADS_NetCharacter *this,FSoftObjectPath *__return_storage_ptr__)

{
  FDS_ResourcePresetTableRow *this_00;
  FDS_ResourceMeshTableRow *pFVar1;
  
  this_00 = (FDS_ResourcePresetTableRow *)(**(code **)(this->_padding_ + 0x28))();
  pFVar1 = FDS_ResourcePresetTableRow::ID_ResourceMeshTable(this_00);
  FSoftObjectPath::FSoftObjectPath(__return_storage_ptr__,&pFVar1->MeshPath);
  return __return_storage_ptr__;
}

// GetEntitySpawnRange @ 14bc9f690

EDS_EntitySpawnRange __thiscall ADS_NetCharacter::GetEntitySpawnRange(ADS_NetCharacter *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FDS_RaidPartyRepo *pFVar4;
  EDS_AccountAuthority EVar5;
  bool bVar6;
  EDS_EntitySpawnRange EVar7;
  int iVar8;
  FDS_AuthData *this_00;
  FDS_RaidPartyRepo *pFVar9;
  UDS_DataManager *pUVar10;
  FDS_RaidPartyMemberInfo *pFVar11;
  
  this_00 = TDS_Singleton<FDS_AuthData>::GetInst();
  EVar5 = FDS_AuthData::GetAccountAuthority(this_00);
  if (EVar5 != GmInvisible) {
    EVar5 = FDS_AuthData::GetAccountAuthority(this_00);
    if (EVar5 != Gm) {
      pFVar9 = TDS_Singleton<FDS_RaidPartyRepo>::Inst;
      if (TDS_Singleton<FDS_RaidPartyRepo>::Inst == (FDS_RaidPartyRepo *)0x0) {
        pFVar9 = ::operator_new(0x98);
        if (pFVar9 == (FDS_RaidPartyRepo *)0x0) {
          pFVar9 = (FDS_RaidPartyRepo *)0x0;
        }
        else {
          pFVar9->_padding_ = 0;
          (pFVar9->RaidPartyInfo).RaidPartyUID = 0;
          *(undefined8 *)&(pFVar9->RaidPartyInfo).DungeonId = 0;
          (pFVar9->RaidPartyInfo).PartyName.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar9->RaidPartyInfo).PartyName.Data.ArrayNum = 0;
          (pFVar9->RaidPartyInfo).PartyName.Data.ArrayMax = 0;
          *(undefined8 *)&(pFVar9->RaidPartyInfo).IsPassword = 0;
          (pFVar9->RaidPartyInfo).Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar9->RaidPartyInfo).Members.ArrayNum = 0;
          (pFVar9->RaidPartyInfo).Members.ArrayMax = 0;
          (pFVar9->RaidPartyInfo).LeaderUID = 0;
          (pFVar9->RaidPartyInfo).IsPublic = false;
          *(undefined3 *)&(pFVar9->RaidPartyInfo).field_0x41 = 0;
          (pFVar9->RaidPartyInfo).MemberCount = 0;
          *(undefined8 *)&(pFVar9->RaidPartyInfo).State = 0;
          (pFVar9->RaidPartyVoteData).RaidPartyUID = 0;
          (pFVar9->RaidPartyVoteData).PlayerUID = 0;
          (pFVar9->RaidPartyVoteData).AgreementCount = 0;
          (pFVar9->RaidPartyVoteData).RejectCount = 0;
          (pFVar9->RaidPartyVoteData).VoteProposerUID = 0;
          (pFVar9->RaidPartyVoteData).VoteStartTime.Ticks = 0;
          *(undefined8 *)&pFVar9->bIsVoteable = 0;
          (pFVar9->Password).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar9->Password).Data.ArrayNum = 0;
          (pFVar9->Password).Data.ArrayMax = 0;
          pFVar9->_padding_ = (longlong)&___7FDS_RaidPartyRepo__6B_;
        }
        TDS_Singleton<FDS_RaidPartyRepo>::Inst = pFVar9;
        pUVar10 = UDS_DataManager::GetInst();
        pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::Inst;
        if (pUVar10 == (UDS_DataManager *)0x0) {
          if (TDS_Singleton<FDS_RaidPartyRepo>::Inst != (FDS_RaidPartyRepo *)0x0) {
            pFVar2 = (TDS_Singleton<FDS_RaidPartyRepo>::Inst->Password).Data.AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            DestructItems<FDS_RaidPartyMemberInfo,int>
                      ((FDS_RaidPartyMemberInfo *)
                       (pFVar4->RaidPartyInfo).Members.AllocatorInstance.Data,
                       (pFVar4->RaidPartyInfo).Members.ArrayNum);
            pFVar2 = (pFVar4->RaidPartyInfo).Members.AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            pFVar2 = (pFVar4->RaidPartyInfo).PartyName.Data.AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            ::operator_delete(pFVar4,0x98);
          }
          TDS_Singleton<FDS_RaidPartyRepo>::Inst = (FDS_RaidPartyRepo *)0x0;
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4219184397653377064>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                             ,0x28,"false");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            EVar7 = (*pcVar3)();
            return EVar7;
          }
          pFVar9 = &TDS_Singleton<FDS_RaidPartyRepo>::Empty;
        }
        else {
          iVar8 = (pUVar10->RepoArray).ArrayNum;
          piVar1 = &(pUVar10->RepoArray).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(pUVar10->RepoArray).AllocatorInstance,piVar1);
          }
          (pUVar10->RepoArray).ArrayNum = iVar8 + 1;
          *(FDS_RaidPartyRepo **)((pUVar10->RepoArray).AllocatorInstance.Data + (longlong)iVar8 * 8)
               = pFVar9;
          pFVar9 = TDS_Singleton<FDS_RaidPartyRepo>::Inst;
        }
      }
      pFVar11 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar9);
      if (pFVar11->MemberState != DungeonInPlay) {
        return None;
      }
    }
  }
  return Range25600;
}

// GetNameTagUIComponent @ 14bca09a0

TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr> __thiscall
ADS_NetCharacter::GetNameTagUIComponent(ADS_NetCharacter *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr>)in_RDX;
}

// GetNetCharacter @ 14bca0d40

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

TWeakObjectPtr<ADS_NetCharacter,FWeakObjectPtr> __cdecl
ADS_NetCharacter::GetNetCharacter(ulong64 param_1)

{
  int iVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr *this;
  UObject *pUVar3;
  UClass *pUVar4;
  ulong64 local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_res18 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<ADS_NetCharacter,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,local_res20);
  pUVar3 = FWeakObjectPtr::Get(this);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_NetCharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bca0db3;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bca0db3:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res18);
  return (TWeakObjectPtr<ADS_NetCharacter,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetPartsSystemControl @ 14bca1560

TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> __thiscall
ADS_NetCharacter::GetPartsSystemControl(ADS_NetCharacter *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>)in_RDX;
}

// GetResourcePresetTableRow @ 14bca1890

FDS_ResourcePresetTableRow * __thiscall
ADS_NetCharacter::GetResourcePresetTableRow(ADS_NetCharacter *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_CharacterBaseTableRow *this_00;
  FDS_ResourcePresetTableRow *pFVar3;
  FWeakObjectPtr local_res8 [4];
  
  UDS_CustomizeData::GetData((ulong64)local_res8,this->_padding_,false);
  bVar1 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (bVar1) {
    return &FDS_ResourcePresetTableRow::DefaultObject;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar2[2].field_0x8,true);
  pFVar3 = FDS_CharacterBaseTableRow::ID_ResourcePresetTable(this_00);
  return pFVar3;
}

// GetSkeletalMeshComponent @ 14bca1ae0

TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> __thiscall
ADS_NetCharacter::GetSkeletalMeshComponent(ADS_NetCharacter *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>)in_RDX;
}

// OnAnimLoadComplete @ 14bcaf550

void __thiscall
ADS_NetCharacter::OnAnimLoadComplete
          (ADS_NetCharacter *this,FSoftObjectPath *param_1,UObject *param_2,FWN_EndOfRefs *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UAnimBlueprint *this_00;
  UClass *pUVar4;
  UAnimBlueprintGeneratedClass *pUVar5;
  FWeakObjectPtr *pFVar6;
  UObject *pUVar7;
  IAnimClassInterface *pIVar8;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  this_00 = (UAnimBlueprint *)FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
  if (this_00 == (UAnimBlueprint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1237045903752167001>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NetPlayer\\DS_NetCharacter.cpp"
                       ,0x1a7,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UAnimBlueprint_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar5 = UAnimBlueprint::GetAnimBlueprintGeneratedClass(this_00);
      pIVar8 = (IAnimClassInterface *)&pUVar5->_padding_;
      if (pUVar5 == (UAnimBlueprintGeneratedClass *)0x0) {
        pIVar8 = (IAnimClassInterface *)0x0;
      }
      pUVar4 = IAnimClassInterface::GetActualAnimClass(pIVar8);
      pFVar6 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x80))(&this->_padding_,local_18);
      pUVar7 = FWeakObjectPtr::Get(pFVar6);
      (**(code **)(*(longlong *)pUVar7 + 0xc70))(pUVar7,pUVar4);
    }
    pUVar4 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar4 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)&this_00[4]._padding_)
      ;
      pFVar6 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x80))(&this->_padding_,local_10);
      pUVar7 = FWeakObjectPtr::Get(pFVar6);
      (**(code **)(*(longlong *)pUVar7 + 0xc70))(pUVar7,pUVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnCOICoreInitComplete @ 14bcafe20

void __thiscall
ADS_NetCharacter::OnCOICoreInitComplete
          (ADS_NetCharacter *this,FSoftObjectPath *param_1,UWN_MCS_COICore *param_2,bool param_3,
          FWN_EndOfRefs *param_4)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnCOIUpdateMeshComplete @ 14bcafec0

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
ADS_NetCharacter::OnCOIUpdateMeshComplete
          (ADS_NetCharacter *this,uint param_1,UWN_MCS_COICore *param_2,
          EWN_MCS_MeshUpdateResult param_3)

{
  bool bVar1;
  USceneComponent *this_00;
  longlong lVar2;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_28;
  
  RefreshPartsItem(this);
  (**(code **)(this->_padding_ + 0x80))(&this->_padding_);
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(&local_res8);
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    lVar2 = (**(code **)(this->_padding_ + 0x28))(&this->_padding_);
    local_28._s_0.Z =
         (double)(float)(*(uint *)(lVar2 + 0x50) ^ __xmm_80000000800000008000000080000000);
    USceneComponent::SetRelativeLocation
              (this_00,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,None);
  }
  return;
}

// OnChangedEquipItem @ 14bcb0840

void __thiscall
ADS_NetCharacter::OnChangedEquipItem
          (ADS_NetCharacter *this,EDS_EquipSlotType param_1,long64 param_2)

{
  RefreshItemEquip(this);
  UpdateCoiMesh(this);
  return;
}

// OnChangedTagCallback @ 14bcb19f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_NetCharacter::OnChangedTagCallback(ADS_NetCharacter *this,FGameplayTag *param_1,bool param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *this_00;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  ADS_EntityActorBase::OnChangedTagCallback((ADS_EntityActorBase *)this,param_1,param_2);
  UDS_CharStateData::GetData((ulong64)local_158);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_NetCharacter::OnChangedTagCallback",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0xbf,L"charStateData is nullptr. entityID : %d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_158);
    UDS_CharStateData::OnChangedTagCallback(this_00,param_1,param_2);
  }
  return;
}

// OnCharacterLoadingComplete @ 14bcb1b80

void __thiscall ADS_NetCharacter::OnCharacterLoadingComplete(ADS_NetCharacter *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ItemDataSet *this_00;
  FWeakObjectPtr local_res8 [4];
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_28;
  code *local_18;
  ulonglong uStack_10;
  
  (**(code **)(this->_padding_ + 0x48))();
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(local_res8);
    UDS_ItemDataSet::GetEquipmentItemCharacterData(this_00,&local_28);
    if (local_28.Object != (FDS_EquipmentItemCharacterData *)0x0) {
      if ((local_28.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_10 = uStack_10 & 0xffffffff00000000;
      local_18 = OnChangedEquipItem;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>
      ::AddUObject<ADS_NetCharacter>
                (&(local_28.Object)->OnChangedEquipAllDelegate,(ADS_NetCharacter *)(local_res8 + 1),
                 (pmf_af70919e *)this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  RefreshItemEquip(this);
  UpdateCoiMesh(this);
  return;
}

// OnPartsSystemComplete @ 14bcb9040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NetCharacter::OnPartsSystemComplete(ADS_NetCharacter *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  EDS_AccountAuthority EVar6;
  FDS_UniqueBpTableRow *pFVar7;
  FDS_ResourceEtcTableRow *pFVar8;
  UObject *pUVar9;
  FName *pFVar10;
  UClass *pUVar11;
  UDS_ActorAttachedWidgetComponent *pUVar12;
  FDS_AuthData *this_00;
  UDS_ZoneManager *pUVar13;
  FString *pFVar14;
  FName local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FSoftObjectPath local_b8;
  FSoftObjectPath local_98;
  FSoftObjectPath local_78;
  FSoftObjectPath local_58;
  
  (**(code **)(this->_padding_ + 0x80))();
  bVar5 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (!bVar5) {
    pFVar7 = FDS_UniqueBpTableRow::GetRef(5,true);
    pFVar8 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar7);
    plVar2 = (longlong *)this->_padding_;
    pcVar3 = *(code **)(*plVar2 + 0x508);
    ::FName::FName(&local_res8,"NameTag");
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    (*pcVar3)(plVar2,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform);
    UDS_ActorAttachedWidgetComponent::Init
              ((UDS_ActorAttachedWidgetComponent *)this->_padding_,&pFVar8->ResourcePath);
    if (this->_padding_ == 0) {
      pFVar10 = ::FName::FName(&local_res8,L"SmiteEffectUIComponent");
      FVar4 = *pFVar10;
      pUVar11 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
      pUVar12 = NewObject<UDS_ActorAttachedWidgetComponent>
                          ((UObject *)&this[-1]._padding_,pUVar11,FVar4,RF_NoFlags,(UObject *)0x0,
                           false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      this->_padding_ = (longlong)pUVar12;
    }
    pFVar7 = FDS_UniqueBpTableRow::GetRef(0xd,true);
    pFVar8 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar7);
    plVar2 = (longlong *)this->_padding_;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pcVar3 = *(code **)(*plVar2 + 0x508);
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    (*pcVar3)(plVar2,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform);
    UDS_ActorAttachedWidgetComponent::Init
              ((UDS_ActorAttachedWidgetComponent *)this->_padding_,&pFVar8->ResourcePath);
    this_00 = TDS_Singleton<FDS_AuthData>::GetInst();
    EVar6 = FDS_AuthData::GetAccountAuthority(this_00);
    if (EVar6 == GmInvisible) {
      pUVar13 = UDS_ZoneManager::GetInst();
      if ((pUVar13 != (UDS_ZoneManager *)0x0) && (pUVar13->IslandID == 6)) {
        USceneComponent::SetVisibility((USceneComponent *)this->_padding_,false,DirtyOnly);
        (**(code **)(this->_padding_ + 0x1f0))(this,1);
        if (this->_padding_ == 0) {
          pFVar10 = ::FName::FName(&local_res8,L"TargetInfoWidgetComponent");
          FVar4 = *pFVar10;
          pUVar11 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
          pUVar12 = NewObject<UDS_ActorAttachedWidgetComponent>
                              ((UObject *)&this[-1]._padding_,pUVar11,FVar4,RF_NoFlags,
                               (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar12 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          this->_padding_ = (longlong)pUVar12;
        }
        pFVar14 = ::FString::FString((FString *)&local_d8,
                                     "/Game/UIs/MIR_FIVE/UMG_BP_N/HUD_N/HUD_Boss_Ai/HUD_Boss_Ai_Target.HUD_Boss_Ai_Target"
                                    );
        pFVar14 = FWN_SoftObjectUtils::GetObjectPath(&local_e8,pFVar14,false);
        local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_58.AssetPath.PackageName.Number = 0;
        local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_58.AssetPath.AssetName.Number = 0;
        local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.SubPathString.Data.ArrayNum = 0;
        local_58.SubPathString.Data.ArrayMax = 0;
        local_f8.DataPtr = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        iVar1 = (pFVar14->Data).ArrayNum;
        local_f8.Size = iVar1 + -1;
        if (iVar1 == 0) {
          local_f8.Size = 0;
        }
        FSoftObjectPath::SetPath(&local_58,&local_f8);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.DataPtr);
        }
        plVar2 = (longlong *)this->_padding_;
        pcVar3 = *(code **)(*plVar2 + 0x508);
        ::FName::FName(&local_res8,"Buff_Mid");
        pUVar9 = FWeakObjectPtr::Get(&local_res10);
        (*pcVar3)(plVar2,pUVar9);
        UDS_ActorAttachedWidgetComponent::Init
                  ((UDS_ActorAttachedWidgetComponent *)this->_padding_,&local_58);
        if (this->_padding_ == 0) {
          pFVar10 = ::FName::FName(&local_res8,L"PredictedDamageWidgetComponent");
          FVar4 = *pFVar10;
          pUVar11 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
          pUVar12 = NewObject<UDS_ActorAttachedWidgetComponent>
                              ((UObject *)&this[-1]._padding_,pUVar11,FVar4,RF_NoFlags,
                               (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar12 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          this->_padding_ = (longlong)pUVar12;
        }
        pFVar14 = ::FString::FString((FString *)&local_c8,
                                     "/Game/UIs/MIR_FIVE/UMG_BP_N/HUD_N/HUD_Boss_Ai/HUD_Boss_ai_Expected_Hit.HUD_Boss_ai_Expected_Hit"
                                    );
        pFVar14 = FWN_SoftObjectUtils::GetObjectPath(&local_e8,pFVar14,false);
        local_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_78.AssetPath.PackageName.Number = 0;
        local_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_78.AssetPath.AssetName.Number = 0;
        local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.SubPathString.Data.ArrayNum = 0;
        local_78.SubPathString.Data.ArrayMax = 0;
        local_f8.DataPtr = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        iVar1 = (pFVar14->Data).ArrayNum;
        local_d8.Size = iVar1 + -1;
        if (iVar1 == 0) {
          local_d8.Size = 0;
        }
        local_f8.Size = local_d8.Size;
        local_d8._12_4_ = local_f8._12_4_;
        local_d8.DataPtr = local_f8.DataPtr;
        FSoftObjectPath::SetPath(&local_78,&local_d8);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.DataPtr);
        }
        plVar2 = (longlong *)this->_padding_;
        pcVar3 = *(code **)(*plVar2 + 0x508);
        ::FName::FName(&local_res8,"Buff_Mid");
        pUVar9 = FWeakObjectPtr::Get(&local_res10);
        (*pcVar3)(plVar2,pUVar9);
        UDS_ActorAttachedWidgetComponent::Init
                  ((UDS_ActorAttachedWidgetComponent *)this->_padding_,&local_78);
        if (this->_padding_ == 0) {
          pFVar10 = ::FName::FName(&local_res8,L"DamageEffectWidgetComponent");
          FVar4 = *pFVar10;
          pUVar11 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
          pUVar12 = NewObject<UDS_ActorAttachedWidgetComponent>
                              ((UObject *)&this[-1]._padding_,pUVar11,FVar4,RF_NoFlags,
                               (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar12 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          this->_padding_ = (longlong)pUVar12;
        }
        pFVar14 = ::FString::FString(&local_e8,
                                     "/Game/UIs/MIR_FIVE/UMG_BP_N/HUD_N/HUD_Boss_Ai/HUD_Boss_ai_Normal_Hit.HUD_Boss_ai_Normal_Hit"
                                    );
        pFVar14 = FWN_SoftObjectUtils::GetObjectPath((FString *)&local_d8,pFVar14,false);
        local_98.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_98.AssetPath.PackageName.Number = 0;
        local_98.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_98.AssetPath.AssetName.Number = 0;
        local_98.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.SubPathString.Data.ArrayNum = 0;
        local_98.SubPathString.Data.ArrayMax = 0;
        local_f8.DataPtr = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        iVar1 = (pFVar14->Data).ArrayNum;
        local_c8.Size = iVar1 + -1;
        if (iVar1 == 0) {
          local_c8.Size = 0;
        }
        local_f8.Size = local_c8.Size;
        local_c8._12_4_ = local_f8._12_4_;
        local_c8.DataPtr = local_f8.DataPtr;
        FSoftObjectPath::SetPath(&local_98,&local_c8);
        if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.DataPtr);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        plVar2 = (longlong *)this->_padding_;
        pcVar3 = *(code **)(*plVar2 + 0x508);
        ::FName::FName(&local_res8,"Buff_Mid");
        pUVar9 = FWeakObjectPtr::Get(&local_res10);
        (*pcVar3)(plVar2,pUVar9);
        UDS_ActorAttachedWidgetComponent::Init
                  ((UDS_ActorAttachedWidgetComponent *)this->_padding_,&local_98);
        if (this->_padding_ == 0) {
          pFVar10 = ::FName::FName(&local_res8,L"BlockEffectWidgetComponent");
          FVar4 = *pFVar10;
          pUVar11 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
          pUVar12 = NewObject<UDS_ActorAttachedWidgetComponent>
                              ((UObject *)&this[-1]._padding_,pUVar11,FVar4,RF_NoFlags,
                               (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar12 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          this->_padding_ = (longlong)pUVar12;
        }
        pFVar14 = ::FString::FString(&local_e8,
                                     "/Game/UIs/MIR_FIVE/UMG_BP_N/HUD_N/HUD_Boss_Ai/HUD_Boss_ai_Block.HUD_Boss_ai_Block"
                                    );
        pFVar14 = FWN_SoftObjectUtils::GetObjectPath((FString *)&local_d8,pFVar14,false);
        local_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_b8.AssetPath.PackageName.Number = 0;
        local_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_b8.AssetPath.AssetName.Number = 0;
        local_b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.SubPathString.Data.ArrayNum = 0;
        local_b8.SubPathString.Data.ArrayMax = 0;
        local_f8.DataPtr = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        iVar1 = (pFVar14->Data).ArrayNum;
        local_c8.Size = iVar1 + -1;
        if (iVar1 == 0) {
          local_c8.Size = 0;
        }
        local_f8.Size = local_c8.Size;
        local_c8._12_4_ = local_f8._12_4_;
        local_c8.DataPtr = local_f8.DataPtr;
        FSoftObjectPath::SetPath(&local_b8,&local_c8);
        if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.DataPtr);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        plVar2 = (longlong *)this->_padding_;
        pcVar3 = *(code **)(*plVar2 + 0x508);
        pFVar10 = ::FName::FName(&local_res8,"Buff_Mid");
        FVar4 = *pFVar10;
        pUVar9 = FWeakObjectPtr::Get(&local_res10);
        (*pcVar3)(plVar2,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar4);
        UDS_ActorAttachedWidgetComponent::Init
                  ((UDS_ActorAttachedWidgetComponent *)this->_padding_,&local_b8);
        if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_98.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
    UDS_CharacterTrajectoryComponent::Init((UDS_CharacterTrajectoryComponent *)this->_padding_);
    local_res20 = 0;
    local_res8.ComparisonIndex.Value._0_1_ = 0x27;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)this,(EDS_AbilityTagType *)&local_res8,
               (TObjectPtr<UWN_AbilityContext>)&local_res20);
    local_res20 = 0;
    local_res8.ComparisonIndex.Value._0_1_ = 0x26;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)this,(EDS_AbilityTagType *)&local_res8,
               (TObjectPtr<UWN_AbilityContext>)&local_res20);
    local_res20 = 0;
    local_res8.ComparisonIndex.Value._0_1_ = 0x23;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)this,(EDS_AbilityTagType *)&local_res8,
               (TObjectPtr<UWN_AbilityContext>)&local_res20);
    local_res20 = 0;
    local_res8.ComparisonIndex.Value._0_1_ = 0x67;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)this,(EDS_AbilityTagType *)&local_res8,
               (TObjectPtr<UWN_AbilityContext>)&local_res20);
    UDS_PlayerData::GetData((ulong64)&local_res18,this->_padding_,false);
    bVar5 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar5) {
      pUVar9 = FWeakObjectPtr::Get(&local_res18);
      if (pUVar9[10].field_0x8 == '\x16') {
        local_res8.ComparisonIndex.Value = 0x20;
        local_res8.Number = 0;
        (**(code **)(this->_padding_ + 0x58))(this,&local_res8,0);
      }
    }
    FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this);
  }
  return;
}

// RefreshCOICoreAsync @ 14bcc2260

void __thiscall ADS_NetCharacter::RefreshCOICoreAsync(ADS_NetCharacter *this)

{
  FScriptContainerElement *pFVar1;
  UWN_MCS_COICore *this_00;
  FName FVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  undefined1 auVar5 [8];
  FSharedReferencer<1> FVar6;
  char cVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  FDS_ResourcePresetTableRow *pFVar11;
  FDS_ResourceMeshTableRow *pFVar12;
  FString *pFVar13;
  FName *pFVar14;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
  *pTVar15;
  FDS_ResourceAbpTableRow *pFVar16;
  atomic<unsigned___int64> *paVar17;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy> *pTVar18;
  int iVar19;
  int iVar20;
  TReferenceControllerBase<1> *pTVar21;
  size_t sVar22;
  FName local_res8;
  undefined1 local_138 [16];
  ForAnyElementType local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  ForAnyElementType FStack_110;
  int local_108;
  undefined1 local_f8 [8];
  FDelegateAllocation FStack_f0;
  undefined1 local_d8 [8];
  FSharedReferencer<1> FStack_d0;
  FLoadAssetAsyncOptionalParams local_c8;
  undefined1 local_a0 [8];
  FDelegateAllocation local_98;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  FSoftObjectPath local_70;
  FSoftObjectPath local_50;
  
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  local_118 = (undefined1  [8])OnCharacterLoadingComplete;
  FStack_110.Data =
       (FScriptContainerElement *)
       ((ulonglong)local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController &
       0xffffffff00000000);
  local_f8 = (undefined1  [8])0x0;
  FStack_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)local_138);
  local_120 = &FStack_f0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&FStack_f0);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_NetCharacter____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_NetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_res8 = (FName)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_NetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
    *(undefined1 (*) [8])(puVar8 + 4) = local_118;
    puVar8[5] = FStack_110.Data;
  }
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  local_d8 = (undefined1  [8])0x0;
  FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FReadAccessScope *)local_138);
  if (((FStack_f0.DelegateSize == 0) ||
      (FStack_f0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar7 = (**(code **)(*(longlong *)FStack_f0.DelegateAllocator + 0x38))(), cVar7 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_138);
  if (!bVar3) goto LAB_14bcc25e0;
  local_c8.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_c8._16_8_ = local_c8._16_8_ & 0xffffffff00000000;
  local_118 = (undefined1  [8])0x0;
  FStack_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FReadAccessScope *)local_138);
  if ((FStack_f0.DelegateSize != 0) &&
     (FStack_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)FStack_f0.DelegateAllocator + 0x50))
              (FStack_f0.DelegateAllocator,local_118);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_138);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)local_138);
  iVar20 = local_108;
  FVar4.Data = FStack_110.Data;
  FStack_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_c8,
             (FWriteAccessScope *)local_138);
  if (local_c8.PackagePriority == 0) {
LAB_14bcc246a:
    if (local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController);
    }
  }
  else if (local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController !=
           (TReferenceControllerBase<1> *)0x0) {
    (**(code **)(local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8.ProgressDelegate.SharedReferenceCount,0,0,0x10);
    local_c8._16_8_ = local_c8._16_8_ & 0xffffffff00000000;
    goto LAB_14bcc246a;
  }
  local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)FVar4.Data;
  local_c8.PackagePriority = iVar20;
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)local_138);
  if ((local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
    local_108 = 0;
  }
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  if (FStack_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  pTVar10 = ::operator_new(0x30);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)(pTVar10 + 1) = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[2]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar10 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_c8);
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
    ;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar21 = pTVar10;
  }
  local_118 = (undefined1  [8])0x0;
  FStack_110.Data = (FScriptContainerElement *)pTVar21;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FStack_d0,(FSharedReferencer<1> *)&FStack_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FStack_110.Data);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_c8,
             (FWriteAccessScope *)local_138);
  if ((local_c8.PackagePriority != 0) &&
     (local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)(local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8.ProgressDelegate.SharedReferenceCount,0,0,0x10);
    local_c8._16_8_ = local_c8._16_8_ & 0xffffffff00000000;
  }
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  if (local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_c8);
LAB_14bcc25e0:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)local_138);
  if ((FStack_f0.DelegateSize != 0) &&
     (FStack_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_f0,0,0,0x10);
    FStack_f0.DelegateSize = 0;
  }
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  if (FStack_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  local_118 = (undefined1  [8])OnCOICoreInitComplete;
  FStack_110.Data =
       (FScriptContainerElement *)
       ((ulonglong)local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController &
       0xffffffff00000000);
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)local_138);
  local_120 = &local_80;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_80);
  FVar6.ReferenceController = FStack_d0.ReferenceController;
  auVar5 = local_d8;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUWN_MCS_COICore___N_ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    puVar8[1] = local_d8;
    puVar8[2] = FStack_d0.ReferenceController;
    if (FStack_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_NetCharacter____A6AXAEBUFSoftObjectPath__PEAVUWN_MCS_COICore___N_ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_NetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[4] = 0;
    local_res8 = (FName)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_NetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res8);
    *(undefined1 (*) [8])(puVar8 + 5) = local_118;
    puVar8[6] = FStack_110.Data;
  }
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  pFVar11 = (FDS_ResourcePresetTableRow *)(**(code **)(this->_padding_ + 0x28))(&this->_padding_);
  pFVar12 = FDS_ResourcePresetTableRow::ID_ResourceMeshTable(pFVar11);
  local_50.AssetPath.PackageName = (pFVar12->MeshPath).AssetPath.PackageName;
  local_50.AssetPath.AssetName = (pFVar12->MeshPath).AssetPath.AssetName;
  local_50.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.SubPathString.Data.ArrayNum = (pFVar12->MeshPath).SubPathString.Data.ArrayNum;
  sVar22 = (size_t)local_50.SubPathString.Data.ArrayNum;
  pFVar1 = (pFVar12->MeshPath).SubPathString.Data.AllocatorInstance.Data;
  if (local_50.SubPathString.Data.ArrayNum == 0) {
    local_50.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_50.SubPathString,local_50.SubPathString.Data.ArrayNum,
               &local_50.SubPathString.Data.ArrayMax);
    memcpy(local_50.SubPathString.Data.AllocatorInstance.Data,pFVar1,sVar22);
  }
  pFVar13 = FSoftObjectPath::ToString(&local_50,(FString *)local_f8);
  pFVar13 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_118,pFVar13,false);
  local_138._0_4_ = 0;
  local_138._4_4_ = 0;
  local_138._8_4_ = 0;
  local_138._12_4_ = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120._0_4_ = 0;
  local_120._4_4_ = 0;
  local_d8 = (undefined1  [8])(pFVar13->Data).AllocatorInstance.Data;
  iVar20 = (pFVar13->Data).ArrayNum;
  iVar19 = iVar20 + -1;
  if (iVar20 == 0) {
    iVar19 = 0;
  }
  FStack_d0.ReferenceController._0_4_ = iVar19;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_138,(TStringView<wchar_t> *)local_d8);
  if ((atomic<unsigned___int64>)local_118 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_118);
  }
  local_50.AssetPath.PackageName.ComparisonIndex.Value = local_138._0_4_;
  local_50.AssetPath.PackageName.Number = local_138._4_4_;
  local_50.AssetPath.AssetName.ComparisonIndex.Value = local_138._8_4_;
  local_50.AssetPath.AssetName.Number = local_138._12_4_;
  if (local_50.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.SubPathString.Data.AllocatorInstance.Data);
  }
  local_50.SubPathString.Data.AllocatorInstance.Data = local_128.Data;
  local_50.SubPathString.Data.ArrayNum = (int)local_120;
  local_50.SubPathString.Data.ArrayMax = local_120._4_4_;
  local_120._0_4_ = 0;
  local_120._4_4_ = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  if ((atomic<unsigned___int64>)local_f8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  this_00 = (UWN_MCS_COICore *)(this->CustomizableSkmComponent).field0_0x0.DebugPtr;
  pFVar14 = ::FName::FName(&local_res8,"BaseBody");
  FVar2 = *pFVar14;
  pTVar15 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
            ::
            TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                        *)local_138,
                       (TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                        *)local_88);
  UWN_MCS_COICore::InitializeCOIAsync(this_00,pTVar15,&local_50,FVar2,false);
  pFVar11 = (FDS_ResourcePresetTableRow *)(**(code **)(this->_padding_ + 0x28))(&this->_padding_);
  pFVar16 = FDS_ResourcePresetTableRow::ID_AbpLinkTable(pFVar11);
  local_70.AssetPath.PackageName = (pFVar16->AbpPath).AssetPath.PackageName;
  local_70.AssetPath.AssetName = (pFVar16->AbpPath).AssetPath.AssetName;
  local_70.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.SubPathString.Data.ArrayNum = (pFVar16->AbpPath).SubPathString.Data.ArrayNum;
  sVar22 = (size_t)local_70.SubPathString.Data.ArrayNum;
  pFVar1 = (pFVar16->AbpPath).SubPathString.Data.AllocatorInstance.Data;
  if (local_70.SubPathString.Data.ArrayNum == 0) {
    local_70.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_70.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_70.SubPathString,local_70.SubPathString.Data.ArrayNum,
               &local_70.SubPathString.Data.ArrayMax);
    memcpy(local_70.SubPathString.Data.AllocatorInstance.Data,pFVar1,sVar22);
  }
  local_d8 = (undefined1  [8])OnAnimLoadComplete;
  FStack_d0.ReferenceController =
       local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_a0 = (undefined1  [8])0x0;
  local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_98.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)local_138);
  local_120 = &local_98;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_98);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    puVar8[1] = auVar5;
    puVar8[2] = FVar6.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_NetCharacter____A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[4] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res8);
    puVar8[5] = local_d8;
    puVar8[6] = FStack_d0.ReferenceController;
  }
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  pFVar13 = FSoftObjectPath::ToString(&local_70,(FString *)&local_c8);
  paVar17 = (atomic<unsigned___int64> *)
            FWN_SoftObjectUtils::GetObjectPath((FString *)local_118,pFVar13,false);
  local_138._0_4_ = 0;
  local_138._4_4_ = 0;
  local_138._8_4_ = 0;
  local_138._12_4_ = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120._0_4_ = 0;
  local_120._4_4_ = 0;
  local_f8 = *(undefined1 (*) [8])paVar17;
  iVar20 = *(int *)(paVar17 + 1) + -1;
  if (*(int *)(paVar17 + 1) == 0) {
    iVar20 = 0;
  }
  FStack_d0.ReferenceController._0_4_ = iVar20;
  FStack_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)FStack_d0.ReferenceController
  ;
  local_d8 = local_f8;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_138,(TStringView<wchar_t> *)local_f8);
  if ((atomic<unsigned___int64>)local_118 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_118);
  }
  local_70.AssetPath.PackageName.ComparisonIndex.Value = local_138._0_4_;
  local_70.AssetPath.PackageName.Number = local_138._4_4_;
  local_70.AssetPath.AssetName.ComparisonIndex.Value = local_138._8_4_;
  local_70.AssetPath.AssetName.Number = local_138._12_4_;
  if (local_70.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.SubPathString.Data.AllocatorInstance.Data);
  }
  local_70.SubPathString.Data.AllocatorInstance.Data = local_128.Data;
  local_70.SubPathString.Data.ArrayNum = (int)local_120;
  local_70.SubPathString.Data.ArrayMax = local_120._4_4_;
  local_120._0_4_ = 0;
  local_120._4_4_ = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  if (local_c8.ProgressDelegate.Object != (FLoadPackageAsyncProgressDelegate *)0x0) {
    FMemory::Free(local_c8.ProgressDelegate.Object);
  }
  local_c8.PackagePriority = 0;
  local_c8._20_4_ = 0;
  local_c8.LoadFlags = 0;
  local_c8._36_4_ = 0;
  local_c8.InstancingContext = (FLinkerInstancingContext *)0x0;
  local_c8.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_c8.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar18 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        *)local_138,
                       (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        *)local_a0);
  FSoftObjectPath::LoadAsync(&local_70,pTVar18,&local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)local_138);
  if ((local_98.DelegateSize != 0) &&
     (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.DelegateSize = 0;
  }
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_98.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
  if (local_70.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_50.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.SubPathString.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)local_138);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_128.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_138._8_8_,(FDestructionSentinel *)local_138);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return;
}

// RefreshCustomize @ 14bcc2c00

void __thiscall ADS_NetCharacter::RefreshCustomize(ADS_NetCharacter *this)

{
  UCustomizableObjectInstance *this_00;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  longlong lVar5;
  FWeakObjectPtr local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = *(UCustomizableObjectInstance **)
             &((this->CustomizableSkmComponent).field0_0x0.DebugPtr)->field_0x2b0;
  if (this_00 == (UCustomizableObjectInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1237045903752166910>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NetPlayer\\DS_NetCharacter.cpp"
                       ,0x202,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UDS_CustomizeData::GetData((ulong64)&local_res8,this->_padding_,false);
    bVar3 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = *(int *)&pUVar4[3].field_0x8;
      lVar5 = (longlong)local_48.Data.ArrayNum;
      pvVar1 = *(void **)(pUVar4 + 3);
      if (local_48.Data.ArrayNum == 0) {
        local_48.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                   local_48.Data.ArrayNum,&local_48.Data.ArrayMax);
        memcpy(local_48.Data.AllocatorInstance.Data,pvVar1,lVar5 * 2);
      }
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = *(int *)&pUVar4[2].field_0x20;
      lVar5 = (longlong)local_58.Data.ArrayNum;
      pvVar1 = *(void **)&pUVar4[2].field_0x18;
      if (local_58.Data.ArrayNum == 0) {
        local_58.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,
                   local_58.Data.ArrayNum,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,pvVar1,lVar5 * 2);
      }
      ::FString::FString(&local_38,"A_Head");
      UCustomizableObjectInstance::SetIntParameterSelectedOption(this_00,&local_38,&local_48,-1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_28,"A_Hair");
      UCustomizableObjectInstance::SetIntParameterSelectedOption(this_00,&local_28,&local_58,-1);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RefreshItemEquip @ 14bcc2eb0

void __thiscall ADS_NetCharacter::RefreshItemEquip(ADS_NetCharacter *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  UCustomizableObjectInstance *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  UEnum *pUVar7;
  UDS_ItemDataSet *this_01;
  FDS_ItemBaseTableRow *this_02;
  FDS_ResourcePartsTableRow *pFVar8;
  FDS_CoiParameterTableRow *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  FString local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_78;
  FString local_68;
  FString local_58;
  
  this_00 = *(UCustomizableObjectInstance **)
             &((this->CustomizableSkmComponent).field0_0x0.DebugPtr)->field_0x2b0;
  if (this_00 != (UCustomizableObjectInstance *)0x0) {
    iVar6 = ds_parts::EquipParamTypes.ArrayNum;
    pFVar1 = ds_parts::EquipParamTypes.AllocatorInstance.Data + iVar6;
    FVar12.Data = ds_parts::EquipParamTypes.AllocatorInstance.Data;
    while( true ) {
      if (ds_parts::EquipParamTypes.ArrayNum != iVar6) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<enum_EDS_CoiParamType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar12.Data == pFVar1) break;
      FVar2 = *FVar12.Data;
      pUVar7 = StaticEnum<enum_EDS_CoiParamType>();
      UEnum::GetNameStringByValue(pUVar7,&local_68,(ulonglong)(byte)FVar2);
      ::FString::FString(&local_98,L"Default");
      UCustomizableObjectInstance::SetIntParameterSelectedOption(this_00,&local_68,&local_98,-1);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FVar12.Data = FVar12.Data + 1;
    }
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res20);
    bVar5 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar5) {
      this_01 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
      UDS_ItemDataSet::GetEquipmentItemCharacterData(this_01,&local_78);
      if (local_78.Object != (FDS_EquipmentItemCharacterData *)0x0) {
        if ((local_78.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FDS_EquipmentItemCharacterData::GetAllEquippedItemTIDList(local_78.Object,&local_88);
        local_res8[0] = local_88.ArrayNum;
        uVar10 = (ulonglong)(int)local_res8[0];
        local_98.Data.AllocatorInstance.Data = local_88.AllocatorInstance.Data + uVar10 * 4;
        FVar12.Data = local_88.AllocatorInstance.Data;
        while( true ) {
          FVar4.Data = local_98.Data.AllocatorInstance.Data;
          if (local_88.ArrayNum != (int)uVar10) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar12.Data == FVar4.Data) break;
          this_02 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)FVar12.Data,true);
          pFVar8 = FDS_ItemBaseTableRow::ID_ResourcePartsTable(this_02);
          pFVar11 = (pFVar8->ID_CoiParameter).AllocatorInstance.Data;
          iVar6 = (pFVar8->ID_CoiParameter).ArrayNum;
          pFVar1 = pFVar11 + (longlong)iVar6 * 4;
          while( true ) {
            if ((pFVar8->ID_CoiParameter).ArrayNum != iVar6) {
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res18);
            }
            if (pFVar11 == pFVar1) break;
            pFVar9 = FDS_CoiParameterTableRow::GetRef((longlong)*(int *)pFVar11,true);
            pUVar7 = StaticEnum<enum_EDS_CoiParamType>();
            UEnum::GetNameStringByValue(pUVar7,&local_58,(ulonglong)pFVar9->ParamType);
            UCustomizableObjectInstance::SetIntParameterSelectedOption
                      (this_00,&local_58,&pFVar9->Value,-1);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            pFVar11 = pFVar11 + 4;
          }
          FVar12.Data = FVar12.Data + 4;
          uVar10 = (ulonglong)local_res8[0];
        }
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// RefreshPartsItem @ 14bcc3130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_NetCharacter::RefreshPartsItem(ADS_NetCharacter *this)

{
  byte *pbVar1;
  UObjectBase *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FUObjectItem *pFVar5;
  UDS_ItemDataSet *pUVar6;
  UObject *pUVar7;
  FDS_ItemBaseTableRow *this_01;
  FDS_ResourcePartsTableRow *pFVar8;
  FDS_ResourceMeshTableRow *pFVar9;
  UDS_PartsComponent *this_02;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  TArray<TObjectPtr<UDS_PartsComponent>,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 local_res10 [8];
  uint local_res18;
  FWeakObjectPtr local_res20;
  UDS_PartsComponent *local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  longlong local_a0;
  FWeakObjectPtr local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_68;
  int *local_58;
  FName local_50 [2];
  
  uVar16 = 0;
  if (0 < (this->PartsComponents).ArrayNum) {
    lVar17 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar16 < (this->PartsComponents).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UObjectBase **)((this->PartsComponents).AllocatorInstance.Data + lVar17);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObjectBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (**(code **)(this_00->_padding_ + 0x518))
                (this_00,&FDetachmentTransformRules::KeepRelativeTransform);
      (**(code **)(this_00->_padding_ + 0x4a0))(this_00,0);
      pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      if ((((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
      pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      do {
        lVar12 = (pFVar5->field0_0x0).FlagsAndRefCount;
        uVar10 = (uint)((ulonglong)lVar12 >> 0x20);
        if ((uVar10 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar5 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar3 = lVar12 == (pFVar5->field0_0x0).FlagsAndRefCount;
        if (bVar3) {
          (pFVar5->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar10 << 0x20 | (longlong)(int)lVar12 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar3);
      pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      FUObjectItem::ClearRootFlags(pFVar5,Async);
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 8;
    } while ((int)uVar16 < (this->PartsComponents).ArrayNum);
  }
  pTVar14 = &this->PartsComponents;
  local_58 = &(this->PartsComponents).ArrayMax;
  (this->PartsComponents).ArrayNum = 0;
  if ((this->PartsComponents).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar14->AllocatorInstance,0,local_58);
  }
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar6 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
    UDS_ItemDataSet::GetEquipmentItemCharacterData(pUVar6,&local_68);
    if (local_68.Object != (FDS_EquipmentItemCharacterData *)0x0) {
      if ((local_68.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FDS_EquipmentItemCharacterData::GetAllEquippedItemUIDList(local_68.Object,&local_78);
      local_res18 = local_78.ArrayNum;
      uVar11 = (ulonglong)(int)local_res18;
      pFVar15 = local_78.AllocatorInstance.Data + uVar11 * 8;
      FVar13.Data = local_78.AllocatorInstance.Data;
      local_88 = pFVar15;
      while( true ) {
        local_80 = FVar13.Data;
        if (local_78.ArrayNum != (int)uVar11) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar13.Data == pFVar15) break;
        pUVar6 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
        UDS_ItemDataSet::GetItemDataByUID(pUVar6,(ulong64)&local_98);
        bVar3 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_98,(void *)0x0);
        if (!bVar3) {
          pUVar7 = FWeakObjectPtr::Get(&local_98);
          this_01 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)&pUVar7[8].field_0x10,true);
          pFVar8 = FDS_ItemBaseTableRow::ID_ResourcePartsTable(this_01);
          uVar16 = 0;
          pFVar15 = local_88;
          if (0 < (pFVar8->ID_ResourceMesh).ArrayNum) {
            lVar17 = 0;
            local_a0 = 0;
            do {
              lVar12 = local_a0;
              if (((int)uVar16 < 0) || ((pFVar8->SocketName).ArrayNum <= (int)uVar16)) {
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1237045903752166857>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NetPlayer\\DS_NetCharacter.cpp"
                                   ,0x237,"false");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                uVar10 = 0;
                if ((int)uVar16 < (pFVar8->ID_ResourceMesh).ArrayNum) {
                  uVar10 = ~uVar16 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar9 = FDS_ResourceMeshTableRow::GetRef
                                   ((longlong)
                                    *(int *)((pFVar8->ID_ResourceMesh).AllocatorInstance.Data +
                                            lVar12),true);
                uVar10 = 0;
                if ((int)uVar16 < (pFVar8->SocketName).ArrayNum) {
                  uVar10 = ~uVar16 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar15 = (pFVar8->SocketName).AllocatorInstance.Data;
                local_b0.Data = (FScriptContainerElement *)0x0;
                local_a8 = *(int *)(pFVar15 + lVar17 + 8);
                lVar12 = (longlong)local_a8;
                _Src = *(void **)(pFVar15 + lVar17);
                if (local_a8 == 0) {
                  local_a4 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_a8,0,&local_b0,local_a8,&local_a4);
                  memcpy(local_b0.Data,_Src,lVar12 * 2);
                }
                local_90 = 0;
                this_02 = NewObject<UDS_PartsComponent>
                                    ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                                     (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
                FSoftObjectPath::operator=(&this_02->MeshPath,&pFVar9->MeshPath);
                lVar12 = this_02->_padding_;
                pbVar1 = (byte *)((longlong)&this_02->_padding_ + 3);
                *pbVar1 = *pbVar1 & 0xfe;
                pcVar2 = *(code **)(lVar12 + 0x508);
                FVar13.Data = (FScriptContainerElement *)L"";
                if (local_a8 != 0) {
                  FVar13.Data = local_b0.Data;
                }
                ::FName::FName(local_50,(wchar_t *)FVar13.Data);
                (*pcVar2)(this_02,(this->SkeletalMeshComp).field0_0x0.DebugPtr,
                          &FAttachmentTransformRules::KeepRelativeTransform);
                UActorComponent::RegisterComponent((UActorComponent *)this_02);
                (**(code **)(this_02->_padding_ + 1000))(this_02);
                local_b8 = this_02;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_02);
                }
                pFVar15 = (pTVar14->AllocatorInstance).Data;
                if (((pFVar15 <= (FScriptContainerElement *)&local_b8) &&
                    ((FScriptContainerElement *)&local_b8 <
                     pFVar15 + (longlong)(this->PartsComponents).ArrayMax * 8)) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar4 = (this->PartsComponents).ArrayNum;
                if (iVar4 == (this->PartsComponents).ArrayMax) {
                  iVar4 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&pTVar14->AllocatorInstance,local_58);
                  (this->PartsComponents).ArrayNum = iVar4;
                }
                (this->PartsComponents).ArrayNum = iVar4 + 1;
                *(UDS_PartsComponent **)((pTVar14->AllocatorInstance).Data + (longlong)iVar4 * 8) =
                     local_b8;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_b8 != (UDS_PartsComponent *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_b8);
                }
                if (local_b0.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b0.Data);
                }
              }
              local_a0 = local_a0 + 4;
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + 0x10;
              pFVar15 = local_88;
            } while ((int)uVar16 < (pFVar8->ID_ResourceMesh).ArrayNum);
          }
        }
        FVar13.Data = local_80 + 8;
        uVar11 = (ulonglong)local_res18;
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetParentEntity @ 14bcc84b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_NetCharacter::SetParentEntity
          (ADS_NetCharacter *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&this[-1]._padding_,pUVar3,(FTickFunction *)(pUVar2 + 1));
    local_res20 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (FWeakObjectPtr)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (FWeakObjectPtr)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    ADS_EntityActorBase::SetParentEntity
              ((ADS_EntityActorBase *)this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
    return;
  }
  (**(code **)(this->_padding_ + 0x1d0))(this);
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&this[-1]._padding_,pUVar3,(FTickFunction *)(pUVar2 + 1));
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
  ADS_EntityActorBase::SetParentEntity
            ((ADS_EntityActorBase *)this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res20);
  return;
}

// Tick @ 14bcccb80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NetCharacter::Tick(ADS_NetCharacter *this,float param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  UDS_EntityManager *pUVar6;
  FDS_EntityBase *pFVar7;
  FDS_EntityBase *pFVar8;
  float afStackX_8 [2];
  float afStackX_10 [2];
  float afStackX_18 [2];
  undefined8 uStackX_20;
  
  afStackX_10[0] = param_1;
  AActor::Tick((AActor *)this,param_1);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c8))(plVar1,afStackX_10[0]);
  }
  plVar1 = &this->_padding_;
  cVar4 = (**(code **)(*plVar1 + 0x88))(plVar1);
  if ((cVar4 == '\x01') && (plVar2 = (longlong *)this->_padding_, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x2c0))(plVar2,afStackX_10);
  }
  bVar5 = UDS_IngameState::IsNpcTalking();
  if (((((!bVar5) && (cVar4 = (**(code **)(this->_padding_ + 0x770))(this), cVar4 == '\0')) &&
       (pUVar6 = UDS_EntityManager::GetInst(), pUVar6 != (UDS_EntityManager *)0x0)) &&
      ((pFVar7 = UDS_EntityManager::FindEntityBase(pUVar6,this->_padding_),
       pFVar7 != (FDS_EntityBase *)0x0 &&
       (pUVar6 = UDS_EntityManager::GetInst(), pUVar6 != (UDS_EntityManager *)0x0)))) &&
     (pFVar8 = UDS_EntityManager::GetCurrentMainCharEntityBase(pUVar6,true),
     pFVar8 != (FDS_EntityBase *)0x0)) {
    dVar3 = (double)(**(code **)(*plVar1 + 0x68))(plVar1);
    afStackX_8[0] = (float)dVar3;
    dVar3 = (double)(**(code **)(*plVar1 + 0x70))(plVar1);
    afStackX_18[0] = (float)dVar3;
    if ((0.0 < afStackX_8[0]) && (0.0 < afStackX_18[0])) {
      bVar5 = DS_Util::IsCloseDist(pFVar7,pFVar8,afStackX_8);
      if (bVar5) {
        uStackX_20 = 0x10;
        (**(code **)(*plVar1 + 0x60))(plVar1,&uStackX_20,0);
        return;
      }
      bVar5 = DS_Util::IsCloseDist(pFVar7,pFVar8,afStackX_18);
      if (!bVar5) {
        uStackX_20 = 0x10;
        (**(code **)(*plVar1 + 0x58))(plVar1,&uStackX_20,0);
      }
    }
  }
  return;
}

// UpdateCoiMesh @ 14bcce490

void __thiscall ADS_NetCharacter::UpdateCoiMesh(ADS_NetCharacter *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  ADS_NetCharacter *local_res8;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  undefined1 local_48 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  FDelegateAllocation FStack_38;
  EWN_MCS_MeshUpdatePolicy local_28;
  
  local_48._0_4_ = 0xffffffff;
  local_88 = OnCOIUpdateMeshComplete;
  local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_38.DelegateSize = 0;
  local_28 = Async_High;
  uStack_80 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_40,(FWriteAccessScope *)&local_68);
  local_50 = &FStack_38;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&FStack_38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXIPEAVUWN_MCS_COICore__W4EWN_MCS_MeshUpdateResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_NetCharacter____A6AXIPEAVUWN_MCS_COICore__W4EWN_MCS_MeshUpdateResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_NetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_NetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = local_88;
    puVar1[5] = CONCAT44(uStack_7c,uStack_80);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  UWN_MCS_COICore::UpdateMeshAsync
            ((UWN_MCS_COICore *)(this->CustomizableSkmComponent).field0_0x0.DebugPtr,
             (FWN_MCS_MeshUpdateParams *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_40,(FWriteAccessScope *)&local_88);
  if ((FStack_38.DelegateSize != 0) &&
     (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_38,0,0,0x10);
    FStack_38.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_38.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
  return;
}

