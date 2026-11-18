// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b4ca2a0

UClass * __cdecl UDS_InteractionProcessAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionProcessAbility",
               &Z_Registration_Info_UClass_UDS_InteractionProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_InteractionProcessAbility,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_InteractionProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionProcessAbility.InnerSingleton;
}

// UDS_InteractionProcessAbility @ 14b4cb980

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

UDS_InteractionProcessAbility * __thiscall
UDS_InteractionProcessAbility::UDS_InteractionProcessAbility
          (UDS_InteractionProcessAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_InteractionProcessAbility @ 14b4cc180

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

void __thiscall
UDS_InteractionProcessAbility::~UDS_InteractionProcessAbility(UDS_InteractionProcessAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4cd260

UClass * __cdecl UDS_InteractionProcessAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionProcessAbility",
               &Z_Registration_Info_UClass_UDS_InteractionProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_InteractionProcessAbility,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_InteractionProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionProcessAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionProcessAbility @ 14b4cdc30

void __cdecl UDS_InteractionProcessAbility::StaticRegisterNativesUDS_InteractionProcessAbility(void)

{
  return;
}

// UDS_InteractionProcessAbility @ 14b7d7fc0

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

UDS_InteractionProcessAbility * __thiscall
UDS_InteractionProcessAbility::UDS_InteractionProcessAbility
          (UDS_InteractionProcessAbility *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x34;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x35;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x36;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x37;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x38;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x3e;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x3f;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x39;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x3a;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x3b;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x3c;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x3d;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x40;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x41;
  if (ChildInteractionAbilityList.ArrayNum == ChildInteractionAbilityList.ArrayMax) {
    ChildInteractionAbilityList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&ChildInteractionAbilityList.AllocatorInstance,
                    &ChildInteractionAbilityList.ArrayMax);
  }
  lVar1 = (longlong)ChildInteractionAbilityList.ArrayNum;
  ChildInteractionAbilityList.ArrayNum = ChildInteractionAbilityList.ArrayNum + 1;
  ChildInteractionAbilityList.AllocatorInstance.Data[lVar1] = (FScriptContainerElement)0x42;
  return this;
}

// Deactivate @ 14b7e3940

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

bool __cdecl
UDS_InteractionProcessAbility::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionProcessAbility::Deactivate",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x181,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = Interaction_Process;
      bVar1 = FDS_EntityBase::DeactivateAbility(this,local_148,param_2);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionProcessAbility::Deactivate",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x188,L"sourceEntity is nullptr. (%llu)");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// GetDefaultInputPolicy @ 14b7eb5a0

EDS_AbilityInputPolicy __thiscall
UDS_InteractionProcessAbility::GetDefaultInputPolicy(UDS_InteractionProcessAbility *this)

{
  bool bVar1;
  bool bVar2;
  EDS_AbilityInputPolicy EVar3;
  UDS_AbilitySystemComponent *this_00;
  UObject *pUVar4;
  int iVar5;
  EDS_AbilityInputPolicy EVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  
  bVar1 = false;
  EVar6 = None;
  iVar5 = ChildInteractionAbilityList.ArrayNum;
  pFVar8 = ChildInteractionAbilityList.AllocatorInstance.Data + iVar5;
  FVar7.Data = ChildInteractionAbilityList.AllocatorInstance.Data;
  while( true ) {
    if (ChildInteractionAbilityList.ArrayNum != iVar5) {
      `TCheckedPointerIterator<enum_EDS_AbilityTagType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar7.Data == pFVar8) break;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FDS_GameplayTags::GetAbilityTag((EDS_AbilityTagType *)FVar7.Data);
    UDS_AbilitySystemComponent::GetAbilityByTag(this_00,(FGameplayTag *)&local_res18);
    bVar2 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if ((!bVar2) && (pUVar4 = FWeakObjectPtr::Get(&local_res18), pUVar4[1].field_0x8 == '\x01')) {
      bVar1 = true;
      pUVar4 = FWeakObjectPtr::Get(&local_res18);
      EVar3 = pUVar4[8].field_0x10;
      if (EVar3 == None) {
        EVar3 = (**(code **)(*(longlong *)pUVar4 + 0x3c8))(pUVar4);
      }
      if (EVar6 < EVar3) {
        EVar6 = EVar3;
      }
    }
    FVar7.Data = FVar7.Data + 1;
  }
  EVar3 = EndIfInput;
  if (bVar1) {
    EVar3 = EVar6;
  }
  return EVar3;
}

// InitInteractionProcessAbilityData @ 14b7efff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

bool __cdecl
UDS_InteractionProcessAbility::InitInteractionProcessAbilityData
          (ulong64 *param_1,int param_2,
          TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  ulong64 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FWeakObjectPtr FVar9;
  bool bVar10;
  EDS_StuffGatherType EVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  UDS_LogManager *pUVar15;
  UObject *pUVar16;
  FDS_EntityBase *pFVar17;
  FDS_EntityBase *this;
  FDS_CharacterBaseTableRow *pFVar18;
  FWeakObjectPtr *this_00;
  UClass *pUVar19;
  UDS_MovementCore *pUVar20;
  TVector<double> *pTVar21;
  TVector<double> *pTVar22;
  UObject *pUVar23;
  FDS_StuffGatherTableRow *pFVar24;
  UDS_StuffGatherData *this_01;
  UObject *pUVar25;
  undefined8 *puVar26;
  USceneComponent *this_02;
  FString *this_03;
  FDS_CampBaseTableRow *pFVar27;
  UDS_NPCCampData *this_04;
  double *pdVar28;
  UDS_NPCMountData *this_05;
  FWeakObjectPtr FVar29;
  FName *pFVar30;
  int iVar31;
  ulong64 *puVar32;
  ulonglong uVar33;
  void *pvVar34;
  ForAnyElementType FVar35;
  wchar_t *pwVar36;
  uint uVar37;
  ForAnyElementType this_06;
  FScriptContainerElement *pFVar38;
  longlong lVar39;
  undefined8 *puVar40;
  undefined4 uVar41;
  double dVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  uint uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStackY_1a58 [32];
  FWeakObjectPtr local_1a18;
  uint local_1a10;
  undefined1 local_1a0c;
  undefined1 local_1a0b [3];
  FWeakObjectPtr local_1a08;
  FWeakObjectPtr local_1a00;
  FWeakObjectPtr local_19f8;
  ulong64 local_19f0;
  FWeakObjectPtr local_19e8;
  int local_19e0 [2];
  FWeakObjectPtr local_19d8;
  FWeakObjectPtr local_19d0;
  TArray<FDS_CampSeatInfo,TSizedDefaultAllocator<32>_> local_19c8;
  FString local_19b8;
  FWeakObjectPtr local_19a8;
  FWeakObjectPtr local_19a0;
  FWeakObjectPtr local_1998;
  FWeakObjectPtr *local_1990;
  undefined8 *local_1988;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1980;
  TVector<double>_u_0 local_1970;
  TVector<double>_u_0 local_1958;
  undefined4 local_1940;
  undefined4 uStack_193c;
  undefined8 uStack_1938;
  double dStack_1930;
  undefined8 uStack_1928;
  undefined8 local_1920;
  code *local_1918;
  UObject *local_1910;
  double local_1908;
  double local_1900;
  double local_18f8;
  double local_18f0;
  double dStack_18e8;
  double local_18e0;
  TVector<double>_u_0 local_18d8;
  TVector<double>_u_0 local_18c0;
  double local_18a8;
  double local_18a0;
  double local_1898;
  double local_1890;
  double local_1888;
  double local_1880;
  TVector<double>_u_0 local_1878;
  double local_1860;
  double local_1858;
  double local_1850;
  TRotator<double> local_1848;
  TVector<double>_u_0 local_1830;
  double local_1818;
  double local_1810;
  double local_1808;
  double local_1800;
  double local_17f8;
  double local_17f0;
  TVector<double> local_17e8;
  double local_17d0;
  double local_17c8;
  double local_17c0;
  TVector<double>_u_0 local_17b8;
  TRotator<double> local_17a0;
  TVector<double>_u_0 local_1788;
  TVector<double>_u_0 local_1768;
  double local_1750;
  double local_1748;
  TVector<double>_u_0 local_1738;
  TVector<double>_u_0 local_1718;
  double local_1700;
  double local_16f8;
  TVector<double>_u_0 local_16e8;
  TVector<double>_u_0 local_16c8;
  TVector<double>_u_0 local_16a8;
  TVector<double>_u_0 local_1688;
  TVector<double>_u_0 local_1668;
  TVector<double>_u_0 local_1648;
  TVector<double>_u_0 local_1628;
  TVector<double>_u_0 local_1608;
  TVector<double>_u_0 local_15e8;
  TVector<double>_u_0 local_15c8;
  TVector<double>_u_0 local_15a8;
  undefined1 local_1588 [8];
  FName local_1580;
  FString local_1578;
  undefined1 local_1568 [24];
  TVector<double> local_1550;
  undefined1 local_1538 [24];
  undefined1 local_1520 [24];
  TVector<double> local_1508;
  TVector<double> local_14f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_14d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_13b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1058;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_f38;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_e18;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_cf8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_bd8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_ab8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_998;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_878;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_758;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_638;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_518;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1a58;
  local_1a10 = param_2;
  local_1990 = &param_3->WeakPtr;
  bVar10 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                     (param_3,(void *)0x0);
  if (bVar10) {
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar15 = UDS_LogManager::GetInst();
    local_14d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_14d8,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",0x40,
               Yes);
    UDS_LogManager::PrintLog
              (pUVar15,1,Warning,local_14d8.Ptr,0x194,L"OutInteractionAbilityData is nullptr.");
    local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_14d8._padding_;
    goto LAB_14b7f19d3;
  }
  pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
  puVar40 = (undefined8 *)&pUVar16[2].field_0x8;
  local_1988 = puVar40;
  pFVar17 = FDS_EntityBase::GetEntityBase(param_1);
  this = FDS_EntityBase::GetEntityBase(puVar40);
  if ((pFVar17 == (FDS_EntityBase *)0x0) || (this == (FDS_EntityBase *)0x0)) {
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar15 = UDS_LogManager::GetInst();
    local_1b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1b8,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",0x40,
               Yes);
    UDS_LogManager::PrintLog
              (pUVar15,1,Warning,local_1b8.Ptr,0x19e,
               L"EntityBase is nullptr. (Source: %llu, Target: %llu)");
    local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1b8._padding_;
    goto LAB_14b7f19d3;
  }
  UDS_MovementCore::GetMovementCore((ulong64)&local_1a08);
  UDS_MovementCore::GetMovementCore((ulong64)&local_1a18);
  bVar10 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1a08,(void *)0x0);
  if ((bVar10) ||
     (bVar10 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1a18,(void *)0x0
                         ), bVar10)) {
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar15 = UDS_LogManager::GetInst();
    local_2d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_2d8,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",0x40,
               Yes);
    UDS_LogManager::PrintLog
              (pUVar15,1,Warning,local_2d8.Ptr,0x1a6,
               L"MovementCore is nullptr. (Source: %llu, Target: %llu)");
    local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_2d8._padding_;
    goto LAB_14b7f19d3;
  }
  pFVar18 = FDS_CharacterBaseTableRow::Get(pFVar17->TableID,true);
  if (pFVar18 == (FDS_CharacterBaseTableRow *)0x0) {
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar15 = UDS_LogManager::GetInst();
    local_13b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_13b8,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",0x40,
               Yes);
    UDS_LogManager::PrintLog
              (pUVar15,1,Warning,local_13b8.Ptr,0x1ad,L"characterBaseTable is nullptr. (%d)");
    local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_13b8._padding_;
    goto LAB_14b7f19d3;
  }
  this_00 = (FWeakObjectPtr *)(**(code **)(pFVar17->_padding_ + 0x150))(pFVar17,local_1588);
  pUVar16 = FWeakObjectPtr::Get(this_00);
  pUVar25 = (UObject *)0x0;
  if (pUVar16 == (UObject *)0x0) {
LAB_14b7f0243:
    pUVar16 = pUVar25;
  }
  else {
    pUVar19 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar14 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar19->_padding_)) goto LAB_14b7f0243;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar16);
  }
  local_1a00.ObjectIndex = 0;
  local_1a00.ObjectSerialNumber = 0;
  local_1910 = pUVar16;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar16);
  }
  FWeakObjectPtr::operator=(&local_1a00,(FObjectPtr)&local_1910);
  bVar10 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_1a00,(void *)0x0);
  if (bVar10) {
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar15 = UDS_LogManager::GetInst();
    local_1298._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1298,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",0x40,
               Yes);
    UDS_LogManager::PrintLog(pUVar15,1,Warning,local_1298.Ptr,0x1b5,L"mainChar is nullptr.");
    local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1298._padding_;
    goto LAB_14b7f19d3;
  }
  pUVar20 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1a18);
  pTVar21 = UDS_MovementCore::GetActorFootLocation(pUVar20,&local_1550);
  pUVar20 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1a08);
  pTVar22 = UDS_MovementCore::GetActorFootLocation(pUVar20,&local_14f0);
  dVar42 = __real_3e45798ee0000000;
  local_17b8._s_0.X = (pTVar21->field0_0x0)._s_0.X - (pTVar22->field0_0x0)._s_0.X;
  local_17b8._s_0.Y = (pTVar21->field0_0x0)._s_0.Y - (pTVar22->field0_0x0)._s_0.Y;
  local_17b8._s_0.Z = (pTVar21->field0_0x0)._s_0.Z - (pTVar22->field0_0x0)._s_0.Z;
  pTVar21 = UE::Math::TVector<double>::GetSafeNormal
                      ((TVector<double> *)&local_17b8._s_0,&local_17e8,__real_3e45798ee0000000,
                       &UE::Math::TVector<double>::ZeroVector);
  UE::Math::TVector<double>::ToOrientationRotator(pTVar21,&local_17a0);
  pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
  *(double *)&pUVar16[2].field_0x20 = local_17a0.Pitch;
  *(double *)(pUVar16 + 3) = local_17a0.Yaw;
  *(double *)&pUVar16[3].field_0x8 = local_17a0.Roll;
  pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
  pUVar23 = FWeakObjectPtr::Get(&local_1a00);
  uVar41 = (**(code **)(*(longlong *)&pUVar23[0x29].field_0x10 + 0x158))();
  *(undefined4 *)&pUVar16[3].field_0x10 = uVar41;
  UDS_InteractionData::GetData((ulong64)&local_19a8,this->EntityID,SUB41(local_1a10,0));
  bVar10 = FWeakObjectPtr::IsValid(&local_19a8);
  if (!bVar10) {
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar15 = UDS_LogManager::GetInst();
    local_1178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1178,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",0x40,
               Yes);
    UDS_LogManager::PrintLog
              (pUVar15,1,Warning,local_1178.Ptr,0x1c3,L"interactionData is invalid. (%llu)");
    local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1178._padding_;
    goto LAB_14b7f19d3;
  }
  pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
  pUVar23 = FWeakObjectPtr::Get(&local_19a8);
  *(undefined8 *)&pUVar16[3].field_0x18 = *(undefined8 *)&pUVar23[2].field_0x10;
  pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
  fVar52 = (float)((double)pFVar18->InteractionOffset + *(double *)&pUVar16[3].field_0x18 +
                  (double)this->ScaledCapsuleRadius);
  dVar45 = (double)fVar52;
  pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
  *(double *)&pUVar16[3].field_0x20 = dVar45;
  if (this->EntityType == StuffGather) {
    UDS_StuffGatherData::GetData((ulong64)&local_19f8);
    bVar10 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_19f8,
                        (void *)0x0);
    if (bVar10) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar15 = UDS_LogManager::GetInst();
      local_1058._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1058,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",0x40
                 ,Yes);
      UDS_LogManager::PrintLog
                (pUVar15,1,Warning,local_1058.Ptr,0x1df,L"stuffGatherData is nullptr. (%llu)");
      local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1058._padding_;
      goto LAB_14b7f19d3;
    }
    local_19e0[0] = (int)this->TableID;
    pFVar24 = FDS_StuffGatherTableRow::GetByEntityTableID(local_19e0);
    if (pFVar24 == (FDS_StuffGatherTableRow *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar15 = UDS_LogManager::GetInst();
      local_f38._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_f38,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",0x40,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar15,1,Warning,local_f38.Ptr,0x1e6,L"stuffGatherTable is nullptr. (%d)");
      local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_f38._padding_;
      goto LAB_14b7f19d3;
    }
    if (pFVar24->StuffLocationType != Land) {
      pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
      pUVar25 = FWeakObjectPtr::Get(&local_1a18);
      puVar26 = (undefined8 *)(**(code **)(*(longlong *)pUVar25 + 0x338))(pUVar25,local_1568);
      uVar2 = puVar26[1];
      *(undefined8 *)(pUVar16 + 4) = *puVar26;
      *(undefined8 *)&pUVar16[4].field_0x8 = uVar2;
      *(undefined8 *)&pUVar16[4].field_0x10 = puVar26[2];
      goto LAB_14b7f18ad;
    }
    this_01 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_19f8);
    EVar11 = UDS_StuffGatherData::GetStuffGatherType(this_01);
    if (EVar11 == Box) {
      pUVar16 = FWeakObjectPtr::Get(&local_1a18);
      (**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,&local_1860);
      pUVar20 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1a18);
      UDS_MovementCore::GetActorForwardVector(pUVar20,(TVector<double> *)&local_1878._s_0);
      local_1788._s_0.X = local_1878._s_0.X * dVar45 + local_1860;
      local_1788._s_0.Z = local_1878._s_0.Z * dVar45 + local_1850;
      local_1788._s_0.Y = local_1878._s_0.Y * dVar45 + local_1858;
      DS_Util::GetNPCFloorLocationByLocation
                ((TVector<double> *)&local_1768._s_0,(TVector<double> *)&local_1788._s_0,
                 __real_43160000,false);
      pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
      *(double *)(pUVar16 + 4) = local_1768._s_0.X;
      *(double *)&pUVar16[4].field_0x8 = local_1768._s_0.Y;
    }
    else {
      pUVar16 = FWeakObjectPtr::Get(&local_19f8);
      if (*(int *)(pUVar16 + 0xc) < 1) {
        pUVar16 = FWeakObjectPtr::Get(&local_1a08);
        (**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,&local_1700);
        pUVar16 = FWeakObjectPtr::Get(&local_1a18);
        (**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,&local_1818);
        local_1970._s_0.X = local_1700 - local_1818;
        local_1970._s_0.Y = local_16f8 - local_1810;
        local_1970._s_0.Z = 0.0;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_1970._s_0,dVar42);
        local_16e8._s_0.X = local_1970._s_0.X * dVar45 + local_1818;
        local_16e8._s_0.Y = local_1970._s_0.Y * dVar45 + local_1810;
        local_16e8._s_0.Z = dVar45 * local_1970._s_0.Z + local_1808;
        DS_Util::GetNPCFloorLocationByLocation
                  ((TVector<double> *)&local_16c8._s_0,(TVector<double> *)&local_16e8._s_0,
                   __real_43160000,false);
        pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
        *(double *)(pUVar16 + 4) = local_16c8._s_0.X;
        *(double *)&pUVar16[4].field_0x8 = local_16c8._s_0.Y;
        local_1768._s_0.Z = local_16c8._s_0.Z;
      }
      else {
        pUVar25 = FWeakObjectPtr::Get(&local_19f8);
        iVar14 = *(int *)&pUVar25[0xb].field_0x18;
        if (iVar14 < 1) {
          pUVar15 = UDS_LogManager::GetInst();
          if (pUVar15 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar15 = UDS_LogManager::GetInst();
          local_e18._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_e18,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",
                     0x40,Yes);
          UDS_LogManager::PrintLog
                    (pUVar15,1,Warning,local_e18.Ptr,0x203,L"maxUserNumber is invalid. (%d)");
          local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_e18._padding_;
          goto LAB_14b7f19d3;
        }
        if ((*(int *)(pUVar16 + 0xc) < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
        local_19f0 = **(ulong64 **)&pUVar16[0xb].field_0x20;
        pFVar17 = FDS_EntityBase::GetEntityBase(&local_19f0);
        if (pFVar17 == (FDS_EntityBase *)0x0) {
          pUVar15 = UDS_LogManager::GetInst();
          if (pUVar15 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar15 = UDS_LogManager::GetInst();
          local_cf8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_cf8,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",
                     0x40,Yes);
          UDS_LogManager::PrintLog
                    (pUVar15,1,Warning,local_cf8.Ptr,0x20c,L"baseEntity is nullptr. (%llu)");
          local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_cf8._padding_;
          goto LAB_14b7f19d3;
        }
        UDS_MovementCore::GetMovementCore((ulong64)&local_19e8);
        bVar10 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_19e8,
                            (void *)0x0);
        if (bVar10) {
          pUVar15 = UDS_LogManager::GetInst();
          if (pUVar15 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar15 = UDS_LogManager::GetInst();
          local_bd8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_bd8,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",
                     0x40,Yes);
          UDS_LogManager::PrintLog
                    (pUVar15,1,Warning,local_bd8.Ptr,0x213,L"baseMovementCore is nullptr. (%llu)");
          local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_bd8._padding_;
          goto LAB_14b7f19d3;
        }
        pUVar25 = FWeakObjectPtr::Get(&local_19e8);
        (**(code **)(*(longlong *)pUVar25 + 0x338))(pUVar25,&local_1750);
        pUVar25 = FWeakObjectPtr::Get(&local_1a18);
        (**(code **)(*(longlong *)pUVar25 + 0x338))(pUVar25,&local_1908);
        local_18d8._s_0.X = local_1750 - local_1908;
        local_18d8._s_0.Y = local_1748 - local_1900;
        local_18d8._s_0.Z = 0.0;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_18d8._s_0,dVar42);
        puVar3 = *(ulong64 **)&pUVar16[0xb].field_0x20;
        if (puVar3 != puVar3 + *(int *)(pUVar16 + 0xc)) {
          puVar32 = puVar3;
          do {
            if (*puVar32 == *param_1) {
              iVar31 = (int)((longlong)puVar32 - (longlong)puVar3 >> 3);
              if (iVar31 != -1) goto LAB_14b7f0a0f;
              break;
            }
            puVar32 = puVar32 + 1;
          } while (puVar32 != puVar3 + *(int *)(pUVar16 + 0xc));
        }
        iVar31 = *(int *)(pUVar16 + 0xc);
LAB_14b7f0a0f:
        local_1848.Pitch = 0.0;
        local_1848.Roll = 0.0;
        local_1848.Yaw = (double)((__real_43b40000 / (float)iVar14) * (float)iVar31);
        UE::Math::TRotator<double>::RotateVector
                  (&local_1848,(TVector<double> *)&local_1830._s_0,
                   (TVector<double> *)&local_18d8._s_0);
        local_1738._s_0.X = local_1830._s_0.X * dVar45 + local_1908;
        local_1738._s_0.Z = local_1830._s_0.Z * dVar45 + local_18f8;
        local_1738._s_0.Y = local_1830._s_0.Y * dVar45 + local_1900;
        DS_Util::GetNPCFloorLocationByLocation
                  ((TVector<double> *)&local_1718._s_0,(TVector<double> *)&local_1738._s_0,
                   __real_43160000,false);
        pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
        *(double *)(pUVar16 + 4) = local_1718._s_0.X;
        *(double *)&pUVar16[4].field_0x8 = local_1718._s_0.Y;
        local_1768._s_0.Z = local_1718._s_0.Z;
      }
    }
  }
  else {
    bVar10 = FDS_EntityBase::IsHandlingNPC(this);
    if (bVar10) {
      (**(code **)(this->_padding_ + 0x80))();
      bVar10 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_19d8,
                          (void *)0x0);
      if (bVar10) {
        pUVar15 = UDS_LogManager::GetInst();
        if (pUVar15 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar15 = UDS_LogManager::GetInst();
        local_ab8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_ab8,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",
                   0x40,Yes);
        UDS_LogManager::PrintLog
                  (pUVar15,1,Warning,local_ab8.Ptr,0x250,L"targetSKM is nullptr. (%llu)");
        local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_ab8._padding_;
      }
      else {
        pUVar16 = FWeakObjectPtr::Get(&local_1a08);
        (**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,&local_17d0);
        pUVar16 = FWeakObjectPtr::Get(&local_1a18);
        (**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,&local_18a8);
        fVar44 = __real_7f7fffff;
        bVar10 = false;
        ::FString::FString(&local_19b8,L"interaction_handling");
        uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        this_02 = (USceneComponent *)FWeakObjectPtr::Get(&local_19d8);
        USceneComponent::GetAllSocketNames(this_02,&local_1980);
        iVar14 = local_1980.ArrayNum;
        uVar33 = (ulonglong)local_1980.ArrayNum;
        pFVar30 = (FName *)(local_1980.AllocatorInstance.Data + uVar33 * 8);
        this_06.Data = local_1980.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar33 != iVar14) {
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1a0c);
          }
          puVar40 = local_1988;
          param_3 = (TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> *)local_1990;
          if ((FName *)this_06.Data == pFVar30) break;
          this_03 = ::FName::ToString((FName *)this_06.Data,&local_1578);
          uVar48 = local_19b8.Data.ArrayNum - 1;
          if (local_19b8.Data.ArrayNum == 0) {
            uVar48 = 0;
          }
          FVar35.Data = (FScriptContainerElement *)L"";
          if (local_19b8.Data.ArrayNum != 0) {
            FVar35.Data = local_19b8.Data.AllocatorInstance.Data;
          }
          bVar13 = ::FString::StartsWith(this_03,(wchar_t *)FVar35.Data,uVar48,IgnoreCase);
          if (local_1578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1578.Data.AllocatorInstance.Data);
          }
          if (bVar13) {
            pUVar16 = FWeakObjectPtr::Get(&local_19d8);
            (**(code **)(*(longlong *)pUVar16 + 0x528))(pUVar16,&local_1800,*(FName *)this_06.Data);
            fVar43 = (float)((local_17f8 - local_17c8) * (local_17f8 - local_17c8) +
                             (local_1800 - local_17d0) * (local_1800 - local_17d0) +
                            (local_17f0 - local_17c0) * (local_17f0 - local_17c0));
            if (fVar43 < fVar44) {
              bVar10 = true;
              uVar47 = SUB84(local_17f8,0);
              fVar44 = fVar43;
              uVar41 = SUB84(local_1800,0);
              uVar46 = (int)((ulonglong)local_1800 >> 0x20);
              uVar49 = (int)((ulonglong)local_17f8 >> 0x20);
            }
          }
          uVar33 = (ulonglong)(uint)local_1980.ArrayNum;
          this_06.Data = this_06.Data + 8;
        }
        if (bVar10) {
          local_1958._s_0.X = (double)CONCAT44(uVar46,uVar41) - local_18a8;
          local_1958._s_0.Y = (double)CONCAT44(uVar49,uVar47) - local_18a0;
          local_1958._s_0.Z = 0.0;
          UE::Math::TVector<double>::Normalize((TVector<double> *)&local_1958._s_0,dVar42);
          dVar42 = (double)(fVar52 - __real_3f800000);
          local_16a8._s_0.Z = local_1958._s_0.Z * dVar42 + local_1898;
          local_18a0 = local_1958._s_0.Y * dVar42 + local_18a0;
          local_16a8._8_4_ = SUB84(local_18a0,0);
          local_16a8._0_8_ = local_1958._s_0.X * dVar42 + local_18a8;
          local_16a8._12_4_ = (int)((ulonglong)local_18a0 >> 0x20);
          DS_Util::GetNPCFloorLocationByLocation
                    ((TVector<double> *)&local_1688._s_0,(TVector<double> *)&local_16a8._s_0,
                     __real_43160000,false);
          pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
          *(double *)(pUVar16 + 4) = local_1688._s_0.X;
          *(double *)&pUVar16[4].field_0x8 = local_1688._s_0.Y;
          *(double *)&pUVar16[4].field_0x10 = local_1688._s_0.Z;
          pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
          *(undefined8 *)&pUVar16[3].field_0x20 = 0;
          if ((FName *)local_1980.AllocatorInstance.Data != (FName *)0x0) {
            FMemory::Free(local_1980.AllocatorInstance.Data);
          }
          if (local_19b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_19b8.Data.AllocatorInstance.Data);
          }
          goto LAB_14b7f18ad;
        }
        pUVar15 = UDS_LogManager::GetInst();
        if (pUVar15 != (UDS_LogManager *)0x0) {
          pUVar15 = UDS_LogManager::GetInst();
          local_998._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_998,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",
                     0x40,Yes);
          UDS_LogManager::PrintLog
                    (pUVar15,1,Warning,local_998.Ptr,0x270,L"Couldn\'t find socket. (%s)");
          if ((void *)local_998._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_998._padding_);
          }
        }
        if ((FName *)local_1980.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_1980.AllocatorInstance.Data);
        }
      }
      goto LAB_14b7f19d3;
    }
    bVar10 = FDS_EntityBase::IsCamp(this);
    if (bVar10) {
      UDS_NPCCampData::GetData((ulong64)&local_19d0);
      bVar10 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)&local_19d0,(void *)0x0)
      ;
      if (bVar10) {
        pUVar15 = UDS_LogManager::GetInst();
        if (pUVar15 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar15 = UDS_LogManager::GetInst();
        local_878._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_878,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",
                   0x40,Yes);
        UDS_LogManager::PrintLog
                  (pUVar15,1,Warning,local_878.Ptr,0x286,L"npcCampData is nullptr. (%llu)");
        local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_878._padding_;
        goto LAB_14b7f19d3;
      }
      pUVar16 = FWeakObjectPtr::Get(&local_19d0);
      pFVar27 = FDS_CampBaseTableRow::Get((longlong)*(int *)&pUVar16[4].field_0x1c,true);
      if (pFVar27 == (FDS_CampBaseTableRow *)0x0) {
        pUVar15 = UDS_LogManager::GetInst();
        if (pUVar15 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar15 = UDS_LogManager::GetInst();
        local_758._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_758,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",
                   0x40,Yes);
        UDS_LogManager::PrintLog
                  (pUVar15,1,Warning,local_758.Ptr,0x28e,L"campBaseTable is nullptr. (%d)");
        local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_758._padding_;
        goto LAB_14b7f19d3;
      }
      this_04 = (UDS_NPCCampData *)FWeakObjectPtr::Get(&local_19d0);
      UDS_NPCCampData::GetAbleCampSeatInfoArray(this_04,&local_19c8);
      iVar14 = local_19c8.ArrayNum;
      uVar33 = (ulonglong)local_19c8.ArrayNum;
      if (local_19c8.ArrayNum == 0) {
        pUVar15 = UDS_LogManager::GetInst();
        local_19b8.Data.AllocatorInstance.Data = local_19c8.AllocatorInstance.Data;
        if (pUVar15 == (UDS_LogManager *)0x0) goto LAB_14b7f19d3;
        pUVar15 = UDS_LogManager::GetInst();
        local_638._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_638,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",
                   0x40,Yes);
        UDS_LogManager::PrintLog
                  (pUVar15,1,Warning,local_638.Ptr,0x297,L"ableCampSeatInfoArray.Num() is 0.");
        pvVar34 = (void *)local_638._padding_;
LAB_14b7f13b2:
        local_19b8.Data.AllocatorInstance.Data = local_19c8.AllocatorInstance.Data;
        if (pvVar34 != (void *)0x0) {
          FMemory::Free(pvVar34);
          local_19b8.Data.AllocatorInstance.Data = local_19c8.AllocatorInstance.Data;
        }
LAB_14b7f19d3:
        if (local_19b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_19b8.Data.AllocatorInstance.Data);
        }
        return false;
      }
      if (pFVar27->UseChair == true) {
        uStack_1938 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        dStack_1930 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                       UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        local_1940 = 0;
        pFVar1 = local_19c8.AllocatorInstance.Data + uVar33 * 0x28;
        uVar41 = 0;
        pFVar38 = local_19c8.AllocatorInstance.Data + 0x18;
        local_1920 = 0;
        uStack_1928 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dVar42 = uStack_1928;
        uStack_1928._0_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uStack_1928._4_4_ =
             (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar53 = 0;
        uVar54 = 0;
        uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar48 = (uint)uStack_1928;
        uVar37 = uStack_1928._4_4_;
        uVar49 = uStack_193c;
        uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        fVar52 = __real_7f7fffff;
        uStack_1928 = dVar42;
        while( true ) {
          if ((uint)uVar33 != iVar14) {
            `TCheckedPointerIterator<FDS_CampSeatInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_1a0b);
          }
          if (pFVar38 + -0x18 == pFVar1) break;
          pUVar16 = FWeakObjectPtr::Get(&local_1a08);
          pdVar28 = (double *)(**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,local_1538);
          fVar44 = (float)((*(double *)(pFVar38 + -8) - pdVar28[1]) *
                           (*(double *)(pFVar38 + -8) - pdVar28[1]) +
                           (*(double *)(pFVar38 + -0x10) - *pdVar28) *
                           (*(double *)(pFVar38 + -0x10) - *pdVar28) +
                          (*(double *)pFVar38 - pdVar28[2]) * (*(double *)pFVar38 - pdVar28[2]));
          if (fVar44 < fVar52) {
            uVar46 = *(undefined4 *)(pFVar38 + -8);
            uVar47 = *(undefined4 *)(pFVar38 + -4);
            dStack_1930 = *(double *)(pFVar38 + -8);
            uVar48 = *(uint *)pFVar38;
            uVar37 = *(uint *)(pFVar38 + 4);
            uStack_1928 = *(double *)pFVar38;
            uVar41 = *(undefined4 *)(pFVar38 + -0x18);
            uVar49 = *(undefined4 *)(pFVar38 + -0x14);
            uVar50 = *(undefined4 *)(pFVar38 + -0x10);
            uVar51 = *(undefined4 *)(pFVar38 + -0xc);
            uVar53 = SUB84(*(double *)(pFVar38 + 8),0);
            uVar54 = (undefined4)((ulonglong)*(double *)(pFVar38 + 8) >> 0x20);
            fVar52 = fVar44;
          }
          uVar33 = (ulonglong)(uint)local_19c8.ArrayNum;
          pFVar38 = pFVar38 + 0x28;
        }
        uStack_1938 = (double)CONCAT44(uVar51,uVar50);
        local_1940 = uVar41;
        uStack_193c = uVar49;
        if ((((double)CONCAT44(uVar51 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               uVar50 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f1a36e2e0000000) &&
            ((double)CONCAT44(uVar47 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar46 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000)) &&
           ((double)CONCAT44(uVar37 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar48 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) {
          pUVar15 = UDS_LogManager::GetInst();
          local_19b8.Data.AllocatorInstance.Data = local_19c8.AllocatorInstance.Data;
          if (pUVar15 == (UDS_LogManager *)0x0) goto LAB_14b7f19d3;
          pUVar15 = UDS_LogManager::GetInst();
          local_518._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_518,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",
                     0x40,Yes);
          UDS_LogManager::PrintLog
                    (pUVar15,1,Warning,local_518.Ptr,0x2ad,L"campSeatInfo.Position is 0.");
          pvVar34 = (void *)local_518._padding_;
          goto LAB_14b7f13b2;
        }
        pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
        fVar52 = __real_43160000;
        *(undefined4 *)&pUVar16[4].field_0x18 = uVar41;
        *(undefined4 *)&pUVar16[4].field_0x1c = uVar49;
        *(undefined4 *)&pUVar16[4].field_0x20 = uVar50;
        *(undefined4 *)&pUVar16[4].field_0x24 = uVar51;
        *(undefined4 *)(pUVar16 + 5) = uVar46;
        *(undefined4 *)&pUVar16[5].field_0x4 = uVar47;
        *(uint *)&pUVar16[5].field_0x8 = uVar48;
        *(uint *)&pUVar16[5].field_0xc = uVar37;
        local_1668._s_0.Z = (double)CONCAT44(uVar37,uVar48);
        *(ulonglong *)&pUVar16[5].field_0x10 = CONCAT44(uVar54,uVar53);
        local_1668._s_0.X = uStack_1938;
        local_1668._s_0.Y = dStack_1930;
        DS_Util::GetNPCFloorLocationByLocation
                  ((TVector<double> *)&local_1648._s_0,(TVector<double> *)&local_1668._s_0,fVar52,
                   false);
        pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
        *(double *)(pUVar16 + 4) = local_1648._s_0.X;
        *(double *)&pUVar16[4].field_0x8 = local_1648._s_0.Y;
        *(double *)&pUVar16[4].field_0x10 = local_1648._s_0.Z;
        pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
        *(undefined8 *)&pUVar16[3].field_0x20 = 0;
      }
      else {
        if ((local_19c8.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
        uVar5 = *(undefined8 *)local_19c8.AllocatorInstance.Data;
        uVar6 = *(undefined8 *)(local_19c8.AllocatorInstance.Data + 8);
        uVar7 = *(undefined8 *)(local_19c8.AllocatorInstance.Data + 0x10);
        uVar8 = *(undefined8 *)(local_19c8.AllocatorInstance.Data + 0x18);
        uVar2 = *(undefined8 *)(local_19c8.AllocatorInstance.Data + 0x20);
        pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
        *(undefined8 *)&pUVar16[4].field_0x18 = uVar5;
        *(undefined8 *)&pUVar16[4].field_0x20 = uVar6;
        *(undefined8 *)(pUVar16 + 5) = uVar7;
        *(undefined8 *)&pUVar16[5].field_0x8 = uVar8;
        *(undefined8 *)&pUVar16[5].field_0x10 = uVar2;
        pUVar16 = FWeakObjectPtr::Get(&local_1a18);
        pdVar28 = (double *)(**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,local_1520);
        local_1628._s_0.X = *pdVar28;
        local_1628._s_0.Y = pdVar28[1];
        local_1628._s_0.Z = pdVar28[2];
        DS_Util::GetNPCFloorLocationByLocation
                  ((TVector<double> *)&local_1608._s_0,(TVector<double> *)&local_1628._s_0,
                   __real_43160000,false);
        pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
        *(double *)(pUVar16 + 4) = local_1608._s_0.X;
        *(double *)&pUVar16[4].field_0x8 = local_1608._s_0.Y;
        *(double *)&pUVar16[4].field_0x10 = local_1608._s_0.Z;
      }
      if (local_19c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_19c8.AllocatorInstance.Data);
      }
      goto LAB_14b7f18ad;
    }
    bVar10 = FDS_EntityBase::IsTaming(this);
    if (!bVar10) {
      pUVar16 = FWeakObjectPtr::Get(&local_1a18);
      pdVar28 = (double *)(**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,&local_1940);
      local_15a8._s_0.X = *pdVar28;
      local_15a8._s_0.Y = pdVar28[1];
      local_15a8._s_0.Z = pdVar28[2];
      DS_Util::GetNPCFloorLocationByLocation
                ((TVector<double> *)&local_18c0._s_0,(TVector<double> *)&local_15a8._s_0,
                 __real_43160000,false);
      pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
      *(double *)(pUVar16 + 4) = local_18c0._s_0.X;
      *(double *)&pUVar16[4].field_0x8 = local_18c0._s_0.Y;
      *(double *)&pUVar16[4].field_0x10 = local_18c0._s_0.Z;
      goto LAB_14b7f18ad;
    }
    UDS_NPCMountData::GetData((ulong64)&local_19a0);
    bVar10 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&local_19a0,(void *)0x0);
    if (bVar10) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar15 = UDS_LogManager::GetInst();
      local_3f8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3f8,"UDS_InteractionProcessAbility::InitInteractionProcessAbilityData",0x40,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar15,1,Warning,local_3f8.Ptr,0x2c9,L"npcMountData is nullptr. (%llu)");
      local_19b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_3f8._padding_;
      goto LAB_14b7f19d3;
    }
    this_05 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_19a0);
    iVar14 = UDS_NPCMountData::GetMountID(this_05);
    FVar29 = (FWeakObjectPtr)FDS_MountBaseTableRow::GetRef((longlong)iVar14,true);
    local_19e8 = FVar29;
    pFVar17 = FDS_EntityBase::GetEntityBase(puVar40);
    if (pFVar17 == (FDS_EntityBase *)0x0) {
      return false;
    }
    (**(code **)(pFVar17->_padding_ + 0x80))(pFVar17);
    bVar10 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_1998,
                        (void *)0x0);
    FVar9 = local_19e8;
    if (bVar10) {
      return false;
    }
    lVar39 = (longlong)*(int *)((longlong)FVar29 + 0xd0);
    local_18e0 = 0.0;
    local_1a10 = 0;
    fVar52 = 0.0;
    local_18f0 = 0.0;
    dStack_18e8 = 0.0;
    pUVar16 = pUVar25;
    if (0 < lVar39) {
      do {
        pUVar23 = FWeakObjectPtr::Get(&local_1998);
        uVar37 = (uint)pUVar25;
        local_1918 = *(code **)(*(longlong *)pUVar23 + 0x528);
        uVar48 = 0;
        if ((int)uVar37 < *(int *)((longlong)FVar9 + 0xd0)) {
          uVar48 = ~uVar37 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
        pFVar38 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)FVar9 + 200))->
                  AllocatorInstance).Data;
        if (*(int *)(&pUVar16->field_0x8 + (longlong)pFVar38) == 0) {
          pwVar36 = L"";
        }
        else {
          pwVar36 = *(wchar_t **)(&pUVar16->field_0x0 + (longlong)pFVar38);
        }
        pFVar30 = ::FName::FName(&local_1580,pwVar36);
        (*local_1918)(pUVar23,&local_1890,*pFVar30);
        pUVar20 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1a08);
        pTVar21 = UDS_MovementCore::GetActorFootLocation(pUVar20,&local_1508);
        dVar42 = local_1888 - (pTVar21->field0_0x0)._s_0.Y;
        dVar45 = local_1890 - (pTVar21->field0_0x0)._s_0.X;
        fVar44 = (float)(dVar42 * dVar42 + dVar45 * dVar45);
        if ((uVar37 == 0) || (fVar44 < fVar52)) {
          local_18f0 = local_1890;
          dStack_18e8 = local_1888;
          local_18e0 = local_1880;
          fVar52 = fVar44;
          local_1a10 = uVar37;
        }
        pUVar25 = (UObject *)(ulonglong)(uVar37 + 1);
        lVar39 = lVar39 + -1;
        pUVar16 = (UObject *)&pUVar16->field_0x10;
        puVar40 = local_1988;
        param_3 = (TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> *)local_1990;
      } while (lVar39 != 0);
    }
    uVar48 = local_1a10;
    local_15e8._s_0.X = local_18f0;
    local_15e8._s_0.Y = dStack_18e8;
    local_15e8._s_0.Z = local_18e0;
    DS_Util::GetNPCFloorLocationByLocation
              ((TVector<double> *)&local_15c8._s_0,(TVector<double> *)&local_15e8._s_0,
               __real_43160000,false);
    pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
    *(uint *)&pUVar16[5].field_0x18 = uVar48;
    pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
    *(double *)(pUVar16 + 4) = local_15c8._s_0.X;
    *(double *)&pUVar16[4].field_0x8 = local_15c8._s_0.Y;
    local_1768._s_0.Z = local_15c8._s_0.Z;
  }
  *(undefined8 *)&pUVar16[4].field_0x10 = local_1768._s_0.Z;
  pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
  *(undefined8 *)&pUVar16[3].field_0x20 = 0;
