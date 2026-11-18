// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 60

// StaticClass @ 14a381a60

UClass * __cdecl UMovieSceneControlRigParameterTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"MovieSceneControlRigParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneControlRigParameterTrack,0x2a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneControlRigParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneControlRigParameterTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton;
}

// UMovieSceneControlRigParameterTrack @ 14a3b9db0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneControlRigParameterTrack * __thiscall
UMovieSceneControlRigParameterTrack::UMovieSceneControlRigParameterTrack
          (UMovieSceneControlRigParameterTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  this->_padding_ = (longlong)&___7INodeAndChannelMappings__6B_;
  IMovieSceneSectionsToKey::IMovieSceneSectionsToKey((IMovieSceneSectionsToKey *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined8 *)&this->SectionToKeyPerControl = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  this->_padding_ = (longlong)&_vftable__for__INodeAndChannelMappings__;
  *(undefined8 *)&(this->SectionToKeyPerControl).field_0x8 = 0;
  *(undefined8 *)&(this->SectionToKeyPerControl).field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSectionsToKey__;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x28 = 0;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x2c = 0x80;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x34 = 0;
  *(undefined8 *)&(this->SectionToKeyPerControl).field_0x40 = 0;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x48 = 0;
  this->bSetSectionToKeyPerControl = true;
  *(undefined8 *)&this->OnSpaceChannelAdded = 0;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x10 = 0;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x18 = 2;
  *(undefined8 *)&this->OnConstraintChannelAdded = 0;
  *(undefined8 *)&(this->OnConstraintChannelAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnConstraintChannelAdded).field_0x10 = 0;
  *(undefined8 *)&(this->OnConstraintChannelAdded).field_0x18 = 2;
  (this->ControlRig).field0_0x0.DebugPtr = (UControlRig *)0x0;
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->TrackName).ComparisonIndex = 0;
  (this->TrackName).Number = 0;
  *(undefined8 *)&this->ControlsRotationOrder = 0;
  *(undefined8 *)&(this->ControlsRotationOrder).field_0x8 = 0;
  *(undefined8 *)&(this->ControlsRotationOrder).field_0x20 = 0;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x28 = 0;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x34 = 0;
  *(undefined8 *)&(this->ControlsRotationOrder).field_0x40 = 0;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x48 = 0;
  FInstancedStruct::FInstancedStruct(&(this->ControlRigSettingsOverrides).Value);
  *(undefined8 *)&this->GameWorldControlRigs = 0;
  *(undefined8 *)&(this->GameWorldControlRigs).field_0x8 = 0;
  *(undefined8 *)&(this->GameWorldControlRigs).field_0x20 = 0;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x28 = 0;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x2c = 0x80;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x34 = 0;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GameWorldControlRigs).field_0x40 = 0;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x48 = 0;
  return this;
}

// UMovieSceneControlRigParameterTrack @ 14a3b9f80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneControlRigParameterTrack * __thiscall
UMovieSceneControlRigParameterTrack::UMovieSceneControlRigParameterTrack
          (UMovieSceneControlRigParameterTrack *this,FObjectInitializer *param_1)

{
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  this->_padding_ = (longlong)&___7INodeAndChannelMappings__6B_;
  IMovieSceneSectionsToKey::IMovieSceneSectionsToKey((IMovieSceneSectionsToKey *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined8 *)&this->SectionToKeyPerControl = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  *(undefined8 *)&(this->SectionToKeyPerControl).field_0x8 = 0;
  *(undefined8 *)&(this->SectionToKeyPerControl).field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__INodeAndChannelMappings__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSectionsToKey__;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x28 = 0;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x2c = 0x80;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x34 = 0;
  *(undefined8 *)&(this->SectionToKeyPerControl).field_0x40 = 0;
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x48 = 0;
  *(undefined8 *)&this->OnSpaceChannelAdded = 0;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x10 = 0;
  *(undefined8 *)&(this->OnSpaceChannelAdded).field_0x18 = 2;
  *(undefined8 *)&this->OnConstraintChannelAdded = 0;
  *(undefined8 *)&(this->OnConstraintChannelAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnConstraintChannelAdded).field_0x10 = 0;
  *(undefined8 *)&(this->OnConstraintChannelAdded).field_0x18 = 2;
  (this->ControlRig).field0_0x0.DebugPtr = (UControlRig *)0x0;
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->TrackName).ComparisonIndex = 0;
  (this->TrackName).Number = 0;
  *(undefined8 *)&this->ControlsRotationOrder = 0;
  *(undefined8 *)&(this->ControlsRotationOrder).field_0x8 = 0;
  *(undefined8 *)&(this->ControlsRotationOrder).field_0x20 = 0;
  this->bSetSectionToKeyPerControl = true;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x28 = 0;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x34 = 0;
  *(undefined8 *)&(this->ControlsRotationOrder).field_0x40 = 0;
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x48 = 0;
  this->PriorityOrder = -1;
  FInstancedStruct::FInstancedStruct(&(this->ControlRigSettingsOverrides).Value);
  *(undefined8 *)&this->GameWorldControlRigs = 0;
  *(undefined8 *)&(this->GameWorldControlRigs).field_0x8 = 0;
  *(undefined8 *)&(this->GameWorldControlRigs).field_0x20 = 0;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x28 = 0;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x2c = 0x80;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x34 = 0;
  *(undefined8 *)&(this->GameWorldControlRigs).field_0x40 = 0;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x48 = 0;
  FVar1 = FMovieSceneBlendTypeField::None();
  *(undefined1 *)&this->_padding_ = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Additive);
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Override);
  UE::MovieScene::ShouldUseLegacyControlRigTemplate = ShouldUseLegacyTemplate;
  return this;
}

// ~UMovieSceneControlRigParameterTrack @ 14a3bd310

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::~UMovieSceneControlRigParameterTrack
          (UMovieSceneControlRigParameterTrack *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  this->_padding_ = (longlong)&_vftable__for__INodeAndChannelMappings__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSectionsToKey__;
  *(undefined4 *)&(this->GameWorldControlRigs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GameWorldControlRigs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GameWorldControlRigs);
  FInstancedStruct::Reset(&(this->ControlRigSettingsOverrides).Value);
  *(undefined4 *)&(this->ControlsRotationOrder).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ControlsRotationOrder).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FControlRotationOrder>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FControlRotationOrder>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FControlRotationOrder>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlsRotationOrder);
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnConstraintChannelAdded).field_0x8,
             *(int *)&(this->OnConstraintChannelAdded).field_0x10);
  pvVar1 = *(void **)&(this->OnConstraintChannelAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConstraintChannelAdded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSpaceChannelAdded).field_0x8,*(int *)&(this->OnSpaceChannelAdded).field_0x10
            );
  pvVar1 = *(void **)&(this->OnSpaceChannelAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSpaceChannelAdded);
  *(undefined4 *)&(this->SectionToKeyPerControl).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SectionToKeyPerControl).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SectionToKeyPerControl);
  this->_padding_ = (longlong)&___7IMovieSceneSectionsToKey__6B_;
  this->_padding_ = (longlong)&___7INodeAndChannelMappings__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddSection @ 14a3e4a30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::AddSection
          (UMovieSceneControlRigParameterTrack *this,UMovieSceneSection *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UControlRig *pUVar3;
  UControlRig *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UMovieSceneSection *local_18 [2];
  
  puVar2 = &(this->SectionToKeyPerControl).field_0x38;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if ((*(UMovieSceneSection ***)puVar2 <= local_18) &&
     (local_18 <
      *(UMovieSceneSection ***)puVar2 + *(int *)&(this->SectionToKeyPerControl).field_0x44)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = *(int *)&(this->SectionToKeyPerControl).field_0x40;
  puVar1 = &(this->SectionToKeyPerControl).field_0x44;
  if (iVar7 == *(int *)puVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(int *)&(this->SectionToKeyPerControl).field_0x40 = iVar7 + 1;
  *(UMovieSceneSection **)(*(longlong *)puVar2 + (longlong)iVar7 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar8 = UMovieSceneControlRigParameterSection::StaticClass();
    iVar7 = (int)pUVar8->_padding_;
    if ((iVar7 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar8->_padding_)) {
      pUVar3 = *(UControlRig **)&(this->SectionToKeyPerControl).field_0x28;
      pUVar4 = (UControlRig *)param_1[1].ConditionContainer.Condition.field0_0x0.DebugPtr;
      if (pUVar3 == (UControlRig *)0x0) {
        bVar6 = pUVar4 == (UControlRig *)0x0;
      }
      else {
        bVar6 = pUVar3 == pUVar4;
      }
      if (!bVar6) {
        UMovieSceneControlRigParameterSection::SetControlRig
                  ((UMovieSceneControlRigParameterSection *)param_1,pUVar3);
      }
      (**(code **)(param_1->_padding_ + 0x3a8))(param_1);
    }
  }
  if (1 < *(int *)&(this->SectionToKeyPerControl).field_0x40) {
    (**(code **)(*(longlong *)&this[-1].ControlsRotationOrder.field_0x48 + 0x330))
              (&this[-1].ControlsRotationOrder.field_0x48,param_1);
  }
  return;
}

// ApplyControlRigSettingsOverrides @ 14a3eb540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::ApplyControlRigSettingsOverrides
          (UMovieSceneControlRigParameterTrack *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPropertyBag *pUVar4;
  uchar *_Dst;
  uchar *_Src;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FNameEntryId local_38;
  undefined4 uStack_34;
  FProperty *local_30;
  FNameEntryId local_28;
  undefined4 uStack_24;
  uchar *local_10;
  
  if ((((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) &&
      ((this->ControlRigSettingsOverrides).Value.StructMemory != (uchar *)0x0)) &&
     ((this->ControlRigSettingsOverrides).Value.ScriptStruct.field0_0x0.DebugPtr !=
      (UScriptStruct *)0x0)) {
    pUVar4 = FInstancedPropertyBag::GetPropertyBagStruct(&this->ControlRigSettingsOverrides);
    iVar1 = (pUVar4->PropertyDescs).ArrayNum;
    pFVar5 = (pUVar4->PropertyDescs).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x40;
    for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x40) {
      URigVMHost::GetPublicVariableByName
                ((URigVMHost *)(this->ControlRig).field0_0x0.DebugPtr,
                 (FRigVMExternalVariable *)&local_38,(FName *)(pFVar5 + 0x18));
      bVar3 = ::FName::IsWithinBounds(local_38);
      if (((bVar3) && (CONCAT44(uStack_34,local_38.Value) != 0)) &&
         ((bVar3 = ::FName::IsWithinBounds(local_28), bVar3 &&
          (((CONCAT44(uStack_24,local_28.Value) != 0 && (local_10 != (uchar *)0x0)) &&
           (local_30->_padding_ == *(longlong *)(*(longlong *)(pFVar5 + 0x30) + 8))))))) {
        _Dst = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (local_30,(UObject *)(this->ControlRig).field0_0x0.DebugPtr,0);
        _Src = (this->ControlRigSettingsOverrides).Value.StructMemory +
               *(int *)(*(longlong *)(pFVar5 + 0x30) + 0x44);
        if (_Dst != _Src) {
          if (((uint)(int)local_30->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(local_30->_padding_ + 0xf0))(local_30,_Dst,_Src,local_30->ArrayDim);
          }
          else {
            memcpy(_Dst,_Src,(longlong)local_30->ElementSize * (longlong)local_30->ArrayDim);
          }
        }
      }
    }
  }
  return;
}

// BeginDestroy @ 14a3ebd50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::BeginDestroy(UMovieSceneControlRigParameterTrack *this)

{
  UControlRig *pUVar1;
  
  UObject::BeginDestroy((UObject *)this);
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((pUVar1 != (UControlRig *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ControlRig).field0_0x0.DebugPtr)->PreConstructionEvent,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ControlRig).field0_0x0.DebugPtr)->PostConstructionEvent,this);
    return;
  }
  return;
}

// BindControlRigDelegates @ 14a3ebdb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::BindControlRigDelegates
          (UMovieSceneControlRigParameterTrack *this)

{
  UControlRig *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((pUVar1 != (UControlRig *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &((this->ControlRig).field0_0x0.DebugPtr)->PreConstructionEvent,this);
    if (!bVar2) {
      TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UMovieSceneControlRigParameterTrack>
                ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                  *)&((this->ControlRig).field0_0x0.DebugPtr)->PreConstructionEvent,
                 (UMovieSceneControlRigParameterTrack *)&stack0x00000008,(pmf_90577810 *)this);
      TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UMovieSceneControlRigParameterTrack>
                ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                  *)&((this->ControlRig).field0_0x0.DebugPtr)->PostConstructionEvent,
                 (UMovieSceneControlRigParameterTrack *)&stack0x00000008,(pmf_90577810 *)this);
    }
  }
  return;
}

