// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 45

// StaticClass @ 14b556390

UClass * __cdecl UDS_PartsSystemControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartsSystemControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartsSystemControl",
               &Z_Registration_Info_UClass_UDS_PartsSystemControl.InnerSingleton,
               StaticRegisterNativesUDS_PartsSystemControl,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PartsSystemControl>,
               InternalVTableHelperCtorCaller<UDS_PartsSystemControl>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartsSystemControl.InnerSingleton;
}

// UDS_PartsSystemControl @ 14b55a110

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

UDS_PartsSystemControl * __thiscall
UDS_PartsSystemControl::UDS_PartsSystemControl(UDS_PartsSystemControl *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PartsSystemControl__6B_;
  (this->CharacterCore).field0_0x0.DebugPtr = (UWN_CS_CharacterCore *)0x0;
  (this->PreLoadedResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreLoadedResources).ArrayNum = 0;
  (this->PreLoadedResources).ArrayMax = 0;
  (this->CurWorkspace).field0_0x0.DebugPtr = (UWN_CS_CharacterWorkspace *)0x0;
  (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->FootStepProvider).ComparisonIndex = 0;
  (this->FootStepProvider).Number = 0;
  *(undefined8 *)&this->PartsDefaultMaterialInfoMap = 0;
  *(undefined8 *)&(this->PartsDefaultMaterialInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->PartsDefaultMaterialInfoMap).field_0x20 = 0;
  this->CurResourcePresetTable = (FDS_ResourcePresetTableRow *)0x0;
  this->bIsCanceled = false;
  this->DefaultCustomDepthValue = 0;
  this->UseOutGameWorkspace = false;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PartsDefaultMaterialInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x48 = 0;
  this->bUseAni = true;
  this->ApplyCapsuleHeight = true;
  return this;
}

// UDS_PartsSystemControl @ 14b55a1b0

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

UDS_PartsSystemControl * __thiscall
UDS_PartsSystemControl::UDS_PartsSystemControl
          (UDS_PartsSystemControl *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PartsSystemControl__6B_;
  (this->CharacterCore).field0_0x0.DebugPtr = (UWN_CS_CharacterCore *)0x0;
  (this->PreLoadedResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreLoadedResources).ArrayNum = 0;
  (this->PreLoadedResources).ArrayMax = 0;
  (this->CurWorkspace).field0_0x0.DebugPtr = (UWN_CS_CharacterWorkspace *)0x0;
  (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->FootStepProvider).ComparisonIndex = 0;
  (this->FootStepProvider).Number = 0;
  *(undefined8 *)&this->PartsDefaultMaterialInfoMap = 0;
  *(undefined8 *)&(this->PartsDefaultMaterialInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->PartsDefaultMaterialInfoMap).field_0x20 = 0;
  this->CurResourcePresetTable = (FDS_ResourcePresetTableRow *)0x0;
  this->bIsCanceled = false;
  this->DefaultCustomDepthValue = 0;
  this->UseOutGameWorkspace = false;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PartsDefaultMaterialInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x48 = 0;
  this->bUseAni = true;
  this->ApplyCapsuleHeight = true;
  return this;
}

// ~UDS_PartsSystemControl @ 14b55b530

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

void __thiscall UDS_PartsSystemControl::~UDS_PartsSystemControl(UDS_PartsSystemControl *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_PartsSystemControl__6B_;
  *(undefined4 *)&(this->PartsDefaultMaterialInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PartsDefaultMaterialInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PartsDefaultMaterialInfoMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->PreLoadedResources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b55ccb0

UClass * __cdecl UDS_PartsSystemControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartsSystemControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartsSystemControl",
               &Z_Registration_Info_UClass_UDS_PartsSystemControl.InnerSingleton,
               StaticRegisterNativesUDS_PartsSystemControl,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PartsSystemControl>,
               InternalVTableHelperCtorCaller<UDS_PartsSystemControl>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartsSystemControl.InnerSingleton;
}

// StaticRegisterNativesUDS_PartsSystemControl @ 14b55d330

void __cdecl UDS_PartsSystemControl::StaticRegisterNativesUDS_PartsSystemControl(void)

{
  return;
}

// CancelAsyncLoad @ 14bc30220

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

void __thiscall UDS_PartsSystemControl::CancelAsyncLoad(UDS_PartsSystemControl *this)

{
  FStreamableHandle *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this_00 = (this->AsyncLoadHandle).Object;
  this->bIsCanceled = true;
  (this->CurWorkspace).field0_0x0.DebugPtr = (UWN_CS_CharacterWorkspace *)0x0;
  if (((this_00 != (FStreamableHandle *)0x0) && (this_00->bCanceled == false)) &&
     (this_00->bReleased == false)) {
    FStreamableHandle::CancelHandle(this_00);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AsyncLoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncLoadHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// ChangeMaterial @ 14bc311d0

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

bool __thiscall
UDS_PartsSystemControl::ChangeMaterial(UDS_PartsSystemControl *this,UMaterialInterface *param_1)

{
  USceneComponent *pUVar1;
  bool bVar2;
  int iVar3;
  UWN_CS_CharacterPart *pUVar4;
  UClass *pUVar5;
  int iVar6;
  int iVar7;
  
  if ((this->CharacterCore).field0_0x0.DebugPtr != (UWN_CS_CharacterCore *)0x0) {
    iVar7 = 0;
    do {
      pUVar4 = UWN_CS_CharacterCore::GetPart
                         ((this->CharacterCore).field0_0x0.DebugPtr,(EWN_CS_CharacterSlotName)iVar7,
                          false);
      if ((pUVar4 != (UWN_CS_CharacterPart *)0x0) &&
         ((pUVar4->Component).field0_0x0.DebugPtr != (USceneComponent *)0x0)) {
        pUVar5 = Z_Construct_UClass_UMeshComponent_NoRegister();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&pUVar4->Component,pUVar5);
        if ((bVar2) &&
           (((pUVar1 = (pUVar4->Component).field0_0x0.DebugPtr, pUVar1 != (USceneComponent *)0x0 &&
             (iVar3 = (**(code **)(pUVar1->_padding_ + 0x810))(pUVar1), iVar3 != 0)) &&
            (iVar6 = 0, 0 < iVar3)))) {
          do {
            (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,iVar6);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar3);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x2f);
    return true;
  }
  return false;
}

// CharacterCorePostSetInfos @ 14bc312c0

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
UDS_PartsSystemControl::CharacterCorePostSetInfos(UDS_PartsSystemControl *this,AActor *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWN_CS_CharacterCore *pUVar3;
  USkeletalMeshComponent *pUVar4;
  UObject *pUVar5;
  bool bVar6;
  UWN_CS_CharacterSoul *pUVar7;
  FWN_CS_CharacterSoulInfo *pFVar8;
  FWN_CS_CharacterPartInfo *pFVar9;
  UClass *pUVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  
  if ((param_1 != (AActor *)0x0) &&
     (pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr, pUVar3 != (UWN_CS_CharacterCore *)0x0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnPreDestroyComponent,
               this);
    TMulticastDelegateRegistration<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_PartsSystemControl>
              ((TMulticastDelegateRegistration<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
                *)&((this->CharacterCore).field0_0x0.DebugPtr)->OnPreDestroyComponent,
               (UDS_PartsSystemControl *)local_res10,(pmf_653ccc10)this);
    pUVar7 = UWN_CS_CharacterCore::GetSoul((this->CharacterCore).field0_0x0.DebugPtr);
    pFVar8 = UWN_CS_CharacterCore::GetSoulInfo((this->CharacterCore).field0_0x0.DebugPtr);
    if ((pUVar7 != (UWN_CS_CharacterSoul *)0x0) &&
       (((pUVar4 = (pUVar7->Component).field0_0x0.DebugPtr, pUVar4 != (USkeletalMeshComponent *)0x0
         && (pFVar8 != (FWN_CS_CharacterSoulInfo *)0x0)) && (pFVar8->bIsHidden == true)))) {
      WN_RegisterHiddenPrimitive((UPrimitiveComponent *)pUVar4,false);
    }
    pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr;
    pFVar11 = (pUVar3->Parts).AllocatorInstance.Data;
    iVar2 = (pUVar3->Parts).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar3->Parts).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UWN_CS_CharacterPart>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar1) break;
      pUVar5 = *(UObject **)pFVar11;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UObject *)0x0) goto LAB_14bc313b1;
LAB_14bc3140c:
        pFVar11 = pFVar11 + 8;
      }
      else {
        if (pUVar5 == (UObject *)0x0) goto LAB_14bc3140c;
        UE::GC::MarkAsReachable(pUVar5);
LAB_14bc313b1:
        if (((*(longlong *)&pUVar5[1].field_0x10 == 0) ||
            (pFVar9 = UWN_CS_CharacterCore::GetPartInfo
                                ((this->CharacterCore).field0_0x0.DebugPtr,
                                 *(EWN_CS_CharacterSlotName *)(pUVar5 + 1),false),
            pFVar9 == (FWN_CS_CharacterPartInfo *)0x0)) || (pFVar9->bIsHidden != true))
        goto LAB_14bc3140c;
        if (*(longlong *)&pUVar5[1].field_0x10 == 0) {
LAB_14bc31403:
          WN_RegisterHiddenPrimitive((UPrimitiveComponent *)0x0,false);
          goto LAB_14bc3140c;
        }
        pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&pUVar5[1].field_0x10,pUVar10);
        if (!bVar6) goto LAB_14bc31403;
        WN_RegisterHiddenPrimitive(*(UPrimitiveComponent **)&pUVar5[1].field_0x10,false);
        pFVar11 = pFVar11 + 8;
      }
    }
  }
  return;
}

// CheckValidFootStepProvider @ 14bc32110

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

bool __thiscall
UDS_PartsSystemControl::CheckValidFootStepProvider(UDS_PartsSystemControl *this,FName *param_1)

{
  bool bVar1;
  int iVar2;
  FName *pFVar3;
  FName local_res10 [3];
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)(param_1->ComparisonIndex).Value);
  if (bVar1) {
    pFVar3 = ::FName::FName(local_res10,L"None");
    iVar2 = ::FName::Compare(param_1,pFVar3);
    return iVar2 != 0;
  }
  return false;
}

// CheckValidkWorkspace @ 14bc32160

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

bool __thiscall
UDS_PartsSystemControl::CheckValidkWorkspace
          (UDS_PartsSystemControl *this,UWN_CS_CharacterWorkspace *param_1)

{
  return true;
}

// Deinit @ 14bc38640

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

void __thiscall UDS_PartsSystemControl::Deinit(UDS_PartsSystemControl *this)

{
  UWN_CS_CharacterCore *pUVar1;
  
  CancelAsyncLoad(this);
  pUVar1 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_CS_CharacterCore *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2b8))();
    (this->CharacterCore).field0_0x0.DebugPtr = (UWN_CS_CharacterCore *)0x0;
  }
  return;
}

// DeinitializeCharacterCore @ 14bc38da0

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

void __thiscall UDS_PartsSystemControl::DeinitializeCharacterCore(UDS_PartsSystemControl *this)

{
  UWN_CS_CharacterCore *pUVar1;
  
  pUVar1 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_CS_CharacterCore *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bc38dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2b8))();
    return;
  }
  return;
}

// GetColliderComponents @ 14bc3fcc0

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

