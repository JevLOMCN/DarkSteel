// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b420940

UClass * __cdecl ADS_AnimOpt_Spawner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AnimOpt_Spawner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_Spawner",
               &Z_Registration_Info_UClass_ADS_AnimOpt_Spawner.InnerSingleton,
               StaticRegisterNativesADS_AnimOpt_Spawner,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_AnimOpt_Spawner>,
               InternalVTableHelperCtorCaller<ADS_AnimOpt_Spawner>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AnimOpt_Spawner.InnerSingleton;
}

// ADS_AnimOpt_Spawner @ 14b423960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_AnimOpt_Spawner * __thiscall
ADS_AnimOpt_Spawner::ADS_AnimOpt_Spawner(ADS_AnimOpt_Spawner *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_AnimOpt_Spawner__6B_;
  this->SpawnCount = 0;
  (this->SpawnRangeComponent).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  (this->SpawnerData).IsAllCharacter = false;
  (this->SpawnerData).SelectableRowNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnerData).SelectableRowNames.ArrayNum = 0;
  (this->SpawnerData).SelectableRowNames.ArrayMax = 0;
  (this->SpawnActorPositionComponent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnActorPositionComponent).ArrayNum = 0;
  (this->SpawnActorPositionComponent).ArrayMax = 0;
  return this;
}

// ~ADS_AnimOpt_Spawner @ 14b423f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_AnimOpt_Spawner::~ADS_AnimOpt_Spawner(ADS_AnimOpt_Spawner *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADS_AnimOpt_Spawner__6B_;
  pFVar1 = (this->SpawnActorPositionComponent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnerData).SelectableRowNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b424c30

UClass * __cdecl ADS_AnimOpt_Spawner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AnimOpt_Spawner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_Spawner",
               &Z_Registration_Info_UClass_ADS_AnimOpt_Spawner.InnerSingleton,
               StaticRegisterNativesADS_AnimOpt_Spawner,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_AnimOpt_Spawner>,
               InternalVTableHelperCtorCaller<ADS_AnimOpt_Spawner>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AnimOpt_Spawner.InnerSingleton;
}

// StaticRegisterNativesADS_AnimOpt_Spawner @ 14b4254c0

void __cdecl ADS_AnimOpt_Spawner::StaticRegisterNativesADS_AnimOpt_Spawner(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_AnimOpt_Spawner_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCharacterNames @ 14b4263a0

void __cdecl
ADS_AnimOpt_Spawner::execGetCharacterNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetCharacterNames((ADS_AnimOpt_Spawner *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ADS_AnimOpt_Spawner @ 14bba8620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_AnimOpt_Spawner * __thiscall
ADS_AnimOpt_Spawner::ADS_AnimOpt_Spawner(ADS_AnimOpt_Spawner *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UBoxComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this);
  this->_padding_ = (longlong)&___7ADS_AnimOpt_Spawner__6B_;
  this->SpawnCount = 0;
  (this->SpawnRangeComponent).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  (this->SpawnerData).IsAllCharacter = false;
  (this->SpawnerData).SelectableRowNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnerData).SelectableRowNames.ArrayNum = 0;
  (this->SpawnerData).SelectableRowNames.ArrayMax = 0;
  (this->SpawnActorPositionComponent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnActorPositionComponent).ArrayNum = 0;
  (this->SpawnActorPositionComponent).ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,"SpawnRangeComponent");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UBoxComponent_NoRegister();
  pUVar4 = (UBoxComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UBoxComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->SpawnRangeComponent).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// BeginPlay @ 14bbabf90

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

void __thiscall ADS_AnimOpt_Spawner::BeginPlay(ADS_AnimOpt_Spawner *this)

{
  FWeakObjectPtr *this_00;
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  ADS_AnimOpt_Spawner *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  AActor::BeginPlay((AActor *)this);
  ADS_AnimOpt_GameMode::GetInst();
  bVar1 = TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr> *)&local_148,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_AnimOpt_Spawner::BeginPlay",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x1e,L"animOptGameMode  is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&local_148);
    iVar2 = *(int *)&pUVar4[0x15].field_0x20;
    if (iVar2 == *(int *)&pUVar4[0x15].field_0x24) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)&pUVar4[0x15].field_0x18,
                         (int *)&pUVar4[0x15].field_0x24);
    }
    *(int *)&pUVar4[0x15].field_0x20 = iVar2 + 1;
    this_00 = (FWeakObjectPtr *)(*(longlong *)&pUVar4[0x15].field_0x18 + (longlong)iVar2 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_AnimOpt_Spawner *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    this_00->ObjectIndex = 0;
    this_00->ObjectSerialNumber = 0;
    local_140 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_AnimOpt_Spawner *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_140);
  }
  return;
}

