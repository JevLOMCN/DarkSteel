// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 19

// StaticClass @ 146f13310

UClass * __cdecl UEnvQueryGenerator_BlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_BlueprintBase",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_BlueprintBase,0x80,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_BlueprintBase>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_BlueprintBase>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.InnerSingleton;
}

// UEnvQueryGenerator_BlueprintBase @ 146f2a9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEnvQueryGenerator_BlueprintBase * __thiscall
UEnvQueryGenerator_BlueprintBase::UEnvQueryGenerator_BlueprintBase
          (UEnvQueryGenerator_BlueprintBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_BlueprintBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  FText::FText(&this->GeneratorsActionDescription);
  (this->Context).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GeneratedItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->CallMode = Invalid;
  return this;
}

// UEnvQueryGenerator_BlueprintBase @ 146f2aa50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEnvQueryGenerator_BlueprintBase * __thiscall
UEnvQueryGenerator_BlueprintBase::UEnvQueryGenerator_BlueprintBase
          (UEnvQueryGenerator_BlueprintBase *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  UClass *pUVar2;
  FName *pFVar3;
  UFunction *pUVar4;
  FName local_res8;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd | 1;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_BlueprintBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  FText::FText(&this->GeneratorsActionDescription);
  (this->Context).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GeneratedItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->CallMode = Invalid;
  pUVar1 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Context).Class.field0_0x0.DebugPtr = pUVar1;
  pUVar1 = UEnvQueryItemType_Actor::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  pUVar1 = UEnvQueryItemType_Actor::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->GeneratedItemType).Class.field0_0x0.DebugPtr = pUVar1;
  pUVar2 = GetPrivateStaticClass();
  pFVar3 = ::FName::FName(&local_res8,0x10,L"DoItemGeneration",FNAME_Add);
  pUVar4 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar3,IncludeSuper);
  pUVar1 = (UClass *)pUVar4->_padding_;
  pFVar3 = ::FName::FName(&local_res8,0x1a,L"DoItemGenerationFromActors",FNAME_Add);
  pUVar4 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar3,IncludeSuper);
  if (pUVar1 == pUVar2) {
    if ((UClass *)pUVar4->_padding_ != pUVar2) {
      this->CallMode = FromActors;
    }
  }
  else {
    this->CallMode = FromVectors;
  }
  if (((this->CallMode == Invalid) && (pUVar1 = (UClass *)this->_padding_, pUVar1 != pUVar2)) &&
     (1 < (byte)LogEQS._0_1_)) {
    if (pUVar1 == (UClass *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_18);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~UEnvQueryGenerator_BlueprintBase @ 146f2e9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_BlueprintBase::~UEnvQueryGenerator_BlueprintBase
          (UEnvQueryGenerator_BlueprintBase *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_BlueprintBase__6B_;
  pIVar1 = (this->GeneratorsActionDescription).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddGeneratedActor @ 146f345a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_BlueprintBase::AddGeneratedActor
          (UEnvQueryGenerator_BlueprintBase *this,AActor *param_1)

{
  int iVar1;
  FEnvQueryInstance *this_00;
  USceneComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FWeakObjectPtr local_res8;
  AActor *local_res18;
  FName local_res20;
  FString local_58;
  double local_48;
  undefined8 uStack_40;
  TVector<double>_u_0 local_38;
  undefined8 uStack_20;
  
  if ((this->CachedQueryInstance == (FEnvQueryInstance *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedQueryInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_BlueprintBase.cpp"
                         ,100,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar6 = this->_padding_;
  if ((lVar6 != 0) && (pUVar5 = UEnvQueryItemType::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = this->_padding_;
      goto LAB_146f34621;
    }
  }
  lVar6 = 0;
LAB_146f34621:
  pUVar5 = UEnvQueryItemType_ActorBase::StaticClass();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      this_00 = this->CachedQueryInstance;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      FEnvQueryInstance::AddItemData<UEnvQueryItemType_Actor>(this_00,&local_res8);
      return;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3876887512890736741>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_BlueprintBase.cpp"
                     ,0x65,"ItemType->IsChildOf<UEnvQueryItemType_ActorBase>()");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (1 < (byte)LogEQS._0_1_) {
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_58);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (param_1 != (AActor *)0x0) {
    pUVar2 = (param_1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      uVar7 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar8 = (undefined4)
              ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_38._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_38._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_38._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_38._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      uVar7 = *(undefined4 *)(pUVar2->ComponentToWorld).Translation.ZW.m128d_f64;
      uVar8 = *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.ZW.m128d_f64 + 4);
      local_38._0_4_ = *(undefined4 *)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64;
      local_38._4_4_ =
           *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      local_38._8_4_ = *(undefined4 *)((pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      local_38._12_4_ =
           *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    }
    local_48 = (double)CONCAT44(uVar8,uVar7);
    uStack_40 = 0;
    uStack_20 = 0;
    local_38._s_0.Z = local_48;
    FEnvQueryInstance::AddItemData<UEnvQueryItemType_Point>
              (this->CachedQueryInstance,(FNavLocation *)&local_38._s_0);
  }
  return;
}

// AddGeneratedVector @ 146f347d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_BlueprintBase::AddGeneratedVector
          (UEnvQueryGenerator_BlueprintBase *this,TVector<double> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  FName local_res8;
  FString local_48;
  undefined8 uStack_30;
  TVector<double>_u_0 local_28;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((this->CachedQueryInstance == (FEnvQueryInstance *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedQueryInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_BlueprintBase.cpp"
                         ,0x56,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar5 = this->_padding_;
  if ((lVar5 != 0) && (pUVar4 = UEnvQueryItemType::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = this->_padding_;
      goto LAB_146f34859;
    }
  }
  lVar5 = 0;
LAB_146f34859:
  pUVar4 = UEnvQueryItemType_ActorBase::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3876887512890736727>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_BlueprintBase.cpp"
                         ,0x57,"ItemType->IsChildOf<UEnvQueryItemType_ActorBase>() == false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((byte)LogEQS._0_1_ < 2) {
        return;
      }
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
      if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      return;
    }
  }
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._16_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_28._20_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  uStack_30 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  FEnvQueryInstance::AddItemData<UEnvQueryItemType_Point>
            (this->CachedQueryInstance,(FNavLocation *)&local_28._s_0);
  return;
}

// DoItemGeneration @ 146f41980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_BlueprintBase::DoItemGeneration
          (UEnvQueryGenerator_BlueprintBase *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    uVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 0x18);
    }
  }
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DoItemGenerationFromActors @ 146f41a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_BlueprintBase::DoItemGenerationFromActors
          (UEnvQueryGenerator_BlueprintBase *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    uVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GenerateItems @ 146f4c870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_BlueprintBase::GenerateItems
          (UEnvQueryGenerator_BlueprintBase *this,FEnvQueryInstance *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  UClass *pUVar7;
  FName FVar8;
  longlong lVar9;
  FName local_res8;
  FString local_38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  
  this->CachedQueryInstance = param_1;
  if (this->CallMode == FromVectors) {
    pUVar2 = (this->Context).Class.field0_0x0.DebugPtr;
    pUVar7 = (UClass *)0x0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar5 = UEnvQueryContext::StaticClass(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar7 = (this->Context).Class.field0_0x0.DebugPtr;
      }
    }
    FEnvQueryInstance::PrepareContext(param_1,pUVar7,&local_28);
    FVar4.Data = local_28.AllocatorInstance.Data;
    lVar9 = (longlong)local_28.ArrayNum;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.ArrayNum = local_28.ArrayNum;
    FVar8 = NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration;
    if (local_28.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_28.ArrayNum,0,(ForAnyElementType *)&local_38,local_28.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,FVar4.Data,lVar9 * 0x18);
      FVar8 = NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration;
    }
  }
  else {
    if (this->CallMode != FromActors) {
      if (2 < (byte)LogEQS._0_1_) {
        if (this->_padding_ == 0) {
          ::FString::FString((FString *)&local_28,L"None");
        }
        else {
          local_res8 = *(FName *)(this->_padding_ + 0x18);
          ::FName::ToString(&local_res8,(FString *)&local_28);
        }
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        this->CachedQueryInstance = (FEnvQueryInstance *)0x0;
        return;
      }
      this->CachedQueryInstance = (FEnvQueryInstance *)0x0;
      return;
    }
    pUVar2 = (this->Context).Class.field0_0x0.DebugPtr;
    pUVar7 = (UClass *)0x0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar5 = UEnvQueryContext::StaticClass(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar7 = (this->Context).Class.field0_0x0.DebugPtr;
      }
    }
    FEnvQueryInstance::PrepareContext
              (param_1,pUVar7,(TArray<AActor_*,TSizedDefaultAllocator<32>_> *)&local_28);
    FVar4.Data = local_28.AllocatorInstance.Data;
    lVar9 = (longlong)local_28.ArrayNum;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.ArrayNum = local_28.ArrayNum;
    FVar8 = NAME_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors;
    if (local_28.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_28.ArrayNum,0,(ForAnyElementType *)&local_38,local_28.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,FVar4.Data,lVar9 << 3);
      FVar8 = NAME_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors;
    }
  }
  pUVar6 = UObject::FindFunctionChecked((UObject *)this,FVar8);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar6,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  this->CachedQueryInstance = (FEnvQueryInstance *)0x0;
  return;
}

// GetDescriptionDetails @ 146f50f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_BlueprintBase::GetDescriptionDetails
          (UEnvQueryGenerator_BlueprintBase *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,L"None");
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f53b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_BlueprintBase::GetDescriptionTitle
          (UEnvQueryGenerator_BlueprintBase *this,FText *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UClass *pUVar5;
  FTextFormat *pFVar6;
  UClass *pUVar7;
  undefined1 local_res8 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_e8;
  FString local_d8;
  FText local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FFormatArgumentValue local_88;
  FFormatArgumentValue local_68;
  FFormatArgumentValue local_48;
  FText local_28;
  FTextFormat local_18;
  
  local_e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Pairs.ArrayNum = 0;
  local_e8.Pairs.ArrayMax = 0;
  UEnvQueryTypes::GetShortTypeName(&local_c8,(UObject *)this);
  local_68.Type = Text;
  FText::FText((FText *)&local_68.TextValue,&local_c8);
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_d8,L"DescriptionTitle");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_e8,&local_d8,&local_68);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  local_88.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(this->GeneratorsActionDescription).TextData.Reference;
  local_88.Type = Text;
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 8))(local_88.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res8);
  }
  local_88.TextValue.field0_0x0.TypedValue.Flags = (this->GeneratorsActionDescription).Flags;
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_b8,L"DescribeGeneratorAction");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_e8,&local_b8,&local_88);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  pUVar7 = (this->Context).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 != (UClass *)0x0) goto LAB_146f53ccd;
  }
  else if (pUVar7 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_146f53ccd:
    pUVar5 = UEnvQueryContext::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_146f53cfd;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146f53cfd:
  UEnvQueryTypes::GetShortTypeName(&local_98,(UObject *)pUVar7);
  local_48.Type = Text;
  FText::FText((FText *)&local_48.TextValue,&local_98);
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_a8,L"DescribeContext");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_e8,&local_a8,&local_48);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"EnvQueryGenerator",L"DescriptionBlueprintImplementedGenerator",
                      L"{DescriptionTitle}: {DescribeGeneratorAction} around {DescribeContext}");
  pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
  FText::Format(__return_storage_ptr__,pFVar6,&local_e8);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_e8.Pairs.AllocatorInstance.Data,
             local_e8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_e8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_e8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58090

