// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 65

// StaticClass @ 146f84b60

UClass * __cdecl UAIPerceptionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionComponent",
               &Z_Registration_Info_UClass_UAIPerceptionComponent.InnerSingleton,
               StaticRegisterNativesUAIPerceptionComponent,0x1d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAIPerceptionComponent>,
               InternalVTableHelperCtorCaller<UAIPerceptionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionComponent.InnerSingleton;
}

// UAIPerceptionComponent @ 146f93740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAIPerceptionComponent * __thiscall
UAIPerceptionComponent::UAIPerceptionComponent(UAIPerceptionComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SensesConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->SensesConfig).ArrayNum = 0;
  (this->SensesConfig).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DominantSense).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DominantSenseID).Index = 0xff;
  ::FName::FName(&(this->DominantSenseID).Name,L"Invalid");
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)0x0;
  (this->PerceptionFilter).AcceptedChannelsMask = 0;
  (this->PerceptionListenerId).Index = 0xffffffff;
  *(undefined8 *)&this->PerceptualData = 0;
  *(undefined8 *)&(this->PerceptualData).field_0x8 = 0;
  *(undefined8 *)&(this->PerceptualData).field_0x20 = 0;
  *(undefined4 *)&(this->PerceptualData).field_0x28 = 0;
  *(undefined4 *)&(this->PerceptualData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerceptualData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerceptualData).field_0x34 = 0;
  *(undefined8 *)&(this->PerceptualData).field_0x40 = 0;
  *(undefined4 *)&(this->PerceptualData).field_0x48 = 0;
  (this->StimuliToProcess).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StimuliToProcess).ArrayNum = 0;
  (this->StimuliToProcess).ArrayMax = 0;
  (this->MaxActiveAge).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxActiveAge).ArrayNum = 0;
  (this->MaxActiveAge).ArrayMax = 0;
  *(undefined8 *)&this->OnPerceptionUpdated = 0;
  *(undefined8 *)&(this->OnPerceptionUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerceptionUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnTargetPerceptionForgotten = 0;
  *(undefined8 *)&(this->OnTargetPerceptionForgotten).field_0x8 = 0;
  *(undefined8 *)&(this->OnTargetPerceptionForgotten).field_0x10 = 0;
  *(undefined8 *)&this->OnTargetPerceptionUpdated = 0;
  *(undefined8 *)&(this->OnTargetPerceptionUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnTargetPerceptionUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnTargetPerceptionInfoUpdated = 0;
  *(undefined8 *)&(this->OnTargetPerceptionInfoUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnTargetPerceptionInfoUpdated).field_0x10 = 0;
  return this;
}

// UAIPerceptionComponent @ 146f93880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAIPerceptionComponent * __thiscall
UAIPerceptionComponent::UAIPerceptionComponent
          (UAIPerceptionComponent *this,FObjectInitializer *param_1)

{
  UClass *this_00;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SensesConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->SensesConfig).ArrayNum = 0;
  (this->SensesConfig).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DominantSense).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DominantSenseID).Index = 0xff;
  ::FName::FName(&(this->DominantSenseID).Name,L"Invalid");
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)0x0;
  (this->PerceptionFilter).AcceptedChannelsMask = 0;
  FAIGenericID<FPerceptionListenerCounter>::InvalidID();
  *(undefined8 *)&this->PerceptualData = 0;
  *(undefined8 *)&(this->PerceptualData).field_0x8 = 0;
  *(undefined8 *)&(this->PerceptualData).field_0x20 = 0;
  *(undefined4 *)&(this->PerceptualData).field_0x28 = 0;
  *(undefined4 *)&(this->PerceptualData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerceptualData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerceptualData).field_0x34 = 0;
  *(undefined8 *)&(this->PerceptualData).field_0x40 = 0;
  *(undefined4 *)&(this->PerceptualData).field_0x48 = 0;
  (this->StimuliToProcess).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StimuliToProcess).ArrayNum = 0;
  (this->StimuliToProcess).ArrayMax = 0;
  (this->MaxActiveAge).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxActiveAge).ArrayNum = 0;
  (this->MaxActiveAge).ArrayMax = 0;
  this->bCleanedUp = 0;
  *(undefined8 *)&this->OnPerceptionUpdated = 0;
  *(undefined8 *)&(this->OnPerceptionUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerceptionUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnTargetPerceptionForgotten = 0;
  *(undefined8 *)&(this->OnTargetPerceptionForgotten).field_0x8 = 0;
  *(undefined8 *)&(this->OnTargetPerceptionForgotten).field_0x10 = 0;
  *(undefined8 *)&this->OnTargetPerceptionUpdated = 0;
  *(undefined8 *)&(this->OnTargetPerceptionUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnTargetPerceptionUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnTargetPerceptionInfoUpdated = 0;
  *(undefined8 *)&(this->OnTargetPerceptionInfoUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnTargetPerceptionInfoUpdated).field_0x10 = 0;
  this_00 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  *(uint *)&this->field_0x168 =
       ((uint)(byte)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x9 ^
       ZPULL(*(undefined4 *)&this->field_0x168,0,1)) & 1 ^ *(undefined4 *)&this->field_0x168;
  return this;
}

// ~UAIPerceptionComponent @ 146f96830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::~UAIPerceptionComponent(UAIPerceptionComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnTargetPerceptionInfoUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetPerceptionInfoUpdated);
  pvVar1 = *(void **)&(this->OnTargetPerceptionUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetPerceptionUpdated);
  pvVar1 = *(void **)&(this->OnTargetPerceptionForgotten).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetPerceptionForgotten);
  pvVar1 = *(void **)&(this->OnPerceptionUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerceptionUpdated);
  pFVar2 = (this->MaxActiveAge).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StimuliToProcess).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PerceptualData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerceptualData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerceptualData);
  pFVar2 = (this->SensesConfig).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AgeStimuli @ 146f9b3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UAIPerceptionComponent::AgeStimuli(UAIPerceptionComponent *this,float param_1)

{
  bool bVar1;
  int iVar2;
  AActor *pAVar3;
  ulonglong uVar4;
  FAIStimulus *this_00;
  FAIStimulus *pFVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  undefined1 local_res8 [8];
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  bVar1 = false;
  bVar8 = false;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
              *)&this->PerceptualData);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar4 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
              *)&this->PerceptualData;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      lVar6 = (longlong)(int)uVar4 * 0x38 + *local_68;
      iVar2 = *(int *)(lVar6 + 0x18);
      this_00 = *(FAIStimulus **)(lVar6 + 0x10);
      pFVar5 = this_00 + iVar2;
      bVar8 = bVar1;
      while( true ) {
        if (*(int *)(lVar6 + 0x18) != iVar2) {
          `TCheckedPointerIterator<FAIStimulus,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (this_00 == pFVar5) break;
        fVar9 = param_1 + this_00->Age;
        this_00->Age = fVar9;
        if ((this_00->ExpirationAge <= fVar9) &&
           ((((this_00->bSuccessfullySensed != 0 && (bVar1 = FAIStimulus::IsValid(this_00), bVar1))
             || (this_00->bWantsToNotifyOnlyOnValueChange != 0)) &&
            ((this_00->bExpired == 0 &&
             (pAVar3 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar6 + 8)),
             pAVar3 != (AActor *)0x0)))))) {
          this_00->bSuccessfullySensed = 0;
          this_00->bExpired = 1;
          RegisterStimulus(this,pAVar3,this_00);
          bVar8 = true;
        }
        this_00 = this_00 + 1;
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar4 = (ulonglong)uStack_4c;
      bVar1 = bVar8;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar2 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_38->HashSize < iVar2)) || (iVar2 < local_38->HashSize)) {
        local_38->HashSize = iVar2;
        TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return bVar8;
}

// BeginDestroy @ 146f9bc80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::BeginDestroy(UAIPerceptionComponent *this)

{
  if ((this->_padding_ & 0x10) == 0) {
    (**(code **)(this->_padding_ + 0x510))();
  }
  UActorComponent::BeginDestroy((UActorComponent *)this);
  return;
}

// CleanUp @ 146f9c180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::CleanUp(UAIPerceptionComponent *this)

{
  UObjectBase *this_00;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UWorld *pUVar4;
  UAIPerceptionSystem *this_01;
  AActor *pAVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 local_res8;
  FName local_res10;
  
  if (this->bCleanedUp != 0) {
    return;
  }
  ForgetAll(this);
  pUVar4 = (UWorld *)this->_padding_;
  if (pUVar4 == (UWorld *)0x0) {
    pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_01 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar4);
  if (this_01 != (UAIPerceptionSystem *)0x0) {
    UAIPerceptionSystem::UnregisterListener(this_01,this);
    pAVar5 = GetBodyActor(this);
    if (pAVar5 != (AActor *)0x0) {
      local_res8 = 0;
      UAIPerceptionSystem::UnregisterSource(this_01,pAVar5,(TSubclassOf<UAISense>)&local_res8);
    }
  }
  if ((((uint)this->_padding_ >> 0xf & 1) != 0) ||
     (this_00 = (UObjectBase *)this->_padding_, this_00 == (UObjectBase *)0x0)) goto LAB_146f9c33d;
  pcVar6 = strstr("&UAIPerceptionComponent::OnOwnerEndPlay","::");
  if (pcVar6 == (char *)0x0) {
LAB_146f9c26b:
    pcVar7 = &DAT_00000002;
LAB_146f9c270:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar6;
      pcVar6 = strstr(pcVar7 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_146f9c26b;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_146f9c270;
  }
  ::FName::FName(&local_res10,pcVar7);
  if (*(char *)((longlong)&this_00[0xd].InternalIndex + 3) != '\0') {
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
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast(this_00,false);
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar3 = FSparseDelegateStorage::Remove((UObject *)this_00,FVar2,(UObject *)this,local_res10);
    *(bool *)((longlong)&this_00[0xd].InternalIndex + 3) = bVar3;
  }
LAB_146f9c33d:
  this->bCleanedUp = 1;
  return;
}

// ConditionallyStoreSuccessfulStimulus @ 146f9e650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAIPerceptionComponent::ConditionallyStoreSuccessfulStimulus
          (UAIPerceptionComponent *this,FAIStimulus *param_1,FAIStimulus *param_2)

{
  double dVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = __real_7f7fffff;
  if (0.0 < param_2->Strength) {
    fVar4 = param_2->Age;
  }
  fVar3 = __real_7f7fffff;
  if (0.0 < param_1->Strength) {
    fVar3 = param_1->Age;
  }
  if ((fVar4 <= fVar3) || (param_1->Strength < param_2->Strength)) {
    param_1->Age = param_2->Age;
    param_1->ExpirationAge = param_2->ExpirationAge;
    param_1->Strength = param_2->Strength;
    dVar1 = (param_2->StimulusLocation).field0_0x0._s_0.Y;
    (param_1->StimulusLocation).field0_0x0._s_0.X = (param_2->StimulusLocation).field0_0x0._s_0.X;
    (param_1->StimulusLocation).field0_0x0._s_0.Y = dVar1;
    (param_1->StimulusLocation).field0_0x0._s_0.Z = (param_2->StimulusLocation).field0_0x0._s_0.Z;
    dVar1 = (param_2->ReceiverLocation).field0_0x0._s_0.Y;
    (param_1->ReceiverLocation).field0_0x0._s_0.X = (param_2->ReceiverLocation).field0_0x0._s_0.X;
    (param_1->ReceiverLocation).field0_0x0._s_0.Y = dVar1;
    (param_1->ReceiverLocation).field0_0x0._s_0.Z = (param_2->ReceiverLocation).field0_0x0._s_0.Z;
    param_1->Tag = param_2->Tag;
    (param_1->Type).Index = (param_2->Type).Index;
    (param_1->Type).Name = (param_2->Type).Name;
    uVar2 = (param_1->bWantsToNotifyOnlyOnValueChange ^ param_2->bWantsToNotifyOnlyOnValueChange) &
            1 ^ *(uint *)&param_1->field_0x54;
    *(uint *)&param_1->field_0x54 = uVar2;
    uVar2 = (uVar2 ^ *(uint *)&param_2->field_0x54) & 2 ^ uVar2;
    *(uint *)&param_1->field_0x54 = uVar2;
    *(uint *)&param_1->field_0x54 = (uVar2 ^ *(uint *)&param_2->field_0x54) & 4 ^ uVar2;
  }
  return false;
}

// ConfigureSense @ 146f9e720

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
UAIPerceptionComponent::ConfigureSense(UAIPerceptionComponent *this,UAISenseConfig *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  UWorld *pUVar8;
  UAIPerceptionSystem *this_00;
  FScriptContainerElement *pFVar9;
  float fVar10;
  undefined1 local_res8 [16];
  UObject *local_res18;
  UObject *local_res20;
  UAISenseConfig *local_88;
  UObject *local_80;
  UObject *local_78;
  FAINamedID<FAISenseCounter> local_70;
  FAINamedID<FAISenseCounter> local_60 [3];
  
  pTVar2 = &this->SensesConfig;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  iVar7 = (this->SensesConfig).ArrayNum;
  bVar5 = true;
  pFVar3 = pFVar9 + (longlong)iVar7 * 8;
  while( true ) {
    if ((this->SensesConfig).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UAISenseConfig>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    if ((*(longlong *)pFVar9 != 0) &&
       (*(longlong *)(*(longlong *)pFVar9 + 0x10) == param_1->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      *(UAISenseConfig **)pFVar9 = param_1;
      bVar5 = false;
LAB_146f9e876:
      if ((this->_padding_ & 1) != 0) {
        pUVar8 = (UWorld *)this->_padding_;
        if (pUVar8 == (UWorld *)0x0) {
          pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        this_00 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar8);
        if (this_00 != (UAIPerceptionSystem *)0x0) {
          if (bVar5) {
            RegisterSenseConfig(this,param_1,this_00);
          }
          else {
            fVar10 = param_1->MaxAge;
            if (param_1->MaxAge == 0.0) {
              fVar10 = __real_7f7fffff;
            }
            (**(code **)(param_1->_padding_ + 0x2b0))(param_1,&local_res18);
            local_res20 = local_res18;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res18 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res18);
            }
            UAISense::GetSenseID(&local_70,(TSubclassOf<UAISense>)&local_res20);
            SetMaxStimulusAge(this,&local_70,fVar10);
          }
          (**(code **)(param_1->_padding_ + 0x2b0))(param_1,&local_80);
          local_78 = local_80;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_80);
          }
          UAISense::GetSenseID(local_60,(TSubclassOf<UAISense>)&local_78);
          UAIPerceptionSystem::OnListenerConfigUpdated(this_00,local_60,this);
        }
      }
      return;
    }
    pFVar9 = pFVar9 + 8;
  }
  local_88 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAISenseConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)(this->SensesConfig).ArrayMax * 8))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->SensesConfig).ArrayNum;
  piVar1 = &(this->SensesConfig).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SensesConfig).ArrayNum = iVar7 + 1;
  *(UAISenseConfig **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_88;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UAISenseConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  goto LAB_146f9e876;
}

// DescribeSelfToGameplayDebugger @ 146fa2400

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
UAIPerceptionComponent::DescribeSelfToGameplayDebugger
          (UAIPerceptionComponent *this,FGameplayDebuggerCategory *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  double dVar7;
  float *pfVar8;
  UObject *pUVar9;
  UAISenseConfig *this_00;
  FGameplayDebuggerShape *pFVar10;
  ulonglong uVar11;
  float *pfVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  uint local_res20;
  FString local_158;
  FString local_148;
  float *local_138;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FGameplayDebuggerShape local_108;
  FString local_e0;
  TVector<double>_u_0 local_d0;
  FString local_b8;
  TVector<double>_u_0 local_a8 [4];
  
  if (param_1 != (FGameplayDebuggerCategory *)0x0) {
    GetPerceptualDataConstIterator(this,(TConstIterator *)&local_130);
    dVar7 = __real_403e000000000000;
    fVar6 = __real_41f00000;
    if (local_128.CurrentBitIndex < (local_128.Array)->NumBits) {
      do {
        lVar14 = (longlong)local_128.CurrentBitIndex * 0x38;
        lVar3 = *local_130;
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar3 + 8 + lVar14));
        if (pUVar9 != (UObject *)0x0) {
          lVar4 = *(longlong *)(pUVar9 + 0xb);
          local_a8[0]._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          local_a8[0]._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          local_a8[0]._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          local_a8[0]._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_a8[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (lVar4 != 0) {
            local_a8[0]._0_4_ = *(undefined4 *)(lVar4 + 0x210);
            local_a8[0]._4_4_ = *(undefined4 *)(lVar4 + 0x214);
            local_a8[0]._8_4_ = *(undefined4 *)(lVar4 + 0x218);
            local_a8[0]._12_4_ = *(undefined4 *)(lVar4 + 0x21c);
            local_a8[0]._16_8_ = *(double *)(lVar4 + 0x220);
          }
          local_res20 = *(uint *)(lVar14 + 0x18 + lVar3);
          uVar11 = (ulonglong)(int)local_res20;
          pfVar12 = *(float **)(lVar14 + 0x10 + lVar3);
          local_138 = pfVar12 + uVar11 * 0x16;
          while( true ) {
            pfVar8 = local_138;
            if (*(int *)(lVar14 + 0x18 + lVar3) != (int)uVar11) {
              `TCheckedPointerIterator<FAIStimulus_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (pfVar12 == pfVar8) break;
            this_00 = GetSenseConfig(this,(FAINamedID<FAISenseCounter> *)(pfVar12 + 0x12));
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) <
                 `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
              ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
              ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
              _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            if ((((*(FAINamedID<struct_FAISenseCounter> *)(pfVar12 + 0x12) !=
                   `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                   ::__l2::InvalidIDInstance) && (0.0 < pfVar12[2])) && (*pfVar12 < __real_7f7fffff)
                ) && ((((uint)pfVar12[0x15] >> 2 & 1) == 0 && (this_00 != (UAISenseConfig *)0x0))))
            {
              UAISenseConfig::GetSenseName(this_00,&local_b8);
              ::FString::PrintfImpl(&local_e0,L"%s: %.2f age:%.2f");
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              local_d0._s_0.X = (double)*(undefined8 *)(pfVar12 + 4);
              local_d0._s_0.Y = (double)*(undefined8 *)(pfVar12 + 6);
              local_res18[0] = (this_00->DebugColor).field0_0x0;
              local_d0._s_0.Z = *(double *)(pfVar12 + 8) + dVar7;
              pFVar10 = FGameplayDebuggerShape::MakePoint
                                  (&local_108,(TVector<double> *)&local_d0._s_0,fVar6,
                                   (FColor *)&local_res18[0]._s_0,&local_e0);
              FGameplayDebuggerCategory::AddShape(param_1,pFVar10);
              if (local_108.Description.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Description.Data.AllocatorInstance.Data);
              }
              if (local_108.ShapeData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.ShapeData.AllocatorInstance.Data);
              }
              local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_158.Data.ArrayNum = 0;
              local_158.Data.ArrayMax = 0;
              pFVar10 = FGameplayDebuggerShape::MakeSegment
                                  (&local_108,(TVector<double> *)(pfVar12 + 10),
                                   (TVector<double> *)(pfVar12 + 4),(FColor *)&local_res18[0]._s_0,
                                   &local_158);
              FGameplayDebuggerCategory::AddShape(param_1,pFVar10);
              if (local_108.Description.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Description.Data.AllocatorInstance.Data);
              }
              if (local_108.ShapeData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.ShapeData.AllocatorInstance.Data);
              }
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_148.Data.ArrayNum = 0;
              local_148.Data.ArrayMax = 0;
              pFVar10 = FGameplayDebuggerShape::MakeSegment
                                  (&local_108,(TVector<double> *)&local_a8[0]._s_0,
                                   (TVector<double> *)(pfVar12 + 4),&FColor::Black,&local_148);
              FGameplayDebuggerCategory::AddShape(param_1,pFVar10);
              if (local_108.Description.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Description.Data.AllocatorInstance.Data);
              }
              if (local_108.ShapeData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.ShapeData.AllocatorInstance.Data);
              }
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0.Data.AllocatorInstance.Data);
              }
            }
            pfVar12 = pfVar12 + 0x16;
            uVar11 = (ulonglong)local_res20;
          }
        }
        local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
      } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
    }
    pFVar13 = (this->SensesConfig).AllocatorInstance.Data;
    iVar2 = (this->SensesConfig).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->SensesConfig).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UAISenseConfig>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar1) break;
      plVar5 = *(longlong **)pFVar13;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x2b8))(plVar5,this,param_1);
      }
      pFVar13 = pFVar13 + 8;
    }
  }
  return;
}

