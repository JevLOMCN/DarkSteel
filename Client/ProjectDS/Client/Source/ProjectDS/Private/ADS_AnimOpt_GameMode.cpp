// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b4203f0

UClass * __cdecl ADS_AnimOpt_GameMode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AnimOpt_GameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_GameMode",
               &Z_Registration_Info_UClass_ADS_AnimOpt_GameMode.InnerSingleton,
               StaticRegisterNativesADS_AnimOpt_GameMode,0x380,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_AnimOpt_GameMode>,
               InternalVTableHelperCtorCaller<ADS_AnimOpt_GameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AnimOpt_GameMode.InnerSingleton;
}

// ADS_AnimOpt_GameMode @ 14b423860

ADS_AnimOpt_GameMode * __thiscall
ADS_AnimOpt_GameMode::ADS_AnimOpt_GameMode(ADS_AnimOpt_GameMode *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_AnimOpt_GameMode__6B_;
  (this->ControlWidgetBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SpawnerList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnerList).ArrayNum = 0;
  (this->SpawnerList).ArrayMax = 0;
  (this->SpectatorPawn).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SpectatorPawn).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ControlWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ControlWidget).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ADS_AnimOpt_GameMode @ 14b4238e0

ADS_AnimOpt_GameMode * __thiscall
ADS_AnimOpt_GameMode::ADS_AnimOpt_GameMode(ADS_AnimOpt_GameMode *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_AnimOpt_GameMode__6B_;
  (this->ControlWidgetBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SpawnerList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnerList).ArrayNum = 0;
  (this->SpawnerList).ArrayMax = 0;
  (this->SpectatorPawn).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SpectatorPawn).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ControlWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ControlWidget).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~ADS_AnimOpt_GameMode @ 14b423ec0

void __thiscall ADS_AnimOpt_GameMode::~ADS_AnimOpt_GameMode(ADS_AnimOpt_GameMode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADS_AnimOpt_GameMode__6B_;
  pFVar1 = (this->SpawnerList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b424b70

UClass * __cdecl ADS_AnimOpt_GameMode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AnimOpt_GameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_GameMode",
               &Z_Registration_Info_UClass_ADS_AnimOpt_GameMode.InnerSingleton,
               StaticRegisterNativesADS_AnimOpt_GameMode,0x380,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_AnimOpt_GameMode>,
               InternalVTableHelperCtorCaller<ADS_AnimOpt_GameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AnimOpt_GameMode.InnerSingleton;
}

// StaticRegisterNativesADS_AnimOpt_GameMode @ 14b425480

void __cdecl ADS_AnimOpt_GameMode::StaticRegisterNativesADS_AnimOpt_GameMode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_AnimOpt_GameMode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnLoadedDataAsset @ 14b426cd0

void __cdecl
ADS_AnimOpt_GameMode::execOnLoadedDataAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLoadedDataAsset((ADS_AnimOpt_GameMode *)param_1);
  return;
}

// BeginPlay @ 14bbabd90

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AnimOpt_GameMode::BeginPlay(ADS_AnimOpt_GameMode *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UDS_LogManager *pUVar6;
  UUserWidget *this_00;
  TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *this_01;
  undefined1 auStackY_178 [32];
  uint uVar7;
  wchar_t *pwVar8;
  UUserWidget *local_148;
  FName local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  AActor::BeginPlay((AActor *)this);
  pUVar2 = (this->ControlWidgetBP).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (pUVar2 = (this->ControlWidgetBP).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
      local_140.ComparisonIndex.Value = 0;
      local_140.Number = 0;
      local_148 = (UUserWidget *)pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar5 = AActor::GetWorld((AActor *)this);
      this_01 = &this->ControlWidget;
      local_148 = CreateWidget<UUserWidget,UWorld_*>
                            (pUVar5,(TSubclassOf<UUserWidget>)&local_148,local_140);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UUserWidget *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_148);
      }
      FWeakObjectPtr::operator=(&this_01->WeakPtr,(FObjectPtr)&local_148);
      bVar3 = TWeakObjectPtr<UUserWidget,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
      if (!bVar3) {
        this_00 = (UUserWidget *)FWeakObjectPtr::Get(&this_01->WeakPtr);
        UUserWidget::AddToViewport(this_00,9999);
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_AnimOpt_GameMode::BeginPlay",0x1f,Yes);
      pwVar8 = L"ControlWidget is nullptr.";
      uVar7 = 0x1fa;
      goto LAB_14bbabf33;
    }
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar6 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"ADS_AnimOpt_GameMode::BeginPlay",0x1f,Yes);
  pwVar8 = L"ControlWidgetBP is nullptr.";
  uVar7 = 499;
LAB_14bbabf33:
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// EndPlay @ 14bbb37b0

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

