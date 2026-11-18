// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146f86340

UClass * __cdecl UAIPerceptionStimuliSourceComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionStimuliSourceComponent",
               &Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.InnerSingleton,
               StaticRegisterNativesUAIPerceptionStimuliSourceComponent,0xd8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAIPerceptionStimuliSourceComponent>,
               InternalVTableHelperCtorCaller<UAIPerceptionStimuliSourceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.InnerSingleton;
}

// UAIPerceptionStimuliSourceComponent @ 146f93a70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAIPerceptionStimuliSourceComponent * __thiscall
UAIPerceptionStimuliSourceComponent::UAIPerceptionStimuliSourceComponent
          (UAIPerceptionStimuliSourceComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->RegisterAsSourceForSenses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisterAsSourceForSenses).ArrayNum = 0;
  (this->RegisterAsSourceForSenses).ArrayMax = 0;
  return this;
}

// UAIPerceptionStimuliSourceComponent @ 146f93ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAIPerceptionStimuliSourceComponent * __thiscall
UAIPerceptionStimuliSourceComponent::UAIPerceptionStimuliSourceComponent
          (UAIPerceptionStimuliSourceComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->bAutoRegisterAsSource = 0;
  this->bSuccessfullyRegistered = 0;
  (this->RegisterAsSourceForSenses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisterAsSourceForSenses).ArrayNum = 0;
  (this->RegisterAsSourceForSenses).ArrayMax = 0;
  return this;
}

// ~UAIPerceptionStimuliSourceComponent @ 146f96960

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
UAIPerceptionStimuliSourceComponent::~UAIPerceptionStimuliSourceComponent
          (UAIPerceptionStimuliSourceComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->RegisterAsSourceForSenses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146fb3790

UClass * __cdecl UAIPerceptionStimuliSourceComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionStimuliSourceComponent",
               &Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.InnerSingleton,
               StaticRegisterNativesUAIPerceptionStimuliSourceComponent,0xd8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAIPerceptionStimuliSourceComponent>,
               InternalVTableHelperCtorCaller<UAIPerceptionStimuliSourceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.InnerSingleton;
}

// OnRegister @ 146fc1d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAIPerceptionStimuliSourceComponent::OnRegister(UAIPerceptionStimuliSourceComponent *this)

{
  <lambda_1> local_res8 [32];
  
  UActorComponent::OnRegister((UActorComponent *)this);
  TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_UAIPerceptionStimuliSourceComponent::OnRegister_::__l3::<lambda_1>_>
            (&this->RegisterAsSourceForSenses,local_res8,Default);
  if (this->bAutoRegisterAsSource != 0) {
    RegisterWithPerceptionSystem(this);
    return;
  }
  return;
}

// RegisterForSense @ 146fc7630

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
UAIPerceptionStimuliSourceComponent::RegisterForSense
          (UAIPerceptionStimuliSourceComponent *this,TSubclassOf<UAISense> param_1)

{
  int iVar1;
  AActor *this_00;
  bool bVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  UAIPerceptionSystem *this_01;
  longlong lVar5;
  FName local_res10;
  FString local_28;
  
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  pUVar3 = UAISense::StaticClass();
  if (pUVar3 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (*(longlong *)param_1.Class.field0_0x0 == 0) {
    return;
  }
  this_00 = (AActor *)this->_padding_;
  if (this_00 == (AActor *)0x0) {
    return;
  }
  pUVar4 = AActor::GetWorld(this_00);
  if (pUVar4 == (UWorld *)0x0) {
    return;
  }
  this_01 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar4);
  if (this_01 == (UAIPerceptionSystem *)0x0) {
    return;
  }
  if ((((FVisualLogger::bIsRecording == 0) || (this->bSuccessfullyRegistered != 0)) ||
      ((this->RegisterAsSourceForSenses).ArrayNum == 0)) || (FVisualLogger::bIsRecording == 0))
  goto LAB_146fc7795;
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar5 == 0) || (pUVar3 = UAISense::StaticClass(), pUVar3 == (UClass *)0x0)) {
LAB_146fc7739:
    lVar5 = 0;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_146fc7739;
    lVar5 = *(longlong *)param_1.Class.field0_0x0;
  }
  local_res10 = *(FName *)(lVar5 + 0x18);
  ::FName::ToString(&local_res10,&local_28);
  FVisualLogger::CategorizedLogfImpl
            ((UObject *)this_00,(FName *)&LogAIPerception.field_0x4,Warning,
             L"Registering as stimuli source for sense %s while the UAIPerceptionStimuliSourceComponent has not registered with the AIPerceptionSystem just yet. This will result in posing as a source for only this one sense."
            );
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_146fc7795:
  local_res10 = *(FName *)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  UAIPerceptionSystem::RegisterSourceForSenseClass
            (this_01,(TSubclassOf<UAISense>)&local_res10,this_00);
  TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TSubclassOf<UAISense>_const_&>
            (&this->RegisterAsSourceForSenses,(TSubclassOf<UAISense> *)param_1.Class.field0_0x0);
  this->bSuccessfullyRegistered = 1;
  return;
}