LAB_14b7f18ad:
  pUVar16 = FWeakObjectPtr::Get(&param_3->WeakPtr);
  *(undefined8 *)&pUVar16[2].field_0x10 = *puVar40;
  return true;
}

// InitOtherAbilityEventSubscriptions @ 14b7f1de0

void __thiscall
UDS_InteractionProcessAbility::InitOtherAbilityEventSubscriptions
          (UDS_InteractionProcessAbility *this)

{
  longlong *this_00;
  FGameplayTag *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  EDS_AbilityTagType local_res8 [8];
  
  this_00 = &this->_padding_;
  iVar2 = ChildInteractionAbilityList.ArrayNum;
  pFVar4 = ChildInteractionAbilityList.AllocatorInstance.Data + iVar2;
  FVar3.Data = ChildInteractionAbilityList.AllocatorInstance.Data;
  while( true ) {
    if (ChildInteractionAbilityList.ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EDS_AbilityTagType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar3.Data == pFVar4) break;
    pFVar1 = FDS_GameplayTags::GetAbilityTag((EDS_AbilityTagType *)FVar3.Data);
    FGameplayTagContainer::AddTag((FGameplayTagContainer *)this_00,pFVar1);
    FVar3.Data = FVar3.Data + 1;
  }
  local_res8[0] = RotateToAngle;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)this_00,pFVar1);
  local_res8[0] = MoveToPoint;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)this_00,pFVar1);
  return;
}

