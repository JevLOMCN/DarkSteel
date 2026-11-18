// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 85

// StaticClass @ 14a69e5b0

UClass * __cdecl UWN_CS_CharacterCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterCore",
               &Z_Registration_Info_UClass_UWN_CS_CharacterCore.InnerSingleton,
               StaticRegisterNativesUWN_CS_CharacterCore,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CS_CharacterCore>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterCore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterCore.InnerSingleton;
}

// UWN_CS_CharacterCore @ 14a6a2210

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_CS_CharacterCore * __thiscall
UWN_CS_CharacterCore::UWN_CS_CharacterCore(UWN_CS_CharacterCore *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UWN_CS_CharacterCore__6B_;
  (this->SoulInfo).bOwnedByCore = true;
  (this->SoulInfo).bIsSoulVisible = false;
  (this->SoulInfo).bIsHidden = true;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SoulInfo).AnimPath.AssetPath.PackageName.ComparisonIndex = 0;
  (this->SoulInfo).AnimPath.AssetPath.PackageName.Number = 0;
  (this->SoulInfo).AnimPath.AssetPath.AssetName.ComparisonIndex = 0;
  (this->SoulInfo).AnimPath.AssetPath.AssetName.Number = 0;
  (this->SoulInfo).AnimPath.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SoulInfo).AnimPath.SubPathString.Data.ArrayNum = 0;
  (this->SoulInfo).AnimPath.SubPathString.Data.ArrayMax = 0;
  (this->SoulInfo).AnimType = AnimBP;
  (this->SoulInfo).WorkspaceVersion = None;
  (this->PartInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartInfos).ArrayNum = 0;
  (this->PartInfos).ArrayMax = 0;
  (this->NonePartInfo).LightInfoArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonePartInfo).LightInfoArray.ArrayNum = 0;
  (this->NonePartInfo).LightInfoArray.ArrayMax = 0;
  (this->Soul).field0_0x0.DebugPtr = (UWN_CS_CharacterSoul *)0x0;
  (this->Parts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parts).ArrayNum = 0;
  (this->Parts).ArrayMax = 0;
  (this->Owner).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->LightComponentArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightComponentArray).ArrayNum = 0;
  (this->LightComponentArray).ArrayMax = 0;
  *(undefined8 *)&this->OnPartsListChanged = 0;
  *(undefined8 *)&(this->OnPartsListChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnPartsListChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnCharacterCoreDeInitialized = 0;
  *(undefined8 *)&(this->OnCharacterCoreDeInitialized).field_0x8 = 0;
  *(undefined4 *)&(this->OnCharacterCoreDeInitialized).field_0x10 = 0;
  *(undefined8 *)&this->OnPreDestroyComponent = 0;
  *(undefined8 *)&(this->OnPreDestroyComponent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreDestroyComponent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreDestroyComponent).field_0x18 = 2;
  return this;
}

// UWN_CS_CharacterCore @ 14a6a2320

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_CS_CharacterCore * __thiscall
UWN_CS_CharacterCore::UWN_CS_CharacterCore(UWN_CS_CharacterCore *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UWN_CS_CharacterCore__6B_;
  (this->SoulInfo).bOwnedByCore = true;
  (this->SoulInfo).bIsSoulVisible = false;
  (this->SoulInfo).bIsHidden = true;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SoulInfo).AnimPath.AssetPath.PackageName.ComparisonIndex = 0;
  (this->SoulInfo).AnimPath.AssetPath.PackageName.Number = 0;
  (this->SoulInfo).AnimPath.AssetPath.AssetName.ComparisonIndex = 0;
  (this->SoulInfo).AnimPath.AssetPath.AssetName.Number = 0;
  (this->SoulInfo).AnimPath.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SoulInfo).AnimPath.SubPathString.Data.ArrayNum = 0;
  (this->SoulInfo).AnimPath.SubPathString.Data.ArrayMax = 0;
  (this->SoulInfo).AnimType = AnimBP;
  (this->SoulInfo).WorkspaceVersion = None;
  (this->PartInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartInfos).ArrayNum = 0;
  (this->PartInfos).ArrayMax = 0;
  (this->NonePartInfo).LightInfoArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonePartInfo).LightInfoArray.ArrayNum = 0;
  (this->NonePartInfo).LightInfoArray.ArrayMax = 0;
  (this->Soul).field0_0x0.DebugPtr = (UWN_CS_CharacterSoul *)0x0;
  (this->Parts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parts).ArrayNum = 0;
  (this->Parts).ArrayMax = 0;
  (this->Owner).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->LightComponentArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightComponentArray).ArrayNum = 0;
  (this->LightComponentArray).ArrayMax = 0;
  *(undefined8 *)&this->OnPartsListChanged = 0;
  *(undefined8 *)&(this->OnPartsListChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnPartsListChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnCharacterCoreDeInitialized = 0;
  *(undefined8 *)&(this->OnCharacterCoreDeInitialized).field_0x8 = 0;
  *(undefined4 *)&(this->OnCharacterCoreDeInitialized).field_0x10 = 0;
  *(undefined8 *)&this->OnPreDestroyComponent = 0;
  *(undefined8 *)&(this->OnPreDestroyComponent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreDestroyComponent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreDestroyComponent).field_0x18 = 2;
  return this;
}

// ~UWN_CS_CharacterCore @ 14a6a2ab0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::~UWN_CS_CharacterCore(UWN_CS_CharacterCore *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UWN_CS_CharacterCore__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreDestroyComponent).field_0x8,
             *(int *)&(this->OnPreDestroyComponent).field_0x10);
  pvVar1 = *(void **)&(this->OnPreDestroyComponent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreDestroyComponent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCharacterCoreDeInitialized);
  pvVar1 = *(void **)&(this->OnCharacterCoreDeInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCharacterCoreDeInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPartsListChanged);
  pvVar1 = *(void **)&(this->OnPartsListChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPartsListChanged);
  pFVar2 = (this->LightComponentArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Parts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NonePartInfo).LightInfoArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FWN_CS_CharacterPartInfo,int>
            ((FWN_CS_CharacterPartInfo *)(this->PartInfos).AllocatorInstance.Data,
             (this->PartInfos).ArrayNum);
  pFVar2 = (this->PartInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SoulInfo).AnimPath.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyPartInfoPolicy @ 14a6a35e0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

FWN_CS_CharacterPartInfo * __thiscall
UWN_CS_CharacterCore::ApplyPartInfoPolicy
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *__return_storage_ptr__,
          FWN_CS_CharacterPartInfo *param_1)

{
  FWN_CS_CharacterPartInfo::FWN_CS_CharacterPartInfo(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// BeginDestroy @ 14a6a3610

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::BeginDestroy(UWN_CS_CharacterCore *this)

{
  (**(code **)(this->_padding_ + 0x2b8))();
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CreateColliderComponent @ 14a6a37e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::CreateColliderComponent
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  TRotator<double> *this_00;
  int *piVar1;
  byte *pbVar2;
  double dVar3;
  undefined1 auVar4 [16];
  AActor *pAVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  int iVar13;
  FWN_CS_ColliderContainer *pFVar14;
  ulonglong uVar15;
  UClass *pUVar16;
  UBoxComponent *this_01;
  FPayload *pFVar17;
  TQuat<double> *pTVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  longlong *plVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  double *pdVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar34;
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  undefined1 auStackY_228 [32];
  EWN_CS_CharacterSlotName local_1f8 [8];
  EWN_CS_CharacterSlotName local_1f0 [8];
  undefined1 local_1e8 [4];
  undefined1 local_1e4 [20];
  EWN_CS_CharacterSlotName *local_1d0;
  undefined1 *local_1c8;
  TVector<double>_u_0 local_1b8;
  TRotator<double> local_198;
  TVector<double>_u_0 local_178;
  undefined1 local_158 [16];
  double local_148;
  TQuat<double> local_138;
  undefined1 local_118 [128];
  ulonglong local_98;
  
  if (Shiled_LR < param_1) {
    return;
  }
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((this->Owner).field0_0x0.DebugPtr == (AActor *)0x0) {
    return;
  }
  pFVar23 = (this->PartInfos).AllocatorInstance.Data;
  pFVar19 = pFVar23 + (longlong)(this->PartInfos).ArrayNum * 0x88;
  for (; local_1f8[0] = param_1, local_1f0[0] = param_1, pFVar23 != pFVar19;
      pFVar23 = pFVar23 + 0x88) {
    if (pFVar23[8] == (FScriptContainerElement)param_1) goto LAB_14a6a3881;
  }
  local_1e4._4_8_ = local_1f0;
  `UWN_CS_CharacterCore::GetPartInfo'::__l11::<lambda_2>::operator()(local_1e4 + 4);
  pFVar23 = (FScriptContainerElement *)0x0;
LAB_14a6a3881:
  if (pFVar23 == (FScriptContainerElement *)0x0) {
    return;
  }
  if ((this->Owner).field0_0x0.DebugPtr == (AActor *)0x0) {
    return;
  }
  pFVar20 = (this->Parts).AllocatorInstance.Data;
  pFVar19 = pFVar20 + (longlong)(this->Parts).ArrayNum * 8;
  while( true ) {
    if (pFVar20 == pFVar19) {
      return;
    }
    lVar25 = *(longlong *)pFVar20;
    if (*(EWN_CS_CharacterSlotName *)(lVar25 + 0x28) == local_1f8[0]) break;
    pFVar20 = pFVar20 + 8;
  }
  if (lVar25 == 0) {
    return;
  }
  plVar21 = (longlong *)(lVar25 + 0xe0);
  if (*(int *)(lVar25 + 0xe8) != *(int *)(lVar25 + 0x114)) {
    lVar22 = *(longlong *)(lVar25 + 0x120);
    if (*(longlong *)(lVar25 + 0x120) == 0) {
      lVar22 = lVar25 + 0x118;
    }
    iVar13 = *(int *)(lVar22 + ((ulonglong)(*(int *)(lVar25 + 0x128) - 1) & (ulonglong)local_1f8[0])
                               * 4);
    if (iVar13 != -1) {
      do {
        if (*(EWN_CS_CharacterSlotName *)((longlong)iVar13 * 0x20 + *plVar21) == local_1f8[0])
        goto LAB_14a6a398d;
        iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + *plVar21);
      } while (iVar13 != -1);
    }
  }
  local_1d0 = local_1f8;
  local_1e4._4_8_ = (EWN_CS_CharacterSlotName *)0x0;
  local_1c8 = local_1e4 + 4;
  local_1e4._12_8_ = 0;
  TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FWN_CS_ColliderContainer_&&>_>
            (plVar21,(TPairInitializer<EWN_CS_CharacterSlotName_const_&,FWN_CS_ColliderContainer_&&>
                      *)local_1e4,(bool *)&local_1d0);
  if ((EWN_CS_CharacterSlotName *)local_1e4._4_8_ != (EWN_CS_CharacterSlotName *)0x0) {
    FMemory::Free((void *)local_1e4._4_8_);
  }
LAB_14a6a398d:
  pFVar14 = TMapBase<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>_>
            ::FindChecked(plVar21,local_1f8[0]);
  lVar25 = *(longlong *)(pFVar23 + 0x68);
  local_1e4._0_4_ = *(undefined4 *)(pFVar23 + 0x70);
  uVar15 = (ulonglong)(int)local_1e4._0_4_;
  pdVar24 = (double *)(lVar25 + 0x18);
  lVar22 = uVar15 * 0x60 + lVar25;
  local_1e4._4_8_ = lVar22;
  while( true ) {
    if (*(int *)(pFVar23 + 0x70) != (int)uVar15) {
      `TCheckedPointerIterator<FWN_CS_PartColliderInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_1e8);
    }
    if (lVar25 == lVar22) break;
    if (*(int *)(pdVar24 + -2) == 1) {
      pAVar5 = (this->Owner).field0_0x0.DebugPtr;
      local_1d0 = (EWN_CS_CharacterSlotName *)0x0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pAVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar16 = Z_Construct_UClass_UBoxComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_118,pUVar16);
      local_118._48_8_ = (FObjectInstancingGraph *)0x0;
      local_118._56_8_ = (UPackage *)0x0;
      local_118._16_4_ = 0;
      local_118._20_4_ = 0;
      local_118._24_4_ = RF_Transient;
      local_118._40_8_ = (UObject *)0x0;
      local_118[0x20] = false;
      local_118._8_8_ = pAVar5;
      this_01 = (UBoxComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
      if (local_118._64_8_ != 0) {
        plVar21 = (longlong *)(local_118 + 0x50);
        if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
          plVar21 = (longlong *)local_118._104_8_;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      pbVar2 = (byte *)((longlong)&this_01->_padding_ + 3);
      *pbVar2 = *pbVar2 & 0xfe;
      pbVar2 = (byte *)((longlong)&this_01->_padding_ + 2);
      *pbVar2 = *pbVar2 & 0xf9;
      USceneComponent::SetHiddenInGame((USceneComponent *)this_01,true,DirtyOnly);
      dVar42 = (double)this_01->_padding_;
      dVar11 = *pdVar24;
      dVar12 = pdVar24[1];
      dVar3 = pdVar24[2];
      auVar4._0_8_ = this_01->_padding_;
      auVar4._8_8_ = this_01->_padding_;
      local_148 = dVar42;
      pFVar17 = FRotationConversionCache::GetOrCreatePayload
                          ((FRotationConversionCache *)&this_01->_padding_);
      this_00 = &pFVar17->CachedRotator;
      if ((((double)auVar4._0_8_ != (pFVar17->CachedRotator).Pitch) ||
          (auVar10._4_8_ = extraout_XMM0_Qb, auVar10._0_4_ = (int)((ulonglong)auVar4._0_8_ >> 0x20),
          auVar29._0_8_ = auVar10._0_8_ << 0x20, auVar29._8_4_ = (int)auVar4._8_8_,
          auVar29._12_4_ = (int)((ulonglong)auVar4._8_8_ >> 0x20),
          auVar29._8_8_ != (pFVar17->CachedRotator).Yaw)) ||
         (local_148 != (pFVar17->CachedRotator).Roll)) {
        auVar29 = divpd(auVar4,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar36 = roundpd(in_XMM1,auVar29,3);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = dVar42;
        auVar29 = divpd(auVar30,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar37._0_8_ = auVar36._0_8_ * dVar6;
        dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar37._8_8_ = auVar36._8_8_ * dVar7;
        dVar35 = (double)auVar4._0_8_ - auVar37._0_8_;
        dVar9 = (double)auVar4._8_8_ - auVar37._8_8_;
        auVar29 = roundpd(auVar37,auVar29,3);
        dVar8 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar31._8_4_ = SUB84(dVar9,0);
        auVar31._0_8_ = dVar35;
        auVar31._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        dVar42 = dVar42 - auVar29._0_8_ * dVar8;
        dVar43 = 0.0 - auVar29._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        dVar34 = auVar31._8_8_ + dVar7;
        uVar15 = -(ulonglong)(0.0 <= dVar35);
        uVar27 = -(ulonglong)(0.0 <= dVar9);
        auVar38._0_8_ = uVar15 & (ulonglong)dVar35;
        auVar38._8_4_ = (undefined4)(uVar27 & (ulonglong)dVar9);
        auVar38._12_4_ = (undefined4)((uVar27 & (ulonglong)dVar9) >> 0x20);
        auVar40._0_4_ = ~(uint)uVar15 & SUB84(dVar35 + dVar6,0);
        auVar40._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar6) >> 0x20);
        auVar40._8_4_ = ~(uint)uVar27 & SUB84(dVar34,0);
        auVar40._12_4_ = ~(uint)(uVar27 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
        auVar32._8_4_ = SUB84(dVar43,0);
        auVar32._0_8_ = dVar42;
        auVar32._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        dVar35 = auVar32._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar40 = auVar40 | auVar38;
        uVar15 = -(ulonglong)(0.0 <= dVar42);
        uVar27 = -(ulonglong)(0.0 <= dVar43);
        auVar41._0_4_ = ~(uint)uVar15 & SUB84(dVar42 + dVar8,0);
        auVar41._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar42 + dVar8) >> 0x20);
        auVar41._8_4_ = ~(uint)uVar27 & SUB84(dVar35,0);
        auVar41._12_4_ = ~(uint)(uVar27 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
        auVar36._8_4_ = (int)((ulonglong)dVar43 & uVar27);
        auVar36._0_8_ = (ulonglong)dVar42 & uVar15;
        auVar36._12_4_ = (int)(((ulonglong)dVar43 & uVar27) >> 0x20);
        auVar41 = auVar41 | auVar36;
        uVar27 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar40._0_8_);
        uVar28 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar40._8_8_);
        uVar26 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar41._0_8_);
        auVar39._0_8_ = uVar27 & (ulonglong)(auVar40._0_8_ - dVar6);
        uVar15 = uVar28 & (ulonglong)(auVar40._8_8_ - dVar7);
        auVar39._8_4_ = (undefined4)uVar15;
        auVar39._12_4_ = (undefined4)(uVar15 >> 0x20);
        auVar33._0_4_ = ~(uint)uVar27 & auVar40._0_4_;
        auVar33._4_4_ = ~(uint)(uVar27 >> 0x20) & auVar40._4_4_;
        auVar33._8_4_ = ~(uint)uVar28 & auVar40._8_4_;
        auVar33._12_4_ = ~(uint)(uVar28 >> 0x20) & auVar40._12_4_;
        this_00->Pitch = (double)SUB168(auVar39 | auVar33,0);
        this_00->Yaw = (double)SUB168(auVar39 | auVar33,8);
        (pFVar17->CachedRotator).Roll =
             (double)(uVar26 & (ulonglong)(auVar41._0_8_ - dVar8) |
                     CONCAT44(~(uint)(uVar26 >> 0x20) & auVar41._4_4_,~(uint)uVar26 & auVar41._0_4_)
                     );
        local_158 = auVar4;
        pTVar18 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_158);
        dVar42 = pTVar18->Y;
        (pFVar17->CachedQuat).X = pTVar18->X;
        (pFVar17->CachedQuat).Y = dVar42;
        dVar42 = pTVar18->W;
        (pFVar17->CachedQuat).Z = pTVar18->Z;
        (pFVar17->CachedQuat).W = dVar42;
      }
      local_138.X = (pFVar17->CachedQuat).X;
      local_138.Y = (pFVar17->CachedQuat).Y;
      local_138.Z = (pFVar17->CachedQuat).Z;
      local_138.W = (pFVar17->CachedQuat).W;
      local_1b8._s_0.X = dVar11;
      local_1b8._s_0.Y = dVar12;
      local_1b8._s_0.Z = dVar3;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)this_01,(TVector<double> *)&local_1b8._s_0,&local_138,false,
                 (FHitResult *)0x0,None);
      local_198.Pitch = pdVar24[3];
      local_198.Yaw = pdVar24[4];
      local_198.Roll = pdVar24[5];
      USceneComponent::SetRelativeRotation
                ((USceneComponent *)this_01,&local_198,false,(FHitResult *)0x0,None);
      local_178._s_0.X = pdVar24[6];
      local_178._s_0.Y = pdVar24[7];
      local_178._s_0.Z = pdVar24[8];
      in_XMM1._8_8_ = 0;
      in_XMM1._0_8_ = local_178._s_0.Z;
      UBoxComponent::SetBoxExtent(this_01,(TVector<double> *)&local_178._s_0,true);
      (**(code **)(this_01->_padding_ + 0x508))
                (this_01,(((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,
                 &FAttachmentTransformRules::KeepRelativeTransform);
      UActorComponent::RegisterComponent((UActorComponent *)this_01);
      (**(code **)(this_01->_padding_ + 1000))(this_01);
      if (*(longlong *)((longlong)pdVar24 + -0xc) != 0) {
        (**(code **)(this_01->_padding_ + 0x788))(this_01,*(undefined8 *)(pFVar23 + 0x3c),1);
      }
      iVar13 = (pFVar14->ColliderArray).ArrayNum;
      piVar1 = &(pFVar14->ColliderArray).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar14,piVar1);
      }
      (pFVar14->ColliderArray).ArrayNum = iVar13 + 1;
      *(UBoxComponent **)((pFVar14->ColliderArray).AllocatorInstance.Data + (longlong)iVar13 * 8) =
           this_01;
      lVar22 = local_1e4._4_8_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
        lVar22 = local_1e4._4_8_;
      }
    }
    uVar15 = (ulonglong)(uint)local_1e4._0_4_;
    lVar25 = lVar25 + 0x60;
    pdVar24 = pdVar24 + 0xc;
  }
  return;
}

// CreateCustomComponent_Impl @ 14a6a3d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USceneComponent * __thiscall
UWN_CS_CharacterCore::CreateCustomComponent_Impl
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1)