// DescribeSelfToVisLog @ 146fa3fa0

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
UAIPerceptionComponent::DescribeSelfToVisLog(UAIPerceptionComponent *this,FVisualLogEntry *param_1)

{
  return;
}

// ForgetActor @ 146fab010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::ForgetActor(UAIPerceptionComponent *this,AActor *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FAIGenericID<FPerceptionListenerCounter> FVar6;
  uint uVar7;
  int iVar8;
  UWorld *pUVar9;
  UAIPerceptionSystem *pUVar10;
  undefined4 extraout_var;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_68;
  AActor *local_60;
  AActor *local_58;
  FReadAccessScope local_50;
  
  if (0 < *(int *)&(this->PerceptualData).field_0x8 - *(int *)&(this->PerceptualData).field_0x34) {
    pUVar9 = (UWorld *)this->_padding_;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pUVar10 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar9);
    puVar14 = (uint *)0x0;
    if ((pUVar10 != (UAIPerceptionSystem *)0x0) && (param_1 != (AActor *)0x0)) {
      uVar2 = (this->PerceptionListenerId).Index;
      FVar6 = FAIGenericID<FPerceptionListenerCounter>::InvalidID();
      if (uVar2 != *(uint *)CONCAT44(extraout_var,FVar6.Index)) {
        puVar13 = puVar14;
        if (*(int *)&(pUVar10->ListenerContainer).field_0x8 !=
            *(int *)&(pUVar10->ListenerContainer).field_0x34) {
          puVar11 = *(undefined1 **)&(pUVar10->ListenerContainer).field_0x40;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = &(pUVar10->ListenerContainer).field_0x38;
          }
          uVar7 = *(uint *)(puVar11 +
                           (ulonglong)
                           (*(int *)&(pUVar10->ListenerContainer).field_0x48 - 1U & uVar2) * 4);
          if (uVar7 != 0xffffffff) {
            do {
              puVar13 = (uint *)((longlong)(int)uVar7 * 0x60 +
                                *(longlong *)&pUVar10->ListenerContainer);
              if (*puVar13 == uVar2) {
                if (puVar13 != (uint *)0x0) goto LAB_146fab116;
                break;
              }
              uVar7 = puVar13[0x16];
              puVar13 = puVar14;
            } while (uVar7 != 0xffffffff);
          }
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146fab116:
        pFVar12 = (pUVar10->Senses).AllocatorInstance.Data;
        iVar8 = (pUVar10->Senses).ArrayNum;
        pFVar1 = pFVar12 + (longlong)iVar8 * 8;
        while( true ) {
          if ((pUVar10->Senses).ArrayNum != iVar8) {
            `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar12 == pFVar1) break;
          plVar3 = *(longlong **)pFVar12;
          if (((plVar3 != (longlong *)0x0) && ((*(uint *)((longlong)plVar3 + 0x2c) >> 2 & 1) != 0))
             && ((puVar13[4] >> (*(byte *)((longlong)plVar3 + 0x3c) & 0x1f) & 1) != 0)) {
            (**(code **)(*plVar3 + 0x2d0))(plVar3,puVar13 + 2,param_1);
          }
          pFVar12 = pFVar12 + 8;
        }
      }
    }
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    if (param_1 != (AActor *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_60 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_60);
      local_68 = local_res20;
    }
    iVar8 = TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
            ::Remove((TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
                      *)&this->PerceptualData,(TObjectKey<AActor> *)&local_68);
    if (0 < iVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnTargetPerceptionForgotten,&local_50);
      iVar8 = *(int *)&(this->OnTargetPerceptionForgotten).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      if (0 < iVar8) {
        local_58 = param_1;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnTargetPerceptionForgotten,&local_58);
      }
    }
  }
  return;
}

// ForgetAll @ 146fab270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::ForgetAll(UAIPerceptionComponent *this)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FAIGenericID<FPerceptionListenerCounter> FVar7;
  uint uVar8;
  UWorld *pUVar9;
  UAIPerceptionSystem *pUVar10;
  undefined4 extraout_var;
  UObject *pUVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  uint *puVar14;
  undefined1 local_res8 [16];
  UObject *local_res18 [2];
  FReadAccessScope local_78;
  longlong *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  
  if (0 < *(int *)&(this->PerceptualData).field_0x8 - *(int *)&(this->PerceptualData).field_0x34) {
    pUVar9 = (UWorld *)this->_padding_;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pUVar10 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar9);
    if (pUVar10 != (UAIPerceptionSystem *)0x0) {
      uVar2 = (this->PerceptionListenerId).Index;
      FVar7 = FAIGenericID<FPerceptionListenerCounter>::InvalidID();
      if (uVar2 != *(uint *)CONCAT44(extraout_var,FVar7.Index)) {
        if (*(int *)&(pUVar10->ListenerContainer).field_0x8 !=
            *(int *)&(pUVar10->ListenerContainer).field_0x34) {
          puVar12 = *(undefined1 **)&(pUVar10->ListenerContainer).field_0x40;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = &(pUVar10->ListenerContainer).field_0x38;
          }
          uVar8 = *(uint *)(puVar12 +
                           (ulonglong)
                           (*(int *)&(pUVar10->ListenerContainer).field_0x48 - 1U & uVar2) * 4);
          if (uVar8 != 0xffffffff) {
            do {
              puVar14 = (uint *)((longlong)(int)uVar8 * 0x60 +
                                *(longlong *)&pUVar10->ListenerContainer);
              if (*puVar14 == uVar2) {
                if (puVar14 == (uint *)0x0) goto LAB_146fab33f;
                goto LAB_146fab365;
              }
              uVar8 = puVar14[0x16];
            } while (uVar8 != 0xffffffff);
          }
        }
        puVar14 = (uint *)0x0;
LAB_146fab33f:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_146fab365:
        pFVar13 = (pUVar10->Senses).AllocatorInstance.Data;
        iVar3 = (pUVar10->Senses).ArrayNum;
        pFVar1 = pFVar13 + (longlong)iVar3 * 8;
        while( true ) {
          if ((pUVar10->Senses).ArrayNum != iVar3) {
            `TCheckedPointerIterator<TObjectPtr<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar13 == pFVar1) break;
          plVar4 = *(longlong **)pFVar13;
          if (((plVar4 != (longlong *)0x0) && ((*(uint *)((longlong)plVar4 + 0x2c) >> 2 & 1) != 0))
             && ((puVar14[4] >> (*(byte *)((longlong)plVar4 + 0x3c) & 0x1f) & 1) != 0)) {
            (**(code **)(*plVar4 + 0x2d8))(plVar4,puVar14 + 2);
          }
          pFVar13 = pFVar13 + 8;
        }
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnTargetPerceptionForgotten,&local_78);
    iVar3 = *(int *)&(this->OnTargetPerceptionForgotten).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    if ((0 < iVar3) &&
       (GetPerceptualDataConstIterator(this,(TConstIterator *)&local_60),
       local_58.CurrentBitIndex < (local_58.Array)->NumBits)) {
      do {
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      (*local_60 + 8 + (longlong)local_58.CurrentBitIndex * 0x38));
        if (pUVar11 != (UObject *)0x0) {
          local_res18[0] = pUVar11;
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &this->OnTargetPerceptionForgotten,local_res18);
        }
        local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
      } while (local_58.CurrentBitIndex < (local_58.Array)->NumBits);
    }
    TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
             *)&this->PerceptualData);
  }
  return;
}

// GetActorInfo @ 146fab6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FActorPerceptionInfo * __thiscall
UAIPerceptionComponent::GetActorInfo(UAIPerceptionComponent *this,AActor *param_1)

{
  FActorPerceptionInfo *pFVar1;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  pFVar1 = TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
           ::Find((TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
                   *)&this->PerceptualData,(TObjectKey<AActor> *)&local_res8);
  return pFVar1;
}

// GetActorLocation @ 146fab780

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
UAIPerceptionComponent::GetActorLocation
          (UAIPerceptionComponent *this,TVector<double> *__return_storage_ptr__,AActor *param_1)