// ChangeControlRotationOrder @ 14a3f0de0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::ChangeControlRotationOrder
          (UMovieSceneControlRigParameterTrack *this,FName *param_1,
          TOptional<EEulerRotationOrder> *param_2,EMovieSceneKeyInterpolation param_3)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  UControlRig *pUVar5;
  FName FVar6;
  UMovieSceneControlRigParameterSection *this_00;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  FControlRotationOrder *pFVar11;
  UClass *pUVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FControlRotationOrder local_38 [2];
  EEulerRotationOrder local_34;
  
  pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
  if (((pUVar5 != (UControlRig *)0x0) &&
      ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr != (URigHierarchy *)0x0)) &&
     (lVar10 = (**(code **)(pUVar5->_padding_ + 0x3c8))(), lVar10 != 0)) {
    bVar8 = false;
    pFVar1 = (FName *)(lVar10 + 0x14);
    local_38[0].bOverrideSetting = false;
    pFVar11 = TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
              ::Find((TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                      *)&this->ControlsRotationOrder,*(FName *)(lVar10 + 0x14));
    if ((pFVar11 != (FControlRotationOrder *)0x0) && (pFVar11 != local_38)) {
      local_38[0].RotationOrder = pFVar11->RotationOrder;
      bVar8 = true;
      local_38[0].bOverrideSetting = true;
    }
    if ((bVar8 != param_2->bIsSet) ||
       ((bVar8 != false && (local_38[0].RotationOrder != param_2->TypedValue)))) {
      if (param_2->bIsSet == false) {
        TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
        ::Remove((TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                  *)&this->ControlsRotationOrder,*param_1);
      }
      else {
        FVar6 = *pFVar1;
        uVar9 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
        pFVar11 = TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                              *)&this->ControlsRotationOrder,FVar6.Number + uVar9,pFVar1);
        if ((param_2->bIsSet == false) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar8 = false;
        pFVar11->RotationOrder = param_2->TypedValue;
        if ((((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr)->
             bUsePreferredEulerAngles != false) && (*(char *)(lVar10 + 0x3e1) != '\0')) {
          local_34 = *(EEulerRotationOrder *)(lVar10 + 0x3e0);
          bVar8 = true;
        }
        if ((bVar8 != param_2->bIsSet) || ((bVar8 != false && (local_34 != param_2->TypedValue)))) {
          pFVar11->bOverrideSetting = true;
        }
      }
      pFVar13 = (this->Sections).AllocatorInstance.Data;
      iVar3 = (this->Sections).ArrayNum;
      pFVar2 = pFVar13 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->Sections).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar13 == pFVar2) break;
        this_00 = *(UMovieSceneControlRigParameterSection **)pFVar13;
        if (this_00 != (UMovieSceneControlRigParameterSection *)0x0) {
          pUVar12 = UMovieSceneControlRigParameterSection::StaticClass();
          iVar4 = (int)pUVar12->_padding_;
          if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar12->_padding_)) {
            UMovieSceneControlRigParameterSection::ChangeControlRotationOrder
                      (this_00,pFVar1,(TOptional<EEulerRotationOrder> *)local_38,param_2,param_3);
          }
        }
        pFVar13 = pFVar13 + 8;
      }
    }
  }
  return;
}

// CheckForNameChanges @ 14a3f0ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::CheckForNameChanges(UMovieSceneControlRigParameterTrack *this)

{
  TMap<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
  *this_00;
  FName *pFVar1;
  UControlRig *pUVar2;
  FName FVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  ForAnyElementType FVar13;
  undefined2 local_res8 [4];
  TPairInitializer<FName_const_&,FControlRotationOrder_const_&> local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FName *local_48;
  undefined2 *local_40;
  
  pUVar2 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (bVar6 = UControlRig::IsModularRig(pUVar2), !bVar6)) {
    return;
  }
  this_00 = &this->ControlsRotationOrder;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
              *)this_00,&local_58);
  iVar5 = local_58.ArrayNum;
  uVar10 = (ulonglong)local_58.ArrayNum;
  pFVar1 = (FName *)(local_58.AllocatorInstance.Data + uVar10 * 8);
  FVar13.Data = local_58.AllocatorInstance.Data;
  do {
    while( true ) {
      if ((int)uVar10 != iVar5) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if ((FName *)FVar13.Data == pFVar1) {
        if (local_58.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_58.AllocatorInstance.Data);
        return;
      }
      FVar3 = *(FName *)FVar13.Data;
      uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      if (*(int *)&(this->ControlsRotationOrder).field_0x8 !=
          *(int *)&(this->ControlsRotationOrder).field_0x34) break;
LAB_14a3f11a7:
      uVar10 = local_58._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 8;
    }
    puVar4 = *(undefined1 **)&(this->ControlsRotationOrder).field_0x40;
    puVar11 = &(this->ControlsRotationOrder).field_0x38;
    if (puVar4 != (undefined1 *)0x0) {
      puVar11 = puVar4;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->ControlsRotationOrder).field_0x48 - 1U & FVar3.Number + uVar7)
                    * 4);
    if (iVar8 == -1) goto LAB_14a3f11a7;
    do {
      lVar9 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x14;
      if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x14) == FVar3) {
        puVar12 = (undefined2 *)(lVar9 + 8);
        if (lVar9 == 0) {
          puVar12 = (undefined2 *)0x0;
        }
        if ((puVar12 != (undefined2 *)0x0) &&
           (pUVar2 = (this->ControlRig).field0_0x0.DebugPtr,
           lVar9 = (**(code **)(pUVar2->_padding_ + 0x3c8))(pUVar2,FVar13.Data), lVar9 != 0)) {
          FVar3 = *(FName *)FVar13.Data;
          if (*(FName *)(lVar9 + 0x14) != FVar3) {
            local_res8[0] = *puVar12;
            local_res10.Value = (FControlRotationOrder *)FVar3;
            if (*(int *)&(this->ControlsRotationOrder).field_0x8 !=
                *(int *)&(this->ControlsRotationOrder).field_0x34) {
              uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
              TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
                                   *)this_00,FVar3.Number + uVar7,(FName *)&local_res10.Value);
            }
            local_40 = local_res8;
            local_48 = (FName *)(lVar9 + 0x14);
            TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FControlRotationOrder_const_&>_>
                      ((TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
                        *)this_00,&local_res10,(bool *)&local_48);
          }
        }
        goto LAB_14a3f11a7;
      }
      iVar8 = *(int *)(lVar9 + 0xc);
    } while (iVar8 != -1);
    uVar10 = local_58._8_8_ & 0xffffffff;
    FVar13.Data = FVar13.Data + 8;
  } while( true );
}

// CreateControlRigSection @ 14a4003a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneControlRigParameterTrack::CreateControlRigSection
          (UMovieSceneControlRigParameterTrack *this,FFrameNumber param_1,UControlRig *param_2,
          bool param_3)

{
  int iVar1;
  UControlRig *pUVar2;
  UMovieSceneSection *pUVar3;
  UClass *pUVar4;
  undefined4 local_res18;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == (UControlRig *)0x0) {
    return (UMovieSceneSection *)0x0;
  }
  if (!param_3) {
    (**(code **)(param_2->_padding_ + 0x170))(param_2,0,this,0);
  }
  pUVar2 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((pUVar2 != (UControlRig *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ControlRig).field0_0x0.DebugPtr)->PreConstructionEvent,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ControlRig).field0_0x0.DebugPtr)->PostConstructionEvent,this);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->ControlRig).field0_0x0.DebugPtr = param_2;
  BindControlRigDelegates(this);
  pUVar3 = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if (pUVar3 != (UMovieSceneSection *)0x0) {
    pUVar4 = UMovieSceneControlRigParameterSection::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14a400476;
  }
  pUVar3 = (UMovieSceneSection *)0x0;
LAB_14a400476:
  pUVar4 = Z_Construct_UClass_UMovieScene_NoRegister();
  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  local_28 = CONCAT31(local_28._1_3_,2);
  local_18 = local_28;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  local_20 = local_res18;
  local_1c = 0;
  local_14 = 0;
  (**(code **)(pUVar3->_padding_ + 0x2c8))(pUVar3,&local_20);
  (**(code **)this->_padding_)(&this->_padding_,pUVar3);
  return pUVar3;
}

// CreateNewSection @ 14a400d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneControlRigParameterTrack::CreateNewSection(UMovieSceneControlRigParameterTrack *this)

{
  code *pcVar1;
  UControlRig *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UMovieSceneControlRigParameterSection *this_00;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [40];
  UMovieSceneControlRigParameterTrack *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8._0_8_ = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UMovieSceneControlRigParameterSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_c8 + 0x20),pUVar4);
  local_78 = 0;
  lStack_70 = 0;
  local_98 = 0;
  local_90 = 8;
  local_80 = 0;
  local_88 = 0;
  local_a0 = this;
  this_00 = (UMovieSceneControlRigParameterSection *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_c8 + 0x20));
  if (local_68 != 0) {
    plVar5 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  UMovieSceneControlRigParameterSection::SetControlRig
            (this_00,(this->ControlRig).field0_0x0.DebugPtr);
  pcVar1 = *(code **)(this_00->_padding_ + 0x2e8);
  bVar6 = (this->Sections).ArrayNum != 0;
  if (bVar6) {
    (*pcVar1)(this_00,2);
  }
  else {
    (*pcVar1)(this_00,1);
  }
  local_c8._8_4_ = 0;
  local_c8._0_8_ = HandleOnSpaceAdded;
  local_c8._24_8_ = (ulonglong)(uint)local_c8._12_4_ << 0x20;
  local_c8._16_8_ = HandleOnSpaceAdded;
  TMulticastDelegateRegistration<void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UMovieSceneControlRigParameterTrack>
            ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
              *)&this_00->OnSpaceChannelAdded,(UMovieSceneControlRigParameterTrack *)local_c8,
             (pmf_1aa6ebad *)this);
  bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->_padding_,this)
  ;
  if (!bVar3) {
    local_c8._8_4_ = 0;
    local_c8._0_8_ = HandleOnConstraintAdded;
    local_c8._24_8_ = (ulonglong)(uint)local_c8._12_4_ << 0x20;
    local_c8._16_8_ = HandleOnConstraintAdded;
    TMulticastDelegateRegistration<void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UMovieSceneControlRigParameterTrack>
              ((TMulticastDelegateRegistration<void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
                *)&this_00->_padding_,(UMovieSceneControlRigParameterTrack *)local_c8,
               (pmf_f9b66cf6 *)this);
  }
  pUVar2 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar2 != (UControlRig *)0x0) {
    UMovieSceneControlRigParameterSection::RecreateWithThisControlRig(this_00,pUVar2,!bVar6);
  }
  return (UMovieSceneSection *)this_00;
}

// CreateTemplateForSection @ 14a401110

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneControlRigParameterTrack::CreateTemplateForSection
          (UMovieSceneControlRigParameterTrack *this,
          FMovieSceneEvalTemplatePtr *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FMovieSceneControlRigParameterTemplate *pFVar6;
  FMovieSceneControlRigParameterTemplate *pFVar7;
  FMovieSceneEvalTemplatePtr *pFVar8;
  FMovieSceneEvalTemplatePtr *pFVar9;
  FString *pFVar10;
  FMovieSceneControlRigParameterTemplate *this_00;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FMovieSceneControlRigParameterTemplate local_c8;
  
  if (UE::MovieScene::GCanUseLegacyControlRigTemplate) {
    if (param_1 == (UMovieSceneSection *)0x0) {
      pFVar10 = GetTypeName<UMovieSceneControlRigParameterSection>(&local_f8);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar11);
    }
    pUVar5 = UMovieSceneControlRigParameterSection::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar5->_padding_)) {
      pFVar10 = GetTypeName<UMovieSceneControlRigParameterSection>(&local_e8);
      pwVar11 = L"";
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      pFVar10 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_d8,param_1);
      if ((pFVar10->Data).ArrayNum != 0) {
        pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar11,pwVar12);
    }
    pFVar6 = FMovieSceneControlRigParameterTemplate::FMovieSceneControlRigParameterTemplate
                       (&local_c8,(UMovieSceneControlRigParameterSection *)param_1,
                        (UMovieSceneControlRigParameterTrack *)
                        &this[-1].OnSpaceChannelAdded.field_0x8);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfc;
    pFVar7 = FMemory::Malloc(0xc0,8);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 1;
    *(FMovieSceneControlRigParameterTemplate **)__return_storage_ptr__ = pFVar7;
    this_00 = (FMovieSceneControlRigParameterTemplate *)__return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      this_00 = pFVar7;
    }
    FMovieSceneControlRigParameterTemplate::FMovieSceneControlRigParameterTemplate(this_00,pFVar6);
    if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar8;
      }
    }
    bVar1 = __return_storage_ptr__->field_0x80;
    pFVar8 = __return_storage_ptr__;
    if ((bVar1 & 2) == 0) {
      pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if ((bVar1 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar8;
      }
    }
    pFVar9 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar9 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if (pFVar8 != pFVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar8;
      }
    }
    FMovieSceneControlRigParameterTemplate::~FMovieSceneControlRigParameterTemplate(&local_c8);
  }
  else {
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 2;
  }
  return __return_storage_ptr__;
}