UClass * __cdecl UEnvQueryGenerator_BlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_BlueprintBase",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_BlueprintBase,0x80,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_BlueprintBase>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_BlueprintBase>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.InnerSingleton;
}

// GetQuerier @ 146f59900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
UEnvQueryGenerator_BlueprintBase::GetQuerier(UEnvQueryGenerator_BlueprintBase *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if (this->CachedQueryInstance == (FEnvQueryInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedQueryInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_BlueprintBase.cpp"
                       ,0x76,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                               ((longlong)&this->CachedQueryInstance->_padding_ + 4));
  return pUVar3;
}

// GetWorld @ 146f5ad70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UEnvQueryGenerator_BlueprintBase::GetWorld(UEnvQueryGenerator_BlueprintBase *this)

{
  UWorld *pUVar1;
  
  if (this->CachedQueryInstance != (FEnvQueryInstance *)0x0) {
    pUVar1 = (this->CachedQueryInstance->World).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UWorld *)0x0;
}

// PostInitProperties @ 146f5f710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_BlueprintBase::PostInitProperties(UEnvQueryGenerator_BlueprintBase *this)

{
  UClass *pUVar1;
  
  UObject::PostInitProperties((UObject *)this);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    pUVar1 = (this->GeneratedItemType).Class.field0_0x0.DebugPtr;
    if (pUVar1 == (UClass *)0x0) {
      this->_padding_ = 0;
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)(this->GeneratedItemType).Class.field0_0x0;
  return;
}

// StaticRegisterNativesUEnvQueryGenerator_BlueprintBase @ 146f76cc0

void __cdecl
UEnvQueryGenerator_BlueprintBase::StaticRegisterNativesUEnvQueryGenerator_BlueprintBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddGeneratedActor @ 146f7f3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEnvQueryGenerator_BlueprintBase::execAddGeneratedActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *local_res10;
  
  local_res10 = (AActor *)0x0;
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
  AddGeneratedActor((UEnvQueryGenerator_BlueprintBase *)param_1,local_res10);
  return;
}

