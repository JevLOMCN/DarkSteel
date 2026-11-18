// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b48f6b0

UClass * __cdecl UDS_EquipmentAppearanceAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EquipmentAppearanceAbility",
               &Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.InnerSingleton,
               StaticRegisterNativesUDS_EquipmentAppearanceAbility,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EquipmentAppearanceAbility>,
               InternalVTableHelperCtorCaller<UDS_EquipmentAppearanceAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.InnerSingleton;
}

// UDS_EquipmentAppearanceAbility @ 14b492a80

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

UDS_EquipmentAppearanceAbility * __thiscall
UDS_EquipmentAppearanceAbility::UDS_EquipmentAppearanceAbility
          (UDS_EquipmentAppearanceAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->EquipmentAppearanceDataMap = 0;
  *(undefined8 *)&(this->EquipmentAppearanceDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->EquipmentAppearanceDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EquipmentAppearanceDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x48 = 0;
  (this->DeactivateRequestTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeactivateRequestTags).ArrayNum = 0;
  (this->DeactivateRequestTags).ArrayMax = 0;
  this->ElapsedTime = 0.0;
  this->DesolveIntensityProcessTime = 0.0;
  this->StartValue = 0.0;
  this->EndValue = 0.0;
  this->bIsVisible = false;
  return this;
}

// UDS_EquipmentAppearanceAbility @ 14b492b20

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

UDS_EquipmentAppearanceAbility * __thiscall
UDS_EquipmentAppearanceAbility::UDS_EquipmentAppearanceAbility
          (UDS_EquipmentAppearanceAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->EquipmentAppearanceDataMap = 0;
  *(undefined8 *)&(this->EquipmentAppearanceDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->EquipmentAppearanceDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EquipmentAppearanceDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x48 = 0;
  (this->DeactivateRequestTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeactivateRequestTags).ArrayNum = 0;
  (this->DeactivateRequestTags).ArrayMax = 0;
  this->ElapsedTime = 0.0;
  this->DesolveIntensityProcessTime = 0.0;
  this->StartValue = 0.0;
  this->EndValue = 0.0;
  this->bIsVisible = false;
  return this;
}

// ~UDS_EquipmentAppearanceAbility @ 14b493840

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
UDS_EquipmentAppearanceAbility::~UDS_EquipmentAppearanceAbility
          (UDS_EquipmentAppearanceAbility *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->DeactivateRequestTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->EquipmentAppearanceDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EquipmentAppearanceDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StateTagType,FDS_EquipmentAppearanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StateTagType,FDS_EquipmentAppearanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EquipmentAppearanceDataMap);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b495320

UClass * __cdecl UDS_EquipmentAppearanceAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EquipmentAppearanceAbility",
               &Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.InnerSingleton,
               StaticRegisterNativesUDS_EquipmentAppearanceAbility,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EquipmentAppearanceAbility>,
               InternalVTableHelperCtorCaller<UDS_EquipmentAppearanceAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EquipmentAppearanceAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b495790

bool __thiscall
UDS_EquipmentAppearanceAbility::ShouldNotifyChangedCharState(UDS_EquipmentAppearanceAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b4957a0

bool __thiscall
UDS_EquipmentAppearanceAbility::ShouldTickComponent(UDS_EquipmentAppearanceAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_EquipmentAppearanceAbility @ 14b495870

void __cdecl
UDS_EquipmentAppearanceAbility::StaticRegisterNativesUDS_EquipmentAppearanceAbility(void)

{
  return;
}

// OnAbilityAdded @ 14b7b3a90

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

void __thiscall UDS_EquipmentAppearanceAbility::OnAbilityAdded(UDS_EquipmentAppearanceAbility *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar5;
  
  UDS_GameplayAbility::OnAbilityAdded((UDS_GameplayAbility *)this);
  TVar5 = FDS_EntityBase::GetCharStateData((FDS_EntityBase *)this->_padding_);
  fVar4 = __real_418c0000;
  fVar3 = __real_3f28f5c3;
  fVar2 = __real_c1700000;
  bVar1 = this->bIsVisible;
                    /* WARNING: Load size is inaccurate */
  (this->CharStateData).WeakPtr = *TVar5.WeakPtr;
  if (bVar1 != false) {
    this->bIsVisible = false;
  }
  this->DesolveIntensityProcessTime = fVar3;
  this->ElapsedTime = fVar3;
  this->StartValue = fVar4;
  this->EndValue = fVar2;
  TMulticastDelegateRegistration<void___cdecl(FDS_EquipmentAppearanceData_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_EquipmentAppearanceAbility>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EquipmentAppearanceData_const_&),FDefaultDelegateUserPolicy>
              *)(this->_padding_ + 0x1b8),(UDS_EquipmentAppearanceAbility *)&stack0x00000008,
             (pmf_d5d7edc3 *)this);
  return;
}

// OnAbilityRemoved @ 14b7b3e20

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
UDS_EquipmentAppearanceAbility::OnAbilityRemoved(UDS_EquipmentAppearanceAbility *this)

{
  UDS_GameplayAbility::OnAbilityRemoved((UDS_GameplayAbility *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1b8),this);
  return;
}

// OnChangedCharState @ 14b7b6b60

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
UDS_EquipmentAppearanceAbility::OnChangedCharState
          (UDS_EquipmentAppearanceAbility *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_CharStateData *this_00;
  FGameplayTag *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FWeakObjectPtr local_res10;
  int local_res18;
  FScriptContainerElement *local_res20;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  void *pvStack_c0;
  TMap<EDS_StateTagType,FDS_EquipmentAppearanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StateTagType,FDS_EquipmentAppearanceData,0>_>
  *local_b8;
  char local_b0;
  char cStack_af;
  FDS_ChangedCharStateInfo local_a8;
  longlong *local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  int local_58;
  undefined4 uStack_54;
  void *pvStack_50;
  
  local_a8.StateTag.TagName = (param_2->StateTag).TagName;
  local_a8.bIsStateTagOn = param_2->bIsStateTagOn;
  local_a8._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_a8.AddedCharState = param_2->AddedCharState;
  local_a8.RemovedCharState = param_2->RemovedCharState;
  local_a8.AddedCharDetailState = param_2->AddedCharDetailState;
  local_a8.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10 = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_a8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    TSet<TTuple<enum_EDS_StateTagType,FDS_EquipmentAppearanceData>,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FDS_EquipmentAppearanceData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_78,
               (TSet<TTuple<EDS_StateTagType,FDS_EquipmentAppearanceData>,TDefaultMapHashableKeyFuncs<EDS_StateTagType,FDS_EquipmentAppearanceData,0>,FDefaultSetAllocator>
                *)&this->EquipmentAppearanceDataMap);
    local_b0 = '\0';
    cStack_af = '\0';
    stack0xffffffffffffff28 = local_68;
    auStack_e0._0_8_ = lStack_70;
    local_c8 = local_58;
    uStack_c4 = uStack_54;
    pvStack_c0 = pvStack_50;
    uVar5 = local_68._8_8_ >> 0x20;
    local_b8 = &this->EquipmentAppearanceDataMap;
    if (local_68._12_4_ < *(int *)(local_68._0_8_ + 0x18)) {
      do {
        pFVar12 = (FScriptContainerElement *)(*local_78 + (longlong)(int)uVar5 * 0x18);
        local_res20 = pFVar12;
        this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        pFVar4 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)(pFVar12 + 4));
        bVar3 = UDS_CharStateData::HasStateTag(this_00,pFVar4);
        if (!bVar3) {
          pFVar1 = (this->DeactivateRequestTags).AllocatorInstance.Data;
          if (((pFVar1 <= pFVar12) && (pFVar12 < pFVar1 + (this->DeactivateRequestTags).ArrayMax))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = (this->DeactivateRequestTags).ArrayNum;
          lVar6 = (longlong)iVar10;
          if (iVar10 != 0) {
            pFVar1 = (this->DeactivateRequestTags).AllocatorInstance.Data;
            iVar8 = 0;
            lVar7 = 0;
            bVar3 = *pFVar1 != *pFVar12;
            iVar10 = 0;
            do {
              lVar7 = lVar7 + 1;
              iVar9 = iVar10 + 1;
              if (lVar7 < lVar6) {
                do {
                  if (bVar3 != (pFVar1[lVar7] != *pFVar12)) break;
                  iVar9 = iVar9 + 1;
                  lVar7 = lVar7 + 1;
                } while (lVar7 < lVar6);
              }
              if (bVar3 != false) {
                if (iVar8 != iVar10) {
                  memmove(pFVar1 + iVar8,pFVar1 + iVar10,(longlong)(iVar9 - iVar10));
                }
                iVar8 = iVar8 + (iVar9 - iVar10);
              }
              bVar3 = (bool)(bVar3 ^ 1);
              pFVar12 = local_res20;
              iVar10 = iVar9;
            } while (lVar7 < lVar6);
            (this->DeactivateRequestTags).ArrayNum = iVar8;
            local_res18 = iVar8;
          }
          TSet<TTuple<enum_EDS_StateTagType,FDS_EquipmentAppearanceData>,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FDS_EquipmentAppearanceData,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pvStack_c0,uStack_cc);
          local_b0 = '\x01';
        }
        iVar10 = 1;
        if (*(int *)&(this->EquipmentAppearanceDataMap).field_0x8 ==
            *(int *)&(this->EquipmentAppearanceDataMap).field_0x34) {
          this->DesolveIntensityProcessTime = 0.66;
          this->StartValue = 17.5;
          this->EndValue = -15.0;
          if (this->bIsVisible != false) {
            this->ElapsedTime = 0.0;
            this->bIsVisible = false;
          }
        }
        else {
          iVar8 = (this->DeactivateRequestTags).ArrayNum;
          if (this->bIsVisible != (iVar8 == 0)) {
            this->ElapsedTime = 0.0;
            this->bIsVisible = iVar8 == 0;
            this->DesolveIntensityProcessTime = 0.66;
            this->StartValue = 17.5;
            this->EndValue = -15.0;
            if (iVar8 == 0) {
              this->StartValue = -17.5;
              this->EndValue = 15.0;
            }
          }
        }
        uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
        uVar5 = (ulonglong)uStack_cc;
      } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
      if ((local_b0 != '\0') && (cStack_af != '\0')) {
        uVar11 = *(int *)(&local_b8->field_0x0 + 8) - *(int *)(&local_b8->field_0x0 + 0x34);
        if (3 < uVar11) {
          uVar5 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar6 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar6 & 0x1f);
        }
        if (((0 < (int)uVar11) && (*(int *)&local_b8->field_0x48 < iVar10)) ||
           (iVar10 < *(int *)&local_b8->field_0x48)) {
          *(int *)&local_b8->field_0x48 = iVar10;
          TSet<TTuple<enum_EDS_StateTagType,FDS_EquipmentAppearanceData>,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FDS_EquipmentAppearanceData,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
  }
  return;
}