// FindAllSections @ 14a40a320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UMovieSceneControlRigParameterTrack::FindAllSections
          (UMovieSceneControlRigParameterTrack *this,
          TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FFrameNumber param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForElementType<UMovieSceneSection_*> FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ForElementType<UMovieSceneSection_*> FVar8;
  TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  char cVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8 [8];
  UMovieSceneSection *local_58;
  undefined1 local_50;
  int local_4c;
  undefined1 local_48;
  int local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [3];
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<UMovieSceneSection_*>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 4;
  pFVar12 = (this->Sections).AllocatorInstance.Data;
  iVar2 = (this->Sections).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  do {
    if ((this->Sections).ArrayNum != iVar2) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar12 == pFVar1) {
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
        FVar8 = FVar3;
      }
      AlgoImpl::
      IntroSortInternal<UMovieSceneSection_*,int,FIdentityFunctor,bool_(__cdecl*)(UMovieSceneSection_const_*,UMovieSceneSection_const_*)>
                ((UMovieSceneSection **)FVar8,__return_storage_ptr__->ArrayNum,local_res8[0],
                 MovieSceneHelpers::SortOverlappingSections);
      return __return_storage_ptr__;
    }
    local_58 = *(UMovieSceneSection **)pFVar12;
    bVar5 = MovieSceneHelpers::IsSectionKeyable(local_58);
    if (bVar5) {
      local_50 = 1;
      local_4c = param_1.Value;
      local_40 = *(undefined4 *)&(local_58->SectionRange).Value.LowerBound;
      iStack_3c = (local_58->SectionRange).Value.LowerBound.Value.Value;
      uStack_38 = *(undefined4 *)&(local_58->SectionRange).Value.UpperBound;
      aiStack_34[0] = (local_58->SectionRange).Value.UpperBound.Value.Value;
      cVar6 = (char)local_40;
      if (cVar6 == '\x02') {
        piVar11 = &iStack_3c;
        cVar10 = cVar6;
LAB_14a40a3f4:
        bVar5 = cVar10 != cVar6;
        cVar6 = cVar10;
        if (bVar5) goto LAB_14a40a531;
      }
      else {
        if (param_1.Value <= iStack_3c) {
          if ((param_1.Value < iStack_3c) || (piVar11 = &iStack_3c, cVar6 != '\x01')) {
            piVar11 = &local_4c;
          }
          cVar10 = '\x01';
          goto LAB_14a40a3f4;
        }
        piVar11 = &iStack_3c;
      }
      if ((cVar6 == '\x02') || (*piVar11 == iStack_3c)) {
        local_48 = 1;
        local_44 = param_1.Value;
        cVar6 = (char)uStack_38;
        if (cVar6 == '\x02') {
          piVar11 = aiStack_34;
          cVar10 = cVar6;
LAB_14a40a455:
          bVar5 = cVar10 != cVar6;
          cVar6 = cVar10;
          if (bVar5) goto LAB_14a40a531;
        }
        else {
          if (aiStack_34[0] <= param_1.Value) {
            if ((aiStack_34[0] < param_1.Value) || (piVar11 = aiStack_34, cVar6 != '\x01')) {
              piVar11 = &local_44;
            }
            cVar10 = '\x01';
            goto LAB_14a40a455;
          }
          piVar11 = aiStack_34;
        }
        if ((cVar6 == '\x02') || (*piVar11 == aiStack_34[0])) {
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
            FVar8 = FVar3;
          }
          if ((ulonglong)FVar8 <= &local_58) {
            FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
            if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
              FVar8 = FVar3;
            }
            if ((&local_58 <
                 (UMovieSceneSection **)
                 ((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)(*pcVar4)();
              return pTVar9;
            }
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UMovieSceneSection_*>_>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
            FVar8 = FVar3;
          }
          *(UMovieSceneSection **)((longlong)FVar8 + (longlong)iVar7 * 8) = local_58;
        }
      }
    }