// RegisterWithPerceptionSystem @ 146fc94d0

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
UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem
          (UAIPerceptionStimuliSourceComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  AActor *this_00;
  longlong lVar4;
  UObject *pUVar5;
  bool bVar6;
  UWorld *pUVar7;
  UAIPerceptionSystem *this_01;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  UObject *local_res8;
  
  if (ZPULL(*(undefined4 *)&this->field_0xc0,1,1) == 0) {
    if ((this->RegisterAsSourceForSenses).ArrayNum == 0) {
      *(uint *)&this->field_0xc0 = *(undefined4 *)&this->field_0xc0 | 2;
      return;
    }
    this_00 = (AActor *)this->_padding_;
    if (((this_00 != (AActor *)0x0) && (pUVar7 = AActor::GetWorld(this_00), pUVar7 != (UWorld *)0x0)
        ) && (this_01 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar7),
             this_01 != (UAIPerceptionSystem *)0x0)) {
      pFVar9 = (this->RegisterAsSourceForSenses).AllocatorInstance.Data;
      iVar2 = (this->RegisterAsSourceForSenses).ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->RegisterAsSourceForSenses).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TSubclassOf<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (pFVar9 == pFVar1) break;
        lVar4 = *(longlong *)pFVar9;
        if ((lVar4 != 0) && (pUVar8 = UAISense::StaticClass(), pUVar8 != (UClass *)0x0)) {
          iVar3 = (int)pUVar8->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar3) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar8->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (pUVar5 = *(UObject **)pFVar9, pUVar5 != (UObject *)0x0)) {
            local_res8 = pUVar5;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar5);
            }
            UAIPerceptionSystem::RegisterSourceForSenseClass
                      (this_01,(TSubclassOf<UAISense>)&local_res8,this_00);
            this->bSuccessfullyRegistered = 1;
          }
        }
        pFVar9 = pFVar9 + 8;
      }
    }
  }
  return;
}

// StaticRegisterNativesUAIPerceptionStimuliSourceComponent @ 146fd34c0

void __cdecl
UAIPerceptionStimuliSourceComponent::StaticRegisterNativesUAIPerceptionStimuliSourceComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterFromPerceptionSystem @ 146fda850

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
UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem
          (UAIPerceptionStimuliSourceComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  AActor *this_00;
  UWorld *pUVar3;
  UAIPerceptionSystem *this_01;
  FScriptContainerElement *pFVar4;
  UObject *local_res8;
  
  if ((this->bSuccessfullyRegistered != 0) &&
     (this_00 = (AActor *)this->_padding_, this_00 != (AActor *)0x0)) {
    pUVar3 = AActor::GetWorld(this_00);
    if ((pUVar3 != (UWorld *)0x0) &&
       (this_01 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar3),
       this_01 != (UAIPerceptionSystem *)0x0)) {
      pFVar4 = (this->RegisterAsSourceForSenses).AllocatorInstance.Data;
      iVar2 = (this->RegisterAsSourceForSenses).ArrayNum;
      pFVar1 = pFVar4 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->RegisterAsSourceForSenses).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TSubclassOf<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (pFVar4 == pFVar1) break;
        local_res8 = *(UObject **)pFVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res8);
        }
        UAIPerceptionSystem::UnregisterSource(this_01,this_00,(TSubclassOf<UAISense>)&local_res8);
        pFVar4 = pFVar4 + 8;
      }
    }
    this->bSuccessfullyRegistered = 0;
  }
  return;
}