void __thiscall ADS_AnimOpt_GameMode::EndPlay(ADS_AnimOpt_GameMode *this,Type param_1)

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
  ADS_AnimOpt_GameMode *pAVar11;
  UClass *pUVar12;
  ADS_AnimOpt_GameMode *pAVar13;
  longlong *plVar14;
  ADS_AnimOpt_GameMode *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_AnimOpt_GameMode *pAStack_148;
  ADS_AnimOpt_GameMode *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_AnimOpt_GameMode *pAStack_120;
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
  pAVar13 = (ADS_AnimOpt_GameMode *)0x0;
  pAVar15 = (ADS_AnimOpt_GameMode *)0x0;
  pAVar11 = this;
  if (this == (ADS_AnimOpt_GameMode *)0x0) {
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
  pAVar11 = (ADS_AnimOpt_GameMode *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ADS_AnimOpt_GameMode *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ADS_AnimOpt_GameMode *)0x0) goto LAB_147390f4f;
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
  pAVar13 = (ADS_AnimOpt_GameMode *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_AnimOpt_GameMode *)0x0)) {
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
       (pAVar11 != (ADS_AnimOpt_GameMode *)0x0)) {
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

// EntityIdleMsg @ 14bbb37d0

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

void __cdecl ADS_AnimOpt_GameMode::EntityIdleMsg(void)

{
  longlong lVar1;
  code *pcVar2;
  VectorF *pVVar3;
  bool bVar4;
  uint uVar5;
  UDS_EntityManager *this;
  FDS_EntityBase *this_00;
  TRotator<double> *pTVar6;
  UObject *pUVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  Arena *pAVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_128;
  NetSyncResponse local_118;
  TVector<double>_u_0 local_98;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  TRotator<double> local_50;
  
  this = UDS_EntityManager::GetInst();
  if (this != (UDS_EntityManager *)0x0) {
    uVar14 = 0;
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this,&local_128);
    uVar9 = (ulonglong)local_128.ArrayNum;
    uVar10 = uVar9;
    uVar15 = uVar14;
    if (0 < local_128.ArrayNum) {
      while( true ) {
        uVar13 = (uint)uVar14;
        uVar12 = ~uVar13 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar13 < (int)uVar10) {
          uVar5 = uVar12;
        }
        iVar8 = (int)uVar10;
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = local_128.ArrayNum;
        }
        if (*(longlong *)(local_128.AllocatorInstance.Data + uVar15 * 8) == 0) break;
        uVar5 = 0;
        if ((int)uVar13 < iVar8) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar7 = *(UObject **)(local_128.AllocatorInstance.Data + uVar15 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
        this_00 = FDS_EntityBase::GetEntityBaseFromActor
                            ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
        if (this_00 != (FDS_EntityBase *)0x0) {
          (**(code **)(this_00->_padding_ + 400))(this_00);
          bVar4 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&local_res10,
                             (void *)0x0);
          if (!bVar4) {
            uVar5 = 0;
            if ((int)uVar13 < local_128.ArrayNum) {
              uVar5 = uVar12;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar1 = *(longlong *)
                     (*(longlong *)(local_128.AllocatorInstance.Data + uVar15 * 8) + 0x1b8);
            if (lVar1 == 0) {
              local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_98._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              local_98._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              local_98._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              local_98._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            else {
              local_70 = *(double *)(lVar1 + 0x220);
              local_68 = *(undefined4 *)(lVar1 + 0x210);
              uStack_64 = *(undefined4 *)(lVar1 + 0x214);
              uStack_60 = *(undefined4 *)(lVar1 + 0x218);
              uStack_5c = *(undefined4 *)(lVar1 + 0x21c);
              local_98._0_4_ = local_68;
              local_98._4_4_ = uStack_64;
              local_98._8_4_ = uStack_60;
              local_98._12_4_ = uStack_5c;
              local_58 = local_70;
            }
            local_98._s_0.Z = local_70 - (double)this_00->ScaledCapsuleHalfHeight;
            server_msg::NetSyncResponse::NetSyncResponse(&local_118,(Arena *)0x0);
            local_118._padding_ = (longlong)&___7NetSyncResponse_server_msg__6B_;
            local_118._impl_.entity_id_ = this_00->EntityID;
            local_118._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_118._impl_._has_bits_.has_bits_[0] | 0x101);
            if (local_118._impl_.position_ == (Vector *)0x0) {
              if (((byte)local_118._padding_ & 1) == 0) {
                pAVar11 = (Arena *)(CONCAT71(local_118._padding_._1_7_,(byte)local_118._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar11 = *(Arena **)
                           (CONCAT71(local_118._padding_._1_7_,(byte)local_118._padding_) &
                           0xfffffffffffffffe);
              }
              local_118._impl_.position_ =
                   google::protobuf::Arena::DefaultConstruct<Vector>(pAVar11);
              if (local_118._impl_.position_ != (Vector *)0x0) goto LAB_14bbb3a8d;
            }
            else {
LAB_14bbb3a8d:
              DS_Util::SetVector(local_118._impl_.position_,(TVector<double> *)&local_98._s_0);
            }
            local_118._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_118._impl_._has_bits_.has_bits_[0] | 2);
            if (local_118._impl_.direction_ == (VectorF *)0x0) {
              if (((byte)local_118._padding_ & 1) == 0) {
                pAVar11 = (Arena *)(CONCAT71(local_118._padding_._1_7_,(byte)local_118._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar11 = *(Arena **)
                           (CONCAT71(local_118._padding_._1_7_,(byte)local_118._padding_) &
                           0xfffffffffffffffe);
              }
              local_118._impl_.direction_ =
                   google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar11);
              if (local_118._impl_.direction_ != (VectorF *)0x0) goto LAB_14bbb3ad8;
            }
            else {
LAB_14bbb3ad8:
              pVVar3 = local_118._impl_.direction_;
              uVar5 = 0;
              if ((int)uVar13 < local_128.ArrayNum) {
                uVar5 = uVar12;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar6 = AActor::GetActorRotation
                                 (*(AActor **)(local_128.AllocatorInstance.Data + uVar15 * 8),
                                  &local_50);
              DS_Util::SetNetRotate(pVVar3,pTVar6);
            }
            local_118._impl_.ticks_ = UDS_TimeUtilManager::GetCurrentServerTime();
            local_118._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_118._impl_._has_bits_.has_bits_[0] | 0x3800);
            local_118._impl_.move_mode_ = 0;
            local_118._impl_.sync_state_ = 0;
            pUVar7 = FWeakObjectPtr::Get(&local_res10);
            (**(code **)(*(longlong *)pUVar7 + 0x2d0))(pUVar7);
            FDS_EntityBase::SetBattleState(this_00,false);
            server_msg::NetSyncResponse::~NetSyncResponse(&local_118);
          }
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        if ((longlong)uVar9 <= (longlong)(uVar15 + 1)) break;
        uVar10 = local_128._8_8_ & 0xffffffff;
        uVar15 = uVar15 + 1;
      }
    }
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
  }
  return;
}

// EntityMoveMsg @ 14bbb3bf0

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

void __cdecl ADS_AnimOpt_GameMode::EntityMoveMsg(float *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  VectorF *pVVar12;
  bool bVar13;
  uint uVar14;
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar15;
  UObject *pUVar16;
  int iVar17;
  ulonglong uVar18;
  Arena *pAVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_1e8;
  TVector<double>_u_0 local_1d8;
  NetSyncResponse local_1b8;
  ulonglong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  double local_e8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  TRotator<double> local_b0 [5];
  
  elapsedTime = elapsedTime + *param_1;
  if (__real_3d2aaaab <= elapsedTime) {
    elapsedTime = elapsedTime - __real_3d2aaaab;
    this = UDS_EntityManager::GetInst();
    if (this != (UDS_EntityManager *)0x0) {
      uVar22 = 0;
      local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.ArrayNum = 0;
      local_1e8.ArrayMax = 0;
      UDS_EntityManager::GetAllEntityList(this,&local_1e8);
      dVar11 = __real_3e45798ee0000000;
      dVar10 = __real_3ff0000000000000;
      uVar18 = (ulonglong)local_1e8.ArrayNum;
      uVar23 = uVar22;
      local_138 = uVar18;
      if (0 < local_1e8.ArrayNum) {
        while( true ) {
          uVar21 = (uint)uVar22;
          uVar20 = ~uVar21 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar21 < (int)uVar18) {
            uVar14 = uVar20;
          }
          iVar17 = (int)uVar18;
          if (uVar14 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar17 = local_1e8.ArrayNum;
          }
          if (*(longlong *)(local_1e8.AllocatorInstance.Data + uVar23 * 8) == 0) break;
          uVar14 = 0;
          if ((int)uVar21 < iVar17) {
            uVar14 = uVar20;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar16 = *(UObject **)(local_1e8.AllocatorInstance.Data + uVar23 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar16);
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res20 = pUVar16;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar16);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
          pFVar15 = FDS_EntityBase::GetEntityBaseFromActor
                              ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
          if (pFVar15 != (FDS_EntityBase *)0x0) {
            (**(code **)(pFVar15->_padding_ + 400))(pFVar15);
            bVar13 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&local_res18
                                ,(void *)0x0);
            if (!bVar13) {
              uVar14 = 0;
              if ((int)uVar21 < local_1e8.ArrayNum) {
                uVar14 = uVar20;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar4 = *(longlong *)
                       (*(longlong *)(local_1e8.AllocatorInstance.Data + uVar23 * 8) + 0x1b8);
              local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uStack_12c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uStack_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uStack_124 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              if (lVar4 != 0) {
                local_b8 = *(double *)(lVar4 + 0x220);
                local_c8 = *(undefined4 *)(lVar4 + 0x210);
                uStack_c4 = *(undefined4 *)(lVar4 + 0x214);
                uStack_c0 = *(undefined4 *)(lVar4 + 0x218);
                uStack_bc = *(undefined4 *)(lVar4 + 0x21c);
                local_120 = local_b8;
                local_130 = local_c8;
                uStack_12c = uStack_c4;
                uStack_128 = uStack_c0;
                uStack_124 = uStack_bc;
              }
              dVar7 = local_120 - (double)pFVar15->ScaledCapsuleHalfHeight;
              local_d0 = local_120;
              server_msg::NetSyncResponse::NetSyncResponse(&local_1b8,(Arena *)0x0);
              local_1b8._padding_ = (longlong)&___7NetSyncResponse_server_msg__6B_;
              local_1b8._impl_.entity_id_ = pFVar15->EntityID;
              local_1b8._impl_._has_bits_.has_bits_[0] =
                   (uint  [1])((uint)local_1b8._impl_._has_bits_.has_bits_[0] | 0x104);
              if (local_1b8._impl_.velocity_ == (VectorF *)0x0) {
                if (((byte)local_1b8._padding_ & 1) == 0) {
                  pAVar19 = (Arena *)(CONCAT71(local_1b8._padding_._1_7_,(byte)local_1b8._padding_)
                                     & 0xfffffffffffffffe);
                }
                else {
                  pAVar19 = *(Arena **)
                             (CONCAT71(local_1b8._padding_._1_7_,(byte)local_1b8._padding_) &
                             0xfffffffffffffffe);
                }
                local_1b8._impl_.velocity_ =
                     google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar19);
                if (local_1b8._impl_.velocity_ != (VectorF *)0x0) goto LAB_14bbb3f3c;
              }
              else {
LAB_14bbb3f3c:
                ((local_1b8._impl_.velocity_)->_impl_).x_ = (float)(param_2->field0_0x0)._s_0.X;
                ((local_1b8._impl_.velocity_)->_impl_)._has_bits_.has_bits_[0] =
                     ((local_1b8._impl_.velocity_)->_impl_)._has_bits_.has_bits_[0] | 1;
                uVar14 = ((local_1b8._impl_.velocity_)->_impl_)._has_bits_.has_bits_[0];
                ((local_1b8._impl_.velocity_)->_impl_).y_ = (float)(param_2->field0_0x0)._s_0.Y;
                ((local_1b8._impl_.velocity_)->_impl_)._has_bits_.has_bits_[0] = uVar14 | 2;
                ((local_1b8._impl_.velocity_)->_impl_).z_ = (float)(param_2->field0_0x0)._s_0.Z;
                ((local_1b8._impl_.velocity_)->_impl_)._has_bits_.has_bits_[0] = uVar14 | 6;
              }
              local_1b8._impl_._has_bits_.has_bits_[0] =
                   (uint  [1])((uint)local_1b8._impl_._has_bits_.has_bits_[0] | 1);
              if (local_1b8._impl_.position_ == (Vector *)0x0) {
                if (((byte)local_1b8._padding_ & 1) == 0) {
                  pAVar19 = (Arena *)(CONCAT71(local_1b8._padding_._1_7_,(byte)local_1b8._padding_)
                                     & 0xfffffffffffffffe);
                }
                else {
                  pAVar19 = *(Arena **)
                             (CONCAT71(local_1b8._padding_._1_7_,(byte)local_1b8._padding_) &
                             0xfffffffffffffffe);
                }
                local_1b8._impl_.position_ =
                     google::protobuf::Arena::DefaultConstruct<Vector>(pAVar19);
              }
              dVar9 = (double)CONCAT44(uStack_124,uStack_128);
              dVar8 = (double)CONCAT44(uStack_12c,local_130);
              if (local_1b8._impl_.position_ != (Vector *)0x0) {
                local_118._s_0.X = dVar8 + (param_2->field0_0x0)._s_0.X;
                local_118._s_0.Y = dVar9 + (param_2->field0_0x0)._s_0.Y;
                local_118._s_0.Z = dVar7 + (param_2->field0_0x0)._s_0.Z;
                DS_Util::SetVector(local_1b8._impl_.position_,(TVector<double> *)&local_118._s_0);
              }
              local_1b8._impl_._has_bits_.has_bits_[0] =
                   (uint  [1])((uint)local_1b8._impl_._has_bits_.has_bits_[0] | 2);
              if (local_1b8._impl_.direction_ == (VectorF *)0x0) {
                if (((byte)local_1b8._padding_ & 1) == 0) {
                  pAVar19 = (Arena *)(CONCAT71(local_1b8._padding_._1_7_,(byte)local_1b8._padding_)
                                     & 0xfffffffffffffffe);
                }
                else {
                  pAVar19 = *(Arena **)
                             (CONCAT71(local_1b8._padding_._1_7_,(byte)local_1b8._padding_) &
                             0xfffffffffffffffe);
                }
                local_1b8._impl_.direction_ =
                     google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar19);
                if (local_1b8._impl_.direction_ != (VectorF *)0x0) goto LAB_14bbb405a;
              }
              else {
LAB_14bbb405a:
                pVVar12 = local_1b8._impl_.direction_;
                dVar1 = (param_2->field0_0x0)._s_0.X;
                dVar2 = (param_2->field0_0x0)._s_0.Y;
                dVar3 = (param_2->field0_0x0)._s_0.Z;
                dVar6 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
                if (dVar6 == dVar10) {
                  local_1d8._s_0.X = (param_2->field0_0x0)._s_0.X;
                  local_1d8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
                  local_1d8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
                }
                else if (dVar11 <= dVar6) {
                  local_e8 = dVar10 / SQRT(dVar6);
                  local_1d8._s_0.X = dVar1 * local_e8;
                  local_1d8._s_0.Y = dVar2 * local_e8;
                  local_1d8._s_0.Z = dVar3 * local_e8;
                }
                else {
                  local_1d8._s_0.X =
                       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                  local_1d8._s_0.Y =
                       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                        UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
                  local_1d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                }
                UE::Math::TVector<double>::ToOrientationRotator
                          ((TVector<double> *)&local_1d8._s_0,local_b0);
                DS_Util::SetNetRotate(pVVar12,local_b0);
              }
              local_1b8._impl_._has_bits_.has_bits_[0] =
                   (uint  [1])((uint)local_1b8._impl_._has_bits_.has_bits_[0] | 8);
              if (local_1b8._impl_.destination_ == (Vector *)0x0) {
                if (((byte)local_1b8._padding_ & 1) == 0) {
                  pAVar19 = (Arena *)(CONCAT71(local_1b8._padding_._1_7_,(byte)local_1b8._padding_)
                                     & 0xfffffffffffffffe);
                }
                else {
                  pAVar19 = *(Arena **)
                             (CONCAT71(local_1b8._padding_._1_7_,(byte)local_1b8._padding_) &
                             0xfffffffffffffffe);
                }
                local_1b8._impl_.destination_ =
                     google::protobuf::Arena::DefaultConstruct<Vector>(pAVar19);
                if (local_1b8._impl_.destination_ != (Vector *)0x0) goto LAB_14bbb4155;
              }
              else {
LAB_14bbb4155:
                local_100._s_0.X = dVar8 + (param_2->field0_0x0)._s_0.X;
                local_100._s_0.Y = dVar9 + (param_2->field0_0x0)._s_0.Y;
                local_100._s_0.Z = dVar7 + (param_2->field0_0x0)._s_0.Z;
                DS_Util::SetVector(local_1b8._impl_.destination_,(TVector<double> *)&local_100._s_0)
                ;
              }
              local_1b8._impl_.ticks_ = UDS_TimeUtilManager::GetCurrentServerTime();
              local_1b8._impl_._has_bits_.has_bits_[0] =
                   (uint  [1])((uint)local_1b8._impl_._has_bits_.has_bits_[0] | 0x3800);
              local_1b8._impl_.move_mode_ = 2;
              local_1b8._impl_.sync_state_ = 0;
              pUVar16 = FWeakObjectPtr::Get(&local_res18);
              (**(code **)(*(longlong *)pUVar16 + 0x2d0))(pUVar16,&local_1b8);
              server_msg::NetSyncResponse::~NetSyncResponse(&local_1b8);
            }
          }
          uVar22 = (ulonglong)(uVar21 + 1);
          if ((longlong)local_138 <= (longlong)(uVar23 + 1)) break;
          uVar18 = local_1e8._8_8_ & 0xffffffff;
          uVar23 = uVar23 + 1;
        }
      }
      if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// EntityNormalAttackMsg @ 14bbb4270

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

void __cdecl ADS_AnimOpt_GameMode::EntityNormalAttackMsg(void)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  SkillInfo *pSVar2;
  bool bVar3;
  uint uVar4;
  UDS_EntityManager *this;
  FDS_EntityBase *this_00;
  TRotator<double> *pTVar5;
  UObject *pUVar6;
  FDS_CharacterBaseTableRow *pFVar7;
  FDS_SkillTableRow *pFVar8;
  FDS_SkillActLevelTableRow *pFVar9;
  Vector *pVVar10;
  VectorF *pVVar11;
  int iVar12;
  ulonglong uVar13;
  Arena *pAVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_178;
  ForAnyElementType local_168;
  int local_160;
  int local_15c;
  NetSyncResponse local_158;
  TVector<double>_u_0 local_d8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  TRotator<double> local_90;
  TRotator<double> local_78 [2];
  
  this = UDS_EntityManager::GetInst();
  if (this != (UDS_EntityManager *)0x0) {
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this,&local_178);
    uVar13 = (ulonglong)local_178.ArrayNum;
    uVar19 = 0;
    if (0 < local_178.ArrayNum) {
      lVar18 = 0;
      uVar15 = uVar13;
      do {
        uVar20 = ~uVar19 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar19 < (int)uVar15) {
          uVar4 = uVar20;
        }
        iVar12 = (int)uVar15;
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar12 = local_178.ArrayNum;
        }
        if (*(longlong *)(local_178.AllocatorInstance.Data + lVar18 * 8) == 0) goto LAB_14bbb490e;
        uVar4 = 0;
        if ((int)uVar19 < iVar12) {
          uVar4 = uVar20;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar6 = *(UObject **)(local_178.AllocatorInstance.Data + lVar18 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
        this_00 = FDS_EntityBase::GetEntityBaseFromActor
                            ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
        if (this_00 != (FDS_EntityBase *)0x0) {
          (**(code **)(this_00->_padding_ + 400))(this_00);
          bVar3 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&local_res18,
                             (void *)0x0);
          if (!bVar3) {
            uVar4 = 0;
            if ((int)uVar19 < local_178.ArrayNum) {
              uVar4 = uVar20;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            lVar17 = *(longlong *)
                      (*(longlong *)(local_178.AllocatorInstance.Data + lVar18 * 8) + 0x1b8);
            if (lVar17 == 0) {
              local_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_d8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              local_d8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              local_d8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              local_d8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            else {
              local_b0 = *(double *)(lVar17 + 0x220);
              local_a8 = *(undefined4 *)(lVar17 + 0x210);
              uStack_a4 = *(undefined4 *)(lVar17 + 0x214);
              uStack_a0 = *(undefined4 *)(lVar17 + 0x218);
              uStack_9c = *(undefined4 *)(lVar17 + 0x21c);
              local_d8._0_4_ = local_a8;
              local_d8._4_4_ = uStack_a4;
              local_d8._8_4_ = uStack_a0;
              local_d8._12_4_ = uStack_9c;
              local_98 = local_b0;
            }
            local_d8._s_0.Z = local_b0 - (double)this_00->ScaledCapsuleHalfHeight;
            server_msg::NetSyncResponse::NetSyncResponse(&local_158,(Arena *)0x0);
            local_158._padding_ = (longlong)&___7NetSyncResponse_server_msg__6B_;
            local_158._impl_.entity_id_ = this_00->EntityID;
            local_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_158._impl_._has_bits_.has_bits_[0] | 0x101);
            if (local_158._impl_.position_ == (Vector *)0x0) {
              if (((byte)local_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                           0xfffffffffffffffe);
              }
              local_158._impl_.position_ =
                   google::protobuf::Arena::DefaultConstruct<Vector>(pAVar14);
              if (local_158._impl_.position_ != (Vector *)0x0) goto LAB_14bbb4561;
            }
            else {
LAB_14bbb4561:
              DS_Util::SetVector(local_158._impl_.position_,(TVector<double> *)&local_d8._s_0);
            }
            local_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_158._impl_._has_bits_.has_bits_[0] | 2);
            if (local_158._impl_.direction_ == (VectorF *)0x0) {
              if (((byte)local_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                           0xfffffffffffffffe);
              }
              local_158._impl_.direction_ =
                   google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar14);
              if (local_158._impl_.direction_ != (VectorF *)0x0) goto LAB_14bbb45aa;
            }
            else {
LAB_14bbb45aa:
              pVVar11 = local_158._impl_.direction_;
              uVar4 = 0;
              if ((int)uVar19 < local_178.ArrayNum) {
                uVar4 = uVar20;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pTVar5 = AActor::GetActorRotation
                                 (*(AActor **)(local_178.AllocatorInstance.Data + lVar18 * 8),
                                  &local_90);
              DS_Util::SetNetRotate(pVVar11,pTVar5);
            }
            dVar21 = UDS_TimeUtilManager::GetCurrentServerTime();
            local_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_158._impl_._has_bits_.has_bits_[0] | 0x3810);
            local_158._impl_.move_mode_ = 0;
            local_158._impl_.sync_state_ = 0;
            local_158._impl_.ticks_ = dVar21;
            if (local_158._impl_.skill_info_ == (SkillInfo *)0x0) {
              if (((byte)local_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                           0xfffffffffffffffe);
              }
              local_158._impl_.skill_info_ =
                   google::protobuf::Arena::DefaultConstruct<server_msg::SkillInfo>(pAVar14);
              if (local_158._impl_.skill_info_ != (SkillInfo *)0x0) goto LAB_14bbb4668;
            }
            else {
LAB_14bbb4668:
              pSVar2 = local_158._impl_.skill_info_;
              FDS_EntityBase::GetCharInfoData(this_00);
              bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res10,
                                 (void *)0x0);
              if (!bVar3) {
                pUVar6 = FWeakObjectPtr::Get(&local_res10);
                pFVar7 = FDS_CharacterBaseTableRow::GetRef
                                   ((longlong)*(int *)&pUVar6[8].field_0x8,true);
                local_168.Data = (FScriptContainerElement *)0x0;
                local_160 = (pFVar7->ID_NormalAttack).ArrayNum;
                lVar17 = (longlong)local_160;
                _Src = (pFVar7->ID_NormalAttack).AllocatorInstance.Data;
                if (local_160 == 0) {
                  local_15c = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_160,0,&local_168,local_160,&local_15c);
                  memcpy(local_168.Data,_Src,lVar17 << 2);
                }
                if (0 < local_160) {
                  uVar16 = attackIndex % local_160;
                  uVar4 = 0;
                  if ((int)uVar16 < local_160) {
                    uVar4 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar4 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  iVar12 = *(int *)(local_168.Data + (longlong)(int)uVar16 * 4);
                  (pSVar2->_impl_).skill_id_ = iVar12;
                  (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                       (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x100;
                  if (iVar12 != 0) {
                    pFVar8 = FDS_SkillTableRow::GetRef((longlong)iVar12,true);
                    if (pFVar8->ID_SkillActLevelGroup != 0) {
                      pFVar9 = FDS_SkillActLevelTableRow::GetRef
                                         ((longlong)pFVar8->ID_SkillActLevelGroup,true);
                      (pSVar2->_impl_).start_ticks_ = dVar21;
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x80;
                      (pSVar2->_impl_).end_ticks_ = (double)pFVar9->AttackAniTime + dVar21;
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x41;
                      pVVar10 = (pSVar2->_impl_).start_position_;
                      if (pVVar10 == (Vector *)0x0) {
                        pAVar14 = (Arena *)(pSVar2->_padding_ & 0xfffffffffffffffe);
                        if ((pSVar2->_padding_ & 1) != 0) {
                          pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
                        }
                        pVVar10 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar14);
                        (pSVar2->_impl_).start_position_ = pVVar10;
                        if (pVVar10 != (Vector *)0x0) goto LAB_14bbb47fa;
                      }
                      else {
LAB_14bbb47fa:
                        DS_Util::SetVector(pVVar10,(TVector<double> *)&local_d8._s_0);
                      }
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 4;
                      pVVar11 = (pSVar2->_impl_).start_direction_;
                      if (pVVar11 == (VectorF *)0x0) {
                        pAVar14 = (Arena *)(pSVar2->_padding_ & 0xfffffffffffffffe);
                        if ((pSVar2->_padding_ & 1) != 0) {
                          pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
                        }
                        pVVar11 = google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar14);
                        (pSVar2->_impl_).start_direction_ = pVVar11;
                        if (pVVar11 != (VectorF *)0x0) goto LAB_14bbb4835;
                      }
                      else {
LAB_14bbb4835:
                        uVar4 = 0;
                        if ((int)uVar19 < local_178.ArrayNum) {
                          uVar4 = uVar20;
                        }
                        if ((uVar4 == 0) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                        pTVar5 = AActor::GetActorRotation
                                           (*(AActor **)
                                             (local_178.AllocatorInstance.Data + lVar18 * 8),
                                            local_78);
                        DS_Util::SetNetRotate(pVVar11,pTVar5);
                      }
                      pUVar6 = FWeakObjectPtr::Get(&local_res18);
                      (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6,&local_158);
                    }
                  }
                }
                if (local_168.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_168.Data);
                }
              }
            }
            server_msg::NetSyncResponse::~NetSyncResponse(&local_158);
          }
        }
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 1;
        if ((longlong)uVar13 <= lVar18) break;
        uVar15 = local_178._8_8_ & 0xffffffff;
      } while( true );
    }
    attackIndex = attackIndex + 1;
    if (0x7ffffffe < attackIndex) {
      attackIndex = 0;
    }