{
  double dVar1;
  double dVar2;
  FActorPerceptionInfo *this_00;
  TVector<double>_u_0 *pTVar3;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  TVector<double>_u_0 local_38;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  this_00 = TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
            ::Find((TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
                    *)&this->PerceptualData,(TObjectKey<AActor> *)&local_res8);
  if (this_00 == (FActorPerceptionInfo *)0x0) {
    pTVar3 = &local_38;
    local_38._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
    local_38._s_0.Y = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
    local_38._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  }
  else {
    pTVar3 = &FActorPerceptionInfo::GetLastStimulusLocation
                        (this_00,(TVector<double> *)&local_38._s_0,(float *)0x0)->field0_0x0;
  }
  dVar2 = (pTVar3->_s_0).Y;
  dVar1 = (pTVar3->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetActorsPerception @ 146fab860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAIPerceptionComponent::GetActorsPerception
          (UAIPerceptionComponent *this,AActor *param_1,FActorPerceptionBlueprintInfo *param_2)

{
  TArray<FAIStimulus,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FActorPerceptionInfo *this_00;
  AActor *pAVar3;
  uint uVar4;
  TArray<FAIStimulus,TSizedDefaultAllocator<32>_> local_20;
  uint local_10;
  
  if (((param_1 != (AActor *)0x0) && (param_1->bActorIsBeingDestroyed == '\0')) &&
     (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    this_00 = GetActorInfo(this,param_1);
    if (this_00 == (FActorPerceptionInfo *)0x0) {
      return false;
    }
    local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20.ArrayNum = 0;
    local_20.ArrayMax = 0;
    pAVar3 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    TArray<FAIStimulus,TSizedDefaultAllocator<32>_>::operator=
              (&local_20,&this_00->LastSensedStimuli);
    local_10 = *(uint *)&this_00->field_0x24 & 3 | local_10 & 0xfffffffc;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    (param_2->Target).field0_0x0.DebugPtr = pAVar3;
    pTVar1 = &param_2->LastSensedStimuli;
    if (pTVar1 != &local_20) {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar1->AllocatorInstance).Data = local_20.AllocatorInstance.Data;
      (param_2->LastSensedStimuli).ArrayNum = local_20.ArrayNum;
      (param_2->LastSensedStimuli).ArrayMax = local_20.ArrayMax;
      local_20.ArrayNum = 0;
      local_20.ArrayMax = 0;
      local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    uVar4 = (param_2->bIsHostile ^ local_10) & 1 ^ *(uint *)&param_2->field_0x18;
    *(uint *)&param_2->field_0x18 = (uVar4 ^ local_10) & 2 ^ uVar4;
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// GetBodyActor @ 146fac090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall UAIPerceptionComponent::GetBodyActor(UAIPerceptionComponent *this)

{
  int iVar1;
  longlong lVar2;
  AActor *pAVar3;
  UClass *pUVar4;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pAVar3 = *(AActor **)(lVar2 + 0x310);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return pAVar3;
      }
      if (pAVar3 == (AActor *)0x0) {
        return (AActor *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)pAVar3);
      return pAVar3;
    }
  }
  pAVar3 = (AActor *)this->_padding_;
  if (pAVar3 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pAVar3;
    }
  }
  return (AActor *)0x0;
}

// GetCurrentlyPerceivedActors @ 146fad8d0

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
UAIPerceptionComponent::GetCurrentlyPerceivedActors
          (UAIPerceptionComponent *this,TSubclassOf<UAISense> param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  FAIStimulus *this_00;
  float *pfVar9;
  longlong *plVar10;
  float *pfVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 local_res8 [8];
  TObjectPtr<UClass>_u_0 local_res10;
  UObject *local_res20;
  UObject *local_98;
  FAINamedID<FAISenseCounter> local_90;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78 [2];
  
  local_res20 = *(UObject **)param_1.Class.field0_0x0;
  local_res10 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  UAISense::GetSenseID(&local_90,(TSubclassOf<UAISense>)&local_res20);
  uVar14 = *(int *)&(this->PerceptualData).field_0x8 - *(int *)&(this->PerceptualData).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (param_2->ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar14,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
  }
  GetPerceptualDataConstIterator(this,(TConstIterator *)&local_80);
  fVar16 = __real_7f7fffff;
  if (local_78[0].CurrentBitIndex < (local_78[0].Array)->NumBits) {
    do {
      iVar7 = local_78[0].CurrentBitIndex;
      lVar2 = ((UClass *)param_1.Class.field0_0x0)->_padding_;
      if ((lVar2 == 0) ||
         (pUVar8 = UAISense::StaticClass(), plVar10 = local_80, fVar16 = __real_7f7fffff,
         pUVar8 == (UClass *)0x0)) {
LAB_146fada5c:
        pvVar5 = ThreadLocalStoragePointer;
        uVar15 = (ulonglong)_tls_index;
        lVar2 = *local_80;
        lVar13 = (longlong)iVar7 * 0x38;
        iVar7 = *(int *)(lVar13 + 0x18 + lVar2);
        pfVar9 = *(float **)(lVar13 + 0x10 + lVar2);
        pfVar11 = pfVar9 + (longlong)iVar7 * 0x16;
        while( true ) {
          if (*(int *)(lVar13 + 0x18 + lVar2) != iVar7) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FAIStimulus_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
            fVar16 = __real_7f7fffff;
          }
          if (pfVar9 == pfVar11) {
            bVar6 = false;
            plVar10 = local_80;
            param_1.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_res10;
            iVar7 = local_78[0].CurrentBitIndex;
            goto LAB_146fadb2e;
          }
          if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar15 * 8) + 0x9d4c) <
               `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                   ::__l2::_thread_safe_static_guard_0__), fVar16 = __real_7f7fffff,
             `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
            ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
            _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
            fVar16 = __real_7f7fffff;
          }
          if ((((*(FAINamedID<struct_FAISenseCounter> *)(pfVar9 + 0x12) !=
                 `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                 ::__l2::InvalidIDInstance) && (0.0 < pfVar9[2])) && (*pfVar9 < fVar16)) &&
             ((((uint)pfVar9[0x15] >> 1 & 1) != 0 && (((uint)pfVar9[0x15] >> 2 & 1) == 0)))) break;
          pfVar9 = pfVar9 + 0x16;
        }
        bVar6 = true;
        plVar10 = local_80;
        param_1.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_res10;
        iVar7 = local_78[0].CurrentBitIndex;
      }
      else {
        iVar1 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((!bVar6) || (((UClass *)param_1.Class.field0_0x0)->_padding_ == 0)) goto LAB_146fada5c;
        if ((((int)(uint)local_90.Index < *(int *)((longlong)iVar7 * 0x38 + 0x18 + *local_80)) &&
            (this_00 = (FAIStimulus *)
                       ((ulonglong)local_90.Index * 0x58 +
                       *(longlong *)((longlong)iVar7 * 0x38 + 0x10 + *local_80)),
            this_00->bSuccessfullySensed != 0)) && (bVar6 = FAIStimulus::IsValid(this_00), bVar6)) {
          bVar6 = true;
          fVar16 = __real_7f7fffff;
        }
        else {
          bVar6 = false;
          fVar16 = __real_7f7fffff;
        }
      }
LAB_146fadb2e:
      piVar12 = &param_2->ArrayMax;
      if ((bVar6) &&
         (local_98 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)iVar7 * 0x38 + *plVar10 + 8)),
         fVar16 = __real_7f7fffff, local_98 != (UObject *)0x0)) {
        pFVar3 = (param_2->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
           (((FScriptContainerElement *)&local_98 < pFVar3 + (longlong)*piVar12 * 8 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar12) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar12);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_98;
        fVar16 = __real_7f7fffff;
      }
      local_78[0].UnvisitedBitMask = local_78[0].UnvisitedBitMask & ~local_78[0]._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_78);
    } while (local_78[0].CurrentBitIndex < (local_78[0].Array)->NumBits);
  }
  return;
}

// GetFilteredActors @ 146fb0670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAIPerceptionComponent::GetFilteredActors
          (UAIPerceptionComponent *this,
          TFunctionRef<bool___cdecl(FActorPerceptionInfo_const_&)> *param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  UObject *local_38;
  longlong *local_30;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_28;
  
  bVar8 = false;
  uVar10 = *(int *)&(this->PerceptualData).field_0x8 - *(int *)&(this->PerceptualData).field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  GetPerceptualDataConstIterator(this,(TConstIterator *)&local_30);
  bVar5 = false;
  if (local_28.CurrentBitIndex < (local_28.Array)->NumBits) {
    do {
      lVar9 = (longlong)local_28.CurrentBitIndex * 0x38 + *local_30;
      cVar4 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar9 + 8);
      bVar8 = bVar5;
      if (cVar4 != '\0') {
        local_38 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar9 + 8));
        if (local_38 == (UObject *)0x0) {
          bVar8 = true;
        }
        else {
          pFVar2 = (param_2->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
             ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)*piVar1 * 8)) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          iVar7 = param_2->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar7 + 1;
          *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38;
        }
      }
      local_28.UnvisitedBitMask = local_28.UnvisitedBitMask & ~local_28._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_28);
      bVar5 = bVar8;
    } while (local_28.CurrentBitIndex < (local_28.Array)->NumBits);
  }
  return bVar8;
}

// GetFreshestTrace @ 146fb09f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FActorPerceptionInfo * __thiscall
UAIPerceptionComponent::GetFreshestTrace
          (UAIPerceptionComponent *this,FAINamedID<FAISenseCounter> *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FActorPerceptionInfo *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
  FVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  UAIPerceptionComponent *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FDelegateAllocation local_110;
  FName local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
  local_e8;
  FConstructor local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  
  fVar15 = __real_7f7fffff;
  pFVar7 = (FActorPerceptionInfo *)0x0;
  bVar5 = false;
  GetPerceptualDataConstIterator(this,(TConstIterator *)&local_d0);
  if (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits) {
    do {
      bVar3 = param_1->Index;
      lVar13 = (longlong)local_c8.CurrentBitIndex * 0x38 + *local_d0;
      if ((*(int *)(lVar13 + 0x18) <= (int)(uint)bVar3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FActorPerceptionInfo *)(*pcVar4)();
        return pFVar7;
      }
      lVar12 = (ulonglong)bVar3 * 0x58;
      fVar14 = __real_7f7fffff;
      if (0.0 < *(float *)(lVar12 + 8 + *(longlong *)(lVar13 + 0x10))) {
        fVar14 = *(float *)(lVar12 + *(longlong *)(lVar13 + 0x10));
      }
      if (fVar14 < fVar15) {
        bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar13 + 8));
        if (bVar6) {
          pFVar7 = (FActorPerceptionInfo *)(lVar13 + 8);
          fVar15 = fVar14;
          if (fVar14 == 0.0) break;
        }
        else {
          bVar5 = true;
        }
      }
      local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
    } while (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits);
    if (bVar5) {
      FVar9 = StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData;
      if (StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData ==
          (FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
           )0x0) {
        pFVar8 = ::FName::FName(&local_f8,
                                "STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData"
                               );
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &
                             StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData
                             ,*pFVar8,
                             L"Requesting UAIPerceptionComponent::RemoveDeadData call from within a const function"
                             ,"STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true
                             ,true,ST_int64,true,false,MCR_Invalid);
      }
      local_f8 = (FName)RemoveDeadData;
      uStack_f0 = 0;
      local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_110.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_118,(FWriteAccessScope *)&local_90);
      local_78 = &local_110;
      puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_110);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UAIPerceptionComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar10[3] = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UAIPerceptionComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
        *(FName *)(puVar10 + 4) = local_f8;
        puVar10[5] = CONCAT44(uStack_ec,uStack_f0);
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      local_e0.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      local_e8 = FVar9;
      TGraphTask<FSimpleDelegateGraphTask>::FConstructor::
      ConstructAndDispatchWhenReady<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TStatId_const_&,enum_ENamedThreads::Type_&>
                (&local_e0,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_d8,
                 (TStatId *)&local_118,(Type *)&local_e8);
      if (local_d8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_d8 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_d8)(local_d8,1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_118,(FWriteAccessScope *)&local_a8);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_110,0,0,0x10);
        local_110.DelegateSize = 0;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_110.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
    }
  }
  return pFVar7;
}

// GetHostileActors @ 146fb1570

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
UAIPerceptionComponent::GetHostileActors
          (UAIPerceptionComponent *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
  FVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName local_res18;
  FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
  local_res20;
  FConstructor local_98 [2];
  FDestructionSentinel local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_88.Accessor = (FMRSWRecursiveAccessDetector *)&local_res18;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UAIPerceptionComponent::GetHostileActors'::__l2::<lambda_1>,bool,FActorPerceptionInfo_const_&>
       ::Call;
  bVar3 = GetFilteredActors(this,(TFunctionRef<bool___cdecl(FActorPerceptionInfo_const_&)> *)
                                 &local_88,param_1);
  if (bVar3) {
    FVar5 = StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData;
    if (StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData ==
        (FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
         )0x0) {
      pFVar4 = ::FName::FName(&local_res18,
                              "STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData")
      ;
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &
                           StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData
                           ,*pFVar4,
                           L"Requesting UAIPerceptionComponent::RemoveDeadData call from within a const function"
                           ,"STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                           true,ST_int64,true,false,MCR_Invalid);
    }
    local_88._0_8_ = RemoveDeadData;
    local_88.Accessor =
         (FMRSWRecursiveAccessDetector *)((ulonglong)local_88.Accessor & 0xffffffff00000000);
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UAIPerceptionComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res18 = (FName)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UAIPerceptionComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
      puVar6[4] = local_88._0_8_;
      puVar6[5] = local_88.Accessor;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    local_res18.ComparisonIndex.Value = 1;
    local_98[0].Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_res20 = FVar5;
    TGraphTask<FSimpleDelegateGraphTask>::FConstructor::
    ConstructAndDispatchWhenReady<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TStatId_const_&,enum_ENamedThreads::Type_&>
              (local_98,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_88,
               (TStatId *)&local_68,(Type *)&local_res20);
    if ((code *)local_88._0_8_ != (code *)0x0) {
      LOCK();
      pcVar1 = (code *)(local_88._0_8_ + 0x30);
      iVar2 = *(int *)pcVar1;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_88._0_8_)(local_88._0_8_,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  return;
}

// GetHostileActorsBySense @ 146fb17f0

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
UAIPerceptionComponent::GetHostileActorsBySense
          (UAIPerceptionComponent *this,TSubclassOf<UAISense> param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
  FVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName local_res10 [2];
  FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
  local_res20;
  undefined1 local_98 [4];
  FNameEntryId FStack_94;
  FConstructor *pFStack_90;
  bool local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FConstructor local_60 [2];
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res10[0] = *(FName *)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  UAISense::GetSenseID((FAINamedID<FAISenseCounter> *)local_98,(TSubclassOf<UAISense>)local_res10);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (local_98[0] ==
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogAIPerception.field_0x4,Warning,
                 L"UAIPerceptionComponent::GetHostileActorsBySense called with an invalid or yet unregistered sense. Bailing out."
                );
      return;
    }
  }
  else {
    local_60[0].Prerequisites._0_4_ = CONCAT31(local_60[0].Prerequisites._1_3_,local_98[0]);
    pFStack_90 = local_60;
    local_98 = (undefined1  [4])0x46f9bfd0;
    FStack_94.Value = 1;
    bVar3 = GetFilteredActors(this,(TFunctionRef<bool___cdecl(FActorPerceptionInfo_const_&)> *)
                                   local_98,param_2);
    if (bVar3) {
      FVar5 = StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData;
      if (StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData ==
          (FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
           )0x0) {
        pFVar4 = ::FName::FName(local_res10,
                                "STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData"
                               );
        FVar5 = (FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &
                             StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData
                             ,*pFVar4,
                             L"Requesting UAIPerceptionComponent::RemoveDeadData call from within a const function"
                             ,"STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true
                             ,true,ST_int64,true,false,MCR_Invalid);
      }
      local_98 = (undefined1  [4])0x46fcbf80;
      FStack_94.Value = 1;
      pFStack_90._0_4_ = 0;
      local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_50);
      local_38 = &local_70;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_70);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIPerceptionComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UAIPerceptionComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_res10[0] = (FName)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UAIPerceptionComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)local_res10);
        puVar6[4] = CONCAT44(FStack_94.Value,local_98);
        puVar6[5] = CONCAT44(pFStack_90._4_4_,(uint)pFStack_90);
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      local_res10[0].ComparisonIndex.Value = 1;
      local_60[0].Prerequisites._0_4_ = 0;
      local_60[0].Prerequisites._4_4_ = 0;
      local_res20 = FVar5;
      TGraphTask<FSimpleDelegateGraphTask>::FConstructor::
      ConstructAndDispatchWhenReady<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TStatId_const_&,enum_ENamedThreads::Type_&>
                (local_60,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_98,
                 (TStatId *)&local_78,(Type *)&local_res20);
      puVar6 = (undefined8 *)CONCAT44(FStack_94.Value,local_98);
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar6 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)local_98);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_88 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(pFStack_90._4_4_,(uint)pFStack_90),
                   (FDestructionSentinel *)local_98);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    }
  }
  return;
}

// GetKnownPerceivedActors @ 146fb1b50

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
UAIPerceptionComponent::GetKnownPerceivedActors
          (UAIPerceptionComponent *this,TSubclassOf<UAISense> param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  void *pvVar4;
  uchar uVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  float *pfVar16;
  float fVar17;
  undefined1 local_res8 [8];
  TObjectPtr<UClass>_u_0 local_res10;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_res18;
  UObject *local_res20;
  UObject *local_b8;
  int *local_b0;
  FAINamedID<FAISenseCounter> local_a8;
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90 [2];
  
  local_res20 = *(UObject **)param_1.Class.field0_0x0;
  local_res10 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  local_res18 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  UAISense::GetSenseID(&local_a8,(TSubclassOf<UAISense>)&local_res20);
  uVar14 = *(int *)&(this->PerceptualData).field_0x8 - *(int *)&(this->PerceptualData).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar15 = &param_2->ArrayMax;
  local_b0 = piVar15;
  if (*piVar15 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar14,&param_2->AllocatorInstance,param_2->ArrayNum,piVar15);
  }
  GetPerceptualDataConstIterator(this,(TConstIterator *)&local_98);
  fVar17 = __real_7f7fffff;
  if (local_90[0].CurrentBitIndex < (local_90[0].Array)->NumBits) {
    do {
      iVar8 = local_90[0].CurrentBitIndex;
      lVar10 = ((UClass *)param_1.Class.field0_0x0)->_padding_;
      if ((lVar10 == 0) ||
         (pUVar9 = UAISense::StaticClass(), uVar5 = local_a8.Index, fVar17 = __real_7f7fffff,
         pUVar9 == (UClass *)0x0)) {
LAB_146fb1d1c:
        pvVar4 = ThreadLocalStoragePointer;
        uVar13 = (ulonglong)_tls_index;
        lVar10 = *local_98;
        lVar11 = (longlong)iVar8 * 0x38;
        iVar8 = *(int *)(lVar11 + 0x18 + lVar10);
        pfVar12 = *(float **)(lVar11 + 0x10 + lVar10);
        pfVar16 = pfVar12 + (longlong)iVar8 * 0x16;
        while( true ) {
          if (*(int *)(lVar11 + 0x18 + lVar10) != iVar8) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FAIStimulus_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
            fVar17 = __real_7f7fffff;
          }
          if (pfVar12 == pfVar16) {
            bVar7 = false;
            param_2 = local_res18;
            piVar15 = local_b0;
            goto LAB_146fb1dd6;
          }
          if ((*(int *)(*(longlong *)((longlong)pvVar4 + uVar13 * 8) + 0x9d4c) <
               `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                   ::__l2::_thread_safe_static_guard_0__), fVar17 = __real_7f7fffff,
             `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
            ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
            _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
            fVar17 = __real_7f7fffff;
          }
          if ((((*(FAINamedID<struct_FAISenseCounter> *)(pfVar12 + 0x12) !=
                 `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                 ::__l2::InvalidIDInstance) && (0.0 < pfVar12[2])) && (*pfVar12 < fVar17)) &&
             ((((uint)pfVar12[0x15] >> 1 & 1) != 0 || (((uint)pfVar12[0x15] >> 2 & 1) == 0))))
          break;
          pfVar12 = pfVar12 + 0x16;
        }
        bVar7 = true;
        param_2 = local_res18;
        piVar15 = local_b0;
      }
      else {
        iVar1 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar9->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((!bVar7) || (((UClass *)param_1.Class.field0_0x0)->_padding_ == 0)) goto LAB_146fb1d1c;
        lVar11 = (longlong)iVar8 * 0x38;
        lVar10 = *local_98;
        uVar13 = (ulonglong)local_a8.Index;
        if ((int)(uint)local_a8.Index < *(int *)(lVar11 + 0x18 + lVar10)) {
          bVar7 = FAIStimulus::IsValid
                            ((FAIStimulus *)(*(longlong *)(lVar11 + 0x10 + lVar10) + uVar13 * 0x58))
          ;
          if (!bVar7) goto LAB_146fb1d05;
          if ((*(int *)(lVar11 + 0x18 + lVar10) <= (int)(uint)uVar5) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((*(uint *)(uVar13 * 0x58 + 0x54 + *(longlong *)(lVar11 + 0x10 + lVar10)) >> 2 & 1) !=
              0) goto LAB_146fb1d05;
          bVar7 = true;
          fVar17 = __real_7f7fffff;
        }
        else {
LAB_146fb1d05:
          bVar7 = false;
          fVar17 = __real_7f7fffff;
        }
      }
LAB_146fb1dd6:
      plVar6 = local_98;
      if (bVar7) {
        lVar10 = (longlong)local_90[0].CurrentBitIndex;
        bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_98 + 8 + lVar10 * 0x38));
        fVar17 = __real_7f7fffff;
        if (bVar7) {
          local_b8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + 8 + lVar10 * 0x38));
          pFVar2 = (param_2->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
              ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*piVar15 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = param_2->ArrayNum;
          if (iVar8 == *piVar15) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar15);
          }
          param_2->ArrayNum = iVar8 + 1;
          *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_b8;
          fVar17 = __real_7f7fffff;
        }
      }
      local_90[0].UnvisitedBitMask = local_90[0].UnvisitedBitMask & ~local_90[0]._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_90);
      param_1.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_res10;
    } while (local_90[0].CurrentBitIndex < (local_90[0].Array)->NumBits);
  }
  return;
}