// UnregisterFromSense @ 146fda940

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
UAIPerceptionStimuliSourceComponent::UnregisterFromSense
          (UAIPerceptionStimuliSourceComponent *this,TSubclassOf<UAISense> param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  AActor *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UWorld *pUVar10;
  UAIPerceptionSystem *this_01;
  uint uVar11;
  UObject *local_res10;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar3 != 0) && (pUVar9 = UAISense::StaticClass(), pUVar9 != (UClass *)0x0)) {
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((((bVar6) && (*(longlong *)param_1.Class.field0_0x0 != 0)) &&
        (this_00 = (AActor *)this->_padding_, this_00 != (AActor *)0x0)) &&
       ((pUVar10 = AActor::GetWorld(this_00), pUVar10 != (UWorld *)0x0 &&
        (this_01 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar10),
        this_01 != (UAIPerceptionSystem *)0x0)))) {
      local_res10 = *(UObject **)param_1.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      UAIPerceptionSystem::UnregisterSource(this_01,this_00,(TSubclassOf<UAISense>)&local_res10);
      uVar7 = TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_>::Find
                        (&this->RegisterAsSourceForSenses,
                         (TSubclassOf<UAISense> *)param_1.Class.field0_0x0);
      if (uVar7 != 0xffffffff) {
        uVar11 = 0;
        if ((int)(uVar7 + 1) <= (this->RegisterAsSourceForSenses).ArrayNum) {
          uVar11 = ~uVar7 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (this->RegisterAsSourceForSenses).ArrayNum;
        pFVar4 = (this->RegisterAsSourceForSenses).AllocatorInstance.Data;
        iVar8 = iVar2 + ~uVar7;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar7 * 8,pFVar4 + (longlong)(iVar2 - iVar8) * 8,
                  (longlong)iVar8 << 3);
        }
        piVar1 = &(this->RegisterAsSourceForSenses).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      this->bSuccessfullyRegistered = 0;
      uVar7 = 0;
      if (0 < (this->RegisterAsSourceForSenses).ArrayNum) {
        uVar7 = 2;
      }
      *(uint *)&this->field_0xc0 = *(uint *)&this->field_0xc0 | uVar7;
    }
  }
  return;
}

// execRegisterForSense @ 146fe6420

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
UAIPerceptionStimuliSourceComponent::execRegisterForSense
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  AActor *this;
  bool bVar3;
  FName FVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UAIPerceptionSystem *this_00;
  FName FVar7;
  FName local_res10;
  FName local_res20;
  FName local_38;
  FString local_30;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res20;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res20 == (FName)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FVar4 = local_res10;
  if ((local_res10 != (FName)0x0) && (pUVar5 = UAISense::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)((longlong)FVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((bVar3) && (local_res10 != (FName)0x0)) &&
        (this = *(AActor **)&param_1[4].field_0x8, this != (AActor *)0x0)) &&
       ((pUVar6 = AActor::GetWorld(this), pUVar6 != (UWorld *)0x0 &&
        (this_00 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar6), FVar4 = local_res10,
        this_00 != (UAIPerceptionSystem *)0x0)))) {
      if (((FVisualLogger::bIsRecording != 0) &&
          (((param_1[4].field_0x20 & 2) == 0 && (*(int *)&param_1[5].field_0x8 != 0)))) &&
         (FVisualLogger::bIsRecording != 0)) {
        if ((local_res10 != (FName)0x0) &&
           (pUVar5 = UAISense::StaticClass(), pUVar5 != (UClass *)0x0)) {
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)((longlong)FVar4 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)((longlong)FVar4 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FVar7 = local_res10;
          }
        }
        local_38 = *(FName *)((longlong)FVar7 + 0x18);
        ::FName::ToString(&local_38,&local_30);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogAIPerception.field_0x4,Warning,
                   L"Registering as stimuli source for sense %s while the UAIPerceptionStimuliSourceComponent has not registered with the AIPerceptionSystem just yet. This will result in posing as a source for only this one sense."
                  );
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
      }
      local_38 = local_res10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      UAIPerceptionSystem::RegisterSourceForSenseClass
                (this_00,(TSubclassOf<UAISense>)&local_38,this);
      TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSubclassOf<UAISense>_const_&>
                ((TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_> *)(param_1 + 5),
                 (TSubclassOf<UAISense> *)&local_res10);
      *(uint *)&param_1[4].field_0x20 = *(uint *)&param_1[4].field_0x20 | 2;
    }
  }
  return;
}

// execRegisterWithPerceptionSystem @ 146fe6860

void __cdecl
UAIPerceptionStimuliSourceComponent::execRegisterWithPerceptionSystem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RegisterWithPerceptionSystem((UAIPerceptionStimuliSourceComponent *)param_1);
  return;
}

