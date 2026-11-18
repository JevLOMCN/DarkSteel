// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b5d75e0

UClass * __cdecl ADS_ViewerCharacter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_ViewerCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerCharacter",
               &Z_Registration_Info_UClass_ADS_ViewerCharacter.InnerSingleton,
               StaticRegisterNativesADS_ViewerCharacter,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_ViewerCharacter>,
               InternalVTableHelperCtorCaller<ADS_ViewerCharacter>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_ViewerCharacter.InnerSingleton;
}

// ADS_ViewerCharacter @ 14b5d8c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

ADS_ViewerCharacter * __thiscall
ADS_ViewerCharacter::ADS_ViewerCharacter(ADS_ViewerCharacter *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->bIsPartsSystemCharacter = true;
  this->_padding_ = (longlong)&___7ADS_ViewerCharacter__6B_;
  (this->SceneComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->PartsSystemControl).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->COICore).field0_0x0.DebugPtr = (UWN_MCS_COICore *)0x0;
  (this->PartsComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartsComponents).ArrayNum = 0;
  (this->PartsComponents).ArrayMax = 0;
  return this;
}

// ~ADS_ViewerCharacter @ 14b5d9f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_ViewerCharacter::~ADS_ViewerCharacter(ADS_ViewerCharacter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADS_ViewerCharacter__6B_;
  pFVar1 = (this->PartsComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b5db440

UClass * __cdecl ADS_ViewerCharacter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_ViewerCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerCharacter",
               &Z_Registration_Info_UClass_ADS_ViewerCharacter.InnerSingleton,
               StaticRegisterNativesADS_ViewerCharacter,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_ViewerCharacter>,
               InternalVTableHelperCtorCaller<ADS_ViewerCharacter>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_ViewerCharacter.InnerSingleton;
}

// StaticRegisterNativesADS_ViewerCharacter @ 14b5dbd30

void __cdecl ADS_ViewerCharacter::StaticRegisterNativesADS_ViewerCharacter(void)

{
  return;
}

// ADS_ViewerCharacter @ 14bc82cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

ADS_ViewerCharacter * __thiscall
ADS_ViewerCharacter::ADS_ViewerCharacter(ADS_ViewerCharacter *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  USkeletalMeshComponent *this_00;
  UWN_MCS_COICore *this_01;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf9;
  this->_padding_ = (longlong)&___7ADS_ViewerCharacter__6B_;
  this->bIsPartsSystemCharacter = true;
  (this->SceneComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->PartsSystemControl).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->COICore).field0_0x0.DebugPtr = (UWN_MCS_COICore *)0x0;
  (this->PartsComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartsComponents).ArrayNum = 0;
  (this->PartsComponents).ArrayMax = 0;
  pFVar3 = ::FName::FName(&local_res8,"SceneComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SceneComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->SceneComponent).field0_0x0;
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
  pFVar3 = ::FName::FName(&local_res8,"COICore");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UWN_MCS_COICore_NoRegister();
  this_01 = (UWN_MCS_COICore *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UWN_MCS_COICore *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->COICore).field0_0x0.DebugPtr = this_01;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_01,
             (USceneComponent *)(this->SkeletalMeshComp).field0_0x0.DebugPtr,(FName)0x0);
  return this;
}

// AdjustSoulTransform @ 14bc879c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall ADS_ViewerCharacter::AdjustSoulTransform(ADS_ViewerCharacter *this)