// GetLocationAndDirection @ 146fb2230

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
UAIPerceptionComponent::GetLocationAndDirection
          (UAIPerceptionComponent *this,TVector<double> *param_1,TVector<double> *param_2)

{
  int iVar1;
  double dVar2;
  UClass *pUVar3;
  TVector<double> *pTVar4;
  longlong *plVar5;
  TRotator<double> local_38;
  TVector<double> local_20;
  
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar5[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146fb2274;
  }
  plVar5 = (longlong *)0x0;
LAB_146fb2274:
  if (plVar5 != (longlong *)0x0) {
    local_38.Roll = 0.0;
    local_38.Pitch = 0.0;
    local_38.Yaw = 0.0;
    (**(code **)(*plVar5 + 0x720))(plVar5,param_1,&local_38);
    pTVar4 = UE::Math::TRotator<double>::Vector(&local_38,&local_20);
    dVar2 = (pTVar4->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar2;
    (param_2->field0_0x0)._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  }
  return;
}

// GetMutableBodyActor @ 146fb27d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall UAIPerceptionComponent::GetMutableBodyActor(UAIPerceptionComponent *this)

{
  int iVar1;
  longlong lVar2;
  AActor *pAVar3;
  UClass *pUVar4;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pAVar3 = *(AActor **)(lVar2 + 0x310);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return pAVar3;
      }
      if (pAVar3 == (AActor *)0x0) {
        return (AActor *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)pAVar3);
      return pAVar3;
    }
  }
  pAVar3 = (AActor *)this->_padding_;
  if (pAVar3 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pAVar3;
    }
  }
  return (AActor *)0x0;
}

// GetPerceivedHostileActors @ 146fb3270

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
UAIPerceptionComponent::GetPerceivedHostileActors
          (UAIPerceptionComponent *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146fb3273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4f8))();
  return;
}

// GetPerceivedHostileActorsBySense @ 146fb3280

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
UAIPerceptionComponent::GetPerceivedHostileActorsBySense
          (UAIPerceptionComponent *this,TSubclassOf<UAISense> param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UObject *local_res10 [3];
  
  local_res10[0] = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  GetHostileActorsBySense(this,(TSubclassOf<UAISense>)local_res10,param_2);
  return;
}

// GetPerceptualDataConstIterator @ 146fb32d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TConstIterator * __thiscall
UAIPerceptionComponent::GetPerceptualDataConstIterator
          (UAIPerceptionComponent *this,TConstIterator *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(this->PerceptualData).field_0x28;
  puVar1 = &(this->PerceptualData).field_0x10;
  iVar7 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(this->PerceptualData).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar7;
      iVar9 = iVar9 + 0x20;
      iVar7 = iVar7 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_146fb3366;
      uVar4 = puVar10[lVar8 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (int)lVar8 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_146fb3366:
  *(TMap<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
    **)__return_storage_ptr__ = &this->PerceptualData;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar5,iVar7);
  *(undefined1 **)&__return_storage_ptr__->field_0x10 = puVar1;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)&__return_storage_ptr__->field_0x20 = CONCAT44(iVar6,iVar9);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146fb3610

UClass * __cdecl UAIPerceptionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionComponent",
               &Z_Registration_Info_UClass_UAIPerceptionComponent.InnerSingleton,
               StaticRegisterNativesUAIPerceptionComponent,0x1d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAIPerceptionComponent>,
               InternalVTableHelperCtorCaller<UAIPerceptionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionComponent.InnerSingleton;
}

// GetSenseConfig @ 146fb4840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAISenseConfig * __thiscall
UAIPerceptionComponent::GetSenseConfig
          (UAIPerceptionComponent *this,FAINamedID<FAISenseCounter> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  UAISenseConfig *pUVar5;
  FConfigOfSenseID local_18;
  
  local_18.SenseID.Index = param_1->Index;
  local_18.SenseID.Name = param_1->Name;
  uVar3 = TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_>::
          IndexOfByPredicate<_anonymous_namespace_::FConfigOfSenseID>(&this->SensesConfig,&local_18)
  ;
  pUVar5 = (UAISenseConfig *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->SensesConfig).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UAISenseConfig *)(*pcVar1)();
      return pUVar5;
    }
    pUVar5 = *(UAISenseConfig **)
              ((this->SensesConfig).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UAISenseConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  return pUVar5;
}

// GetSenseConfig @ 146fb48f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAISenseConfig * __thiscall
UAIPerceptionComponent::GetSenseConfig
          (UAIPerceptionComponent *this,FAINamedID<FAISenseCounter> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  UAISenseConfig *pUVar5;
  FConfigOfSenseID local_18;
  
  local_18.SenseID.Index = param_1->Index;
  local_18.SenseID.Name = param_1->Name;
  uVar3 = TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_>::
          IndexOfByPredicate<_anonymous_namespace_::FConfigOfSenseID>(&this->SensesConfig,&local_18)
  ;
  pUVar5 = (UAISenseConfig *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->SensesConfig).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UAISenseConfig *)(*pcVar1)();
      return pUVar5;
    }
    pUVar5 = *(UAISenseConfig **)
              ((this->SensesConfig).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UAISenseConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  return pUVar5;
}

// GetSensesConfigIterator @ 146fb5020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TIndexedContainerIterator<TArray<UAISenseConfig_*,TSizedDefaultAllocator<32>_>_const_,UAISenseConfig_*_const,int>
* __thiscall
UAIPerceptionComponent::GetSensesConfigIterator
          (UAIPerceptionComponent *this,
          TIndexedContainerIterator<TArray<UAISenseConfig_*,TSizedDefaultAllocator<32>_>_const_,UAISenseConfig_*_const,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container =
       (TArray<UAISenseConfig_*,TSizedDefaultAllocator<32>_> *)&this->SensesConfig;
  return __return_storage_ptr__;
}

// GetTeamIdentifier @ 146fb5ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGenericTeamId __thiscall UAIPerceptionComponent::GetTeamIdentifier(UAIPerceptionComponent *this)

{
  AActor *in_RDX;
  
  FGenericTeamId::GetTeamIdentifier(in_RDX);
  return (FGenericTeamId)(uchar)in_RDX;
}

// GetYoungestStimulusAge @ 146fb5e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UAIPerceptionComponent::GetYoungestStimulusAge(UAIPerceptionComponent *this,AActor *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FActorPerceptionInfo *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  AActor *local_res18 [2];
  
  uVar7 = 0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10 = local_res8;
  }
  pFVar5 = TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
           ::Find((TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
                   *)&this->PerceptualData,(TObjectKey<AActor> *)&local_res10);
  fVar9 = __real_7f7fffff;
  if ((pFVar5 != (FActorPerceptionInfo *)0x0) &&
     (uVar8 = uVar7, fVar10 = __real_7f7fffff, fVar11 = __real_7f7fffff,
     0 < (pFVar5->LastSensedStimuli).ArrayNum)) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < (pFVar5->LastSensedStimuli).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         fVar10 = __real_7f7fffff, bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
      fVar9 = fVar11;
      if ((*(uint *)((pFVar5->LastSensedStimuli).AllocatorInstance.Data + uVar8 + 0x54) >> 1 & 1) !=
          0) {
        uVar4 = 0;
        if ((int)uVar6 < (pFVar5->LastSensedStimuli).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , fVar10 = __real_7f7fffff, bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar9 = (float)(*pcVar2)();
          return fVar9;
        }
        pFVar1 = (pFVar5->LastSensedStimuli).AllocatorInstance.Data;
        fVar9 = fVar10;
        if (0.0 < *(float *)(pFVar1 + uVar8 + 8)) {
          fVar9 = *(float *)(pFVar1 + uVar8);
        }
        if (fVar11 <= fVar9) {
          fVar9 = fVar11;
        }
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x58;
      fVar11 = fVar9;
    } while ((int)(uVar6 + 1) < (pFVar5->LastSensedStimuli).ArrayNum);
  }
  return fVar9;
}