{
  AActor *pAVar1;
  UClass *pUVar2;
  USceneComponent *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pAVar1 = (this->Owner).field0_0x0.DebugPtr;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pAVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pAVar1;
  pUVar3 = (USceneComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// CreateHitSphereComponent @ 14a6a3e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::CreateHitSphereComponent
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  TRotator<double> *this_00;
  int *piVar1;
  byte *pbVar2;
  double dVar3;
  undefined1 auVar4 [16];
  AActor *pAVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  float fVar11;
  EWN_CS_CharacterSlotName *pEVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  FColor_u_0 FVar16;
  int iVar17;
  FWN_CS_HitSphereContainer *pFVar18;
  ulonglong uVar19;
  UClass *pUVar20;
  USphereComponent *this_01;
  FPayload *pFVar21;
  TQuat<double> *pTVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auStackY_1f8 [32];
  EWN_CS_CharacterSlotName local_1c8 [8];
  EWN_CS_CharacterSlotName local_1c0 [8];
  undefined1 local_1b8 [4];
  undefined1 local_1b4 [28];
  TVector<double>_u_0 local_198;
  undefined1 local_178 [16];
  double local_168;
  TQuat<double> local_158;
  undefined1 local_138 [128];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (Shiled_LR < param_1) {
    return;
  }
  if ((this->Owner).field0_0x0.DebugPtr == (AActor *)0x0) {
    return;
  }
  pFVar25 = (this->PartInfos).AllocatorInstance.Data;
  pFVar23 = pFVar25 + (longlong)(this->PartInfos).ArrayNum * 0x88;
  while( true ) {
    local_1c8[0] = param_1;
    local_1c0[0] = param_1;
    if (pFVar25 == pFVar23) {
      local_1b4._4_8_ = local_1c0;
      `UWN_CS_CharacterCore::GetPartInfo'::__l11::<lambda_2>::operator()(local_1b4 + 4);
      return;
    }
    if (pFVar25[8] == (FScriptContainerElement)param_1) break;
    pFVar25 = pFVar25 + 0x88;
  }
  if (pFVar25 == (FScriptContainerElement *)0x0) {
    return;
  }
  if ((this->Owner).field0_0x0.DebugPtr == (AActor *)0x0) {
    return;
  }
  pFVar24 = (this->Parts).AllocatorInstance.Data;
  pFVar23 = pFVar24 + (longlong)(this->Parts).ArrayNum * 8;
  if (pFVar24 == pFVar23) {
    return;
  }
  while (lVar26 = *(longlong *)pFVar24, *(EWN_CS_CharacterSlotName *)(lVar26 + 0x28) != param_1) {
    pFVar24 = pFVar24 + 8;
    if (pFVar24 == pFVar23) {
      return;
    }
  }
  if (lVar26 == 0) {
    return;
  }
  plVar27 = (longlong *)(lVar26 + 0x40);
  if (*(int *)(lVar26 + 0x48) != *(int *)(lVar26 + 0x74)) {
    lVar28 = *(longlong *)(lVar26 + 0x80);
    if (*(longlong *)(lVar26 + 0x80) == 0) {
      lVar28 = lVar26 + 0x78;
    }
    iVar17 = *(int *)(lVar28 + ((ulonglong)(*(int *)(lVar26 + 0x88) - 1) & (ulonglong)param_1) * 4);
    if (iVar17 != -1) {
      do {
        if (*(EWN_CS_CharacterSlotName *)((longlong)iVar17 * 0x20 + *plVar27) == param_1)
        goto LAB_14a6a401d;
        iVar17 = *(int *)((longlong)iVar17 * 0x20 + 0x18 + *plVar27);
      } while (iVar17 != -1);
    }
  }
  local_198._s_0.X = (double)local_1c8;
  local_1b4._4_8_ = (void *)0x0;
  local_198._s_0.Y = (double)(local_1b4 + 4);
  local_1b4._12_8_ = 0;
  TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FWN_CS_HitSphereContainer_&&>_>
            (plVar27,(TPairInitializer<EWN_CS_CharacterSlotName_const_&,FWN_CS_HitSphereContainer_&&>
                      *)local_1b4,(bool *)&local_198);
  if ((void *)local_1b4._4_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b4._4_8_);
  }
LAB_14a6a401d:
  pFVar18 = TMapBase<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>_>
            ::FindChecked(plVar27,local_1c8[0]);
  fVar15 = __real_40a00000;
  fVar14 = __real_41200000;
  lVar26 = *(longlong *)(pFVar25 + 0x48);
  local_1b4._0_4_ = *(undefined4 *)(pFVar25 + 0x50);
  uVar19 = (ulonglong)(int)local_1b4._0_4_;
  lVar28 = uVar19 * 0x50 + lVar26;
  while( true ) {
    if (*(int *)(pFVar25 + 0x50) != (int)uVar19) {
      `TCheckedPointerIterator<FWN_CS_HitSphereInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1b8);
    }
    if (lVar26 == lVar28) break;
    pAVar5 = (this->Owner).field0_0x0.DebugPtr;
    local_1b4._4_8_ = (void *)0x0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pAVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar20 = Z_Construct_UClass_USphereComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar20);
    local_138._48_8_ = (FObjectInstancingGraph *)0x0;
    local_138._56_8_ = (UPackage *)0x0;
    local_138._16_4_ = 0;
    local_138._20_4_ = 0;
    local_138._24_4_ = RF_Transient;
    local_138._40_8_ = (UObject *)0x0;
    local_138[0x20] = false;
    local_138._8_8_ = pAVar5;
    this_01 = (USphereComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    if (local_138._64_8_ != 0) {
      plVar27 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar27 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
    pbVar2 = (byte *)((longlong)&this_01->_padding_ + 3);
    *pbVar2 = *pbVar2 & 0xfe;
    pbVar2 = (byte *)((longlong)&this_01->_padding_ + 2);
    *pbVar2 = *pbVar2 & 0xf9;
    USceneComponent::SetHiddenInGame((USceneComponent *)this_01,true,DirtyOnly);
    FVar16 = FColor::Yellow.field0_0x0;
    fVar11 = fVar14;
    if (*(char *)(lVar26 + 0x28) == '\0') {
      FVar16 = FColor::Cyan.field0_0x0;
      fVar11 = fVar15;
    }
    *(FColor_u_0 *)&this_01->_padding_ = (FColor_u_0_s_0)FVar16;
    UShapeComponent::SetLineThickness((UShapeComponent *)this_01,fVar11);
    auVar34 = ZEXT416((uint)*(float *)(lVar26 + 8));
    USphereComponent::SetSphereRadius(this_01,*(float *)(lVar26 + 8),true);
    dVar45 = (double)this_01->_padding_;
    pEVar12 = *(EWN_CS_CharacterSlotName **)(lVar26 + 0x10);
    puVar13 = *(undefined1 **)(lVar26 + 0x18);
    dVar3 = *(double *)(lVar26 + 0x20);
    auVar4._0_8_ = this_01->_padding_;
    auVar4._8_8_ = this_01->_padding_;
    local_168 = dVar45;
    pFVar21 = FRotationConversionCache::GetOrCreatePayload
                        ((FRotationConversionCache *)&this_01->_padding_);
    this_00 = &pFVar21->CachedRotator;
    if ((((double)auVar4._0_8_ != (pFVar21->CachedRotator).Pitch) ||
        (auVar10._4_8_ = extraout_XMM0_Qb, auVar10._0_4_ = (int)((ulonglong)auVar4._0_8_ >> 0x20),
        auVar32._0_8_ = auVar10._0_8_ << 0x20, auVar32._8_4_ = (int)auVar4._8_8_,
        auVar32._12_4_ = (int)((ulonglong)auVar4._8_8_ >> 0x20),
        auVar32._8_8_ != (pFVar21->CachedRotator).Yaw)) ||
       (local_168 != (pFVar21->CachedRotator).Roll)) {
      auVar32 = divpd(auVar4,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar32 = roundpd(auVar34,auVar32,3);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = dVar45;
      auVar34 = divpd(auVar33,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar40._0_8_ = auVar32._0_8_ * dVar6;
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar40._8_8_ = auVar32._8_8_ * dVar7;
      dVar39 = (double)auVar4._0_8_ - auVar40._0_8_;
      dVar9 = (double)auVar4._8_8_ - auVar40._8_8_;
      auVar34 = roundpd(auVar40,auVar34,3);
      dVar8 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar35._8_4_ = SUB84(dVar9,0);
      auVar35._0_8_ = dVar39;
      auVar35._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      dVar45 = dVar45 - auVar34._0_8_ * dVar8;
      dVar46 = 0.0 - auVar34._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      dVar38 = auVar35._8_8_ + dVar7;
      uVar19 = -(ulonglong)(0.0 <= dVar39);
      uVar30 = -(ulonglong)(0.0 <= dVar9);
      auVar41._0_8_ = uVar19 & (ulonglong)dVar39;
      auVar41._8_4_ = (undefined4)(uVar30 & (ulonglong)dVar9);
      auVar41._12_4_ = (undefined4)((uVar30 & (ulonglong)dVar9) >> 0x20);
      auVar43._0_4_ = ~(uint)uVar19 & SUB84(dVar39 + dVar6,0);
      auVar43._4_4_ = ~(uint)(uVar19 >> 0x20) & (uint)((ulonglong)(dVar39 + dVar6) >> 0x20);
      auVar43._8_4_ = ~(uint)uVar30 & SUB84(dVar38,0);
      auVar43._12_4_ = ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
      auVar36._8_4_ = SUB84(dVar46,0);
      auVar36._0_8_ = dVar45;
      auVar36._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      dVar39 = auVar36._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar43 = auVar43 | auVar41;
      uVar19 = -(ulonglong)(0.0 <= dVar45);
      uVar30 = -(ulonglong)(0.0 <= dVar46);
      auVar44._0_4_ = ~(uint)uVar19 & SUB84(dVar45 + dVar8,0);
      auVar44._4_4_ = ~(uint)(uVar19 >> 0x20) & (uint)((ulonglong)(dVar45 + dVar8) >> 0x20);
      auVar44._8_4_ = ~(uint)uVar30 & SUB84(dVar39,0);
      auVar44._12_4_ = ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)dVar39 >> 0x20);
      auVar34._8_4_ = (int)((ulonglong)dVar46 & uVar30);
      auVar34._0_8_ = (ulonglong)dVar45 & uVar19;
      auVar34._12_4_ = (int)(((ulonglong)dVar46 & uVar30) >> 0x20);
      auVar44 = auVar44 | auVar34;
      uVar30 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar43._0_8_);
      uVar31 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar43._8_8_);
      uVar29 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar44._0_8_);
      auVar42._0_8_ = uVar30 & (ulonglong)(auVar43._0_8_ - dVar6);
      uVar19 = uVar31 & (ulonglong)(auVar43._8_8_ - dVar7);
      auVar42._8_4_ = (undefined4)uVar19;
      auVar42._12_4_ = (undefined4)(uVar19 >> 0x20);
      auVar37._0_4_ = ~(uint)uVar30 & auVar43._0_4_;
      auVar37._4_4_ = ~(uint)(uVar30 >> 0x20) & auVar43._4_4_;
      auVar37._8_4_ = ~(uint)uVar31 & auVar43._8_4_;
      auVar37._12_4_ = ~(uint)(uVar31 >> 0x20) & auVar43._12_4_;
      this_00->Pitch = (double)SUB168(auVar42 | auVar37,0);
      this_00->Yaw = (double)SUB168(auVar42 | auVar37,8);
      (pFVar21->CachedRotator).Roll =
           (double)(uVar29 & (ulonglong)(auVar44._0_8_ - dVar8) |
                   CONCAT44(~(uint)(uVar29 >> 0x20) & auVar44._4_4_,~(uint)uVar29 & auVar44._0_4_));
      local_178 = auVar4;
      pTVar22 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_178);
      dVar45 = pTVar22->Y;
      (pFVar21->CachedQuat).X = pTVar22->X;
      (pFVar21->CachedQuat).Y = dVar45;
      dVar45 = pTVar22->W;
      (pFVar21->CachedQuat).Z = pTVar22->Z;
      (pFVar21->CachedQuat).W = dVar45;
    }
    local_158.X = (pFVar21->CachedQuat).X;
    local_158.Y = (pFVar21->CachedQuat).Y;
    local_158.Z = (pFVar21->CachedQuat).Z;
    local_158.W = (pFVar21->CachedQuat).W;
    local_198._s_0.X = (double)pEVar12;
    local_198._s_0.Y = (double)puVar13;
    local_198._s_0.Z = dVar3;
    USceneComponent::SetRelativeLocationAndRotation
              ((USceneComponent *)this_01,(TVector<double> *)&local_198._s_0,&local_158,false,
               (FHitResult *)0x0,None);
    (**(code **)(this_01->_padding_ + 0x508))
              (this_01,(((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,
               &FAttachmentTransformRules::KeepRelativeTransform);
    UActorComponent::RegisterComponent((UActorComponent *)this_01);
    (**(code **)(this_01->_padding_ + 1000))(this_01);
    iVar17 = (pFVar18->HitSphereArray).ArrayNum;
    piVar1 = &(pFVar18->HitSphereArray).ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pFVar18,piVar1);
    }
    (pFVar18->HitSphereArray).ArrayNum = iVar17 + 1;
    *(USphereComponent **)((pFVar18->HitSphereArray).AllocatorInstance.Data + (longlong)iVar17 * 8)
         = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    uVar19 = (ulonglong)(uint)local_1b4._0_4_;
    lVar26 = lVar26 + 0x50;
  }
  local_1b4._4_8_ = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  TDelegate<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->OnPartsListChanged,
                 (TObjectPtr<UWN_CS_CharacterCore>)((longlong)local_1b4 + 4));
  return;
}

// CreateLightComponent @ 14a6a4400

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::CreateLightComponent(UWN_CS_CharacterCore *this)