{
  UDS_PartsSystemControl *pUVar1;
  bool bVar2;
  USkeletalMeshComponent *this_00;
  UDS_LogManager *pUVar3;
  undefined8 uVar4;
  undefined1 auStackY_1a8 [32];
  FName local_168;
  undefined4 local_160;
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if (((pUVar1 != (UDS_PartsSystemControl *)0x0) &&
      (bVar2 = UDS_PartsSystemControl::IsValid(pUVar1), bVar2)) &&
     (pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr, pUVar1->bIsCanceled != true)) {
    this_00 = UDS_PartsSystemControl::GetSoulSkeletalMesh(pUVar1);
    if (this_00 == (USkeletalMeshComponent *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_ViewerCharacter::AdjustSoulTransform",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xcd,L"soulComp is nullptr.");
      uVar4 = local_138._padding_;
    }
    else {
      local_158._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_158._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_158._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      USceneComponent::SetRelativeLocation
                ((USceneComponent *)this_00,(TVector<double> *)&local_158._s_0,false,
                 (FHitResult *)0x0,None);
      ::FName::FName(&local_168,L"Dissolve_inten");
      pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
      local_160 = 0xc1200000;
      local_158._s_0.X = 0.0;
      local_158._8_4_ = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,1,0,(ForAnyElementType *)&local_158._s_0,1,
                 (int *)((longlong)&local_158._s_0.Y + 4));
      *(ulonglong *)local_158._s_0.X = CONCAT44(local_168.Number,local_168.ComparisonIndex.Value);
      *(undefined4 *)((longlong)local_158._s_0.X + 8) = local_160;
      UDS_PartsSystemControl::SetPartsScalarParams
                (pUVar1,FullBody,
                 (TArray<FDS_ScalarParameterValue,TSizedDefaultAllocator<32>_> *)&local_158._s_0);
      uVar4 = local_158._s_0.X;
    }
    if ((undefined8 *)uVar4 != (undefined8 *)0x0) {
      FMemory::Free((void *)uVar4);
    }
  }
  return;
}

// BeginPlay @ 14bc8b550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall ADS_ViewerCharacter::BeginPlay(ADS_ViewerCharacter *this)

{
  UDS_PartsSystemControl *this_00;
  UWN_ISKM_CharacterCore *pUVar1;
  
  AActor::BeginPlay((AActor *)this);
  this_00 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if (this_00 == (UDS_PartsSystemControl *)0x0) {
    this_00 = NewObject<UDS_PartsSystemControl>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_PartsSystemControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->PartsSystemControl).field0_0x0.DebugPtr = this_00;
    if (this_00 == (UDS_PartsSystemControl *)0x0) {
      return;
    }
  }
  pUVar1 = NewObject<UWN_ISKM_CharacterCore>((UObject *)this);
  UDS_PartsSystemControl::Init(this_00,(UWN_CS_CharacterCore *)pUVar1,true);
  return;
}

// ClearResource @ 14bc8c500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_ViewerCharacter::ClearResource(ADS_ViewerCharacter *this)

{
  UWN_CS_CharacterCore *pUVar1;
  UDS_PartsSystemControl *this_00;
  
  this_00 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if (this_00 == (UDS_PartsSystemControl *)0x0) {
    return;
  }
  UDS_PartsSystemControl::CancelAsyncLoad(this_00);
  pUVar1 = (this_00->CharacterCore).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_CS_CharacterCore *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2b8))();
    (this_00->CharacterCore).field0_0x0.DebugPtr = (UWN_CS_CharacterCore *)0x0;
  }
  return;
}

// EndPlay @ 14bc97230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_ViewerCharacter::EndPlay(ADS_ViewerCharacter *this,Type param_1)

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
  ADS_ViewerCharacter *pAVar11;
  UClass *pUVar12;
  ADS_ViewerCharacter *pAVar13;
  longlong *plVar14;
  ADS_ViewerCharacter *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_ViewerCharacter *pAStack_148;
  ADS_ViewerCharacter *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_ViewerCharacter *pAStack_120;
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
  pAVar13 = (ADS_ViewerCharacter *)0x0;
  pAVar15 = (ADS_ViewerCharacter *)0x0;
  pAVar11 = this;
  if (this == (ADS_ViewerCharacter *)0x0) {
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
  pAVar11 = (ADS_ViewerCharacter *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ADS_ViewerCharacter *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ADS_ViewerCharacter *)0x0) goto LAB_147390f4f;
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
  pAVar13 = (ADS_ViewerCharacter *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_ViewerCharacter *)0x0)) {
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
       (pAVar11 != (ADS_ViewerCharacter *)0x0)) {
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

// GetPartsSystemControl @ 14bca16b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> __thiscall
ADS_ViewerCharacter::GetPartsSystemControl(ADS_ViewerCharacter *this)

{
  UDS_PartsSystemControl *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_PartsSystemControl *local_res8;
  
  pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_PartsSystemControl *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_PartsSystemControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_PartsSystemControl *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>)in_RDX;
}