// execUnregisterFromPerceptionSystem @ 146fe84b0

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
UAIPerceptionStimuliSourceComponent::execUnregisterFromPerceptionSystem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this;
  UWorld *pUVar3;
  UAIPerceptionSystem *this_00;
  undefined8 *puVar4;
  UObject *local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((param_1[4].field_0x20 & 2) != 0) &&
     (this = *(AActor **)&param_1[4].field_0x8, this != (AActor *)0x0)) {
    pUVar3 = AActor::GetWorld(this);
    if ((pUVar3 != (UWorld *)0x0) &&
       (this_00 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar3),
       this_00 != (UAIPerceptionSystem *)0x0)) {
      puVar4 = *(undefined8 **)(param_1 + 5);
      iVar2 = *(int *)&param_1[5].field_0x8;
      puVar1 = puVar4 + iVar2;
      while( true ) {
        if (*(int *)&param_1[5].field_0x8 != iVar2) {
          `TCheckedPointerIterator<TSubclassOf<UAISense>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (puVar4 == puVar1) break;
        local_res8 = (UObject *)*puVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res8);
        }
        UAIPerceptionSystem::UnregisterSource(this_00,this,(TSubclassOf<UAISense>)&local_res8);
        puVar4 = puVar4 + 1;
      }
    }
    *(uint *)&param_1[4].field_0x20 = *(uint *)&param_1[4].field_0x20 & 0xfffffffd;
  }
  return;
}

// execUnregisterFromSense @ 146fe85b0

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
UAIPerceptionStimuliSourceComponent::execUnregisterFromSense
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  AActor *this;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  UObject *pUVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UWorld *pUVar10;
  UAIPerceptionSystem *this_00;
  UObject *pUVar11;
  uint uVar12;
  uint uVar13;
  UObject *pUVar14;
  UObject *pUVar15;
  uint uVar16;
  longlong *plVar17;
  UObject *local_res10;
  UObject *local_res20;
  
  pUVar14 = (UObject *)0x0;
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
  pUVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res10 == (UObject *)0x0) {
      return;
    }
  }
  else {
    if (local_res10 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar9 = UAISense::StaticClass();
  if (pUVar9 != (UClass *)0x0) {
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)&pUVar6[1].field_0x10 < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((((bVar7) && (this = *(AActor **)&param_1[4].field_0x8, this != (AActor *)0x0)) &&
        (pUVar10 = AActor::GetWorld(this), pUVar10 != (UWorld *)0x0)) &&
       (this_00 = UAIPerceptionSystem::GetCurrent((UObject *)pUVar10),
       this_00 != (UAIPerceptionSystem *)0x0)) {
      local_res20 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      UAIPerceptionSystem::UnregisterSource(this_00,this,(TSubclassOf<UAISense>)&local_res20);
      plVar3 = *(longlong **)(param_1 + 5);
      iVar8 = *(int *)&param_1[5].field_0x8;
      uVar13 = 0;
      for (plVar17 = plVar3; plVar17 != plVar3 + iVar8; plVar17 = plVar17 + 1) {
        lVar4 = *plVar17;
        pUVar15 = pUVar14;
        if ((lVar4 != 0) && (pUVar9 = UAISense::StaticClass(), pUVar9 != (UClass *)0x0)) {
          iVar1 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar9->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            pUVar15 = (UObject *)*plVar17;
          }
        }
        pUVar9 = UAISense::StaticClass();
        if (pUVar9 == (UClass *)0x0) {
LAB_146fe877f:
          pUVar11 = pUVar14;
        }
        else {
          iVar1 = (int)pUVar9->_padding_;
          if ((*(int *)&pUVar6[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar9->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          pUVar11 = pUVar6;
          if (!bVar7) goto LAB_146fe877f;
        }
        if (pUVar15 == pUVar11) {
          uVar16 = (uint)((longlong)plVar17 - (longlong)plVar3 >> 3);
          if (uVar16 != 0xffffffff) {
            uVar12 = uVar13;
            if ((int)(uVar16 + 1) <= *(int *)&param_1[5].field_0x8) {
              uVar12 = ~uVar16 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = *(int *)&param_1[5].field_0x8 + ~uVar16;
            if (1 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              memmove((void *)(*(longlong *)(param_1 + 5) + (longlong)(int)uVar16 * 8),
                      (void *)(*(longlong *)(param_1 + 5) +
                              (longlong)(*(int *)&param_1[5].field_0x8 - iVar8) * 8),
                      (longlong)iVar8 << 3);
            }
            *(int *)&param_1[5].field_0x8 = *(int *)&param_1[5].field_0x8 + -1;
          }
          break;
        }
      }
      *(uint *)&param_1[4].field_0x20 = *(uint *)&param_1[4].field_0x20 & 0xfffffffd;
      if (0 < *(int *)&param_1[5].field_0x8) {
        uVar13 = 2;
      }
      *(uint *)&param_1[4].field_0x20 = *(uint *)&param_1[4].field_0x20 | uVar13;
    }
  }
  return;
}