// OnDeactivateAbility @ 14b7b88a0

void __thiscall
UDS_EquipmentAppearanceAbility::OnDeactivateAbility
          (UDS_EquipmentAppearanceAbility *this,bool *param_1)

{
  this->ElapsedTime = 0.0;
  return;
}

// OnDesiredEquipmentAppearance @ 14b7b8b30

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
UDS_EquipmentAppearanceAbility::OnDesiredEquipmentAppearance
          (UDS_EquipmentAppearanceAbility *this,FDS_EquipmentAppearanceData *param_1)

{
  TArray<EDS_StateTagType,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_CharStateData *this_01;
  FGameplayTag *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  EDS_AbilityTagType local_res8 [8];
  TPairInitializer<EDS_StateTagType_const_&,FDS_EquipmentAppearanceData_const_&> local_res10;
  FDS_EquipmentAppearanceData *local_28;
  FDS_EquipmentAppearanceData *local_20;
  
  this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
  pFVar4 = FDS_GameplayTags::GetStateTag(&param_1->AppearanceStateTag);
  bVar2 = UDS_CharStateData::HasStateTag(this_01,pFVar4);
  if (bVar2) {
    local_28 = param_1;
    local_20 = param_1;
    TSet<TTuple<enum_EDS_StateTagType,FDS_EquipmentAppearanceData>,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FDS_EquipmentAppearanceData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_StateTagType_const_&,FDS_EquipmentAppearanceData_const_&>_>
              (&this->EquipmentAppearanceDataMap,&local_res10,(bool *)&local_28);
    this_00 = &this->DeactivateRequestTags;
    pFVar5 = (this_00->AllocatorInstance).Data;
    pFVar6 = pFVar5 + (this->DeactivateRequestTags).ArrayNum;
    if (pFVar5 != pFVar6) {
      do {
        if (*pFVar5 == (FScriptContainerElement)param_1->AppearanceStateTag) {
          if (param_1->bIsVisible == true) {
            TArray<enum_EDS_StateTagType,TSizedDefaultAllocator<32>_>::Remove
                      (this_00,&param_1->AppearanceStateTag);
          }
          break;
        }
        pFVar5 = pFVar5 + 1;
      } while (pFVar5 != pFVar6);
    }
    if ((this->DeactivateRequestTags).ArrayNum == 0) {
      OnRefreshEquipmentAppearanceData(this,param_1);
    }
    if (param_1->bIsVisible == false) {
      pFVar6 = (this_00->AllocatorInstance).Data;
      iVar3 = (this->DeactivateRequestTags).ArrayNum;
      pFVar5 = pFVar6 + iVar3;
      if (pFVar6 != pFVar5) {
        do {
          if (*pFVar6 == (FScriptContainerElement)param_1->AppearanceStateTag) goto LAB_14b7b8c5d;
          pFVar6 = pFVar6 + 1;
        } while (pFVar6 != pFVar5);
      }
      if (iVar3 == (this->DeactivateRequestTags).ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&this_00->AllocatorInstance,&(this->DeactivateRequestTags).ArrayMax
                          );
      }
      (this->DeactivateRequestTags).ArrayNum = iVar3 + 1;
      (this_00->AllocatorInstance).Data[iVar3] =
           (FScriptContainerElement)param_1->AppearanceStateTag;
    }
LAB_14b7b8c5d:
    local_res10.Value = (FDS_EquipmentAppearanceData *)0x0;
    local_res8[0] = EquipmentAppearance;
    UDS_GameplayAbility::TryActivateAbility
              ((UDS_GameplayAbility *)this,local_res8,
               (TObjectPtr<UWN_AbilityContext>)&local_res10.Value);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1660131389640540111>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_EquipmentAppearanceAbility.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnPostActivateAbility @ 14b7bc5f0

void __thiscall
UDS_EquipmentAppearanceAbility::OnPostActivateAbility(UDS_EquipmentAppearanceAbility *this)

{
  ForAnyElementType FVar1;
  size_t sVar2;
  float fVar3;
  float fVar4;
  uint auStackX_8 [2];
  ForAnyElementType FStack_58;
  int iStack_50;
  int iStack_4c;
  TArray<EWN_CS_CharacterSlotName,TSizedDefaultAllocator<32>_> aTStack_48 [3];
  
  auStackX_8[0] = 0x152b292a;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  iStack_50 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,0,&FStack_58,4,&iStack_4c);
  memcpy(FStack_58.Data,auStackX_8,4);
  FVar1.Data = FStack_58.Data;
  sVar2 = (size_t)iStack_50;
  aTStack_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  aTStack_48[0].ArrayNum = iStack_50;
  if (iStack_50 == 0) {
    aTStack_48[0].ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iStack_50,0,&aTStack_48[0].AllocatorInstance,iStack_50,&aTStack_48[0].ArrayMax);
    memcpy(aTStack_48[0].AllocatorInstance.Data,FVar1.Data,sVar2);
  }
  UpdateDesolveIntensity
            (this,this->ElapsedTime,this->DesolveIntensityProcessTime,this->StartValue,
             this->EndValue,aTStack_48);
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  fVar3 = __real_40a00000;
  fVar4 = __real_c1200000;
  if (this->bIsVisible == false) {
    fVar3 = __real_c0a00000;
    fVar4 = __real_41200000;
  }
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  iStack_50 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&FStack_58,1,&iStack_4c);
  memcpy(FStack_58.Data,auStackX_8,1);
  FVar1.Data = FStack_58.Data;
  sVar2 = (size_t)iStack_50;
  aTStack_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  aTStack_48[0].ArrayNum = iStack_50;
  if (iStack_50 == 0) {
    aTStack_48[0].ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iStack_50,0,&aTStack_48[0].AllocatorInstance,iStack_50,&aTStack_48[0].ArrayMax);
    memcpy(aTStack_48[0].AllocatorInstance.Data,FVar1.Data,sVar2);
  }
  UpdateDesolveIntensity
            (this,this->ElapsedTime,this->DesolveIntensityProcessTime,fVar3,fVar4,aTStack_48);
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  auStackX_8[0] = CONCAT13(auStackX_8[0]._3_1_,0x2e2d2c);
  FStack_58.Data = (FScriptContainerElement *)0x0;
  iStack_50 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&FStack_58,3,&iStack_4c);
  memcpy(FStack_58.Data,auStackX_8,3);
  FVar1.Data = FStack_58.Data;
  sVar2 = (size_t)iStack_50;
  aTStack_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  aTStack_48[0].ArrayNum = iStack_50;
  if (iStack_50 == 0) {
    aTStack_48[0].ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iStack_50,0,&aTStack_48[0].AllocatorInstance,iStack_50,&aTStack_48[0].ArrayMax);
    memcpy(aTStack_48[0].AllocatorInstance.Data,FVar1.Data,sVar2);
  }
  UpdateDesolveIntensity
            (this,this->ElapsedTime,this->DesolveIntensityProcessTime,this->StartValue,
             this->EndValue,aTStack_48);
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  return;
}