// LoadCharacterResource @ 14bca9930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall
ADS_ViewerCharacter::LoadCharacterResource
          (ADS_ViewerCharacter *this,int param_1,FWN_EndOfRefs *param_2)

{
  UWN_MCS_COICore *this_00;
  FName FVar1;
  ForAnyElementType FVar2;
  int iVar3;
  undefined8 uVar4;
  FSharedReferencer<1> FVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  ADS_MainCharacter *pAVar11;
  FName *pFVar12;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
  *pTVar13;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FWeakObjectPtr local_res8;
  FName local_res20;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType local_110;
  int local_108;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  int local_f0;
  FLoadAssetAsyncOptionalParams local_e8;
  undefined1 local_c0 [8];
  FDelegateAllocation local_b8;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined8 local_90;
  FSharedReferencer<1> FStack_88;
  FSoftObjectPath local_80;
  FSoftObjectPath local_60;
  
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  this->bIsPartsSystemCharacter = false;
  local_e8.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_e8._16_8_ = local_e8._16_8_ & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_e8,
             (FWriteAccessScope *)&local_138);
  local_120 = (FDelegateAllocation *)&local_e8.ProgressDelegate.SharedReferenceCount;
  puVar8 = UE::Core::Private::DelegateAllocate
                     (0x30,(FDelegateAllocation *)&local_e8.ProgressDelegate.SharedReferenceCount);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    puVar8[1] = (param_2->TaskCaller).Object;
    pTVar10 = (param_2->TaskCaller).SharedReferenceCount.ReferenceController;
    puVar8[2] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_ViewerCharacter____A6AXXZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[4] = 0;
    local_res20 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res20);
    puVar8[5] = OnCharacterLoadingComplete;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  local_90 = 0;
  FStack_88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_e8,
             (FReadAccessScope *)&local_138);
  if (((local_e8.PackagePriority == 0) ||
      (local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     (cVar6 = (**(code **)((local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController)->
                           _padding_ + 0x38))(), cVar6 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_138);
  if (!bVar7) goto LAB_14bca9cba;
  local_100 = (undefined1  [8])0x0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_e8,
             (FReadAccessScope *)&local_138);
  if ((local_e8.PackagePriority != 0) &&
     (local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)((local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_ +
                0x50))(local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController,&local_118
                      );
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_138);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_138);
  iVar3 = local_108;
  FVar2.Data = local_110.Data;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
             (FWriteAccessScope *)&local_138);
  if (local_f0 == 0) {
LAB_14bca9b39:
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  else if (local_f8.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,0x10);
    local_f0 = 0;
    goto LAB_14bca9b39;
  }
  local_f8.Data = FVar2.Data;
  local_f0 = iVar3;
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_138);
  if ((local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
    local_108 = 0;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  pTVar10 = ::operator_new(0x30);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)(pTVar10 + 1) = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[2]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar10 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_100);
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
    ;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15 = pTVar10;
  }
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110.Data = (FScriptContainerElement *)pTVar15;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FStack_88,(FSharedReferencer<1> *)&local_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_110.Data);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
             (FWriteAccessScope *)&local_138);
  if ((local_f0 != 0) && (local_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,0x10);
    local_f0 = 0;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_100);