LAB_14a40a531:
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// FindOrAddSection @ 14a40c240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneControlRigParameterTrack::FindOrAddSection
          (UMovieSceneControlRigParameterTrack *this,FFrameNumber param_1,bool *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar2;
  ForElementType<UMovieSceneSection_*> FVar3;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UMovieSceneSection *pUVar8;
  TObjectPtr<UMovieSceneSection>_u_0 this_00;
  ForElementType<UMovieSceneSection_*> FVar9;
  longlong lVar10;
  undefined2 uStackX_11;
  undefined1 uStackX_13;
  undefined1 auStack_e8 [32];
  TObjectPtr<UMovieSceneSection>_u_0 *local_c8;
  TObjectPtr<UMovieSceneSection>_u_0 *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [8];
  TObjectPtr<UMovieSceneSection>_u_0 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined2 local_83;
  undefined1 local_81;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 local_70;
  TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  *param_2 = false;
  FindAllSections(this,&local_68,param_1);
  if (local_68.ArrayNum == 0) {
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
  }
  else {
    pUVar8 = (this->SectionToKey).field0_0x0.DebugPtr;
    if (pUVar8 != (UMovieSceneSection *)0x0) {
      FVar9 = (ForElementType<UMovieSceneSection_*>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
        FVar9 = local_68.AllocatorInstance.SecondaryData;
      }
      FVar3 = (ForElementType<UMovieSceneSection_*>)
              ((longlong)FVar9 + (longlong)local_68.ArrayNum * 8);
      for (; FVar9 != FVar3; FVar9 = (ForElementType<UMovieSceneSection_*>)((longlong)FVar9 + 8)) {
        if (pUVar8 == *(UMovieSceneSection **)FVar9) {
          if (local_68.AllocatorInstance.SecondaryData == (ForElementType<UMovieSceneSection_*>)0x0)
          {
            return pUVar8;
          }
          FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
          return pUVar8;
        }
      }
    }
    if (local_68.ArrayNum < 1) {
      local_c0 = (TObjectPtr<UMovieSceneSection>_u_0 *)(longlong)local_68.ArrayNum;
      local_c8 = (TObjectPtr<UMovieSceneSection>_u_0 *)0x0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UMovieSceneSection *)(*pcVar5)();
        return pUVar8;
      }
    }
    FVar9 = (ForElementType<UMovieSceneSection_*>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
      FVar9 = local_68.AllocatorInstance.SecondaryData;
    }
    pUVar8 = *(UMovieSceneSection **)FVar9;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    if (pUVar8 != (UMovieSceneSection *)0x0) {
      return pUVar8;
    }
  }
  this_00.DebugPtr = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if ((*(EObjectFlags *)&(this_00.DebugPtr)->_padding_ & RF_Transactional) == RF_NoFlags) {
    local_98[0] = 0;
    `UMovieSceneControlRigParameterTrack::FindOrAddSection'::__l2::<lambda_1>::operator()(local_98);
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00.DebugPtr,RF_Transactional);
  uStackX_11 = (undefined2)((uint)param_1.Value >> 8);
  uStackX_13 = (undefined1)((uint)param_1.Value >> 0x18);
  local_83 = uStackX_11;
  local_81 = uStackX_13;
  local_7b = uStackX_11;
  local_79 = uStackX_13;
  local_78 = CONCAT31(local_78._1_3_,1);
  local_88 = local_78;
  local_70 = CONCAT31(local_70._1_3_,1);
  local_80 = local_70;
  local_84 = (undefined1)param_1.Value;
  local_7c = local_84;
  (**(code **)((this_00.DebugPtr)->_padding_ + 0x2c8))(this_00.DebugPtr,&local_88);
  pTVar2 = &this->Sections;
  local_90.DebugPtr = this_00.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  pTVar4 = (TObjectPtr<UMovieSceneSection>_u_0 *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar4 <= &local_90) &&
     (lVar10 = (longlong)(this->Sections).ArrayMax, &local_90 < pTVar4 + lVar10)) {
    local_b0 = (longlong)(this->Sections).ArrayNum;
    local_a8 = 8;
    local_c8 = &local_90;
    local_c0 = pTVar4;
    local_b8 = lVar10;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UMovieSceneSection *)(*pcVar5)();
      return pUVar8;
    }
  }
  iVar7 = (this->Sections).ArrayNum;
  piVar1 = &(this->Sections).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Sections).ArrayNum = iVar7 + 1;
  ((TObjectPtr<UMovieSceneSection>_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8))->
  DebugPtr = (UMovieSceneSection *)local_90;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_90.DebugPtr != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_90.DebugPtr);
  }
  *param_2 = true;
  return (UMovieSceneSection *)this_00;
}

// FindOrExtendSection @ 14a40c590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneControlRigParameterTrack::FindOrExtendSection
          (UMovieSceneControlRigParameterTrack *this,FFrameNumber param_1,float *param_2)

{
  ForElementType<UMovieSceneSection_*> FVar1;
  TRangeBound<FFrameNumber> TVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  TEnumAsByte<ERangeBoundTypes::Type> TVar8;
  uint uVar9;
  uint uVar10;
  UMovieSceneSection *pUVar11;
  ForElementType<UMovieSceneSection_*> FVar12;
  FFrameNumber FVar13;
  UMovieSceneSection *pUVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  TRangeBound<FFrameNumber> local_b8;
  undefined4 local_b0;
  int iStack_ac;
  undefined4 local_a8;
  int iStack_a4;
  undefined4 local_a0;
  int iStack_9c;
  undefined4 local_98;
  int iStack_94;
  TRangeBound<FFrameNumber> local_90;
  undefined4 local_88;
  int iStack_84;
  undefined4 local_80;
  int iStack_7c;
  TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  *param_2 = 1.0;
  FindAllSections(this,&local_78,param_1);
  pUVar11 = (this->SectionToKey).field0_0x0.DebugPtr;
  if ((pUVar11 == (UMovieSceneSection *)0x0) ||
     (bVar6 = MovieSceneHelpers::IsSectionKeyable(pUVar11), !bVar6)) {
    if (local_78.ArrayNum < 1) {
      iVar17 = (this->Sections).ArrayNum;
      pUVar14 = (UMovieSceneSection *)0x0;
      pUVar11 = pUVar14;
      if (0 < iVar17) {
        uVar15 = 1;
        lVar16 = 8;
        do {
          uVar18 = (uint)pUVar14;
          uVar9 = 0;
          if ((int)uVar18 < iVar17) {
            uVar9 = ~uVar18 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_c0 = (longlong)iVar17;
            local_c8 = (longlong)(int)uVar18;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pUVar11 = (UMovieSceneSection *)(*pcVar4)();
              return pUVar11;
            }
          }
          uVar9 = 0;
          if (((int)uVar15 < 0) || ((this->Sections).ArrayNum <= (int)uVar15)) {
LAB_14a40c978:
            if (0 < (int)uVar18) {
              iVar17 = (this->Sections).ArrayNum;
              uVar18 = uVar18 - 1;
              if ((int)uVar18 < iVar17) {
                uVar9 = ~uVar18 >> 0x1f;
              }
              if (uVar9 == 0) {
                local_c8 = (longlong)(int)uVar18;
                local_c0 = (longlong)iVar17;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  pUVar11 = (UMovieSceneSection *)(*pcVar4)();
                  return pUVar11;
                }
              }
              local_a0 = CONCAT31(local_a0._1_3_,1);
              pUVar11 = *(UMovieSceneSection **)
                         ((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar18 * 8);
              iStack_9c = param_1.Value;
              (**(code **)(pUVar11->_padding_ + 0x2d8))(pUVar11,CONCAT44(param_1.Value,local_a0));
              break;
            }
            uVar18 = uVar18 + 1;
            if (((int)uVar18 < 0) || ((this->Sections).ArrayNum <= (int)uVar18)) {
              iVar17 = (this->Sections).ArrayNum;
              if (iVar17 < 1) {
                local_c8 = 0;
                local_c0 = (longlong)iVar17;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  pUVar11 = (UMovieSceneSection *)(*pcVar4)();
                  return pUVar11;
                }
              }
              pUVar11 = *(UMovieSceneSection **)(this->Sections).AllocatorInstance.Data;
              TVar2 = (pUVar11->SectionRange).Value.UpperBound;
              if (TVar2.Type.Value.Value != '\x02') {
                uVar15 = TVar2._0_4_ & 0xff;
                local_90 = TVar2;
                if (TVar2.Type.Value.Value == '\x01') {
                  if ((uVar15 == 2) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Type != ERangeBoundTypes::Open",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                         ,99,L""), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    pUVar11 = (UMovieSceneSection *)(*pcVar4)();
                    return pUVar11;
                  }
                  FVar13.Value = local_90.Value.Value + 1;
                }
                else {
                  if ((uVar15 == 2) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Type != ERangeBoundTypes::Open",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                         ,99,L""), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    pUVar11 = (UMovieSceneSection *)(*pcVar4)();
                    return pUVar11;
                  }
                  FVar13.Value = local_90.Value.Value;
                }
                if (FVar13.Value <= param_1.Value) {
                  TVar2 = (pUVar11->SectionRange).Value.UpperBound;
                  TVar8 = TVar2.Type.Value;
                  FVar13 = TVar2.Value.Value;
                  if (TVar8.Value == '\x01') {
                    FVar13.Value = FVar13.Value + 1;
                  }
                  else if ((TVar8.Value == '\x02') &&
                          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Type != ERangeBoundTypes::Open",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                              ,99,L""), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    pUVar11 = (UMovieSceneSection *)(*pcVar4)();
                    return pUVar11;
                  }
                  if (FVar13.Value != param_1.Value) {
                    local_88 = CONCAT31(local_88._1_3_,1);
                    iStack_84 = param_1.Value;
                    (**(code **)(pUVar11->_padding_ + 0x2d8))
                              (pUVar11,CONCAT44(param_1.Value,local_88));
                  }
                  break;
                }
              }
              local_80 = CONCAT31(local_80._1_3_,1);
              iStack_7c = param_1.Value;
              uVar5 = local_80;
            }
            else {
              iVar17 = (this->Sections).ArrayNum;
              if ((int)uVar18 < iVar17) {
                uVar9 = ~uVar18 >> 0x1f;
              }
              if (uVar9 == 0) {
                local_c8 = (longlong)(int)uVar18;
                local_c0 = (longlong)iVar17;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  pUVar11 = (UMovieSceneSection *)(*pcVar4)();
                  return pUVar11;
                }
              }
              local_98 = CONCAT31(local_98._1_3_,1);
              pUVar11 = *(UMovieSceneSection **)
                         ((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar18 * 8);
              iStack_94 = param_1.Value;
              uVar5 = local_98;
            }
            (**(code **)(pUVar11->_padding_ + 0x2d0))(pUVar11,CONCAT44(param_1.Value,uVar5));
            break;
          }
          iVar17 = (this->Sections).ArrayNum;
          uVar10 = uVar9;
          if ((int)uVar15 < iVar17) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_c8 = (longlong)(int)uVar15;
            local_c0 = (longlong)iVar17;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pUVar11 = (UMovieSceneSection *)(*pcVar4)();
              return pUVar11;
            }
          }
          if (*(char *)(*(longlong *)((this->Sections).AllocatorInstance.Data + lVar16) + 0xb8) !=
              '\x02') {
            iVar17 = (this->Sections).ArrayNum;
            uVar10 = uVar9;
            if ((int)uVar15 < iVar17) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if (uVar10 == 0) {
              local_c8 = (longlong)(int)uVar18 + 1;
              local_c0 = (longlong)iVar17;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pUVar11 = (UMovieSceneSection *)(*pcVar4)();
                return pUVar11;
              }
            }
            uVar3 = *(undefined8 *)
                     (*(longlong *)((this->Sections).AllocatorInstance.Data + lVar16) + 0xb8);
            cVar7 = (char)uVar3;
            iVar17 = (int)((ulonglong)uVar3 >> 0x20);
            if (cVar7 == '\x01') {
              iVar17 = iVar17 + 1;
            }
            else if ((cVar7 == '\x02') &&
                    (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type != ERangeBoundTypes::Open",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                        ,99,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              pUVar11 = (UMovieSceneSection *)(*pcVar4)();
              return pUVar11;
            }
            if (param_1.Value < iVar17) goto LAB_14a40c978;
          }
          iVar17 = (this->Sections).ArrayNum;
          pUVar14 = (UMovieSceneSection *)(ulonglong)(uVar18 + 1);
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 8;
          pUVar11 = (UMovieSceneSection *)0x0;
        } while ((int)(uVar18 + 1) < iVar17);
      }
    }
    else {
      FVar12 = (ForElementType<UMovieSceneSection_*>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
        FVar12 = local_78.AllocatorInstance.SecondaryData;
      }
      pUVar11 = *(UMovieSceneSection **)FVar12;
    }
    goto LAB_14a40cbbe;
  }
  FVar12 = (ForElementType<UMovieSceneSection_*>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
    FVar12 = local_78.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UMovieSceneSection_*>)((longlong)FVar12 + (longlong)local_78.ArrayNum * 8)
  ;
  if (FVar12 != FVar1) {
    pUVar11 = (this->SectionToKey).field0_0x0.DebugPtr;
    do {
      if (pUVar11 == (UMovieSceneSection *)0x0) {
        bVar6 = *(UMovieSceneSection **)FVar12 == (UMovieSceneSection *)0x0;
      }
      else {
        bVar6 = pUVar11 == *(UMovieSceneSection **)FVar12;
      }
      if (bVar6) {
        bVar19 = SBORROW4(local_78.ArrayNum,1);
        iVar17 = local_78.ArrayNum + -1;
        bVar6 = local_78.ArrayNum == 1;
        goto LAB_14a40c77b;
      }
      FVar12 = (ForElementType<UMovieSceneSection_*>)((longlong)FVar12 + 8);
    } while (FVar12 != FVar1);
  }
  TVar2 = (((this->SectionToKey).field0_0x0.DebugPtr)->SectionRange).Value.UpperBound;
  if (TVar2.Type.Value.Value == '\x02') {
LAB_14a40c755:
    pUVar11 = (this->SectionToKey).field0_0x0.DebugPtr;
    local_a8 = CONCAT31(local_a8._1_3_,1);
    iStack_a4 = param_1.Value;
    (**(code **)(pUVar11->_padding_ + 0x2d0))(pUVar11,CONCAT44(param_1.Value,local_a8));
  }
  else {
    uVar15 = TVar2._0_4_ & 0xff;
    local_b8 = TVar2;
    if (TVar2.Type.Value.Value == '\x01') {
      if ((uVar15 == 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pUVar11 = (UMovieSceneSection *)(*pcVar4)();
        return pUVar11;
      }
      FVar13.Value = local_b8.Value.Value + 1;
    }
    else {
      if ((uVar15 == 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pUVar11 = (UMovieSceneSection *)(*pcVar4)();
        return pUVar11;
      }
      FVar13.Value = local_b8.Value.Value;
    }
    if (param_1.Value < FVar13.Value) goto LAB_14a40c755;
    TVar2 = (((this->SectionToKey).field0_0x0.DebugPtr)->SectionRange).Value.UpperBound;
    TVar8 = TVar2.Type.Value;
    FVar13 = TVar2.Value.Value;
    if (TVar8.Value == '\x01') {
      FVar13.Value = FVar13.Value + 1;
    }
    else if ((TVar8.Value == '\x02') &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar11 = (UMovieSceneSection *)(*pcVar4)();
      return pUVar11;
    }
    if (FVar13.Value != param_1.Value) {
      pUVar11 = (this->SectionToKey).field0_0x0.DebugPtr;
      local_b0 = CONCAT31(local_b0._1_3_,1);
      iStack_ac = param_1.Value;
      (**(code **)(pUVar11->_padding_ + 0x2d8))(pUVar11,CONCAT44(param_1.Value,local_b0));
    }
  }
  bVar19 = false;
  bVar6 = local_78.ArrayNum == 0;
  iVar17 = local_78.ArrayNum;
LAB_14a40c77b:
  if (!bVar6 && bVar19 == iVar17 < 0) {
    fVar20 = MovieSceneHelpers::CalculateWeightForBlending
                       ((this->SectionToKey).field0_0x0.DebugPtr,param_1);
    *param_2 = fVar20;
  }
  pUVar11 = (this->SectionToKey).field0_0x0.DebugPtr;
LAB_14a40cbbe:
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pUVar11;
}

// FindSection @ 14a40ce90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneControlRigParameterTrack::FindSection
          (UMovieSceneControlRigParameterTrack *this,FFrameNumber param_1)

{
  ForElementType<UMovieSceneSection_*> FVar1;
  code *pcVar2;
  bool bVar3;
  UMovieSceneSection *pUVar4;
  ForElementType<UMovieSceneSection_*> FVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FindAllSections(this,&local_48,param_1);
  if (local_48.ArrayNum == 0) {
    pUVar4 = (UMovieSceneSection *)0x0;
  }
  else {
    pUVar4 = (this->SectionToKey).field0_0x0.DebugPtr;
    if (pUVar4 != (UMovieSceneSection *)0x0) {
      FVar5 = (ForElementType<UMovieSceneSection_*>)&local_48;
      if (local_48.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
        FVar5 = local_48.AllocatorInstance.SecondaryData;
      }
      FVar1 = (ForElementType<UMovieSceneSection_*>)
              ((longlong)FVar5 + (longlong)local_48.ArrayNum * 8);
      for (; FVar5 != FVar1; FVar5 = (ForElementType<UMovieSceneSection_*>)((longlong)FVar5 + 8)) {
        if (pUVar4 == *(UMovieSceneSection **)FVar5) goto LAB_14a40cf50;
      }
    }
    if (local_48.ArrayNum < 1) {
      local_50 = (longlong)local_48.ArrayNum;
      local_58 = 0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UMovieSceneSection *)(*pcVar2)();
        return pUVar4;
      }
    }
    FVar5 = (ForElementType<UMovieSceneSection_*>)&local_48;
    if (local_48.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
      FVar5 = local_48.AllocatorInstance.SecondaryData;
    }
    pUVar4 = *(UMovieSceneSection **)FVar5;
  }
LAB_14a40cf50:
  if (local_48.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
    FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
  }
  return pUVar4;
}

// GetAllSections @ 14a410c60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterTrack::GetAllSections(UMovieSceneControlRigParameterTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetControlRotationOrder @ 14a4132b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<EEulerRotationOrder> __thiscall
UMovieSceneControlRigParameterTrack::GetControlRotationOrder
          (UMovieSceneControlRigParameterTrack *this,FRigControlElement *param_1,bool param_2)

{
  FRigControlElement *pFVar1;
  undefined7 in_register_00000081;
  char in_R9B;
  
  param_1->field_0x1 = 0;
  if (in_R9B == '\0') {
    if ((((CONCAT71(in_register_00000081,param_2) != 0) &&
         (((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr)->
          bUsePreferredEulerAngles != false)) &&
        (*(char *)(CONCAT71(in_register_00000081,param_2) + 0x3e1) != '\0')) &&
       ((FRigControlElement *)&stack0xffffffffffffffe8 != param_1)) {
      *(undefined1 *)param_1 = *(undefined1 *)(CONCAT71(in_register_00000081,param_2) + 0x3e0);
      param_1->field_0x1 = 1;
    }
  }
  else {
    pFVar1 = (FRigControlElement *)
             TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
             ::Find((TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                     *)&this->ControlsRotationOrder,
                    *(FName *)(CONCAT71(in_register_00000081,param_2) + 0x14));
    if ((pFVar1 != (FRigControlElement *)0x0) && (pFVar1 != param_1)) {
      *(undefined1 *)param_1 = *(undefined1 *)pFVar1;
      param_1->field_0x1 = 1;
      return SUB82(param_1,0);
    }
  }
  return SUB82(param_1,0);
}

// GetControlsWithDifferentRotationOrders @ 14a413340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterTrack::GetControlsWithDifferentRotationOrders
          (UMovieSceneControlRigParameterTrack *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  UControlRig *pUVar2;
  FRigControlElement *pFVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  FControlRotationOrder *pFVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  char cVar13;
  ulonglong uVar14;
  char cVar15;
  URigHierarchy *this_00;
  EEulerRotationOrder EVar16;
  undefined8 *puVar17;
  undefined1 local_res8 [8];
  EEulerRotationOrder local_res10;
  uint local_res18;
  URigHierarchy *local_res20;
  FControlRotationOrder local_68 [4];
  undefined8 *local_60;
  undefined8 *local_58;
  ulonglong local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar2 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar2 == (UControlRig *)0x0) {
    return __return_storage_ptr__;
  }
  this_00 = (pUVar2->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 != (URigHierarchy *)0x0) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    local_res20 = this_00;
    (**(code **)(pUVar2->_padding_ + 0x420))(pUVar2,&local_58);
    uVar12 = (ulonglong)(int)(uint)local_50;
    local_res18 = (uint)local_50;
    local_60 = local_58 + uVar12;
    uVar14 = uVar12;
    puVar17 = local_58;
    EVar16 = local_68[0].RotationOrder;
    while( true ) {
      puVar7 = local_60;
      if ((int)uVar12 != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar17 == puVar7) break;
      pFVar3 = (FRigControlElement *)*puVar17;
      bVar8 = URigHierarchy::IsAnimatable(this_00,pFVar3);
      if (bVar8) {
        FVar4.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
        FVar4.Number = *(uint *)&pFVar3->field_0x18;
        puVar1 = &pFVar3->field_0x14;
        cVar15 = '\0';
        pFVar10 = TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                  ::Find((TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                          *)&this->ControlsRotationOrder,FVar4);
        if ((pFVar10 != (FControlRotationOrder *)0x0) && (pFVar10 != local_68)) {
          EVar16 = pFVar10->RotationOrder;
          cVar15 = '\x01';
        }
        cVar13 = '\0';
        if ((((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr)->
             bUsePreferredEulerAngles != false) &&
           ((pFVar3->Settings).bUsePreferredRotationOrder != false)) {
          local_res10 = (pFVar3->Settings).PreferredRotationOrder;
          cVar13 = '\x01';
        }
        if (cVar15 == cVar13) {
          if (cVar15 == '\0') {
            bVar8 = false;
          }
          else {
            bVar8 = EVar16 != local_res10;
          }
        }
        else {
          bVar8 = true;
        }
        this_00 = local_res20;
        if (bVar8) {
          pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar5 <= puVar1) &&
              (puVar1 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar11;
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == __return_storage_ptr__->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) =
               *(undefined8 *)puVar1;
          this_00 = local_res20;
        }
      }
      uVar12 = local_50 & 0xffffffff;
      puVar17 = puVar17 + 1;
      uVar14 = (ulonglong)local_res18;
    }
    if (local_58 != (undefined8 *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return __return_storage_ptr__;
}

// GetGameWorldControlRig @ 14a414110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UControlRig * __thiscall
UMovieSceneControlRigParameterTrack::GetGameWorldControlRig
          (UMovieSceneControlRigParameterTrack *this,UWorld *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  UClass *pUVar4;
  FWeakObjectPtr this_00;
  UClass *pUVar5;
  undefined8 *puVar6;
  UControlRig *pUVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,TObjectPtr<UControlRig>_&&> local_e8;
  FWeakObjectPtr local_d8;
  TObjectPtr<UControlRig> **local_d0;
  FWeakObjectPtr *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_e8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)0x0;
  local_e8.Value = (TObjectPtr<UControlRig> *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_e8,(FObjectPtr)&local_e8.Value);
  local_e8.Value = (TObjectPtr<UControlRig> *)local_e8.Key;
  iVar3 = TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                      *)&this->GameWorldControlRigs,
                     (uint)((ulonglong)local_e8.Key >> 0x20) ^ (uint)local_e8.Key,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_e8.Value);
  if ((((iVar3 != -1) &&
       (lVar1 = *(longlong *)&this->GameWorldControlRigs + (longlong)iVar3 * 0x18, lVar1 != 0)) &&
      (lVar1 != -8)) ||
     (pUVar7 = (this->ControlRig).field0_0x0.DebugPtr, pUVar7 == (UControlRig *)0x0))
  goto LAB_14a4143a8;
  pUVar5 = (UClass *)pUVar7->_padding_;
  local_e8.Value = (TObjectPtr<UControlRig> *)0x0;
  local_e8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)0x0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UControlRig_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar5);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  this_00 = (FWeakObjectPtr)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  (**(code **)(*(longlong *)this_00 + 0x2c0))(this_00,1);
  pUVar7 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar7 == (UControlRig *)0x0) {
LAB_14a4142ea:
    cVar2 = (**(code **)(((this->ControlRig).field0_0x0.DebugPtr)->_padding_ + 0x490))();
    *(char *)((longlong)this_00 + 0x9c8) = cVar2;
    if (*(longlong *)((longlong)this_00 + 0x338) != 0) {
      *(bool *)(*(longlong *)((longlong)this_00 + 0x338) + 0x57c) = cVar2 == '\0';
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UFKControlRig_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) goto LAB_14a4142ea;
    pUVar5 = Z_Construct_UClass_UFKControlRig_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if (((iVar3 <= *(int *)(*(longlong *)((longlong)this_00 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)((longlong)this_00 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
         &pUVar5->_padding_)) && (this_00 != (FWeakObjectPtr)0x0)) {
      UFKControlRig::SetApplyMode
                ((UFKControlRig *)this_00,(EControlRigFKRigExecuteMode)pUVar7[1]._padding_);
    }
  }
  local_d8 = this_00;
  if (((UE::GC::GIsIncrementalReachabilityPending != false) &&
      (UE::GC::MarkAsReachable((UObject *)this_00),
      UE::GC::GIsIncrementalReachabilityPending != false)) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_e8.Value = (TObjectPtr<UControlRig> *)0x0;
  local_e8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_e8.Value,(FObjectPtr)&local_e8);
  local_d0 = &local_e8.Value;
  local_c8 = &local_d8;
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,TObjectPtr<UControlRig>_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
              *)&this->GameWorldControlRigs,&local_e8,(bool *)&local_d0);
LAB_14a4143a8:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_e8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)0x0;
  local_d8 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_e8,(FObjectPtr)&local_d8);
  local_d8 = (FWeakObjectPtr)local_e8.Key;
  iVar3 = TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                      *)&this->GameWorldControlRigs,
                     (uint)((ulonglong)local_e8.Key >> 0x20) ^ (uint)local_e8.Key,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_d8);
  if (((iVar3 == -1) ||
      (lVar1 = *(longlong *)&this->GameWorldControlRigs + (longlong)iVar3 * 0x18, lVar1 == 0)) ||
     (puVar6 = (undefined8 *)(lVar1 + 8), puVar6 == (undefined8 *)0x0)) {
    pUVar7 = (UControlRig *)0x0;
  }
  else {
    pUVar7 = (UControlRig *)*puVar6;
  }
  return pUVar7;
}

// GetNodeAndChannelMappings @ 14a416820

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigControlFBXNodeAndChannels,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterTrack::GetNodeAndChannelMappings
          (UMovieSceneControlRigParameterTrack *this,UMovieSceneSection *param_1)

{
  return (TArray<FRigControlFBXNodeAndChannels,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetPriorityOrder @ 14a416c10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
UMovieSceneControlRigParameterTrack::GetPriorityOrder(UMovieSceneControlRigParameterTrack *this)

{
  return this->PriorityOrder;
}

// GetPrivateStaticClass @ 14a4171f0

UClass * __cdecl UMovieSceneControlRigParameterTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"MovieSceneControlRigParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneControlRigParameterTrack,0x2a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneControlRigParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneControlRigParameterTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton;
}

// GetSectionToKey @ 14a419560

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneControlRigParameterTrack::GetSectionToKey
          (UMovieSceneControlRigParameterTrack *this,FName *param_1)

{
  bool bVar1;
  FWeakObjectPtr *this_00;
  UMovieSceneSection *pUVar2;
  
  this_00 = &TMapBase<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
             ::Find((TMapBase<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
                     *)&this->SectionToKeyPerControl,*param_1)->WeakPtr;
  if (this_00 != (FWeakObjectPtr *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid(this_00);
    if (bVar1) {
      pUVar2 = (UMovieSceneSection *)FWeakObjectPtr::Get(this_00);
      return pUVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4195b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x338))(this);
  return pUVar2;
}

// GetSectionToKey @ 14a4195c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneControlRigParameterTrack::GetSectionToKey(UMovieSceneControlRigParameterTrack *this)

{
  UMovieSceneSection *pUVar1;
  
  pUVar1 = (this->SectionToKey).field0_0x0.DebugPtr;
  if (pUVar1 == (UMovieSceneSection *)0x0) {
    if (0 < (this->Sections).ArrayNum) {
      return *(UMovieSceneSection **)(this->Sections).AllocatorInstance.Data;
    }
    pUVar1 = (UMovieSceneSection *)0x0;
  }
  return pUVar1;
}

// GetSectionsToKey @ 14a4195f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneControlRigParameterTrack::GetSectionsToKey
          (UMovieSceneControlRigParameterTrack *this,
          TArray<TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  UObject *pUVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  UObject *local_res8;
  FWeakObjectPtr local_18 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) < 1) {
    pUVar1 = (UObject *)this->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
    }
    local_18[0].ObjectIndex = 0;
    local_18[0].ObjectSerialNumber = 0;
    local_res8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=(local_18,(FObjectPtr)&local_res8);
    pFVar2 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= local_18) && (local_18 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_18[0];
  }
  else {
    TMapBase<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
                *)&this->_padding_,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetSelectedNodes @ 14a419750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::GetSelectedNodes
          (UMovieSceneControlRigParameterTrack *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  void *local_18 [2];
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
             (**(code **)(*plVar1 + 0x438))(plVar1,local_18);
    if (param_1 != pTVar3) {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_1->ArrayNum = pTVar3->ArrayNum;
      param_1->ArrayMax = pTVar3->ArrayMax;
      pTVar3->ArrayNum = 0;
      pTVar3->ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

// GetTrackName @ 14a41a440

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall
UMovieSceneControlRigParameterTrack::GetTrackName(UMovieSceneControlRigParameterTrack *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->TrackName;
  return in_RDX;
}

// HandleOnConstraintAdded @ 14a41c2a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::HandleOnConstraintAdded
          (UMovieSceneControlRigParameterTrack *this,IMovieSceneConstrainedSection *param_1,
          FMovieSceneConstraintChannel *param_2)

{
  TMulticastDelegate<void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnConstraintChannelAdded,param_1,param_2);
  return;
}

// HandleOnPostConstructed @ 14a41c2c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::HandleOnPostConstructed
          (UMovieSceneControlRigParameterTrack *this,UControlRig *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    HandleOnPostConstructed_GameThread(this);
    return;
  }
  return;
}

// HandleOnPostConstructed_GameThread @ 14a41c2f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::HandleOnPostConstructed_GameThread
          (UMovieSceneControlRigParameterTrack *this)

{
  undefined8 *puVar1;
  FName *pFVar2;
  undefined2 uVar3;
  int iVar4;
  UControlRig *pUVar5;
  UMovieSceneControlRigParameterSection *this_00;
  bool bVar6;
  longlong *plVar7;
  UClass *pUVar8;
  longlong lVar9;
  FControlRotationOrder *pFVar10;
  ulonglong uVar11;
  char cVar12;
  ForAnyElementType FVar13;
  char cVar14;
  undefined8 *puVar15;
  bool bVar16;
  EEulerRotationOrder EVar17;
  undefined1 local_res8 [8];
  TOptional<EEulerRotationOrder> local_res10 [4];
  FControlRotationOrder local_58 [4];
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> local_50;
  TArray<FName,TSizedDefaultAllocator<32>_> local_40;
  
  pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((pUVar5 != (UControlRig *)0x0) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) {
    CheckForNameChanges(this);
    pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    (**(code **)(pUVar5->_padding_ + 0x420))(pUVar5,&local_50);
    bVar16 = false;
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x360))(this);
    puVar15 = (undefined8 *)*plVar7;
    lVar9 = plVar7[1];
    puVar1 = puVar15 + (int)lVar9;
    while( true ) {
      if ((int)plVar7[1] != (int)lVar9) {
        `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar15 == puVar1) break;
      this_00 = (UMovieSceneControlRigParameterSection *)*puVar15;
      if (this_00 != (UMovieSceneControlRigParameterSection *)0x0) {
        pUVar8 = UMovieSceneControlRigParameterSection::StaticClass();
        iVar4 = (int)pUVar8->_padding_;
        if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar8->_padding_)) {
          bVar6 = UMovieSceneControlRigParameterSection::
                  IsDifferentThanLastControlsUsedToReconstruct(this_00,&local_50);
          if (bVar6) {
            uVar3 = *(undefined2 *)((longlong)&this_00->_padding_ + 1);
            if (((char)((ushort)uVar3 >> 8) == '\0') || ((char)uVar3 != '\x01')) {
              bVar16 = false;
            }
            else {
              bVar16 = true;
            }
            UMovieSceneControlRigParameterSection::RecreateWithThisControlRig
                      (this_00,(this->ControlRig).field0_0x0.DebugPtr,bVar16);
            bVar16 = true;
          }
        }
      }
      puVar15 = puVar15 + 1;
    }
    if (bVar16) {
      UMovieSceneSignedObject::BroadcastChanged((UMovieSceneSignedObject *)this);
    }
    if (0 < local_50.ArrayNum) {
      GetControlsWithDifferentRotationOrders(this,&local_40);
      iVar4 = local_40.ArrayNum;
      pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
      if ((pUVar5 != (UControlRig *)0x0) &&
         ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr != (URigHierarchy *)0x0)) {
        uVar11 = (ulonglong)local_40.ArrayNum;
        pFVar2 = (FName *)(local_40.AllocatorInstance.Data + uVar11 * 8);
        FVar13.Data = local_40.AllocatorInstance.Data;
        EVar17 = local_58[0].RotationOrder;
        while( true ) {
          if ((uint)uVar11 != iVar4) {
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if ((FName *)FVar13.Data == pFVar2) break;
          pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
          lVar9 = (**(code **)(pUVar5->_padding_ + 0x3c8))(pUVar5,FVar13.Data);
          if (lVar9 != 0) {
            cVar14 = '\0';
            pFVar10 = TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                      ::Find((TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                              *)&this->ControlsRotationOrder,*(FName *)(lVar9 + 0x14));
            if ((pFVar10 != (FControlRotationOrder *)0x0) && (pFVar10 != local_58)) {
              EVar17 = pFVar10->RotationOrder;
              cVar14 = '\x01';
            }
            cVar12 = '\0';
            local_res10[0].bIsSet = false;
            if ((((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr)
                 ->bUsePreferredEulerAngles != false) && (*(char *)(lVar9 + 0x3e1) != '\0')) {
              local_res10[0].TypedValue = *(EEulerRotationOrder *)(lVar9 + 0x3e0);
              cVar12 = '\x01';
              local_res10[0].bIsSet = true;
            }
            if ((cVar14 != cVar12) || ((cVar14 != '\0' && (EVar17 != local_res10[0].TypedValue)))) {
              ChangeControlRotationOrder(this,(FName *)FVar13.Data,local_res10,SmartAuto);
            }
          }
          uVar11 = (ulonglong)(uint)local_40.ArrayNum;
          FVar13.Data = FVar13.Data + 8;
        }
      }
      if ((FName *)local_40.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleOnPreConstruct @ 14a41c590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::HandleOnPreConstruct
          (UMovieSceneControlRigParameterTrack *this,UControlRig *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    HandleOnPreConstruct_GameThread(this);
    return;
  }
  return;
}

// HandleOnPreConstruct_GameThread @ 14a41c5c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::HandleOnPreConstruct_GameThread
          (UMovieSceneControlRigParameterTrack *this)

{
  int iVar1;
  UControlRig *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPropertyBag *pUVar5;
  uchar *_Dst;
  uchar *_Src;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FNameEntryId local_38;
  undefined4 uStack_34;
  FProperty *local_30;
  FNameEntryId local_28;
  undefined4 uStack_24;
  uchar *local_10;
  
  pUVar2 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((((pUVar2 != (UControlRig *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) &&
      ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0)) &&
     (((this->ControlRigSettingsOverrides).Value.StructMemory != (uchar *)0x0 &&
      ((this->ControlRigSettingsOverrides).Value.ScriptStruct.field0_0x0.DebugPtr !=
       (UScriptStruct *)0x0)))) {
    pUVar5 = FInstancedPropertyBag::GetPropertyBagStruct(&this->ControlRigSettingsOverrides);
    iVar1 = (pUVar5->PropertyDescs).ArrayNum;
    pFVar6 = (pUVar5->PropertyDescs).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x40;
    for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 0x40) {
      URigVMHost::GetPublicVariableByName
                ((URigVMHost *)(this->ControlRig).field0_0x0.DebugPtr,
                 (FRigVMExternalVariable *)&local_38,(FName *)(pFVar6 + 0x18));
      bVar4 = ::FName::IsWithinBounds(local_38);
      if (((bVar4) && (CONCAT44(uStack_34,local_38.Value) != 0)) &&
         ((bVar4 = ::FName::IsWithinBounds(local_28), bVar4 &&
          (((CONCAT44(uStack_24,local_28.Value) != 0 && (local_10 != (uchar *)0x0)) &&
           (local_30->_padding_ == *(longlong *)(*(longlong *)(pFVar6 + 0x30) + 8))))))) {
        _Dst = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (local_30,(UObject *)(this->ControlRig).field0_0x0.DebugPtr,0);
        _Src = (this->ControlRigSettingsOverrides).Value.StructMemory +
               *(int *)(*(longlong *)(pFVar6 + 0x30) + 0x44);
        if (_Dst != _Src) {
          if (((uint)(int)local_30->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(local_30->_padding_ + 0xf0))(local_30,_Dst,_Src,local_30->ArrayDim);
          }
          else {
            memcpy(_Dst,_Src,(longlong)local_30->ElementSize * (longlong)local_30->ArrayDim);
          }
        }
      }
    }
  }
  return;
}

// HandleOnSpaceAdded @ 14a41c760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::HandleOnSpaceAdded
          (UMovieSceneControlRigParameterTrack *this,UMovieSceneControlRigParameterSection *param_1,
          FName *param_2,FMovieSceneControlRigSpaceChannel *param_3)

{
  TMulticastDelegate<void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnSpaceChannelAdded,param_1,param_2,param_3);
  return;
}

// HasSection @ 14a41cf20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterTrack::HasSection
          (UMovieSceneControlRigParameterTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Sections).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(UMovieSceneSection **)pFVar2 == (UMovieSceneSection *)0x0) {
      bVar3 = param_1 == (UMovieSceneSection *)0x0;
    }
    else {
      bVar3 = *(UMovieSceneSection **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// IsAGameInstance @ 14a425060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterTrack::IsAGameInstance
          (UMovieSceneControlRigParameterTrack *this,UControlRig *param_1,bool param_2)

{
  undefined1 *puVar1;
  FWeakObjectPtr *this_00;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FWeakObjectPtr FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  char local_res18;
  int local_res20;
  uint local_a8;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_1 != (UControlRig *)0x0) {
    iVar12 = *(int *)&(this->GameWorldControlRigs).field_0x34;
    iVar3 = *(int *)&(this->GameWorldControlRigs).field_0x8;
    if (iVar3 != iVar12) {
      iVar15 = 0;
      puVar1 = &(this->GameWorldControlRigs).field_0x10;
      local_a8 = 1;
      iVar4 = *(int *)&(this->GameWorldControlRigs).field_0x28;
      iVar17 = 0;
      iVar10 = 0;
      if (iVar4 != 0) {
        puVar18 = *(uint **)&(this->GameWorldControlRigs).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar1;
        }
        uVar14 = *puVar18;
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar15;
          iVar17 = iVar17 + 0x20;
          iVar15 = iVar15 + 1;
          iVar10 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a425132;
          uVar14 = puVar18[lVar11 + 1];
        }
        local_a8 = -uVar14 & uVar14;
        uVar2 = (ulonglong)local_a8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res20 = (int)lVar11;
        iVar10 = iVar17 + -1 + local_res20;
        if (iVar4 < iVar10) {
          iVar10 = iVar4;
        }
      }
LAB_14a425132:
      uVar14 = *(uint *)&(this->GameWorldControlRigs).field_0x28;
      uVar13 = uVar14 & 0xffffffe0;
      TStack_68._padding_ = CONCAT44(local_a8,iVar15);
      TStack_68.CurrentBitIndex = iVar10;
      TStack_68.UnvisitedBitMask = 0xffffffff;
      TStack_68._28_4_ = iVar10;
      TStack_68.BaseBitIndex = iVar17;
      uStack_48 = CONCAT44(uStack_74,iVar3 - iVar12);
      iVar12 = (int)uVar14 >> 5;
      local_res18 = param_2;
      TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      uVar5 = *(uint *)&(this->GameWorldControlRigs).field_0x28;
      if (uVar14 != uVar5) {
        puVar16 = *(undefined1 **)&(this->GameWorldControlRigs).field_0x20;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = puVar1;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar12;
          uVar13 = uVar13 + 0x20;
          iVar12 = iVar12 + 1;
          uVar14 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14a425231;
          uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = (int)lVar11 + -1 + uVar13;
        if ((int)uVar5 < (int)uVar14) {
          uVar14 = uVar5;
        }
      }
LAB_14a425231:
      while( true ) {
        if (*(int *)&(this->GameWorldControlRigs).field_0x8 -
            *(int *)&(this->GameWorldControlRigs).field_0x34 != (int)uStack_48) {
          `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TObjectPtr<UControlRig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((TStack_68.CurrentBitIndex == uVar14) &&
           (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        this_00 = (FWeakObjectPtr *)
                  (*(longlong *)&this->GameWorldControlRigs +
                  (longlong)TStack_68.CurrentBitIndex * 0x18);
        FVar6 = this_00[1];
        if ((FVar6 != (FWeakObjectPtr)0x0) && (FVar6 == (FWeakObjectPtr)param_1)) {
          if (local_res18 != '\0') {
            bVar8 = FWeakObjectPtr::IsValid(this_00);
            return bVar8;
          }
          return true;
        }
        TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      }
    }
  }
  return false;
}

// IsEmpty @ 14a4256c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterTrack::IsEmpty(UMovieSceneControlRigParameterTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// PostEditImport @ 14a4339f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::PostEditImport(UMovieSceneControlRigParameterTrack *this)

{
  if ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) {
    BindControlRigDelegates(this);
    UObjectBase::AtomicallyClearFlags
              ((UObjectBase *)(this->ControlRig).field0_0x0.DebugPtr,RF_Transient);
  }
  ReconstructControlRig(this);
  return;
}

// PostLoad @ 14a4343b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::PostLoad(UMovieSceneControlRigParameterTrack *this)

{
  UMovieSceneTrack::PostLoad((UMovieSceneTrack *)this);
  ReconstructControlRig(this);
  BindControlRigDelegates(this);
  return;
}

// ReconstructControlRig @ 14a438040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::ReconstructControlRig
          (UMovieSceneControlRigParameterTrack *this)

{
  FScriptContainerElement *pFVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  UControlRig *pUVar5;
  UMovieSceneControlRigParameterSection *this_00;
  bool bVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [24];
  
  pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((pUVar5 != (UControlRig *)0x0) && ((pUVar5->_padding_ & 0x1600) == 0)) {
    UObject::ConditionalPostLoad((UObject *)(this->ControlRig).field0_0x0.DebugPtr);
    pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
    (**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5,1);
    CheckForNameChanges(this);
    pFVar8 = (this->Sections).AllocatorInstance.Data;
    iVar3 = (this->Sections).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Sections).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      this_00 = *(UMovieSceneControlRigParameterSection **)pFVar8;
      if (this_00 != (UMovieSceneControlRigParameterSection *)0x0) {
        pUVar7 = UMovieSceneControlRigParameterSection::StaticClass();
        iVar4 = (int)pUVar7->_padding_;
        if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar7->_padding_)) {
          bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &this_00->OnSpaceChannelAdded,this);
          if (!bVar6) {
            TMulticastDelegateRegistration<void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
            ::AddUObject<UMovieSceneControlRigParameterTrack>
                      ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
                        *)&this_00->OnSpaceChannelAdded,
                       (UMovieSceneControlRigParameterTrack *)(local_res8 + 8),(pmf_1aa6ebad *)this)
            ;
          }
          bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &this_00->_padding_,this);
          if (!bVar6) {
            TMulticastDelegateRegistration<void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
            ::AddUObject<UMovieSceneControlRigParameterTrack>
                      ((TMulticastDelegateRegistration<void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
                        *)&this_00->_padding_,
                       (UMovieSceneControlRigParameterTrack *)(local_res8 + 0x10),
                       (pmf_f9b66cf6 *)this);
          }
          uVar2 = *(undefined2 *)((longlong)&this_00->_padding_ + 1);
          if (((char)((ushort)uVar2 >> 8) == '\0') || ((char)uVar2 != '\x01')) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          UMovieSceneControlRigParameterSection::RecreateWithThisControlRig
                    (this_00,(this->ControlRig).field0_0x0.DebugPtr,bVar6);
        }
      }
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// RemoveAllAnimationData @ 14a43c020

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::RemoveAllAnimationData
          (UMovieSceneControlRigParameterTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Sections).AllocatorInstance,0,piVar1);
    (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
    return;
  }
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  return;
}

// RemoveSection @ 14a44d1c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::RemoveSection
          (UMovieSceneControlRigParameterTrack *this,UMovieSceneSection *param_1)

{
  int iVar1;
  UMovieSceneSection **ppUVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  UMovieSceneSection *pUVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UMovieSceneSection *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  ppUVar2 = *(UMovieSceneSection ***)&(this->SectionToKeyPerControl).field_0x38;
  if (((ppUVar2 <= local_38) &&
      (local_38 < ppUVar2 + *(int *)&(this->SectionToKeyPerControl).field_0x44)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar1 = *(int *)&(this->SectionToKeyPerControl).field_0x40;
  iVar12 = 0;
  if (iVar1 != 0) {
    plVar3 = *(longlong **)&(this->SectionToKeyPerControl).field_0x38;
    bVar7 = (UMovieSceneSection *)*plVar3 != local_38[0];
    lVar9 = 0;
    pUVar8 = local_38[0];
    iVar10 = 0;
    do {
      iVar11 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar11 + 1;
        if (iVar1 <= lVar9) break;
      } while (bVar7 == ((UMovieSceneSection *)plVar3[lVar9] != pUVar8));
      if (bVar7 != false) {
        if (iVar12 != iVar10) {
          memmove(plVar3 + iVar12,plVar3 + iVar10,(longlong)(iVar11 - iVar10) << 3);
          pUVar8 = local_38[0];
        }
        iVar12 = iVar12 + (iVar11 - iVar10);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar10 = iVar11;
    } while (lVar9 < iVar1);
    *(int *)&(this->SectionToKeyPerControl).field_0x40 = iVar12;
  }
  pUVar8 = *(UMovieSceneSection **)&(this->SectionToKeyPerControl).field_0x30;
  if (pUVar8 == (UMovieSceneSection *)0x0) {
    bVar7 = param_1 == (UMovieSceneSection *)0x0;
  }
  else {
    bVar7 = pUVar8 == param_1;
  }
  if (bVar7) {
    if (0 < *(int *)&(this->SectionToKeyPerControl).field_0x40) {
      if ((iVar12 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)&(this->SectionToKeyPerControl).field_0x38;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 = (UObject *)*puVar4, pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      *(undefined8 *)&(this->SectionToKeyPerControl).field_0x30 = *puVar4;
      return;
    }
    *(undefined8 *)&(this->SectionToKeyPerControl).field_0x30 = 0;
  }
  return;
}

// RemoveSectionAt @ 14a44d410

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::RemoveSectionAt
          (UMovieSceneControlRigParameterTrack *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  void *_Dst;
  int iVar8;
  UObject *pUVar9;
  uint uVar10;
  
  pUVar9 = (UObject *)0x0;
  puVar2 = &(this->SectionToKeyPerControl).field_0x38;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)&(this->SectionToKeyPerControl).field_0x40) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)puVar2 + (longlong)param_1 * 8);
  lVar4 = *(longlong *)&(this->SectionToKeyPerControl).field_0x30;
  uVar7 = 0;
  if (param_1 < *(int *)&(this->SectionToKeyPerControl).field_0x40) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  _Dst = (void *)(*(longlong *)puVar2 + (longlong)param_1 * 8);
  iVar8 = *(int *)&(this->SectionToKeyPerControl).field_0x40 + ~param_1;
  if (iVar8 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar8 << 3);
  }
  puVar1 = &(this->SectionToKeyPerControl).field_0x40;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)puVar2,*(int *)&(this->SectionToKeyPerControl).field_0x40,
             (int *)&(this->SectionToKeyPerControl).field_0x44);
  if (lVar4 != lVar3) {
    return;
  }
  if (0 < *(int *)&(this->SectionToKeyPerControl).field_0x40) {
    if ((*(int *)&(this->SectionToKeyPerControl).field_0x40 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar9 = (UObject *)**(undefined8 **)puVar2;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14a44d599;
    if (pUVar9 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar9);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
LAB_14a44d599:
  *(UObject **)&(this->SectionToKeyPerControl).field_0x30 = pUVar9;
  return;
}

// RenameParameterName @ 14a44db30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::RenameParameterName
          (UMovieSceneControlRigParameterTrack *this,FName *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMovieSceneControlRigParameterSection *this_00;
  FName FVar4;
  uint uVar5;
  UClass *pUVar6;
  FControlRotationOrder *pFVar7;
  FScriptContainerElement *pFVar8;
  FControlRotationOrder local_res10 [4];
  TPairInitializer<FName_const_&,FControlRotationOrder_const_&> local_res18;
  FName local_88;
  FName FStack_80;
  UMovieSceneControlRigParameterSection *local_78;
  FControlRotationOrder *pFStack_70;
  code *local_68 [5];
  undefined8 *local_40;
  
  if (*param_1 != *param_2) {
    iVar2 = (this->Sections).ArrayNum;
    pFVar8 = (this->Sections).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Sections).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar8 == pFVar1) break;
      this_00 = *(UMovieSceneControlRigParameterSection **)pFVar8;
      if (this_00 != (UMovieSceneControlRigParameterSection *)0x0) {
        pUVar6 = UMovieSceneControlRigParameterSection::StaticClass();
        iVar3 = (int)pUVar6->_padding_;
        if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar6->_padding_)) {
          local_88 = *param_1;
          FStack_80 = *param_2;
          pFStack_70 = local_res10;
          local_68[0] = (code *)0x0;
          local_40 = (undefined8 *)0x0;
          local_res10[0] = (FControlRotationOrder)((ushort)local_res10[0] & 0xff00);
          local_78 = this_00;
          local_40 = FMemory::Malloc(0x28,8);
          *local_40 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`UMovieSceneControlRigParameterTrack::RenameParameterName'::`12'::<lambda_1>,0,1>
                       ::_vftable_;
          *(FName *)(local_40 + 1) = local_88;
          *(FName *)(local_40 + 2) = FStack_80;
          local_40[3] = local_78;
          local_40[4] = pFStack_70;
          if ((FName *)(local_40 + 1) != (FName *)0x0) {
            local_68[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`UMovieSceneControlRigParameterTrack::RenameParameterName'::__l12::<lambda_1>,void,FBaseParameterNameAndValue_*>
                          ::Call;
          }
          UMovieSceneControlRigParameterSection::ForEachParameter
                    (this_00,(TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *)local_68);
          if (local_res10[0].RotationOrder != XYZ) {
            (**(code **)(this_00->_padding_ + 0x3a8))(this_00);
          }
        }
      }
      pFVar8 = pFVar8 + 8;
    }
    pFVar7 = TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
             ::Find((TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                     *)&this->ControlsRotationOrder,*param_1);
    if (pFVar7 != (FControlRotationOrder *)0x0) {
      FVar4 = *param_1;
      local_res10[0] = *pFVar7;
      local_res18.Key = (FName *)FVar4;
      if (*(int *)&(this->ControlsRotationOrder).field_0x8 !=
          *(int *)&(this->ControlsRotationOrder).field_0x34) {
        uVar5 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
        TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
                             *)&this->ControlsRotationOrder,FVar4.Number + uVar5,
                            (FName *)&local_res18);
      }
      FStack_80 = (FName)local_res10;
      local_88 = (FName)param_2;
      TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FControlRotationOrder_const_&>_>
                ((TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
                  *)&this->ControlsRotationOrder,&local_res18,(bool *)&local_88);
    }
  }
  return;
}

// ReplaceControlRig @ 14a44e0f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::ReplaceControlRig
          (UMovieSceneControlRigParameterTrack *this,UControlRig *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  UControlRig *pUVar5;
  UMovieSceneControlRigParameterSection *this_00;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar5 == (UControlRig *)0x0) {
    bVar8 = param_1 == (UControlRig *)0x0;
  }
  else {
    bVar8 = pUVar5 == param_1;
  }
  if (bVar8) {
    return;
  }
  if ((pUVar5 != (UControlRig *)0x0) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ControlRig).field0_0x0.DebugPtr)->PreConstructionEvent,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ControlRig).field0_0x0.DebugPtr)->PostConstructionEvent,this);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UControlRig *)0x0)) {
    (this->ControlRig).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UControlRig *)0x0) goto LAB_14a44e1cd;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ControlRig).field0_0x0.DebugPtr = param_1;
  }
  if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
    BindControlRigDelegates(this);
    pUVar5 = (this->ControlRig).field0_0x0.DebugPtr;
    if ((UMovieSceneControlRigParameterTrack *)pUVar5->_padding_ != this) {
      (**(code **)(pUVar5->_padding_ + 0x170))(pUVar5,0,this,0);
    }
  }
LAB_14a44e1cd:
  CheckForNameChanges(this);
  pFVar7 = (this->Sections).AllocatorInstance.Data;
  iVar3 = (this->Sections).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  do {
    while( true ) {
      if ((this->Sections).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) {
        return;
      }
      this_00 = *(UMovieSceneControlRigParameterSection **)pFVar7;
      if (this_00 != (UMovieSceneControlRigParameterSection *)0x0) break;
LAB_14a44e28a:
      pFVar7 = pFVar7 + 8;
    }
    pUVar6 = UMovieSceneControlRigParameterSection::StaticClass();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar6->_padding_)) goto LAB_14a44e28a;
    if (!param_2) {
      UMovieSceneControlRigParameterSection::SetControlRig(this_00,param_1);
      goto LAB_14a44e28a;
    }
    uVar2 = *(undefined2 *)((longlong)&this_00->_padding_ + 1);
    if (((char)((ushort)uVar2 >> 8) == '\0') || ((char)uVar2 != '\x01')) {
      UMovieSceneControlRigParameterSection::RecreateWithThisControlRig(this_00,param_1,false);
      pFVar7 = pFVar7 + 8;
    }
    else {
      UMovieSceneControlRigParameterSection::RecreateWithThisControlRig(this_00,param_1,true);
      pFVar7 = pFVar7 + 8;
    }
  } while( true );
}

// ResetControlsToSettingsRotationOrder @ 14a450320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::ResetControlsToSettingsRotationOrder
          (UMovieSceneControlRigParameterTrack *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1,EMovieSceneKeyInterpolation param_2)

{
  FName *pFVar1;
  int iVar2;
  UControlRig *pUVar3;
  longlong lVar4;
  FControlRotationOrder *pFVar5;
  char cVar6;
  FName *pFVar7;
  char cVar8;
  EEulerRotationOrder EVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  TOptional<EEulerRotationOrder> local_res20 [4];
  FControlRotationOrder local_48 [8];
  
  pUVar3 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((pUVar3 != (UControlRig *)0x0) &&
     ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr != (URigHierarchy *)0x0)) {
    pFVar7 = (FName *)(param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar7 + iVar2;
    EVar9 = local_48[0].RotationOrder;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar1) break;
      pUVar3 = (this->ControlRig).field0_0x0.DebugPtr;
      lVar4 = (**(code **)(pUVar3->_padding_ + 0x3c8))(pUVar3,pFVar7);
      if (lVar4 != 0) {
        cVar8 = '\0';
        pFVar5 = TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                 ::Find((TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
                         *)&this->ControlsRotationOrder,*(FName *)(lVar4 + 0x14));
        if ((pFVar5 != (FControlRotationOrder *)0x0) && (pFVar5 != local_48)) {
          EVar9 = pFVar5->RotationOrder;
          cVar8 = '\x01';
        }
        cVar6 = '\0';
        local_res20[0].bIsSet = false;
        if ((((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr)->
             bUsePreferredEulerAngles != false) && (*(char *)(lVar4 + 0x3e1) != '\0')) {
          local_res20[0].TypedValue = *(EEulerRotationOrder *)(lVar4 + 0x3e0);
          cVar6 = '\x01';
          local_res20[0].bIsSet = true;
        }
        if (cVar8 == cVar6) {
          if (cVar8 == '\0') {
            bVar10 = false;
          }
          else {
            bVar10 = EVar9 != local_res20[0].TypedValue;
          }
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          ChangeControlRotationOrder(this,pFVar7,local_res20,param_2);
        }
      }
      pFVar7 = pFVar7 + 1;
    }
  }
  return;
}

// SetPriorityOrder @ 14a45a160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::SetPriorityOrder
          (UMovieSceneControlRigParameterTrack *this,int param_1)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  this->PriorityOrder = param_1;
  return;
}

// SetSectionToKey @ 14a45a180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::SetSectionToKey
          (UMovieSceneControlRigParameterTrack *this,UMovieSceneSection *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  FWeakObjectPtr local_res20;
  UMovieSceneSection *local_28;
  FName *local_20;
  FWeakObjectPtr *local_18;
  
  if ((0 < (this->Sections).ArrayNum) && (param_1 != (UMovieSceneSection *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_28 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_28);
    local_18 = &local_res20;
    local_20 = param_2;
    TSet<TTuple<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&this->SectionToKeyPerControl,
               (TPairInitializer<FName_const_&,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>_&&>
                *)&stack0x00000008,(bool *)&local_20);
    if ((this->Sections).ArrayNum < 1) {
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
    pFVar1 = (this->Sections).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)pFVar1, pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    (this->SectionToKey).field0_0x0.DebugPtr = *(UMovieSceneSection **)pFVar1;
  }
  return;
}

// SetSectionToKey @ 14a45a2a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::SetSectionToKey
          (UMovieSceneControlRigParameterTrack *this,UMovieSceneSection *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  FMovieSceneEasingSettings *pFVar9;
  FScriptContainerElement *pFVar10;
  UObject *pUVar11;
  UMovieSceneSection *pUVar12;
  longlong lVar13;
  code *pcVar14;
  TMap<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
  *pTVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  UClass *pUVar19;
  FName *pFVar20;
  FMovieSceneEasingSettings *pFVar21;
  uint uVar22;
  int iVar23;
  undefined1 *puVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  ulonglong local_res18;
  int local_res20;
  undefined4 uStack_84;
  UMovieSceneSection *local_70;
  TMap<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (((this->Sections).ArrayNum != 0) && (param_1 != (UMovieSceneSection *)0x0)) {
    pUVar19 = UMovieSceneControlRigParameterSection::StaticClass();
    iVar18 = (int)pUVar19->_padding_;
    if ((iVar18 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
        &pUVar19->_padding_)) {
      iVar18 = *(int *)&(this->SectionToKeyPerControl).field_0x34;
      iVar4 = *(int *)&(this->SectionToKeyPerControl).field_0x8;
      if (iVar4 == iVar18) {
        pUVar12 = (this->SectionToKey).field0_0x0.DebugPtr;
        if (pUVar12 == (UMovieSceneSection *)0x0) {
          bVar16 = param_1 == (UMovieSceneSection *)0x0;
        }
        else {
          bVar16 = pUVar12 == param_1;
        }
        if (!bVar16) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          (this->SectionToKey).field0_0x0.DebugPtr = param_1;
        }
      }
      else {
        if (this->bSetSectionToKeyPerControl != false) {
          iVar5 = *(int *)&(this->SectionToKeyPerControl).field_0x28;
          iVar23 = 0;
          puVar1 = &(this->SectionToKeyPerControl).field_0x10;
          iVar25 = 0;
          local_res18 = CONCAT44(local_res18._4_4_,1);
          iVar17 = 0;
          if (iVar5 != 0) {
            puVar26 = *(uint **)&(this->SectionToKeyPerControl).field_0x20;
            if (puVar26 == (uint *)0x0) {
              puVar26 = (uint *)puVar1;
            }
            uVar22 = *puVar26;
            while (uVar22 == 0) {
              iVar23 = iVar23 + 1;
              iVar25 = iVar25 + 0x20;
              iVar17 = iVar5;
              if ((int)((iVar5 + -1 >> 0x1f & 0x1fU) + iVar5 + -1) >> 5 < iVar23)
              goto LAB_14a45a3d8;
              uVar22 = puVar26[iVar23];
            }
            local_res18 = (ulonglong)(-uVar22 & uVar22);
            uVar3 = local_res18 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            local_res20 = (int)lVar13;
            iVar17 = local_res20 + -1 + iVar25;
            if (iVar5 < iVar17) {
              iVar17 = iVar5;
            }
          }
LAB_14a45a3d8:
          local_68 = &this->SectionToKeyPerControl;
          uVar22 = *(uint *)&(this->SectionToKeyPerControl).field_0x28;
          uVar27 = uVar22 & 0xffffffe0;
          TStack_60.CurrentBitIndex = iVar17;
          TStack_60.UnvisitedBitMask = 0xffffffff;
          TStack_60._padding_ = CONCAT44((int)local_res18,iVar23);
          iVar23 = (int)uVar22 >> 5;
          TStack_60._28_4_ = iVar17;
          TStack_60.BaseBitIndex = iVar25;
          uStack_40 = CONCAT44(uStack_84,iVar4 - iVar18);
          TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar22 < 0) || (iVar5 < (int)uVar22)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar16)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar6 = *(uint *)&(this->SectionToKeyPerControl).field_0x28;
          if (uVar22 != uVar6) {
            puVar7 = *(undefined1 **)&(this->SectionToKeyPerControl).field_0x20;
            puVar24 = puVar1;
            if (puVar7 != (undefined1 *)0x0) {
              puVar24 = puVar7;
            }
            uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar23 * 4);
            while (uVar22 == 0) {
              iVar23 = iVar23 + 1;
              uVar27 = uVar27 + 0x20;
              uVar22 = uVar6;
              if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar23)
              goto LAB_14a45a4e0;
              uVar22 = *(uint *)(puVar24 + (longlong)iVar23 * 4);
            }
            uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
            lVar13 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar22 = (int)lVar13 + -1 + uVar27;
            if ((int)uVar6 < (int)uVar22) {
              uVar22 = uVar6;
            }
          }
LAB_14a45a4e0:
          while( true ) {
            pTVar15 = local_68;
            if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
              local_res18 = local_res18 & 0xffffffffffffff00;
              `TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res18);
            }
            if (((TStack_60.CurrentBitIndex == uVar22) &&
                (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               (pTVar15 == &this->SectionToKeyPerControl)) break;
            lVar13 = *(longlong *)pTVar15;
            lVar8 = *(longlong *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
            pFVar2 = (FName *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
            uVar27 = ::GetTypeHash((FNameEntryId)(uint)lVar8);
            if ((int)param_1[3]._padding_ != param_1[3]._padding_) {
              pFVar9 = *(FMovieSceneEasingSettings **)&param_1[3].Easing.EaseIn;
              pFVar21 = &param_1[3].Easing;
              if (pFVar9 != (FMovieSceneEasingSettings *)0x0) {
                pFVar21 = pFVar9;
              }
              iVar18 = (&pFVar21->AutoEaseInDuration)
                       [*(int *)&param_1[3].Easing.EaseIn.field_0x8 - 1U &
                        (int)((ulonglong)lVar8 >> 0x20) + uVar27];
              if (iVar18 != -1) {
                do {
                  if (*(longlong *)(param_1[3]._padding_ + (longlong)iVar18 * 0x50) == lVar8) {
                    pFVar20 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                                        ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                                          *)&param_1[1].EndTime_DEPRECATED,*pFVar2);
                    if ((pFVar20 == (FName *)0x0) &&
                       (bVar16 = TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>::
                                 UEOpEquals<UMovieSceneSection,bool>
                                           ((TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> *)
                                            (pFVar2 + 1),param_1), !bVar16)) {
                      local_70 = param_1;
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)param_1);
                      }
                      FWeakObjectPtr::operator=
                                ((FWeakObjectPtr *)(pFVar2 + 1),(FObjectPtr)&local_70);
                    }
                    break;
                  }
                  iVar18 = *(int *)(param_1[3]._padding_ + 0x48 + (longlong)iVar18 * 0x50);
                } while (iVar18 != -1);
              }
            }
            TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
          }
        }
        if (((this->Sections).ArrayNum < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (*(UMovieSceneSection **)(this->Sections).AllocatorInstance.Data !=
            (this->SectionToKey).field0_0x0.DebugPtr) {
          if (((this->Sections).ArrayNum < 1) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar10 = (this->Sections).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar11 = *(UObject **)pFVar10, pUVar11 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          (this->SectionToKey).field0_0x0.DebugPtr = *(UMovieSceneSection **)pFVar10;
        }
      }
    }
  }
  return;
}