LAB_14bbb490e:
    if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
  }
  return;
}

// EntitySkillAttackMsg @ 14bbb4970

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

void __cdecl ADS_AnimOpt_GameMode::EntitySkillAttackMsg(void)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  SkillInfo *pSVar2;
  bool bVar3;
  uint uVar4;
  UDS_EntityManager *this;
  FDS_EntityBase *this_00;
  TRotator<double> *pTVar5;
  UObject *pUVar6;
  FDS_CharacterBaseTableRow *pFVar7;
  FDS_SkillTableRow *pFVar8;
  FDS_SkillActLevelTableRow *pFVar9;
  Vector *pVVar10;
  VectorF *pVVar11;
  int iVar12;
  ulonglong uVar13;
  Arena *pAVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_178;
  ForAnyElementType local_168;
  int local_160;
  int local_15c;
  NetSyncResponse local_158;
  TVector<double>_u_0 local_d8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  TRotator<double> local_90;
  TRotator<double> local_78 [2];
  
  this = UDS_EntityManager::GetInst();
  if (this != (UDS_EntityManager *)0x0) {
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this,&local_178);
    uVar13 = (ulonglong)local_178.ArrayNum;
    uVar19 = 0;
    if (0 < local_178.ArrayNum) {
      lVar18 = 0;
      uVar15 = uVar13;
      do {
        uVar20 = ~uVar19 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar19 < (int)uVar15) {
          uVar4 = uVar20;
        }
        iVar12 = (int)uVar15;
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar12 = local_178.ArrayNum;
        }
        if (*(longlong *)(local_178.AllocatorInstance.Data + lVar18 * 8) == 0) goto LAB_14bbb500e;
        uVar4 = 0;
        if ((int)uVar19 < iVar12) {
          uVar4 = uVar20;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar6 = *(UObject **)(local_178.AllocatorInstance.Data + lVar18 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
        this_00 = FDS_EntityBase::GetEntityBaseFromActor
                            ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
        if (this_00 != (FDS_EntityBase *)0x0) {
          (**(code **)(this_00->_padding_ + 400))(this_00);
          bVar3 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&local_res18,
                             (void *)0x0);
          if (!bVar3) {
            uVar4 = 0;
            if ((int)uVar19 < local_178.ArrayNum) {
              uVar4 = uVar20;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            lVar17 = *(longlong *)
                      (*(longlong *)(local_178.AllocatorInstance.Data + lVar18 * 8) + 0x1b8);
            if (lVar17 == 0) {
              local_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_d8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              local_d8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              local_d8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              local_d8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            else {
              local_b0 = *(double *)(lVar17 + 0x220);
              local_a8 = *(undefined4 *)(lVar17 + 0x210);
              uStack_a4 = *(undefined4 *)(lVar17 + 0x214);
              uStack_a0 = *(undefined4 *)(lVar17 + 0x218);
              uStack_9c = *(undefined4 *)(lVar17 + 0x21c);
              local_d8._0_4_ = local_a8;
              local_d8._4_4_ = uStack_a4;
              local_d8._8_4_ = uStack_a0;
              local_d8._12_4_ = uStack_9c;
              local_98 = local_b0;
            }
            local_d8._s_0.Z = local_b0 - (double)this_00->ScaledCapsuleHalfHeight;
            server_msg::NetSyncResponse::NetSyncResponse(&local_158,(Arena *)0x0);
            local_158._padding_ = (longlong)&___7NetSyncResponse_server_msg__6B_;
            local_158._impl_.entity_id_ = this_00->EntityID;
            local_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_158._impl_._has_bits_.has_bits_[0] | 0x101);
            if (local_158._impl_.position_ == (Vector *)0x0) {
              if (((byte)local_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                           0xfffffffffffffffe);
              }
              local_158._impl_.position_ =
                   google::protobuf::Arena::DefaultConstruct<Vector>(pAVar14);
              if (local_158._impl_.position_ != (Vector *)0x0) goto LAB_14bbb4c61;
            }
            else {
LAB_14bbb4c61:
              DS_Util::SetVector(local_158._impl_.position_,(TVector<double> *)&local_d8._s_0);
            }
            local_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_158._impl_._has_bits_.has_bits_[0] | 2);
            if (local_158._impl_.direction_ == (VectorF *)0x0) {
              if (((byte)local_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                           0xfffffffffffffffe);
              }
              local_158._impl_.direction_ =
                   google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar14);
              if (local_158._impl_.direction_ != (VectorF *)0x0) goto LAB_14bbb4caa;
            }
            else {
LAB_14bbb4caa:
              pVVar11 = local_158._impl_.direction_;
              uVar4 = 0;
              if ((int)uVar19 < local_178.ArrayNum) {
                uVar4 = uVar20;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pTVar5 = AActor::GetActorRotation
                                 (*(AActor **)(local_178.AllocatorInstance.Data + lVar18 * 8),
                                  &local_90);
              DS_Util::SetNetRotate(pVVar11,pTVar5);
            }
            dVar21 = UDS_TimeUtilManager::GetCurrentServerTime();
            local_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_158._impl_._has_bits_.has_bits_[0] | 0x3810);
            local_158._impl_.move_mode_ = 0;
            local_158._impl_.sync_state_ = 0;
            local_158._impl_.ticks_ = dVar21;
            if (local_158._impl_.skill_info_ == (SkillInfo *)0x0) {
              if (((byte)local_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                           0xfffffffffffffffe);
              }
              local_158._impl_.skill_info_ =
                   google::protobuf::Arena::DefaultConstruct<server_msg::SkillInfo>(pAVar14);
              if (local_158._impl_.skill_info_ != (SkillInfo *)0x0) goto LAB_14bbb4d68;
            }
            else {
LAB_14bbb4d68:
              pSVar2 = local_158._impl_.skill_info_;
              FDS_EntityBase::GetCharInfoData(this_00);
              bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res10,
                                 (void *)0x0);
              if (!bVar3) {
                pUVar6 = FWeakObjectPtr::Get(&local_res10);
                pFVar7 = FDS_CharacterBaseTableRow::GetRef
                                   ((longlong)*(int *)&pUVar6[8].field_0x8,true);
                local_168.Data = (FScriptContainerElement *)0x0;
                local_160 = (pFVar7->ID_DefaultSkill).ArrayNum;
                lVar17 = (longlong)local_160;
                _Src = (pFVar7->ID_DefaultSkill).AllocatorInstance.Data;
                if (local_160 == 0) {
                  local_15c = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_160,0,&local_168,local_160,&local_15c);
                  memcpy(local_168.Data,_Src,lVar17 << 2);
                }
                if (0 < local_160) {
                  uVar16 = skillIndex % local_160;
                  uVar4 = 0;
                  if ((int)uVar16 < local_160) {
                    uVar4 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar4 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  iVar12 = *(int *)(local_168.Data + (longlong)(int)uVar16 * 4);
                  (pSVar2->_impl_).skill_id_ = iVar12;
                  (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                       (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x100;
                  if (iVar12 != 0) {
                    pFVar8 = FDS_SkillTableRow::GetRef((longlong)iVar12,true);
                    if (pFVar8->ID_SkillActLevelGroup != 0) {
                      pFVar9 = FDS_SkillActLevelTableRow::GetRef
                                         ((longlong)pFVar8->ID_SkillActLevelGroup,true);
                      (pSVar2->_impl_).start_ticks_ = dVar21;
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x80;
                      (pSVar2->_impl_).end_ticks_ = (double)pFVar9->AttackAniTime + dVar21;
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x41;
                      pVVar10 = (pSVar2->_impl_).start_position_;
                      if (pVVar10 == (Vector *)0x0) {
                        pAVar14 = (Arena *)(pSVar2->_padding_ & 0xfffffffffffffffe);
                        if ((pSVar2->_padding_ & 1) != 0) {
                          pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
                        }
                        pVVar10 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar14);
                        (pSVar2->_impl_).start_position_ = pVVar10;
                        if (pVVar10 != (Vector *)0x0) goto LAB_14bbb4efa;
                      }
                      else {
LAB_14bbb4efa:
                        DS_Util::SetVector(pVVar10,(TVector<double> *)&local_d8._s_0);
                      }
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 4;
                      pVVar11 = (pSVar2->_impl_).start_direction_;
                      if (pVVar11 == (VectorF *)0x0) {
                        pAVar14 = (Arena *)(pSVar2->_padding_ & 0xfffffffffffffffe);
                        if ((pSVar2->_padding_ & 1) != 0) {
                          pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
                        }
                        pVVar11 = google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar14);
                        (pSVar2->_impl_).start_direction_ = pVVar11;
                        if (pVVar11 != (VectorF *)0x0) goto LAB_14bbb4f35;
                      }
                      else {
LAB_14bbb4f35:
                        uVar4 = 0;
                        if ((int)uVar19 < local_178.ArrayNum) {
                          uVar4 = uVar20;
                        }
                        if ((uVar4 == 0) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                        pTVar5 = AActor::GetActorRotation
                                           (*(AActor **)
                                             (local_178.AllocatorInstance.Data + lVar18 * 8),
                                            local_78);
                        DS_Util::SetNetRotate(pVVar11,pTVar5);
                      }
                      pUVar6 = FWeakObjectPtr::Get(&local_res18);
                      (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6,&local_158);
                    }
                  }
                }
                if (local_168.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_168.Data);
                }
              }
            }
            server_msg::NetSyncResponse::~NetSyncResponse(&local_158);
          }
        }
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 1;
        if ((longlong)uVar13 <= lVar18) break;
        uVar15 = local_178._8_8_ & 0xffffffff;
      } while( true );
    }
    skillIndex = skillIndex + 1;
    if (0x7ffffffe < skillIndex) {
      skillIndex = 0;
    }