TArray<TWeakObjectPtr<UBoxComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_PartsSystemControl::GetColliderComponents
          (UDS_PartsSystemControl *this,
          TArray<TWeakObjectPtr<UBoxComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr *this_00;
  UWN_CS_CharacterCore *pUVar2;
  UObject *pUVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  UObject *local_res8;
  uint local_res10;
  FScriptContainerElement *local_res18;
  undefined8 *local_res20;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  void *local_88;
  undefined2 local_80;
  longlong *local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar2 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (pUVar2 != (UWN_CS_CharacterCore *)0x0) {
    local_res10 = (pUVar2->Parts).ArrayNum;
    uVar8 = (ulonglong)(int)local_res10;
    pFVar11 = (pUVar2->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar11 + uVar8 * 8;
    while( true ) {
      local_res18 = pFVar11;
      if ((pUVar2->Parts).ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<TObjectPtr<UWN_CS_CharacterPart>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar11 == pFVar1) break;
      pUVar3 = *(UObject **)pFVar11;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_14bc3fd63;
      }
      else if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
LAB_14bc3fd63:
        puVar9 = &pUVar3[5].field_0x18;
        TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  (&local_78,
                   (TSet<TTuple<EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
                    *)puVar9);
        plVar5 = local_78;
        local_80 = 0;
        stack0xffffffffffffff58 = local_68;
        auStack_b0._0_8_ = lStack_70;
        local_98 = local_58;
        uStack_94 = uStack_54;
        uStack_90 = uStack_50;
        uVar8 = local_68._8_8_ >> 0x20;
        local_88 = puVar9;
        if (local_68._12_4_ < *(int *)(local_68._0_8_ + 0x18)) {
          do {
            lVar13 = (longlong)(int)uVar8 * 0x20 + *plVar5;
            puVar10 = *(undefined8 **)(lVar13 + 8);
            iVar7 = *(int *)(lVar13 + 0x10);
            local_res20 = puVar10 + iVar7;
            while( true ) {
              puVar4 = local_res20;
              if (*(int *)(lVar13 + 0x10) != iVar7) {
                `TCheckedPointerIterator<TObjectPtr<UBoxComponent>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_res8);
              }
              if (puVar10 == puVar4) break;
              pUVar3 = (UObject *)*puVar10;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar3);
              }
              iVar6 = __return_storage_ptr__->ArrayNum;
              if (iVar6 == __return_storage_ptr__->ArrayMax) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar6 + 1;
              this_00 = (FWeakObjectPtr *)
                        ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8);
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if (pUVar3 != (UObject *)0x0) {
                  UE::GC::MarkAsReachable(pUVar3);
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar3 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar3);
                }
              }
              this_00->ObjectIndex = 0;
              this_00->ObjectSerialNumber = 0;
              local_res8 = pUVar3;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar3);
              }
              FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
              puVar10 = puVar10 + 1;
            }
            uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
            uVar8 = (ulonglong)uStack_9c;
          } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
          pFVar11 = local_res18;
          if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
            uVar12 = *(int *)((longlong)local_88 + 8) - *(int *)((longlong)local_88 + 0x34);
            if (uVar12 < 4) {
              iVar7 = 1;
            }
            else {
              uVar8 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
              lVar13 = 0x3f;
              if (uVar8 != 0) {
                for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar7 = 1 << ((byte)lVar13 & 0x1f);
            }
            if (((0 < (int)uVar12) && (*(int *)((longlong)local_88 + 0x48) < iVar7)) ||
               (iVar7 < *(int *)((longlong)local_88 + 0x48))) {
              *(int *)((longlong)local_88 + 0x48) = iVar7;
              TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
              ::Rehash(local_88);
              pFVar11 = local_res18;
            }
          }
        }
      }
      pFVar11 = pFVar11 + 8;
      uVar8 = (ulonglong)local_res10;
    }
  }
  return __return_storage_ptr__;
}

// GetHiddenComponentIds @ 14bc40e70

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

TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> * __thiscall
UDS_PartsSystemControl::GetHiddenComponentIds
          (UDS_PartsSystemControl *this,
          TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  undefined4 uVar1;
  int iVar2;
  UWN_CS_CharacterCore *pUVar3;
  USkeletalMeshComponent *pUVar4;
  UWN_CS_CharacterCore *this_00;
  USceneComponent *pUVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FWN_CS_CharacterSoulInfo *pFVar9;
  UWN_CS_CharacterSoul *pUVar10;
  UWN_CS_CharacterPart *pUVar11;
  UClass *pUVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr;
  if ((pUVar3 != (UWN_CS_CharacterCore *)0x0) &&
     (pFVar9 = UWN_CS_CharacterCore::GetSoulInfo(pUVar3), pFVar9 != (FWN_CS_CharacterSoulInfo *)0x0)
     ) {
    if ((pFVar9->bIsHidden == param_1) &&
       (((pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr, pUVar3 != (UWN_CS_CharacterCore *)0x0
         && (pUVar10 = UWN_CS_CharacterCore::GetSoul(pUVar3), pUVar10 != (UWN_CS_CharacterSoul *)0x0
            )) && (pUVar4 = (pUVar10->Component).field0_0x0.DebugPtr,
                  pUVar4 != (USkeletalMeshComponent *)0x0)))) {
      iVar7 = __return_storage_ptr__->ArrayNum;
      uVar1 = *(undefined4 *)((longlong)&pUVar4->_padding_ + 4);
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           uVar1;
    }
    pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr;
    iVar7 = (pUVar3->PartInfos).ArrayNum;
    pFVar13 = (pUVar3->PartInfos).AllocatorInstance.Data;
    pFVar14 = pFVar13 + (longlong)iVar7 * 0x88;
    while( true ) {
      if ((pUVar3->PartInfos).ArrayNum != iVar7) {
        `TCheckedPointerIterator<FWN_CS_CharacterPartInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar14) break;
      if (((pFVar13[1] == (FScriptContainerElement)param_1) &&
          (this_00 = (this->CharacterCore).field0_0x0.DebugPtr,
          this_00 != (UWN_CS_CharacterCore *)0x0)) &&
         ((pUVar11 = UWN_CS_CharacterCore::GetPartMutable
                               (this_00,(EWN_CS_CharacterSlotName)pFVar13[8],false),
          pUVar11 != (UWN_CS_CharacterPart *)0x0 &&
          ((pUVar11->Component).field0_0x0.DebugPtr != (USceneComponent *)0x0)))) {
        pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&pUVar11->Component,pUVar12);
        if ((bVar6) &&
           (pUVar5 = (pUVar11->Component).field0_0x0.DebugPtr, pUVar5 != (USceneComponent *)0x0)) {
          iVar8 = __return_storage_ptr__->ArrayNum;
          iVar2 = pUVar5[1].AttachChildren.ArrayMax;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) = iVar2;
        }
      }
      pFVar13 = pFVar13 + 0x88;
    }
  }
  return __return_storage_ptr__;
}

// GetHitSphereComponents @ 14bc413c0

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

TArray<TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_PartsSystemControl::GetHitSphereComponents
          (UDS_PartsSystemControl *this,
          TArray<TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr *this_00;
  UWN_CS_CharacterCore *pUVar2;
  UObject *pUVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  UObject *local_res8;
  uint local_res10;
  FScriptContainerElement *local_res18;
  undefined8 *local_res20;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  void *local_88;
  undefined2 local_80;
  longlong *local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar2 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (pUVar2 != (UWN_CS_CharacterCore *)0x0) {
    local_res10 = (pUVar2->Parts).ArrayNum;
    uVar8 = (ulonglong)(int)local_res10;
    pFVar11 = (pUVar2->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar11 + uVar8 * 8;
    while( true ) {
      local_res18 = pFVar11;
      if ((pUVar2->Parts).ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<TObjectPtr<UWN_CS_CharacterPart>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar11 == pFVar1) break;
      pUVar3 = *(UObject **)pFVar11;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14bc41458:
        if (pUVar3 != (UObject *)0x0) {
          puVar9 = &pUVar3[1].field_0x18;
          TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    (&local_78,
                     (TSet<TTuple<EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
                      *)puVar9);
          plVar5 = local_78;
          local_80 = 0;
          stack0xffffffffffffff58 = local_68;
          auStack_b0._0_8_ = lStack_70;
          local_98 = local_58;
          uStack_94 = uStack_54;
          uStack_90 = uStack_50;
          uVar8 = local_68._8_8_ >> 0x20;
          local_88 = puVar9;
          if (local_68._12_4_ < *(int *)(local_68._0_8_ + 0x18)) {
            do {
              lVar13 = (longlong)(int)uVar8 * 0x20 + *plVar5;
              puVar10 = *(undefined8 **)(lVar13 + 8);
              iVar7 = *(int *)(lVar13 + 0x10);
              local_res20 = puVar10 + iVar7;
              while( true ) {
                puVar4 = local_res20;
                if (*(int *)(lVar13 + 0x10) != iVar7) {
                  `TCheckedPointerIterator<TObjectPtr<USphereComponent>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_res8);
                }
                if (puVar10 == puVar4) break;
                pUVar3 = (UObject *)*puVar10;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar3 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar3);
                }
                iVar6 = __return_storage_ptr__->ArrayNum;
                if (iVar6 == __return_storage_ptr__->ArrayMax) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar6 + 1;
                this_00 = (FWeakObjectPtr *)
                          ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8);
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  if (pUVar3 != (UObject *)0x0) {
                    UE::GC::MarkAsReachable(pUVar3);
                  }
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar3 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar3);
                  }
                }
                this_00->ObjectIndex = 0;
                this_00->ObjectSerialNumber = 0;
                local_res8 = pUVar3;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar3 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar3);
                }
                FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
                puVar10 = puVar10 + 1;
              }
              uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
              uVar8 = (ulonglong)uStack_9c;
            } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
            pFVar11 = local_res18;
            if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
              uVar12 = *(int *)((longlong)local_88 + 8) - *(int *)((longlong)local_88 + 0x34);
              if (uVar12 < 4) {
                iVar7 = 1;
              }
              else {
                uVar8 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
                lVar13 = 0x3f;
                if (uVar8 != 0) {
                  for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                iVar7 = 1 << ((byte)lVar13 & 0x1f);
              }
              if (((0 < (int)uVar12) && (*(int *)((longlong)local_88 + 0x48) < iVar7)) ||
                 (iVar7 < *(int *)((longlong)local_88 + 0x48))) {
                *(int *)((longlong)local_88 + 0x48) = iVar7;
                TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
                ::Rehash(local_88);
                pFVar11 = local_res18;
              }
            }
          }
        }
      }
      else if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
        goto LAB_14bc41458;
      }
      pFVar11 = pFVar11 + 8;
      uVar8 = (ulonglong)local_res10;
    }
  }
  return __return_storage_ptr__;
}

// GetPartsSkeletalMesh @ 14bc430e0

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

USkeletalMeshComponent * __thiscall
UDS_PartsSystemControl::GetPartsSkeletalMesh
          (UDS_PartsSystemControl *this,EWN_CS_CharacterSlotName param_1)

{
  UWN_CS_CharacterCore *this_00;
  bool bVar1;
  UWN_CS_CharacterPart *pUVar2;
  UClass *pUVar3;
  
  this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (this_00 != (UWN_CS_CharacterCore *)0x0) {
    pUVar2 = UWN_CS_CharacterCore::GetPartMutable(this_00,param_1,false);
    if (pUVar2 != (UWN_CS_CharacterPart *)0x0) {
      if ((pUVar2->Component).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
        pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&pUVar2->Component,pUVar3);
        if (bVar1) {
          return (USkeletalMeshComponent *)(pUVar2->Component).field0_0x0.DebugPtr;
        }
      }
      return (USkeletalMeshComponent *)0x0;
    }
  }
  return (USkeletalMeshComponent *)0x0;
}

// GetSoulSkeletalMesh @ 14bc44280

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
UDS_PartsSystemControl::GetSoulSkeletalMesh(UDS_PartsSystemControl *this)

{
  UWN_CS_CharacterCore *this_00;
  UWN_CS_CharacterSoul *pUVar1;
  
  this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (this_00 != (UWN_CS_CharacterCore *)0x0) {
    pUVar1 = UWN_CS_CharacterCore::GetSoul(this_00);
    if (pUVar1 != (UWN_CS_CharacterSoul *)0x0) {
      return (pUVar1->Component).field0_0x0.DebugPtr;
    }
  }
  return (USkeletalMeshComponent *)0x0;
}

// GetSoulSocketLocation @ 14bc442b0

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

TVector<double> * __thiscall
UDS_PartsSystemControl::GetSoulSocketLocation
          (UDS_PartsSystemControl *this,TVector<double> *__return_storage_ptr__,FName param_1)

{
  UWN_CS_CharacterCore *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  UWN_CS_CharacterSoul *pUVar4;
  TVector<double> *pTVar5;
  UObject *pUVar6;
  USkeletalMeshComponent *pUVar7;
  FWeakObjectPtr local_res8;
  USkeletalMeshComponent *local_res20;
  double local_28;
  double dStack_20;
  double local_18;
  
  this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (this_00 == (UWN_CS_CharacterCore *)0x0) {
    pUVar7 = (USkeletalMeshComponent *)0x0;
  }
  else {
    pUVar4 = UWN_CS_CharacterCore::GetSoul(this_00);
    if (pUVar4 == (UWN_CS_CharacterSoul *)0x0) {
      pUVar7 = (USkeletalMeshComponent *)0x0;
    }
    else {
      pUVar7 = (pUVar4->Component).field0_0x0.DebugPtr;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_240248075262623417>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                       ,0x147,"skeletal.IsValid()");
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res8);
  (**(code **)(*(longlong *)pUVar6 + 0x528))(pUVar6,&local_28,param_1);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetWorkSpaceResources @ 14bc44c60

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

void __thiscall
UDS_PartsSystemControl::GetWorkSpaceResources
          (UDS_PartsSystemControl *this,UWN_CS_CharacterWorkspace *param_1,
          FDS_ResourcePresetTableRow *param_2,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  FDS_ResourceAbpTableRow *pFVar8;
  size_t _Size;
  ForAnyElementType FVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FWN_CS_CharacterPartInfo *pFVar12;
  undefined1 auStackY_498 [32];
  undefined1 local_448 [8];
  TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> local_440;
  undefined1 local_428 [16];
  FSoftObjectPath local_418;
  FSoftObjectPath local_3f8;
  EWN_CS_AnimationType local_3d8;
  EWN_CS_CharacterWorkspaceVersion local_3d4;
  FWN_CS_CharacterNonePartInfo local_3c8;
  FString local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_428[0] = true;
  local_428[1] = false;
  local_418.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_418.SubPathString.Data.ArrayNum = 0;
  local_418.SubPathString.Data.ArrayMax = 0;
  local_428._8_8_ = 0;
  local_418.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_418.AssetPath.AssetName.Number = 0;
  local_418.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_418.AssetPath.PackageName.Number = 0;
  local_428[2] = true;
  FUtf8String::Reset(&local_418.SubPathString,0);
  local_3f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_3f8.AssetPath.PackageName.Number = 0;
  local_3f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_3f8.AssetPath.AssetName.Number = 0;
  local_3f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f8.SubPathString.Data.ArrayNum = 0;
  local_3f8.SubPathString.Data.ArrayMax = 0;
  local_3d8 = AnimBP;
  local_3d4 = None;
  local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_440.ArrayNum = 0;
  local_440.ArrayMax = 0;
  local_3c8.LightInfoArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.LightInfoArray.ArrayNum = 0;
  local_3c8.LightInfoArray.ArrayMax = 0;
  bVar4 = UWN_CS_CharacterWorkspace::FillInfosByPreset
                    (param_1,param_2->CharacterID,param_2->PresetID,
                     (FWN_CS_CharacterSoulInfo *)local_428,&local_440,&local_3c8);
  if (bVar4) {
    if ((local_418.AssetPath.PackageName != (FName)0x0) && (local_440.ArrayNum != 0)) {
      if ((this->bUseAni == true) && (0 < param_2->ID_AbpLink)) {
        pFVar8 = FDS_ResourcePresetTableRow::ID_AbpLinkTable(param_2);
        FSoftObjectPath::operator=(&local_3f8,&pFVar8->AbpPath);
        local_3d8 = AnimBP;
      }
      uVar10 = local_440.ArrayNum + 1;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      piVar1 = &param_3->ArrayMax;
      if (param_3->ArrayMax < (int)uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar10,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar5 + 1;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x20),
                 &local_418);
      iVar5 = param_3->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_3->AllocatorInstance,piVar1);
      }
      FVar9.Data = local_3f8.SubPathString.Data.AllocatorInstance.Data;
      param_3->ArrayNum = iVar5 + 1;
      pFVar11 = (param_3->AllocatorInstance).Data;
      pFVar2 = (FName *)(pFVar11 + (longlong)iVar5 * 0x20);
      *pFVar2 = local_3f8.AssetPath.PackageName;
      pFVar2[1] = local_3f8.AssetPath.AssetName;
      pFVar11 = pFVar11 + (longlong)iVar5 * 0x20 + 0x10;
      *(undefined8 *)&pFVar11->field_0x0 = 0;
      _Size = (size_t)local_3f8.SubPathString.Data.ArrayNum;
      *(int *)&pFVar11[8].field_0x0 = local_3f8.SubPathString.Data.ArrayNum;
      if (local_3f8.SubPathString.Data.ArrayNum == 0) {
        *(int *)(pFVar11 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_3f8.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,
                   local_3f8.SubPathString.Data.ArrayNum,(int *)(pFVar11 + 0xc));
        memcpy(*(void **)&pFVar11->field_0x0,FVar9.Data,_Size);
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar5 + 1;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x20),
                 &local_418);
      iVar5 = local_440.ArrayNum;
      pFVar12 = (FWN_CS_CharacterPartInfo *)
                (local_440.AllocatorInstance.Data + (longlong)local_440.ArrayNum * 0x88);
      FVar9.Data = local_440.AllocatorInstance.Data;
      while( true ) {
        if (local_440.ArrayNum != iVar5) {
          `TCheckedPointerIterator<FWN_CS_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_448);
        }
        if ((FWN_CS_CharacterPartInfo *)FVar9.Data == pFVar12) break;
        iVar6 = param_3->ArrayNum;
        if (iVar6 == param_3->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_3->AllocatorInstance,piVar1);
        }
        param_3->ArrayNum = iVar6 + 1;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x20),
                   &((FWN_CS_CharacterPartInfo *)FVar9.Data)->ResourcePath);
        FVar9.Data = FVar9.Data + 0x88;
      }
      goto LAB_14bc45105;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_240248075262623360>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                       ,0x180,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_PartsSystemControl::GetWorkSpaceResources",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_288.Ptr,0x181,
                 L"Invalid SkeletalMesh or empty partinfo: ID(%d), CharacterID(%d), PresetID(%d)");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14bc45105;
    pUVar7 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(&local_418,&local_3b8);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_PartsSystemControl::GetWorkSpaceResources",0x2d,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_168.Ptr,0x182,L"Invalid SkeletalMesh Path: (%s)");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_240248075262623368>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                       ,0x178,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14bc45105;
    pUVar7 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_PartsSystemControl::GetWorkSpaceResources",0x2d,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Error,local_3a8.Ptr,0x179,
               L"Invalid Preset: ID(%d), CharacterID(%d), PresetID(%d) ");
    local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_3a8._padding_;
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
LAB_14bc45105:
  if (local_3c8.LightInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.LightInfoArray.AllocatorInstance.Data);
  }
  DestructItems<FWN_CS_CharacterPartInfo,int>
            ((FWN_CS_CharacterPartInfo *)local_440.AllocatorInstance.Data,local_440.ArrayNum);
  if ((FWN_CS_CharacterPartInfo *)local_440.AllocatorInstance.Data !=
      (FWN_CS_CharacterPartInfo *)0x0) {
    FMemory::Free(local_440.AllocatorInstance.Data);
  }
  if (local_3f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_418.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// Init @ 14bc474d0

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

bool __thiscall
UDS_PartsSystemControl::Init
          (UDS_PartsSystemControl *this,UWN_CS_CharacterCore *param_1,bool param_2)

{
  UWN_CS_CharacterCore *pUVar1;
  
  CancelAsyncLoad(this);
  pUVar1 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_CS_CharacterCore *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2b8))();
    (this->CharacterCore).field0_0x0.DebugPtr = (UWN_CS_CharacterCore *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UWN_CS_CharacterCore *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CharacterCore).field0_0x0.DebugPtr = param_1;
  this->UseOutGameWorkspace = param_2;
  return true;
}

// IsExistPart @ 14bc4a7f0

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

bool __thiscall
UDS_PartsSystemControl::IsExistPart(UDS_PartsSystemControl *this,EWN_CS_CharacterSlotName param_1)