// ShouldUseLegacyTemplate @ 14a45b4e0

bool __cdecl UMovieSceneControlRigParameterTrack::ShouldUseLegacyTemplate(void)

{
  bool bVar1;
  
  if (!UE::MovieScene::GUseLegacyControlRigTemplate) {
    bVar1 = UMovieSceneEntitySystem::IsCustomSchedulingEnabled();
    if (bVar1) {
      return false;
    }
  }
  return true;
}

// StaticRegisterNativesUMovieSceneControlRigParameterTrack @ 14a45c400

void __cdecl
UMovieSceneControlRigParameterTrack::StaticRegisterNativesUMovieSceneControlRigParameterTrack(void)

{
  return;
}

// SupportsType @ 14a45c9f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterTrack::SupportsType
          (UMovieSceneControlRigParameterTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_14a45ca3a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14a45ca3a:
  pUVar5 = UMovieSceneControlRigParameterSection::StaticClass();
  return pUVar4 == pUVar5;
}

// UnbindControlRigDelegates @ 14a45d4c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::UnbindControlRigDelegates
          (UMovieSceneControlRigParameterTrack *this)

{
  UControlRig *pUVar1;
  
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  if ((pUVar1 != (UControlRig *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ControlRig).field0_0x0.DebugPtr)->PreConstructionEvent,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ControlRig).field0_0x0.DebugPtr)->PostConstructionEvent,this);
    return;
  }
  return;
}