LAB_14bca9cba:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_e8,
             (FWriteAccessScope *)&local_138);
  if ((local_e8.PackagePriority != 0) &&
     (local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)(local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e8.ProgressDelegate.SharedReferenceCount,0,0,0x10);
    local_e8._16_8_ = local_e8._16_8_ & 0xffffffff00000000;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_e8);
  ADS_MainCharacter::GetMainPlayer();
  bVar7 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar7) {
    pAVar11 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res8);
    ADS_MainCharacter::GetCOICorePath(pAVar11,&local_60);
    pAVar11 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res8);
    ADS_MainCharacter::GetAnimBPPath(pAVar11,&local_80);
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_138);
    local_120 = &local_a0;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_a0);
    FVar5.ReferenceController = FStack_88.ReferenceController;
    uVar4 = local_90;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUWN_MCS_COICore___N_ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
      ;
      puVar8[1] = local_90;
      puVar8[2] = FStack_88.ReferenceController;
      if (FStack_88.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_88.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_88.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[3] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_ViewerCharacter____A6AXAEBUFSoftObjectPath__PEAVUWN_MCS_COICore___N_ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[4] = 0;
      local_res20 = (FName)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res20);
      puVar8[5] = OnCOICoreInitComplete;
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
    this_00 = (this->COICore).field0_0x0.DebugPtr;
    pFVar12 = ::FName::FName(&local_res20,"BaseBody");
    FVar1 = *pFVar12;
    pTVar13 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                        ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                          *)&local_138,
                         (TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                          *)local_a8);
    UWN_MCS_COICore::InitializeCOIAsync(this_00,pTVar13,&local_60,FVar1,false);
    local_c0 = (undefined1  [8])0x0;
    local_b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_b8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
               (FWriteAccessScope *)&local_138);
    local_120 = &local_b8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_b8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
      ;
      puVar8[1] = uVar4;
      puVar8[2] = FVar5.ReferenceController;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar5.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[3] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_ViewerCharacter____A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[4] = 0;
      local_res20 = (FName)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res20);
      puVar8[5] = OnAnimLoadComplete;
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
    local_e8.PackagePriority = 0;
    local_e8._20_4_ = 0;
    local_e8.LoadFlags = 0;
    local_e8._36_4_ = 0;
    local_e8.InstancingContext = (FLinkerInstancingContext *)0x0;
    local_e8.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
    local_e8.ProgressDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar14 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)&local_138,
                         (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)local_c0);
    FSoftObjectPath::LoadAsync(&local_80,pTVar14,&local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
               (FWriteAccessScope *)&local_138);
    if ((local_b8.DelegateSize != 0) &&
       (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_b8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_b8,0,0,0x10);
      local_b8.DelegateSize = 0;
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
    if (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_b8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_138);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
    if (local_80.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_88.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return false;
}

// LoadNpcResource @ 14bcaa0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall
ADS_ViewerCharacter::LoadNpcResource(ADS_ViewerCharacter *this,int param_1,FWN_EndOfRefs *param_2)

{
  UDS_PartsSystemControl *pUVar1;
  bool bVar2;
  UWN_ISKM_CharacterCore *pUVar3;
  UDS_LogManager *pUVar4;
  FDS_NpcBaseTableRow *pFVar5;
  FDS_ResourcePresetTableRow *pFVar6;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWN_EndOfRefs local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_PartsSystemControl *)0x0) &&
     (bVar2 = UDS_PartsSystemControl::IsValid(pUVar1), !bVar2)) {
    pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
    pUVar3 = NewObject<UWN_ISKM_CharacterCore>((UObject *)this);
    UDS_PartsSystemControl::Init(pUVar1,(UWN_CS_CharacterCore *)pUVar3,true);
  }
  if ((this->PartsSystemControl).field0_0x0.DebugPtr == (UDS_PartsSystemControl *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bcaa1c6;
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_ViewerCharacter::LoadNpcResource",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x73,L"PartsSystemControl is nullptr.");
  }
  else {
    if (param_1 < 1) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bcaa1c6;
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_ViewerCharacter::LoadNpcResource",0x24,Yes);
      pwVar8 = L"Invalid InNpcID. (%d)";
      uVar7 = 0x79;
    }
    else {
      pFVar5 = FDS_NpcBaseTableRow::Get((longlong)param_1,true);
      if (pFVar5 == (FDS_NpcBaseTableRow *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bcaa1c6;
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"ADS_ViewerCharacter::LoadNpcResource",0x24,Yes);
        pwVar8 = L"npcBaseTable is nullptr. (%d)";
        uVar7 = 0x80;
      }
      else if (pFVar5->ID_ResourcePreset < 1) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bcaa1c6;
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"ADS_ViewerCharacter::LoadNpcResource",0x24,Yes);
        pwVar8 = L"Invalid resourcePresetTID. (%d)";
        uVar7 = 0x87;
      }
      else {
        pFVar6 = FDS_ResourcePresetTableRow::Get((longlong)pFVar5->ID_ResourcePreset,true);
        if (pFVar6 != (FDS_ResourcePresetTableRow *)0x0) {
          local_158.TaskCaller.Object = (param_2->TaskCaller).Object;
          pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
          local_158.TaskCaller.SharedReferenceCount.ReferenceController =
               (param_2->TaskCaller).SharedReferenceCount.ReferenceController;
          if (local_158.TaskCaller.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_158.TaskCaller.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_158.TaskCaller.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          UDS_PartsSystemControl::RefreshAsync(pUVar1,(AActor *)this,pFVar6,&local_158,true);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
          return true;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bcaa1c6;
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"ADS_ViewerCharacter::LoadNpcResource",0x24,Yes);
        pwVar8 = L"resourcePresetTable is nullptr. (%d)";
        uVar7 = 0x8e;
      }
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar7,pwVar8);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14bcaa1c6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return false;
}