// EndPlay @ 14bbb37c0

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

void __thiscall ADS_AnimOpt_Spawner::EndPlay(ADS_AnimOpt_Spawner *this,Type param_1)

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
  ADS_AnimOpt_Spawner *pAVar11;
  UClass *pUVar12;
  ADS_AnimOpt_Spawner *pAVar13;
  longlong *plVar14;
  ADS_AnimOpt_Spawner *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_AnimOpt_Spawner *pAStack_148;
  ADS_AnimOpt_Spawner *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_AnimOpt_Spawner *pAStack_120;
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
  pAVar13 = (ADS_AnimOpt_Spawner *)0x0;
  pAVar15 = (ADS_AnimOpt_Spawner *)0x0;
  pAVar11 = this;
  if (this == (ADS_AnimOpt_Spawner *)0x0) {
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
  pAVar11 = (ADS_AnimOpt_Spawner *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ADS_AnimOpt_Spawner *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ADS_AnimOpt_Spawner *)0x0) goto LAB_147390f4f;
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
  pAVar13 = (ADS_AnimOpt_Spawner *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_AnimOpt_Spawner *)0x0)) {
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
       (pAVar11 != (ADS_AnimOpt_Spawner *)0x0)) {
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

// GetCharacterBaseByName @ 14bbbbb70

FDS_CharacterBaseTableRow * __thiscall
ADS_AnimOpt_Spawner::GetCharacterBaseByName(ADS_AnimOpt_Spawner *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  FDS_CharacterBaseTableRow *pFVar8;
  undefined1 local_res18 [8];
  FName local_res20;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  GetCharacterBaseList(this,&local_28);
  iVar2 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_CharacterBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (FVar7.Data == pFVar1) break;
    pFVar8 = *(FDS_CharacterBaseTableRow **)FVar7.Data;
    if (pFVar8 != (FDS_CharacterBaseTableRow *)0x0) {
      puVar4 = (undefined8 *)(**(code **)((pFVar8->ID_Name)._padding_ + 8))(&pFVar8->ID_Name);
      if (*(int *)(puVar4 + 1) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)*puVar4;
      }
      pFVar5 = ::FName::FName(&local_res20,pwVar6);
      iVar3 = ::FName::Compare(param_1,pFVar5);
      if (iVar3 == 0) goto LAB_14bbbbc03;
    }
    FVar7.Data = FVar7.Data + 8;
  }
  pFVar8 = (FDS_CharacterBaseTableRow *)0x0;
LAB_14bbbbc03:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return pFVar8;
}

// GetCharacterBaseList @ 14bbbbc40

TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
ADS_AnimOpt_Spawner::GetCharacterBaseList
          (ADS_AnimOpt_Spawner *this,
          TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar6 = FDS_CharacterBaseTableRow::GetAll(&local_18);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = (pTVar6->AllocatorInstance).Data;
  pFVar1 = pFVar7 + (longlong)pTVar6->ArrayNum * 8;
  do {
    if (pFVar7 == pFVar1) {
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if ((*(longlong *)pFVar7 != 0) && (*(int *)(*(longlong *)pFVar7 + 0x20) != 0)) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= pFVar7) &&
         ((pFVar7 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           *(longlong *)pFVar7;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetCharacterBaseListBySpawnerData @ 14bbbbd60

TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
ADS_AnimOpt_Spawner::GetCharacterBaseListBySpawnerData
          (ADS_AnimOpt_Spawner *this,
          TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 *puVar10;
  FName *pFVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  FName local_res20;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_58;
  
  uVar15 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = (this->SpawnerData).SelectableRowNames.ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  iVar8 = (this->SpawnerData).SelectableRowNames.ArrayNum;
  uVar16 = uVar15;
  local_res18 = iVar8;
  if (iVar8 < 1) {
    return __return_storage_ptr__;
  }
LAB_14bbbbde0:
  iVar14 = (int)uVar15;
  if (iVar14 < (this->SpawnerData).SelectableRowNames.ArrayNum) {
    if ((iVar14 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    pFVar3 = (this->SpawnerData).SelectableRowNames.AllocatorInstance.Data;
    GetCharacterBaseList(this,&local_58);
    iVar8 = local_58.ArrayNum;
    pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
    FVar13.Data = local_58.AllocatorInstance.Data;
    do {
      if (local_58.ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FDS_CharacterBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar13.Data == pFVar1) {
        iVar8 = local_res18;
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
          iVar8 = local_res18;
        }
        break;
      }
      lVar4 = *(longlong *)FVar13.Data;
      if (lVar4 != 0) {
        puVar10 = (undefined8 *)(**(code **)(*(longlong *)(lVar4 + 0x28) + 8))(lVar4 + 0x28);
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)*puVar10;
        }
        pFVar11 = ::FName::FName(&local_res20,pwVar12);
        iVar7 = ::FName::Compare((FName *)(pFVar3 + uVar16 * 8),pFVar11);
        if (iVar7 == 0) goto LAB_14bbbbebb;
      }
      FVar13.Data = FVar13.Data + 8;
    } while( true );
  }
  goto LAB_14bbbbf16;
LAB_14bbbbebb:
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  iVar8 = __return_storage_ptr__->ArrayNum;
  if (iVar8 == __return_storage_ptr__->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = lVar4;
  iVar8 = local_res18;
LAB_14bbbbf16:
  uVar15 = (ulonglong)(iVar14 + 1U);
  uVar16 = uVar16 + 1;
  if (iVar8 <= (int)(iVar14 + 1U)) {
    return __return_storage_ptr__;
  }
  goto LAB_14bbbbde0;
}

// GetCharacterNames @ 14bbbbf60

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
ADS_AnimOpt_Spawner::GetCharacterNames
          (ADS_AnimOpt_Spawner *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  FName *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`ADS_AnimOpt_Spawner::GetCharacterNames'::__l2::
           _dynamic_atexit_destructor_for__characterNames__);
    _Init_thread_footer(&::_TSS0);
  }
  characterNames.ArrayNum = 0;
  if (characterNames.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&characterNames.AllocatorInstance,0,&characterNames.ArrayMax);
  }
  GetCharacterBaseList(this,&local_38);
  iVar3 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar10.Data = local_38.AllocatorInstance.Data;
  do {
    if (local_38.ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_CharacterBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar10.Data == pFVar1) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar3 = characterNames.ArrayNum;
      FVar10 = characterNames.AllocatorInstance;
      lVar8 = (longlong)characterNames.ArrayNum;
      __return_storage_ptr__->ArrayNum = characterNames.ArrayNum;
      if (iVar3 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,0,&__return_storage_ptr__->AllocatorInstance,iVar3,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,FVar10.Data,lVar8 << 3);
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    lVar8 = *(longlong *)FVar10.Data;
    if (lVar8 != 0) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)(lVar8 + 0x28) + 8))(lVar8 + 0x28);
      if (*(int *)(puVar5 + 1) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)*puVar5;
      }
      pFVar6 = ::FName::FName(&local_res18,pwVar9);
      if (((characterNames.AllocatorInstance.Data <= pFVar6) &&
          (pFVar6 < (FName *)(characterNames.AllocatorInstance.Data +
                             (longlong)characterNames.ArrayMax * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      if (characterNames.ArrayNum == characterNames.ArrayMax) {
        characterNames.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&characterNames.AllocatorInstance,&characterNames.ArrayMax);
      }
      lVar8 = (longlong)characterNames.ArrayNum;
      characterNames.ArrayNum = characterNames.ArrayNum + 1;
      *(FName *)(characterNames.AllocatorInstance.Data + lVar8 * 8) = *pFVar6;
    }
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// SpawnActor @ 14bbe1770

void __thiscall ADS_AnimOpt_Spawner::SpawnActor(ADS_AnimOpt_Spawner *this)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ServerMessageUnion SVar5;
  bool bVar6;
  int iVar7;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  Vector *pVVar10;
  VectorF *pVVar11;
  FPayload *pFVar12;
  TRotator<double> *pTVar13;
  uint uVar14;
  Arena *pAVar15;
  FRotationConversionCache *this_00;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int local_res8;
  FScriptContainerElement *local_res10;
  ServerMessages local_f8;
  TQuat<double> local_d8;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_98;
  TVector<double>_u_0 local_88;
  TRotator<double> local_70;
  TRotator<double> local_58;
  
  uVar18 = 0;
  local_res10 = (FScriptContainerElement *)0x0;
  if ((this->SpawnerData).IsAllCharacter == true) {
    pTVar8 = GetCharacterBaseList(this,&local_b8);
    local_res8 = 0;
    if (&local_a8 != pTVar8) {
      local_res10 = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_res8 = pTVar8->ArrayNum;
      pTVar8->ArrayNum = 0;
      pTVar8->ArrayMax = 0;
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  else {
    pTVar8 = GetCharacterBaseListBySpawnerData(this,&local_98);
    local_res8 = 0;
    if (&local_a8 != pTVar8) {
      local_res10 = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_res8 = pTVar8->ArrayNum;
      pTVar8->ArrayNum = 0;
      pTVar8->ArrayMax = 0;
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  lVar9 = (longlong)(this->SpawnActorPositionComponent).ArrayNum;
  uVar19 = uVar18;
  if (0 < lVar9) {
    do {
      uVar17 = (uint)uVar18;
      uVar14 = 0;
      if ((int)uVar17 < (this->SpawnActorPositionComponent).ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->SpawnActorPositionComponent).AllocatorInstance.Data + uVar19 * 8) !=
          0) {
        uVar14 = 0;
        if ((int)uVar17 < (this->SpawnActorPositionComponent).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar20 = *(longlong *)
                  ((this->SpawnActorPositionComponent).AllocatorInstance.Data + uVar19 * 8);
        server_msg::ServerMessages::ServerMessages(&local_f8,(Arena *)0x0);
        local_f8._padding_ = (longlong)&___7ServerMessages_server_msg__6B_;
        if (local_f8._impl_._oneof_case_[0] != 4) {
          server_msg::ServerMessages::clear_ServerMessage(&local_f8);
          local_f8._impl_._oneof_case_[0] = 4;
          if (((byte)local_f8._padding_ & 1) == 0) {
            local_f8._impl_.ServerMessage_.errorcoderes_ =
                 google::protobuf::Arena::DefaultConstruct<server_msg::SpawnCharacterResponse>
                           ((Arena *)(CONCAT71(local_f8._padding_._1_7_,(byte)local_f8._padding_) &
                                     0xfffffffffffffffe));
          }
          else {
            local_f8._impl_.ServerMessage_.errorcoderes_ =
                 google::protobuf::Arena::DefaultConstruct<server_msg::SpawnCharacterResponse>
                           (*(Arena **)
                             (CONCAT71(local_f8._padding_._1_7_,(byte)local_f8._padding_) &
                             0xfffffffffffffffe));
          }
        }
        SVar5 = local_f8._impl_.ServerMessage_;
        *(ulong64 *)(local_f8._impl_.ServerMessage_.errorcoderes_ + 0xb) = entityID + 1;
        uVar14 = *(uint *)(local_f8._impl_.ServerMessage_.errorcoderes_ + 1);
        entityID = entityID + 2;
        *(ulong64 *)&local_f8._impl_.ServerMessage_.errorcoderes_[0xb].field_0x8 = entityID;
        *(uint *)(local_f8._impl_.ServerMessage_.errorcoderes_ + 1) = uVar14 | 0x30000;
        if (local_res8 == 0) {
          *(undefined4 *)(local_f8._impl_.ServerMessage_.errorcoderes_ + 0xc) = 1;
          uVar21 = 0x65;
          *(uint *)(local_f8._impl_.ServerMessage_.errorcoderes_ + 1) =
               *(uint *)(local_f8._impl_.ServerMessage_.errorcoderes_ + 1) | 0x40000;
        }
        else {
          uVar16 = (int)uVar17 % local_res8;
          uVar14 = 0;
          if ((int)uVar16 < local_res8) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)(SVar5.errorcoderes_ + 0xc) =
               *(undefined4 *)(*(longlong *)(local_res10 + (longlong)(int)uVar16 * 8) + 8);
          *(uint *)(SVar5.errorcoderes_ + 1) = *(uint *)(SVar5.errorcoderes_ + 1) | 0x40000;
          uVar16 = (int)uVar17 % local_res8;
          uVar14 = 0;
          if ((int)uVar16 < local_res8) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar21 = *(undefined4 *)(*(longlong *)(local_res10 + (longlong)(int)uVar16 * 8) + 0x54);
        }
        *(undefined4 *)(SVar5.errorcoderes_ + 0xe) = uVar21;
        uVar14 = *(uint *)(SVar5.errorcoderes_ + 1);
        *(undefined4 *)&SVar5.errorcoderes_[0xc].field_0x8 = 1;
        *(uint *)(SVar5.errorcoderes_ + 1) = uVar14 | 0x8100004;
        pVVar10 = *(Vector **)(SVar5.errorcoderes_ + 4);
        if (pVVar10 == (Vector *)0x0) {
          pAVar15 = (Arena *)(*(ulonglong *)&(SVar5.errorcoderes_)->field_0x8 & 0xfffffffffffffffe);
          if (((SVar5.errorcoderes_)->field_0x8 & 1) != 0) {
            pAVar15 = (Arena *)(pAVar15->impl_).tag_and_id_;
          }
          pVVar10 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar15);
          *(Vector **)(SVar5.errorcoderes_ + 4) = pVVar10;
          if (pVVar10 != (Vector *)0x0) goto LAB_14bbe1ad8;
        }
        else {
LAB_14bbe1ad8:
          local_88._s_0.X = *(double *)(lVar20 + 0x210);
          local_88._s_0.Y = *(double *)(lVar20 + 0x218);
          local_88._s_0.Z = *(double *)(lVar20 + 0x220);
          DS_Util::SetVector(pVVar10,(TVector<double> *)&local_88._s_0);
        }
        *(uint *)(SVar5.errorcoderes_ + 1) = *(uint *)(SVar5.errorcoderes_ + 1) | 8;
        pVVar11 = *(VectorF **)&SVar5.errorcoderes_[4].field_0x8;
        if (pVVar11 == (VectorF *)0x0) {
          pAVar15 = (Arena *)(*(ulonglong *)&(SVar5.errorcoderes_)->field_0x8 & 0xfffffffffffffffe);
          if (((SVar5.errorcoderes_)->field_0x8 & 1) != 0) {
            pAVar15 = (Arena *)(pAVar15->impl_).tag_and_id_;
          }
          pVVar11 = google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar15);
          *(VectorF **)&SVar5.errorcoderes_[4].field_0x8 = pVVar11;
          if (pVVar11 != (VectorF *)0x0) goto LAB_14bbe1b30;
        }
        else {
LAB_14bbe1b30:
          lVar20 = this->_padding_;
          if (lVar20 == 0) {
            uVar21 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
            uVar22 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
            local_70.Pitch._0_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
            local_70.Pitch._4_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
            local_70.Yaw._0_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
            local_70.Yaw._4_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
          }
          else {
            local_d8.X = *(double *)(lVar20 + 0x1f0);
            local_d8.Y = *(double *)(lVar20 + 0x1f8);
            local_d8.Z = *(double *)(lVar20 + 0x200);
            local_d8.W = *(double *)(lVar20 + 0x208);
            this_00 = (FRotationConversionCache *)(lVar20 + 0x1e0);
            pFVar12 = FRotationConversionCache::GetOrCreatePayload(this_00);
            lVar20 = -(ulonglong)((pFVar12->CachedQuat).W != local_d8.W);
            auVar3._8_4_ = (int)lVar20;
            auVar3._0_8_ = -(ulonglong)((pFVar12->CachedQuat).Z != local_d8.Z);
            auVar3._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
            uVar14 = movmskpd((int)this_00,auVar3);
            lVar20 = -(ulonglong)(local_d8.Y != (pFVar12->CachedQuat).Y);
            auVar4._8_4_ = (int)lVar20;
            auVar4._0_8_ = -(ulonglong)(local_d8.X != (pFVar12->CachedQuat).X);
            auVar4._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
            iVar7 = movmskpd((int)pFVar12,auVar4);
            if ((uVar14 & 0x3fffffff) != 0 || iVar7 != 0) {
              (pFVar12->CachedQuat).X = local_d8.X;
              (pFVar12->CachedQuat).Y = local_d8.Y;
              (pFVar12->CachedQuat).Z = local_d8.Z;
              (pFVar12->CachedQuat).W = local_d8.W;
              pTVar13 = UE::Math::TQuat<double>::Rotator(&local_d8,&local_58);
              dVar1 = pTVar13->Yaw;
              (pFVar12->CachedRotator).Pitch = pTVar13->Pitch;
              (pFVar12->CachedRotator).Yaw = dVar1;
              (pFVar12->CachedRotator).Roll = pTVar13->Roll;
            }
            dVar1 = (pFVar12->CachedRotator).Roll;
            uVar21 = SUB84(dVar1,0);
            uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
            local_70.Pitch._0_4_ = *(undefined4 *)&(pFVar12->CachedRotator).Pitch;
            local_70.Pitch._4_4_ = *(undefined4 *)((longlong)&(pFVar12->CachedRotator).Pitch + 4);
            local_70.Yaw._0_4_ = *(undefined4 *)&(pFVar12->CachedRotator).Yaw;
            local_70.Yaw._4_4_ = *(undefined4 *)((longlong)&(pFVar12->CachedRotator).Yaw + 4);
          }
          local_70.Roll = (double)CONCAT44(uVar22,uVar21);
          DS_Util::SetNetRotate(pVVar11,&local_70);
        }
        FDS_SpawnService::ReceiveSpawnCharacterResponse(&local_f8);
        server_msg::ServerMessages::~ServerMessages(&local_f8);
      }
      uVar18 = (ulonglong)(uVar17 + 1);
      uVar19 = uVar19 + 1;
    } while ((longlong)uVar19 < lVar9);
  }
  if (local_res10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_res10);
  }
  return;
}