{
  TRotator<double> *pTVar1;
  byte *pbVar2;
  int *piVar3;
  double dVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  int iVar16;
  USpotLightComponent *this_00;
  FPayload *pFVar17;
  TQuat<double> *pTVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar36;
  undefined1 auVar30 [16];
  double dVar37;
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined1 local_c8 [16];
  double local_b8;
  TQuat<double> local_a8 [3];
  
  (**(code **)(this->_padding_ + 0x340))();
  iVar6 = (this->NonePartInfo).LightInfoArray.ArrayNum;
  pFVar21 = (this->NonePartInfo).LightInfoArray.AllocatorInstance.Data;
  pFVar19 = pFVar21 + 0x28;
  pFVar20 = pFVar21 + (longlong)iVar6 * 0x60;
  do {
    if ((this->NonePartInfo).LightInfoArray.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FWN_CS_LightInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar21 == pFVar20) {
      return;
    }
    if (*(int *)(pFVar19 + -0x20) == 2) {
      this_00 = (USpotLightComponent *)(**(code **)(this->_padding_ + 0x378))(this,pFVar21);
      pbVar2 = (byte *)((longlong)&this_00->_padding_ + 3);
      *pbVar2 = *pbVar2 & 0xfe;
      pbVar2 = (byte *)((longlong)&this_00->_padding_ + 2);
      *pbVar2 = *pbVar2 & 0xf9;
      dVar50 = (double)this_00->_padding_;
      dVar14 = *(double *)pFVar19;
      dVar15 = *(double *)(pFVar19 + 8);
      dVar4 = *(double *)(pFVar19 + 0x10);
      auVar5._0_8_ = this_00->_padding_;
      auVar5._8_8_ = this_00->_padding_;
      local_b8 = dVar50;
      pFVar17 = FRotationConversionCache::GetOrCreatePayload
                          ((FRotationConversionCache *)&this_00->_padding_);
      pTVar1 = &pFVar17->CachedRotator;
      if ((((double)auVar5._0_8_ != (pFVar17->CachedRotator).Pitch) ||
          (auVar12._4_8_ = extraout_XMM0_Qb, auVar12._0_4_ = (int)((ulonglong)auVar5._0_8_ >> 0x20),
          auVar26._0_8_ = auVar12._0_8_ << 0x20, auVar26._8_4_ = (int)auVar5._8_8_,
          auVar26._12_4_ = (int)((ulonglong)auVar5._8_8_ >> 0x20),
          auVar26._8_8_ != (pFVar17->CachedRotator).Yaw)) ||
         (local_b8 != (pFVar17->CachedRotator).Roll)) {
        auVar27 = divpd(auVar5,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar38 = roundpd(in_XMM1,auVar27,3);
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar50;
        auVar27 = divpd(auVar28,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar39._0_8_ = auVar38._0_8_ * dVar8;
        dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar39._8_8_ = auVar38._8_8_ * dVar9;
        dVar37 = (double)auVar5._0_8_ - auVar39._0_8_;
        dVar11 = (double)auVar5._8_8_ - auVar39._8_8_;
        auVar27 = roundpd(auVar39,auVar27,3);
        dVar10 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar29._8_4_ = SUB84(dVar11,0);
        auVar29._0_8_ = dVar37;
        auVar29._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        dVar50 = dVar50 - auVar27._0_8_ * dVar10;
        dVar51 = 0.0 - auVar27._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        dVar36 = auVar29._8_8_ + dVar9;
        uVar22 = -(ulonglong)(0.0 <= dVar37);
        uVar24 = -(ulonglong)(0.0 <= dVar11);
        auVar40._0_8_ = uVar22 & (ulonglong)dVar37;
        auVar40._8_4_ = (undefined4)(uVar24 & (ulonglong)dVar11);
        auVar40._12_4_ = (undefined4)((uVar24 & (ulonglong)dVar11) >> 0x20);
        auVar46._0_4_ = ~(uint)uVar22 & SUB84(dVar37 + dVar8,0);
        auVar46._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar37 + dVar8) >> 0x20);
        auVar46._8_4_ = ~(uint)uVar24 & SUB84(dVar36,0);
        auVar46._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar36 >> 0x20);
        auVar30._8_4_ = SUB84(dVar51,0);
        auVar30._0_8_ = dVar50;
        auVar30._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        dVar37 = auVar30._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar46 = auVar46 | auVar40;
        uVar22 = -(ulonglong)(0.0 <= dVar50);
        uVar24 = -(ulonglong)(0.0 <= dVar51);
        auVar48._0_4_ = ~(uint)uVar22 & SUB84(dVar50 + dVar10,0);
        auVar48._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar50 + dVar10) >> 0x20);
        auVar48._8_4_ = ~(uint)uVar24 & SUB84(dVar37,0);
        auVar48._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
        auVar7._8_4_ = (int)((ulonglong)dVar51 & uVar24);
        auVar7._0_8_ = (ulonglong)dVar50 & uVar22;
        auVar7._12_4_ = (int)(((ulonglong)dVar51 & uVar24) >> 0x20);
        auVar48 = auVar48 | auVar7;
        uVar24 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar46._0_8_);
        uVar25 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar46._8_8_);
        uVar23 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar48._0_8_);
        auVar41._0_8_ = uVar24 & (ulonglong)(auVar46._0_8_ - dVar8);
        uVar22 = uVar25 & (ulonglong)(auVar46._8_8_ - dVar9);
        auVar41._8_4_ = (undefined4)uVar22;
        auVar41._12_4_ = (undefined4)(uVar22 >> 0x20);
        auVar31._0_4_ = ~(uint)uVar24 & auVar46._0_4_;
        auVar31._4_4_ = ~(uint)(uVar24 >> 0x20) & auVar46._4_4_;
        auVar31._8_4_ = ~(uint)uVar25 & auVar46._8_4_;
        auVar31._12_4_ = ~(uint)(uVar25 >> 0x20) & auVar46._12_4_;
        pTVar1->Pitch = (double)SUB168(auVar41 | auVar31,0);
        pTVar1->Yaw = (double)SUB168(auVar41 | auVar31,8);
        (pFVar17->CachedRotator).Roll =
             (double)(uVar23 & (ulonglong)(auVar48._0_8_ - dVar10) |
                     CONCAT44(~(uint)(uVar23 >> 0x20) & auVar48._4_4_,~(uint)uVar23 & auVar48._0_4_)
                     );
        local_c8 = auVar5;
        pTVar18 = UE::Math::TRotator<double>::Quaternion(pTVar1,(TQuat<double> *)local_c8);
        dVar50 = pTVar18->Y;
        (pFVar17->CachedQuat).X = pTVar18->X;
        (pFVar17->CachedQuat).Y = dVar50;
        dVar50 = pTVar18->W;
        (pFVar17->CachedQuat).Z = pTVar18->Z;
        (pFVar17->CachedQuat).W = dVar50;
      }
      local_a8[0].X = (pFVar17->CachedQuat).X;
      local_a8[0].Y = (pFVar17->CachedQuat).Y;
      local_a8[0].Z = (pFVar17->CachedQuat).Z;
      local_a8[0].W = (pFVar17->CachedQuat).W;
      local_108._s_0.X = dVar14;
      local_108._s_0.Y = dVar15;
      local_108._s_0.Z = dVar4;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)this_00,(TVector<double> *)&local_108._s_0,local_a8,false,
                 (FHitResult *)0x0,None);
      local_e8._s_0.X = (double)*(undefined8 *)(pFVar19 + 0x18);
      local_e8._s_0.Y = (double)*(undefined8 *)(pFVar19 + 0x20);
      local_e8._s_0.Z = (double)*(undefined8 *)(pFVar19 + 0x28);
      USceneComponent::SetRelativeRotation
                ((USceneComponent *)this_00,(TRotator<double> *)&local_e8._s_0,false,
                 (FHitResult *)0x0,None);
      UPointLightComponent::SetSourceRadius
                ((UPointLightComponent *)this_00,*(float *)(pFVar19 + -4));
      ULocalLightComponent::SetAttenuationRadius
                ((ULocalLightComponent *)this_00,*(float *)(pFVar19 + -8));
      local_108._s_0.X = (double)*(undefined8 *)(pFVar19 + -0x1c);
      local_108._s_0.Y = (double)*(undefined8 *)(pFVar19 + -0x14);
      ULightComponent::SetLightColor
                ((ULightComponent *)this_00,(FLinearColor *)&local_108._s_0,true);
      in_XMM1 = ZEXT416((uint)*(float *)(pFVar19 + -0xc));
      ULightComponent::SetIntensity((ULightComponent *)this_00,*(float *)(pFVar19 + -0xc));
      local_res10 = 0;
      (**(code **)(this_00->_padding_ + 0x508))
                (this_00,(((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,
                 &FAttachmentTransformRules::KeepRelativeTransform,0);
      UActorComponent::RegisterComponent((UActorComponent *)this_00);
      (**(code **)(this_00->_padding_ + 1000))(this_00);
      ULightComponent::SetLightingChannels((ULightComponent *)this_00,true,true,true);
LAB_14a6a495e:
      iVar16 = (this->LightComponentArray).ArrayNum;
      piVar3 = &(this->LightComponentArray).ArrayMax;
      if (iVar16 == *piVar3) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->LightComponentArray).AllocatorInstance,piVar3);
      }
      (this->LightComponentArray).ArrayNum = iVar16 + 1;
      *(USpotLightComponent **)
       ((this->LightComponentArray).AllocatorInstance.Data + (longlong)iVar16 * 8) = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
    }
    else if (*(int *)(pFVar19 + -0x20) == 1) {
      this_00 = (USpotLightComponent *)(**(code **)(this->_padding_ + 0x380))(this,pFVar21);
      pbVar2 = (byte *)((longlong)&this_00->_padding_ + 3);
      *pbVar2 = *pbVar2 & 0xfe;
      pbVar2 = (byte *)((longlong)&this_00->_padding_ + 2);
      *pbVar2 = *pbVar2 & 0xf9;
      dVar50 = (double)this_00->_padding_;
      dVar14 = *(double *)pFVar19;
      dVar15 = *(double *)(pFVar19 + 8);
      dVar4 = *(double *)(pFVar19 + 0x10);
      auVar27._0_8_ = this_00->_padding_;
      auVar27._8_8_ = this_00->_padding_;
      local_b8 = dVar50;
      pFVar17 = FRotationConversionCache::GetOrCreatePayload
                          ((FRotationConversionCache *)&this_00->_padding_);
      pTVar1 = &pFVar17->CachedRotator;
      if ((((double)auVar27._0_8_ != (pFVar17->CachedRotator).Pitch) ||
          (auVar13._4_8_ = extraout_XMM0_Qb_00,
          auVar13._0_4_ = (int)((ulonglong)auVar27._0_8_ >> 0x20),
          auVar38._0_8_ = auVar13._0_8_ << 0x20, auVar38._8_4_ = (int)auVar27._8_8_,
          auVar38._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20),
          auVar38._8_8_ != (pFVar17->CachedRotator).Yaw)) ||
         (local_b8 != (pFVar17->CachedRotator).Roll)) {
        auVar38 = divpd(auVar27,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar42 = roundpd(in_XMM1,auVar38,3);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = dVar50;
        auVar38 = divpd(auVar32,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar43._0_8_ = auVar42._0_8_ * dVar8;
        dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar43._8_8_ = auVar42._8_8_ * dVar9;
        dVar37 = (double)auVar27._0_8_ - auVar43._0_8_;
        dVar11 = (double)auVar27._8_8_ - auVar43._8_8_;
        auVar38 = roundpd(auVar43,auVar38,3);
        dVar10 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar33._8_4_ = SUB84(dVar11,0);
        auVar33._0_8_ = dVar37;
        auVar33._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        dVar50 = dVar50 - auVar38._0_8_ * dVar10;
        dVar51 = 0.0 - auVar38._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        dVar36 = auVar33._8_8_ + dVar9;
        uVar22 = -(ulonglong)(0.0 <= dVar37);
        uVar24 = -(ulonglong)(0.0 <= dVar11);
        auVar44._0_8_ = uVar22 & (ulonglong)dVar37;
        auVar44._8_4_ = (undefined4)(uVar24 & (ulonglong)dVar11);
        auVar44._12_4_ = (undefined4)((uVar24 & (ulonglong)dVar11) >> 0x20);
        auVar47._0_4_ = ~(uint)uVar22 & SUB84(dVar37 + dVar8,0);
        auVar47._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar37 + dVar8) >> 0x20);
        auVar47._8_4_ = ~(uint)uVar24 & SUB84(dVar36,0);
        auVar47._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar36 >> 0x20);
        auVar34._8_4_ = SUB84(dVar51,0);
        auVar34._0_8_ = dVar50;
        auVar34._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        dVar37 = auVar34._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar47 = auVar47 | auVar44;
        uVar22 = -(ulonglong)(0.0 <= dVar50);
        uVar24 = -(ulonglong)(0.0 <= dVar51);
        auVar49._0_4_ = ~(uint)uVar22 & SUB84(dVar50 + dVar10,0);
        auVar49._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar50 + dVar10) >> 0x20);
        auVar49._8_4_ = ~(uint)uVar24 & SUB84(dVar37,0);
        auVar49._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
        auVar42._8_4_ = (int)((ulonglong)dVar51 & uVar24);
        auVar42._0_8_ = (ulonglong)dVar50 & uVar22;
        auVar42._12_4_ = (int)(((ulonglong)dVar51 & uVar24) >> 0x20);
        auVar49 = auVar49 | auVar42;
        uVar24 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar47._0_8_);
        uVar25 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar47._8_8_);
        uVar23 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar49._0_8_);
        auVar45._0_8_ = uVar24 & (ulonglong)(auVar47._0_8_ - dVar8);
        uVar22 = uVar25 & (ulonglong)(auVar47._8_8_ - dVar9);
        auVar45._8_4_ = (undefined4)uVar22;
        auVar45._12_4_ = (undefined4)(uVar22 >> 0x20);
        auVar35._0_4_ = ~(uint)uVar24 & auVar47._0_4_;
        auVar35._4_4_ = ~(uint)(uVar24 >> 0x20) & auVar47._4_4_;
        auVar35._8_4_ = ~(uint)uVar25 & auVar47._8_4_;
        auVar35._12_4_ = ~(uint)(uVar25 >> 0x20) & auVar47._12_4_;
        pTVar1->Pitch = (double)SUB168(auVar45 | auVar35,0);
        pTVar1->Yaw = (double)SUB168(auVar45 | auVar35,8);
        (pFVar17->CachedRotator).Roll =
             (double)(uVar23 & (ulonglong)(auVar49._0_8_ - dVar10) |
                     CONCAT44(~(uint)(uVar23 >> 0x20) & auVar49._4_4_,~(uint)uVar23 & auVar49._0_4_)
                     );
        local_c8 = auVar27;
        pTVar18 = UE::Math::TRotator<double>::Quaternion(pTVar1,(TQuat<double> *)local_c8);
        dVar50 = pTVar18->Y;
        (pFVar17->CachedQuat).X = pTVar18->X;
        (pFVar17->CachedQuat).Y = dVar50;
        dVar50 = pTVar18->W;
        (pFVar17->CachedQuat).Z = pTVar18->Z;
        (pFVar17->CachedQuat).W = dVar50;
      }
      local_a8[0].X = (pFVar17->CachedQuat).X;
      local_a8[0].Y = (pFVar17->CachedQuat).Y;
      local_a8[0].Z = (pFVar17->CachedQuat).Z;
      local_a8[0].W = (pFVar17->CachedQuat).W;
      local_e8._s_0.X = dVar14;
      local_e8._s_0.Y = dVar15;
      local_e8._s_0.Z = dVar4;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)this_00,(TVector<double> *)&local_e8._s_0,local_a8,false,
                 (FHitResult *)0x0,None);
      local_108._s_0.X = (double)*(undefined8 *)(pFVar19 + 0x18);
      local_108._s_0.Y = (double)*(undefined8 *)(pFVar19 + 0x20);
      local_108._s_0.Z = (double)*(undefined8 *)(pFVar19 + 0x28);
      USceneComponent::SetRelativeRotation
                ((USceneComponent *)this_00,(TRotator<double> *)&local_108._s_0,false,
                 (FHitResult *)0x0,None);
      UPointLightComponent::SetSourceRadius
                ((UPointLightComponent *)this_00,*(float *)(pFVar19 + -4));
      ULocalLightComponent::SetAttenuationRadius
                ((ULocalLightComponent *)this_00,*(float *)(pFVar19 + -8));
      local_108._s_0.X = (double)*(undefined8 *)(pFVar19 + -0x1c);
      local_108._s_0.Y = (double)*(undefined8 *)(pFVar19 + -0x14);
      ULightComponent::SetLightColor
                ((ULightComponent *)this_00,(FLinearColor *)&local_108._s_0,true);
      ULightComponent::SetIntensity((ULightComponent *)this_00,*(float *)(pFVar19 + -0xc));
      local_res18 = 0;
      (**(code **)(this_00->_padding_ + 0x508))
                (this_00,(((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,
                 &FAttachmentTransformRules::KeepRelativeTransform,0);
      UActorComponent::RegisterComponent((UActorComponent *)this_00);
      (**(code **)(this_00->_padding_ + 1000))(this_00);
      ULightComponent::SetLightingChannels((ULightComponent *)this_00,true,true,true);
      USpotLightComponent::SetInnerConeAngle(this_00,*(float *)(pFVar19 + 0x30));
      in_XMM1 = ZEXT416((uint)*(float *)(pFVar19 + 0x34));
      USpotLightComponent::SetOuterConeAngle(this_00,*(float *)(pFVar19 + 0x34));
      goto LAB_14a6a495e;
    }
    pFVar21 = pFVar21 + 0x60;
    pFVar19 = pFVar19 + 0x60;
  } while( true );
}

// CreateNiagaraComponent_Impl @ 14a6a4a10

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __thiscall
UWN_CS_CharacterCore::CreateNiagaraComponent_Impl
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraSystem *pUVar3;
  UClass *pUVar4;
  UNiagaraComponent *pUVar5;
  atomic<unsigned_char> *paVar6;
  int iVar7;
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  pUVar3 = (UNiagaraSystem *)
           FSoftObjectPath::TryLoad(&param_1->ResourcePath,(FUObjectSerializeContext *)0x0);
  if (pUVar3 == (UNiagaraSystem *)0x0) {
    iVar7 = 0x3fc;
    paVar6 = &bGEnsureHasExecuted<22205994532602876>;
  }
  else {
    pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar7 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar4->_padding_)) {
      pUVar3 = (UNiagaraSystem *)0x0;
    }
    local_48.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_48.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_48.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pUVar5 = UNiagaraFunctionLibrary::SpawnSystemAttached
                       (pUVar3,(USceneComponent *)
                               (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,
                        param_1->SocketName,(TVector<double> *)&local_28._s_0,&local_48,
                        KeepRelativeOffset,false,true,None,true);
    if (pUVar5 != (UNiagaraComponent *)0x0) {
      return pUVar5;
    }
    iVar7 = 0x405;
    paVar6 = &bGEnsureHasExecuted<22205994532602885>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar6,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_CS\\Source\\WN_CS\\Private\\WN_CS_CharacterCore.cpp"
                     ,iVar7,"false");
  if (!bVar2) {
    return (UNiagaraComponent *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pUVar5 = (UNiagaraComponent *)(*pcVar1)();
  return pUVar5;
}

// CreatePart @ 14a6a4b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::CreatePart(UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UWN_CS_CharacterPart>,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  undefined1 auStack_158 [32];
  UObject **local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  EWN_CS_CharacterSlotName local_108 [8];
  UObject *local_100;
  UWN_CS_CharacterCore *local_f8;
  EWN_CS_CharacterSlotName *local_f0;
  FString local_e8;
  FName local_d8;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  if ((param_1 < Count) &&
     (local_38 = __security_cookie.value ^ (ulonglong)auStack_158,
     (this->Owner).field0_0x0.DebugPtr != (AActor *)0x0)) {
    pFVar11 = (this->PartInfos).AllocatorInstance.Data;
    pFVar9 = pFVar11 + (longlong)(this->PartInfos).ArrayNum * 0x88;
    for (; local_108[0] = param_1, pFVar11 != pFVar9; pFVar11 = pFVar11 + 0x88) {
      if (pFVar11[8] == (FScriptContainerElement)param_1) {
        if (pFVar11 == (FScriptContainerElement *)0x0) {
          return;
        }
        WN_CS_GetCharacterSlotNameString(&local_d0,param_1);
        ::FString::PrintfImpl(&local_e8,L"Part_%s");
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_e8.Data.ArrayNum != 0) {
          FVar13.Data = local_e8.Data.AllocatorInstance.Data;
        }
        pFVar7 = ::FName::FName(&local_d8,(wchar_t *)FVar13.Data);
        FVar3 = *pFVar7;
        if (FVar3 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar8 = UWN_CS_CharacterPart::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar8);
        local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_b8._56_8_ = (UPackage *)0x0;
        local_b8._24_4_ = RF_Transient;
        local_b8._40_8_ = (UObject *)0x0;
        local_b8[0x20] = false;
        local_b8._8_8_ = this;
        local_b8._16_8_ = FVar3;
        local_100 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar12 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
        *(EWN_CS_CharacterSlotName *)(local_100 + 1) = param_1;
        pTVar2 = &this->Parts;
        *(undefined4 *)&local_100[1].field_0x4 = *(undefined4 *)(pFVar11 + 0x14);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_100);
        }
        pFVar9 = (pTVar2->AllocatorInstance).Data;
        if ((pFVar9 <= (FScriptContainerElement *)&local_100) &&
           (lVar10 = (longlong)(this->Parts).ArrayMax,
           (FScriptContainerElement *)&local_100 < pFVar9 + lVar10 * 8)) {
          local_120 = (longlong)(this->Parts).ArrayNum;
          local_118 = 8;
          local_138 = &local_100;
          local_130 = pFVar9;
          local_128 = lVar10;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = (this->Parts).ArrayNum;
        piVar1 = &(this->Parts).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->Parts).ArrayNum = iVar6 + 1;
        *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_100;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_100);
        }
        (**(code **)(this->_padding_ + 0x2f8))(this,param_1);
        (**(code **)(this->_padding_ + 0x318))(this,param_1);
        (**(code **)(this->_padding_ + 0x398))(this,pFVar11);
        local_f8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        TDelegate<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(&this->OnPartsListChanged,(TObjectPtr<UWN_CS_CharacterCore>)&local_f8);
        if (local_e8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        return;
      }
    }
    local_f0 = local_108;
    `UWN_CS_CharacterCore::GetPartInfo'::__l11::<lambda_2>::operator()(&local_f0);
  }
  return;
}

// CreatePartComponent @ 14a6a4e30

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

USceneComponent * __thiscall
UWN_CS_CharacterCore::CreatePartComponent
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  USceneComponent *this_00;
  UClass *pUVar5;
  byte bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  EWN_CS_CharacterSlotName local_res10 [8];
  FScriptContainerElement *local_res18;
  FScriptContainerElement **local_res20;
  TVector<double>_u_0 local_68 [2];
  
  if ((param_1 < Count) && ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0)) {
    pFVar9 = (this->PartInfos).AllocatorInstance.Data;
    pFVar7 = pFVar9 + (longlong)(this->PartInfos).ArrayNum * 0x88;
    for (; pFVar8 = (FScriptContainerElement *)0x0, local_res10[0] = param_1, pFVar9 != pFVar7;
        pFVar9 = pFVar9 + 0x88) {
      if (pFVar9[8] == (FScriptContainerElement)param_1) {
        pFVar8 = pFVar9;
        if (pFVar9 != (FScriptContainerElement *)0x0) goto LAB_14a6a4eaa;
        break;
      }
    }
    pFVar9 = pFVar8;
    local_res20 = (FScriptContainerElement **)local_res10;
    `UWN_CS_CharacterCore::GetPartInfo'::__l11::<lambda_2>::operator()(&local_res20);