{
  UWN_CS_CharacterCore *this_00;
  UWN_CS_CharacterPart *pUVar1;
  
  this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (this_00 != (UWN_CS_CharacterCore *)0x0) {
    pUVar1 = UWN_CS_CharacterCore::GetPart(this_00,param_1,false);
    return pUVar1 != (UWN_CS_CharacterPart *)0x0;
  }
  return false;
}

// IsInited @ 14bc4ad50

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

bool __thiscall UDS_PartsSystemControl::IsInited(UDS_PartsSystemControl *this)

{
  return (this->CharacterCore).field0_0x0.DebugPtr != (UWN_CS_CharacterCore *)0x0;
}

// IsValid @ 14bc4bc90

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

bool __thiscall UDS_PartsSystemControl::IsValid(UDS_PartsSystemControl *this)

{
  UWN_CS_CharacterCore *this_00;
  UWN_CS_CharacterSoul *pUVar1;
  
  this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (this_00 != (UWN_CS_CharacterCore *)0x0) {
    pUVar1 = UWN_CS_CharacterCore::GetSoul(this_00);
    return pUVar1 != (UWN_CS_CharacterSoul *)0x0;
  }
  return false;
}

// Mount @ 14bc4c0e0

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

void __thiscall UDS_PartsSystemControl::Mount(UDS_PartsSystemControl *this)

{
  UWN_CS_CharacterCore *pUVar1;
  
  pUVar1 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_CS_CharacterCore *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bc4c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2d8))();
    return;
  }
  return;
}

// OnCharacterCoreResourceLoaded @ 14bc4e120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_PartsSystemControl::OnCharacterCoreResourceLoaded
          (UDS_PartsSystemControl *this,AActor *param_1,FDS_ResourcePresetTableRow *param_2,
          FWN_EndOfRefs *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWN_CS_CharacterCore *pUVar3;
  USkeletalMeshComponent *this_00;
  UPrimitiveComponent *this_01;
  USceneComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  FUObjectItem *pFVar11;
  FDS_ResourceAbpTableRow *pFVar12;
  UWN_CS_CharacterSoul *pUVar13;
  UClass *pUVar14;
  UWN_CS_CharacterPart *pUVar15;
  void **ppvVar16;
  atomic<unsigned_char> *paVar17;
  ulonglong uVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  EWN_CS_CharacterSlotName local_res8 [8];
  undefined1 local_198 [8];
  TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> local_190;
  void *local_180;
  void *local_178;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_170;
  FWN_CS_CharacterNonePartInfo local_160;
  undefined1 local_148 [8];
  FWeakObjectPtr local_140;
  FSoftObjectPath local_138;
  FSoftObjectPath local_118;
  EWN_CS_AnimationType local_f8;
  EWN_CS_CharacterWorkspaceVersion local_f4;
  undefined8 local_e8;
  TPairInitializer<EWN_CS_CharacterSlotName_const_&,FDS_PartsDefaultMaterialInfo_&> local_e0;
  undefined8 local_d0;
  FSharedReferencer<1> FStack_c8;
  EWN_CS_CharacterSlotName *local_c0;
  void **local_b8;
  void *local_b0 [3];
  TVector<double>_u_0 local_98;
  TRotator<double> local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double local_40;
  double dStack_38;
  undefined8 local_30;
  UObject *pUVar21;
  
  if (this->bIsCanceled != false) goto LAB_14bc4e730;
  pUVar21 = (UObject *)0x0;
  local_d0 = 0;
  FStack_c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AsyncLoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_d0) {
    (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncLoadHandle).SharedReferenceCount,&FStack_c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.ReferenceController);
  if ((this->CharacterCore).field0_0x0.DebugPtr == (UWN_CS_CharacterCore *)0x0) {
    pcVar8 = "CharacterCore";
    iVar7 = 0x413;
    paVar17 = &bGEnsureHasExecuted<_240248075262622701>;
  }
  else {
    if ((this->CurWorkspace).field0_0x0.DebugPtr != (UWN_CS_CharacterWorkspace *)0x0) {
      local_148[0] = true;
      local_148[1] = false;
      local_138.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_138.AssetPath.AssetName.Number = 0;
      local_138.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_138.AssetPath.PackageName.Number = 0;
      local_148[2] = true;
      local_138.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.SubPathString.Data.ArrayNum = 0;
      local_138.SubPathString.Data.ArrayMax = 0;
      local_140.ObjectIndex = 0;
      local_140.ObjectSerialNumber = 0;
      local_e8 = 0;
      FUtf8String::Reset(&local_138.SubPathString,0);
      local_118.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_118.AssetPath.PackageName.Number = 0;
      local_118.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_118.AssetPath.AssetName.Number = 0;
      local_118.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.SubPathString.Data.ArrayNum = 0;
      local_118.SubPathString.Data.ArrayMax = 0;
      local_f8 = AnimBP;
      local_f4 = None;
      local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.ArrayNum = 0;
      local_190.ArrayMax = 0;
      local_160.LightInfoArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.LightInfoArray.ArrayNum = 0;
      local_160.LightInfoArray.ArrayMax = 0;
      bVar6 = UWN_CS_CharacterWorkspace::FillInfosByPreset
                        ((this->CurWorkspace).field0_0x0.DebugPtr,param_2->CharacterID,
                         param_2->PresetID,(FWN_CS_CharacterSoulInfo *)local_148,&local_190,
                         &local_160);
      if (!bVar6) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_240248075262622685>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                           ,0x423,"false");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_160.LightInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.LightInfoArray.AllocatorInstance.Data);
        }
        DestructItems<FWN_CS_CharacterPartInfo,int>
                  ((FWN_CS_CharacterPartInfo *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
        if ((FWN_CS_CharacterPartInfo *)local_190.AllocatorInstance.Data !=
            (FWN_CS_CharacterPartInfo *)0x0) {
          FMemory::Free(local_190.AllocatorInstance.Data);
        }
        if (local_118.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_138.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_14bc4e730;
      }
      SetFootStepProvider(this,(this->CurWorkspace).field0_0x0.DebugPtr,param_2->CharacterID,
                          param_2->PresetID);
      pUVar9 = FWeakObjectPtr::Get(&local_140);
      if (pUVar9 == (UObject *)0x0) {
        pUVar9 = (UObject *)0x0;
        if (local_138.AssetPath.PackageName != (FName)0x0) {
          pUVar10 = FSoftObjectPath::ResolveObject(&local_138);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar10);
          }
          bVar6 = (*IsInAsyncLoadingThread)();
          if (((bVar6) && (pUVar10 != (UObject *)0x0)) &&
             (pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar10->field_0xc),
             ((pFVar11->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14bc4e39a:
            if ((*(uint *)&pUVar10->field_0x8 >> 0x1e & 1) != 0) goto LAB_14bc4e3a8;
            bVar6 = true;
          }
          else {
            local_e0.Value = (FDS_PartsDefaultMaterialInfo *)pUVar10;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar10);
            }
            FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_e0.Value);
            if (pUVar10 != (UObject *)0x0) goto LAB_14bc4e39a;
LAB_14bc4e3a8:
            bVar6 = false;
          }
          pUVar9 = pUVar21;
          if (bVar6) {
            pUVar9 = pUVar10;
          }
        }
        if (pUVar9 != (UObject *)0x0) goto LAB_14bc4e3bc;