// HandleExpiredStimulus @ 146fb6030

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
UAIPerceptionComponent::HandleExpiredStimulus(UAIPerceptionComponent *this,FAIStimulus *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->bExpired == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4412167538939526521>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionComponent.cpp"
                       ,0x287,"StimulusStore.IsExpired() == true");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// HasActiveStimulus @ 146fb6640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAIPerceptionComponent::HasActiveStimulus
          (UAIPerceptionComponent *this,AActor *param_1,FAINamedID<FAISenseCounter> *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FActorPerceptionInfo *pFVar6;
  longlong lVar7;
  float fVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  AActor *local_res20;
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_res10 = local_res8;
  }
  pFVar6 = TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
           ::Find((TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
                   *)&this->PerceptualData,(TObjectKey<AActor> *)&local_res10);
  if (pFVar6 != (FActorPerceptionInfo *)0x0) {
    bVar1 = param_2->Index;
    if ((int)(uint)bVar1 < (pFVar6->LastSensedStimuli).ArrayNum) {
      if (((pFVar6->LastSensedStimuli).ArrayNum <= (int)(uint)bVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((*(uint *)((pFVar6->LastSensedStimuli).AllocatorInstance.Data +
                    (ulonglong)bVar1 * 0x58 + 0x54) >> 1 & 1) != 0) {
        bVar1 = param_2->Index;
        if (((pFVar6->LastSensedStimuli).ArrayNum <= (int)(uint)bVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (pFVar6->LastSensedStimuli).AllocatorInstance.Data;
        lVar7 = (ulonglong)bVar1 * 0x58;
        if ((0.0 < *(float *)(pFVar2 + lVar7 + 8)) && (*(float *)(pFVar2 + lVar7) < __real_7f7fffff)
           ) {
          bVar1 = param_2->Index;
          if (((pFVar6->LastSensedStimuli).ArrayNum <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (pFVar6->LastSensedStimuli).AllocatorInstance.Data;
          lVar7 = (ulonglong)bVar1 * 0x58;
          fVar8 = __real_7f7fffff;
          if (0.0 < *(float *)(pFVar2 + lVar7 + 8)) {
            fVar8 = *(float *)(pFVar2 + lVar7);
          }
          bVar1 = param_2->Index;
          if (((this->MaxActiveAge).ArrayNum <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (this->MaxActiveAge).AllocatorInstance.Data + (ulonglong)bVar1 * 4;
          if (*(float *)pFVar2 <= fVar8 && fVar8 != *(float *)pFVar2) {
            bVar1 = param_2->Index;
            if (((this->MaxActiveAge).ArrayNum <= (int)(uint)bVar1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (*(float *)((this->MaxActiveAge).AllocatorInstance.Data + (ulonglong)bVar1 * 4) !=
                0.0) {
              return false;
            }
          }
          return true;
        }
      }
    }
  }
  return false;
}

// HasAnyActiveStimulus @ 146fb68c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAIPerceptionComponent::HasAnyActiveStimulus(UAIPerceptionComponent *this,AActor *param_1)

{
  bool bVar1;
  FActorPerceptionInfo *this_00;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  this_00 = TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
            ::Find((TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
                    *)&this->PerceptualData,(TObjectKey<AActor> *)&local_res8);
  if (this_00 == (FActorPerceptionInfo *)0x0) {
    return false;
  }
  bVar1 = FActorPerceptionInfo::HasAnyKnownStimulus(this_00);
  return bVar1;
}

// HasAnyCurrentStimulus @ 146fb6aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAIPerceptionComponent::HasAnyCurrentStimulus(UAIPerceptionComponent *this,AActor *param_1)

{
  bool bVar1;
  FActorPerceptionInfo *this_00;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  this_00 = TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
            ::Find((TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
                    *)&this->PerceptualData,(TObjectKey<AActor> *)&local_res8);
  if (this_00 == (FActorPerceptionInfo *)0x0) {
    return false;
  }
  bVar1 = FActorPerceptionInfo::HasAnyCurrentStimulus(this_00);
  return bVar1;
}

// IsSenseEnabled @ 146fb9fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAIPerceptionComponent::IsSenseEnabled(UAIPerceptionComponent *this,TSubclassOf<UAISense> param_1)

{
  UAISenseConfig *pUVar1;
  UObject *local_res10 [3];
  FAINamedID<FAISenseCounter> local_18;
  
  local_res10[0] = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  UAISense::GetSenseID(&local_18,(TSubclassOf<UAISense>)local_res10);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((uint)local_18.Index !=
      (uint)(byte)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                  ::__l2::InvalidIDInstance) {
    pUVar1 = GetSenseConfig(this,&local_18);
    if (pUVar1 != (UAISenseConfig *)0x0) {
      return ((uint)(this->PerceptionFilter).AcceptedChannelsMask >> (local_18.Index & 0x1f) & 1) !=
             0;
    }
  }
  return false;
}

// OnOwnerEndPlay @ 146fbff10

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
UAIPerceptionComponent::OnOwnerEndPlay(UAIPerceptionComponent *this,AActor *param_1,Type param_2)

{
  if ((param_2 - EndPlayInEditor & 0xfffffffd) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146fbff1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x510))();
    return;
  }
  return;
}

// OnRegister @ 146fc1860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::OnRegister(UAIPerceptionComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  AAIController *this_00;
  UAISenseConfig *pUVar3;
  UAIPerceptionComponent *pUVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  char *pcVar9;
  UObject *this_01;
  UFunction *pUVar10;
  UWorld *pUVar11;
  UAIPerceptionSystem *this_02;
  UClass *pUVar12;
  AAIController *this_03;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_368 [32];
  undefined1 local_338 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_330;
  FWeakObjectPtr local_328;
  FName local_320;
  undefined8 local_318;
  FName local_310;
  FName local_308;
  UAIPerceptionComponent *local_300;
  FName *local_2f8;
  FName local_2f0;
  FName local_2e8;
  FString local_2e0;
  FString local_2d0;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_2c0;
  FReadAccessScope local_2a8;
  FReadAccessScope local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  UActorComponent::OnRegister((UActorComponent *)this);
  this->bCleanedUp = 0;
  this_00 = (AAIController *)this->_padding_;
  if (this_00 != (AAIController *)0x0) {
    pcVar9 = strstr("&UAIPerceptionComponent::OnOwnerEndPlay","::");
    pcVar7 = (char *)0x0;
    while (pcVar6 = pcVar9, pcVar6 != (char *)0x0) {
      pcVar9 = strstr(pcVar6 + 1,"::");
      pcVar7 = pcVar6;
    }
    if (((pcVar7 == (char *)0x0) || (pcVar7[2] == '0')) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result[2] != \'0\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                           ,0x1da,L"\'%hs\' does not look like a member function"), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::FName::FName(&local_308,pcVar7 + 2);
    local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_328.ObjectIndex = 0;
    local_328.ObjectSerialNumber = 0;
    local_320.ComparisonIndex.Value = 0;
    local_320.Number = 0;
    local_310 = local_308;
    local_300 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_328,(FObjectPtr)&local_300);
    local_320 = local_310;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_330,&local_2a8);
    local_318 = 0;
    if ((local_320 == (FName)0x0) ||
       (this_01 = FWeakObjectPtr::Get(&local_328), this_01 == (UObject *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_2a8);
LAB_146fc19dc:
      local_2f8 = &local_310;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
      __Internal_BindDynamic<UAIPerceptionComponent>'::__l2::<lambda_1>::operator()(&local_2f8);
    }
    else {
      pUVar10 = UObject::FindFunction(this_01,local_320);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_2a8);
      if (pUVar10 == (UFunction *)0x0) goto LAB_146fc19dc;
    }
    local_2c0._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_330,&local_290);
    local_2c0.Object = local_328;
    local_2c0.FunctionName = local_320;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_290);
    TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
    ::AddUnique((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                 *)((FActorOnReleasedSignature *)&this_00->_padding_ + 7),&local_2c0);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  }
  pUVar11 = (UWorld *)this->_padding_;
  if (pUVar11 == (UWorld *)0x0) {
    pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_02 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar11);
  if ((this_02 != (UAIPerceptionSystem *)0x0) &&
     ((this->PerceptionFilter).AcceptedChannelsMask = 0, 0 < (this->SensesConfig).ArrayNum)) {
    pFVar13 = (this->SensesConfig).AllocatorInstance.Data;
    iVar2 = (this->SensesConfig).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->SensesConfig).ArrayNum != iVar2) {
        local_338[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UAISenseConfig>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_338);
      }
      if (pFVar13 == pFVar1) break;
      pUVar3 = *(UAISenseConfig **)pFVar13;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UAISenseConfig *)0x0) goto LAB_146fc1abe;
      }
      else if (pUVar3 != (UAISenseConfig *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_146fc1abe:
        RegisterSenseConfig(this,pUVar3,this_02);
      }
      pFVar13 = pFVar13 + 8;
    }
    UAIPerceptionSystem::UpdateListener(this_02,this);
  }
  if (this_00 != (AAIController *)0x0) {
    pUVar12 = Z_Construct_UClass_AAIController_NoRegister();
    iVar2 = (int)pUVar12->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       (this_03 = this_00,
       (longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
       == &pUVar12->_padding_)) goto LAB_146fc1b26;
  }
  this_03 = (AAIController *)0x0;
LAB_146fc1b26:
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_03 == (AAIController *)0x0)) {
    (this->AIOwner).field0_0x0.DebugPtr = this_03;
    if (this_03 == (AAIController *)0x0) {
      if (this_00 == (AAIController *)0x0) {
        return;
      }
      pUVar11 = AActor::GetWorld((AActor *)this_00);
      if (pUVar11 == (UWorld *)0x0) {
        return;
      }
      pUVar11 = AActor::GetWorld((AActor *)this_00);
      if ((pUVar11->WorldType).Value == '\x02') {
        return;
      }
      if (FVisualLogger::bIsRecording != 0) {
        local_2f0 = (FName)this_00->_padding_;
        ::FName::ToString(&local_2f0,&local_2e0);
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UAIPerceptionComponent::OnRegister",0x22,Yes);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this_00,(FName *)&LogAIPerception.field_0x4,Log,
                   L"%s: Owner %s is not an AIController so make sure you bind to OnPerceptionUpdated, otherwise you won\'t get notified about updated actor perception events"
                  );
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
        if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
        }
      }
      if ((byte)LogAIPerception._0_1_ < 5) {
        return;
      }
      local_2e8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_2e8,&local_2d0);
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UAIPerceptionComponent::OnRegister",0x22,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAIPerception);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if (local_2d0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this_03);
    (this->AIOwner).field0_0x0.DebugPtr = this_03;
  }
  pUVar4 = (this_03->PerceptionComponent).field0_0x0.DebugPtr;
  if (pUVar4 == (UAIPerceptionComponent *)0x0) {
    AAIController::SetPerceptionComponent(this_03,this);
  }
  else if ((pUVar4 != this) &&
          (((pUVar11 = AActor::GetWorld((AActor *)this_03), pUVar11 == (UWorld *)0x0 ||
            (pUVar11 = AActor::GetWorld((AActor *)(this->AIOwner).field0_0x0.DebugPtr),
            (pUVar11->WorldType).Value == '\x02')) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4412167538939526943>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionComponent.cpp"
                               ,0xe1,
                               "AIOwner->GetAIPerceptionComponent() == this || (AIOwner->GetWorld() && AIOwner->GetWorld()->WorldType != EWorldType::Editor)"
                              ), bVar8)))) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

// OnUnregister @ 146fc1f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::OnUnregister(UAIPerceptionComponent *this)

{
  (**(code **)(this->_padding_ + 0x510))();
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// PostInitProperties @ 146fc2ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::PostInitProperties(UAIPerceptionComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FAINamedID<FAISenseCounter> *pFVar5;
  UClass *local_res8;
  FAINamedID<FAISenseCounter> local_18;
  
  UActorComponent::PostInitProperties((UActorComponent *)this);
  pUVar2 = (this->DominantSense).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UAISense::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (local_res8 = (this->DominantSense).Class.field0_0x0.DebugPtr, local_res8 != (UClass *)0x0)
         ) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        pFVar5 = UAISense::GetSenseID(&local_18,(TSubclassOf<UAISense>)&local_res8);
        (this->DominantSenseID).Index = pFVar5->Index;
        (this->DominantSenseID).Name = pFVar5->Name;
      }
    }
  }
  return;
}

// ProcessStimuli @ 146fc3b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::ProcessStimuli(UAIPerceptionComponent *this)

{
  TMap<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
  *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  FAINamedID<struct_FAISenseCounter> FVar6;
  FScriptContainerElement FVar7;
  undefined1 *puVar8;
  FName FVar9;
  FWeakObjectPtr FVar10;
  AAIController *pAVar11;
  longlong lVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  int iVar25;
  Type TVar26;
  int iVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_AI_PercepComp_ProcessStimuli> FVar29;
  int *piVar30;
  FName FVar31;
  ForElementType<TObjectKey<AActor>_> FVar32;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  undefined1 *puVar36;
  byte bVar37;
  uint uVar38;
  ForAnyElementType FVar39;
  ForElementType<TObjectKey<AActor>_> FVar40;
  FName FVar41;
  uint uVar42;
  FScriptContainerElement *pFVar43;
  uint uVar44;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_01;
  FActorPerceptionInfo *this_02;
  undefined1 auStackY_438 [32];
  FName local_3d0;
  ForAnyElementType local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8;
  undefined1 local_3b7 [7];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_3b0;
  UObject *local_3a0;
  FColor_u_0 local_398;
  undefined1 local_394 [12];
  ForAnyElementType local_388;
  int local_380;
  int local_37c;
  FName local_378;
  FWeakObjectPtr local_370;
  FWeakObjectPtr local_368;
  FActorPerceptionInfo *local_360;
  FScriptContainerElement *local_358;
  UAIPerceptionComponent *local_350;
  FName local_348;
  FWeakObjectPtr local_340;
  FName local_338;
  int local_330 [2];
  FAINamedID<FAISenseCounter> local_328;
  uint local_31c;
  FName local_318;
  FName local_308;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_300;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_2f8;
  ForElementType<TObjectKey<AActor>_> local_2f0;
  ForElementType<TObjectKey<AActor>_> local_2e8;
  ForElementType<TObjectKey<AActor>_> local_2e0;
  FWeakObjectPtr *local_2d8;
  uint local_2c8;
  FWeakObjectPtr local_2c4;
  FAIStimulus local_2b8;
  FName local_258;
  FAIStimulus local_250;
  FName local_1f8;
  uint local_1f0;
  FWeakObjectPtr local_1ec;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  uint local_104;
  ForElementType<TObjectKey<AActor>_> local_f8;
  int local_b0;
  int local_ac;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  FVar29 = StatPtr_STAT_AI_PercepComp_ProcessStimuli;
  local_350 = this;
  if (StatPtr_STAT_AI_PercepComp_ProcessStimuli ==
      (FThreadSafeStaticStat<FStat_STAT_AI_PercepComp_ProcessStimuli>)0x0) {
    pFVar28 = ::FName::FName(&local_1f8,"STAT_AI_PercepComp_ProcessStimuli");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_AI_PercepComp_ProcessStimuli>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_PercepComp_ProcessStimuli,
                        *pFVar28,L"Perception Component ProcessStimuli","STATGROUP_AI",
                        "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar29;
  bVar18 = false;
  bVar20 = false;
  local_318.ComparisonIndex.Value = 0;
  local_318.Number = 0;
  bVar22 = false;
  bVar23 = false;
  if ((FVar41.ComparisonIndex.Value.Value != 0) ||
     (bVar19 = bVar18, bVar21 = bVar20, FVar41.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_398.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_398._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar18 = false;
      bVar20 = true;
      bVar22 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_378.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_378.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_378,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionComponent.cpp"
                   ,0x1e4);
        bVar18 = true;
        bVar20 = true;
        bVar22 = true;
        bVar23 = true;
      }
    }
    bVar19 = bVar18;
    bVar21 = bVar20;
    if (FThreadStats::bPrimaryEnable != false) {
      local_3d0 = FVar41;
      local_348 = FVar41;
      FThreadStats::AddMessage(FVar41,CycleScopeStart);
      bVar22 = true;
      goto LAB_146fc3cf0;
    }
  }
  bVar20 = bVar23;
  bVar18 = bVar22;
  bVar22 = false;
  local_348 = local_318;
  FVar41 = local_318;