// OnAbilityRetryActivate @ 14b7f49b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionProcessAbility::OnAbilityRetryActivate(UDS_InteractionProcessAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [8];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionProcessAbility::OnAbilityRetryActivate",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xb8,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar3,(FGameplayTag *)&this->_padding_,local_148);
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(longlong *)&pUVar4[2].field_0x8 != *(longlong *)&pUVar5[2].field_0x10) {
      pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      local_148[0] = Cancel;
      local_140 = *(ulong64 *)&pUVar4[2].field_0x8;
      pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      UDS_AbilitySystemComponent::DeactivateAbilityByTag
                (pUVar3,(FGameplayTag *)&this->_padding_,local_148);
      pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      TryActivate((ulong64 *)&this->_padding_,&local_140,*(int *)&pUVar4[2].field_0x18);
    }
  }
  return;
}

// OnCanActivate @ 14b7f7980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_InteractionProcessAbility::OnCanActivate(UDS_InteractionProcessAbility *this)

{
  TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> *this_00;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> TVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  undefined1 auStackY_198 [32];
  bool local_168 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_160;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar4 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar4) {
    this_00 = &this->InteractionAbilityData;
    plVar1 = &this->_padding_;
    bVar4 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar4) {
      local_168[0] = true;
      TVar5 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionProcessAbilityData>
                        (local_148,(EDS_AbilityTagType *)plVar1);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar5.WeakPtr;
    }
    bVar4 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar4) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionProcessAbility::OnCanActivate",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_138.Ptr,0x5c,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar2 = *(int *)&pUVar7[2].field_0x18;
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar4 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                        ((ulong64 *)plVar1,(ulong64 *)&pUVar7[2].field_0x8,iVar2,true);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        lVar3 = *plVar1;
        iVar2 = *(int *)&pUVar7[2].field_0x18;
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar4 = DS_AbilityUtil_Interaction::IsAbleInteraction_TargetEntity
                          ((ulong64 *)&pUVar7[2].field_0x8,(int)lVar3,(longlong)iVar2);
        if (bVar4) {
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          iVar2 = *(int *)&pUVar7[2].field_0x18;
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          bVar4 = DS_AbilityUtil_Interaction::IsAbleInteraction_Height
                            ((ulong64 *)plVar1,(ulong64 *)&pUVar7[2].field_0x8,iVar2);
          if (bVar4) {
            local_168[0] = true;
            pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
            iVar2 = *(int *)&pUVar7[2].field_0x18;
            pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
            bVar4 = DS_AbilityUtil_Interaction::IsAbleInteraction_SpecialBuff
                              ((ulong64 *)plVar1,(ulong64 *)&pUVar7[2].field_0x8,iVar2,local_168);
            if (bVar4) {
              pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
              bVar4 = InitInteractionProcessAbilityData
                                ((ulong64 *)plVar1,*(int *)&pUVar7[2].field_0x18,this_00);
              return bVar4;
            }
          }
          else {
            local_160._0_8_ = 0;
            local_160._8_8_ = 0;
            local_160._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x1d8b9,Alert_System_01,&local_160);
          }
        }
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7fcf20