LAB_14a6a4eaa:
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      local_res18 = pFVar9;
      if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
        pFVar8 = (this->Parts).AllocatorInstance.Data;
        pFVar7 = pFVar8 + (longlong)(this->Parts).ArrayNum * 8;
        for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 8) {
          lVar3 = *(longlong *)pFVar8;
          if (*(EWN_CS_CharacterSlotName *)(lVar3 + 0x28) == param_1) {
            if ((pFVar8 != (FScriptContainerElement *)0x0) && (lVar3 != 0)) {
              iVar2 = *(int *)(pFVar9 + 0x14);
              lVar4 = this->_padding_;
              if (iVar2 == 1) {
                this_00 = (USceneComponent *)(**(code **)(lVar4 + 0x350))(this,pFVar9);
                if (this_00 == (USceneComponent *)0x0) {
                  return (USceneComponent *)0x0;
                }
                pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
                iVar2 = (int)pUVar5->_padding_;
                if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
                    == &pUVar5->_padding_)) {
                  pbVar1 = (byte *)((longlong)&this_00[3].Bounds.Origin.field0_0x0 + 7);
                  *pbVar1 = *pbVar1 | 0x10;
                  pbVar1 = (byte *)((longlong)&this_00[4].ComponentVelocity.field0_0x0 + 10);
                  *pbVar1 = *pbVar1 | 4;
                }
              }
              else if (iVar2 == 2) {
                this_00 = (USceneComponent *)(**(code **)(lVar4 + 0x358))(this);
                if (this_00 == (USceneComponent *)0x0) {
                  return (USceneComponent *)0x0;
                }
                local_res20 = (FScriptContainerElement **)0x0;
                if (*(longlong *)(local_res18 + 0xc) == 0) {
                  local_res20 = &local_res18;
                  `UWN_CS_CharacterCore::CreatePartComponent'::__l18::<lambda_2>::operator()
                            (&local_res20);
                }
              }
              else if (iVar2 == 3) {
                this_00 = (USceneComponent *)(**(code **)(lVar4 + 0x360))(this);
                if (this_00 == (USceneComponent *)0x0) {
                  return (USceneComponent *)0x0;
                }
                local_res20 = (FScriptContainerElement **)0x0;
                if (*(longlong *)(local_res18 + 0xc) == 0) {
                  local_res20 = &local_res18;
                  `UWN_CS_CharacterCore::CreatePartComponent'::__l22::<lambda_3>::operator()
                            (&local_res20);
                }
              }
              else if (iVar2 == 4) {
                this_00 = (USceneComponent *)(**(code **)(lVar4 + 0x368))(this);
                if (this_00 == (USceneComponent *)0x0) {
                  return (USceneComponent *)0x0;
                }
                local_res20 = (FScriptContainerElement **)0x0;
                if (*(longlong *)(local_res18 + 0xc) == 0) {
                  local_res20 = &local_res18;
                  `UWN_CS_CharacterCore::CreatePartComponent'::__l26::<lambda_4>::operator()
                            (&local_res20);
                }
              }
              else {
                this_00 = (USceneComponent *)(**(code **)(lVar4 + 0x370))();
                if (this_00 == (USceneComponent *)0x0) {
                  return (USceneComponent *)0x0;
                }
                local_res20 = (FScriptContainerElement **)0x0;
                if (*(longlong *)(local_res18 + 0xc) == 0) {
                  local_res20 = &local_res18;
                  `UWN_CS_CharacterCore::CreatePartComponent'::__l30::<lambda_5>::operator()
                            (&local_res20);
                }
              }
              bVar6 = ((char)*local_res18 << 2 ^ *(byte *)((longlong)&this_00->_padding_ + 2)) & 4 ^
                      *(byte *)((longlong)&this_00->_padding_ + 2);
              *(byte *)((longlong)&this_00->_padding_ + 2) =
                   ((char)*local_res18 * '\x02' ^ bVar6) & 2 ^ bVar6;
              (**(code **)(this_00->_padding_ + 0x420))(this_00);
              this_00->bUseAttachParentBound = '\x01';
              local_68[0]._16_8_ = (undefined8)*(float *)(local_res18 + 4);
              local_68[0]._8_4_ = (int)local_68[0]._16_8_;
              local_68[0]._0_8_ = local_68[0]._16_8_;
              local_68[0]._12_4_ = (int)((ulonglong)local_68[0]._16_8_ >> 0x20);
              USceneComponent::SetRelativeScale3D(this_00,(TVector<double> *)&local_68[0]._s_0);
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_00);
              }
              *(USceneComponent **)(lVar3 + 0x38) = this_00;
              if (*(longlong *)(local_res18 + 0x3c) != 0) {
                pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
                iVar2 = (int)pUVar5->_padding_;
                if (((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
                    ((longlong *)
                     *(undefined1 **)
                      (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                     &pUVar5->_padding_)) && (this_00 != (USceneComponent *)0x0)) {
                  (**(code **)(this_00->_padding_ + 0x788))
                            (this_00,*(undefined8 *)(local_res18 + 0x3c),
                             CONCAT71((int7)((ulonglong)&pUVar5->_padding_ >> 8),1));
                }
              }
              (**(code **)(this->_padding_ + 0x3c8))(this,local_res18,this_00);
              return this_00;
            }
            break;
          }
        }
      }
      if (*(longlong *)(pFVar9 + 0xc) == 0) {
        local_res20 = &local_res18;
        `UWN_CS_CharacterCore::CreatePartComponent'::__l8::<lambda_1>::operator()(&local_res20);
      }
    }
  }
  return (USceneComponent *)0x0;
}

// CreateParts @ 14a6a5180

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::CreateParts(UWN_CS_CharacterCore *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar2 = (this->PartInfos).AllocatorInstance.Data;
    iVar1 = (this->PartInfos).ArrayNum;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x88;
    while( true ) {
      if ((this->PartInfos).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FWN_CS_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar2 == pFVar3) break;
      CreatePart(this,(EWN_CS_CharacterSlotName)pFVar2[8]);
      pFVar2 = pFVar2 + 0x88;
    }
    (**(code **)(this->_padding_ + 0x3a8))();
  }
  return;
}

// CreatePointLightComponent_Impl @ 14a6a5210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPointLightComponent * __thiscall
UWN_CS_CharacterCore::CreatePointLightComponent_Impl
          (UWN_CS_CharacterCore *this,FWN_CS_LightInfo *param_1)

{
  FName FVar1;
  USkeletalMeshComponent *pUVar2;
  UClass *pUVar3;
  UPointLightComponent *pUVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FVar1 = param_1->Name;
  pUVar2 = (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = Z_Construct_UClass_UPointLightComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar2;
  local_98._16_8_ = FVar1;
  pUVar4 = (UPointLightComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return pUVar4;
}

// CreateServerHitCapsuleComponent @ 14a6a52f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::CreateServerHitCapsuleComponent
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  TRotator<double> *this_00;
  int *piVar1;
  byte *pbVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  AActor *pAVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  float fVar14;
  float fVar15;
  float fVar16;
  FColor_u_0 FVar17;
  int iVar18;
  FWN_CS_ServerHitCapsuleContainer *pFVar19;
  ulonglong uVar20;
  UClass *pUVar21;
  UCapsuleComponent *this_01;
  FPayload *pFVar22;
  TQuat<double> *pTVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  char *pcVar28;
  longlong *plVar29;
  char *pcVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 auStackY_218 [32];
  EWN_CS_CharacterSlotName local_1e8 [8];
  EWN_CS_CharacterSlotName local_1e0 [8];
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [20];
  EWN_CS_CharacterSlotName *local_1c0;
  undefined1 *local_1b8;
  TVector<double>_u_0 local_1a8;
  undefined1 local_188 [16];
  double local_178;
  TQuat<double> local_168;
  undefined1 local_148 [128];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (Shiled_LR < param_1) {
    return;
  }
  if ((this->Owner).field0_0x0.DebugPtr == (AActor *)0x0) {
    return;
  }
  pFVar27 = (this->PartInfos).AllocatorInstance.Data;
  pFVar24 = pFVar27 + (longlong)(this->PartInfos).ArrayNum * 0x88;
  while( true ) {
    local_1e8[0] = param_1;
    local_1e0[0] = param_1;
    if (pFVar27 == pFVar24) {
      local_1d4._4_8_ = local_1e0;
      `UWN_CS_CharacterCore::GetPartInfo'::__l11::<lambda_2>::operator()(local_1d4 + 4);
      return;
    }
    if (pFVar27[8] == (FScriptContainerElement)param_1) break;
    pFVar27 = pFVar27 + 0x88;
  }
  if (pFVar27 == (FScriptContainerElement *)0x0) {
    return;
  }
  if ((this->Owner).field0_0x0.DebugPtr == (AActor *)0x0) {
    return;
  }
  pFVar25 = (this->Parts).AllocatorInstance.Data;
  pFVar24 = pFVar25 + (longlong)(this->Parts).ArrayNum * 8;
  if (pFVar25 == pFVar24) {
    return;
  }
  while (lVar7 = *(longlong *)pFVar25, *(EWN_CS_CharacterSlotName *)(lVar7 + 0x28) != param_1) {
    pFVar25 = pFVar25 + 8;
    if (pFVar25 == pFVar24) {
      return;
    }
  }
  if (lVar7 == 0) {
    return;
  }
  plVar29 = (longlong *)(lVar7 + 0x90);
  if (*(int *)(lVar7 + 0x98) != *(int *)(lVar7 + 0xc4)) {
    lVar26 = *(longlong *)(lVar7 + 0xd0);
    if (*(longlong *)(lVar7 + 0xd0) == 0) {
      lVar26 = lVar7 + 200;
    }
    iVar18 = *(int *)(lVar26 + ((ulonglong)(*(int *)(lVar7 + 0xd8) - 1) & (ulonglong)param_1) * 4);
    if (iVar18 != -1) {
      do {
        if (*(EWN_CS_CharacterSlotName *)((longlong)iVar18 * 0x20 + *plVar29) == param_1)
        goto LAB_14a6a54ad;
        iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + *plVar29);
      } while (iVar18 != -1);
    }
  }
  local_1c0 = local_1e8;
  local_1d4._4_8_ = (void *)0x0;
  local_1b8 = local_1d4 + 4;
  local_1d4._12_8_ = 0;
  TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FWN_CS_ServerHitCapsuleContainer_&&>_>
            (plVar29,(TPairInitializer<EWN_CS_CharacterSlotName_const_&,FWN_CS_ServerHitCapsuleContainer_&&>
                      *)local_1d4,(bool *)&local_1c0);
  if ((void *)local_1d4._4_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d4._4_8_);
  }