LAB_146fc3cf0:
  if ((this->StimuliToProcess).ArrayNum == 0) {
    bVar18 = bVar19;
    bVar20 = bVar21;
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogAIPerception.field_0x4,Warning,
                 L"UAIPerceptionComponent::ProcessStimuli called without any Stimuli to process");
    }
  }
  else {
    this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
              &this->OnTargetPerceptionUpdated;
    local_2f8 = this_01;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_188);
    local_394._4_4_ = *(undefined4 *)&(this->OnTargetPerceptionUpdated).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
    local_300 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                &this->OnTargetPerceptionInfoUpdated;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_300,&local_170);
    local_394._8_4_ = *(undefined4 *)&(this->OnTargetPerceptionInfoUpdated).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_170);
    FVar40 = (ForElementType<TObjectKey<AActor>_>)(this->StimuliToProcess).AllocatorInstance.Data;
    (this->StimuliToProcess).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar38 = (this->StimuliToProcess).ArrayNum;
    (this->StimuliToProcess).ArrayNum = 0;
    (this->StimuliToProcess).ArrayMax = 0;
    local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3b0.ArrayNum = 0;
    local_3b0.ArrayMax = 0;
    local_2e8 = FVar40;
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
    }
    if ((int)uVar38 < 1) {
      local_3c8.Data = (FScriptContainerElement *)0x0;
      local_3c0 = 0;
    }
    else {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar38,&local_3b0.AllocatorInstance,0,&local_3b0.ArrayMax);
      local_3c8.Data = (FScriptContainerElement *)0x0;
      local_3c0 = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar38,&local_3c8,0,(int *)((longlong)&local_3c0 + 4));
    }
    local_2f0 = (ForElementType<TObjectKey<AActor>_>)
                ((longlong)(int)uVar38 * 0x60 + (longlong)FVar40);
    local_f8.SecondaryData = (ForElementType<TObjectKey<AActor>_>)0x0;
    local_b0 = 0;
    local_ac = 8;
    while (FVar41 = local_348, FVar40 != local_2f0) {
      uVar38 = *(uint *)((longlong)FVar40 + 4);
      this_00 = &this->PerceptualData;
      iVar25 = *(int *)FVar40;
      uVar35 = iVar25 - uVar38 ^ uVar38 >> 0xd;
      uVar33 = (-0x61c88647 - uVar38) - uVar35 ^ uVar35 << 8;
      uVar42 = (uVar38 - uVar33) - uVar35 ^ uVar33 >> 0xd;
      uVar35 = (uVar35 - uVar42) - uVar33 ^ uVar42 >> 0xc;
      uVar33 = (uVar33 - uVar35) - uVar42 ^ uVar35 << 0x10;
      uVar42 = (uVar42 - uVar33) - uVar35 ^ uVar33 >> 5;
      uVar35 = (uVar35 - uVar42) - uVar33 ^ uVar42 >> 3;
      uVar33 = (uVar33 - uVar35) - uVar42 ^ uVar35 << 10;
      if (*(int *)&(this->PerceptualData).field_0x8 != *(int *)&(this->PerceptualData).field_0x34) {
        puVar8 = *(undefined1 **)&(this->PerceptualData).field_0x40;
        puVar36 = &(this->PerceptualData).field_0x38;
        if (puVar8 != (undefined1 *)0x0) {
          puVar36 = puVar8;
        }
        iVar27 = *(int *)(puVar36 +
                         (ulonglong)
                         (*(int *)&(this->PerceptualData).field_0x48 - 1U &
                         ((uVar42 - uVar33) - uVar35 ^ uVar33 >> 0xf)) * 4);
        if (iVar27 != -1) {
          do {
            piVar30 = (int *)((longlong)iVar27 * 0x38 + *(longlong *)&this_00->field_0x0);
            if ((*piVar30 == iVar25) && (piVar30[1] == uVar38)) {
              if (iVar27 != -1) {
                this_02 = (FActorPerceptionInfo *)(piVar30 + 2);
                if (piVar30 == (int *)0x0) {
                  this_02 = (FActorPerceptionInfo *)0x0;
                }
                local_3d0.ComparisonIndex.Value = 0;
                local_3d0.Number = 0;
                local_360 = this_02;
                if (this_02 != (FActorPerceptionInfo *)0x0) goto LAB_146fc4118;
              }
              break;
            }
            iVar27 = piVar30[0xc];
          } while (iVar27 != -1);
        }
      }
      FVar41.ComparisonIndex.Value = 0;
      FVar41.Number = 0;
      local_3d0.ComparisonIndex.Value = 0;
      local_3d0.Number = 0;
      if ((*(uint *)((longlong)FVar40 + 0x5c) >> 1 & 1) == 0) {
LAB_146fc46b8:
        FVar40 = (ForElementType<TObjectKey<AActor>_>)((longlong)FVar40 + 0x60);
        this = local_350;
      }
      else {
        local_370.ObjectIndex = iVar25;
        local_370.ObjectSerialNumber = uVar38;
        FVar31 = (FName)FWeakObjectPtr::Get(&local_370);
        if (FVar31 != (FName)0x0) {
          local_3d0 = FVar31;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)FVar31);
          }
          local_340.ObjectIndex = 0;
          local_340.ObjectSerialNumber = 0;
          local_308 = FVar31;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)FVar31);
          }
          FWeakObjectPtr::operator=(&local_340,(FObjectPtr)&local_308);
          local_330[0] = 0;
          local_330[1] = 0;
          local_338 = FVar41;
          FAINamedID<FAISenseCounter>::InvalidID(&local_328);
          uVar38 = (uint)(byte)FAINamedID<FAISenseCounter>::Counter;
          local_31c = local_31c & 0xfffffffc;
          iVar25 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x58,8,uVar38,(ForAnyElementType *)&local_338,local_330,local_330 + 1)
          ;
          DefaultConstructItems<FAIStimulus,int>
                    ((void *)((longlong)iVar25 * 0x58 + (longlong)local_338),uVar38);
          local_2d8 = &local_340;
          local_2e0 = FVar40;
          TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<TObjectKey<AActor>_const_&,FActorPerceptionInfo_&&>_>
                    ((TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
                      *)this_00,
                     (TPairInitializer<TObjectKey<AActor>_const_&,FActorPerceptionInfo_&&> *)
                     local_394,(bool *)&local_2e0);
          this_02 = (FActorPerceptionInfo *)
                    (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_394._0_4_ * 0x38 + 8);
          local_360 = this_02;
          if (local_338 != (FName)0x0) {
            FMemory::Free((void *)local_338);
          }
          (this_02->DominantSense).Index = (this->DominantSenseID).Index;
          (this_02->DominantSense).Name = (this->DominantSenseID).Name;
          TVar26 = FGenericTeamId::GetAttitude((AActor *)this->_padding_,(AActor *)local_3d0);
          this_02->bIsHostile = 0;
          *(uint *)&this_02->field_0x24 = *(uint *)&this_02->field_0x24 | (uint)(TVar26 == Hostile);
          if (TVar26 == Hostile) {
            this_02->bIsFriendly = 0;
            *(undefined4 *)&this_02->field_0x24 = *(undefined4 *)&this_02->field_0x24;
          }
          else {
            TVar26 = FGenericTeamId::GetAttitude((AActor *)this->_padding_,(AActor *)local_3d0);
            this_02->bIsFriendly = 0;
            *(uint *)&this_02->field_0x24 =
                 *(uint *)&this_02->field_0x24 | (uint)(TVar26 == Friendly) * 2;
          }
LAB_146fc4118:
          piVar30 = &(this_02->LastSensedStimuli).ArrayNum;
          iVar25 = *piVar30;
          if (iVar25 <= (int)(uint)(byte)*(FScriptContainerElement *)((longlong)FVar40 + 0x50)) {
            iVar25 = ((uint)(byte)*(FScriptContainerElement *)((longlong)FVar40 + 0x50) - iVar25) +
                     1;
            iVar27 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x58,8,iVar25,&(this_02->LastSensedStimuli).AllocatorInstance,
                                piVar30,&(this_02->LastSensedStimuli).ArrayMax);
            DefaultConstructItems<FAIStimulus,int>
                      ((this_02->LastSensedStimuli).AllocatorInstance.Data + (longlong)iVar27 * 0x58
                       ,iVar25);
            this = local_350;
          }
          FVar6 = *(FAINamedID<struct_FAISenseCounter> *)((longlong)FVar40 + 0x50);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
            ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
            _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          if ((FVar6 == `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                        ::__l2::InvalidIDInstance) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SourcedStimulus.Stimulus.Type.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionComponent.cpp"
                                  ,0x21f,L""), bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FVar7 = *(FScriptContainerElement *)((longlong)FVar40 + 0x50);
          if (((this_02->LastSensedStimuli).ArrayNum <= (int)(uint)(byte)FVar7) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar43 = (this_02->LastSensedStimuli).AllocatorInstance.Data +
                    (ulonglong)(byte)FVar7 * 0x58;
          if ((((byte)*(FScriptContainerElement *)((longlong)FVar40 + 0x5c) & 1) == 0) ||
             ((((byte)(*(uint *)(pFVar43 + 0x54) >> 1) ^
               (byte)(*(uint *)((longlong)FVar40 + 0x5c) >> 1)) & 1) != 0)) {
            bVar37 = 1;
          }
          else {
            bVar37 = 0;
          }
          local_358 = pFVar43;
          if ((*(uint *)((longlong)FVar40 + 0x5c) >> 1 & 1) == 0) {
            if ((*(uint *)(pFVar43 + 0x54) >> 2 & 1) != 0) {
              (**(code **)(this->_padding_ + 0x528))(this,pFVar43);
              if (((this->bForgetStaleActors != 0) &&
                  (bVar23 = FActorPerceptionInfo::HasAnyCurrentStimulus(this_02), !bVar23)) &&
                 (local_3a0 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02),
                 local_3a0 != (UObject *)0x0)) {
                if (((local_3c8.Data <= (FScriptContainerElement *)&local_3a0) &&
                    ((FScriptContainerElement *)&local_3a0 <
                     local_3c8.Data + (longlong)local_3c0._4_4_ * 8)) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar23)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar25 = (int)local_3c0;
                if ((int)local_3c0 == local_3c0._4_4_) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_3c8,(int *)((longlong)&local_3c0 + 4));
                }
                local_3c0 = CONCAT44(local_3c0._4_4_,iVar25 + 1);
                *(UObject **)(local_3c8.Data + (longlong)iVar25 * 8) = local_3a0;
              }
              goto LAB_146fc4381;
            }
            if (bVar37 == 0) goto LAB_146fc46b8;
            *(undefined4 *)pFVar43 = 0;
            *(uint *)(pFVar43 + 0x54) = *(uint *)(pFVar43 + 0x54) & 0xfffffffd;
          }
          else {
            bVar24 = (**(code **)(this->_padding_ + 0x520))
                               (this,pFVar43,(FScriptContainerElement *)((longlong)FVar40 + 8));
            bVar37 = bVar37 | bVar24;
LAB_146fc4381:
            if (bVar37 == 0) goto LAB_146fc46b8;
          }
          if (local_3d0 == (FName)0x0) {
            local_368.ObjectIndex = *(int *)FVar40;
            local_368.ObjectSerialNumber = *(int *)((longlong)FVar40 + 4);
            local_3d0 = (FName)FWeakObjectPtr::Get(&local_368);
            if (local_3d0 != (FName)0x0) goto LAB_146fc43b3;
            local_3d0.ComparisonIndex.Value = 0;
            local_3d0.Number = 0;
            FVar32 = (ForElementType<TObjectKey<AActor>_>)&local_f8;
            if (local_f8.SecondaryData != (ForElementType<TObjectKey<AActor>_>)0x0) {
              FVar32 = local_f8.SecondaryData;
            }
            if ((ulonglong)FVar32 <= (ulonglong)FVar40) {
              FVar32 = (ForElementType<TObjectKey<AActor>_>)&local_f8;
              if (local_f8.SecondaryData != (ForElementType<TObjectKey<AActor>_>)0x0) {
                FVar32 = local_f8.SecondaryData;
              }
              if (((ulonglong)FVar40 < (ulonglong)((longlong)FVar32 + (longlong)local_ac * 8)) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            iVar25 = local_b0;
            if (local_b0 == local_ac) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectKey<AActor>_>_>
                                 (0x408,&local_f8,&local_ac);
            }
            local_b0 = iVar25 + 1;
            FVar32 = (ForElementType<TObjectKey<AActor>_>)&local_f8;
            if (local_f8.SecondaryData != (ForElementType<TObjectKey<AActor>_>)0x0) {
              FVar32 = local_f8.SecondaryData;
            }
            *(undefined8 *)((longlong)FVar32 + (longlong)iVar25 * 8) = *(undefined8 *)FVar40;
          }
          else {
LAB_146fc43b3:
            TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
                      (&local_3b0,(AActor **)&local_3d0);
            FVar41 = local_3d0;
            if (0 < (int)local_394._4_4_) {
              fVar1 = *(float *)pFVar43;
              fVar2 = *(float *)(pFVar43 + 4);
              fVar3 = *(float *)(pFVar43 + 8);
              dVar14 = *(double *)(local_358 + 0x10);
              dVar15 = *(double *)(local_358 + 0x18);
              FVar31 = *(FName *)(pFVar43 + 0x40);
              dVar4 = *(double *)(local_358 + 0x20);
              dVar16 = *(double *)(local_358 + 0x28);
              dVar17 = *(double *)(local_358 + 0x30);
              FVar7 = pFVar43[0x48];
              dVar5 = *(double *)(local_358 + 0x38);
              FVar9 = *(FName *)(pFVar43 + 0x4c);
              uVar38 = *(uint *)(pFVar43 + 0x54);
              local_104 = (uVar38 ^ local_104) & 1 ^ local_104;
              local_104 = (uVar38 ^ local_104) & 2 ^ local_104;
              uVar38 = (uVar38 ^ local_104) & 4 ^ local_104;
              local_148 = dVar14;
              dStack_140 = dVar15;
              local_138 = dVar4;
              local_130 = dVar16;
              dStack_128 = dVar17;
              local_120 = dVar5;
              local_104 = uVar38;
              FAIStimulus::FAIStimulus(&local_250);
              local_250._84_4_ = uVar38 & 7 | local_250._84_4_ & 0xfffffff8;
              local_258 = FVar41;
              local_250.Age = fVar1;
              local_250.ExpirationAge = fVar2;
              local_250.Strength = fVar3;
              local_250.StimulusLocation.field0_0x0._s_0.X = dVar14;
              local_250.StimulusLocation.field0_0x0._s_0.Y = dVar15;
              local_250.StimulusLocation.field0_0x0._s_0.Z = dVar4;
              local_250.ReceiverLocation.field0_0x0._s_0.X = dVar16;
              local_250.ReceiverLocation.field0_0x0._s_0.Y = dVar17;
              local_250.ReceiverLocation.field0_0x0._s_0.Z = dVar5;
              local_250.Tag = FVar31;
              local_250.Type.Index = (uchar)FVar7;
              local_250.Type.Name = FVar9;
              TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
              ProcessMulticastDelegate<UObject>(this_01,&local_258);
              pFVar43 = local_358;
              this_02 = local_360;
            }
          }
          if (0 < (int)local_394._8_4_) {
            uVar38 = *(uint *)((longlong)FVar40 + 4);
            dVar14 = *(double *)(pFVar43 + 0x10);
            dVar15 = *(double *)(pFVar43 + 0x18);
            FVar10 = (this_02->Target).WeakPtr;
            dVar16 = *(double *)(pFVar43 + 0x28);
            dVar17 = *(double *)(pFVar43 + 0x30);
            FVar41 = *(FName *)(pFVar43 + 0x40);
            fVar1 = *(float *)pFVar43;
            fVar2 = *(float *)(pFVar43 + 4);
            fVar3 = *(float *)(pFVar43 + 8);
            dVar4 = *(double *)(pFVar43 + 0x20);
            dVar5 = *(double *)(pFVar43 + 0x38);
            FVar7 = pFVar43[0x48];
            FVar31 = *(FName *)(pFVar43 + 0x4c);
            uVar33 = *(uint *)(pFVar43 + 0x54);
            uVar42 = *(int *)FVar40 - uVar38 ^ uVar38 >> 0xd;
            uVar35 = (-0x61c88647 - uVar42) - uVar38 ^ uVar42 << 8;
            local_2c8 = 0xffffffff;
            uVar44 = (uVar38 - uVar42) - uVar35 ^ uVar35 >> 0xd;
            uVar42 = (uVar42 - uVar44) - uVar35 ^ uVar44 >> 0xc;
            uVar38 = (uVar35 - uVar42) - uVar44 ^ uVar42 << 0x10;
            uVar44 = (uVar44 - uVar38) - uVar42 ^ uVar38 >> 5;
            uVar35 = (uVar42 - uVar44) - uVar38 ^ uVar44 >> 3;
            uVar38 = (uVar38 - uVar35) - uVar44 ^ uVar35 << 10;
            local_2c4.ObjectIndex = 0;
            local_2c4.ObjectSerialNumber = 0;
            uVar38 = (uVar44 - uVar38) - uVar35 ^ uVar38 >> 0xf;
            local_1f0 = uVar38;
            local_1ec = FVar10;
            local_1e0 = fVar1;
            local_1dc = fVar2;
            local_1d8 = fVar3;
            local_1d0 = dVar14;
            dStack_1c8 = dVar15;
            local_1c0 = dVar4;
            local_1b8 = dVar16;
            dStack_1b0 = dVar17;
            local_1a8 = dVar5;
            FAIStimulus::FAIStimulus(&local_2b8);
            local_2b8._84_4_ = (uVar33 ^ local_2b8._84_4_) & 1 ^ local_2b8._84_4_;
            local_2b8._84_4_ = (local_2b8._84_4_ ^ uVar33) & 2 ^ local_2b8._84_4_;
            local_2b8._84_4_ = (local_2b8._84_4_ ^ uVar33) & 4 ^ local_2b8._84_4_;
            local_2c8 = uVar38;
            local_2c4 = FVar10;
            local_2b8.Age = fVar1;
            local_2b8.ExpirationAge = fVar2;
            local_2b8.Strength = fVar3;
            local_2b8.StimulusLocation.field0_0x0._s_0.X = dVar14;
            local_2b8.StimulusLocation.field0_0x0._s_0.Y = dVar15;
            local_2b8.StimulusLocation.field0_0x0._s_0.Z = dVar4;
            local_2b8.ReceiverLocation.field0_0x0._s_0.X = dVar16;
            local_2b8.ReceiverLocation.field0_0x0._s_0.Y = dVar17;
            local_2b8.ReceiverLocation.field0_0x0._s_0.Z = dVar5;
            local_2b8.Tag = FVar41;
            local_2b8.Type.Index = (uchar)FVar7;
            local_2b8.Type.Name = FVar31;
            TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                      (local_300,&local_2c8);
            this_01 = local_2f8;
          }
          goto LAB_146fc46b8;
        }
        FVar40 = (ForElementType<TObjectKey<AActor>_>)((longlong)FVar40 + 0x60);
        this = local_350;
        local_3d0 = FVar41;
      }
    }
    if (0 < local_3b0.ArrayNum) {
      pAVar11 = (this->AIOwner).field0_0x0.DebugPtr;
      iVar25 = local_3b0.ArrayNum;
      if (pAVar11 != (AAIController *)0x0) {
        (**(code **)(pAVar11->_padding_ + 0x918))(pAVar11,&local_3b0);
        iVar25 = local_3b0.ArrayNum;
      }
      FVar39.Data = local_3b0.AllocatorInstance.Data;
      local_388.Data = (FScriptContainerElement *)0x0;
      local_37c = 0;
      local_380 = iVar25;
      if (iVar25 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar25,0,&local_388,iVar25,&local_37c);
        memcpy(local_388.Data,FVar39.Data,(longlong)iVar25 << 3);
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPerceptionUpdated,
                 &local_388);
      if (local_388.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data);
      }
    }
    iVar25 = (int)local_3c0;
    pFVar43 = local_3c8.Data + (longlong)(int)local_3c0 * 8;
    FVar39.Data = local_3c8.Data;
    while( true ) {
      if ((int)local_3c0 != iVar25) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3b8);
      }
      iVar27 = local_b0;
      if (FVar39.Data == pFVar43) break;
      ForgetActor(this,*(AActor **)FVar39.Data);
      FVar39.Data = FVar39.Data + 8;
    }
    FVar40 = (ForElementType<TObjectKey<AActor>_>)&local_f8;
    if (local_f8.SecondaryData != (ForElementType<TObjectKey<AActor>_>)0x0) {
      FVar40 = local_f8.SecondaryData;
    }
    FVar32 = (ForElementType<TObjectKey<AActor>_>)((longlong)FVar40 + (longlong)local_b0 * 8);
    while( true ) {
      if (local_b0 != iVar27) {
        `TCheckedPointerIterator<TObjectKey<AActor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_3b7);
      }
      if (FVar40 == FVar32) break;
      if (*(int *)&(this->PerceptualData).field_0x8 == *(int *)&(this->PerceptualData).field_0x34) {
LAB_146fc4a24:
        FVar40 = (ForElementType<TObjectKey<AActor>_>)((longlong)FVar40 + 8);
      }
      else {
        uVar38 = *(uint *)((longlong)FVar40 + 4);
        uVar35 = *(int *)FVar40 - uVar38 ^ uVar38 >> 0xd;
        uVar33 = (-0x61c88647 - uVar35) - uVar38 ^ uVar35 << 8;
        uVar42 = (uVar38 - uVar33) - uVar35 ^ uVar33 >> 0xd;
        uVar35 = (uVar35 - uVar42) - uVar33 ^ uVar42 >> 0xc;
        uVar33 = (uVar33 - uVar35) - uVar42 ^ uVar35 << 0x10;
        uVar42 = (uVar42 - uVar33) - uVar35 ^ uVar33 >> 5;
        uVar35 = (uVar35 - uVar42) - uVar33 ^ uVar42 >> 3;
        uVar33 = (uVar33 - uVar35) - uVar42 ^ uVar35 << 10;
        puVar8 = *(undefined1 **)&(this->PerceptualData).field_0x40;
        puVar36 = &(this->PerceptualData).field_0x38;
        if (puVar8 != (undefined1 *)0x0) {
          puVar36 = puVar8;
        }
        iVar25 = *(int *)(puVar36 +
                         ((longlong)*(int *)&(this->PerceptualData).field_0x48 - 1U &
                         (longlong)(int)((uVar42 - uVar33) - uVar35 ^ uVar33 >> 0xf)) * 4);
        if (iVar25 == -1) goto LAB_146fc4a24;
        lVar12 = *(longlong *)&this->PerceptualData;
        do {
          lVar34 = (longlong)iVar25 * 0x38;
          if ((*(int *)(lVar34 + lVar12) == *(int *)FVar40) &&
             (*(uint *)(lVar34 + 4 + lVar12) == uVar38)) {
            TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
                             *)&this->PerceptualData,iVar25);
            goto LAB_146fc4a24;
          }
          iVar25 = *(int *)(lVar34 + 0x30 + lVar12);
        } while (iVar25 != -1);
        FVar40 = (ForElementType<TObjectKey<AActor>_>)((longlong)FVar40 + 8);
      }
    }
    if (local_f8.SecondaryData != (ForElementType<TObjectKey<AActor>_>)0x0) {
      FMemory::Free((void *)local_f8.SecondaryData);
    }
    if (local_3c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data);
    }
    if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.AllocatorInstance.Data);
    }
    if (local_2e8 != (ForElementType<TObjectKey<AActor>_>)0x0) {
      FMemory::Free((void *)local_2e8);
    }
  }
  if (bVar20) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
  return;
}