void __thiscall
UDS_InteractionProcessAbility::OnDeactivateAbility
          (UDS_InteractionProcessAbility *this,bool *param_1)

{
  bool bVar1;
  UDS_AbilitySystemComponent *pUVar2;
  FGameplayTag *pFVar3;
  UObject *pUVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  EDS_AbilityTagType local_res8 [8];
  
  iVar5 = ChildInteractionAbilityList.ArrayNum;
  pFVar7 = ChildInteractionAbilityList.AllocatorInstance.Data + iVar5;
  FVar6.Data = ChildInteractionAbilityList.AllocatorInstance.Data;
  while( true ) {
    if (ChildInteractionAbilityList.ArrayNum != iVar5) {
      `TCheckedPointerIterator<enum_EDS_AbilityTagType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar7) break;
    pUVar2 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar3 = FDS_GameplayTags::GetAbilityTag((EDS_AbilityTagType *)FVar6.Data);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar2,pFVar3,(EDS_AbilityDeactivateType *)&this->_padding_);
    FVar6.Data = FVar6.Data + 1;
  }
  local_res8[0] = RotateToAngle;
  pUVar2 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar3 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar2,pFVar3,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = MoveToPoint;
  pUVar2 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar3 = FDS_GameplayTags::GetAbilityTag(local_res8);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar2,pFVar3,(EDS_AbilityDeactivateType *)&this->_padding_);
  bVar1 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b7fd050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4,*(code **)(*(longlong *)pUVar4 + 0x2c8));
    return;
  }
  return;
}

// OnDeactivatedOtherAbility @ 14b7fd430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionProcessAbility::OnDeactivatedOtherAbility
          (UDS_InteractionProcessAbility *this,FGameplayTag *param_1,bool *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *pUVar3;
  FName *pFVar4;
  UObject *pUVar5;
  UDS_InteractionEvent *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  int iVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_198 [32];
  EDS_AbilityDeactivateType local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionProcessAbility::OnDeactivatedOtherAbility",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_158.Ptr,0xf8,L"InteractionAbilityData is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    local_168[0] = Cancel;
    pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar3,(FGameplayTag *)&this->_padding_,local_168);
    return;
  }
  bVar1 = false;
  iVar9 = ChildInteractionAbilityList.ArrayNum;
  pFVar11 = ChildInteractionAbilityList.AllocatorInstance.Data + iVar9;
  FVar10 = ChildInteractionAbilityList.AllocatorInstance;
  while( true ) {
    if (ChildInteractionAbilityList.ArrayNum != iVar9) {
      `TCheckedPointerIterator<enum_EDS_AbilityTagType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_168);
    }
    if (FVar10.Data == pFVar11) goto LAB_14b7fd57d;
    pFVar4 = &FDS_GameplayTags::GetAbilityTag((EDS_AbilityTagType *)FVar10.Data)->TagName;
    if ((*pFVar4 != (FName)0x0) && (param_1->TagName == *pFVar4)) break;
    FVar10.Data = FVar10.Data + 1;
  }
  bVar1 = true;