LAB_14bbb500e:
    if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
  }
  return;
}

// GetInst @ 14bbbc590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr> __cdecl ADS_AnimOpt_GameMode::GetInst(void)

{
  TObjectPtr<AGameModeBase> *this;
  bool bVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr in_RCX;
  AGameModeBase *pAVar4;
  AGameModeBase *local_res10;
  
  pUVar2 = UDS_GameInstance::GetGameInstanceWorld();
  pAVar4 = (AGameModeBase *)0x0;
  if (pUVar2 != (UWorld *)0x0) {
    this = &pUVar2->AuthorityGameMode;
    if ((this->field0_0x0).DebugPtr != (AGameModeBase *)0x0) {
      pUVar3 = Z_Construct_UClass_ADS_AnimOpt_GameMode_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
      if (bVar1) {
        pAVar4 = (this->field0_0x0).DebugPtr;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AGameModeBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    *(undefined8 *)in_RCX = 0;
    local_res10 = pAVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AGameModeBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
    return (TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr>)in_RCX;
  }
  *(undefined8 *)in_RCX = 0;
  local_res10 = (AGameModeBase *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
  return (TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr>)in_RCX;
}

// GetNextEntityID @ 14bbbc700

ulong64 __cdecl ADS_AnimOpt_GameMode::GetNextEntityID(void)

{
  entityID = entityID + 1;
  return entityID;
}

// OnLoadedDataAsset @ 14bbcae10

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

void __thiscall ADS_AnimOpt_GameMode::OnLoadedDataAsset(ADS_AnimOpt_GameMode *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_GameInstance *this_00;
  UWorld *this_01;
  FTimerManager *this_02;
  undefined ***pppuVar3;
  ulonglong uVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined **local_78;
  code *pcStack_70;
  uchar local_68;
  undefined7 uStack_67;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  code *pcStack_40;
  uchar local_38;
  undefined7 uStack_37;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 != (UDS_GameInstance *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this_00->OnLoadDataAssetComplete,(UObject *)this);
    UDS_GameInstance::InitManagers(this_00);
    this_01 = AActor::GetWorld((AActor *)this);
    this_02 = UWorld::GetTimerManager(this_01);
    local_78 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    local_38 = local_68;
    uStack_37 = uStack_67;
    pcStack_70 = ResetEntity;
    local_58[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    local_30 = (undefined ***)0x0;
    local_60 = (undefined ***)0x0;
    local_98._16_8_ = 0;
    local_48 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    pcStack_40 = ResetEntity;
    local_28 = 3;
    FTimerManager::InternalSetTimerForNextTick(this_02,(FTimerUnifiedDelegate *)local_98);
    uVar4 = (ulonglong)local_28;
    if (3 < local_28) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar4] ==
        UE::Core::Private::TDestructorCaller<TFunction<void___cdecl(void)>_>::Destruct) {
      if (local_58[0] != (code *)0x0) {
        pppuVar3 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar3 = local_30;
        }
        (*(code *)(*pppuVar3)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar4])(local_58);
    }
    if (local_98._16_8_ != 0) {
      pppuVar3 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar3 = local_60;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  return;
}

// ResetEntity @ 14bbdc460

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

void __cdecl ADS_AnimOpt_GameMode::ResetEntity(void)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar5;
  UObject *pUVar6;
  ADS_AnimOpt_Spawner *this_00;
  ulonglong uVar7;
  FWeakObjectPtr *pFVar8;
  ForAnyElementType FVar9;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_38;
  
  GetInst();
  bVar4 = TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr> *)&local_res18,(void *)0x0
                    );
  if ((!bVar4) && (this = UDS_EntityManager::GetInst(), this != (UDS_EntityManager *)0x0)) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this,&local_38);
    iVar2 = local_38.ArrayNum;
    uVar7 = (ulonglong)local_38.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + uVar7 * 8);
    FVar9.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar2) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if ((FWeakObjectPtr *)FVar9.Data == pFVar1) break;
      FVar3 = *(FWeakObjectPtr *)FVar9.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res8 = FVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
      pFVar5 = FDS_EntityBase::GetEntityBaseFromActor
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
      UDS_EntityManager::RemoveEntity(this,pFVar5->EntityID,true);
      uVar7 = local_38._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 8;
    }
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    pFVar8 = *(FWeakObjectPtr **)&pUVar6[0x15].field_0x18;
    iVar2 = *(int *)&pUVar6[0x15].field_0x20;
    pFVar1 = pFVar8 + iVar2;
    while( true ) {
      if (*(int *)&pUVar6[0x15].field_0x20 != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<ADS_AnimOpt_Spawner,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar8 == pFVar1) break;
      local_res8 = *pFVar8;
      bVar4 = TWeakObjectPtr<ADS_AnimOpt_Spawner,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_AnimOpt_Spawner,FWeakObjectPtr> *)&local_res8,
                         (void *)0x0);
      if (!bVar4) {
        this_00 = (ADS_AnimOpt_Spawner *)FWeakObjectPtr::Get(&local_res8);
        ADS_AnimOpt_Spawner::SpawnActor(this_00);
      }
      pFVar8 = pFVar8 + 1;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// SetSpectatorPawn @ 14bbe1100