// RefreshStimulus @ 146fc6bb0

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
UAIPerceptionComponent::RefreshStimulus
          (UAIPerceptionComponent *this,FAIStimulus *param_1,FAIStimulus *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146fc6bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x520))();
  return;
}

// RegisterSenseConfig @ 146fc8480

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
UAIPerceptionComponent::RegisterSenseConfig
          (UAIPerceptionComponent *this,UAISenseConfig *param_1,UAIPerceptionSystem *param_2)

{
  int iVar1;
  code *pcVar2;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  float fVar6;
  UObject *local_res10 [2];
  UObject *local_res20;
  FAINamedID<FAISenseCounter> local_38;
  FAINamedID<FAISenseCounter> local_28;
  
  (**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_res10);
  pUVar3 = local_res10[0];
  if (local_res10[0] != (UObject *)0x0) {
    pUVar5 = UAISense::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)&pUVar3[1].field_0x10 < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (local_res10[0] != (UObject *)0x0)) {
        local_res20 = local_res10[0];
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_res10[0]);
        }
        UAIPerceptionSystem::RegisterSenseClass
                  (param_2,&local_38,(TSubclassOf<UAISense>)&local_res20);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) <
            `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::_thread_safe_static_guard_0__) {
          _Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                               ::__l2::_thread_safe_static_guard_0__);
          if (`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
              ::__l2::_thread_safe_static_guard_0__ == -1) {
            `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
            ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
            _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
        }
        if ((FAINamedID<struct_FAISenseCounter>)local_38.Index ==
            `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::InvalidIDInstance) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SenseID.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionComponent.cpp"
                             ,0xf1,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (param_1->bStartsEnabled != 0) {
          (this->PerceptionFilter).AcceptedChannelsMask =
               (this->PerceptionFilter).AcceptedChannelsMask | 1 << (local_38.Index & 0x1f);
        }
        fVar6 = param_1->MaxAge;
        if (param_1->MaxAge == 0.0) {
          fVar6 = __real_7f7fffff;
        }
        local_28.Name = local_38.Name;
        local_28.Index = local_38.Index;
        SetMaxStimulusAge(this,&local_28,fVar6);
      }
    }
  }
  return;
}

// RegisterStimulus @ 146fc8c00

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
UAIPerceptionComponent::RegisterStimulus
          (UAIPerceptionComponent *this,AActor *param_1,FAIStimulus *param_2)

{
  int *piVar1;
  TArray<UAIPerceptionComponent::FStimulusToProcess,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  undefined4 uVar4;
  FWeakObjectPtr *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  FWeakObjectPtr local_88;
  float local_80;
  float local_7c;
  float local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  FName local_40;
  FScriptContainerElement local_38;
  FName local_34;
  uint local_2c;
  
  pTVar2 = &this->StimuliToProcess;
  local_88.ObjectIndex = 0;
  local_88.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    local_88 = local_res8;
  }
  uVar4 = *(undefined4 *)&param_2->field_0x54;
  local_40 = param_2->Tag;
  uVar10 = (ZPULL(uVar4,0,1) ^ local_2c) & 1 ^ local_2c;
  local_7c = param_2->ExpirationAge;
  local_80 = param_2->Age;
  local_38 = (FScriptContainerElement)(param_2->Type).Index;
  uVar10 = (uVar10 ^ uVar4) & 2 ^ uVar10;
  pFVar5 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  local_34 = (param_2->Type).Name;
  local_78 = param_2->Strength;
  local_2c = (uVar10 ^ uVar4) & 4 ^ uVar10;
  local_70 = (param_2->StimulusLocation).field0_0x0._s_0.X;
  dStack_68 = (param_2->StimulusLocation).field0_0x0._s_0.Y;
  local_60 = (param_2->StimulusLocation).field0_0x0._s_0.Z;
  local_48 = (param_2->ReceiverLocation).field0_0x0._s_0.Z;
  local_58 = (param_2->ReceiverLocation).field0_0x0._s_0.X;
  dStack_50 = (param_2->ReceiverLocation).field0_0x0._s_0.Y;
  if ((pFVar5 <= &local_88) &&
     (&local_88 < pFVar5 + (longlong)(this->StimuliToProcess).ArrayMax * 0xc)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->StimuliToProcess).ArrayNum;
  piVar1 = &(this->StimuliToProcess).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->StimuliToProcess).ArrayNum = iVar9 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  lVar11 = (longlong)iVar9 * 0x60;
  *(FWeakObjectPtr *)(pFVar6 + lVar11) = local_88;
  *(float *)(pFVar6 + lVar11 + 8) = local_80;
  *(float *)(pFVar6 + lVar11 + 0xc) = local_7c;
  *(float *)(pFVar6 + lVar11 + 0x10) = local_78;
  *(double *)(pFVar6 + lVar11 + 0x18) = local_70;
  *(double *)(pFVar6 + lVar11 + 0x18 + 8) = dStack_68;
  *(double *)(pFVar6 + lVar11 + 0x28) = local_60;
  *(double *)(pFVar6 + lVar11 + 0x30) = local_58;
  *(double *)(pFVar6 + lVar11 + 0x30 + 8) = dStack_50;
  *(double *)(pFVar6 + lVar11 + 0x40) = local_48;
  *(FName *)(pFVar6 + lVar11 + 0x48) = local_40;
  pFVar6[lVar11 + 0x50] = local_38;
  *(FName *)(pFVar6 + lVar11 + 0x54) = local_34;
  uVar10 = (*(uint *)(pFVar6 + lVar11 + 0x5c) ^ local_2c) & 1 ^ *(uint *)(pFVar6 + lVar11 + 0x5c);
  *(uint *)(pFVar6 + lVar11 + 0x5c) = uVar10;
  uVar10 = (uVar10 ^ local_2c) & 2 ^ uVar10;
  *(uint *)(pFVar6 + lVar11 + 0x5c) = uVar10;
  *(uint *)(pFVar6 + lVar11 + 0x5c) = (uVar10 ^ local_2c) & 4 ^ uVar10;
  bVar3 = (param_2->Type).Index;
  if ((this->MaxActiveAge).ArrayNum <= (int)(uint)bVar3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(undefined4 *)(pFVar6 + lVar11 + 0xc) =
       *(undefined4 *)((this->MaxActiveAge).AllocatorInstance.Data + (ulonglong)bVar3 * 4);
  return;
}

// RemoveDeadData @ 146fcbf80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::RemoveDeadData(UAIPerceptionComponent *this)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
              *)&this->PerceptualData);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
              *)&this->PerceptualData;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      bVar2 = FWeakObjectPtr::IsValid
                        ((FWeakObjectPtr *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x38));
      if (!bVar2) {
        TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,(int)uVar4);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// RequestStimuliListenerUpdate @ 146fcd3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAIPerceptionComponent::RequestStimuliListenerUpdate(UAIPerceptionComponent *this)

{
  UWorld *pUVar1;
  UAIPerceptionSystem *this_00;
  
  pUVar1 = (UWorld *)this->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_00 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar1);
  if (this_00 != (UAIPerceptionSystem *)0x0) {
    UAIPerceptionSystem::UpdateListener(this_00,this);
    return;
  }
  return;
}

