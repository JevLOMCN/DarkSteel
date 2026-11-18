// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b4dcba0

UClass * __cdecl ADS_LobbyCharacter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LobbyCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LobbyCharacter",
               &Z_Registration_Info_UClass_ADS_LobbyCharacter.InnerSingleton,
               StaticRegisterNativesADS_LobbyCharacter,0x300,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LobbyCharacter>,
               InternalVTableHelperCtorCaller<ADS_LobbyCharacter>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LobbyCharacter.InnerSingleton;
}

// ADS_LobbyCharacter @ 14b4df730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_LobbyCharacter * __thiscall
ADS_LobbyCharacter::ADS_LobbyCharacter(ADS_LobbyCharacter *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_LobbyCharacter__6B_;
  this->ModelIndex = 0;
  (this->Weapon01).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->Weapon02).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->InitHelmetOpenTime = 0.0;
  this->HelmetCloseInterval = 0.0;
  this->HelmetOpenInterval = 0.0;
  this->HelmetOpenLoopNum = 0;
  (this->BodyMeshComponent).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->Weapon01Component).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->Weapon02Component).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  return this;
}

// ~ADS_LobbyCharacter @ 14b4e0180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_LobbyCharacter::~ADS_LobbyCharacter(ADS_LobbyCharacter *this)

{
  this->_padding_ = (longlong)&___7ADS_LobbyCharacter__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1b50

UClass * __cdecl ADS_LobbyCharacter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LobbyCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LobbyCharacter",
               &Z_Registration_Info_UClass_ADS_LobbyCharacter.InnerSingleton,
               StaticRegisterNativesADS_LobbyCharacter,0x300,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LobbyCharacter>,
               InternalVTableHelperCtorCaller<ADS_LobbyCharacter>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LobbyCharacter.InnerSingleton;
}

// OnActorInvisible @ 14b4e2630

void __thiscall ADS_LobbyCharacter::OnActorInvisible(ADS_LobbyCharacter *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_LobbyCharacter_OnActorInvisible);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014b4e265d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnActorVisible @ 14b4e2670

void __thiscall ADS_LobbyCharacter::OnActorVisible(ADS_LobbyCharacter *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_LobbyCharacter_OnActorVisible);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014b4e269d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesADS_LobbyCharacter @ 14b4e2760

void __cdecl ADS_LobbyCharacter::StaticRegisterNativesADS_LobbyCharacter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ADS_LobbyCharacter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnCloseHelmet @ 14b4e3a80

void __cdecl ADS_LobbyCharacter::execOnCloseHelmet(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCloseHelmet((ADS_LobbyCharacter *)param_1);
  return;
}

// execOnOpenHelmet @ 14b4e3b70

void __cdecl ADS_LobbyCharacter::execOnOpenHelmet(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOpenHelmet((ADS_LobbyCharacter *)param_1);
  return;
}

// ADS_LobbyCharacter @ 14bc81730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_LobbyCharacter * __thiscall
ADS_LobbyCharacter::ADS_LobbyCharacter(ADS_LobbyCharacter *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USkeletalMeshComponent *pUVar4;
  UStaticMeshComponent *this_00;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_LobbyCharacter__6B_;
  (this->Weapon01).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->Weapon02).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->BodyMeshComponent).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->Weapon01Component).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->Weapon02Component).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  this->ModelIndex = 0;
  this->InitHelmetOpenTime = 0.0;
  this->HelmetCloseInterval = 0.0;
  this->HelmetOpenInterval = 0.0;
  this->HelmetOpenLoopNum = 0;
  pFVar2 = ::FName::FName(&local_res8,"BodyMesh");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  pUVar4 = (USkeletalMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->BodyMeshComponent).field0_0x0.DebugPtr = pUVar4;
  pFVar2 = ::FName::FName(&local_res8,"Weapon01Component");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  this_00 = (UStaticMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->Weapon01Component).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,
             (USceneComponent *)(this->BodyMeshComponent).field0_0x0.DebugPtr,(FName)0x0);
  pFVar2 = ::FName::FName(&local_res8,"Weapon02Component");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  pUVar4 = (USkeletalMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Weapon02Component).field0_0x0.DebugPtr = pUVar4;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar4,
             (USceneComponent *)(this->BodyMeshComponent).field0_0x0.DebugPtr,(FName)0x0);
  return this;
}

// BeginPlay @ 14bc88590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_LobbyCharacter::BeginPlay(ADS_LobbyCharacter *this)

{
  UStaticMeshComponent *pUVar1;
  FName FVar2;
  UStaticMesh *pUVar3;
  USkeletalMeshComponent *pUVar4;
  USkeletalMesh *pUVar5;
  USkeletalMeshComponent *pUVar6;
  FName *pFVar7;
  FName local_res8;
  
  AActor::BeginPlay((AActor *)this);
  pFVar7 = ::FName::FName(&local_res8,L"Weapon_r");
  pUVar1 = (this->Weapon01Component).field0_0x0.DebugPtr;
  FVar2 = *pFVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar3 = (this->Weapon01).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UStaticMesh *)0x0) goto LAB_14bc88636;
  }
  else {
    if (pUVar3 == (UStaticMesh *)0x0) goto LAB_14bc88636;
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = (this->BodyMeshComponent).field0_0x0.DebugPtr;
  if (pUVar4 != (USkeletalMeshComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x508))
              (pUVar1,pUVar4,&FAttachmentTransformRules::KeepRelativeTransform,FVar2);
    (**(code **)(pUVar1->_padding_ + 0xb28))(pUVar1,pUVar3);
  }