LAB_14bc4e6ab:
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_240248075262622677>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                           ,0x42b,"false");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
LAB_14bc4e3bc:
        if (local_190.ArrayNum == 0) goto LAB_14bc4e6ab;
        if ((this->bUseAni == true) && (0 < param_2->ID_AbpLink)) {
          pFVar12 = FDS_ResourcePresetTableRow::ID_AbpLinkTable(param_2);
          FSoftObjectPath::operator=(&local_118,&pFVar12->AbpPath);
          local_f8 = AnimBP;
        }
        (**(code **)(((this->CharacterCore).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
        pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr;
        (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,param_1);
        pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr;
        (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,&local_190);
        pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr;
        (**(code **)(pUVar3->_padding_ + 0x2d0))(pUVar3,&local_160);
        CharacterCorePostSetInfos(this,param_1);
        pUVar13 = UWN_CS_CharacterCore::GetSoul((this->CharacterCore).field0_0x0.DebugPtr);
        if ((pUVar13 != (UWN_CS_CharacterSoul *)0x0) &&
           (this_00 = (pUVar13->Component).field0_0x0.DebugPtr,
           this_00 != (USkeletalMeshComponent *)0x0)) {
          if (this->ApplyCapsuleHeight != false) {
            local_98._s_0.X = 0.0;
            local_98._s_0.Y = 0.0;
            local_98._s_0.Z =
                 (double)(float)((uint)param_2->CapsuleHalfHeight ^
                                __xmm_80000000800000008000000080000000);
            local_58 = 0;
            uStack_50 = 0;
            local_48 = local_98._s_0.Z;
            USceneComponent::SetRelativeLocation
                      ((USceneComponent *)this_00,(TVector<double> *)&local_98._s_0,false,
                       (FHitResult *)0x0,None);
          }
          local_30 = 0;
          local_78.Pitch = ___xmm_c0568000000000000000000000000000;
          local_78.Yaw = _UNK_152242e68;
          local_40 = ___xmm_c0568000000000000000000000000000;
          dStack_38 = _UNK_152242e68;
          local_78.Roll = 0.0;
          USceneComponent::SetRelativeRotation
                    ((USceneComponent *)(pUVar13->Component).field0_0x0.DebugPtr,&local_78,false,
                     (FHitResult *)0x0,None);
        }
        local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_170.ArrayNum = 0;
        local_170.ArrayMax = 0;
        AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>
                  (param_1,&local_170,false);
        iVar7 = local_170.ArrayNum;
        uVar18 = (ulonglong)local_170.ArrayNum;
        pFVar1 = local_170.AllocatorInstance.Data + uVar18 * 8;
        FVar20.Data = local_170.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar18 != iVar7) {
            `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_198);
          }
          if (FVar20.Data == pFVar1) break;
          this_01 = *(UPrimitiveComponent **)FVar20.Data;
          UPrimitiveComponent::SetReceivesDecals(this_01,false);
          if (this_01 != (UPrimitiveComponent *)0x0) {
            pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            iVar2 = (int)pUVar14->_padding_;
            if ((iVar2 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar14->_padding_)) {
              UPrimitiveComponent::SetCastContactShadow(this_01,false);
            }
          }
          uVar18 = local_170._8_8_ & 0xffffffff;
          FVar20.Data = FVar20.Data + 8;
        }
        TSet<TTuple<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>,FDefaultSetAllocator>
        ::Reset(&this->PartsDefaultMaterialInfoMap);
        do {
          local_res8[0] = (EWN_CS_CharacterSlotName)pUVar21;
          pUVar15 = UWN_CS_CharacterCore::GetPart
                              ((this->CharacterCore).field0_0x0.DebugPtr,local_res8[0],false);
          if ((pUVar15 != (UWN_CS_CharacterPart *)0x0) &&
             ((pUVar15->Component).field0_0x0.DebugPtr != (USceneComponent *)0x0)) {
            pUVar14 = Z_Construct_UClass_UMeshComponent_NoRegister();
            bVar6 = FObjectPtr::IsA((FObjectPtr *)&pUVar15->Component,pUVar14);
            if ((bVar6) &&
               ((pUVar4 = (pUVar15->Component).field0_0x0.DebugPtr, pUVar4 != (USceneComponent *)0x0
                && (iVar7 = (**(code **)(pUVar4->_padding_ + 0x810))(pUVar4), iVar7 != 0)))) {
              local_180 = (void *)0x0;
              local_178 = (void *)0x0;
              ppvVar16 = (void **)(**(code **)(pUVar4->_padding_ + 0xa90))(pUVar4,local_b0);
              if (&local_180 != ppvVar16) {
                if (local_180 != (void *)0x0) {
                  FMemory::Free(local_180);
                }
                local_180 = *ppvVar16;
                *ppvVar16 = (void *)0x0;
                local_178 = ppvVar16[1];
                ppvVar16[1] = (void *)0x0;
              }
              if (local_b0[0] != (void *)0x0) {
                FMemory::Free(local_b0[0]);
              }
              local_c0 = local_res8;
              local_b8 = &local_180;
              TSet<TTuple<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FDS_PartsDefaultMaterialInfo_&>_>
                        (&this->PartsDefaultMaterialInfoMap,&local_e0,(bool *)&local_c0);
              if (local_180 != (void *)0x0) {
                FMemory::Free(local_180);
              }
            }
          }
          uVar19 = (int)pUVar21 + 1;
          pUVar21 = (UObject *)(ulonglong)uVar19;
        } while ((int)uVar19 < 0x2f);
        if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.AllocatorInstance.Data);
        }
      }
      if (local_160.LightInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.LightInfoArray.AllocatorInstance.Data);
      }
      DestructItems<FWN_CS_CharacterPartInfo,int>
                ((FWN_CS_CharacterPartInfo *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
      if ((FWN_CS_CharacterPartInfo *)local_190.AllocatorInstance.Data !=
          (FWN_CS_CharacterPartInfo *)0x0) {
        FMemory::Free(local_190.AllocatorInstance.Data);
      }
      if (local_118.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_138.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.SubPathString.Data.AllocatorInstance.Data);
      }
      goto LAB_14bc4e730;
    }
    pcVar8 = "false";
    iVar7 = 0x41a;
    paVar17 = &bGEnsureHasExecuted<_240248075262622694>;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar17,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                     ,iVar7,pcVar8);
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14bc4e730:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnCharacterCoreResourceLoadedForPreload @ 14bc4e760

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
UDS_PartsSystemControl::OnCharacterCoreResourceLoadedForPreload
          (UDS_PartsSystemControl *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1
          ,FWN_EndOfRefs *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UObject *pUVar5;
  FSoftObjectPath *this_00;
  FSoftObjectPath *pFVar6;
  undefined1 local_res8 [8];
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  if (this->bIsCanceled == false) {
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->AsyncLoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_38) {
      (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    iVar2 = param_1->ArrayNum;
    this_00 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
    pFVar6 = this_00 + iVar2;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar6) break;
      pUVar5 = FSoftObjectPath::ResolveObject(this_00);
      if (pUVar5 != (UObject *)0x0) {
        iVar4 = (this->PreLoadedResources).ArrayNum;
        piVar1 = &(this->PreLoadedResources).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->PreLoadedResources).AllocatorInstance,piVar1);
        }
        (this->PreLoadedResources).ArrayNum = iVar4 + 1;
        *(UObject **)((this->PreLoadedResources).AllocatorInstance.Data + (longlong)iVar4 * 8) =
             pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
      }
      this_00 = this_00 + 1;
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  }
  else {
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnPreDestroyComponent @ 14bc51a10

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
UDS_PartsSystemControl::OnPreDestroyComponent
          (UDS_PartsSystemControl *this,TObjectPtr<UWN_CS_CharacterCore> param_1,
          USceneComponent *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (((this->CharacterCore).field0_0x0.DebugPtr != (UWN_CS_CharacterCore *)0x0) &&
     (param_2 != (USceneComponent *)0x0)) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      WN_UnregisterHiddenPrimitive((UPrimitiveComponent *)param_2,false);
      return;
    }
  }
  return;
}

// OnWorkspaceLoaded @ 14bc542f0

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
UDS_PartsSystemControl::OnWorkspaceLoaded
          (UDS_PartsSystemControl *this,AActor *param_1,FDS_ResourcePresetTableRow *param_2,
          FWN_EndOfRefs *param_3)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UWN_CS_CharacterWorkspace *pUVar6;
  UClass *pUVar7;
  UAssetManager *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TSharedPtr<FStreamableHandle,1> *pTVar11;
  UDS_PartsSystemControl *local_res8;
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_b0 [24];
  TSharedPtr<FStreamableHandle,1> local_98;
  FString local_88;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  TSharedPtr<FStreamableHandle,1> local_58;
  source_location local_48;
  
  if (this->bIsCanceled == false) {
    pTVar1 = &this->AsyncLoadHandle;
    local_98.Object = (FStreamableHandle *)0x0;
    local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != &local_98) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle).SharedReferenceCount,&local_98.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    pUVar6 = (UWN_CS_CharacterWorkspace *)FSoftObjectPath::ResolveObject(&param_2->WorkSpacePath);
    if (pUVar6 != (UWN_CS_CharacterWorkspace *)0x0) {
      pUVar7 = Z_Construct_UClass_UWN_CS_CharacterWorkspace_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar7->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        (this->CurWorkspace).field0_0x0.DebugPtr = pUVar6;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        GetWorkSpaceResources(this,pUVar6,param_2,&local_c0);
        this->bIsCanceled = false;
        pUVar8 = UAssetManager::Get();
        local_b0._0_4_ = 0x407;
        local_b0._4_4_ = 0x3a;
        local_b0._16_8_ =
             "void __cdecl UDS_PartsSystemControl::OnWorkspaceLoaded(class AActor *,const struct FDS_ResourcePresetTableRow *,class FWN_EndOfRefs)"
        ;
        local_b0._8_8_ =
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
        ;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_d8 = (undefined1  [8])0x0;
        local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_d0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                   (FWriteAccessScope *)&local_78);
        local_60 = &local_d0;
        puVar9 = UE::Core::Private::DelegateAllocate(0x40,&local_d0);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVAActor__PEBUFDS_ResourcePresetTableRow__VFWN_EndOfRefs____6B_
          ;
          puVar9[1] = param_1;
          puVar9[2] = param_2;
          puVar9[3] = (param_3->TaskCaller).Object;
          pTVar3 = (param_3->TaskCaller).SharedReferenceCount.ReferenceController;
          puVar9[4] = pTVar3;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[5] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PartsSystemControl____A6AXXZUFDefaultDelegateUserPolicy__PEAVAActor__PEBUFDS_ResourcePresetTableRow__VFWN_EndOfRefs____6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[6] = 0;
          local_res8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 6),(FObjectPtr)&local_res8);
          puVar9[7] = OnCharacterCoreResourceLoaded;
        }
        if (local_78.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
        }
        local_48._Column = local_b0._4_4_;
        local_48._Line = local_b0._0_4_;
        local_48._File = (char *)local_b0._8_8_;
        local_48._Function = (char *)local_b0._16_8_;
        pTVar11 = FStreamableManager::
                  RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                            (&pUVar8->StreamableManager,&local_58,&local_c0,
                             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_d8,0,
                             false,false,&local_88,(FSourceLocation *)&local_48);
        if (pTVar1 != pTVar11) {
          pTVar1->Object = pTVar11->Object;
          pTVar11->Object = (FStreamableHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->AsyncLoadHandle).SharedReferenceCount,&pTVar11->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                   (FWriteAccessScope *)local_b0);
        if ((local_d0.DelegateSize != 0) &&
           (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_d0,0,0,0x10);
          local_d0.DelegateSize = 0;
        }
        if (local_b0[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0
                    );
        }
        if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_d0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_d8);
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
        if ((FSoftObjectPath *)local_c0.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
        goto LAB_14bc5460a;
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_240248075262622729>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                       ,0x3f7,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_14bc5460a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnWorkspaceLoadedForPreload @ 14bc54630

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
UDS_PartsSystemControl::OnWorkspaceLoadedForPreload
          (UDS_PartsSystemControl *this,FDS_ResourcePresetTableRow *param_1,FWN_EndOfRefs *param_2)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UWN_CS_CharacterWorkspace *pUVar7;
  UClass *pUVar8;
  UAssetManager *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedPtr<FStreamableHandle,1> *pTVar12;
  UDS_PartsSystemControl *local_res8;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  undefined1 local_c0 [24];
  TSharedPtr<FStreamableHandle,1> local_a8;
  FString local_98;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  TSharedPtr<FStreamableHandle,1> local_68;
  source_location local_58;
  
  if (this->bIsCanceled == false) {
    pTVar1 = &this->AsyncLoadHandle;
    local_a8.Object = (FStreamableHandle *)0x0;
    local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != &local_a8) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle).SharedReferenceCount,&local_a8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    pUVar7 = (UWN_CS_CharacterWorkspace *)FSoftObjectPath::ResolveObject(&param_1->WorkSpacePath);
    if (pUVar7 != (UWN_CS_CharacterWorkspace *)0x0) {
      pUVar8 = Z_Construct_UClass_UWN_CS_CharacterWorkspace_NoRegister();
      iVar3 = (int)pUVar8->_padding_;
      if ((iVar3 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar8->_padding_)) {
        local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.ArrayNum = 0;
        local_e8.ArrayMax = 0;
        GetWorkSpaceResources(this,pUVar7,param_1,&local_e8);
        this->bIsCanceled = false;
        if ((pTVar1->Object != (FStreamableHandle *)0x0) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_240248075262622570>,true,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                               ,0x496,"AsyncLoadHandle.IsValid() == false"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar9 = UAssetManager::Get();
        local_c0._0_4_ = 0x497;
        local_c0._4_4_ = 0x3a;
        local_c0._8_8_ =
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
        ;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0._16_8_ =
             "void __cdecl UDS_PartsSystemControl::OnWorkspaceLoadedForPreload(const struct FDS_ResourcePresetTableRow *,class FWN_EndOfRefs)"
        ;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        local_d8 = (undefined1  [8])0x0;
        local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_d0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                   (FWriteAccessScope *)&local_88);
        local_70 = &local_d0;
        puVar10 = UE::Core::Private::DelegateAllocate(0x40,&local_d0);
        if (puVar10 != (undefined8 *)0x0) {
          pFVar2 = (ForAnyElementType *)(puVar10 + 1);
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_____VFWN_EndOfRefs____6B_
          ;
          pFVar2->Data = (FScriptContainerElement *)0x0;
          iVar3 = local_e8.ArrayNum;
          local_res8 = (UDS_PartsSystemControl *)local_e8.AllocatorInstance.Data;
          *(int *)(puVar10 + 2) = local_e8.ArrayNum;
          if (local_e8.ArrayNum == 0) {
            *(int *)((longlong)puVar10 + 0x14) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,local_e8.ArrayNum,0,pFVar2,local_e8.ArrayNum,
                       (int *)((longlong)puVar10 + 0x14));
            ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                      (pFVar2->Data,(FSoftObjectPath *)local_res8,iVar3);
          }
          puVar10[3] = (param_2->TaskCaller).Object;
          pTVar4 = (param_2->TaskCaller).SharedReferenceCount.ReferenceController;
          puVar10[4] = pTVar4;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[5] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PartsSystemControl____A6AXXZUFDefaultDelegateUserPolicy__V__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_____VFWN_EndOfRefs____6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[6] = 0;
          local_res8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 6),(FObjectPtr)&local_res8);
          puVar10[7] = OnCharacterCoreResourceLoadedForPreload;
        }
        if (local_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
        }
        local_58._Column = local_c0._4_4_;
        local_58._Line = local_c0._0_4_;
        local_58._File = (char *)local_c0._8_8_;
        local_58._Function = (char *)local_c0._16_8_;
        pTVar12 = FStreamableManager::
                  RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                            (&pUVar9->StreamableManager,&local_68,&local_e8,
                             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_d8,0,
                             false,false,&local_98,(FSourceLocation *)&local_58);
        if (pTVar1 != pTVar12) {
          pTVar1->Object = pTVar12->Object;
          pTVar12->Object = (FStreamableHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->AsyncLoadHandle).SharedReferenceCount,&pTVar12->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                   (FWriteAccessScope *)local_c0);
        if ((local_d0.DelegateSize != 0) &&
           (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_d0,0,0,0x10);
          local_d0.DelegateSize = 0;
        }
        if (local_c0[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_c0._8_8_,(FDestructionSentinel *)local_c0
                    );
        }
        if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_d0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_d8);
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
        if ((FSoftObjectPath *)local_e8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_e8.AllocatorInstance.Data);
        }
        goto LAB_14bc549f2;
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_240248075262622584>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                       ,0x488,"false");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
LAB_14bc549f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// PreLoadAsync @ 14bc55d10

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
UDS_PartsSystemControl::PreLoadAsync
          (UDS_PartsSystemControl *this,FDS_ResourcePresetTableRow *param_1,FWN_EndOfRefs *param_2)

{
  FStreamableHandle *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UAssetManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_b0 [24];
  UDS_PartsSystemControl *local_98;
  FString local_90;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  TSharedPtr<FStreamableHandle,1> local_60;
  source_location local_48;
  
  bVar4 = FDS_ResourcePresetTableRow::IsValid(param_1);
  if (bVar4) {
    pFVar1 = (this->AsyncLoadHandle).Object;
    this->bIsCanceled = false;
    if (pFVar1 != (FStreamableHandle *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_240248075262623594>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                         ,0x96,"AsyncLoadHandle.IsValid() == false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar5 = UAssetManager::Get();
    local_b0._0_4_ = 0x97;
    local_b0._4_4_ = 0x28;
    local_b0._8_8_ =
         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
    ;
    local_b0._16_8_ =
         "void __cdecl UDS_PartsSystemControl::PreLoadAsync(const struct FDS_ResourcePresetTableRow *,class FWN_EndOfRefs)"
    ;
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    local_68 = &local_c0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_c0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEBUFDS_ResourcePresetTableRow__VFWN_EndOfRefs____6B_
      ;
      puVar6[1] = param_1;
      puVar6[2] = (param_2->TaskCaller).Object;
      pTVar2 = (param_2->TaskCaller).SharedReferenceCount.ReferenceController;
      puVar6[3] = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PartsSystemControl____A6AXXZUFDefaultDelegateUserPolicy__PEBUFDS_ResourcePresetTableRow__VFWN_EndOfRefs____6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[5] = 0;
      local_98 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 5),(FObjectPtr)&local_98);
      puVar6[6] = OnWorkspaceLoadedForPreload;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    local_48._Column = local_b0._4_4_;
    local_48._Line = local_b0._0_4_;
    local_48._File = (char *)local_b0._8_8_;
    local_48._Function = (char *)local_b0._16_8_;
    FStreamableManager::
    RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
              (&pUVar5->StreamableManager,&local_60,&param_1->WorkSpacePath,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8,0,false,false,
               &local_90,(FSourceLocation *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)local_b0);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_b0[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c8);
  }
  else {
    `UDS_PartsSystemControl::PreLoadAsync'::__l5::<lambda_1>::operator()(local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// RefreshAsync @ 14bc55fa0

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

void __thiscall
UDS_PartsSystemControl::RefreshAsync
          (UDS_PartsSystemControl *this,AActor *param_1,FDS_ResourcePresetTableRow *param_2,
          FWN_EndOfRefs *param_3,bool param_4)

{
  FStreamableHandle *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UAssetManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedPtr<FStreamableHandle,1> *pTVar8;
  UDS_LogManager *pUVar9;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [8];
  FDelegateAllocation local_200;
  undefined1 local_1f0 [24];
  UDS_PartsSystemControl *local_1d8;
  FStreamableManager *local_1d0;
  FString local_1c8;
  FDestructionSentinel local_1b8;
  FDelegateAllocation *local_1a0;
  TSharedPtr<FStreamableHandle,1> local_198;
  source_location local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  CancelAsyncLoad(this);
  if (param_2 != (FDS_ResourcePresetTableRow *)0x0) {
    bVar4 = FDS_ResourcePresetTableRow::IsValid(param_2);
    if (bVar4) {
      pFVar1 = (this->AsyncLoadHandle).Object;
      this->CurResourcePresetTable = param_2;
      this->bUseAni = param_4;
      this->bIsCanceled = false;
      if (pFVar1 != (FStreamableHandle *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_240248075262623684>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                           ,0x3c,"AsyncLoadHandle.IsValid() == false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pUVar5 = UAssetManager::Get();
      local_1d0 = &pUVar5->StreamableManager;
      local_1f0._8_8_ =
           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
      ;
      local_1f0._0_4_ = 0x3e;
      local_1f0._16_8_ =
           "void __cdecl UDS_PartsSystemControl::RefreshAsync(class AActor *,const struct FDS_ResourcePresetTableRow *,class FWN_EndOfRefs,bool)"
      ;
      local_1f0._4_4_ = 0x3a;
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      local_208 = (undefined1  [8])0x0;
      local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_200.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
                 (FWriteAccessScope *)&local_1b8);
      local_1a0 = &local_200;
      puVar6 = UE::Core::Private::DelegateAllocate(0x40,&local_200);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVAActor__PEBUFDS_ResourcePresetTableRow__VFWN_EndOfRefs____6B_
        ;
        puVar6[1] = param_1;
        puVar6[2] = param_2;
        puVar6[3] = (param_3->TaskCaller).Object;
        pTVar2 = (param_3->TaskCaller).SharedReferenceCount.ReferenceController;
        puVar6[4] = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[5] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PartsSystemControl____A6AXXZUFDefaultDelegateUserPolicy__PEAVAActor__PEBUFDS_ResourcePresetTableRow__VFWN_EndOfRefs____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[6] = 0;
        local_1d8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)&local_1d8);
        puVar6[7] = OnWorkspaceLoaded;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      local_188._Column = local_1f0._4_4_;
      local_188._Line = local_1f0._0_4_;
      local_188._File = (char *)local_1f0._8_8_;
      local_188._Function = (char *)local_1f0._16_8_;
      pTVar8 = FStreamableManager::
               RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                         (local_1d0,&local_198,&param_2->WorkSpacePath,
                          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_208,0,
                          false,false,&local_1c8,(FSourceLocation *)&local_188);
      if (&this->AsyncLoadHandle != pTVar8) {
        (this->AsyncLoadHandle).Object = pTVar8->Object;
        pTVar8->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AsyncLoadHandle).SharedReferenceCount,&pTVar8->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
                 (FWriteAccessScope *)local_1f0);
      if ((local_200.DelegateSize != 0) &&
         (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_200.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_200,0,0,0x10);
        local_200.DelegateSize = 0;
      }
      if (local_1f0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_1f0._8_8_,(FDestructionSentinel *)local_1f0
                  );
      }
      if (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_200.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_208);
      goto LAB_14bc562fb;
    }
  }
  pUVar9 = UDS_LogManager::GetInst();
  if (pUVar9 != (UDS_LogManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_PartsSystemControl::RefreshAsync",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,0x33,L"InPresetTable is invalid.");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_240248075262623692>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                     ,0x34,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14bc562fb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// RefreshSync @ 14bc58ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

bool __thiscall
UDS_PartsSystemControl::RefreshSync
          (UDS_PartsSystemControl *this,AActor *param_1,FDS_ResourcePresetTableRow *param_2)

{
  UWN_CS_CharacterCore *pUVar1;
  USkeletalMeshComponent *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UAssetManager *pUVar5;
  UWN_CS_CharacterWorkspace *this_01;
  UClass *pUVar6;
  FDS_ResourceAbpTableRow *pFVar7;
  UWN_CS_CharacterSoul *pUVar8;
  UDS_LogManager *pUVar9;
  atomic<unsigned_char> *paVar10;
  int iVar11;
  undefined1 auStackY_2b8 [32];
  TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> local_288;
  undefined8 local_278;
  FWN_CS_CharacterNonePartInfo local_270;
  undefined1 local_258 [16];
  char *local_248;
  undefined1 local_238 [32];
  FUtf8String local_218;
  FSoftObjectPath local_208;
  EWN_CS_AnimationType local_1e8;
  EWN_CS_CharacterWorkspaceVersion local_1e4;
  source_location local_1d8;
  TRotator<double> local_1b8 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if ((param_2 == (FDS_ResourcePresetTableRow *)0x0) ||
     (bVar3 = FDS_ResourcePresetTableRow::IsValid(param_2), !bVar3)) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_PartsSystemControl::RefreshSync",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,0x45,L"InPresetTable is invalid.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    iVar11 = 0x46;
    bVar3 = false;
    paVar10 = &bGEnsureHasExecuted<_240248075262623674>;
  }
  else {
    local_248 = 
    "bool __cdecl UDS_PartsSystemControl::RefreshSync(class AActor *,const struct FDS_ResourcePresetTableRow *)"
    ;
    local_258._8_8_ =
         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
    ;
    local_258._0_8_ = 8.48798316756658e-313;
    this->CurResourcePresetTable = param_2;
    local_1d8._Function =
         "bool __cdecl UDS_PartsSystemControl::RefreshSync(class AActor *,const struct FDS_ResourcePresetTableRow *)"
    ;
    local_1d8._Line = 0x4b;
    local_1d8._Column = 0x28;
    local_1d8._File =
         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
    ;
    pUVar5 = UAssetManager::Get();
    FStreamableManager::LoadSynchronous
              (&pUVar5->StreamableManager,&param_2->WorkSpacePath,false,
               (TSharedPtr<FStreamableHandle,1> *)0x0,(FSourceLocation *)&local_1d8);
    this_01 = (UWN_CS_CharacterWorkspace *)FSoftObjectPath::ResolveObject(&param_2->WorkSpacePath);
    if (this_01 != (UWN_CS_CharacterWorkspace *)0x0) {
      pUVar6 = Z_Construct_UClass_UWN_CS_CharacterWorkspace_NoRegister();
      iVar11 = (int)pUVar6->_padding_;
      if ((iVar11 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar6->_padding_)) {
        local_238[0] = true;
        local_238[1] = false;
        local_238[2] = true;
        local_238._24_8_ = 0;
        local_238._16_8_ = 0;
        local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.Data.ArrayNum = 0;
        local_218.Data.ArrayMax = 0;
        local_238._8_8_ = 0;
        local_278 = 0;
        FUtf8String::Reset(&local_218,0);
        local_208.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_208.AssetPath.PackageName.Number = 0;
        local_208.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_208.AssetPath.AssetName.Number = 0;
        local_208.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.SubPathString.Data.ArrayNum = 0;
        local_208.SubPathString.Data.ArrayMax = 0;
        local_1e8 = AnimBP;
        local_1e4 = None;
        local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.ArrayNum = 0;
        local_288.ArrayMax = 0;
        local_270.LightInfoArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_270.LightInfoArray.ArrayNum = 0;
        local_270.LightInfoArray.ArrayMax = 0;
        bVar3 = UWN_CS_CharacterWorkspace::FillInfosByPreset
                          (this_01,param_2->CharacterID,param_2->PresetID,
                           (FWN_CS_CharacterSoulInfo *)local_238,&local_288,&local_270);
        if (bVar3) {
          SetFootStepProvider(this,this_01,param_2->CharacterID,param_2->PresetID);
          if (local_288.ArrayNum == 0) {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_240248075262623643>,true,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                               ,0x65,"false");
            if (bVar3) goto code_r0x00014bc58ccc;
            bVar3 = false;
          }
          else {
            if ((this->bUseAni == true) && (0 < param_2->ID_AbpLink)) {
              pFVar7 = FDS_ResourcePresetTableRow::ID_AbpLinkTable(param_2);
              FSoftObjectPath::operator=(&local_208,&pFVar7->AbpPath);
              local_1e8 = AnimBP;
            }
            (**(code **)(((this->CharacterCore).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
            pUVar1 = (this->CharacterCore).field0_0x0.DebugPtr;
            (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,param_1);
            pUVar1 = (this->CharacterCore).field0_0x0.DebugPtr;
            (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,&local_288);
            pUVar1 = (this->CharacterCore).field0_0x0.DebugPtr;
            (**(code **)(pUVar1->_padding_ + 0x2d0))(pUVar1,&local_270);
            CharacterCorePostSetInfos(this,param_1);
            pUVar8 = UWN_CS_CharacterCore::GetSoul((this->CharacterCore).field0_0x0.DebugPtr);
            if ((pUVar8 != (UWN_CS_CharacterSoul *)0x0) &&
               (this_00 = (pUVar8->Component).field0_0x0.DebugPtr,
               this_00 != (USkeletalMeshComponent *)0x0)) {
              if (this->ApplyCapsuleHeight != false) {
                local_248 = (char *)(double)(float)((uint)param_2->CapsuleHalfHeight ^
                                                   __xmm_80000000800000008000000080000000);
                local_258._0_8_ = 0.0;
                local_258._8_8_ = (char *)0x0;
                USceneComponent::SetRelativeLocation
                          ((USceneComponent *)this_00,(TVector<double> *)local_258,false,
                           (FHitResult *)0x0,None);
              }
              local_1b8[0].Pitch = ___xmm_c0568000000000000000000000000000;
              local_1b8[0].Yaw = _UNK_152242e68;
              local_1b8[0].Roll = 0.0;
              USceneComponent::SetRelativeRotation
                        ((USceneComponent *)(pUVar8->Component).field0_0x0.DebugPtr,local_1b8,false,
                         (FHitResult *)0x0,None);
            }
            bVar3 = true;
          }
        }
        else {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_240248075262623651>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                             ,0x5d,"false");
          if (bVar3) {
code_r0x00014bc58ccc:
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          bVar3 = false;
        }
        if (local_270.LightInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.LightInfoArray.AllocatorInstance.Data);
        }
        DestructItems<FWN_CS_CharacterPartInfo,int>
                  ((FWN_CS_CharacterPartInfo *)local_288.AllocatorInstance.Data,local_288.ArrayNum);
        if ((FWN_CS_CharacterPartInfo *)local_288.AllocatorInstance.Data !=
            (FWN_CS_CharacterPartInfo *)0x0) {
          FMemory::Free(local_288.AllocatorInstance.Data);
        }
        if (local_208.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_218.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return bVar3;
        }
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
        return bVar3;
      }
    }
    iVar11 = 0x4f;
    paVar10 = &bGEnsureHasExecuted<_240248075262623665>;
    bVar3 = true;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,bVar3,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemControl.cpp"
                     ,iVar11,"false");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// ResetToDefaultMaterial @ 14bc5b510

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

bool __thiscall UDS_PartsSystemControl::ResetToDefaultMaterial(UDS_PartsSystemControl *this)

{
  undefined4 uVar1;
  USceneComponent *pUVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  UWN_CS_CharacterPart *pUVar8;
  UDS_LogManager *pUVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  EWN_CS_CharacterSlotName *pEVar16;
  undefined1 auStackY_458 [32];
  undefined1 auStack_400 [16];
  uint uStack_3f0;
  uint uStack_3ec;
  int local_3e8;
  undefined4 uStack_3e4;
  undefined8 uStack_3e0;
  TMap<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>_>
  *local_3d8;
  undefined2 local_3d0;
  longlong *local_3c8;
  longlong lStack_3c0;
  undefined1 local_3b8 [16];
  int local_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_458;
  if ((this->CharacterCore).field0_0x0.DebugPtr == (UWN_CS_CharacterCore *)0x0) {
    bVar5 = false;
  }
  else {
    TSet<TTuple<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_3c8,
               (TSet<TTuple<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>,TDefaultMapHashableKeyFuncs<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>,FDefaultSetAllocator>
                *)&this->PartsDefaultMaterialInfoMap);
    local_3d0 = 0;
    stack0xfffffffffffffc08 = local_3b8;
    auStack_400._0_8_ = lStack_3c0;
    local_3e8 = local_3a8;
    uStack_3e4 = uStack_3a4;
    uStack_3e0 = uStack_3a0;
    uVar11 = local_3b8._8_8_ >> 0x20;
    if (local_3b8._12_4_ < *(int *)(local_3b8._0_8_ + 0x18)) {
      iVar15 = 1;
      local_3d8 = &this->PartsDefaultMaterialInfoMap;
      do {
        uVar13 = 0;
        pEVar16 = (EWN_CS_CharacterSlotName *)((longlong)(int)uVar11 * 0x20 + *local_3c8);
        pUVar8 = UWN_CS_CharacterCore::GetPart
                           ((this->CharacterCore).field0_0x0.DebugPtr,*pEVar16,false);
        if (pUVar8 == (UWN_CS_CharacterPart *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_398._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_398,"UDS_PartsSystemControl::ResetToDefaultMaterial",0x2e,Yes);
            UDS_LogManager::PrintLog(pUVar9,1,Warning,local_398.Ptr,0x3aa,L"part is nullptr. (%d)");
            if ((void *)local_398._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_398._padding_);
            }
          }
        }
        else {
          if ((pUVar8->Component).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
            pUVar10 = Z_Construct_UClass_UMeshComponent_NoRegister();
            bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar8->Component,pUVar10);
            if ((bVar5) &&
               (pUVar2 = (pUVar8->Component).field0_0x0.DebugPtr, pUVar2 != (USceneComponent *)0x0))
            {
              uVar1 = *(undefined4 *)(pEVar16 + 0x10);
              uVar7 = (**(code **)(pUVar2->_padding_ + 0x810))(pUVar2);
              if (uVar1 == uVar7) {
                uVar11 = uVar13;
                if (0 < (int)uVar1) {
                  do {
                    uVar12 = (uint)uVar13;
                    pcVar3 = *(code **)(pUVar2->_padding_ + 0x6b8);
                    uVar14 = 0;
                    if ((int)uVar12 < (int)*(undefined4 *)(pEVar16 + 0x10)) {
                      uVar14 = ~uVar12 >> 0x1f;
                    }
                    if ((uVar14 == 0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      uVar6 = (*pcVar3)();
                      return (bool)uVar6;
                    }
                    (*pcVar3)(pUVar2,uVar13);
                    uVar13 = (ulonglong)(uVar12 + 1);
                    uVar11 = uVar11 + 1;
                  } while ((longlong)uVar11 < (longlong)(int)uVar1);
                }
              }
              else {
                pUVar9 = UDS_LogManager::GetInst();
                if (pUVar9 != (UDS_LogManager *)0x0) {
                  pUVar9 = UDS_LogManager::GetInst();
                  local_278._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_278,"UDS_PartsSystemControl::ResetToDefaultMaterial",0x2e,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar9,1,Warning,local_278.Ptr,0x3b9,
                             L"defMatCount != curMatCount. (%d)");
                  if ((void *)local_278._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_278._padding_);
                  }
                }
              }
              goto LAB_14bc5b76b;
            }
          }
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_PartsSystemControl::ResetToDefaultMaterial",0x2e,Yes);
            UDS_LogManager::PrintLog
                      (pUVar9,1,Warning,local_158.Ptr,0x3b1,L"meshComp is nullptr. (%d)");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
LAB_14bc5b76b:
        uStack_3f0 = uStack_3f0 & ~auStack_400._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_400);
        uVar11 = (ulonglong)uStack_3ec;
      } while ((int)uStack_3ec < *(int *)(auStack_400._8_8_ + 0x18));
      if (((char)local_3d0 != '\0') && (local_3d0._1_1_ != '\0')) {
        uVar14 = *(int *)(&local_3d8->field_0x0 + 8) - *(int *)(&local_3d8->field_0x0 + 0x34);
        if (3 < uVar14) {
          uVar11 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar15 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar14) && (*(int *)&local_3d8->field_0x48 < iVar15)) ||
           (iVar15 < *(int *)&local_3d8->field_0x48)) {
          *(int *)&local_3d8->field_0x48 = iVar15;
          TSet<TTuple<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo,0>,FDefaultSetAllocator>
          ::Rehash(local_3d8);
        }
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

// SetCustomDepth @ 14bc5dc00

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

void __thiscall UDS_PartsSystemControl::SetCustomDepth(UDS_PartsSystemControl *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWN_CS_CharacterCore *pUVar3;
  UObject *pUVar4;
  bool bVar5;
  UWN_CS_CharacterSoul *pUVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (((pUVar3 != (UWN_CS_CharacterCore *)0x0) &&
      (pUVar6 = UWN_CS_CharacterCore::GetSoul(pUVar3), pUVar6 != (UWN_CS_CharacterSoul *)0x0)) &&
     (pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr, pUVar3 != (UWN_CS_CharacterCore *)0x0)) {
    iVar2 = (pUVar3->Parts).ArrayNum;
    pFVar8 = (pUVar3->Parts).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar3->Parts).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UWN_CS_CharacterPart>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      pUVar4 = *(UObject **)pFVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if (*(longlong *)&pUVar4[1].field_0x10 != 0) {
        pUVar7 = Z_Construct_UClass_UMeshComponent_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar4[1].field_0x10,pUVar7);
        if ((bVar5) &&
           (*(UPrimitiveComponent **)&pUVar4[1].field_0x10 != (UPrimitiveComponent *)0x0)) {
          UPrimitiveComponent::SetRenderCustomDepth
                    (*(UPrimitiveComponent **)&pUVar4[1].field_0x10,param_1);
        }
      }
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// SetDefaultCustomDepthValue @ 14bc5dcf0

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
UDS_PartsSystemControl::SetDefaultCustomDepthValue(UDS_PartsSystemControl *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWN_CS_CharacterCore *pUVar3;
  USkeletalMeshComponent *this_00;
  UObject *pUVar4;
  bool bVar5;
  UWN_CS_CharacterSoul *pUVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  this->DefaultCustomDepthValue = param_1;
  pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (((pUVar3 != (UWN_CS_CharacterCore *)0x0) &&
      (pUVar6 = UWN_CS_CharacterCore::GetSoul(pUVar3), pUVar6 != (UWN_CS_CharacterSoul *)0x0)) &&
     (pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr, pUVar3 != (UWN_CS_CharacterCore *)0x0)) {
    pUVar6 = UWN_CS_CharacterCore::GetSoul(pUVar3);
    if ((pUVar6 != (UWN_CS_CharacterSoul *)0x0) &&
       (this_00 = (pUVar6->Component).field0_0x0.DebugPtr, this_00 != (USkeletalMeshComponent *)0x0)
       ) {
      UPrimitiveComponent::SetCustomDepthStencilValue
                ((UPrimitiveComponent *)this_00,this->DefaultCustomDepthValue);
    }
    pUVar3 = (this->CharacterCore).field0_0x0.DebugPtr;
    pFVar8 = (pUVar3->Parts).AllocatorInstance.Data;
    iVar2 = (pUVar3->Parts).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar3->Parts).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UWN_CS_CharacterPart>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar8 == pFVar1) break;
      pUVar4 = *(UObject **)pFVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if (*(longlong *)&pUVar4[1].field_0x10 != 0) {
        pUVar7 = Z_Construct_UClass_UMeshComponent_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar4[1].field_0x10,pUVar7);
        if ((bVar5) &&
           (*(UPrimitiveComponent **)&pUVar4[1].field_0x10 != (UPrimitiveComponent *)0x0)) {
          UPrimitiveComponent::SetCustomDepthStencilValue
                    (*(UPrimitiveComponent **)&pUVar4[1].field_0x10,this->DefaultCustomDepthValue);
        }
      }
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// SetFootStepProvider @ 14bc5e3a0

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
UDS_PartsSystemControl::SetFootStepProvider
          (UDS_PartsSystemControl *this,UWN_CS_CharacterWorkspace *param_1,int param_2,int param_3)