// OnRefreshEquipmentAppearanceData @ 14b7bc910

void __thiscall
UDS_EquipmentAppearanceAbility::OnRefreshEquipmentAppearanceData
          (UDS_EquipmentAppearanceAbility *this,FDS_EquipmentAppearanceData *param_1)

{
  float fVar1;
  char cVar2;
  
  cVar2 = this->bIsVisible;
  if ((bool)cVar2 != param_1->bIsVisible) {
    this->ElapsedTime = 0.0;
    cVar2 = param_1->bIsVisible;
    this->bIsVisible = (bool)cVar2;
  }
  fVar1 = param_1->TransitionTime;
  this->DesolveIntensityProcessTime = fVar1;
  if (fVar1 <= 0.0) {
    this->DesolveIntensityProcessTime = 0.66;
    this->ElapsedTime = 0.66;
  }
  this->StartValue = 17.5;
  this->EndValue = -15.0;
  if (cVar2 == '\x01') {
    this->StartValue = -17.5;
    this->EndValue = 15.0;
  }
  return;
}

// OnTickComponent @ 14b7bec50

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
UDS_EquipmentAppearanceAbility::OnTickComponent(UDS_EquipmentAppearanceAbility *this,float param_1)

{
  float fVar1;
  EDS_AbilityDeactivateType local_res8 [32];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  fVar1 = this->ElapsedTime;
  if (fVar1 < this->DesolveIntensityProcessTime || fVar1 == this->DesolveIntensityProcessTime) {
    this->ElapsedTime = fVar1 + param_1;
    UpdateCharacterSlots(this);
  }
  else if (*(int *)&(this->EquipmentAppearanceDataMap).field_0x8 ==
           *(int *)&(this->EquipmentAppearanceDataMap).field_0x34) {
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  return;
}

// UpdateCharacterSlots @ 14b7c8320

void __thiscall
UDS_EquipmentAppearanceAbility::UpdateCharacterSlots(UDS_EquipmentAppearanceAbility *this)

{
  ForAnyElementType FVar1;
  size_t sVar2;
  float fVar3;
  float fVar4;
  uint local_res8 [2];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<EWN_CS_CharacterSlotName,TSizedDefaultAllocator<32>_> local_48 [3];
  
  local_res8[0] = 0x152b292a;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,0,&local_58,4,&local_4c);
  memcpy(local_58.Data,local_res8,4);
  FVar1.Data = local_58.Data;
  sVar2 = (size_t)local_50;
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = local_50;
  if (local_50 == 0) {
    local_48[0].ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50,0,&local_48[0].AllocatorInstance,local_50,&local_48[0].ArrayMax);
    memcpy(local_48[0].AllocatorInstance.Data,FVar1.Data,sVar2);
  }
  UpdateDesolveIntensity
            (this,this->ElapsedTime,this->DesolveIntensityProcessTime,this->StartValue,
             this->EndValue,local_48);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  fVar3 = __real_40a00000;
  fVar4 = __real_c1200000;
  if (this->bIsVisible == false) {
    fVar3 = __real_c0a00000;
    fVar4 = __real_41200000;
  }
  local_res8[0] = local_res8[0] & 0xffffff00;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_58,1,&local_4c);
  memcpy(local_58.Data,local_res8,1);
  FVar1.Data = local_58.Data;
  sVar2 = (size_t)local_50;
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = local_50;
  if (local_50 == 0) {
    local_48[0].ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50,0,&local_48[0].AllocatorInstance,local_50,&local_48[0].ArrayMax);
    memcpy(local_48[0].AllocatorInstance.Data,FVar1.Data,sVar2);
  }
  UpdateDesolveIntensity
            (this,this->ElapsedTime,this->DesolveIntensityProcessTime,fVar3,fVar4,local_48);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  local_res8[0] = CONCAT13(local_res8[0]._3_1_,0x2e2d2c);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&local_58,3,&local_4c);
  memcpy(local_58.Data,local_res8,3);
  FVar1.Data = local_58.Data;
  sVar2 = (size_t)local_50;
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = local_50;
  if (local_50 == 0) {
    local_48[0].ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50,0,&local_48[0].AllocatorInstance,local_50,&local_48[0].ArrayMax);
    memcpy(local_48[0].AllocatorInstance.Data,FVar1.Data,sVar2);
  }
  UpdateDesolveIntensity
            (this,this->ElapsedTime,this->DesolveIntensityProcessTime,this->StartValue,
             this->EndValue,local_48);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// UpdateDesolveIntensity @ 14b7c9110

void __thiscall
UDS_EquipmentAppearanceAbility::UpdateDesolveIntensity
          (UDS_EquipmentAppearanceAbility *this,float param_1,float param_2,float param_3,
          float param_4,TArray<EWN_CS_CharacterSlotName,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  FVar2 = DESOLVE_INTENSITY_PARAM_NAME;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40c,&local_48,(int *)((longlong)&local_40 + 4));
  lVar4 = (longlong)iVar3;
  local_40 = CONCAT44(local_40._4_4_,iVar3 + 1);
  *(uint *)(local_48.Data + lVar4 * 0xc) = FVar2.ComparisonIndex.Value.Value;
  *(uint *)(local_48.Data + lVar4 * 0xc + 4) = FVar2.Number;
  fVar5 = param_1 / param_2;
  if (__real_3f800000 <= param_1 / param_2) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(local_48.Data + lVar4 * 0xc + 8) = fVar5 * (param_4 - param_3) + param_3;
  (**(code **)(*(longlong *)this->_padding_ + 0x108))((longlong *)this->_padding_,&local_48);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  pFVar1 = (param_5->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