LAB_14a6a54ad:
  pFVar19 = TMapBase<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,0>_>
            ::FindChecked(plVar29,local_1e8[0]);
  fVar16 = __real_40a00000;
  fVar15 = __real_41200000;
  pcVar28 = *(char **)(pFVar27 + 0x58);
  local_1d4._0_4_ = *(undefined4 *)(pFVar27 + 0x60);
  uVar20 = (ulonglong)(int)local_1d4._0_4_;
  pcVar30 = pcVar28 + uVar20 * 0x50;
  while( true ) {
    if (*(int *)(pFVar27 + 0x60) != (int)uVar20) {
      `TCheckedPointerIterator<FWN_CS_ServerHitCapsuleInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1d8);
    }
    if (pcVar28 == pcVar30) break;
    if (*pcVar28 != '\0') {
      pAVar8 = (this->Owner).field0_0x0.DebugPtr;
      local_1c0 = (EWN_CS_CharacterSlotName *)0x0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pAVar8,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar21 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_148,pUVar21);
      local_148._48_8_ = (FObjectInstancingGraph *)0x0;
      local_148._56_8_ = (UPackage *)0x0;
      local_148._16_4_ = 0;
      local_148._20_4_ = 0;
      local_148._24_4_ = RF_Transient;
      local_148._40_8_ = (UObject *)0x0;
      local_148[0x20] = false;
      local_148._8_8_ = pAVar8;
      this_01 = (UCapsuleComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
      if (local_148._64_8_ != 0) {
        plVar29 = (longlong *)(local_148 + 0x50);
        if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
          plVar29 = (longlong *)local_148._104_8_;
        }
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
      pbVar2 = (byte *)((longlong)&this_01->_padding_ + 3);
      *pbVar2 = *pbVar2 & 0xfe;
      pbVar2 = (byte *)((longlong)&this_01->_padding_ + 2);
      *pbVar2 = *pbVar2 & 0xf9;
      USceneComponent::SetHiddenInGame((USceneComponent *)this_01,true,DirtyOnly);
      FVar17 = FColor::Yellow.field0_0x0;
      fVar14 = fVar15;
      if (pcVar28[0x28] == '\0') {
        FVar17 = FColor::Blue.field0_0x0;
        fVar14 = fVar16;
      }
      *(FColor_u_0 *)&this_01->_padding_ = (FColor_u_0_s_0)FVar17;
      UShapeComponent::SetLineThickness((UShapeComponent *)this_01,fVar14);
      UCapsuleComponent::SetCapsuleSize(this_01,this_01->CapsuleRadius,*(float *)(pcVar28 + 4),true)
      ;
      auVar36 = ZEXT416((uint)*(float *)(pcVar28 + 8));
      UCapsuleComponent::SetCapsuleSize
                (this_01,*(float *)(pcVar28 + 8),this_01->CapsuleHalfHeight,true);
      dVar47 = (double)this_01->_padding_;
      dVar3 = *(double *)(pcVar28 + 0x18);
      dVar4 = *(double *)(pcVar28 + 0x10);
      dVar5 = *(double *)(pcVar28 + 0x20);
      auVar6._0_8_ = this_01->_padding_;
      auVar6._8_8_ = this_01->_padding_;
      local_178 = dVar47;
      pFVar22 = FRotationConversionCache::GetOrCreatePayload
                          ((FRotationConversionCache *)&this_01->_padding_);
      this_00 = &pFVar22->CachedRotator;
      if ((((double)auVar6._0_8_ != (pFVar22->CachedRotator).Pitch) ||
          (auVar13._4_8_ = extraout_XMM0_Qb, auVar13._0_4_ = (int)((ulonglong)auVar6._0_8_ >> 0x20),
          auVar34._0_8_ = auVar13._0_8_ << 0x20, auVar34._8_4_ = (int)auVar6._8_8_,
          auVar34._12_4_ = (int)((ulonglong)auVar6._8_8_ >> 0x20),
          auVar34._8_8_ != (pFVar22->CachedRotator).Yaw)) ||
         (local_178 != (pFVar22->CachedRotator).Roll)) {
        auVar34 = divpd(auVar6,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar34 = roundpd(auVar36,auVar34,3);
        auVar35._8_8_ = 0;
        auVar35._0_8_ = dVar47;
        auVar36 = divpd(auVar35,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar42._0_8_ = auVar34._0_8_ * dVar9;
        dVar10 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar42._8_8_ = auVar34._8_8_ * dVar10;
        dVar41 = (double)auVar6._0_8_ - auVar42._0_8_;
        dVar12 = (double)auVar6._8_8_ - auVar42._8_8_;
        auVar36 = roundpd(auVar42,auVar36,3);
        dVar11 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar37._8_4_ = SUB84(dVar12,0);
        auVar37._0_8_ = dVar41;
        auVar37._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        dVar47 = dVar47 - auVar36._0_8_ * dVar11;
        dVar48 = 0.0 - auVar36._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        dVar40 = auVar37._8_8_ + dVar10;
        uVar20 = -(ulonglong)(0.0 <= dVar41);
        uVar32 = -(ulonglong)(0.0 <= dVar12);
        auVar43._0_8_ = uVar20 & (ulonglong)dVar41;
        auVar43._8_4_ = (undefined4)(uVar32 & (ulonglong)dVar12);
        auVar43._12_4_ = (undefined4)((uVar32 & (ulonglong)dVar12) >> 0x20);
        auVar45._0_4_ = ~(uint)uVar20 & SUB84(dVar41 + dVar9,0);
        auVar45._4_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)(dVar41 + dVar9) >> 0x20);
        auVar45._8_4_ = ~(uint)uVar32 & SUB84(dVar40,0);
        auVar45._12_4_ = ~(uint)(uVar32 >> 0x20) & (uint)((ulonglong)dVar40 >> 0x20);
        auVar38._8_4_ = SUB84(dVar48,0);
        auVar38._0_8_ = dVar47;
        auVar38._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        dVar41 = auVar38._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar45 = auVar45 | auVar43;
        uVar20 = -(ulonglong)(0.0 <= dVar47);
        uVar32 = -(ulonglong)(0.0 <= dVar48);
        auVar46._0_4_ = ~(uint)uVar20 & SUB84(dVar47 + dVar11,0);
        auVar46._4_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)(dVar47 + dVar11) >> 0x20);
        auVar46._8_4_ = ~(uint)uVar32 & SUB84(dVar41,0);
        auVar46._12_4_ = ~(uint)(uVar32 >> 0x20) & (uint)((ulonglong)dVar41 >> 0x20);
        auVar36._8_4_ = (int)((ulonglong)dVar48 & uVar32);
        auVar36._0_8_ = (ulonglong)dVar47 & uVar20;
        auVar36._12_4_ = (int)(((ulonglong)dVar48 & uVar32) >> 0x20);
        auVar46 = auVar46 | auVar36;
        uVar32 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar45._0_8_);
        uVar33 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar45._8_8_);
        uVar31 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar46._0_8_);
        auVar44._0_8_ = uVar32 & (ulonglong)(auVar45._0_8_ - dVar9);
        uVar20 = uVar33 & (ulonglong)(auVar45._8_8_ - dVar10);
        auVar44._8_4_ = (undefined4)uVar20;
        auVar44._12_4_ = (undefined4)(uVar20 >> 0x20);
        auVar39._0_4_ = ~(uint)uVar32 & auVar45._0_4_;
        auVar39._4_4_ = ~(uint)(uVar32 >> 0x20) & auVar45._4_4_;
        auVar39._8_4_ = ~(uint)uVar33 & auVar45._8_4_;
        auVar39._12_4_ = ~(uint)(uVar33 >> 0x20) & auVar45._12_4_;
        this_00->Pitch = (double)SUB168(auVar44 | auVar39,0);
        this_00->Yaw = (double)SUB168(auVar44 | auVar39,8);
        (pFVar22->CachedRotator).Roll =
             (double)(uVar31 & (ulonglong)(auVar46._0_8_ - dVar11) |
                     CONCAT44(~(uint)(uVar31 >> 0x20) & auVar46._4_4_,~(uint)uVar31 & auVar46._0_4_)
                     );
        local_188 = auVar6;
        pTVar23 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_188);
        dVar47 = pTVar23->Y;
        (pFVar22->CachedQuat).X = pTVar23->X;
        (pFVar22->CachedQuat).Y = dVar47;
        dVar47 = pTVar23->W;
        (pFVar22->CachedQuat).Z = pTVar23->Z;
        (pFVar22->CachedQuat).W = dVar47;
      }
      local_168.X = (pFVar22->CachedQuat).X;
      local_168.Y = (pFVar22->CachedQuat).Y;
      local_168.Z = (pFVar22->CachedQuat).Z;
      local_168.W = (pFVar22->CachedQuat).W;
      local_1a8._s_0.X = dVar3;
      local_1a8._s_0.Y = dVar4;
      local_1a8._s_0.Z = dVar5;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)this_01,(TVector<double> *)&local_1a8._s_0,&local_168,false,
                 (FHitResult *)0x0,None);
      local_1d4._4_8_ = (void *)0x0;
      (**(code **)(this_01->_padding_ + 0x508))
                (this_01,(((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,
                 &FAttachmentTransformRules::KeepRelativeTransform,0);
      UActorComponent::RegisterComponent((UActorComponent *)this_01);
      (**(code **)(this_01->_padding_ + 1000))(this_01);
      iVar18 = (pFVar19->ServerHitCapsuleArray).ArrayNum;
      piVar1 = &(pFVar19->ServerHitCapsuleArray).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar19,piVar1);
      }
      (pFVar19->ServerHitCapsuleArray).ArrayNum = iVar18 + 1;
      *(UCapsuleComponent **)
       ((pFVar19->ServerHitCapsuleArray).AllocatorInstance.Data + (longlong)iVar18 * 8) = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
    }
    uVar20 = (ulonglong)(uint)local_1d4._0_4_;
    pcVar28 = pcVar28 + 0x50;
  }
  local_1d4._4_8_ = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  TDelegate<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->OnPartsListChanged,
                 (TObjectPtr<UWN_CS_CharacterCore>)((longlong)local_1d4 + 4));
  return;
}

// CreateSkeletalMeshComponent_Impl @ 14a6a58f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USkeletalMeshComponent * __thiscall
UWN_CS_CharacterCore::CreateSkeletalMeshComponent_Impl
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1)

{
  byte *pbVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UObject *pUVar5;
  FName *pFVar6;
  FName FVar7;
  UClass *pUVar8;
  USkeletalMeshComponent *this_00;
  ForAnyElementType FVar9;
  longlong *plVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  TStringView<wchar_t> local_e8;
  FName local_d8;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar5 = FSoftObjectPath::TryLoad(&param_1->ResourcePath,(FUObjectSerializeContext *)0x0);
  this_00 = (USkeletalMeshComponent *)0x0;
  if (pUVar5 != (UObject *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_e8.Size = 0x26;
      local_e8.DataPtr = L"/Script/WN_CS.EWN_CS_CharacterSlotName";
      pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
      slotEnum = (UEnum *)StaticFindObject(pUVar8,(UObject *)0x0,&local_e8,ExactClass);
      _Init_thread_footer(&::_TSS0);
    }
    UEnum::GetNameStringByValue(slotEnum,(FString *)&local_e8,(ulonglong)param_1->SlotName);
    ::FString::PrintfImpl(&local_d0,L"%s");
    if (local_e8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_e8.DataPtr);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_d0.Data.ArrayNum != 0) {
      FVar9.Data = local_d0.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName((FName *)&local_e8,(wchar_t *)FVar9.Data);
    FVar3 = *pFVar6;
    FVar7 = (FName)Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    local_f8 = 0;
    MakeUniqueObjectName
              ((UObject *)&local_d8,(UClass *)this,FVar7,FVar3.ComparisonIndex.Value.Value);
    local_e8.DataPtr = (wchar_t *)0x0;
    if (local_d8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar8);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = local_d8.ComparisonIndex.Value;
    local_b8._20_4_ = local_d8.Number;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    this_00 = (USkeletalMeshComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar10 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    pcVar4 = *(code **)(this_00->_padding_ + 0xb48);
    pUVar8 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) {
      pUVar5 = (UObject *)0x0;
    }
    (*pcVar4)(this_00,pUVar5);
    pbVar1 = (byte *)((longlong)&this_00->_padding_ + 3);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 0;
    local_e8.DataPtr = (wchar_t *)0x0;
    if (param_1->SocketName == (FName)0x0) {
      USkinnedMeshComponent::SetLeaderPoseComponent
                ((USkinnedMeshComponent *)this_00,
                 (USkinnedMeshComponent *)
                 (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,false,false);
    }
    (**(code **)(this_00->_padding_ + 0x508))
              (this_00,(((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,
               &FAttachmentTransformRules::KeepRelativeTransform,param_1->SocketName);
    UActorComponent::RegisterComponent((UActorComponent *)this_00);
    (**(code **)(this_00->_padding_ + 1000))(this_00);
    OverrideSkeletalMeshComponentMaterialParameters(this,this_00,param_1);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  return this_00;
}

// CreateSoul @ 14a6a5c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::CreateSoul(UWN_CS_CharacterCore *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UWN_CS_CharacterSoul *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar2 = ::FName::FName(local_a8,"Soul");
    FVar1 = *pFVar2;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar3 = UWN_CS_CharacterSoul::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar4 = (UWN_CS_CharacterSoul *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UWN_CS_CharacterSoul *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Soul).field0_0x0.DebugPtr = pUVar4;
    (**(code **)(this->_padding_ + 0x2e8))(this);
    CreateSoulAnim(this);
    (**(code **)(this->_padding_ + 0x388))(this);
  }
  return;
}

// CreateSoulAndParts @ 14a6a5d40

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::CreateSoulAndParts(UWN_CS_CharacterCore *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    CreateSoul(this);
    if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
      iVar1 = (this->PartInfos).ArrayNum;
      pFVar3 = (this->PartInfos).AllocatorInstance.Data;
      pFVar2 = pFVar3 + (longlong)iVar1 * 0x88;
      while( true ) {
        if ((this->PartInfos).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FWN_CS_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar3 == pFVar2) break;
        CreatePart(this,(EWN_CS_CharacterSlotName)pFVar3[8]);
        pFVar3 = pFVar3 + 0x88;
      }
      (**(code **)(this->_padding_ + 0x3a8))();
    }
  }
  return;
}

// CreateSoulAnim @ 14a6a5de0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::CreateSoulAnim(UWN_CS_CharacterCore *this)

{
  EWN_CS_AnimationType EVar1;
  int iVar2;
  USkeletalMeshComponent *pUVar3;
  bool bVar4;
  UAnimBlueprint *pUVar5;
  UClass *pUVar6;
  UAnimBlueprintGeneratedClass *pUVar7;
  UAnimBlueprint *pUVar8;
  FUObjectItem *pFVar9;
  IAnimClassInterface *pIVar10;
  UAnimBlueprint *pUVar11;
  UClass *local_res8;
  undefined1 local_48 [8];
  FSoftObjectPath local_40;
  
  pUVar5 = (UAnimBlueprint *)
           FSoftObjectPath::TryLoad(&(this->SoulInfo).AnimPath,(FUObjectSerializeContext *)0x0);
  if (pUVar5 == (UAnimBlueprint *)0x0) {
    return;
  }
  EVar1 = (this->SoulInfo).AnimType;
  if (EVar1 == AnimBP) {
    pUVar6 = Z_Construct_UClass_UAnimBlueprint_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) {
      pUVar7 = UAnimBlueprint::GetAnimBlueprintGeneratedClass(pUVar5);
      pIVar10 = (IAnimClassInterface *)&pUVar7->_padding_;
      if (pUVar7 == (UAnimBlueprintGeneratedClass *)0x0) {
        pIVar10 = (IAnimClassInterface *)0x0;
      }
      local_res8 = IAnimClassInterface::GetActualAnimClass(pIVar10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      SetSoulAnimClass(this,(TSubclassOf<UAnimInstance>)&local_res8);
      return;
    }
    pUVar6 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if (*(int *)(pUVar5->_padding_ + 0x38) < iVar2) {
      return;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar6->_padding_) {
      return;
    }
    local_res8 = IAnimClassInterface::GetActualAnimClass
                           ((IAnimClassInterface *)&pUVar5[4]._padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    SetSoulAnimClass(this,(TSubclassOf<UAnimInstance>)&local_res8);
    return;
  }
  if (EVar1 != AnimAsset) {
    if (EVar1 != Custom) {
      return;
    }
    pUVar3 = (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr;
    if (pUVar3 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    USkeletalMeshComponent::SetAnimationMode(pUVar3,AnimationCustomMode,true);
    return;
  }
  pUVar6 = Z_Construct_UClass_UAnimationAsset_NoRegister();
  pUVar11 = (UAnimBlueprint *)0x0;
  iVar2 = (int)pUVar6->_padding_;
  if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar6->_padding_)) {
    pUVar5 = pUVar11;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UAnimBlueprint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_40.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_40.AssetPath.AssetName.Number = 0;
  local_40.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_40.AssetPath.PackageName.Number = 0;
  local_40.SubPathString.Data.ArrayNum = 0;
  local_40.SubPathString.Data.ArrayMax = 0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_res8 = (UClass *)0x0;
  FUtf8String::Reset(&local_40.SubPathString,0);
  local_res8 = (UClass *)pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UAnimBlueprint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_48,(FObjectPtr)&local_res8);
  pUVar3 = (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr;
  if (pUVar3 == (USkeletalMeshComponent *)0x0) goto LAB_14a6a6183;
  pUVar5 = (UAnimBlueprint *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_48);
  if (pUVar5 == (UAnimBlueprint *)0x0) {
    if (local_40.AssetPath.PackageName != (FName)0x0) {
      pUVar8 = (UAnimBlueprint *)FSoftObjectPath::ResolveObject(&local_40);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UAnimBlueprint *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      bVar4 = (*IsInAsyncLoadingThread)();
      if (((bVar4) && (pUVar8 != (UAnimBlueprint *)0x0)) &&
         (pFVar9 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&pUVar8->_padding_ + 4)),
         ((pFVar9->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14a6a6040:
        if (((uint)pUVar8->_padding_ >> 0x1e & 1) != 0) goto LAB_14a6a604e;
        bVar4 = true;
      }
      else {
        local_res8 = (UClass *)pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar8 != (UAnimBlueprint *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)local_48,(FObjectPtr)&local_res8);
        if (pUVar8 != (UAnimBlueprint *)0x0) goto LAB_14a6a6040;
LAB_14a6a604e:
        bVar4 = false;
      }
      pUVar5 = pUVar11;
      if (bVar4) {
        pUVar5 = pUVar8;
      }
    }
    if (pUVar5 != (UAnimBlueprint *)0x0) goto LAB_14a6a6132;
    if (local_40.AssetPath.PackageName != (FName)0x0) {
      FSoftObjectPath::TryLoad(&local_40,(FUObjectSerializeContext *)0x0);
      pUVar5 = (UAnimBlueprint *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_48);
      if ((pUVar5 == (UAnimBlueprint *)0x0) && (local_40.AssetPath.PackageName != (FName)0x0)) {
        pUVar8 = (UAnimBlueprint *)FSoftObjectPath::ResolveObject(&local_40);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar8 != (UAnimBlueprint *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        bVar4 = (*IsInAsyncLoadingThread)();
        if (((bVar4) && (pUVar8 != (UAnimBlueprint *)0x0)) &&
           (pFVar9 = FUObjectArray::IndexToObject
                               (&GUObjectArray,*(int *)((longlong)&pUVar8->_padding_ + 4)),
           ((pFVar9->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14a6a6114:
          if (((uint)pUVar8->_padding_ >> 0x1e & 1) != 0) goto LAB_14a6a6122;
          bVar4 = true;
        }
        else {
          local_res8 = (UClass *)pUVar8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar8 != (UAnimBlueprint *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)local_48,(FObjectPtr)&local_res8);
          if (pUVar8 != (UAnimBlueprint *)0x0) goto LAB_14a6a6114;
LAB_14a6a6122:
          bVar4 = false;
        }
        pUVar5 = (UAnimBlueprint *)0x0;
        if (bVar4) {
          pUVar5 = pUVar8;
        }
      }
      if (pUVar5 != (UAnimBlueprint *)0x0) goto LAB_14a6a6132;
    }
LAB_14a6a6155:
    pUVar5 = pUVar11;
  }
  else {
LAB_14a6a6132:
    pUVar6 = Z_Construct_UClass_UAnimationAsset_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar6->_padding_)) goto LAB_14a6a6155;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UAnimBlueprint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (pUVar3->AnimationData).AnimToPlay.field0_0x0.DebugPtr = (UAnimationAsset *)pUVar5;
  USkeletalMeshComponent::PlayAnimation(pUVar3,(UAnimationAsset *)pUVar5,true);
LAB_14a6a6183:
  if (local_40.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateSoulComponent @ 14a6a61e0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkeletalMeshComponent * __thiscall
UWN_CS_CharacterCore::CreateSoulComponent(UWN_CS_CharacterCore *this)

{
  UWN_CS_CharacterSoul *pUVar1;
  USkeletalMeshComponent *pUVar2;
  
  pUVar2 = (USkeletalMeshComponent *)(**(code **)(this->_padding_ + 0x348))(this,&this->SoulInfo);
  if (pUVar2 == (USkeletalMeshComponent *)0x0) {
    return (USkeletalMeshComponent *)0x0;
  }
  *(byte *)&pUVar2->_padding_ = (byte)pUVar2->_padding_ | 4;
  *(undefined4 *)((longlong)&pUVar2->_padding_ + 4) = 0x3f800000;
  pUVar1 = (this->Soul).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (pUVar1->Component).field0_0x0.DebugPtr = pUVar2;
  (**(code **)(this->_padding_ + 0x3b8))(this,&this->SoulInfo,pUVar2);
  return pUVar2;
}

// CreateSoulComponent_Impl @ 14a6a6280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USkeletalMeshComponent * __thiscall
UWN_CS_CharacterCore::CreateSoulComponent_Impl
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterSoulInfo *param_1)

{
  byte *pbVar1;
  int iVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FName FVar8;
  UClass *pUVar9;
  USkeletalMeshComponent *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  undefined1 auStackY_108 [32];
  FName local_c8;
  FName local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar7 = ::FName::FName(&local_c0,"Soul");
  FVar3 = *pFVar7;
  FVar8 = (FName)Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister();
  MakeUniqueObjectName((UObject *)&local_c8,(UClass *)this,FVar8,FVar3.ComparisonIndex.Value.Value);
  if (local_c8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar9);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = local_c8.ComparisonIndex.Value;
  local_b8._20_4_ = local_c8.Number;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  pUVar10 = (USkeletalMeshComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  *(byte *)&pUVar10[1]._padding_ = (byte)pUVar10[1]._padding_ | 2;
  pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1->SkeletalMesh);
  if (pUVar11 == (UObject *)0x0) {
    if (*(longlong *)&(param_1->SkeletalMesh).SoftObjectPtr.field_0x8 == 0) goto LAB_14a6a645c;
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(param_1->SkeletalMesh).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1->SkeletalMesh);
  }
  if (pUVar11 != (UObject *)0x0) {
    pUVar9 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar9->_padding_)) {
      (**(code **)(pUVar10->_padding_ + 0xb48))
                (pUVar10,pUVar11,CONCAT71((int7)((ulonglong)&pUVar9->_padding_ >> 8),1));
      lVar4 = pUVar10->_padding_;
      pbVar1 = (byte *)((longlong)&pUVar10->_padding_ + 3);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)((longlong)&pUVar10->_padding_ + 2);
      *pbVar1 = *pbVar1 | 6;
      (**(code **)(lVar4 + 0x420))(pUVar10,1);
      *(undefined1 *)((longlong)&pUVar10->_padding_ + 4) = 0;
      USceneComponent::SetVisibility((USceneComponent *)pUVar10,param_1->bIsSoulVisible,DirtyOnly);
      (**(code **)(pUVar10->_padding_ + 0x508))
                (pUVar10,(((this->Owner).field0_0x0.DebugPtr)->RootComponent).field0_0x0.DebugPtr,
                 &FAttachmentTransformRules::KeepRelativeTransform,0);
      UActorComponent::RegisterComponent((UActorComponent *)pUVar10);
      (**(code **)(pUVar10->_padding_ + 1000))(pUVar10);
      return pUVar10;
    }
  }
LAB_14a6a645c:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<22205994532602781>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_CS\\Source\\WN_CS\\Private\\WN_CS_CharacterCore.cpp"
                     ,0x39d,"false");
  if (!bVar6) {
    return (USkeletalMeshComponent *)0x0;
  }
  pcVar5 = (code *)swi(3);
  pUVar10 = (USkeletalMeshComponent *)(*pcVar5)();
  return pUVar10;
}

// CreateSpotLightComponent_Impl @ 14a6a64c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USpotLightComponent * __thiscall
UWN_CS_CharacterCore::CreateSpotLightComponent_Impl
          (UWN_CS_CharacterCore *this,FWN_CS_LightInfo *param_1)

{
  FName FVar1;
  USkeletalMeshComponent *pUVar2;
  UClass *pUVar3;
  USpotLightComponent *pUVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FVar1 = param_1->Name;
  pUVar2 = (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = Z_Construct_UClass_USpotLightComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar2;
  local_98._16_8_ = FVar1;
  pUVar4 = (USpotLightComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return pUVar4;
}

// CreateStaticMeshComponent_Impl @ 14a6a65a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UStaticMeshComponent * __thiscall
UWN_CS_CharacterCore::CreateStaticMeshComponent_Impl
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1)

{
  byte *pbVar1;
  int iVar2;
  AActor *pAVar3;
  code *pcVar4;
  UClass *pUVar5;
  UStaticMeshComponent *this_00;
  UObject *pUVar6;
  UStaticMeshComponent *pUVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pAVar3 = (this->Owner).field0_0x0.DebugPtr;
  local_c8 = 0;
  local_c0 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pAVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pAVar3;
  this_00 = (UStaticMeshComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  pUVar6 = FSoftObjectPath::TryLoad(&param_1->ResourcePath,(FUObjectSerializeContext *)0x0);
  pUVar7 = (UStaticMeshComponent *)0x0;
  if (pUVar6 != (UObject *)0x0) {
    pcVar4 = *(code **)(this_00->_padding_ + 0xb28);
    pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_)) {
      pUVar6 = (UObject *)0x0;
    }
    (*pcVar4)(this_00,pUVar6);
    pbVar1 = (byte *)((longlong)&this_00->_padding_ + 3);
    *pbVar1 = *pbVar1 & 0xfe;
    (**(code **)(this_00->_padding_ + 0x508))
              (this_00,(((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,
               &FAttachmentTransformRules::KeepRelativeTransform,param_1->SocketName);
    UActorComponent::RegisterComponent((UActorComponent *)this_00);
    (**(code **)(this_00->_padding_ + 1000))(this_00);
    OverrideStaticMeshComponentMaterialParameters(this,this_00,param_1);
    pUVar7 = this_00;
  }
  return pUVar7;
}

// CreateWidgetMeshComponent_Impl @ 14a6a6740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWidgetComponent * __thiscall
UWN_CS_CharacterCore::CreateWidgetMeshComponent_Impl
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1)

{
  int iVar1;
  AActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UWidgetComponent *pUVar6;
  UObject *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_f8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pAVar2 = (this->Owner).field0_0x0.DebugPtr;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pAVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UWidgetComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pAVar2;
  pUVar6 = (UWidgetComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pUVar7 = FSoftObjectPath::TryLoad(&param_1->ResourcePath,(FUObjectSerializeContext *)0x0);
  if (pUVar7 == (UObject *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<22205994532602857>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_CS\\Source\\WN_CS\\Private\\WN_CS_CharacterCore.cpp"
                       ,0x3e9,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UWidgetComponent *)(*pcVar3)();
      return pUVar6;
    }
    pUVar6 = (UWidgetComponent *)0x0;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)pUVar6 + 0xb58);
    pUVar5 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      pUVar7 = (UObject *)0x0;
    }
    (*pcVar3)(pUVar6,pUVar7);
    pUVar6->bWantsInitializeComponent = '\0';
    (**(code **)(*(longlong *)pUVar6 + 0x508))
              (pUVar6,(((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr,
               &FAttachmentTransformRules::KeepRelativeTransform,param_1->SocketName);
    UActorComponent::RegisterComponent((UActorComponent *)pUVar6);
    (**(code **)(*(longlong *)pUVar6 + 1000))(pUVar6);
  }
  return pUVar6;
}

// Deinitialize @ 14a6a68f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::Deinitialize(UWN_CS_CharacterCore *this)

{
  FUtf8String *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UWN_CS_CharacterCore *local_res8;
  TPersistentObjectPtr<FSoftObjectPath> TStack_60;
  FName local_38;
  FName FStack_30;
  ForAnyElementType local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  DestroyParts(this);
  if ((this->Soul).field0_0x0.DebugPtr != (UWN_CS_CharacterSoul *)0x0) {
    (**(code **)(this->_padding_ + 0x390))(this);
    (**(code **)(this->_padding_ + 0x2f0))(this);
    (**(code **)(this->_padding_ + 0x340))(this);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)(this->Soul).field0_0x0.DebugPtr);
    (this->Soul).field0_0x0.DebugPtr = (UWN_CS_CharacterSoul *)0x0;
  }
  DestructItems<FWN_CS_CharacterPartInfo,int>
            ((FWN_CS_CharacterPartInfo *)(this->PartInfos).AllocatorInstance.Data,
             (this->PartInfos).ArrayNum);
  piVar2 = &(this->PartInfos).ArrayMax;
  (this->PartInfos).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,&(this->PartInfos).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->Parts).ArrayMax;
  (this->Parts).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Parts).AllocatorInstance,0,piVar2);
  }
  TStack_60.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_60.ObjectID.SubPathString.Data.ArrayNum = 0;
  TStack_60.ObjectID.SubPathString.Data.ArrayMax = 0;
  TStack_60.WeakPtr.ObjectIndex = 0;
  TStack_60.WeakPtr.ObjectSerialNumber = 0;
  TStack_60.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  TStack_60.ObjectID.AssetPath.AssetName.Number = 0;
  TStack_60.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  TStack_60.ObjectID.AssetPath.PackageName.Number = 0;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FStack_30.ComparisonIndex.Value = 0;
  FStack_30.Number = 0;
  local_18 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  uStack_20 = 0;
  FUtf8String::Reset(&TStack_60.ObjectID.SubPathString,0);
  (this->SoulInfo).bOwnedByCore = true;
  (this->SoulInfo).bIsSoulVisible = false;
  (this->SoulInfo).bIsHidden = true;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FStack_30.ComparisonIndex.Value = 0;
  FStack_30.Number = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  uStack_20 = 0;
  local_18 = CONCAT35(local_18._5_3_,3);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->SoulInfo).SkeletalMesh,&TStack_60);
  pFVar1 = &(this->SoulInfo).AnimPath.SubPathString;
  (this->SoulInfo).AnimPath.AssetPath.PackageName = local_38;
  (this->SoulInfo).AnimPath.AssetPath.AssetName = FStack_30;
  if (pFVar1 != (FUtf8String *)&local_28) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data;
    (this->SoulInfo).AnimPath.SubPathString.Data.ArrayNum = (int)uStack_20;
    (this->SoulInfo).AnimPath.SubPathString.Data.ArrayMax = uStack_20._4_4_;
    uStack_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  (this->SoulInfo).AnimType = (EWN_CS_AnimationType)local_18;
  (this->SoulInfo).WorkspaceVersion = local_18._4_1_;
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (TStack_60.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(TStack_60.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  (this->Owner).field0_0x0.DebugPtr = (AActor *)0x0;
  local_res8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  TDelegate<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->OnCharacterCoreDeInitialized,(TObjectPtr<UWN_CS_CharacterCore>)&local_res8);
  return;
}

// DestroyColliderComponent @ 14a6a6b10

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::DestroyColliderComponent
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UActorComponent *this_01;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FWN_CS_ColliderContainer *pFVar5;
  longlong lVar6;
  EWN_CS_CharacterSlotName local_res10 [8];
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar4 = (this->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->Parts).ArrayNum * 8;
    if (pFVar4 != pFVar1) {
      while (lVar2 = *(longlong *)pFVar4, *(EWN_CS_CharacterSlotName *)(lVar2 + 0x28) != param_1) {
        pFVar4 = pFVar4 + 8;
        if (pFVar4 == pFVar1) {
          return;
        }
      }
      if ((lVar2 != 0) &&
         (this_00 = (longlong *)(lVar2 + 0xe0), *(int *)(lVar2 + 0xe8) != *(int *)(lVar2 + 0x114)))
      {
        lVar6 = *(longlong *)(lVar2 + 0x120);
        if (*(longlong *)(lVar2 + 0x120) == 0) {
          lVar6 = lVar2 + 0x118;
        }
        iVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x128) - 1) & (ulonglong)param_1) * 4
                        );
        if (iVar3 != -1) {
          while (*(EWN_CS_CharacterSlotName *)((longlong)iVar3 * 0x20 + *this_00) != param_1) {
            iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *this_00);
            if (iVar3 == -1) {
              return;
            }
          }
          pFVar5 = TMapBase<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>_>
                   ::FindChecked(this_00,param_1);
          pFVar4 = (pFVar5->ColliderArray).AllocatorInstance.Data;
          iVar3 = (pFVar5->ColliderArray).ArrayNum;
          pFVar1 = pFVar4 + (longlong)iVar3 * 8;
          while( true ) {
            if ((pFVar5->ColliderArray).ArrayNum != iVar3) {
              `TCheckedPointerIterator<TObjectPtr<UBoxComponent>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar4 == pFVar1) break;
            this_01 = *(UActorComponent **)pFVar4;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (this_01 != (UActorComponent *)0x0) goto LAB_14a6a6c39;
            }
            else if (this_01 != (UActorComponent *)0x0) {
              UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14a6a6c39:
              AActor::RemoveInstanceComponent((this->Owner).field0_0x0.DebugPtr,this_01);
              (**(code **)(this_01->_padding_ + 0x518))(this_01);
              (**(code **)(this_01->_padding_ + 0x4a0))(this_01);
              UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_01);
            }
            pFVar4 = pFVar4 + 8;
          }
          (pFVar5->ColliderArray).ArrayNum = 0;
          if ((pFVar5->ColliderArray).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)pFVar5,0,&(pFVar5->ColliderArray).ArrayMax);
          }
          if (*(int *)(lVar2 + 0xe8) != *(int *)(lVar2 + 0x114)) {
            local_res10[0] = param_1;
            TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_EWN_CS_CharacterSlotName>(this_00,(uint)param_1,local_res10);
          }
        }
      }
    }
  }
  return;
}