// LoadPresetResource @ 14bcaa400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall
ADS_ViewerCharacter::LoadPresetResource
          (ADS_ViewerCharacter *this,int param_1,FWN_EndOfRefs *param_2)

{
  UDS_PartsSystemControl *pUVar1;
  bool bVar2;
  UWN_ISKM_CharacterCore *pUVar3;
  UDS_LogManager *pUVar4;
  FDS_ResourcePresetTableRow *pFVar5;
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWN_EndOfRefs local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_PartsSystemControl *)0x0) &&
     (bVar2 = UDS_PartsSystemControl::IsValid(pUVar1), !bVar2)) {
    pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
    pUVar3 = NewObject<UWN_ISKM_CharacterCore>((UObject *)this);
    UDS_PartsSystemControl::Init(pUVar1,(UWN_CS_CharacterCore *)pUVar3,true);
  }
  if ((this->PartsSystemControl).field0_0x0.DebugPtr == (UDS_PartsSystemControl *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bcaa4e6;
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_ViewerCharacter::LoadPresetResource",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0xa4,L"PartsSystemControl is nullptr.");
  }
  else {
    if (param_1 < 1) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bcaa4e6;
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_ViewerCharacter::LoadPresetResource",0x27,Yes);
      pwVar7 = L"Invalid InPresetID. (%d)";
      uVar6 = 0xaa;
    }
    else {
      pFVar5 = FDS_ResourcePresetTableRow::Get((longlong)param_1,true);
      if (pFVar5 != (FDS_ResourcePresetTableRow *)0x0) {
        local_158.TaskCaller.Object = (param_2->TaskCaller).Object;
        pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
        local_158.TaskCaller.SharedReferenceCount.ReferenceController =
             (param_2->TaskCaller).SharedReferenceCount.ReferenceController;
        if (local_158.TaskCaller.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.TaskCaller.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.TaskCaller.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_PartsSystemControl::RefreshAsync(pUVar1,(AActor *)this,pFVar5,&local_158,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
        return true;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bcaa4e6;
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_ViewerCharacter::LoadPresetResource",0x27,Yes);
      pwVar7 = L"resourcePresetTable is nullptr. (%d)";
      uVar6 = 0xb1;
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar6,pwVar7);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14bcaa4e6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return false;
}

// OnAnimLoadComplete @ 14bcaf6c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall
ADS_ViewerCharacter::OnAnimLoadComplete
          (ADS_ViewerCharacter *this,FSoftObjectPath *param_1,UObject *param_2,
          FWN_EndOfRefs *param_3)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  UAnimBlueprint *this_00;
  UClass *pUVar5;
  UAnimBlueprintGeneratedClass *pUVar6;
  IAnimClassInterface *pIVar7;
  
  this_00 = (UAnimBlueprint *)FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
  if (this_00 == (UAnimBlueprint *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5825779853172932372>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Viewer\\DS_ViewerCharacter.cpp"
                       ,0xec,"anim");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->SkeletalMeshComp).field0_0x0.DebugPtr != (USkeletalMeshComponent *)0x0) &&
     (this_00 != (UAnimBlueprint *)0x0)) {
    pUVar5 = Z_Construct_UClass_UAnimBlueprint_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar6 = UAnimBlueprint::GetAnimBlueprintGeneratedClass(this_00);
      pIVar7 = (IAnimClassInterface *)&pUVar6->_padding_;
      if (pUVar6 == (UAnimBlueprintGeneratedClass *)0x0) {
        pIVar7 = (IAnimClassInterface *)0x0;
      }
      pUVar5 = IAnimClassInterface::GetActualAnimClass(pIVar7);
      pUVar2 = (this->SkeletalMeshComp).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0xc70))(pUVar2,pUVar5);
    }
    pUVar5 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar5 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)&this_00[4]._padding_)
      ;
      pUVar2 = (this->SkeletalMeshComp).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0xc70))(pUVar2,pUVar5);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnCOICoreInitComplete @ 14bcafe40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall
ADS_ViewerCharacter::OnCOICoreInitComplete
          (ADS_ViewerCharacter *this,FSoftObjectPath *param_1,UWN_MCS_COICore *param_2,bool param_3,
          FWN_EndOfRefs *param_4)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnCOIUpdateMeshComplete @ 14bcaff60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ADS_ViewerCharacter::OnCOIUpdateMeshComplete
          (ADS_ViewerCharacter *this,uint param_1,UWN_MCS_COICore *param_2,
          EWN_MCS_MeshUpdateResult param_3)

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
  undefined1 local_b8 [8];
  UDS_PartsComponent *local_b0;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  uint local_98;
  FWeakObjectPtr local_90;
  longlong local_88;
  FWeakObjectPtr local_80;
  undefined8 local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  int *local_60;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_48;
  FName local_38 [2];
  
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
  local_60 = &(this->PartsComponents).ArrayMax;
  (this->PartsComponents).ArrayNum = 0;
  if ((this->PartsComponents).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar14->AllocatorInstance,0,local_60);
  }
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_90);
  bVar3 = FWeakObjectPtr::IsValid(&local_90);
  if (bVar3) {
    pUVar6 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_90);
    UDS_ItemDataSet::GetEquipmentItemCharacterData(pUVar6,&local_48);
    if (local_48.Object != (FDS_EquipmentItemCharacterData *)0x0) {
      if ((local_48.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FDS_EquipmentItemCharacterData::GetAllEquippedItemUIDList(local_48.Object,&local_58);
      local_98 = local_58.ArrayNum;
      uVar11 = (ulonglong)(int)local_98;
      pFVar15 = local_58.AllocatorInstance.Data + uVar11 * 8;
      FVar13.Data = local_58.AllocatorInstance.Data;
      local_70 = pFVar15;
      while( true ) {
        local_68 = FVar13.Data;
        if (local_58.ArrayNum != (int)uVar11) {
          local_b8[0] = 0;
          `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_b8);
        }
        if (FVar13.Data == pFVar15) break;
        pUVar6 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_90);
        UDS_ItemDataSet::GetItemDataByUID(pUVar6,(ulong64)&local_80);
        bVar3 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_80,(void *)0x0);
        if (!bVar3) {
          pUVar7 = FWeakObjectPtr::Get(&local_80);
          this_01 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)&pUVar7[8].field_0x10,true);
          pFVar8 = FDS_ItemBaseTableRow::ID_ResourcePartsTable(this_01);
          uVar16 = 0;
          pFVar15 = local_70;
          if (0 < (pFVar8->ID_ResourceMesh).ArrayNum) {
            lVar17 = 0;
            local_88 = 0;
            do {
              lVar12 = local_88;
              if (((int)uVar16 < 0) || ((pFVar8->SocketName).ArrayNum <= (int)uVar16)) {
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_5825779853172932236>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Viewer\\DS_ViewerCharacter.cpp"
                                   ,0x174,"false");
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
                local_a8.Data = (FScriptContainerElement *)0x0;
                local_a0 = *(int *)(pFVar15 + lVar17 + 8);
                lVar12 = (longlong)local_a0;
                _Src = *(void **)(pFVar15 + lVar17);
                if (local_a0 == 0) {
                  local_9c = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
                  memcpy(local_a8.Data,_Src,lVar12 * 2);
                }
                local_78 = 0;
                this_02 = NewObject<UDS_PartsComponent>
                                    ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                                     (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
                FSoftObjectPath::operator=(&this_02->MeshPath,&pFVar9->MeshPath);
                lVar12 = this_02->_padding_;
                pbVar1 = (byte *)((longlong)&this_02->_padding_ + 3);
                *pbVar1 = *pbVar1 & 0xfe;
                pcVar2 = *(code **)(lVar12 + 0x508);
                FVar13.Data = (FScriptContainerElement *)L"";
                if (local_a0 != 0) {
                  FVar13.Data = local_a8.Data;
                }
                ::FName::FName(local_38,(wchar_t *)FVar13.Data);
                (*pcVar2)(this_02,(this->SkeletalMeshComp).field0_0x0.DebugPtr,
                          &FAttachmentTransformRules::KeepRelativeTransform);
                UActorComponent::RegisterComponent((UActorComponent *)this_02);
                (**(code **)(this_02->_padding_ + 1000))(this_02);
                local_b0 = this_02;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_02);
                }
                pFVar15 = (pTVar14->AllocatorInstance).Data;
                if (((pFVar15 <= (FScriptContainerElement *)&local_b0) &&
                    ((FScriptContainerElement *)&local_b0 <
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
                                    (0x808,&pTVar14->AllocatorInstance,local_60);
                  (this->PartsComponents).ArrayNum = iVar4;
                }
                (this->PartsComponents).ArrayNum = iVar4 + 1;
                *(UDS_PartsComponent **)((pTVar14->AllocatorInstance).Data + (longlong)iVar4 * 8) =
                     local_b0;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_b0 != (UDS_PartsComponent *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_b0);
                }
                if (local_a8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a8.Data);
                }
              }
              local_88 = local_88 + 4;
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + 0x10;
              pFVar15 = local_70;
            } while ((int)uVar16 < (pFVar8->ID_ResourceMesh).ArrayNum);
          }
        }
        FVar13.Data = local_68 + 8;
        uVar11 = (ulonglong)local_98;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnCharacterLoadingComplete @ 14bcb1c70

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
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall
ADS_ViewerCharacter::OnCharacterLoadingComplete(ADS_ViewerCharacter *this,FWN_EndOfRefs *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_ItemDataSet *this_00;
  FWeakObjectPtr local_res8 [2];
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_38;
  TRotator<double> local_28;
  
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(local_res8);
    UDS_ItemDataSet::GetEquipmentItemCharacterData(this_00,&local_38);
    if (local_38.Object != (FDS_EquipmentItemCharacterData *)0x0) {
      if ((local_38.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>
      ::AddUObject<ADS_ViewerCharacter>
                (&(local_38.Object)->OnChangedEquipAllDelegate,
                 (ADS_ViewerCharacter *)(local_res8 + 1),(pmf_feb69021)this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  local_28.Pitch = ___xmm_c0568000000000000000000000000000;
  local_28.Yaw = _UNK_152242e68;
  local_28.Roll = 0.0;
  USceneComponent::SetRelativeRotation
            ((USceneComponent *)(this->SkeletalMeshComp).field0_0x0.DebugPtr,&local_28,false,
             (FHitResult *)0x0,None);
  OnChangedEquipItem(this,None,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// ResetVariables @ 14bcc4670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_ViewerCharacter::ResetVariables(ADS_ViewerCharacter *this)

{
  return;
}