// UpdateControlRigSettingsOverrides @ 14a45f760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterTrack::UpdateControlRigSettingsOverrides
          (UMovieSceneControlRigParameterTrack *this,FInstancedPropertyBag *param_1)

{
  if (&this->ControlRigSettingsOverrides != param_1) {
    FInstancedStruct::InitializeAs
              (&(this->ControlRigSettingsOverrides).Value,
               (param_1->Value).ScriptStruct.field0_0x0.DebugPtr,(param_1->Value).StructMemory);
    return;
  }
  return;
}

// __VTableCtorCaller @ 14a468c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMovieSceneControlRigParameterTrack::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  UMovieSceneNameableTrack *pUVar3;
  
  pUVar3 = (UMovieSceneNameableTrack *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)(this + 1) = &___7IMovieSceneTrackTemplateProducer__6B_;
    *(undefined ***)&this[1].field_0x8 = &___7INodeAndChannelMappings__6B_;
    IMovieSceneSectionsToKey::IMovieSceneSectionsToKey
              ((IMovieSceneSectionsToKey *)&this[1].field_0x10);
    *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &_vftable__for__IMovieSceneTrackTemplateProducer__;
    *(undefined ***)&this[1].field_0x8 = &_vftable__for__INodeAndChannelMappings__;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined ***)&this[1].field_0x10 = &_vftable__for__IMovieSceneSectionsToKey__;
    *(undefined4 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x44 = 0x80;
    *(undefined4 *)&this[1].field_0x48 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x4c = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined4 *)&this[1].field_0x60 = 0;
    this[1].field_0x68 = 1;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x78 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined8 *)&this[1].field_0x88 = 2;
    *(undefined8 *)&this[1].field_0x90 = 0;
    *(undefined8 *)&this[1].field_0x98 = 0;
    *(undefined8 *)&this[1].field_0xa0 = 0;
    *(undefined8 *)&this[1].field_0xa8 = 2;
    *(undefined8 *)&this[1].field_0xb0 = 0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    *(undefined8 *)&this[1].field_0xc0 = 0;
    *(undefined8 *)&this[1].field_0xc8 = 0;
    *(undefined8 *)&this[1].field_0xd0 = 0;
    *(undefined8 *)&this[1].field_0xd8 = 0;
    *(undefined8 *)&this[1].field_0xe0 = 0;
    *(undefined8 *)&this[1].field_0xf8 = 0;
    *(undefined4 *)&this[1].field_0x100 = 0;
    *(undefined4 *)&this[1].field_0x104 = 0x80;
    *(undefined4 *)&this[1].field_0x108 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x10c = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[2].field_0x18);
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x30 = 0;
    *(undefined8 *)&this[2].field_0x48 = 0;
    *(undefined4 *)&this[2].field_0x50 = 0;
    *(undefined4 *)&this[2].field_0x54 = 0x80;
    *(undefined4 *)&this[2].field_0x58 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x5c = 0;
    *(undefined8 *)&this[2].field_0x68 = 0;
    *(undefined4 *)&this[2].field_0x70 = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// _getUObject @ 14a468ec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __thiscall
UMovieSceneControlRigParameterTrack::_getUObject(UMovieSceneControlRigParameterTrack *this)

{
  return (UObject *)&this[-1].OnSpaceChannelAdded.field_0x8;
}

// _getUObject`adjustor{8}' @ 14a468ed0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneControlRigParameterTrack::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneControlRigParameterTrack::_getUObject_adjustor_8__
          (UMovieSceneControlRigParameterTrack *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneControlRigParameterTrack *)
                       &this[-1].GameWorldControlRigs.field_0x48);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14a468ee0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneControlRigParameterTrack::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneControlRigParameterTrack::_getUObject_adjustor_16__
          (UMovieSceneControlRigParameterTrack *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneControlRigParameterTrack *)
                       &this[-1].GameWorldControlRigs.field_0x40);
  return (UObject *)pUVar1;
}

// operator() @ 15054edd0

bool __thiscall
`UMovieSceneControlRigParameterTrack::FindOrAddSection'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7416064027924626953>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7416064027924626953>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