LAB_14bc88636:
  pFVar7 = ::FName::FName(&local_res8,L"ShieldLink_R");
  pUVar4 = (this->Weapon02Component).field0_0x0.DebugPtr;
  FVar2 = *pFVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = (this->Weapon02).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (USkeletalMesh *)0x0) {
      return;
    }
  }
  else {
    if (pUVar5 == (USkeletalMesh *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = (this->BodyMeshComponent).field0_0x0.DebugPtr;
  if (pUVar6 != (USkeletalMeshComponent *)0x0) {
    (**(code **)(pUVar4->_padding_ + 0x508))
              (pUVar4,pUVar6,&FAttachmentTransformRules::KeepRelativeTransform,FVar2);
    (**(code **)(pUVar4->_padding_ + 0xb48))(pUVar4,pUVar5,1);
  }
  return;
}

// EndPlay @ 14bc96b40

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

void __thiscall ADS_LobbyCharacter::EndPlay(ADS_LobbyCharacter *this,Type param_1)

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
  ADS_LobbyCharacter *pAVar11;
  UClass *pUVar12;
  ADS_LobbyCharacter *pAVar13;
  longlong *plVar14;
  ADS_LobbyCharacter *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_LobbyCharacter *pAStack_148;
  ADS_LobbyCharacter *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_LobbyCharacter *pAStack_120;
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
  pAVar13 = (ADS_LobbyCharacter *)0x0;
  pAVar15 = (ADS_LobbyCharacter *)0x0;
  pAVar11 = this;
  if (this == (ADS_LobbyCharacter *)0x0) {
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
  pAVar11 = (ADS_LobbyCharacter *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ADS_LobbyCharacter *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ADS_LobbyCharacter *)0x0) goto LAB_147390f4f;
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
  pAVar13 = (ADS_LobbyCharacter *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_LobbyCharacter *)0x0)) {
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
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_LobbyCharacter *)0x0)) {
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

// InitHelmet @ 14bca4880

void __thiscall ADS_LobbyCharacter::InitHelmet(ADS_LobbyCharacter *this)

{
  return;
}

// OnCloseHelmet @ 14bcb2410

void __thiscall ADS_LobbyCharacter::OnCloseHelmet(ADS_LobbyCharacter *this)

{
  return;
}

// OnOpenHelmet @ 14bcb80b0

void __thiscall ADS_LobbyCharacter::OnOpenHelmet(ADS_LobbyCharacter *this)

{
  return;
}

// ResetAnimation @ 14bcc43a0

void __thiscall ADS_LobbyCharacter::ResetAnimation(ADS_LobbyCharacter *this)

{
  UAnimInstance *this_00;
  
  this_00 = USkeletalMeshComponent::GetAnimInstance((this->BodyMeshComponent).field0_0x0.DebugPtr);
  if (this_00 != (UAnimInstance *)0x0) {
    UAnimInstance::InitializeAnimation(this_00,false);
    return;
  }
  return;
}

// SetSkeletalWeaponComponent @ 14bcc8910

void __thiscall
ADS_LobbyCharacter::SetSkeletalWeaponComponent
          (ADS_LobbyCharacter *this,TObjectPtr<USkeletalMesh> param_1,
          TObjectPtr<USkeletalMeshComponent> param_2,FName param_3)

{
  USkeletalMeshComponent *pUVar1;
  
  if ((*(longlong *)param_1.field0_0x0 != 0) &&
     (pUVar1 = (this->BodyMeshComponent).field0_0x0.DebugPtr,
     pUVar1 != (USkeletalMeshComponent *)0x0)) {
    (**(code **)(**(longlong **)param_2.field0_0x0 + 0x508))
              (*(longlong **)param_2.field0_0x0,pUVar1,
               &FAttachmentTransformRules::KeepRelativeTransform);
    (**(code **)(**(longlong **)param_2.field0_0x0 + 0xb48))
              (*(longlong **)param_2.field0_0x0,*(undefined8 *)param_1.field0_0x0,1);
  }
  return;
}

// SetStaticWeaponComponent @ 14bcc8a50

void __thiscall
ADS_LobbyCharacter::SetStaticWeaponComponent
          (ADS_LobbyCharacter *this,TObjectPtr<UStaticMesh> param_1,
          TObjectPtr<UStaticMeshComponent> param_2,FName param_3)

{
  USkeletalMeshComponent *pUVar1;
  
  if ((*(longlong *)param_1.field0_0x0 != 0) &&
     (pUVar1 = (this->BodyMeshComponent).field0_0x0.DebugPtr,
     pUVar1 != (USkeletalMeshComponent *)0x0)) {
    (**(code **)(**(longlong **)param_2.field0_0x0 + 0x508))
              (*(longlong **)param_2.field0_0x0,pUVar1,
               &FAttachmentTransformRules::KeepRelativeTransform);
    (**(code **)(**(longlong **)param_2.field0_0x0 + 0xb28))
              (*(longlong **)param_2.field0_0x0,*(undefined8 *)param_1.field0_0x0);
  }
  return;
}