LAB_14b7fd57d:
  local_168[0] = 4;
  pFVar4 = &FDS_GameplayTags::GetAbilityTag(local_168)->TagName;
  if ((*pFVar4 == (FName)0x0) || (param_1->TagName != *pFVar4)) {
    local_168[0] = Success;
    pFVar4 = &FDS_GameplayTags::GetAbilityTag(local_168)->TagName;
    if ((*pFVar4 == (FName)0x0) || (param_1->TagName != *pFVar4)) {
      if (!bVar1) {
        return;
      }
      local_168[0] = Success;
      if (*param_2 == true) goto LAB_14b7fd690;
    }
    else if ((*param_2 == true) &&
            (bVar1 = TryActivateInteractionAbility
                               ((ulong64 *)&this->_padding_,
                                (TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>)
                                (this->InteractionAbilityData).WeakPtr), bVar1)) {
      return;
    }
  }
  else if (*param_2 == true) {
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pUVar6 = UDS_InteractionEvent::GetEvent();
    if (pUVar6 != (UDS_InteractionEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar6->OnInteractionProcess);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::
        Broadcast(&(pUVar6->OnInteractionProcess).Delegate,(ulong64 *)&pUVar5[2].field_0x10);
      }
    }
    pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pUVar8 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    bVar1 = UDS_MoveToPointAbility::TryActivate_MainCharacter
                      ((ulong64 *)&this->_padding_,(double *)&pUVar8[3].field_0x20,
                       (TVector<double> *)(pUVar7 + 4),(ulong64 *)&pUVar5[2].field_0x10);
    if (bVar1) {
      return;
    }
  }
  local_168[0] = Cancel;