// DestroyHitSphereComponent @ 14a6a6fc0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::DestroyHitSphereComponent
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UActorComponent *this_01;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FWN_CS_HitSphereContainer *pFVar5;
  longlong lVar6;
  EWN_CS_CharacterSlotName local_res10 [8];
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar4 = (this->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->Parts).ArrayNum * 8;
    if (pFVar4 != pFVar1) {
      while (lVar2 = *(longlong *)pFVar4, *(EWN_CS_CharacterSlotName *)(lVar2 + 0x28) != param_1) {
        pFVar4 = pFVar4 + 8;
        if (pFVar4 == pFVar1) {
          return;
        }
      }
      if ((lVar2 != 0) &&
         (this_00 = (longlong *)(lVar2 + 0x40), *(int *)(lVar2 + 0x48) != *(int *)(lVar2 + 0x74))) {
        lVar6 = *(longlong *)(lVar2 + 0x80);
        if (*(longlong *)(lVar2 + 0x80) == 0) {
          lVar6 = lVar2 + 0x78;
        }
        iVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x88) - 1) & (ulonglong)param_1) * 4)
        ;
        if (iVar3 != -1) {
          while (*(EWN_CS_CharacterSlotName *)((longlong)iVar3 * 0x20 + *this_00) != param_1) {
            iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *this_00);
            if (iVar3 == -1) {
              return;
            }
          }
          pFVar5 = TMapBase<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>_>
                   ::FindChecked(this_00,param_1);
          pFVar4 = (pFVar5->HitSphereArray).AllocatorInstance.Data;
          iVar3 = (pFVar5->HitSphereArray).ArrayNum;
          pFVar1 = pFVar4 + (longlong)iVar3 * 8;
          while( true ) {
            if ((pFVar5->HitSphereArray).ArrayNum != iVar3) {
              `TCheckedPointerIterator<TObjectPtr<USphereComponent>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar4 == pFVar1) break;
            this_01 = *(UActorComponent **)pFVar4;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (this_01 != (UActorComponent *)0x0) goto LAB_14a6a70dd;
            }
            else if (this_01 != (UActorComponent *)0x0) {
              UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14a6a70dd:
              AActor::RemoveInstanceComponent((this->Owner).field0_0x0.DebugPtr,this_01);
              (**(code **)(this_01->_padding_ + 0x518))(this_01);
              (**(code **)(this_01->_padding_ + 0x4a0))(this_01);
              UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_01);
            }
            pFVar4 = pFVar4 + 8;
          }
          (pFVar5->HitSphereArray).ArrayNum = 0;
          if ((pFVar5->HitSphereArray).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)pFVar5,0,&(pFVar5->HitSphereArray).ArrayMax);
          }
          if (*(int *)(lVar2 + 0x48) != *(int *)(lVar2 + 0x74)) {
            local_res10[0] = param_1;
            TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_EWN_CS_CharacterSlotName>(this_00,(uint)param_1,local_res10);
          }
        }
      }
    }
  }
  return;
}

// DestroyLightComponent @ 14a6a71a0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::DestroyLightComponent(UWN_CS_CharacterCore *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UActorComponent *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FUObjectItem *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  TArray<TObjectPtr<ULightComponent>,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 local_res10 [8];
  TArray<TObjectPtr<ULightComponent>,TSizedDefaultAllocator<32>_> *local_res18;
  
  pTVar9 = &this->LightComponentArray;
  iVar2 = (this->LightComponentArray).ArrayNum;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  local_res18 = pTVar9;
  do {
    if (pTVar9->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<ULightComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar1) {
      pTVar9->ArrayNum = 0;
      if (pTVar9->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
      }
      return;
    }
    this_00 = *(UActorComponent **)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 != (UActorComponent *)0x0) goto LAB_14a6a7232;
    }
    else if (this_00 != (UActorComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14a6a7232:
      AActor::RemoveInstanceComponent((this->Owner).field0_0x0.DebugPtr,this_00);
      (**(code **)(this_00->_padding_ + 0x518))
                (this_00,&FDetachmentTransformRules::KeepRelativeTransform);
      (**(code **)(this_00->_padding_ + 0x4a0))(this_00,0);
      pFVar6 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_MirroredGarbage);
      pFVar6 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      do {
        lVar3 = (pFVar6->field0_0x0).FlagsAndRefCount;
        uVar7 = (uint)((ulonglong)lVar3 >> 0x20);
        if ((uVar7 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar6 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar3 == (pFVar6->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar6->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar3 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar5);
      pFVar6 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar6,Async);
      pTVar9 = local_res18;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// DestroyPart @ 14a6a73b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::DestroyPart(UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UWN_CS_CharacterPart>,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  UWN_CS_CharacterCore *local_res8;
  EWN_CS_CharacterSlotName local_res10 [8];
  EWN_CS_CharacterSlotName *local_res18 [2];
  
  this_00 = &this->Parts;
  uVar4 = TArray<TObjectPtr<UWN_CS_CharacterPart>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UWN_CS_CharacterCore::DestroyPart_::__l2::<lambda_1>_>
                    (this_00,(<lambda_1>)param_1,(this->Parts).ArrayNum);
  if (((uVar4 != 0xffffffff) && (param_1 < Count)) &&
     ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0)) {
    pFVar8 = (this->PartInfos).AllocatorInstance.Data;
    pFVar6 = pFVar8 + (longlong)(this->PartInfos).ArrayNum * 0x88;
    for (; local_res10[0] = param_1, pFVar8 != pFVar6; pFVar8 = pFVar8 + 0x88) {
      if (pFVar8[8] == (FScriptContainerElement)param_1) {
        if (pFVar8 == (FScriptContainerElement *)0x0) {
          return;
        }
        (**(code **)(this->_padding_ + 0x3a0))(this);
        (**(code **)(this->_padding_ + 0x300))(this,param_1);
        (**(code **)(this->_padding_ + 0x328))(this,param_1);
        (**(code **)(this->_padding_ + 0x338))(this,param_1);
        uVar9 = ~uVar4 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar4 < (this->Parts).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UObjectBaseUtility::MarkAsGarbage
                  (*(UObjectBaseUtility **)
                    ((this_00->AllocatorInstance).Data + (longlong)(int)uVar4 * 8));
        uVar5 = 0;
        if ((int)uVar4 < (this->Parts).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = (this->Parts).ArrayNum + ~uVar4;
        pFVar8 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar4 * 8;
        if (iVar7 != 0) {
          memmove(pFVar8,pFVar8 + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Parts).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this_00->AllocatorInstance,(this->Parts).ArrayNum,&(this->Parts).ArrayMax);
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        TDelegate<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(&this->OnPartsListChanged,(TObjectPtr<UWN_CS_CharacterCore>)&local_res8);
        return;
      }
    }
    local_res18[0] = local_res10;
    `UWN_CS_CharacterCore::GetPartInfo'::__l11::<lambda_2>::operator()(local_res18);
  }
  return;
}

// DestroyPartComponent @ 14a6a75c0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::DestroyPartComponent
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  longlong lVar1;
  UActorComponent *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  EWN_CS_CharacterSlotName *local_res8;
  EWN_CS_CharacterSlotName local_res10 [8];
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar2 = (this->Parts).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)(this->Parts).ArrayNum * 8;
    if (pFVar2 != pFVar3) {
      while (lVar1 = *(longlong *)pFVar2, *(EWN_CS_CharacterSlotName *)(lVar1 + 0x28) != param_1) {
        pFVar2 = pFVar2 + 8;
        if (pFVar2 == pFVar3) {
          return;
        }
      }
      if (((lVar1 != 0) &&
          (this_00 = *(UActorComponent **)(lVar1 + 0x38), this_00 != (UActorComponent *)0x0)) &&
         (param_1 < Count)) {
        pFVar3 = (this->PartInfos).AllocatorInstance.Data;
        pFVar2 = pFVar3 + (longlong)(this->PartInfos).ArrayNum * 0x88;
        for (; local_res10[0] = param_1, pFVar3 != pFVar2; pFVar3 = pFVar3 + 0x88) {
          if (pFVar3[8] == (FScriptContainerElement)param_1) {
            if (pFVar3 == (FScriptContainerElement *)0x0) {
              return;
            }
            (**(code **)(this->_padding_ + 0x3d0))(this,pFVar3,this_00);
            AActor::RemoveInstanceComponent((this->Owner).field0_0x0.DebugPtr,this_00);
            (**(code **)(this_00->_padding_ + 0x518))
                      (this_00,&FDetachmentTransformRules::KeepRelativeTransform);
            (**(code **)(this_00->_padding_ + 0x4a0))(this_00,0);
            UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00);
            *(undefined8 *)(lVar1 + 0x38) = 0;
            return;
          }
        }
        local_res8 = local_res10;
        `UWN_CS_CharacterCore::GetPartInfo'::__l11::<lambda_2>::operator()(&local_res8);
      }
    }
  }
  return;
}

// DestroyParts @ 14a6a7700

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::DestroyParts(UWN_CS_CharacterCore *this)

{
  int *piVar1;
  TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x3b0))();
  pTVar2 = &this->PartInfos;
  iVar3 = (this->PartInfos).ArrayNum;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar3 * 0x88;
  while( true ) {
    if ((this->PartInfos).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FWN_CS_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    DestroyPart(this,(EWN_CS_CharacterSlotName)pFVar4[8]);
    pFVar4 = pFVar4 + 0x88;
  }
  DestructItems<FWN_CS_CharacterPartInfo,int>
            ((FWN_CS_CharacterPartInfo *)(pTVar2->AllocatorInstance).Data,(this->PartInfos).ArrayNum
            );
  piVar1 = &(this->PartInfos).ArrayMax;
  (this->PartInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  return;
}

// DestroyServerHitCapsuleComponent @ 14a6a77b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::DestroyServerHitCapsuleComponent
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UActorComponent *this_01;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FWN_CS_ServerHitCapsuleContainer *pFVar5;
  longlong lVar6;
  EWN_CS_CharacterSlotName local_res10 [8];
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar4 = (this->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->Parts).ArrayNum * 8;
    if (pFVar4 != pFVar1) {
      while (lVar2 = *(longlong *)pFVar4, *(EWN_CS_CharacterSlotName *)(lVar2 + 0x28) != param_1) {
        pFVar4 = pFVar4 + 8;
        if (pFVar4 == pFVar1) {
          return;
        }
      }
      if ((lVar2 != 0) &&
         (this_00 = (longlong *)(lVar2 + 0x90), *(int *)(lVar2 + 0x98) != *(int *)(lVar2 + 0xc4))) {
        lVar6 = *(longlong *)(lVar2 + 0xd0);
        if (*(longlong *)(lVar2 + 0xd0) == 0) {
          lVar6 = lVar2 + 200;
        }
        iVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0xd8) - 1) & (ulonglong)param_1) * 4)
        ;
        if (iVar3 != -1) {
          while (*(EWN_CS_CharacterSlotName *)((longlong)iVar3 * 0x20 + *this_00) != param_1) {
            iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *this_00);
            if (iVar3 == -1) {
              return;
            }
          }
          pFVar5 = TMapBase<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,0>_>
                   ::FindChecked(this_00,param_1);
          pFVar4 = (pFVar5->ServerHitCapsuleArray).AllocatorInstance.Data;
          iVar3 = (pFVar5->ServerHitCapsuleArray).ArrayNum;
          pFVar1 = pFVar4 + (longlong)iVar3 * 8;
          while( true ) {
            if ((pFVar5->ServerHitCapsuleArray).ArrayNum != iVar3) {
              `TCheckedPointerIterator<TObjectPtr<UCapsuleComponent>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar4 == pFVar1) break;
            this_01 = *(UActorComponent **)pFVar4;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (this_01 != (UActorComponent *)0x0) goto LAB_14a6a78d9;
            }
            else if (this_01 != (UActorComponent *)0x0) {
              UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14a6a78d9:
              AActor::RemoveInstanceComponent((this->Owner).field0_0x0.DebugPtr,this_01);
              (**(code **)(this_01->_padding_ + 0x518))(this_01);
              (**(code **)(this_01->_padding_ + 0x4a0))(this_01);
              UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_01);
            }
            pFVar4 = pFVar4 + 8;
          }
          (pFVar5->ServerHitCapsuleArray).ArrayNum = 0;
          if ((pFVar5->ServerHitCapsuleArray).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)pFVar5,0,&(pFVar5->ServerHitCapsuleArray).ArrayMax
                      );
          }
          if (*(int *)(lVar2 + 0x98) != *(int *)(lVar2 + 0xc4)) {
            local_res10[0] = param_1;
            TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_EWN_CS_CharacterSlotName>(this_00,(uint)param_1,local_res10);
          }
        }
      }
    }
  }
  return;
}

// DestroySoul @ 14a6a7990

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::DestroySoul(UWN_CS_CharacterCore *this)

{
  if ((this->Soul).field0_0x0.DebugPtr != (UWN_CS_CharacterSoul *)0x0) {
    (**(code **)(this->_padding_ + 0x390))();
    (**(code **)(this->_padding_ + 0x2f0))(this);
    (**(code **)(this->_padding_ + 0x340))(this);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)(this->Soul).field0_0x0.DebugPtr);
    (this->Soul).field0_0x0.DebugPtr = (UWN_CS_CharacterSoul *)0x0;
  }
  return;
}

// DestroySoulAndParts @ 14a6a79f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::DestroySoulAndParts(UWN_CS_CharacterCore *this)

{
  DestroyParts(this);
  if ((this->Soul).field0_0x0.DebugPtr != (UWN_CS_CharacterSoul *)0x0) {
    (**(code **)(this->_padding_ + 0x390))(this);
    (**(code **)(this->_padding_ + 0x2f0))(this);
    (**(code **)(this->_padding_ + 0x340))(this);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)(this->Soul).field0_0x0.DebugPtr);
    (this->Soul).field0_0x0.DebugPtr = (UWN_CS_CharacterSoul *)0x0;
  }
  return;
}

// DestroySoulComponent @ 14a6a7a50

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::DestroySoulComponent(UWN_CS_CharacterCore *this)

{
  USkeletalMeshComponent *this_00;
  UAnimSingleNodeInstance *pUVar1;
  
  this_00 = *(USkeletalMeshComponent **)((longlong)(this->Soul).field0_0x0 + 0x28);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    (**(code **)(this->_padding_ + 0x3c0))(this,&this->SoulInfo,this_00);
    if ((this->SoulInfo).bOwnedByCore == false) {
      (**(code **)(this_00->_padding_ + 0xb48))(this_00,0,1);
      pUVar1 = USkeletalMeshComponent::GetSingleNodeInstance(this_00);
      if (pUVar1 != (UAnimSingleNodeInstance *)0x0) {
        USkeletalMeshComponent::Stop(this_00);
      }
      (**(code **)(this_00->_padding_ + 0xc70))(this_00);
      USkeletalMeshComponent::SetAnimation(this_00,(UAnimationAsset *)0x0);
      USkeletalMeshComponent::ClearAnimScriptInstance(this_00);
      USkeletalMeshComponent::SetAnimationMode(this_00,AnimationCustomMode,true);
    }
    else {
      AActor::RemoveInstanceComponent((this->Owner).field0_0x0.DebugPtr,(UActorComponent *)this_00);
      (**(code **)(this_00->_padding_ + 0x518))
                (this_00,&FDetachmentTransformRules::KeepRelativeTransform);
      (**(code **)(this_00->_padding_ + 0x4a0))(this_00,0);
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00);
    }
    (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr =
         (USkeletalMeshComponent *)0x0;
  }
  return;
}

// GetPart @ 14a6a8860

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

UWN_CS_CharacterPart * __thiscall
UWN_CS_CharacterCore::GetPart
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  EWN_CS_CharacterSlotName *local_res8;
  EWN_CS_CharacterSlotName local_res10 [24];
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar2 = (this->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(this->Parts).ArrayNum * 8;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 8) {
      if ((*(UWN_CS_CharacterPart **)pFVar2)->SlotName == param_1) {
        return *(UWN_CS_CharacterPart **)pFVar2;
      }
    }
    if (param_2) {
      local_res8 = local_res10;
      local_res10[0] = param_1;
      `UWN_CS_CharacterCore::GetPart'::__l11::<lambda_2>::operator()(&local_res8);
    }
  }
  return (UWN_CS_CharacterPart *)0x0;
}

// GetPartInfo @ 14a6a88d0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

FWN_CS_CharacterPartInfo * __thiscall
UWN_CS_CharacterCore::GetPartInfo
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1,bool param_2)

{
  FWN_CS_CharacterPartInfo *pFVar1;
  FWN_CS_CharacterPartInfo *pFVar2;
  EWN_CS_CharacterSlotName local_res10 [16];
  EWN_CS_CharacterSlotName *local_res20;
  
  if ((param_1 < Count) && ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0)) {
    pFVar2 = (FWN_CS_CharacterPartInfo *)(this->PartInfos).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (this->PartInfos).ArrayNum;
    while( true ) {
      if (pFVar2 == pFVar1) {
        if (param_2) {
          local_res20 = local_res10;
          local_res10[0] = param_1;
          `UWN_CS_CharacterCore::GetPartInfo'::__l11::<lambda_2>::operator()(&local_res20);
        }
        return (FWN_CS_CharacterPartInfo *)0x0;
      }
      if (pFVar2->SlotName == param_1) break;
      pFVar2 = pFVar2 + 1;
    }
    return pFVar2;
  }
  return (FWN_CS_CharacterPartInfo *)0x0;
}

// GetPartInfo_Mutable @ 14a6a8960

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

FWN_CS_CharacterPartInfo * __thiscall
UWN_CS_CharacterCore::GetPartInfo_Mutable
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1,bool param_2)

{
  FWN_CS_CharacterPartInfo *pFVar1;
  FWN_CS_CharacterPartInfo *pFVar2;
  EWN_CS_CharacterSlotName local_res10 [16];
  EWN_CS_CharacterSlotName *local_res20;
  
  if ((param_1 < Count) && ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0)) {
    pFVar2 = (FWN_CS_CharacterPartInfo *)(this->PartInfos).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (this->PartInfos).ArrayNum;
    while( true ) {
      if (pFVar2 == pFVar1) {
        if (param_2) {
          local_res20 = local_res10;
          local_res10[0] = param_1;
          `UWN_CS_CharacterCore::GetPartInfo_Mutable'::__l11::<lambda_2>::operator()(&local_res20);
        }
        return (FWN_CS_CharacterPartInfo *)0x0;
      }
      if (pFVar2->SlotName == param_1) break;
      pFVar2 = pFVar2 + 1;
    }
    return pFVar2;
  }
  return (FWN_CS_CharacterPartInfo *)0x0;
}

// GetPartMutable @ 14a6a89f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

UWN_CS_CharacterPart * __thiscall
UWN_CS_CharacterCore::GetPartMutable
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  EWN_CS_CharacterSlotName *local_res8;
  EWN_CS_CharacterSlotName local_res10 [24];
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar2 = (this->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(this->Parts).ArrayNum * 8;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 8) {
      if ((*(UWN_CS_CharacterPart **)pFVar2)->SlotName == param_1) {
        return *(UWN_CS_CharacterPart **)pFVar2;
      }
    }
    if (param_2) {
      local_res8 = local_res10;
      local_res10[0] = param_1;
      `UWN_CS_CharacterCore::GetPartMutable'::__l11::<lambda_2>::operator()(&local_res8);
    }
  }
  return (UWN_CS_CharacterPart *)0x0;
}

// GetPrivateStaticClass @ 14a6a8a60

UClass * __cdecl UWN_CS_CharacterCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterCore",
               &Z_Registration_Info_UClass_UWN_CS_CharacterCore.InnerSingleton,
               StaticRegisterNativesUWN_CS_CharacterCore,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CS_CharacterCore>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterCore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterCore.InnerSingleton;
}

// GetSoul @ 14a6a8eb0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_CS_CharacterSoul * __thiscall UWN_CS_CharacterCore::GetSoul(UWN_CS_CharacterCore *this)