void __thiscall
ADS_AnimOpt_GameMode::SetSpectatorPawn
          (ADS_AnimOpt_GameMode *this,TWeakObjectPtr<ADS_AnimOpt_DefaultPawn,FWeakObjectPtr> param_1
          )

{
  ulong64 uVar1;
  ServerMessages local_28;
  
  (this->SpectatorPawn).WeakPtr = param_1.WeakPtr;
  uVar1 = entityID + 1;
  entityID = uVar1;
  server_msg::ServerMessages::ServerMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ServerMessages_server_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 3) {
    server_msg::ServerMessages::clear_ServerMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 3;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ServerMessage_.errorcoderes_ =
           google::protobuf::Arena::DefaultConstruct<server_msg::JoinMapResponse>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ServerMessage_.errorcoderes_ =
           google::protobuf::Arena::DefaultConstruct<server_msg::JoinMapResponse>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  *(ulong64 *)(local_28._impl_.ServerMessage_.errorcoderes_ + 5) = uVar1;
  *(uint *)(local_28._impl_.ServerMessage_.errorcoderes_ + 1) =
       *(uint *)(local_28._impl_.ServerMessage_.errorcoderes_ + 1) | 0x20;
  FDS_LoginService::ReceiveJoinMapResponse(&local_28);
  server_msg::ServerMessages::~ServerMessages(&local_28);
  return;
}