// SetDominantSense @ 146fd0110

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
UAIPerceptionComponent::SetDominantSense(UAIPerceptionComponent *this,TSubclassOf<UAISense> param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FAINamedID<FAISenseCounter> *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  UClass *pUVar9;
  uint uVar10;
  UClass *pUVar11;
  UObject *local_res8;
  FAINamedID<FAISenseCounter> local_98;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  pUVar5 = (this->DominantSense).Class.field0_0x0.DebugPtr;
  pUVar9 = (UClass *)0x0;
  pUVar11 = pUVar9;
  if ((pUVar5 != (UClass *)0x0) && (pUVar4 = UAISense::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar3 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar11 = (this->DominantSense).Class.field0_0x0.DebugPtr;
    }
  }
  lVar1 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar1 != 0) && (pUVar5 = UAISense::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar9 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  if (pUVar11 != pUVar9) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->DominantSense).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    local_res8 = *(UObject **)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    pFVar6 = UAISense::GetSenseID(&local_98,(TSubclassOf<UAISense>)&local_res8);
    (this->DominantSenseID).Index = pFVar6->Index;
    (this->DominantSenseID).Name = pFVar6->Name;
    TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
                *)&this->PerceptualData);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar7 = local_88._24_8_ >> 0x20;
    local_28 = (TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
                *)&this->PerceptualData;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        lVar8 = (longlong)(int)uVar7 * 0x38;
        lVar1 = *local_58;
        *(uchar *)(lVar8 + 0x20 + lVar1) = (this->DominantSenseID).Index;
        *(FName *)(lVar8 + 0x24 + lVar1) = (this->DominantSenseID).Name;
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar7 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar10 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar3 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_28->HashSize < iVar3)) || (iVar3 < local_28->HashSize)) {
          local_28->HashSize = iVar3;
          TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
  }
  return;
}

// SetMaxStimulusAge @ 146fd0660

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
UAIPerceptionComponent::SetMaxStimulusAge
          (UAIPerceptionComponent *this,FAINamedID<FAISenseCounter> *param_1,float param_2)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_res20 [8];
  
  bVar4 = FAINamedID<FAISenseCounter>::IsValid(param_1);
  if ((!bVar4) &&
     (local_res20[0] = bVar4,
     bVar4 = `UAIPerceptionComponent::SetMaxStimulusAge'::__l3::<lambda_1>::operator()(local_res20),
     !bVar4)) {
    return;
  }
  piVar1 = &(this->MaxActiveAge).ArrayNum;
  if (*piVar1 <= (int)(uint)param_1->Index) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,((uint)param_1->Index - (this->MaxActiveAge).ArrayNum) + 1,
               &(this->MaxActiveAge).AllocatorInstance,piVar1,&(this->MaxActiveAge).ArrayMax);
  }
  bVar2 = param_1->Index;
  if ((*piVar1 <= (int)(uint)bVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(float *)((this->MaxActiveAge).AllocatorInstance.Data + (ulonglong)bVar2 * 4) = param_2;
  return;
}

// SetSenseEnabled @ 146fd2410

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
UAIPerceptionComponent::SetSenseEnabled
          (UAIPerceptionComponent *this,TSubclassOf<UAISense> param_1,bool param_2)

{
  UObject *local_res10;
  FAINamedID<FAISenseCounter> local_28;
  FAINamedID<FAISenseCounter> local_18;
  
  local_res10 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  UAISense::GetSenseID(&local_28,(TSubclassOf<UAISense>)&local_res10);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((FAINamedID<struct_FAISenseCounter>)local_28.Index !=
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance) {
    local_18.Name = local_28.Name;
    local_18.Index = local_28.Index;
    UpdatePerceptionAllowList(this,&local_18,param_2);
  }
  return;
}

// StaticRegisterNativesUAIPerceptionComponent @ 146fd3470

void __cdecl UAIPerceptionComponent::StaticRegisterNativesUAIPerceptionComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UAIPerceptionComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdatePerceptionAllowList @ 146fe28a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UAIPerceptionComponent::UpdatePerceptionAllowList
          (UAIPerceptionComponent *this,FAINamedID<FAISenseCounter> *param_1,bool param_2)

{
  byte bVar1;
  UAISenseConfig *pUVar2;
  FString *pFVar3;
  UWorld *pUVar4;
  UAIPerceptionSystem *this_00;
  uint uVar5;
  wchar_t *pwVar6;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  FScriptContainerElement *local_160;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  pUVar2 = GetSenseConfig(this,param_1);
  if (pUVar2 == (UAISenseConfig *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      pFVar3 = ::FName::ToString(&param_1->Name,&local_158);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UAIPerceptionComponent::UpdatePerceptionAllowList",0x31,Yes);
      local_168 = local_148.Ptr;
      local_160 = (FScriptContainerElement *)pwVar6;
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogAIPerception.field_0x4,Warning,
                 L"%s: %s: Channel has no Sense Config. Bailing out!!");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogAIPerception._0_1_) {
      ::FName::ToString(&param_1->Name,&local_158);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UAIPerceptionComponent::UpdatePerceptionAllowList",0x31,Yes);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAIPerception);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar1 = param_1->Index;
    uVar5 = (this->PerceptionFilter).AcceptedChannelsMask;
    if (param_2 != ((uVar5 >> (bVar1 & 0x1f) & 1) != 0)) {
      if (param_2) {
        uVar5 = uVar5 | 1 << (bVar1 & 0x1f);
      }
      else {
        uVar5 = uVar5 & ~(1 << (bVar1 & 0x1f));
      }
      (this->PerceptionFilter).AcceptedChannelsMask = uVar5;
      pUVar4 = (UWorld *)this->_padding_;
      if (pUVar4 == (UWorld *)0x0) {
        pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_00 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar4);
      if (this_00 != (UAIPerceptionSystem *)0x0) {
        UAIPerceptionSystem::UpdateListener(this_00,this);
      }
    }
  }
  return;
}

// execForgetAll @ 146fe4df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UAIPerceptionComponent::execForgetAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ForgetAll((UAIPerceptionComponent *)param_1);
  return;
}

// execGetActorsPerception @ 146fe4e10

void __cdecl
UAIPerceptionComponent::execGetActorsPerception(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FAIStimulus,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  FActorPerceptionInfo *this;
  UObject *pUVar4;
  uint uVar5;
  uchar *puVar6;
  undefined1 uVar7;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  TArray<FAIStimulus,TSizedDefaultAllocator<32>_> local_70;
  uint local_60;
  uchar local_58 [8];
  void *pvStack_50;
  undefined8 local_48;
  uint local_40;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_40 = local_40 & 0xfffffffc;
  local_48 = 0;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  pvStack_50 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pUVar4 = local_res10;
  puVar6 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  uVar7 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res10 != (UObject *)0x0) && ((local_res10[2].field_0xd & 2) == 0)) &&
     ((*(uint *)&local_res10->field_0x8 >> 0x1e & 1) == 0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    this = TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
           ::Find((TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
                   *)&param_1[6].field_0x8,(TObjectKey<AActor> *)&local_res18);
    if (this != (FActorPerceptionInfo *)0x0) {
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      TArray<FAIStimulus,TSizedDefaultAllocator<32>_>::operator=(&local_70,&this->LastSensedStimuli)
      ;
      local_60 = *(uint *)&this->field_0x24 & 3 | local_60 & 0xfffffffc;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      *(UObject **)puVar6 = pUVar4;
      pTVar1 = (TArray<FAIStimulus,TSizedDefaultAllocator<32>_> *)(puVar6 + 8);
      if (pTVar1 != &local_70) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_70.AllocatorInstance.Data;
        *(int *)(puVar6 + 0x10) = local_70.ArrayNum;
        *(int *)(puVar6 + 0x14) = local_70.ArrayMax;
        local_70.ArrayNum = 0;
        local_70.ArrayMax = 0;
        local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      uVar5 = (*(uint *)(puVar6 + 0x18) ^ local_60) & 1 ^ *(uint *)(puVar6 + 0x18);
      *(uint *)(puVar6 + 0x18) = (uVar5 ^ local_60) & 2 ^ uVar5;
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      uVar7 = 1;
    }
  }
  *(undefined1 *)param_3 = uVar7;
  if (pvStack_50 != (void *)0x0) {
    FMemory::Free(pvStack_50);
  }
  return;
}

// execGetCurrentlyPerceivedActors @ 146fe53a0

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
UAIPerceptionComponent::execGetCurrentlyPerceivedActors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *local_res10 [2];
  UObject *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_28;
  
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
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20 = local_res10[0];
  pTVar2 = &local_28;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  GetCurrentlyPerceivedActors
            ((UAIPerceptionComponent *)param_1,(TSubclassOf<UAISense>)&local_res20,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetKnownPerceivedActors @ 146fe54b0

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
UAIPerceptionComponent::execGetKnownPerceivedActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *local_res10 [2];
  UObject *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_28;
  
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
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20 = local_res10[0];
  pTVar2 = &local_28;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  GetKnownPerceivedActors
            ((UAIPerceptionComponent *)param_1,(TSubclassOf<UAISense>)&local_res20,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetPerceivedHostileActors @ 146fe56f0

void __cdecl
UAIPerceptionComponent::execGetPerceivedHostileActors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar2 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,ppvVar2);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetPerceivedHostileActorsBySense @ 146fe57b0

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
UAIPerceptionComponent::execGetPerceivedHostileActorsBySense
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UObject *local_res10 [2];
  UObject *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_28;
  
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
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar2 = local_res10[0];
  pTVar3 = &local_28;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  GetHostileActorsBySense
            ((UAIPerceptionComponent *)param_1,(TSubclassOf<UAISense>)&local_res20,pTVar3);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execIsSenseEnabled @ 146fe5c30

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
UAIPerceptionComponent::execIsSenseEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UAISenseConfig *pUVar6;
  uint uVar7;
  UClass *this;
  UClass *local_res10;
  FAINamedID<FAISenseCounter> local_18;
  
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_146fe5cdf:
    if (this != (UClass *)0x0) {
LAB_146fe5ce8:
      pUVar5 = UAISense::StaticClass();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)this->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar5 = UAISense::StaticClass();
          if (pUVar5 == (UClass *)0x0) {
LAB_146fe5d44:
            this = (UClass *)0x0;
          }
          else {
            iVar1 = (int)pUVar5->_padding_;
            if (((int)this->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_146fe5d44;
          }
          if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(this);
          }
          pUVar3 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
          local_18.Index = pUVar3[1].field_0x14;
          local_18.Name.ComparisonIndex.Value = *(uint *)&pUVar3[1].field_0x18;
          local_18.Name.Number = *(uint *)&pUVar3[1].field_0x1c;
          goto LAB_146fe5dda;
        }
      }
    }
  }
  else {
    if (local_res10 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146fe5cdf;
    if (this != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this);
      goto LAB_146fe5ce8;
    }
  }
  local_18.Name = DAT_1551c48a4;
  local_18.Index =
       (uchar)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
              ::__l2::InvalidIDInstance;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__), local_18.Name = DAT_1551c48a4,
     local_18.Index =
          (uchar)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                 ::__l2::InvalidIDInstance,
     `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
    ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
    ::FName::FName(&DAT_1551c48a4,L"Invalid");
    _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    local_18.Name = DAT_1551c48a4;
    local_18.Index =
         (uchar)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                ::__l2::InvalidIDInstance;
  }
LAB_146fe5dda:
  uVar7 = (uint)local_18.Index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
    ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
    ::FName::FName(&DAT_1551c48a4,L"Invalid");
    _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((uVar7 == (byte)`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                      ::__l2::InvalidIDInstance) ||
     (pUVar6 = GetSenseConfig((UAIPerceptionComponent *)param_1,&local_18),
     pUVar6 == (UAISenseConfig *)0x0)) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    *(bool *)param_3 = (*(uint *)(param_1 + 6) >> (uVar7 & 0x1f) & 1) != 0;
  }
  return;
}

// execOnOwnerEndPlay @ 146fe6260

void __cdecl
UAIPerceptionComponent::execOnOwnerEndPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res10 [8];
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] != '\x02') && (local_res10[0] != '\x04')) {
    (**(code **)(*(longlong *)param_1 + 0x510))(param_1);
  }
  return;
}

// execRequestStimuliListenerUpdate @ 146fe7e50

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
UAIPerceptionComponent::execRequestStimuliListenerUpdate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UWorld *pUVar1;
  UAIPerceptionSystem *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = *(UWorld **)&param_1[4].field_0x10;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  this = UAIPerceptionSystem::GetCurrent((UObject *)pUVar1);
  if (this != (UAIPerceptionSystem *)0x0) {
    UAIPerceptionSystem::UpdateListener(this,(UAIPerceptionComponent *)param_1);
    return;
  }
  return;
}

// execSetSenseEnabled @ 146fe80e0

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
UAIPerceptionComponent::execSetSenseEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  bool bVar4;
  FAINamedID<struct_FAISenseCounter> FVar5;
  UClass *pUVar6;
  UClass *this;
  FName FVar7;
  bool bVar8;
  int local_res10 [4];
  UClass *local_res20;
  FAINamedID<FAISenseCounter> local_38;
  
  local_res20 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  bVar8 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_146fe81cc:
    if (this != (UClass *)0x0) {
LAB_146fe81d5:
      pUVar6 = UAISense::StaticClass();
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)this->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar6 = UAISense::StaticClass();
          if (pUVar6 == (UClass *)0x0) {
LAB_146fe8231:
            this = (UClass *)0x0;
          }
          else {
            iVar1 = (int)pUVar6->_padding_;
            if (((int)this->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar6->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_146fe8231;
          }
          if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(this);
          }
          pUVar3 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
          FVar7.ComparisonIndex.Value = *(uint *)&pUVar3[1].field_0x18;
          FVar7.Number = *(uint *)&pUVar3[1].field_0x1c;
          FVar5 = (FAINamedID<struct_FAISenseCounter>)pUVar3[1].field_0x14;
          goto LAB_146fe82c7;
        }
      }
    }
  }
  else {
    if (local_res20 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146fe81cc;
    if (this != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this);
      goto LAB_146fe81d5;
    }
  }
  FVar7 = DAT_1551c48a4;
  FVar5 = `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
          ::__l2::InvalidIDInstance;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__), FVar7 = DAT_1551c48a4,
     FVar5 = `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
             ::__l2::InvalidIDInstance,
     `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
    ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
    ::FName::FName(&DAT_1551c48a4,L"Invalid");
    _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    FVar7 = DAT_1551c48a4;
    FVar5 = `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::InvalidIDInstance;
  }
LAB_146fe82c7:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
    ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
    ::FName::FName(&DAT_1551c48a4,L"Invalid");
    _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (FVar5 != `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
               ::__l2::InvalidIDInstance) {
    local_38.Index = (uchar)FVar5;
    local_38.Name = FVar7;
    UpdatePerceptionAllowList((UAIPerceptionComponent *)param_1,&local_38,bVar8);
  }
  return;
}

// operator() @ 1504ffdc0

bool __thiscall
`UAIPerceptionComponent::SetMaxStimulusAge'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4412167538939527001>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4412167538939527001>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

