// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b52bd00

UClass * __cdecl UDS_NiagaraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NiagaraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NiagaraComponent",
               &Z_Registration_Info_UClass_UDS_NiagaraComponent.InnerSingleton,
               StaticRegisterNativesUDS_NiagaraComponent,0x840,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NiagaraComponent>,
               InternalVTableHelperCtorCaller<UDS_NiagaraComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NiagaraComponent.InnerSingleton;
}

// UDS_NiagaraComponent @ 14b52f880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UDS_NiagaraComponent * __thiscall
UDS_NiagaraComponent::UDS_NiagaraComponent(UDS_NiagaraComponent *this,FVTableHelper *param_1)

{
  UNiagaraComponent::UNiagaraComponent((UNiagaraComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this->NiagaraCompChildChanged = 0;
  *(undefined8 *)&(this->NiagaraCompChildChanged).field_0x8 = 0;
  *(undefined8 *)&(this->NiagaraCompChildChanged).field_0x10 = 0;
  *(undefined8 *)&this->NiagaraCompPreUnregistered = 0;
  *(undefined8 *)&(this->NiagaraCompPreUnregistered).field_0x8 = 0;
  *(undefined4 *)&(this->NiagaraCompPreUnregistered).field_0x10 = 0;
  *(undefined8 *)&(this->NiagaraCompChildChanged).field_0x18 = 2;
  return this;
}

// UDS_NiagaraComponent @ 14b52f920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UDS_NiagaraComponent * __thiscall
UDS_NiagaraComponent::UDS_NiagaraComponent(UDS_NiagaraComponent *this,FObjectInitializer *param_1)

{
  UNiagaraComponent::UNiagaraComponent((UNiagaraComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this->NiagaraCompChildChanged = 0;
  *(undefined8 *)&(this->NiagaraCompChildChanged).field_0x8 = 0;
  *(undefined8 *)&(this->NiagaraCompChildChanged).field_0x10 = 0;
  *(undefined8 *)&this->NiagaraCompPreUnregistered = 0;
  *(undefined8 *)&(this->NiagaraCompPreUnregistered).field_0x8 = 0;
  *(undefined4 *)&(this->NiagaraCompPreUnregistered).field_0x10 = 0;
  *(undefined8 *)&(this->NiagaraCompChildChanged).field_0x18 = 2;
  return this;
}

// ~UDS_NiagaraComponent @ 14b530980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UDS_NiagaraComponent::~UDS_NiagaraComponent(UDS_NiagaraComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NiagaraCompPreUnregistered);
  pvVar1 = *(void **)&(this->NiagaraCompPreUnregistered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NiagaraCompPreUnregistered);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NiagaraCompChildChanged).field_0x8,
             *(int *)&(this->NiagaraCompChildChanged).field_0x10);
  pvVar1 = *(void **)&(this->NiagaraCompChildChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NiagaraCompChildChanged);
  UNiagaraComponent::~UNiagaraComponent((UNiagaraComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b532d80

UClass * __cdecl UDS_NiagaraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NiagaraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NiagaraComponent",
               &Z_Registration_Info_UClass_UDS_NiagaraComponent.InnerSingleton,
               StaticRegisterNativesUDS_NiagaraComponent,0x840,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NiagaraComponent>,
               InternalVTableHelperCtorCaller<UDS_NiagaraComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NiagaraComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_NiagaraComponent @ 14b533170

void __cdecl UDS_NiagaraComponent::StaticRegisterNativesUDS_NiagaraComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_NiagaraComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChildComponentActivated @ 14b5344d0

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
UDS_NiagaraComponent::execOnChildComponentActivated(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UActorComponent *local_res20;
  
  local_res20 = (UActorComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  OnChildComponentActivated((UDS_NiagaraComponent *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execOnChildComponentDeactivated @ 14b5345b0

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
UDS_NiagaraComponent::execOnChildComponentDeactivated
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UActorComponent *local_res10;
  
  local_res10 = (UActorComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChildComponentDeactivated((UDS_NiagaraComponent *)param_1,local_res10);
  return;
}

// BeginDestroy @ 14bc2de90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UDS_NiagaraComponent::BeginDestroy(UDS_NiagaraComponent *this)

{
  UObjectBaseUtility *pUVar1;
  UNiagaraComponentPool *this_00;
  UWorld *pUVar2;
  FNiagaraWorldManager *pFVar3;
  FString FStack_28;
  FString FStack_18;
  
  if (this->field_0x680 != '\0') {
    pUVar2 = *(UWorld **)&this->field_0xb0;
    if ((pUVar2 == (UWorld *)0x0) &&
       (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar2 == (UWorld *)0x0)) {
      if ((GNiagaraLogVerboseWarnings != 0) && (2 < (byte)LogNiagara._0_1_)) {
        pUVar1 = *(UObjectBaseUtility **)&this->field_0x550;
        if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
          ::FString::FString(&FStack_28,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName(pUVar1,&FStack_28,(UObject *)0x0,None);
        }
        if (*(longlong *)&this->field_0x10 == 0) {
          ::FString::FString(&FStack_18,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_18,(UObject *)0x0,None)
          ;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
        }
        if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((GNiagaraLogVerboseWarnings != 0) && (2 < (byte)LogNiagara._0_1_)) {
        pUVar1 = *(UObjectBaseUtility **)&this->field_0x550;
        if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
          ::FString::FString(&FStack_18,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName(pUVar1,&FStack_18,(UObject *)0x0,None);
        }
        if (*(longlong *)&this->field_0x10 == 0) {
          ::FString::FString(&FStack_28,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_28,(UObject *)0x0,None)
          ;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
        }
        if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
        }
      }
      pFVar3 = FNiagaraWorldManager::Get(pUVar2);
      if ((pFVar3 != (FNiagaraWorldManager *)0x0) &&
         (this_00 = (pFVar3->ComponentPool).field0_0x0.DebugPtr,
         this_00 != (UNiagaraComponentPool *)0x0)) {
        UNiagaraComponentPool::PooledComponentDestroyed(this_00,(UNiagaraComponent *)this);
      }
    }
    this->field_0x680 = 0;
  }
  UNiagaraComponent::UnregisterWithScalabilityManager((UNiagaraComponent *)this);
  UNiagaraComponent::DestroyInstance((UNiagaraComponent *)this);
  UPrimitiveComponent::BeginDestroy((UPrimitiveComponent *)this);
  return;
}

// OnChildAttached @ 14bc4e8f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_NiagaraComponent::OnChildAttached(UDS_NiagaraComponent *this,USceneComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  FName local_res10;
  FName local_res18;
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  ulonglong uStack_30;
  
  UNiagaraComponent::OnChildAttached((UNiagaraComponent *)this,param_1);
  pcVar3 = strstr("&UDS_NiagaraComponent::OnChildComponentActivated","::");
  pcVar5 = &DAT_00000002;
  if (pcVar3 == (char *)0x0) {
LAB_14bc4e95b:
    pcVar4 = &DAT_00000002;
LAB_14bc4e95e:
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
      pcVar4 = pcVar3;
      pcVar3 = strstr(pcVar4 + 1,"::");
    } while (pcVar3 != (char *)0x0);
    if (pcVar4 == (char *)0x0) goto LAB_14bc4e95b;
    pcVar4 = pcVar4 + 2;
    if (*pcVar4 == '0') goto LAB_14bc4e95e;
  }
  ::FName::FName(&local_res10,pcVar4);
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  local_48 = OnChildComponentActivated;
  TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>
  ::__Internal_AddDynamic<UDS_NiagaraComponent>
            ((TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>
              *)((longlong)&param_1->_padding_ + 2),this,(pmf_681c1e76 *)&local_48,local_res10);
  pcVar3 = strstr("&UDS_NiagaraComponent::OnChildComponentDeactivated","::");
  if (pcVar3 != (char *)0x0) {
    do {
      pcVar4 = pcVar3;
      pcVar3 = strstr(pcVar4 + 1,"::");
    } while (pcVar3 != (char *)0x0);
    if ((pcVar4 != (char *)0x0) && (pcVar5 = pcVar4 + 2, pcVar4[2] != '0')) goto LAB_14bc4ea48;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14bc4ea48:
  ::FName::FName(&local_res18,pcVar5);
  local_48 = OnChildComponentDeactivated;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_38 = OnChildComponentDeactivated;
  uStack_30 = uStack_40;
  TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
  ::__Internal_AddDynamic<UDS_NiagaraComponent>
            ((TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
              *)((longlong)&param_1->_padding_ + 3),this,(pmf_3679e646 *)&local_38,local_res18);
  return;
}

// OnChildComponentActivated @ 14bc4eab0

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
UDS_NiagaraComponent::OnChildComponentActivated
          (UDS_NiagaraComponent *this,UActorComponent *param_1,bool param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->NiagaraCompChildChanged,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->NiagaraCompChildChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->NiagaraCompChildChanged).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->NiagaraCompChildChanged).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->NiagaraCompChildChanged).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->NiagaraCompChildChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->NiagaraCompChildChanged,
               false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// OnChildComponentDeactivated @ 14bc4ebf0

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
UDS_NiagaraComponent::OnChildComponentDeactivated
          (UDS_NiagaraComponent *this,UActorComponent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->NiagaraCompPreUnregistered,&local_28);
  if ((*(int *)&(this->NiagaraCompPreUnregistered).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->NiagaraCompPreUnregistered).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnChildDetached @ 14bc4ec50

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
UDS_NiagaraComponent::OnChildDetached(UDS_NiagaraComponent *this,USceneComponent *param_1)

{
  return;
}

// OnRegister @ 14bc528f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_NiagaraComponent::OnRegister(UDS_NiagaraComponent *this)

{
  longlong *plVar1;
  bool bVar2;
  ULevel *pUVar3;
  longlong *plVar4;
  FLevelCollection *pFVar5;
  UObject *pUStackX_8;
  
  if (((this->field_0x9a & 0x10) != 0) && (*(longlong *)&this->field_0x648 == 0)) {
    UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  }
  pFVar5 = (FLevelCollection *)0x0;
  if (((this->field_0x678 & 4) != 0) && ((this->field_0x9a & 0x10) == 0)) {
    if (*(longlong *)&this->field_0xd0 != 0) {
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x6a0);
      if (!bVar2) {
        pUStackX_8 = *(UObject **)&this->field_0xd0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(pUStackX_8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x6a0,(FObjectPtr)&pUStackX_8);
      }
      if (*(longlong *)&this->field_0x6a8 == 0) {
        *(undefined8 *)&this->field_0x6a8 = *(undefined8 *)&this->field_0xd8;
      }
      plVar4 = *(longlong **)(*(longlong *)&this->field_0xd0 + 0xe8);
      plVar1 = plVar4 + *(int *)(*(longlong *)&this->field_0xd0 + 0xf0);
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if ((UDS_NiagaraComponent *)*plVar4 == (UDS_NiagaraComponent *)0x0) {
          bVar2 = this == (UDS_NiagaraComponent *)0x0;
        }
        else {
          bVar2 = (UDS_NiagaraComponent *)*plVar4 == this;
        }
        if (bVar2) {
          if (((this->field_0x9a & 8) == 0) ||
             ((((this->field_0x6b0 != '\0' && (this->field_0x6b1 != '\0')) &&
               (this->field_0x6b2 != '\0')) ||
              ((*(longlong *)&this->field_0x6a8 != *(longlong *)&this->field_0xd8 ||
               (bVar2 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::
                        UEOpEquals<USceneComponent,bool>
                                  ((TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *)
                                   &this->field_0x6a0,*(USceneComponent **)&this->field_0xd0),
               !bVar2)))))) {
            pUStackX_8 = (UObject *)((ulonglong)pUStackX_8 & 0xffffffff00000000);
            (**(code **)(*(longlong *)this + 0x518))(this,&pUStackX_8);
          }
          goto LAB_14905c476;
        }
      }
      pUStackX_8 = (UObject *)0x0;
      USceneComponent::SetupAttachment((USceneComponent *)this,(USceneComponent *)0x0,(FName)0x0);
    }
LAB_14905c476:
    *(undefined8 *)&this->field_0x6d0 = *(undefined8 *)&this->field_0x148;
    *(undefined8 *)&this->field_0x6d8 = *(undefined8 *)&this->field_0x150;
    *(undefined8 *)&this->field_0x6e0 = *(undefined8 *)&this->field_0x158;
    *(undefined8 *)&this->field_0x6e8 = *(undefined8 *)&this->field_0x160;
    *(undefined8 *)&this->field_0x6f0 = *(undefined8 *)&this->field_0x168;
    *(undefined8 *)&this->field_0x6f8 = *(undefined8 *)&this->field_0x170;
    *(undefined8 *)&this->field_0x700 = *(undefined8 *)&this->field_0x178;
    *(undefined8 *)&this->field_0x708 = *(undefined8 *)&this->field_0x180;
    *(undefined8 *)&this->field_0x710 = *(undefined8 *)&this->field_0x188;
  }
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  if (((*(longlong *)&this->field_0xc0 == 0) && (*(longlong *)&this->field_0xa8 == 0)) &&
     ((*(longlong *)&this->field_0xd0 != 0 &&
      ((*(uint *)(*(longlong *)&this->field_0xd0 + 8) >> 0x1e & 1) == 0)))) {
    pUVar3 = UActorComponent::GetComponentLevel(*(UActorComponent **)&this->field_0xd0);
    if (pUVar3 != (ULevel *)0x0) {
      pFVar5 = pUVar3->CachedLevelCollection;
    }
    *(FLevelCollection **)&this->field_0xc0 = pFVar5;
  }
  return;
}

// OnUnregister @ 14bc53930

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UDS_NiagaraComponent::OnUnregister(UDS_NiagaraComponent *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->NiagaraCompPreUnregistered,&local_28);
  if ((*(int *)&(this->NiagaraCompPreUnregistered).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->NiagaraCompPreUnregistered).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  UNiagaraComponent::OnUnregister((UNiagaraComponent *)this);
  return;
}