// execAddGeneratedVector @ 146f7f460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEnvQueryGenerator_BlueprintBase::execAddGeneratedVector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  FName local_res8;
  undefined4 local_88;
  undefined4 uStack_84;
  FString local_78;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  TVector<double>_u_0 local_28;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = local_48;
  dStack_50 = dStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[2].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedQueryInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_BlueprintBase.cpp"
                         ,0x56,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar6 = *(longlong *)&param_1[1].field_0x18;
  if ((lVar6 != 0) && (pUVar5 = UEnvQueryItemType::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = *(longlong *)&param_1[1].field_0x18;
      goto LAB_146f7f54e;
    }
  }
  lVar6 = 0;
LAB_146f7f54e:
  pUVar5 = UEnvQueryItemType_ActorBase::StaticClass();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3876887512890736727>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_BlueprintBase.cpp"
                         ,0x57,"ItemType->IsChildOf<UEnvQueryItemType_ActorBase>() == false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((byte)LogEQS._0_1_ < 2) {
        return;
      }
      local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res8,&local_78);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
      if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      return;
    }
  }
  local_88 = (undefined4)local_38;
  uStack_84 = (undefined4)((ulonglong)local_38 >> 0x20);
  local_28._s_0.X = local_58;
  local_28._s_0.Y = dStack_50;
  uStack_60 = 0;
  local_28._16_4_ = local_88;
  local_28._20_4_ = uStack_84;
  uStack_10 = 0;
  uStack_c = 0;
  FEnvQueryInstance::AddItemData<UEnvQueryItemType_Point>
            (*(FEnvQueryInstance **)&param_1[2].field_0x20,(FNavLocation *)&local_28._s_0);
  return;
}

// execGetQuerier @ 146f80780

void __cdecl
UEnvQueryGenerator_BlueprintBase::execGetQuerier(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[2].field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedQueryInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_BlueprintBase.cpp"
                       ,0x76,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&param_1[2].field_0x20 + 0x34));
  *(UObject **)param_3 = pUVar3;
  return;
}