LAB_14b7fd690:
  pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar3,(FGameplayTag *)&this->_padding_,local_168);
  return;
}

// OnPostActivateAbility @ 14b8063d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionProcessAbility::OnPostActivateAbility(UDS_InteractionProcessAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *pUVar3;
  FGameplayTag *pFVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_198 [32];
  EDS_AbilityDeactivateType local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionProcessAbility::OnPostActivateAbility",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_158.Ptr,0x8a,L"InteractionAbilityData is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    local_168[0] = Cancel;
    pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar3,(FGameplayTag *)&this->_padding_,local_168);
  }
  else {
    iVar7 = ChildInteractionAbilityList.ArrayNum;
    pFVar9 = ChildInteractionAbilityList.AllocatorInstance.Data + iVar7;
    FVar8 = ChildInteractionAbilityList.AllocatorInstance;
    while( true ) {
      if (ChildInteractionAbilityList.ArrayNum != iVar7) {
        `TCheckedPointerIterator<enum_EDS_AbilityTagType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168 + 1);
      }
      if (FVar8.Data == pFVar9) break;
      local_168[0] = Cancel;
      pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      pFVar4 = FDS_GameplayTags::GetAbilityTag((EDS_AbilityTagType *)FVar8.Data);
      UDS_AbilitySystemComponent::DeactivateAbilityByTag(pUVar3,pFVar4,local_168);
      FVar8.Data = FVar8.Data + 1;
    }
    local_168[1] = 2;
    local_168[0] = 4;
    pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar4 = FDS_GameplayTags::GetAbilityTag(local_168);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag(pUVar3,pFVar4,local_168 + 1);
    local_168[0] = Cancel;
    local_168[1] = 1;
    pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar4 = FDS_GameplayTags::GetAbilityTag(local_168 + 1);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag(pUVar3,pFVar4,local_168);
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    bVar1 = UDS_RotateToAngleAbility::TryActivate
                      ((ulong64 *)&this->_padding_,(TRotator<double> *)&pUVar6[2].field_0x20,
                       (float *)&pUVar5[3].field_0x10);
    if (!bVar1) {
      local_168[1] = 2;
      pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      UDS_AbilitySystemComponent::DeactivateAbilityByTag
                (pUVar3,(FGameplayTag *)&this->_padding_,local_168 + 1);
    }
  }
  return;
}

// TryActivate @ 14b815be0

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

bool __cdecl
UDS_InteractionProcessAbility::TryActivate(ulong64 *param_1,ulong64 *param_2,int param_3)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionProcessAbility::TryActivate",0x2a,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x165;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionProcessAbility::TryActivate",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x16c,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b815dd3;
    }
    local_158[0] = Interaction_Process;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionProcessAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> *)
                       &local_150,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_Process;
      *(int *)&pUVar3[2].field_0x18 = param_3;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionProcessAbility::TryActivate",0x2a,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x173;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b815dd3:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// TryActivateInteractionAbility @ 14b815fc0

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

bool __cdecl
UDS_InteractionProcessAbility::TryActivateInteractionAbility
          (ulong64 *param_1,TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> param_2
          )

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_EntityBase *pFVar8;
  FDS_EntityBase *pFVar9;
  UDS_NPCLingData *this;
  void *pvVar10;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_9a8 [32];
  EDS_AbilityTagType local_968 [8];
  FWeakObjectPtr local_960;
  FWeakObjectPtr local_958;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> local_950;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> local_948;
  undefined8 local_940;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_938;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_818;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  local_res10 = param_2.WeakPtr;
  bVar4 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> *)
                     &local_res10,(void *)0x0);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_938._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_938,"UDS_InteractionProcessAbility::TryActivateInteractionAbility",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_938.Ptr,0x303,L"InInteractionAbilityData is nullptr.");
      pvVar10 = (void *)local_938._padding_;
      goto LAB_14b81678e;
    }
    goto LAB_14b816798;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  puVar1 = &pUVar7[2].field_0x10;
  pFVar8 = FDS_EntityBase::GetEntityBase(param_1);
  pFVar9 = FDS_EntityBase::GetEntityBase((ulong64 *)puVar1);
  if ((pFVar8 == (FDS_EntityBase *)0x0) || (pFVar9 == (FDS_EntityBase *)0x0)) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionProcessAbility::TryActivateInteractionAbility",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x30d,L"EntityBase is nullptr.");
      pvVar10 = (void *)local_158._padding_;
      goto LAB_14b81678e;
    }
    goto LAB_14b816798;
  }
  UDS_MovementCore::GetMovementCore((ulong64)&local_950);
  UDS_MovementCore::GetMovementCore((ulong64)&local_948);
  bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(&local_950,(void *)0x0);
  if ((bVar4) ||
     (bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(&local_948,(void *)0x0),
     bVar4)) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_InteractionProcessAbility::TryActivateInteractionAbility",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_278.Ptr,0x315,L"MovementCore is nullptr.");
      pvVar10 = (void *)local_278._padding_;
      goto LAB_14b81678e;
    }
    goto LAB_14b816798;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  UDS_InteractionData::GetData
            ((ulong64)&local_960,*(ulong64 *)puVar1,SUB41(*(undefined4 *)&pUVar7[2].field_0x18,0));
  bVar4 = FWeakObjectPtr::IsValid(&local_960);
  if (!bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_res10);
      local_818._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_818,"UDS_InteractionProcessAbility::TryActivateInteractionAbility",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_818.Ptr,0x31c,
                 L"interactionData is invalid. (%llu) interactionID: %d");
      pvVar10 = (void *)local_818._padding_;
      goto LAB_14b81678e;
    }
    goto LAB_14b816798;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_960);
  if (*(int *)(pUVar7 + 4) == 0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_res10);
      local_6f8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_6f8,"UDS_InteractionProcessAbility::TryActivateInteractionAbility",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_6f8.Ptr,0x325,
                 L"functionDataList.Num() is 0. (%llu) interactionID: %d");
      pvVar10 = (void *)local_6f8._padding_;
      goto LAB_14b81678e;
    }
    goto LAB_14b816798;
  }
  if ((*(int *)(pUVar7 + 4) < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  switch(**(undefined1 **)&pUVar7[3].field_0x20) {
  case 1:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)&pUVar7[2].field_0x18;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_NPCCamp::TryActivate
                      (param_1,(ulong64 *)puVar1,(FDS_CampSeatInfo *)&pUVar7[4].field_0x18,iVar2);
    break;
  case 2:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)&pUVar7[2].field_0x18;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_NPCTaming::TryActivate
                      (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[5].field_0x18,iVar2);
    break;
  case 3:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    if ((*param_1 == 0) || (*(ulong64 *)puVar1 == 0)) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_InteractionAbility_NPCMountInteraction::TryActivate",0x37,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_398.Ptr,0x17,L"Invalid parameter.");
        pvVar10 = (void *)local_398._padding_;
        goto LAB_14b81678e;
      }
    }
    else {
      UDS_InteractionAbility_NPCMountInteraction::TargetEntityID = *(ulong64 *)puVar1;
      UDS_InteractionAbility_NPCMountInteraction::InteractionID = *(int *)&pUVar7[2].field_0x18;
      pFVar8 = FDS_EntityBase::GetEntityBase(param_1);
      if (pFVar8 != (FDS_EntityBase *)0x0) {
        local_940 = 0;
        local_968[0] = Interaction_NPCMountInteraction;
        bVar4 = FDS_EntityBase::TryActivateAbility
                          (pFVar8,local_968,(TObjectPtr<UWN_AbilityContext>)&local_940);
        return bVar4;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_4b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4b8,"UDS_InteractionAbility_NPCMountInteraction::TryActivate",0x37,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_4b8.Ptr,0x21,L"sourceEntity is nullptr. (%llu)");
        pvVar10 = (void *)local_4b8._padding_;
LAB_14b81678e:
        if (pvVar10 != (void *)0x0) {
          FMemory::Free(pvVar10);
        }
      }
    }
    goto LAB_14b816798;
  case 4:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    FDS_ObjectHandlingService::SendHandlingStart((ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
    bVar4 = true;
    break;
  case 5:
  case 6:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_NPCGimmick::TryActivate
                      (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
    break;
  default:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_NPC::TryActivate
                      (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
    break;
  case 0x17:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_StuffGather::TryActivate
                      (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
    break;
  case 0x18:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_StuffWarpDevice::TryActivate
                      (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
    break;
  case 0x19:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_StuffWarpDeviceUse::TryActivate
                      (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
    break;
  case 0x1a:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_StuffQuestBoard::TryActivate
                      (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
    break;
  case 0x1b:
  case 0x1c:
  case 0x1d:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_StuffPortal::TryActivate
                      (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
    break;
  case 0x1e:
    UDS_NPCLingData::GetData((ulong64)&local_958);
    bVar4 = FWeakObjectPtr::IsValid(&local_958);
    if (bVar4) {
      this = (UDS_NPCLingData *)FWeakObjectPtr::Get(&local_958);
      bVar4 = UDS_NPCLingData::IsLingSuccess(this);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&local_res10);
        iVar2 = *(int *)&pUVar7[2].field_0x18;
        pUVar7 = FWeakObjectPtr::Get(&local_res10);
        bVar4 = UDS_InteractionAbility_NPCLingTalk::TryActivate
                          (param_1,(ulong64 *)puVar1,(FDS_CampSeatInfo *)&pUVar7[4].field_0x18,iVar2
                          );
        return bVar4;
      }
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      bVar4 = UDS_InteractionAbility_NPCLing::TryActivate
                        (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
      return bVar4;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_5d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5d8,"UDS_InteractionProcessAbility::TryActivateInteractionAbility",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_5d8.Ptr,0x334,L"npcLingData is nullptr. (%llu)");
      pvVar10 = (void *)local_5d8._padding_;
      goto LAB_14b81678e;
    }
LAB_14b816798:
    bVar4 = false;
    break;
  case 0x1f:
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_InteractionAbility_StuffOpenLocks::TryActivate
                      (param_1,(ulong64 *)puVar1,*(int *)&pUVar7[2].field_0x18);
  }
  return bVar4;
}

