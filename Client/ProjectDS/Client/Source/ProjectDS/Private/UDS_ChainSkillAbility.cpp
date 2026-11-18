// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b439b10

UClass * __cdecl UDS_ChainSkillAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChainSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChainSkillAbility",
               &Z_Registration_Info_UClass_UDS_ChainSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_ChainSkillAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ChainSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_ChainSkillAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChainSkillAbility.InnerSingleton;
}

// UDS_ChainSkillAbility @ 14b43c400

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

UDS_ChainSkillAbility * __thiscall
UDS_ChainSkillAbility::UDS_ChainSkillAbility(UDS_ChainSkillAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->MainSkillID = 0;
  (this->MainSkillDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MainSkillDataList).ArrayNum = 0;
  (this->MainSkillDataList).ArrayMax = 0;
  return this;
}

// ~UDS_ChainSkillAbility @ 14b43cf90

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

void __thiscall UDS_ChainSkillAbility::~UDS_ChainSkillAbility(UDS_ChainSkillAbility *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->MainSkillDataList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b43e5c0

UClass * __cdecl UDS_ChainSkillAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChainSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChainSkillAbility",
               &Z_Registration_Info_UClass_UDS_ChainSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_ChainSkillAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ChainSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_ChainSkillAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChainSkillAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b43e790

bool __thiscall UDS_ChainSkillAbility::ShouldNotifyChangedCharState(UDS_ChainSkillAbility *this)

{
  return false;
}

// ShouldTickComponent @ 14b43e7b0

bool __thiscall UDS_ChainSkillAbility::ShouldTickComponent(UDS_ChainSkillAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_ChainSkillAbility @ 14b43e920

void __cdecl UDS_ChainSkillAbility::StaticRegisterNativesUDS_ChainSkillAbility(void)

{
  return;
}

// UDS_ChainSkillAbility @ 14b79b730

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

UDS_ChainSkillAbility * __thiscall
UDS_ChainSkillAbility::UDS_ChainSkillAbility
          (UDS_ChainSkillAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->MainSkillID = 0;
  (this->MainSkillDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MainSkillDataList).ArrayNum = 0;
  (this->MainSkillDataList).ArrayMax = 0;
  return this;
}

// ClearVariables @ 14b7a0120

void __thiscall UDS_ChainSkillAbility::ClearVariables(UDS_ChainSkillAbility *this)

{
  int *piVar1;
  
  this->MainSkillID = 0;
  piVar1 = &(this->MainSkillDataList).ArrayMax;
  (this->MainSkillDataList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->MainSkillDataList).AllocatorInstance,0,piVar1);
  }
  return;
}

// DoChainSkill @ 14b7a4450

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

void __thiscall UDS_ChainSkillAbility::DoChainSkill(UDS_ChainSkillAbility *this)

{
  FWeakObjectPtr *pFVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_SkillAbilityContext *pUVar7;
  FWeakObjectPtr *this_00;
  EDS_AbilityTagType local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_SkillAbilityContext *local_res20;
  
  this_00 = (FWeakObjectPtr *)(this->MainSkillDataList).AllocatorInstance.Data;
  iVar3 = (this->MainSkillDataList).ArrayNum;
  pFVar1 = this_00 + iVar3;
  while( true ) {
    if ((this->MainSkillDataList).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    bVar5 = FWeakObjectPtr::IsValid(this_00);
    if (bVar5) {
      pUVar6 = FWeakObjectPtr::Get(this_00);
      if (*(int *)&pUVar6[2].field_0x1c == this->MainSkillID) {
        local_res10 = *this_00;
LAB_14b7a44d1:
        bVar5 = FWeakObjectPtr::IsValid(&local_res10);
        if (bVar5) {
          pUVar6 = FWeakObjectPtr::Get(&local_res10);
          iVar3 = *(int *)(pUVar6 + 5);
          if (iVar3 != 0) {
            UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>
                      ((UDS_GameplayAbility *)this);
            bVar5 = FWeakObjectPtr::IsValid(&local_res18);
            if (bVar5) {
              pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
              pUVar7 = NewObject<UDS_SkillAbilityContext>(pUVar6);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar7 != (UDS_SkillAbilityContext *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar7);
              }
              pUVar7->SkillID = iVar3;
              pUVar6 = FWeakObjectPtr::Get(&local_res18);
              dVar4 = *(double *)&pUVar6[2].field_0x18;
              dVar2 = *(double *)&pUVar6[2].field_0x20;
              (pUVar7->StartLocation).field0_0x0._s_0.X = *(double *)&pUVar6[2].field_0x10;
              (pUVar7->StartLocation).field0_0x0._s_0.Y = dVar4;
              (pUVar7->StartLocation).field0_0x0._s_0.Z = dVar2;
              local_res20 = pUVar7;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar7);
              }
              local_res8[0] = 0x11;
              UDS_GameplayAbility::TryActivateAbility
                        ((UDS_GameplayAbility *)this,local_res8,
                         (TObjectPtr<UWN_AbilityContext>)&local_res20);
            }
          }
        }
        return;
      }
    }
    this_00 = this_00 + 1;
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res8[0] = None;
  local_res8[1] = None;
  local_res8[2] = None;
  local_res8[3] = None;
  local_res8[4] = None;
  local_res8[5] = None;
  local_res8[6] = None;
  local_res8[7] = None;
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res8);
  goto LAB_14b7a44d1;
}

// GetMainSkillData @ 14b7ac2b0

TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> __thiscall
UDS_ChainSkillAbility::GetMainSkillData(UDS_ChainSkillAbility *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr *this_00;
  undefined8 local_res8;
  
  this_00 = (FWeakObjectPtr *)(this->MainSkillDataList).AllocatorInstance.Data;
  iVar2 = (this->MainSkillDataList).ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->MainSkillDataList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (this_00 == pFVar1) break;
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if ((bVar3) &&
       (pUVar4 = FWeakObjectPtr::Get(this_00), *(int *)&pUVar4[2].field_0x1c == this->MainSkillID))
    {
      *(FWeakObjectPtr *)in_RDX = *this_00;
      return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)in_RDX;
    }
    this_00 = this_00 + 1;
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)in_RDX;
}

// OnAbilityRetryActivate @ 14b7b4120

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

void __thiscall UDS_ChainSkillAbility::OnAbilityRetryActivate(UDS_ChainSkillAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    UpdateSkillData(this,*(int *)(pUVar2 + 1));
  }
  return;
}

// OnCanActivate @ 14b7b5fb0

bool __thiscall UDS_ChainSkillAbility::OnCanActivate(UDS_ChainSkillAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b7b84b0

void __thiscall
UDS_ChainSkillAbility::OnDeactivateAbility(UDS_ChainSkillAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b7bbae0

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

void __thiscall UDS_ChainSkillAbility::OnPostActivateAbility(UDS_ChainSkillAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    UpdateSkillData(this,*(int *)(pUVar2 + 1));
  }
  return;
}

// OnTickComponent @ 14b7be370

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

void __thiscall UDS_ChainSkillAbility::OnTickComponent(UDS_ChainSkillAbility *this,float param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UDS_SkillData *pUVar6;
  int iVar7;
  uint uVar8;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  pTVar2 = &this->MainSkillDataList;
  uVar8 = 0;
  do {
    while( true ) {
      if (((int)uVar8 < 0) || ((this->MainSkillDataList).ArrayNum <= (int)uVar8)) {
        if ((this->MainSkillDataList).ArrayNum == 0) {
          local_res8[0] = Success;
          UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
        }
        return;
      }
      if ((int)uVar8 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_res18[0] =
           *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8);
      bVar4 = FWeakObjectPtr::IsValid(local_res18);
      if (bVar4) break;
LAB_14b7be418:
      uVar5 = 0;
      if ((int)uVar8 < (this->MainSkillDataList).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
      iVar7 = (this->MainSkillDataList).ArrayNum + ~uVar8;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
      }
      piVar1 = &(this->MainSkillDataList).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&pTVar2->AllocatorInstance,(this->MainSkillDataList).ArrayNum,
                 &(this->MainSkillDataList).ArrayMax);
    }
    pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res18);
    bVar4 = UDS_SkillData::CheckCoolTime(pUVar6);
    if (bVar4) goto LAB_14b7be418;
    pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res18);
    UDS_SkillData::UpdateSubSkillTimeProcess(pUVar6);
    uVar8 = uVar8 + 1;
  } while( true );
}

// UpdateSkillData @ 14b7ca530

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

void __thiscall UDS_ChainSkillAbility::UpdateSkillData(UDS_ChainSkillAbility *this,int param_1)

{
  FWeakObjectPtr *pFVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  UDS_SkillData *pUVar6;
  UObject *pUVar7;
  UDS_SkillAbilityContext *pUVar8;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr local_res8;
  EDS_AbilityTagType local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  UDS_SkillAbilityContext *local_30;
  
  UDS_SkillData::GetData((ulong64)&local_res20,this->_padding_,SUB41(param_1,0));
  bVar5 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar5) {
    pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res20);
    param_1 = UDS_SkillData::GetMainSkillID(pUVar6);
  }
  UDS_SkillData::GetData((ulong64)&local_res18,this->_padding_,SUB41(param_1,0));
  bVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar5) {
    pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res18);
    UDS_SkillData::UpdateSubSkillTimeProcess(pUVar6);
    this->MainSkillID = param_1;
    TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_const_&>
              (&this->MainSkillDataList,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_res18
              );
    this_00 = (FWeakObjectPtr *)(this->MainSkillDataList).AllocatorInstance.Data;
    iVar3 = (this->MainSkillDataList).ArrayNum;
    pFVar1 = this_00 + iVar3;
    while( true ) {
      if ((this->MainSkillDataList).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (this_00 == pFVar1) {
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_30 = (UDS_SkillAbilityContext *)0x0;
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_30);
        goto LAB_14b7ca651;
      }
      bVar5 = FWeakObjectPtr::IsValid(this_00);
      if ((bVar5) &&
         (pUVar7 = FWeakObjectPtr::Get(this_00), *(int *)&pUVar7[2].field_0x1c == this->MainSkillID)
         ) break;
      this_00 = this_00 + 1;
    }
    local_res8 = *this_00;
LAB_14b7ca651:
    bVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar5) {
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      iVar3 = *(int *)(pUVar7 + 5);
      if (iVar3 != 0) {
        UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
        bVar5 = FWeakObjectPtr::IsValid(&local_38);
        if (bVar5) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pUVar8 = NewObject<UDS_SkillAbilityContext>(pUVar7);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar8 != (UDS_SkillAbilityContext *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          pUVar8->SkillID = iVar3;
          pUVar7 = FWeakObjectPtr::Get(&local_38);
          dVar4 = *(double *)&pUVar7[2].field_0x18;
          dVar2 = *(double *)&pUVar7[2].field_0x20;
          (pUVar8->StartLocation).field0_0x0._s_0.X = *(double *)&pUVar7[2].field_0x10;
          (pUVar8->StartLocation).field0_0x0._s_0.Y = dVar4;
          (pUVar8->StartLocation).field0_0x0._s_0.Z = dVar2;
          local_30 = pUVar8;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          local_res10[0] = Skill_ActiveSkill;
          UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,local_res10,
                     (TObjectPtr<UWN_AbilityContext>)&local_30);
        }
      }
    }
  }
  return;
}