{
  FName *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  FWN_CS_CharacterDesc *this_01;
  FWN_CS_CharacterPresetDesc *pFVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined8 local_res10;
  FName local_38 [2];
  
  if (param_1 == (UWN_CS_CharacterWorkspace *)0x0) {
    return;
  }
  this_01 = UWN_CS_CharacterWorkspace::FindCharacterDesc(param_1,param_2);
  if (this_01 == (FWN_CS_CharacterDesc *)0x0) {
    return;
  }
  pFVar4 = FWN_CS_CharacterDesc::FindCharacterPresetDesc(this_01,param_3);
  if (pFVar4 == (FWN_CS_CharacterPresetDesc *)0x0) {
    return;
  }
  local_res10 = 0;
  this_00 = &pFVar4->FootStepProvider;
  (this->FootStepProvider).ComparisonIndex = 0;
  (this->FootStepProvider).Number = 0;
  bVar2 = CheckValidFootStepProvider(this,this_00);
  if (!bVar2) {
    iVar1 = (pFVar4->CharacterPresetSlotDescs).ArrayNum;
    pFVar8 = (pFVar4->CharacterPresetSlotDescs).AllocatorInstance.Data;
    pFVar6 = pFVar8 + (longlong)iVar1 * 0x28;
    while( true ) {
      if ((pFVar4->CharacterPresetSlotDescs).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FWN_CS_CharacterPresetSlotDesc_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      if (pFVar8 == pFVar6) break;
      if ((pFVar8[4] == (FScriptContainerElement)0x0) &&
         (bVar2 = ::FName::IsWithinBounds((FNameEntryId)(this_00->ComparisonIndex).Value), bVar2)) {
        pFVar5 = ::FName::FName(local_38,L"None");
        iVar3 = ::FName::Compare(this_00,pFVar5);
        if (iVar3 != 0) {
          iVar1 = (this_01->CharacterPartDescs).ArrayNum;
          pFVar6 = (this_01->CharacterPartDescs).AllocatorInstance.Data;
          pFVar7 = pFVar6 + (longlong)iVar1 * 0x88;
          while( true ) {
            if ((this_01->CharacterPartDescs).ArrayNum != iVar1) {
              `TCheckedPointerIterator<FWN_CS_CharacterPartDesc_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_res10);
            }
            if (pFVar6 == pFVar7) break;
            if (*(int *)pFVar6 == *(int *)(pFVar8 + 0x10)) {
              this->FootStepProvider = *this_00;
              return;
            }
            pFVar6 = pFVar6 + 0x88;
          }
          return;
        }
      }
      pFVar8 = pFVar8 + 0x28;
    }
    return;
  }
  this->FootStepProvider = *this_00;
  return;
}

// SetOutline @ 14bc623f0

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

void __thiscall
UDS_PartsSystemControl::SetOutline(UDS_PartsSystemControl *this,bool param_1,FLinearColor *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  UPrimitiveComponent *this_00;
  UMaterialInterface *this_01;
  UMaterialInstanceDynamic *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UWN_CS_CharacterSoul *pUVar13;
  UClass *pUVar14;
  UMaterialInstanceDynamic *pUVar15;
  FName *pFVar16;
  FLinearColor *pFVar17;
  UDS_LogManager *pUVar18;
  UObject *pUVar19;
  UMaterialInstanceDynamic *this_02;
  void *_Dst;
  ulonglong uVar20;
  UWN_CS_CharacterCore *pUVar21;
  uint uVar22;
  undefined1 *puVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  undefined1 auStackY_388 [32];
  undefined1 local_338;
  undefined1 local_337 [7];
  UWN_CS_CharacterCore *local_330;
  FScriptContainerElement *local_328;
  uint local_320;
  FWeakObjectPtr local_318;
  float local_310;
  float local_30c;
  float local_308 [2];
  UDS_PartsSystemControl *local_300;
  UObject *local_2f8;
  undefined4 local_2f0 [2];
  UMaterialInstanceDynamic *local_2e8;
  undefined8 local_2e0;
  FWeakObjectPtr local_2d8;
  undefined8 local_2d0;
  FLinearColor *local_2c8;
  void *local_2c0;
  int local_2b8;
  FMemoryImageMaterialParameterInfo local_2b0;
  FMemoryImageMaterialParameterInfo local_29c;
  FMemoryImageMaterialParameterInfo local_288;
  FMemoryImageMaterialParameterInfo local_274;
  UObject *local_260;
  FString local_258;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FLinearColor local_218;
  FLinearColor_u_0 local_208;
  FString local_1f8;
  FLinearColor_u_0 local_1e8;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pUVar21 = (this->CharacterCore).field0_0x0.DebugPtr;
  local_300 = this;
  local_2c8 = param_2;
  if ((((pUVar21 == (UWN_CS_CharacterCore *)0x0) ||
       (pUVar13 = UWN_CS_CharacterCore::GetSoul(pUVar21), pUVar13 == (UWN_CS_CharacterSoul *)0x0))
      && (pUVar21 = (this->CharacterCore).field0_0x0.DebugPtr,
         pUVar21 != (UWN_CS_CharacterCore *)0x0)) &&
     ((pUVar13 = UWN_CS_CharacterCore::GetSoul(pUVar21), fVar9 = __real_3a83126f,
      fVar8 = __real_40400000, fVar7 = __real_3f800000, pUVar13 != (UWN_CS_CharacterSoul *)0x0 &&
      (local_330 = (this->CharacterCore).field0_0x0.DebugPtr,
      local_330 != (UWN_CS_CharacterCore *)0x0)))) {
    local_320 = (local_330->Parts).ArrayNum;
    uVar20 = (ulonglong)(int)local_320;
    pFVar24 = (local_330->Parts).AllocatorInstance.Data;
    local_2f8 = (UObject *)(pFVar24 + uVar20 * 8);
    while( true ) {
      pUVar19 = local_2f8;
      local_328 = pFVar24;
      if ((local_330->Parts).ArrayNum != (int)uVar20) {
        local_338 = 0;
        `TCheckedPointerIterator<TObjectPtr<UWN_CS_CharacterPart>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_338);
      }
      if ((UObject *)pFVar24 == pUVar19) break;
      pUVar19 = *(UObject **)pFVar24;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar19);
      }
      if (*(longlong *)&pUVar19[1].field_0x10 == 0) {
LAB_14bc628ca:
        pUVar18 = UDS_LogManager::GetInst();
        if (pUVar18 == (UDS_LogManager *)0x0) goto LAB_14bc628b4;
        pUVar18 = UDS_LogManager::GetInst();
        bVar2 = *(byte *)(pUVar19 + 1);
        ::FString::FString(&local_258,"EWN_CS_CharacterSlotName");
        DS_Util::GetEnumToString(&local_1f8,&local_258,(ulonglong)bVar2);
        local_1b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1b8,"UDS_PartsSystemControl::SetOutline",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar18,1,Error,local_1b8.Ptr,0x2b5,L"Part\'s mesh cannot be null, slotName : %s"
                  );
        if ((void *)local_1b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_1b8._padding_);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (local_258.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_14bc628b4;
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
        pFVar24 = pFVar24 + 8;
        uVar20 = (ulonglong)local_320;
      }
      else {
        pUVar14 = Z_Construct_UClass_UMeshComponent_NoRegister();
        bVar10 = FObjectPtr::IsA((FObjectPtr *)&pUVar19[1].field_0x10,pUVar14);
        if ((!bVar10) ||
           (this_00 = *(UPrimitiveComponent **)&pUVar19[1].field_0x10,
           this_00 == (UPrimitiveComponent *)0x0)) goto LAB_14bc628ca;
        (**(code **)(*(longlong *)this_00 + 0xa90))(this_00,&local_2c0);
        lVar26 = (longlong)local_2b8;
        uVar22 = 0;
        lVar27 = 0;
        if (0 < lVar26) {
          do {
            uVar11 = 0;
            if ((int)uVar22 < local_2b8) {
              uVar11 = ~uVar22 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(longlong *)((longlong)local_2c0 + lVar27 * 8) != 0) {
              local_2e0 = 0;
              pUVar15 = (UMaterialInstanceDynamic *)
                        (**(code **)(*(longlong *)this_00 + 0x6d8))(this_00,uVar22);
              if ((pUVar15 != (UMaterialInstanceDynamic *)0x0) &&
                 (this_01 = (UMaterialInterface *)pUVar15->_padding_,
                 this_01 != (UMaterialInterface *)0x0)) {
                pUVar14 = Z_Construct_UClass_UMaterialInstance_NoRegister();
                iVar25 = (int)pUVar14->_padding_;
                if ((iVar25 <= *(int *)(this_01->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar25 * 8) ==
                    &pUVar14->_padding_)) {
                  local_310 = 0.0;
                  local_30c = 0.0;
                  local_308[0] = 0.0;
                  pFVar16 = ::FName::FName(&local_230,"FresnelIntensity");
                  local_2b0.Name.ComparisonIndex = (*pFVar16).ComparisonIndex;
                  local_2b0.Name.Number = (*pFVar16).Number;
                  local_2b0.Name.DisplayIndex.Value = 0;
                  local_2b0.Index = -1;
                  local_2b0.Association.Value = '\x02';
                  UMaterialInterface::GetScalarParameterValue(this_01,&local_2b0,&local_310,false);
                  pFVar16 = ::FName::FName(&local_228,"FresnelExponenIn");
                  local_29c.Name.ComparisonIndex = (*pFVar16).ComparisonIndex;
                  local_29c.Name.Number = (*pFVar16).Number;
                  local_29c.Name.DisplayIndex.Value = 0;
                  local_29c.Index = -1;
                  local_29c.Association.Value = '\x02';
                  UMaterialInterface::GetScalarParameterValue(this_01,&local_29c,&local_30c,false);
                  pFVar16 = ::FName::FName(&local_220,"FresnelBaseReflecFractionIn");
                  local_288.Name.ComparisonIndex = (*pFVar16).ComparisonIndex;
                  local_288.Name.Number = (*pFVar16).Number;
                  local_288.Name.DisplayIndex.Value = 0;
                  local_288.Index = -1;
                  local_288.Association.Value = '\x02';
                  UMaterialInterface::GetScalarParameterValue(this_01,&local_288,local_308,false);
                  pFVar16 = ::FName::FName(&local_1d8,"FresnelColor");
                  local_274.Name.ComparisonIndex = (*pFVar16).ComparisonIndex;
                  local_274.Name.Number = (*pFVar16).Number;
                  local_274.Name.DisplayIndex.Value = 0;
                  local_274.Index = -1;
                  local_274.Association.Value = '\x02';
                  UMaterialInterface::GetVectorParameterValue(this_01,&local_274,&local_218,false);
                  fVar28 = local_310;
                  if (param_1) {
                    fVar28 = fVar8;
                  }
                  pFVar16 = ::FName::FName(&local_1d0,"FresnelIntensity");
                  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar15,*pFVar16,fVar28);
                  fVar28 = local_30c;
                  if (param_1) {
                    fVar28 = fVar8;
                  }
                  pFVar16 = ::FName::FName(&local_1c8,"FresnelExponenIn");
                  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar15,*pFVar16,fVar28);
                  fVar28 = local_308[0];
                  if (param_1) {
                    fVar28 = fVar9;
                  }
                  pFVar16 = ::FName::FName(&local_1c0,"FresnelBaseReflecFractionIn");
                  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar15,*pFVar16,fVar28);
                  pFVar17 = &local_218;
                  if (param_1) {
                    pFVar17 = local_2c8;
                  }
                  uVar5 = *(undefined8 *)&pFVar17->field0_0x0;
                  uVar6 = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 8);
                  pFVar16 = ::FName::FName(&local_248,"FresnelColor");
                  local_208._0_8_ = uVar5;
                  local_208._8_8_ = uVar6;
                  UMaterialInstanceDynamic::SetVectorParameterValue
                            (pUVar15,*pFVar16,(FLinearColor *)&local_208._s_0);
                  fVar28 = fVar7;
                  if (!param_1) {
                    fVar28 = 0.0;
                  }
                  pFVar16 = ::FName::FName(&local_240,"FresnelPPMask");
                  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar15,*pFVar16,fVar28);
                }
              }
            }
            uVar22 = uVar22 + 1;
            lVar27 = lVar27 + 1;
            pFVar24 = local_328;
          } while (lVar27 < lVar26);
        }
        UPrimitiveComponent::SetRenderCustomDepth(this_00,param_1);
        this = local_300;
        iVar25 = 0xfa;
        if (!param_1) {
          iVar25 = local_300->DefaultCustomDepthValue;
        }
        UPrimitiveComponent::SetCustomDepthStencilValue(this_00,iVar25);
        if (local_2c0 != (void *)0x0) {
          FMemory::Free(local_2c0);
        }
