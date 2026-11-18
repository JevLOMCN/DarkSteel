// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b5b78e0

UClass * __cdecl UDS_TamingNPCAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TamingNPCAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TamingNPCAbilityData",
               &Z_Registration_Info_UClass_UDS_TamingNPCAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_TamingNPCAbilityData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TamingNPCAbilityData>,
               InternalVTableHelperCtorCaller<UDS_TamingNPCAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TamingNPCAbilityData.InnerSingleton;
}

// UDS_TamingNPCAbilityData @ 14b5bcf80

UDS_TamingNPCAbilityData * __thiscall
UDS_TamingNPCAbilityData::UDS_TamingNPCAbilityData
          (UDS_TamingNPCAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->TamingState = Max;
  this->PreTamingState = Max;
  this->_padding_ = (longlong)&___7UDS_TamingNPCAbilityData__6B_;
  this->TamerEntityID = 0;
  (this->TamingWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  this->TamingResourceID = 0;
  this->IsLoop = false;
  this->HasEndAnim = false;
  return this;
}

// UDS_TamingNPCAbilityData @ 14b5bcfc0

UDS_TamingNPCAbilityData * __thiscall
UDS_TamingNPCAbilityData::UDS_TamingNPCAbilityData
          (UDS_TamingNPCAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->TamingState = Max;
  this->PreTamingState = Max;
  this->_padding_ = (longlong)&___7UDS_TamingNPCAbilityData__6B_;
  this->TamerEntityID = 0;
  (this->TamingWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  this->TamingResourceID = 0;
  this->IsLoop = false;
  this->HasEndAnim = false;
  return this;
}

// ~UDS_TamingNPCAbilityData @ 14b5bde90

void __thiscall UDS_TamingNPCAbilityData::~UDS_TamingNPCAbilityData(UDS_TamingNPCAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_TamingNPCAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bf7e0

UClass * __cdecl UDS_TamingNPCAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TamingNPCAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TamingNPCAbilityData",
               &Z_Registration_Info_UClass_UDS_TamingNPCAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_TamingNPCAbilityData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TamingNPCAbilityData>,
               InternalVTableHelperCtorCaller<UDS_TamingNPCAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TamingNPCAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_TamingNPCAbilityData @ 14b5c0080

void __cdecl UDS_TamingNPCAbilityData::StaticRegisterNativesUDS_TamingNPCAbilityData(void)

{
  return;
}

// Created @ 14ba3c490

void __thiscall UDS_TamingNPCAbilityData::Created(UDS_TamingNPCAbilityData *this)

{
  this->TamingState = Max;
  return;
}

// Deleted @ 14ba3ce30

void __thiscall UDS_TamingNPCAbilityData::Deleted(UDS_TamingNPCAbilityData *this)

{
  return;
}

// ResetData @ 14ba69590

void __thiscall UDS_TamingNPCAbilityData::ResetData(UDS_TamingNPCAbilityData *this)

{
  this->TamingState = Max;
  this->PreTamingState = Max;
  return;
}

// SetTamingState @ 14ba75110

void __thiscall
UDS_TamingNPCAbilityData::SetTamingState(UDS_TamingNPCAbilityData *this,EDS_TamingState *param_1)

{
  this->PreTamingState = this->TamingState;
  this->TamingState = *param_1;
  UpdateTamingWidgetComponent(this);
  return;
}

// UpdateTamingWidgetComponent @ 14ba81d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_TamingNPCAbilityData::UpdateTamingWidgetComponent(UDS_TamingNPCAbilityData *this)

{
  EDS_TamingState EVar1;
  code *pcVar2;
  FName FVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UDS_ActorAttachedWidgetComponent *pUVar9;
  FDS_ResourceEtcTableRow *pFVar10;
  FName *pFVar11;
  longlong *plVar12;
  undefined1 auStackY_228 [32];
  FName local_1f8;
  FWeakObjectPtr local_1f0;
  FWeakObjectPtr local_1e8 [2];
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if (this->TamingState != this->PreTamingState) {
    pUVar9 = (this->TamingWidgetComponent).field0_0x0.DebugPtr;
    if (pUVar9 != (UDS_ActorAttachedWidgetComponent *)0x0) {
      (**(code **)(*(longlong *)pUVar9 + 0x4a0))(pUVar9,0);
      (this->TamingWidgetComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
    }
    EVar1 = this->TamingState;
    if (EVar1 == MoveToFood) {
      this->TamingResourceID = 0x5209;
      this->IsLoop = false;
      this->HasEndAnim = true;
    }
    else if (EVar1 == Think) {
      this->TamingResourceID = 0x520a;
      this->IsLoop = true;
      this->HasEndAnim = false;
    }
    else {
      if (EVar1 != Eat) {
        this->TamingResourceID = 0;
        this->IsLoop = false;
        this->HasEndAnim = false;
        return;
      }
      this->TamingResourceID = 0x520b;
      this->IsLoop = true;
      this->HasEndAnim = false;
    }
    local_1f8 = (FName)UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    pFVar4 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_1f8);
    if (pFVar4 == (FDS_EntityBase *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_TamingNPCAbilityData::UpdateTamingWidgetComponent",0x35,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x45,L"EntityBase is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      (**(code **)(pFVar4->_padding_ + 0x80))(pFVar4,local_1e8);
      (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,&local_1f0);
      local_1f8.ComparisonIndex.Value = 0;
      local_1f8.Number = 0;
      pUVar6 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
      pUVar7 = FWeakObjectPtr::Get(&local_1f0);
      FObjectInitializer::AssertIfInConstructor
                (pUVar7,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
      CheckIsClassChildOf_Internal(pUVar8,pUVar6);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1d8,pUVar6);
      local_1d8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_1d8._56_8_ = (UPackage *)0x0;
      local_1d8._16_4_ = 0;
      local_1d8._20_4_ = 0;
      local_1d8._24_4_ = RF_NoFlags;
      local_1d8._40_8_ = (UObject *)0x0;
      local_1d8[0x20] = false;
      local_1d8._8_8_ = pUVar7;
      pUVar9 = (UDS_ActorAttachedWidgetComponent *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
      if (local_1d8._64_8_ != 0) {
        plVar12 = (longlong *)(local_1d8 + 0x50);
        if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_1d8._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->TamingWidgetComponent).field0_0x0.DebugPtr = pUVar9;
      pFVar10 = FDS_ResourceEtcTableRow::GetRef((longlong)this->TamingResourceID,true);
      pUVar9 = (this->TamingWidgetComponent).field0_0x0.DebugPtr;
      local_1f8.ComparisonIndex.Value = 0;
      local_1f8.Number = 0;
      pUVar7 = FWeakObjectPtr::Get(&local_1f0);
      USceneComponent::SetupAttachment
                ((USceneComponent *)pUVar9,*(USceneComponent **)(pUVar7 + 0xb),(FName)0x0);
      pUVar9 = (this->TamingWidgetComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar9 + 0x508);
      pFVar11 = ::FName::FName(&local_1f8,"Buff_Top");
      FVar3 = *pFVar11;
      pUVar7 = FWeakObjectPtr::Get(local_1e8);
      (*pcVar2)(pUVar9,pUVar7,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->TamingWidgetComponent).field0_0x0.DebugPtr,&pFVar10->ResourcePath);
      UActorComponent::RegisterComponent
                ((UActorComponent *)(this->TamingWidgetComponent).field0_0x0.DebugPtr);
    }
  }
  return;
}

// UpdateTamingWidgetResource @ 14ba820a0

void __thiscall UDS_TamingNPCAbilityData::UpdateTamingWidgetResource(UDS_TamingNPCAbilityData *this)

{
  EDS_TamingState EVar1;
  
  EVar1 = this->TamingState;
  if (EVar1 == MoveToFood) {
    this->TamingResourceID = 0x5209;
    this->IsLoop = false;
    this->HasEndAnim = true;
    return;
  }
  if (EVar1 != Think) {
    if (EVar1 != Eat) {
      this->TamingResourceID = 0;
      this->IsLoop = false;
      this->HasEndAnim = false;
      return;
    }
    this->TamingResourceID = 0x520b;
    this->IsLoop = true;
    this->HasEndAnim = false;
    return;
  }
  this->TamingResourceID = 0x520a;
  this->IsLoop = true;
  this->HasEndAnim = false;
  return;
}