{
  if ((this->Owner).field0_0x0.DebugPtr == (AActor *)0x0) {
    return (UWN_CS_CharacterSoul *)0x0;
  }
  return (this->Soul).field0_0x0.DebugPtr;
}

// GetSoulInfo @ 14a6a8ed0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FWN_CS_CharacterSoulInfo * __thiscall UWN_CS_CharacterCore::GetSoulInfo(UWN_CS_CharacterCore *this)

{
  FWN_CS_CharacterSoulInfo *pFVar1;
  
  pFVar1 = &this->SoulInfo;
  if ((this->Owner).field0_0x0.DebugPtr == (AActor *)0x0) {
    pFVar1 = (FWN_CS_CharacterSoulInfo *)0x0;
  }
  return pFVar1;
}

// Initialize @ 14a6a90c0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
UWN_CS_CharacterCore::Initialize
          (UWN_CS_CharacterCore *this,AActor *param_1,FWN_CS_CharacterSoulInfo *param_2)

{
  undefined1 local_res8 [8];
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    `UWN_CS_CharacterCore::Initialize'::__l5::<lambda_1>::operator()(local_res8);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Owner).field0_0x0.DebugPtr = param_1;
  FWN_CS_CharacterSoulInfo::operator=(&this->SoulInfo,param_2);
  CreateSoul(this);
  return;
}

// OnActor_BeginDestroy @ 14a6a9290

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::OnActor_BeginDestroy(UWN_CS_CharacterCore *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a6a9293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))();
  return;
}

// OnActor_Construction @ 14a6a92a0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
UWN_CS_CharacterCore::OnActor_Construction(UWN_CS_CharacterCore *this,TTransform<double> *param_1)

{
  return;
}

// OnActor_MarkComponentsAsGarbage @ 14a6a92b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
UWN_CS_CharacterCore::OnActor_MarkComponentsAsGarbage(UWN_CS_CharacterCore *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014a6a92b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))();
  return;
}

// OnActor_PostInitializeComponents @ 14a6a92c0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::OnActor_PostInitializeComponents(UWN_CS_CharacterCore *this)

{
  return;
}

// OnMount @ 14a6a92d0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::OnMount(UWN_CS_CharacterCore *this)

{
  return;
}

// OnPostCreatePart @ 14a6a92e0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::OnPostCreatePart(UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1)

{
  return;
}

// OnPostCreatePartComponent @ 14a6a92f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::OnPostCreatePartComponent
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1,USceneComponent *param_2)

{
  return;
}

// OnPostCreateParts @ 14a6a9300

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::OnPostCreateParts(UWN_CS_CharacterCore *this)

{
  return;
}

// OnPostCreateSoul @ 14a6a9310

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::OnPostCreateSoul(UWN_CS_CharacterCore *this)

{
  return;
}

// OnPostCreateSoulComponent @ 14a6a9320

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
UWN_CS_CharacterCore::OnPostCreateSoulComponent
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterSoulInfo *param_1,
          USkeletalMeshComponent *param_2)

{
  return;
}

// OnPreDestroyPart @ 14a6a9330

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::OnPreDestroyPart(UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  USceneComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  UWN_CS_CharacterCore *local_res8;
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar4 = (this->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->Parts).ArrayNum * 8;
    if (pFVar4 != pFVar1) {
      while (lVar2 = *(longlong *)pFVar4,
            *(EWN_CS_CharacterSlotName *)(lVar2 + 0x28) != param_1->SlotName) {
        pFVar4 = pFVar4 + 8;
        if (pFVar4 == pFVar1) {
          return;
        }
      }
      if ((lVar2 != 0) &&
         (pUVar3 = *(USceneComponent **)(lVar2 + 0x38), pUVar3 != (USceneComponent *)0x0)) {
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        TMulticastDelegate<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->OnPreDestroyComponent,(TObjectPtr<UWN_CS_CharacterCore>)&local_res8,
                    pUVar3);
      }
    }
  }
  return;
}

// OnPreDestroyPartComponent @ 14a6a93d0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::OnPreDestroyPartComponent
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1,USceneComponent *param_2)

{
  return;
}

// OnPreDestroyParts @ 14a6a93e0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::OnPreDestroyParts(UWN_CS_CharacterCore *this)

{
  return;
}

// OnPreDestroySoul @ 14a6a93f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::OnPreDestroySoul(UWN_CS_CharacterCore *this)

{
  UWN_CS_CharacterSoul *pUVar1;
  USkeletalMeshComponent *pUVar2;
  UWN_CS_CharacterCore *local_res8;
  
  if ((((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) &&
      (pUVar1 = (this->Soul).field0_0x0.DebugPtr, pUVar1 != (UWN_CS_CharacterSoul *)0x0)) &&
     (pUVar2 = (pUVar1->Component).field0_0x0.DebugPtr, pUVar2 != (USkeletalMeshComponent *)0x0)) {
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TMulticastDelegate<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->OnPreDestroyComponent,(TObjectPtr<UWN_CS_CharacterCore>)&local_res8,
                (USceneComponent *)pUVar2);
  }
  return;
}

// OnPreDestroySoulComponent @ 14a6a9460

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
UWN_CS_CharacterCore::OnPreDestroySoulComponent
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterSoulInfo *param_1,
          USkeletalMeshComponent *param_2)

{
  return;
}

// OnUnmount @ 14a6a9470

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::OnUnmount(UWN_CS_CharacterCore *this)

{
  return;
}

// OverrideSkeletalMeshComponentMaterialParameters @ 14a6a9480

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::OverrideSkeletalMeshComponentMaterialParameters
          (UWN_CS_CharacterCore *this,USkeletalMeshComponent *param_1,
          FWN_CS_CharacterPartInfo *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  UMaterialInstanceDynamic *this_00;
  ulonglong uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined1 local_a8 [12];
  uint uStack_9c;
  TBitArray<FDefaultBitArrayAllocator> *local_98;
  uint uStack_90;
  int iStack_8c;
  undefined8 local_88;
  FScriptContainerElement *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 local_48;
  FScriptContainerElement *local_40;
  
  local_res20 = (param_2->MaterialDescs).ArrayNum;
  uVar6 = (ulonglong)(int)local_res20;
  pFVar12 = (param_2->MaterialDescs).AllocatorInstance.Data;
  pFVar8 = pFVar12 + 0x28;
  pFVar9 = pFVar12 + uVar6 * 0xa8;
  local_40 = pFVar9;
  do {
    if ((param_2->MaterialDescs).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FWN_CS_CharacterPresetSlotMaterialDesc_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar9) {
      return;
    }
    if ((*(int *)(pFVar8 + -0x18) != *(int *)(pFVar8 + 0x14)) ||
       (*(int *)(pFVar8 + 0x38) != *(int *)(pFVar8 + 100))) {
      pUVar5 = (UMaterialInterface *)
               (**(code **)(param_1->_padding_ + 0x6b0))(param_1,*(undefined8 *)pFVar12);
      iVar11 = 0;
      iVar10 = 0;
      local_48 = 0;
      this_00 = UMaterialInstanceDynamic::Create(pUVar5,(UObject *)param_1,(FName)0x0);
      iVar2 = *(int *)(pFVar8 + 8);
      uVar4 = 1;
      TStack_70.CurrentBitIndex = iVar11;
      if (iVar2 != 0) {
        pFVar9 = *(FScriptContainerElement **)pFVar8;
        if (*(FScriptContainerElement **)pFVar8 == (FScriptContainerElement *)0x0) {
          pFVar9 = pFVar8 + -0x10;
        }
        uVar3 = *(uint *)pFVar9;
        iVar10 = 0;
        while (uVar3 == 0) {
          lVar7 = (longlong)iVar10;
          iVar11 = iVar11 + 0x20;
          iVar10 = iVar10 + 1;
          TStack_70.CurrentBitIndex = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a6a959a;
          uVar3 = *(uint *)(pFVar9 + (lVar7 + 1) * 4);
        }
        uVar4 = -uVar3 & uVar3;
        uVar6 = (ulonglong)uVar4 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        TStack_70.CurrentBitIndex = iVar11 + -1 + (int)lVar7;
        if (iVar2 < TStack_70.CurrentBitIndex) {
          TStack_70.CurrentBitIndex = iVar2;
        }
      }
LAB_14a6a959a:
      local_a8._0_8_ = pFVar8 + -0x20;
      local_98 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar8 + -0x10);
      TStack_70._padding_ = CONCAT44(uVar4,iVar10);
      TStack_70.UnvisitedBitMask = 0xffffffff;
      local_88._4_4_ = SUB84(_uStack_90,4);
      local_88._0_4_ = iVar11;
      stack0xffffffffffffff60 = TStack_70._padding_;
      uStack_90 = 0xffffffff;
      local_78 = (FScriptContainerElement *)local_a8._0_8_;
      TStack_70.Array = local_98;
      TStack_70._24_8_ = local_88;
      iStack_8c = TStack_70.CurrentBitIndex;
      if (TStack_70.CurrentBitIndex < iVar2) {
        do {
          UMaterialInstanceDynamic::SetScalarParameterValue
                    (this_00,*(FName *)(*(longlong *)local_a8._0_8_ + (longlong)iStack_8c * 0x14),
                     *(float *)(*(longlong *)local_a8._0_8_ + 8 + (longlong)iStack_8c * 0x14));
          uStack_90 = uStack_90 & ~uStack_9c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a8 + 8));
        } while (iStack_8c < local_98->NumBits);
      }
      iVar2 = *(int *)(pFVar8 + 0x58);
      local_a8._8_4_ = 0;
      iVar10 = 0;
      uStack_9c = 1;
      iVar11 = 0;
      if (iVar2 != 0) {
        pFVar9 = *(FScriptContainerElement **)(pFVar8 + 0x50);
        if (*(FScriptContainerElement **)(pFVar8 + 0x50) == (FScriptContainerElement *)0x0) {
          pFVar9 = pFVar8 + 0x40;
        }
        uVar4 = *(uint *)pFVar9;
        while (uVar4 == 0) {
          lVar7 = (longlong)(int)local_a8._8_4_;
          iVar10 = iVar10 + 0x20;
          local_a8._8_4_ = local_a8._8_4_ + 1;
          iVar11 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_a8._8_4_)
          goto LAB_14a6a96ba;
          uVar4 = *(uint *)(pFVar9 + (lVar7 + 1) * 4);
        }
        uStack_9c = -uVar4 & uVar4;
        uVar6 = (ulonglong)uStack_9c * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar11 = iVar10 + -1 + (int)lVar7;
        if (iVar2 < iVar11) {
          iVar11 = iVar2;
        }
      }
LAB_14a6a96ba:
      local_a8._0_8_ = pFVar8 + 0x30;
      local_98 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar8 + 0x40);
      iStack_8c = iVar11;
      uStack_90 = 0xffffffff;
      local_88._4_4_ = iVar11;
      local_88._0_4_ = iVar10;
      TStack_70._padding_ = stack0xffffffffffffff60;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      TStack_70.CurrentBitIndex = iVar11;
      local_78 = (FScriptContainerElement *)local_a8._0_8_;
      TStack_70.Array = local_98;
      TStack_70._24_8_ = local_88;
      if (iVar11 < iVar2) {
        do {
          plVar1 = (longlong *)((longlong)iVar11 * 0x20 + 8 + *(longlong *)local_78);
          local_a8._0_8_ = *plVar1;
          unique0x100002b4 = plVar1[1];
          UMaterialInstanceDynamic::SetVectorParameterValue
                    (this_00,*(FName *)((longlong)iVar11 * 0x20 + *(longlong *)local_78),
                     (FLinearColor *)local_a8);
          TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
          iVar11 = TStack_70.CurrentBitIndex;
        } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
      }
      (**(code **)(param_1->_padding_ + 0x6c0))(param_1,*(undefined8 *)pFVar12,this_00);
      pFVar9 = local_40;
    }
    uVar6 = (ulonglong)local_res20;
    pFVar12 = pFVar12 + 0xa8;
    pFVar8 = pFVar8 + 0xa8;
  } while( true );
}

// OverrideStaticMeshComponentMaterialParameters @ 14a6a97b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::OverrideStaticMeshComponentMaterialParameters
          (UWN_CS_CharacterCore *this,UStaticMeshComponent *param_1,
          FWN_CS_CharacterPartInfo *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  UMaterialInstanceDynamic *this_00;
  ulonglong uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined1 local_a8 [12];
  uint uStack_9c;
  TBitArray<FDefaultBitArrayAllocator> *local_98;
  uint uStack_90;
  int iStack_8c;
  undefined8 local_88;
  FScriptContainerElement *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 local_48;
  FScriptContainerElement *local_40;
  
  local_res20 = (param_2->MaterialDescs).ArrayNum;
  uVar6 = (ulonglong)(int)local_res20;
  pFVar12 = (param_2->MaterialDescs).AllocatorInstance.Data;
  pFVar8 = pFVar12 + 0x28;
  pFVar9 = pFVar12 + uVar6 * 0xa8;
  local_40 = pFVar9;
  do {
    if ((param_2->MaterialDescs).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FWN_CS_CharacterPresetSlotMaterialDesc_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar9) {
      return;
    }
    if ((*(int *)(pFVar8 + -0x18) != *(int *)(pFVar8 + 0x14)) ||
       (*(int *)(pFVar8 + 0x38) != *(int *)(pFVar8 + 100))) {
      pUVar5 = (UMaterialInterface *)
               (**(code **)(param_1->_padding_ + 0x6b0))(param_1,*(undefined8 *)pFVar12);
      iVar11 = 0;
      iVar10 = 0;
      local_48 = 0;
      this_00 = UMaterialInstanceDynamic::Create(pUVar5,(UObject *)param_1,(FName)0x0);
      iVar2 = *(int *)(pFVar8 + 8);
      uVar4 = 1;
      TStack_70.CurrentBitIndex = iVar11;
      if (iVar2 != 0) {
        pFVar9 = *(FScriptContainerElement **)pFVar8;
        if (*(FScriptContainerElement **)pFVar8 == (FScriptContainerElement *)0x0) {
          pFVar9 = pFVar8 + -0x10;
        }
        uVar3 = *(uint *)pFVar9;
        iVar10 = 0;
        while (uVar3 == 0) {
          lVar7 = (longlong)iVar10;
          iVar11 = iVar11 + 0x20;
          iVar10 = iVar10 + 1;
          TStack_70.CurrentBitIndex = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a6a98ca;
          uVar3 = *(uint *)(pFVar9 + (lVar7 + 1) * 4);
        }
        uVar4 = -uVar3 & uVar3;
        uVar6 = (ulonglong)uVar4 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        TStack_70.CurrentBitIndex = iVar11 + -1 + (int)lVar7;
        if (iVar2 < TStack_70.CurrentBitIndex) {
          TStack_70.CurrentBitIndex = iVar2;
        }
      }
LAB_14a6a98ca:
      local_a8._0_8_ = pFVar8 + -0x20;
      local_98 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar8 + -0x10);
      TStack_70._padding_ = CONCAT44(uVar4,iVar10);
      TStack_70.UnvisitedBitMask = 0xffffffff;
      local_88._4_4_ = SUB84(_uStack_90,4);
      local_88._0_4_ = iVar11;
      stack0xffffffffffffff60 = TStack_70._padding_;
      uStack_90 = 0xffffffff;
      local_78 = (FScriptContainerElement *)local_a8._0_8_;
      TStack_70.Array = local_98;
      TStack_70._24_8_ = local_88;
      iStack_8c = TStack_70.CurrentBitIndex;
      if (TStack_70.CurrentBitIndex < iVar2) {
        do {
          UMaterialInstanceDynamic::SetScalarParameterValue
                    (this_00,*(FName *)(*(longlong *)local_a8._0_8_ + (longlong)iStack_8c * 0x14),
                     *(float *)(*(longlong *)local_a8._0_8_ + 8 + (longlong)iStack_8c * 0x14));
          uStack_90 = uStack_90 & ~uStack_9c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a8 + 8));
        } while (iStack_8c < local_98->NumBits);
      }
      iVar2 = *(int *)(pFVar8 + 0x58);
      local_a8._8_4_ = 0;
      iVar10 = 0;
      uStack_9c = 1;
      iVar11 = 0;
      if (iVar2 != 0) {
        pFVar9 = *(FScriptContainerElement **)(pFVar8 + 0x50);
        if (*(FScriptContainerElement **)(pFVar8 + 0x50) == (FScriptContainerElement *)0x0) {
          pFVar9 = pFVar8 + 0x40;
        }
        uVar4 = *(uint *)pFVar9;
        while (uVar4 == 0) {
          lVar7 = (longlong)(int)local_a8._8_4_;
          iVar10 = iVar10 + 0x20;
          local_a8._8_4_ = local_a8._8_4_ + 1;
          iVar11 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_a8._8_4_)
          goto LAB_14a6a99ea;
          uVar4 = *(uint *)(pFVar9 + (lVar7 + 1) * 4);
        }
        uStack_9c = -uVar4 & uVar4;
        uVar6 = (ulonglong)uStack_9c * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar11 = iVar10 + -1 + (int)lVar7;
        if (iVar2 < iVar11) {
          iVar11 = iVar2;
        }
      }
LAB_14a6a99ea:
      local_a8._0_8_ = pFVar8 + 0x30;
      local_98 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar8 + 0x40);
      iStack_8c = iVar11;
      uStack_90 = 0xffffffff;
      local_88._4_4_ = iVar11;
      local_88._0_4_ = iVar10;
      TStack_70._padding_ = stack0xffffffffffffff60;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      TStack_70.CurrentBitIndex = iVar11;
      local_78 = (FScriptContainerElement *)local_a8._0_8_;
      TStack_70.Array = local_98;
      TStack_70._24_8_ = local_88;
      if (iVar11 < iVar2) {
        do {
          plVar1 = (longlong *)((longlong)iVar11 * 0x20 + 8 + *(longlong *)local_78);
          local_a8._0_8_ = *plVar1;
          unique0x100002b4 = plVar1[1];
          UMaterialInstanceDynamic::SetVectorParameterValue
                    (this_00,*(FName *)((longlong)iVar11 * 0x20 + *(longlong *)local_78),
                     (FLinearColor *)local_a8);
          TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
          iVar11 = TStack_70.CurrentBitIndex;
        } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
      }
      (**(code **)(param_1->_padding_ + 0x6c0))(param_1,*(undefined8 *)pFVar12,this_00);
      pFVar9 = local_40;
    }
    uVar6 = (ulonglong)local_res20;
    pFVar12 = pFVar12 + 0xa8;
    pFVar8 = pFVar8 + 0xa8;
  } while( true );
}

// RemoveAllPartInfos @ 14a6a9fc0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::RemoveAllPartInfos(UWN_CS_CharacterCore *this)

{
  int *piVar1;
  
  DestroyParts(this);
  DestructItems<FWN_CS_CharacterPartInfo,int>
            ((FWN_CS_CharacterPartInfo *)(this->PartInfos).AllocatorInstance.Data,
             (this->PartInfos).ArrayNum);
  piVar1 = &(this->PartInfos).ArrayMax;
  (this->PartInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,&(this->PartInfos).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemovePartInfo @ 14a6aa0c0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::RemovePartInfo(UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  this_00 = &this->PartInfos;
  uVar3 = TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UWN_CS_CharacterCore::RemovePartInfo_::__l2::<lambda_1>_>
                    (this_00,(<lambda_1>)param_1,(this->PartInfos).ArrayNum);
  if (uVar3 != 0xffffffff) {
    DestroyPart(this,param_1);
    uVar4 = 0;
    if ((int)uVar3 < (this->PartInfos).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,&this_00->AllocatorInstance,(this->PartInfos).ArrayNum,
               &(this->PartInfos).ArrayMax);
  }
  return;
}

// SetNonePartInfos @ 14a6aa1f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
UWN_CS_CharacterCore::SetNonePartInfos
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterNonePartInfo *param_1)

{
  FWN_CS_CharacterNonePartInfo::operator=(&this->NonePartInfo,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014a6aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this);
  return;
}

// SetPartAnimAsset @ 14a6aa220

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::SetPartAnimAsset
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1,
          TSoftObjectPtr<UAnimationAsset> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  void *pvVar3;
  FObjectPtr this_00;
  bool bVar4;
  UClass *pUVar5;
  UAnimationAsset *pUVar6;
  FScriptContainerElement *pFVar7;
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar7 = (this->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)(this->Parts).ArrayNum * 8;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 8) {
      lVar2 = *(longlong *)pFVar7;
      if (*(EWN_CS_CharacterSlotName *)(lVar2 + 0x28) == param_1) {
        if (lVar2 != 0) {
          if (*(longlong *)(lVar2 + 0x38) != 0) {
            pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x38),pUVar5);
            if ((bVar4) &&
               (this_00.field0_0x0 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(lVar2 + 0x38))->Handle,
               this_00.field0_0x0 != (UObject *)0x0)) {
              pUVar6 = TSoftObjectPtr<UAnimationAsset>::LoadSynchronous(param_2);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar6 != (UAnimationAsset *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar6);
              }
              *(UAnimationAsset **)((longlong)this_00.field0_0x0 + 0x968) = pUVar6;
              USkeletalMeshComponent::PlayAnimation
                        ((USkeletalMeshComponent *)this_00.field0_0x0,pUVar6,true);
            }
          }
          pvVar3 = *(void **)&(param_2->SoftObjectPtr).field_0x18;
          if (pvVar3 == (void *)0x0) {
            return;
          }
          FMemory::Free(pvVar3);
          return;
        }
        break;
      }
    }
  }
  pvVar3 = *(void **)&(param_2->SoftObjectPtr).field_0x18;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  FMemory::Free(pvVar3);
  return;
}

// SetPartAnimClass @ 14a6aa310

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::SetPartAnimClass
          (UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1,
          TSubclassOf<UAnimInstance> param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FObjectPtr FVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  
  if ((this->Owner).field0_0x0.DebugPtr == (AActor *)0x0) {
    return;
  }
  pFVar9 = (this->Parts).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)(this->Parts).ArrayNum * 8;
  if (pFVar9 == pFVar1) {
    return;
  }
  while (lVar3 = *(longlong *)pFVar9, *(EWN_CS_CharacterSlotName *)(lVar3 + 0x28) != param_1) {
    pFVar9 = pFVar9 + 8;
    if (pFVar9 == pFVar1) {
      return;
    }
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x38) == 0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  bVar6 = FObjectPtr::IsA((FObjectPtr *)(lVar3 + 0x38),pUVar7);
  if (!bVar6) {
    return;
  }
  FVar4.field0_0x0 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(lVar3 + 0x38))->Handle;
  if (FVar4.field0_0x0 == (UObject *)0x0) {
    return;
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  pcVar5 = *(code **)(*(longlong *)FVar4.field0_0x0 + 0xc70);
  if ((lVar3 != 0) &&
     (pUVar7 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      uVar8 = *(undefined8 *)param_2.Class.field0_0x0;
      goto LAB_14a6aa3e3;
    }
  }
  uVar8 = 0;
LAB_14a6aa3e3:
  (*pcVar5)(FVar4.field0_0x0,uVar8);
  return;
}

// SetPartAnimCustom @ 14a6aa410

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::SetPartAnimCustom(UWN_CS_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FObjectPtr this_00;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  UClass *pUVar5;
  
  if ((this->Owner).field0_0x0.DebugPtr != (AActor *)0x0) {
    pFVar4 = (this->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->Parts).ArrayNum * 8;
    if (pFVar4 != pFVar1) {
      while (lVar2 = *(longlong *)pFVar4, *(EWN_CS_CharacterSlotName *)(lVar2 + 0x28) != param_1) {
        pFVar4 = pFVar4 + 8;
        if (pFVar4 == pFVar1) {
          return;
        }
      }
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x38) != 0)) {
        pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x38),pUVar5);
        if ((bVar3) &&
           (this_00.field0_0x0 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(lVar2 + 0x38))->Handle,
           this_00.field0_0x0 != (UObject *)0x0)) {
          USkeletalMeshComponent::SetAnimationMode
                    ((USkeletalMeshComponent *)this_00.field0_0x0,AnimationCustomMode,true);
          return;
        }
      }
    }
  }
  return;
}

// SetPartInfo @ 14a6aa4b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::SetPartInfo(UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1)

{
  TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FWN_CS_CharacterPartInfo local_98;
  
  (**(code **)(this->_padding_ + 0x3d8))(this,&local_98,param_1);
  if (local_98.SlotName < Count) {
    this_00 = &this->PartInfos;
    uVar3 = TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_>::
            FindLastByPredicate<_UWN_CS_CharacterCore::SetPartInfo_::__l2::<lambda_1>_>
                      (this_00,(<lambda_1>)local_98.SlotName,(this->PartInfos).ArrayNum);
    iVar4 = (this->PartInfos).ArrayNum;
    if (uVar3 == 0xffffffff) {
      if (iVar4 == (this->PartInfos).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x888,&this_00->AllocatorInstance,&(this->PartInfos).ArrayMax);
      }
      (this->PartInfos).ArrayNum = iVar4 + 1;
      FWN_CS_CharacterPartInfo::FWN_CS_CharacterPartInfo
                ((FWN_CS_CharacterPartInfo *)
                 ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x88),&local_98);
    }
    else {
      uVar5 = 0;
      if ((int)uVar3 < iVar4) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FWN_CS_CharacterPartInfo::operator=
                ((FWN_CS_CharacterPartInfo *)
                 ((this_00->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x88),&local_98);
      DestroyPart(this,local_98.SlotName);
    }
    CreatePart(this,local_98.SlotName);
  }
  DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
            ((FWN_CS_CharacterPresetSlotMaterialDesc *)local_98.MaterialDescs.AllocatorInstance.Data
             ,local_98.MaterialDescs.ArrayNum);
  if ((FWN_CS_CharacterPresetSlotMaterialDesc *)local_98.MaterialDescs.AllocatorInstance.Data !=
      (FWN_CS_CharacterPresetSlotMaterialDesc *)0x0) {
    FMemory::Free(local_98.MaterialDescs.AllocatorInstance.Data);
  }
  if (local_98.ColliderInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ColliderInfoArray.AllocatorInstance.Data);
  }
  if (local_98.ServerHitCapsuleInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ServerHitCapsuleInfoArray.AllocatorInstance.Data);
  }
  if (local_98.HitSphereInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.HitSphereInfoArray.AllocatorInstance.Data);
  }
  if (local_98.ResourcePath.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ResourcePath.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetPartInfos @ 14a6aa660

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::SetPartInfos
          (UWN_CS_CharacterCore *this,
          TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  EWN_CS_CharacterSlotName EVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  FWN_CS_CharacterPartInfo *pFVar10;
  longlong lVar11;
  FWN_CS_CharacterPartInfo *pFVar12;
  undefined1 local_res18 [8];
  FWN_CS_CharacterPartInfo *local_res20;
  FWN_CS_CharacterPartInfo local_c8;
  
  uVar1 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)uVar1;
  pFVar12 = (FWN_CS_CharacterPartInfo *)(param_1->AllocatorInstance).Data;
  pFVar10 = pFVar12 + uVar9;
  local_res20 = pFVar10;
  do {
    while( true ) {
      if (param_1->ArrayNum != (int)uVar9) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FWN_CS_CharacterPartInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar10) {
        if (param_2) {
          DestroyParts(this);
          CreateParts(this);
        }
        return;
      }
      (**(code **)(this->_padding_ + 0x3d8))(this,&local_c8,pFVar12);
      EVar4 = local_c8.SlotName;
      if (Shiled_LR < local_c8.SlotName) break;
      if (local_c8.SlotName == Head) {
        SetRefPoseOverride(this,pFVar12);
      }
      this_00 = &this->PartInfos;
      uVar6 = TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_>::
              FindLastByPredicate<_UWN_CS_CharacterCore::SetPartInfos_::__l6::<lambda_1>_>
                        (this_00,(<lambda_1>)EVar4,(this->PartInfos).ArrayNum);
      iVar7 = (this->PartInfos).ArrayNum;
      if (uVar6 == 0xffffffff) {
        if (iVar7 == (this->PartInfos).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x888,&this_00->AllocatorInstance,&(this->PartInfos).ArrayMax);
        }
        (this->PartInfos).ArrayNum = iVar7 + 1;
        FWN_CS_CharacterPartInfo::FWN_CS_CharacterPartInfo
                  ((FWN_CS_CharacterPartInfo *)
                   ((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x88),&local_c8);
        if (!param_2) {
LAB_14a6aa8bd:
          CreatePart(this,EVar4);
        }
      }
      else {
        uVar8 = 0;
        if ((int)uVar6 < iVar7) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this_00->AllocatorInstance).Data;
        lVar11 = (longlong)(int)uVar6 * 0x88;
        pFVar2[lVar11] = (FScriptContainerElement)local_c8.bIsTickable;
        pFVar2[lVar11 + 1] = (FScriptContainerElement)local_c8.bIsHidden;
        *(float *)(pFVar2 + lVar11 + 4) = local_c8.Scale;
        pFVar2[lVar11 + 8] = (FScriptContainerElement)local_c8.SlotName;
        *(FName *)(pFVar2 + lVar11 + 0xc) = local_c8.SocketName;
        *(EWN_CS_ResourceType *)(pFVar2 + lVar11 + 0x14) = local_c8.ResourceType;
        *(FName *)(pFVar2 + lVar11 + 0x18) = local_c8.ResourcePath.AssetPath.PackageName;
        ((FName *)(pFVar2 + lVar11 + 0x18))[1] = local_c8.ResourcePath.AssetPath.AssetName;
        FUtf8String::operator=
                  ((FUtf8String *)(pFVar2 + lVar11 + 0x28),&local_c8.ResourcePath.SubPathString);
        pFVar2[lVar11 + 0x38] = (FScriptContainerElement)local_c8.bUseLeaderPose;
        *(FName *)(pFVar2 + lVar11 + 0x3c) = local_c8.CollisionProfileName;
        TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *)
                   (pFVar2 + lVar11 + 0x48),&local_c8.HitSphereInfoArray);
        TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *)
                   (pFVar2 + lVar11 + 0x58),&local_c8.ServerHitCapsuleInfoArray);
        TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *)
                   (pFVar2 + lVar11 + 0x68),&local_c8.ColliderInfoArray);
        TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
                   (pFVar2 + lVar11 + 0x78),&local_c8.MaterialDescs);
        if (!param_2) {
          DestroyPart(this,EVar4);
          goto LAB_14a6aa8bd;
        }
      }
      DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
                ((FWN_CS_CharacterPresetSlotMaterialDesc *)
                 local_c8.MaterialDescs.AllocatorInstance.Data,local_c8.MaterialDescs.ArrayNum);
      if ((FWN_CS_CharacterPresetSlotMaterialDesc *)local_c8.MaterialDescs.AllocatorInstance.Data !=
          (FWN_CS_CharacterPresetSlotMaterialDesc *)0x0) {
        FMemory::Free(local_c8.MaterialDescs.AllocatorInstance.Data);
      }
      if (local_c8.ColliderInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.ColliderInfoArray.AllocatorInstance.Data);
      }
      if (local_c8.ServerHitCapsuleInfoArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.ServerHitCapsuleInfoArray.AllocatorInstance.Data);
      }
      if (local_c8.HitSphereInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.HitSphereInfoArray.AllocatorInstance.Data);
      }
      pFVar10 = local_res20;
      if (local_c8.ResourcePath.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.ResourcePath.SubPathString.Data.AllocatorInstance.Data);
        pFVar10 = local_res20;
      }
LAB_14a6aa91f:
      uVar9 = (ulonglong)uVar1;
      pFVar12 = pFVar12 + 1;
    }
    DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
              ((FWN_CS_CharacterPresetSlotMaterialDesc *)
               local_c8.MaterialDescs.AllocatorInstance.Data,local_c8.MaterialDescs.ArrayNum);
    if ((FWN_CS_CharacterPresetSlotMaterialDesc *)local_c8.MaterialDescs.AllocatorInstance.Data !=
        (FWN_CS_CharacterPresetSlotMaterialDesc *)0x0) {
      FMemory::Free(local_c8.MaterialDescs.AllocatorInstance.Data);
    }
    if (local_c8.ColliderInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.ColliderInfoArray.AllocatorInstance.Data);
    }
    if (local_c8.ServerHitCapsuleInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_c8.ServerHitCapsuleInfoArray.AllocatorInstance.Data);
    }
    if (local_c8.HitSphereInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.HitSphereInfoArray.AllocatorInstance.Data);
    }
    if (local_c8.ResourcePath.SubPathString.Data.AllocatorInstance.Data ==
        (FScriptContainerElement *)0x0) goto LAB_14a6aa91f;
    FMemory::Free(local_c8.ResourcePath.SubPathString.Data.AllocatorInstance.Data);
    uVar9 = (ulonglong)uVar1;
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// SetRefPoseOverride @ 14a6aa990

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterCore::SetRefPoseOverride
          (UWN_CS_CharacterCore *this,FWN_CS_CharacterPartInfo *param_1)

{
  int iVar1;
  UWN_CS_CharacterSoul *pUVar2;
  USkeletalMeshComponent *this_00;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  USkeletalMesh *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FReferenceSkeleton *pFVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  FReferenceSkeletonModifier local_38;
  
  pUVar2 = (this->Soul).field0_0x0.DebugPtr;
  if ((((pUVar2 != (UWN_CS_CharacterSoul *)0x0) &&
       (this_00 = (pUVar2->Component).field0_0x0.DebugPtr, this_00 != (USkeletalMeshComponent *)0x0)
       ) && (pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00),
            pUVar6 != (USkeletalMesh *)0x0)) &&
     (pUVar7 = FSoftObjectPath::TryLoad(&param_1->ResourcePath,(FUObjectSerializeContext *)0x0),
     pUVar7 != (UObject *)0x0)) {
    pUVar8 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar13 = (int)pUVar8->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar8->_padding_)) {
      pFVar9 = (FReferenceSkeleton *)(**(code **)(pUVar6->_padding_ + 800))(pUVar6);
      local_38.Skeleton = (USkeleton *)(**(code **)(pUVar6->_padding_ + 0x408))(pUVar6);
      local_38.RefSkeleton = pFVar9;
      lVar10 = (**(code **)(*(longlong *)pUVar7 + 800))(pUVar7);
      iVar13 = *(int *)(lVar10 + 0x28);
      lVar16 = (longlong)iVar13;
      lVar10 = (**(code **)(*(longlong *)pUVar7 + 800))(pUVar7);
      uVar14 = 0;
      uVar15 = uVar14;
      if (0 < iVar13) {
        do {
          iVar13 = (int)uVar14;
          if ((-1 < iVar13) && (iVar13 < *(int *)(lVar10 + 0x38))) {
            lVar11 = (**(code **)(*(longlong *)pUVar7 + 800))(pUVar7);
            if ((*(int *)(lVar11 + 0x28) <= iVar13) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar3 = *(FName *)(uVar15 + *(longlong *)(lVar11 + 0x20));
            if (((FVar3 != (FName)0x0) &&
                (piVar12 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                   *)&pFVar9->FinalNameToIndexMap,FVar3), piVar12 != (int *)0x0)) &&
               (iVar1 = *piVar12, iVar1 != -1)) {
              if ((*(int *)(lVar10 + 0x38) <= iVar13) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FReferenceSkeletonModifier::UpdateRefPoseTransform
                        (&local_38,iVar1,
                         (TTransform<double> *)
                         ((longlong)iVar13 * 0x60 + *(longlong *)(lVar10 + 0x30)));
            }
          }
          uVar14 = (ulonglong)(iVar13 + 1);
          lVar16 = lVar16 + -1;
          uVar15 = uVar15 + 0xc;
        } while (lVar16 != 0);
      }
      FReferenceSkeletonModifier::~FReferenceSkeletonModifier(&local_38);
    }
  }
  return;
}

// SetSoulAnimAsset @ 14a6aabc0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
UWN_CS_CharacterCore::SetSoulAnimAsset
          (UWN_CS_CharacterCore *this,TSoftObjectPtr<UAnimationAsset> *param_1)

{
  USkeletalMeshComponent *this_00;
  UAnimationAsset *pUVar1;
  void *pvVar2;
  
  this_00 = (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr;
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  }
  else {
    pUVar1 = TSoftObjectPtr<UAnimationAsset>::LoadSynchronous(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAnimationAsset *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this_00->AnimationData).AnimToPlay.field0_0x0.DebugPtr = pUVar1;
    USkeletalMeshComponent::PlayAnimation(this_00,pUVar1,true);
    pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  }
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// SetSoulAnimClass @ 14a6aac50

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
UWN_CS_CharacterCore::SetSoulAnimClass
          (UWN_CS_CharacterCore *this,TSubclassOf<UAnimInstance> param_1)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  
  pUVar2 = (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr;
  if (pUVar2 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  pcVar4 = *(code **)(pUVar2->_padding_ + 0xc70);
  if ((lVar3 != 0) &&
     (pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar7 = *(undefined8 *)param_1.Class.field0_0x0;
      goto LAB_14a6aacbe;
    }
  }
  uVar7 = 0;
LAB_14a6aacbe:
  (*pcVar4)(pUVar2,uVar7);
  return;
}

// SetSoulAnimCustom @ 14a6aace0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterCore::SetSoulAnimCustom(UWN_CS_CharacterCore *this)

{
  USkeletalMeshComponent *this_00;
  
  this_00 = (((this->Soul).field0_0x0.DebugPtr)->Component).field0_0x0.DebugPtr;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::SetAnimationMode(this_00,AnimationCustomMode,true);
    return;
  }
  return;
}

// StaticRegisterNativesUWN_CS_CharacterCore @ 14a6aad20

void __cdecl UWN_CS_CharacterCore::StaticRegisterNativesUWN_CS_CharacterCore(void)

{
  return;
}

// operator() @ 15054fa00

bool __thiscall `UWN_CS_CharacterCore::Initialize'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<22205994532601912>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532601912>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054fa40

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall
`UWN_CS_CharacterCore::CreatePartComponent'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<22205994532602336>);
  if (bVar2) {
    WN_CS_GetCharacterSlotNameString
              (&local_18,*(EWN_CS_CharacterSlotName *)(**(longlong **)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532602336>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054faae;
    }
  }
  bVar2 = false;
LAB_15054faae:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054fae0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall
`UWN_CS_CharacterCore::CreatePartComponent'::__l18::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<22205994532602360>);
  if (bVar2) {
    WN_CS_GetCharacterSlotNameString
              (&local_18,*(EWN_CS_CharacterSlotName *)(**(longlong **)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532602360>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054fb4e;
    }
  }
  bVar2 = false;
LAB_15054fb4e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054fb80

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall `UWN_CS_CharacterCore::GetPart'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<22205994532601961>);
  if (bVar2) {
    WN_CS_GetCharacterSlotNameString(&local_18,**(EWN_CS_CharacterSlotName **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532601961>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054fbea;
    }
  }
  bVar2 = false;
LAB_15054fbea:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054fc20

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall `UWN_CS_CharacterCore::GetPartInfo'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<22205994532602027>);
  if (bVar2) {
    WN_CS_GetCharacterSlotNameString(&local_18,**(EWN_CS_CharacterSlotName **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532602027>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054fc8a;
    }
  }
  bVar2 = false;
LAB_15054fc8a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054fcc0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall
`UWN_CS_CharacterCore::GetPartInfo_Mutable'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<22205994532602052>);
  if (bVar2) {
    WN_CS_GetCharacterSlotNameString(&local_18,**(EWN_CS_CharacterSlotName **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532602052>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054fd2a;
    }
  }
  bVar2 = false;
LAB_15054fd2a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054fd60

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall `UWN_CS_CharacterCore::GetPartMutable'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<22205994532601987>);
  if (bVar2) {
    WN_CS_GetCharacterSlotNameString(&local_18,**(EWN_CS_CharacterSlotName **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532601987>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054fdca;
    }
  }
  bVar2 = false;
LAB_15054fdca:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054fe00

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall
`UWN_CS_CharacterCore::CreatePartComponent'::__l22::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<22205994532602367>);
  if (bVar2) {
    WN_CS_GetCharacterSlotNameString
              (&local_18,*(EWN_CS_CharacterSlotName *)(**(longlong **)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532602367>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054fe6e;
    }
  }
  bVar2 = false;
LAB_15054fe6e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054fea0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall
`UWN_CS_CharacterCore::CreatePartComponent'::__l26::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<22205994532602374>);
  if (bVar2) {
    WN_CS_GetCharacterSlotNameString
              (&local_18,*(EWN_CS_CharacterSlotName *)(**(longlong **)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532602374>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054ff0e;
    }
  }
  bVar2 = false;
LAB_15054ff0e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054ff40

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __thiscall
`UWN_CS_CharacterCore::CreatePartComponent'::__l30::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<22205994532602381>);
  if (bVar2) {
    WN_CS_GetCharacterSlotNameString
              (&local_18,*(EWN_CS_CharacterSlotName *)(**(longlong **)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<22205994532602381>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054ffae;
    }
  }
  bVar2 = false;
LAB_15054ffae:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