// StartPlay @ 14bbe1f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall ADS_AnimOpt_GameMode::StartPlay(ADS_AnimOpt_GameMode *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_GameInstance *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res10 [8];
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  ADS_AnimOpt_GameMode *local_90;
  FName *local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  AGameModeBase::StartPlay((AGameModeBase *)this);
  pUVar3 = UDS_GameInstance::GetInst();
  if (pUVar3 == (UDS_GameInstance *)0x0) {
    return;
  }
  pcVar4 = strstr("&ADS_AnimOpt_GameMode::OnLoadedDataAsset","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bbe1f9b:
    pcVar6 = &DAT_00000002;
LAB_14bbe1fa0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bbe1f9b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bbe1fa0;
  }
  ::FName::FName(&local_res20,pcVar6);
  if ((this == (ADS_AnimOpt_GameMode *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = local_res20;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  if ((this == (ADS_AnimOpt_GameMode *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_90 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_AnimOpt_GameMode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_90);
  local_98 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_58);
  if ((local_98 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_a0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bbe20e1;
  }
  local_88 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_BindDynamic<ADS_AnimOpt_GameMode>'::__l2::<lambda_1>::operator()(&local_88);
LAB_14bbe20e1:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_40);
  local_80.Object = local_a0;
  local_80.FunctionName = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar3->OnLoadDataAssetComplete,(FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar3->OnLoadDataAssetComplete).field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pUVar3->OnLoadDataAssetComplete,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