LAB_14bc628b4:
        pFVar24 = pFVar24 + 8;
        uVar20 = (ulonglong)local_320;
      }
    }
    if (param_1) {
      ADS_MainCharacter::GetMainPlayer();
      bVar10 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_2d8,(void *)0x0
                         );
      if (!bVar10) {
        pUVar19 = FWeakObjectPtr::Get(&local_2d8);
        pUVar19 = *(UObject **)&pUVar19[0x41].field_0x10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar19 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar19);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar19);
          }
        }
        local_318.ObjectIndex = 0;
        local_318.ObjectSerialNumber = 0;
        local_260 = pUVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar19);
        }
        FWeakObjectPtr::operator=(&local_318,(FObjectPtr)&local_260);
        bVar10 = FWeakObjectPtr::IsValid(&local_318);
        if (bVar10) {
          local_2f8 = FWeakObjectPtr::Get(&local_318);
          local_320 = *(uint *)&local_2f8[0x43].field_0x18;
          uVar20 = (ulonglong)(int)local_320;
          pUVar21 = *(UWN_CS_CharacterCore **)&local_2f8[0x43].field_0x10;
          pFVar24 = (FScriptContainerElement *)((longlong)pUVar21 + uVar20 * 4 * 4);
          local_328 = pFVar24;
          while( true ) {
            local_330 = pUVar21;
            if (*(int *)&local_2f8[0x43].field_0x18 != (int)uVar20) {
              local_337[0] = 0;
              `TCheckedPointerIterator<FWeightedBlendable_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_337);
            }
            if (pUVar21 == (UWN_CS_CharacterCore *)pFVar24) break;
            pUVar15 = *(UMaterialInstanceDynamic **)((longlong)pUVar21 + 8);
            uVar1 = *(undefined4 *)pUVar21;
            if (pUVar15 != (UMaterialInstanceDynamic *)0x0) {
              pUVar14 = Z_Construct_UClass_UMaterialInterface_NoRegister();
              iVar25 = (int)pUVar14->_padding_;
              if ((iVar25 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar25 * 8)
                  == &pUVar14->_padding_)) {
                pUVar14 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
                iVar25 = (int)pUVar14->_padding_;
                if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar25) ||
                   (this_02 = pUVar15,
                   (longlong *)
                   *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar25 * 8)
                   != &pUVar14->_padding_)) {
                  local_2d0 = 0;
                  this_02 = UMaterialInstanceDynamic::Create
                                      ((UMaterialInterface *)pUVar15,(UObject *)this,(FName)0x0);
                  pUVar19 = FWeakObjectPtr::Get(&local_318);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)pUVar15);
                  }
                  iVar25 = *(int *)&pUVar19[0x43].field_0x18;
                  uVar22 = 0;
                  if (0 < iVar25) {
                    puVar23 = &pUVar19[0x43].field_0x10;
                    lVar26 = 0;
                    do {
                      uVar11 = 0;
                      if ((int)uVar22 < *(int *)&pUVar19[0x43].field_0x18) {
                        uVar11 = ~uVar22 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pUVar3 = *(UMaterialInstanceDynamic **)(*(longlong *)puVar23 + lVar26 + 8);
                      if (pUVar3 == (UMaterialInstanceDynamic *)0x0) {
                        bVar10 = pUVar15 == (UMaterialInstanceDynamic *)0x0;
                      }
                      else {
                        bVar10 = pUVar3 == pUVar15;
                      }
                      if (bVar10) {
                        uVar11 = 0;
                        if ((int)uVar22 < *(int *)&pUVar19[0x43].field_0x18) {
                          uVar11 = ~uVar22 >> 0x1f;
                        }
                        if ((uVar11 == 0) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar10)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        _Dst = (void *)(*(longlong *)puVar23 + (longlong)(int)uVar22 * 0x10);
                        iVar12 = (*(int *)&pUVar19[0x43].field_0x18 - uVar22) + -1;
                        if (iVar12 != 0) {
                          memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar12 << 4);
                        }
                        *(int *)&pUVar19[0x43].field_0x18 = *(int *)&pUVar19[0x43].field_0x18 + -1;
                        UE::Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x10,8,(ForAnyElementType *)puVar23,
                                   *(int *)&pUVar19[0x43].field_0x18,
                                   (int *)&pUVar19[0x43].field_0x1c);
                        uVar22 = uVar22 - 1;
                        lVar26 = lVar26 + -0x10;
                        iVar25 = iVar25 + -1;
                      }
                      uVar22 = uVar22 + 1;
                      lVar26 = lVar26 + 0x10;
                    } while ((int)uVar22 < iVar25);
                  }
                  pUVar19 = FWeakObjectPtr::Get(&local_318);
                  pUVar21 = local_330;
                  pFVar24 = local_328;
                  if (this_02 != (UMaterialInstanceDynamic *)0x0) {
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)this_02);
                    }
                    iVar25 = *(int *)&pUVar19[0x43].field_0x18;
                    uVar22 = 0;
                    lVar26 = 0;
                    if (0 < (longlong)iVar25) {
                      lVar27 = 0;
                      do {
                        uVar11 = 0;
                        if ((int)uVar22 < *(int *)&pUVar19[0x43].field_0x18) {
                          uVar11 = ~uVar22 >> 0x1f;
                        }
                        if ((uVar11 == 0) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar10)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pUVar15 = *(UMaterialInstanceDynamic **)
                                   (*(longlong *)&pUVar19[0x43].field_0x10 + 8 + lVar27);
                        if (pUVar15 == (UMaterialInstanceDynamic *)0x0) {
                          bVar10 = this_02 == (UMaterialInstanceDynamic *)0x0;
                        }
                        else {
                          bVar10 = pUVar15 == this_02;
                        }
                        if (bVar10) {
                          uVar11 = 0;
                          if ((int)uVar22 < *(int *)&pUVar19[0x43].field_0x18) {
                            uVar11 = ~uVar22 >> 0x1f;
                          }
                          if ((uVar11 == 0) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar10)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          *(undefined4 *)(*(longlong *)&pUVar19[0x43].field_0x10 + lVar26 * 0x10) =
                               uVar1;
                          pUVar21 = local_330;
                          pFVar24 = local_328;
                          goto LAB_14bc62e54;
                        }
                        uVar22 = uVar22 + 1;
                        lVar26 = lVar26 + 1;
                        lVar27 = lVar27 + 0x10;
                      } while (lVar26 < iVar25);
                    }
                    puVar23 = &pUVar19[0x43].field_0x10;
                    local_2f0[0] = uVar1;
                    local_2e8 = this_02;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)this_02);
                    }
                    if (((*(undefined4 **)puVar23 <= local_2f0) &&
                        (local_2f0 <
                         *(undefined4 **)puVar23 + (longlong)*(int *)&pUVar19[0x43].field_0x1c * 4))
                       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar10)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar25 = *(int *)&pUVar19[0x43].field_0x18;
                    if (iVar25 == *(int *)&pUVar19[0x43].field_0x1c) {
                      iVar25 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,(ForAnyElementType *)puVar23,
                                          (int *)&pUVar19[0x43].field_0x1c);
                    }
                    *(int *)&pUVar19[0x43].field_0x18 = iVar25 + 1;
                    lVar26 = *(longlong *)puVar23;
                    *(undefined4 *)(lVar26 + (longlong)iVar25 * 0x10) = local_2f0[0];
                    *(UMaterialInstanceDynamic **)(lVar26 + (longlong)iVar25 * 0x10 + 8) = local_2e8
                    ;
                    pUVar21 = local_330;
                    pFVar24 = local_328;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (local_2e8 != (UMaterialInstanceDynamic *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)local_2e8);
                      pUVar21 = local_330;
                      pFVar24 = local_328;
                    }
                  }
                }
LAB_14bc62e54:
                pFVar16 = ::FName::FName(&local_238,"LineColor");
                local_1e8._0_8_ = *(undefined8 *)&local_2c8->field0_0x0;
                local_1e8._8_8_ = *(undefined8 *)((longlong)&local_2c8->field0_0x0 + 8);
                UMaterialInstanceDynamic::SetVectorParameterValue
                          (this_02,*pFVar16,(FLinearColor *)&local_1e8._s_0);
                this = local_300;
              }
            }
            pUVar21 = (UWN_CS_CharacterCore *)((longlong)pUVar21 + 0x10);
            uVar20 = (ulonglong)local_320;
          }
        }
      }
    }
  }
  return;
}

// SetPartVisibleIfExist @ 14bc632f0

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
UDS_PartsSystemControl::SetPartVisibleIfExist
          (UDS_PartsSystemControl *this,EWN_CS_CharacterSlotName param_1,bool param_2)

{
  UWN_CS_CharacterCore *this_00;
  USceneComponent *this_01;
  UWN_CS_CharacterPart *pUVar1;
  
  this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (this_00 != (UWN_CS_CharacterCore *)0x0) {
    pUVar1 = UWN_CS_CharacterCore::GetPart(this_00,param_1,false);
    if ((pUVar1 != (UWN_CS_CharacterPart *)0x0) &&
       (this_01 = (pUVar1->Component).field0_0x0.DebugPtr, this_01 != (USceneComponent *)0x0)) {
      USceneComponent::SetVisibility(this_01,param_2,DirtyOnly);
      return;
    }
  }
  return;
}

// SetPartsColorParams @ 14bc63340

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
UDS_PartsSystemControl::SetPartsColorParams
          (UDS_PartsSystemControl *this,EWN_CS_CharacterSlotName param_1,
          TArray<FDS_ColorParameterValue,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  int iVar2;
  UWN_CS_CharacterCore *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UWN_CS_CharacterPart *pUVar8;
  UClass *pUVar9;
  UMaterialInstanceDynamic *this_01;
  FName *pFVar10;
  FName *pFVar11;
  USceneComponent *pUVar12;
  undefined1 local_res8 [8];
  uint local_res20;
  longlong local_1b0;
  void *local_1a8;
  int local_1a0;
  FMaterialLayersFunctions local_198;
  USceneComponent *local_88;
  longlong local_80;
  FMaterialParameterInfo local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48;
  
  this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (((this_00 != (UWN_CS_CharacterCore *)0x0) &&
      (pUVar8 = UWN_CS_CharacterCore::GetPart(this_00,param_1,false),
      pUVar8 != (UWN_CS_CharacterPart *)0x0)) &&
     ((pUVar8->Component).field0_0x0.DebugPtr != (USceneComponent *)0x0)) {
    pUVar9 = Z_Construct_UClass_UMeshComponent_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar8->Component,pUVar9);
    if ((bVar5) &&
       (pUVar12 = (pUVar8->Component).field0_0x0.DebugPtr, pUVar12 != (USceneComponent *)0x0)) {
      local_88 = pUVar12;
      (**(code **)(pUVar12->_padding_ + 0xa90))(pUVar12,&local_1a8);
      local_80 = (longlong)local_1a0;
      local_res20 = 0;
      if (0 < local_80) {
        local_1b0 = 0;
        do {
          uVar7 = 0;
          if ((int)local_res20 < local_1a0) {
            uVar7 = ~local_res20 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          plVar3 = *(longlong **)((longlong)local_1a8 + local_1b0 * 8);
          if (plVar3 != (longlong *)0x0) {
            local_198._padding_ = 0;
            local_198._padding_ = 0;
            local_198._padding_ = 0;
            local_198._padding_ = 0;
            local_198._padding_ = 0;
            local_198._padding_ = 0;
            local_198.EditorOnly.LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0
            ;
            local_198.EditorOnly.LayerStates.ArrayNum = 0;
            local_198.EditorOnly.LayerStates.ArrayMax = 0;
            local_198.EditorOnly.LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.EditorOnly.LayerNames.ArrayNum = 0;
            local_198.EditorOnly.LayerNames.ArrayMax = 0;
            local_198.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_198.EditorOnly.RestrictToLayerRelatives.ArrayNum = 0;
            local_198.EditorOnly.RestrictToLayerRelatives.ArrayMax = 0;
            local_198.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_198.EditorOnly.RestrictToBlendRelatives.ArrayNum = 0;
            local_198.EditorOnly.RestrictToBlendRelatives.ArrayMax = 0;
            local_198.EditorOnly.LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.EditorOnly.LayerGuids.ArrayNum = 0;
            local_198.EditorOnly.LayerGuids.ArrayMax = 0;
            local_198.EditorOnly.LayerLinkStates.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_198.EditorOnly.LayerLinkStates.ArrayNum = 0;
            local_198.EditorOnly.LayerLinkStates.ArrayMax = 0;
            local_198.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_198.EditorOnly.DeletedParentLayerGuids.ArrayNum = 0;
            local_198.EditorOnly.DeletedParentLayerGuids.ArrayMax = 0;
            local_198.LayerStates_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0
            ;
            local_198.LayerStates_DEPRECATED.ArrayNum = 0;
            local_198.LayerStates_DEPRECATED.ArrayMax = 0;
            local_198.LayerNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.LayerNames_DEPRECATED.ArrayNum = 0;
            local_198.LayerNames_DEPRECATED.ArrayMax = 0;
            local_198.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_198.RestrictToLayerRelatives_DEPRECATED.ArrayNum = 0;
            local_198.RestrictToLayerRelatives_DEPRECATED.ArrayMax = 0;
            local_198.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_198.RestrictToBlendRelatives_DEPRECATED.ArrayNum = 0;
            local_198.RestrictToBlendRelatives_DEPRECATED.ArrayMax = 0;
            local_198.LayerGuids_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.LayerGuids_DEPRECATED.ArrayNum = 0;
            local_198.LayerGuids_DEPRECATED.ArrayMax = 0;
            local_198.LayerLinkStates_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_198.LayerLinkStates_DEPRECATED.ArrayNum = 0;
            local_198.LayerLinkStates_DEPRECATED.ArrayMax = 0;
            local_198.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_198.DeletedParentLayerGuids_DEPRECATED.ArrayNum = 0;
            local_198.DeletedParentLayerGuids_DEPRECATED.ArrayMax = 0;
            local_68 = 0;
            uStack_60 = 0;
            cVar6 = (**(code **)(*plVar3 + 0x3a0))(plVar3,&local_198,&local_68);
            this_01 = (UMaterialInstanceDynamic *)
                      (**(code **)(pUVar12->_padding_ + 0x6d8))(pUVar12,local_res20,plVar3,0);
            if (this_01 == (UMaterialInstanceDynamic *)0x0) {
              if (local_198.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_198.LayerLinkStates_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.LayerLinkStates_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_198.LayerGuids_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.LayerGuids_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_198.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_198.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data);
              }
              DestructItems<FText,int>
                        ((FText *)local_198.LayerNames_DEPRECATED.AllocatorInstance.Data,
                         local_198.LayerNames_DEPRECATED.ArrayNum);
              if ((FText *)local_198.LayerNames_DEPRECATED.AllocatorInstance.Data != (FText *)0x0) {
                FMemory::Free(local_198.LayerNames_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_198.LayerStates_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.LayerStates_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_198.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data);
              }
              if (local_198.EditorOnly.LayerLinkStates.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.EditorOnly.LayerLinkStates.AllocatorInstance.Data);
              }
              if (local_198.EditorOnly.LayerGuids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.EditorOnly.LayerGuids.AllocatorInstance.Data);
              }
              if (local_198.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data);
              }
              if (local_198.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data);
              }
              DestructItems<FText,int>
                        ((FText *)local_198.EditorOnly.LayerNames.AllocatorInstance.Data,
                         local_198.EditorOnly.LayerNames.ArrayNum);
              if ((FText *)local_198.EditorOnly.LayerNames.AllocatorInstance.Data != (FText *)0x0) {
                FMemory::Free(local_198.EditorOnly.LayerNames.AllocatorInstance.Data);
              }
              if (local_198.EditorOnly.LayerStates.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.EditorOnly.LayerStates.AllocatorInstance.Data);
              }
              FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
                        ((FMaterialLayersFunctionsRuntimeData *)&local_198);
            }
            else {
              pFVar10 = (FName *)(param_2->AllocatorInstance).Data;
              iVar2 = param_2->ArrayNum;
              pFVar11 = pFVar10 + 1;
              pFVar1 = pFVar10 + (longlong)iVar2 * 3;
              while( true ) {
                if (param_2->ArrayNum != iVar2) {
                  local_res8[0] = 0;
                  `TCheckedPointerIterator<FDS_ColorParameterValue_const_,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(local_res8);
                }
                if (pFVar10 == pFVar1) break;
                if (cVar6 == '\0') {
                  local_58._0_8_ = *pFVar11;
                  local_58._8_8_ = pFVar11[1];
                  UMaterialInstanceDynamic::SetVectorParameterValue
                            (this_01,*pFVar10,(FLinearColor *)&local_58._s_0);
                  pFVar10 = pFVar10 + 3;
                  pFVar11 = pFVar11 + 3;
                }
                else {
                  local_78.Name = *pFVar10;
                  local_78.Association.Value = '\0';
                  local_78.Index = 0;
                  local_48._0_8_ = *pFVar11;
                  local_48._8_8_ = pFVar11[1];
                  UMaterialInstanceDynamic::SetVectorParameterValueByInfo
                            (this_01,&local_78,(FLinearColor *)&local_48._s_0);
                  pFVar10 = pFVar10 + 3;
                  pFVar11 = pFVar11 + 3;
                }
              }
              FMaterialLayersFunctions::~FMaterialLayersFunctions(&local_198);
              pUVar12 = local_88;
            }
          }
          local_res20 = local_res20 + 1;
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_80);
      }
      if (local_1a8 != (void *)0x0) {
        FMemory::Free(local_1a8);
      }
    }
  }
  return;
}

// SetPartsScalarParams @ 14bc637b0

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
UDS_PartsSystemControl::SetPartsScalarParams
          (UDS_PartsSystemControl *this,EWN_CS_CharacterSlotName param_1,
          TArray<FDS_ScalarParameterValue,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  float fVar2;
  int iVar3;
  UWN_CS_CharacterCore *this_00;
  USceneComponent *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UWN_CS_CharacterPart *pUVar10;
  UClass *pUVar11;
  UMaterialInstanceDynamic *this_01;
  FName *pFVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  longlong local_190;
  void *local_188;
  int local_180;
  FMaterialLayersFunctions local_178;
  longlong local_68;
  FMaterialParameterInfo local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (((this_00 != (UWN_CS_CharacterCore *)0x0) &&
      (pUVar10 = UWN_CS_CharacterCore::GetPart(this_00,param_1,false),
      pUVar10 != (UWN_CS_CharacterPart *)0x0)) &&
     ((pUVar10->Component).field0_0x0.DebugPtr != (USceneComponent *)0x0)) {
    pUVar11 = Z_Construct_UClass_UMeshComponent_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&pUVar10->Component,pUVar11);
    if ((bVar7) &&
       (pUVar4 = (pUVar10->Component).field0_0x0.DebugPtr, pUVar4 != (USceneComponent *)0x0)) {
      (**(code **)(pUVar4->_padding_ + 0xa90))(pUVar4,&local_188);
      local_68 = (longlong)local_180;
      uVar13 = 0;
      if (0 < local_68) {
        local_190 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar13 < local_180) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar5 = *(longlong **)((longlong)local_188 + local_190 * 8);
          if (plVar5 != (longlong *)0x0) {
            local_178._padding_ = 0;
            local_178._padding_ = 0;
            local_178._padding_ = 0;
            local_178._padding_ = 0;
            local_178._padding_ = 0;
            local_178._padding_ = 0;
            local_178.EditorOnly.LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0
            ;
            local_178.EditorOnly.LayerStates.ArrayNum = 0;
            local_178.EditorOnly.LayerStates.ArrayMax = 0;
            local_178.EditorOnly.LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_178.EditorOnly.LayerNames.ArrayNum = 0;
            local_178.EditorOnly.LayerNames.ArrayMax = 0;
            local_178.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_178.EditorOnly.RestrictToLayerRelatives.ArrayNum = 0;
            local_178.EditorOnly.RestrictToLayerRelatives.ArrayMax = 0;
            local_178.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_178.EditorOnly.RestrictToBlendRelatives.ArrayNum = 0;
            local_178.EditorOnly.RestrictToBlendRelatives.ArrayMax = 0;
            local_178.EditorOnly.LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_178.EditorOnly.LayerGuids.ArrayNum = 0;
            local_178.EditorOnly.LayerGuids.ArrayMax = 0;
            local_178.EditorOnly.LayerLinkStates.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_178.EditorOnly.LayerLinkStates.ArrayNum = 0;
            local_178.EditorOnly.LayerLinkStates.ArrayMax = 0;
            local_178.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_178.EditorOnly.DeletedParentLayerGuids.ArrayNum = 0;
            local_178.EditorOnly.DeletedParentLayerGuids.ArrayMax = 0;
            local_178.LayerStates_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0
            ;
            local_178.LayerStates_DEPRECATED.ArrayNum = 0;
            local_178.LayerStates_DEPRECATED.ArrayMax = 0;
            local_178.LayerNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_178.LayerNames_DEPRECATED.ArrayNum = 0;
            local_178.LayerNames_DEPRECATED.ArrayMax = 0;
            local_178.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_178.RestrictToLayerRelatives_DEPRECATED.ArrayNum = 0;
            local_178.RestrictToLayerRelatives_DEPRECATED.ArrayMax = 0;
            local_178.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_178.RestrictToBlendRelatives_DEPRECATED.ArrayNum = 0;
            local_178.RestrictToBlendRelatives_DEPRECATED.ArrayMax = 0;
            local_178.LayerGuids_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_178.LayerGuids_DEPRECATED.ArrayNum = 0;
            local_178.LayerGuids_DEPRECATED.ArrayMax = 0;
            local_178.LayerLinkStates_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_178.LayerLinkStates_DEPRECATED.ArrayNum = 0;
            local_178.LayerLinkStates_DEPRECATED.ArrayMax = 0;
            local_178.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_178.DeletedParentLayerGuids_DEPRECATED.ArrayNum = 0;
            local_178.DeletedParentLayerGuids_DEPRECATED.ArrayMax = 0;
            local_50 = 0;
            uStack_48 = 0;
            cVar8 = (**(code **)(*plVar5 + 0x3a0))(plVar5,&local_178,&local_50);
            this_01 = (UMaterialInstanceDynamic *)
                      (**(code **)(pUVar4->_padding_ + 0x6d8))(pUVar4,uVar13,plVar5,0);
            if (this_01 == (UMaterialInstanceDynamic *)0x0) {
              if (local_178.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_178.LayerLinkStates_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.LayerLinkStates_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_178.LayerGuids_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.LayerGuids_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_178.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_178.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data);
              }
              DestructItems<FText,int>
                        ((FText *)local_178.LayerNames_DEPRECATED.AllocatorInstance.Data,
                         local_178.LayerNames_DEPRECATED.ArrayNum);
              if ((FText *)local_178.LayerNames_DEPRECATED.AllocatorInstance.Data != (FText *)0x0) {
                FMemory::Free(local_178.LayerNames_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_178.LayerStates_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.LayerStates_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_178.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data);
              }
              if (local_178.EditorOnly.LayerLinkStates.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.EditorOnly.LayerLinkStates.AllocatorInstance.Data);
              }
              if (local_178.EditorOnly.LayerGuids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.EditorOnly.LayerGuids.AllocatorInstance.Data);
              }
              if (local_178.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data);
              }
              if (local_178.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data);
              }
              DestructItems<FText,int>
                        ((FText *)local_178.EditorOnly.LayerNames.AllocatorInstance.Data,
                         local_178.EditorOnly.LayerNames.ArrayNum);
              if ((FText *)local_178.EditorOnly.LayerNames.AllocatorInstance.Data != (FText *)0x0) {
                FMemory::Free(local_178.EditorOnly.LayerNames.AllocatorInstance.Data);
              }
              if (local_178.EditorOnly.LayerStates.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.EditorOnly.LayerStates.AllocatorInstance.Data);
              }
              FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
                        ((FMaterialLayersFunctionsRuntimeData *)&local_178);
            }
            else {
              iVar3 = param_2->ArrayNum;
              pFVar12 = (FName *)(param_2->AllocatorInstance).Data;
              pFVar1 = (FName *)((longlong)pFVar12 + (longlong)iVar3 * 0xc);
              while( true ) {
                if (param_2->ArrayNum != iVar3) {
                  local_res8[0] = 0;
                  `TCheckedPointerIterator<FDS_ScalarParameterValue_const_,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(local_res8);
                }
                if (pFVar12 == pFVar1) break;
                fVar2 = (float)pFVar12[1].ComparisonIndex.Value;
                if (cVar8 == '\0') {
                  UMaterialInstanceDynamic::SetScalarParameterValue(this_01,*pFVar12,fVar2);
                  pFVar12 = (FName *)&pFVar12[1].Number;
                }
                else {
                  local_60.Name = *pFVar12;
                  local_60.Association.Value = '\0';
                  local_60.Index = 0;
                  UMaterialInstanceDynamic::SetScalarParameterValueByInfo(this_01,&local_60,fVar2);
                  pFVar12 = (FName *)&pFVar12[1].Number;
                }
              }
              FMaterialLayersFunctions::~FMaterialLayersFunctions(&local_178);
            }
          }
          uVar13 = uVar13 + 1;
          local_190 = local_190 + 1;
        } while (local_190 < local_68);
      }
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
    }
  }
  return;
}

// SetPartsVectorParams @ 14bc63bd0

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
UDS_PartsSystemControl::SetPartsVectorParams
          (UDS_PartsSystemControl *this,EWN_CS_CharacterSlotName param_1,
          TArray<FDS_VectorParameterValue,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  UWN_CS_CharacterCore *this_00;
  longlong *plVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UWN_CS_CharacterPart *pUVar8;
  UClass *pUVar9;
  UMaterialInstanceDynamic *this_01;
  FLinearColor *pFVar10;
  FName *pFVar11;
  USceneComponent *pUVar12;
  FName *pFVar13;
  FName *pFVar14;
  undefined1 local_res8 [8];
  uint local_res20;
  longlong local_1d0;
  void *local_1c8;
  int local_1c0;
  FMaterialLayersFunctions local_1b8;
  USceneComponent *local_a8;
  longlong local_a0;
  FMaterialParameterInfo local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  FLinearColor_u_0 local_78;
  FLinearColor_u_0 local_68;
  FLinearColor local_58;
  FLinearColor local_48;
  
  this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (((this_00 != (UWN_CS_CharacterCore *)0x0) &&
      (pUVar8 = UWN_CS_CharacterCore::GetPart(this_00,param_1,false),
      pUVar8 != (UWN_CS_CharacterPart *)0x0)) &&
     ((pUVar8->Component).field0_0x0.DebugPtr != (USceneComponent *)0x0)) {
    pUVar9 = Z_Construct_UClass_UMeshComponent_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar8->Component,pUVar9);
    if ((bVar5) &&
       (pUVar12 = (pUVar8->Component).field0_0x0.DebugPtr, pUVar12 != (USceneComponent *)0x0)) {
      local_a8 = pUVar12;
      (**(code **)(pUVar12->_padding_ + 0xa90))(pUVar12,&local_1c8);
      local_a0 = (longlong)local_1c0;
      local_res20 = 0;
      if (0 < local_a0) {
        local_1d0 = 0;
        do {
          uVar7 = 0;
          if ((int)local_res20 < local_1c0) {
            uVar7 = ~local_res20 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          plVar2 = *(longlong **)((longlong)local_1c8 + local_1d0 * 8);
          if (plVar2 != (longlong *)0x0) {
            local_1b8._padding_ = 0;
            local_1b8._padding_ = 0;
            local_1b8._padding_ = 0;
            local_1b8._padding_ = 0;
            local_1b8._padding_ = 0;
            local_1b8._padding_ = 0;
            local_1b8.EditorOnly.LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0
            ;
            local_1b8.EditorOnly.LayerStates.ArrayNum = 0;
            local_1b8.EditorOnly.LayerStates.ArrayMax = 0;
            local_1b8.EditorOnly.LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.EditorOnly.LayerNames.ArrayNum = 0;
            local_1b8.EditorOnly.LayerNames.ArrayMax = 0;
            local_1b8.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1b8.EditorOnly.RestrictToLayerRelatives.ArrayNum = 0;
            local_1b8.EditorOnly.RestrictToLayerRelatives.ArrayMax = 0;
            local_1b8.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1b8.EditorOnly.RestrictToBlendRelatives.ArrayNum = 0;
            local_1b8.EditorOnly.RestrictToBlendRelatives.ArrayMax = 0;
            local_1b8.EditorOnly.LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.EditorOnly.LayerGuids.ArrayNum = 0;
            local_1b8.EditorOnly.LayerGuids.ArrayMax = 0;
            local_1b8.EditorOnly.LayerLinkStates.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1b8.EditorOnly.LayerLinkStates.ArrayNum = 0;
            local_1b8.EditorOnly.LayerLinkStates.ArrayMax = 0;
            local_1b8.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1b8.EditorOnly.DeletedParentLayerGuids.ArrayNum = 0;
            local_1b8.EditorOnly.DeletedParentLayerGuids.ArrayMax = 0;
            local_1b8.LayerStates_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0
            ;
            local_1b8.LayerStates_DEPRECATED.ArrayNum = 0;
            local_1b8.LayerStates_DEPRECATED.ArrayMax = 0;
            local_1b8.LayerNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.LayerNames_DEPRECATED.ArrayNum = 0;
            local_1b8.LayerNames_DEPRECATED.ArrayMax = 0;
            local_1b8.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1b8.RestrictToLayerRelatives_DEPRECATED.ArrayNum = 0;
            local_1b8.RestrictToLayerRelatives_DEPRECATED.ArrayMax = 0;
            local_1b8.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1b8.RestrictToBlendRelatives_DEPRECATED.ArrayNum = 0;
            local_1b8.RestrictToBlendRelatives_DEPRECATED.ArrayMax = 0;
            local_1b8.LayerGuids_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.LayerGuids_DEPRECATED.ArrayNum = 0;
            local_1b8.LayerGuids_DEPRECATED.ArrayMax = 0;
            local_1b8.LayerLinkStates_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1b8.LayerLinkStates_DEPRECATED.ArrayNum = 0;
            local_1b8.LayerLinkStates_DEPRECATED.ArrayMax = 0;
            local_1b8.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1b8.DeletedParentLayerGuids_DEPRECATED.ArrayNum = 0;
            local_1b8.DeletedParentLayerGuids_DEPRECATED.ArrayMax = 0;
            local_88 = 0;
            uStack_80 = 0;
            cVar6 = (**(code **)(*plVar2 + 0x3a0))(plVar2,&local_1b8,&local_88);
            this_01 = (UMaterialInstanceDynamic *)
                      (**(code **)(pUVar12->_padding_ + 0x6d8))(pUVar12,local_res20,plVar2,0);
            if (this_01 == (UMaterialInstanceDynamic *)0x0) {
              if (local_1b8.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_1b8.LayerLinkStates_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.LayerLinkStates_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_1b8.LayerGuids_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.LayerGuids_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_1b8.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_1b8.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data);
              }
              DestructItems<FText,int>
                        ((FText *)local_1b8.LayerNames_DEPRECATED.AllocatorInstance.Data,
                         local_1b8.LayerNames_DEPRECATED.ArrayNum);
              if ((FText *)local_1b8.LayerNames_DEPRECATED.AllocatorInstance.Data != (FText *)0x0) {
                FMemory::Free(local_1b8.LayerNames_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_1b8.LayerStates_DEPRECATED.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.LayerStates_DEPRECATED.AllocatorInstance.Data);
              }
              if (local_1b8.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data);
              }
              if (local_1b8.EditorOnly.LayerLinkStates.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.EditorOnly.LayerLinkStates.AllocatorInstance.Data);
              }
              if (local_1b8.EditorOnly.LayerGuids.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.EditorOnly.LayerGuids.AllocatorInstance.Data);
              }
              if (local_1b8.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data);
              }
              if (local_1b8.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data);
              }
              DestructItems<FText,int>
                        ((FText *)local_1b8.EditorOnly.LayerNames.AllocatorInstance.Data,
                         local_1b8.EditorOnly.LayerNames.ArrayNum);
              if ((FText *)local_1b8.EditorOnly.LayerNames.AllocatorInstance.Data != (FText *)0x0) {
                FMemory::Free(local_1b8.EditorOnly.LayerNames.AllocatorInstance.Data);
              }
              if (local_1b8.EditorOnly.LayerStates.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.EditorOnly.LayerStates.AllocatorInstance.Data);
              }
              FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
                        ((FMaterialLayersFunctionsRuntimeData *)&local_1b8);
            }
            else {
              pFVar13 = (FName *)(param_2->AllocatorInstance).Data;
              iVar1 = param_2->ArrayNum;
              pFVar14 = pFVar13 + (longlong)iVar1 * 4;
              pFVar11 = pFVar13 + 1;
              while( true ) {
                if (param_2->ArrayNum != iVar1) {
                  local_res8[0] = 0;
                  `TCheckedPointerIterator<FDS_VectorParameterValue_const_,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(local_res8);
                }
                if (pFVar13 == pFVar14) break;
                FVar3 = *pFVar13;
                if (cVar6 == '\0') {
                  pFVar10 = FLinearColor::FLinearColor(&local_58,(TVector<double> *)pFVar11);
                  local_78._0_8_ = *(undefined8 *)&pFVar10->field0_0x0;
                  local_78._8_8_ = *(undefined8 *)((longlong)&pFVar10->field0_0x0 + 8);
                  UMaterialInstanceDynamic::SetVectorParameterValue
                            (this_01,FVar3,(FLinearColor *)&local_78._s_0);
                  pFVar13 = pFVar13 + 4;
                  pFVar11 = pFVar11 + 4;
                }
                else {
                  local_98.Association.Value = '\0';
                  local_98.Index = 0;
                  local_98.Name = FVar3;
                  pFVar10 = FLinearColor::FLinearColor(&local_48,(TVector<double> *)pFVar11);
                  local_68._0_8_ = *(undefined8 *)&pFVar10->field0_0x0;
                  local_68._8_8_ = *(undefined8 *)((longlong)&pFVar10->field0_0x0 + 8);
                  UMaterialInstanceDynamic::SetVectorParameterValueByInfo
                            (this_01,&local_98,(FLinearColor *)&local_68._s_0);
                  pFVar13 = pFVar13 + 4;
                  pFVar11 = pFVar11 + 4;
                }
              }
              FMaterialLayersFunctions::~FMaterialLayersFunctions(&local_1b8);
              pUVar12 = local_a8;
            }
          }
          local_res20 = local_res20 + 1;
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_a0);
      }
      if (local_1c8 != (void *)0x0) {
        FMemory::Free(local_1c8);
      }
    }
  }
  return;
}

// SetPartsVisibleIfExist @ 14bc640e0

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
UDS_PartsSystemControl::SetPartsVisibleIfExist
          (UDS_PartsSystemControl *this,
          TArray<EWN_CS_CharacterSlotName,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWN_CS_CharacterCore *this_00;
  USceneComponent *this_01;
  UWN_CS_CharacterPart *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EWN_CS_CharacterSlotName_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    this_00 = (this->CharacterCore).field0_0x0.DebugPtr;
    if (this_00 != (UWN_CS_CharacterCore *)0x0) {
      pUVar3 = UWN_CS_CharacterCore::GetPart(this_00,(EWN_CS_CharacterSlotName)*pFVar4,false);
      if ((pUVar3 != (UWN_CS_CharacterPart *)0x0) &&
         (this_01 = (pUVar3->Component).field0_0x0.DebugPtr, this_01 != (USceneComponent *)0x0)) {
        USceneComponent::SetVisibility(this_01,param_2,DirtyOnly);
      }
    }
    pFVar4 = pFVar4 + 1;
  }
  return;
}

// Unmount @ 14bc69f80

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

void __thiscall UDS_PartsSystemControl::Unmount(UDS_PartsSystemControl *this)

{
  UWN_CS_CharacterCore *pUVar1;
  
  pUVar1 = (this->CharacterCore).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_CS_CharacterCore *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bc69f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2e0))();
    return;
  }
  return;
}

// operator() @ 15056dd20

bool __thiscall `UDS_PartsSystemControl::PreLoadAsync'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_240248075262623600>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_240248075262623600>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

