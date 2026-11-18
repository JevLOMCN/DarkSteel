// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 23

// StaticStruct @ 14a1ffb40

UScriptStruct * __cdecl FAnimNode_ControlRigBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase,(UObject *)pUVar1,
                         L"AnimNode_ControlRigBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigBase.OuterSingleton;
}

// FAnimNode_ControlRigBase @ 14a21da10

FAnimNode_ControlRigBase * __thiscall
FAnimNode_ControlRigBase::FAnimNode_ControlRigBase(FAnimNode_ControlRigBase *this)

{
  int iVar1;
  
  FAnimNode_CustomProperty::FAnimNode_CustomProperty((FAnimNode_CustomProperty *)this);
  this->bResetInputPoseToInitial = true;
  this->bTransferInputPose = true;
  this->_padding_ = (longlong)&___7FAnimNode_ControlRigBase__6B_;
  *(undefined8 *)&this->Source = 0;
  *(undefined4 *)&(this->Source).field_0x8 = 0xffffffff;
  (this->Source).field_0xc = 0;
  this->bTransferInputCurves = true;
  iVar1 = (**(code **)(*(longlong *)CVarControlRigEnableAnimNodePerformanceOptimizations._padding_ +
                      200))();
  (this->InputBonesToTransfer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBonesToTransfer).ArrayNum = 0;
  (this->InputBonesToTransfer).ArrayMax = 0;
  (this->OutputBonesToTransfer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bTransferPoseInGlobalSpace = iVar1 == 0;
  (this->OutputBonesToTransfer).ArrayNum = 0;
  (this->OutputBonesToTransfer).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->NodeMappingContainer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->InputSettings).bUpdatePose = true;
  (this->InputSettings).bUpdateCurves = true;
  (this->OutputSettings).bUpdatePose = true;
  (this->OutputSettings).bUpdateCurves = true;
  this->bExecute = true;
  this->InternalBlendAlpha = 1.0;
  (this->EventQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventQueue).ArrayNum = 0;
  (this->EventQueue).ArrayMax = 0;
  this->bClearEventQueueRequired = false;
  this->bControlRigRequiresInitialization = true;
  this->LastBonesSerialNumberForCacheBones = 0;
  (this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByIndex.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByIndex.ArrayNum = 0;
  (this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByIndex.ArrayMax = 0;
  (this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByIndex.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByIndex.ArrayNum = 0;
  (this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByIndex.ArrayMax = 0;
  (this->ControlRigHierarchyMappings).ControlRigCurveMappingByIndex.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigHierarchyMappings).ControlRigCurveMappingByIndex.ArrayNum = 0;
  (this->ControlRigHierarchyMappings).ControlRigCurveMappingByIndex.ArrayMax = 0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByName = 0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByName.field_0x8 = 0
  ;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByName.field_0x20 =
       0;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByName.field_0x28 =
       0;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByName.field_0x2c =
       0x80;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByName.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByName.field_0x34 =
       0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByName.field_0x40 =
       0;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneInputMappingByName.field_0x48 =
       0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByName = 0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByName.field_0x8 =
       0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByName.field_0x20 =
       0;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByName.field_0x28 =
       0;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByName.field_0x2c =
       0x80;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByName.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByName.field_0x34 =
       0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByName.field_0x40 =
       0;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigBoneOutputMappingByName.field_0x48 =
       0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigCurveMappingByName = 0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigCurveMappingByName.field_0x8 = 0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigCurveMappingByName.field_0x20 = 0;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigCurveMappingByName.field_0x28 = 0;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigCurveMappingByName.field_0x2c = 0x80
  ;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigCurveMappingByName.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigCurveMappingByName.field_0x34 = 0;
  *(undefined8 *)&(this->ControlRigHierarchyMappings).ControlRigCurveMappingByName.field_0x40 = 0;
  *(undefined4 *)&(this->ControlRigHierarchyMappings).ControlRigCurveMappingByName.field_0x48 = 0;
  (this->ControlRigHierarchyMappings).HierarchyCurveCopied.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigHierarchyMappings).HierarchyCurveCopied.ArrayNum = 0;
  (this->ControlRigHierarchyMappings).HierarchyCurveCopied.ArrayMax = 0;
  (this->ControlRigHierarchyMappings).PoseAdapter.Object = (FControlRigPoseAdapter *)0x0;
  (this->ControlRigHierarchyMappings).PoseAdapter.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ControlRigHierarchyMappings).RefPoseSetterHash.bIsSet = false;
  (this->ControlRigHierarchyMappings).bEnablePoseAdapter = false;
  (this->WeakAnimInstanceObject).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~FAnimNode_ControlRigBase @ 14a2253f0

void __thiscall FAnimNode_ControlRigBase::~FAnimNode_ControlRigBase(FAnimNode_ControlRigBase *this)

{
  FScriptContainerElement *pFVar1;
  
  FControlRigHierarchyMappings::~FControlRigHierarchyMappings(&this->ControlRigHierarchyMappings);
  pFVar1 = (this->EventQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputBonesToTransfer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputBonesToTransfer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAnimNode_CustomProperty::~FAnimNode_CustomProperty((FAnimNode_CustomProperty *)this);
  return;
}

// operator= @ 14a228c30

FAnimNode_ControlRigBase * __thiscall
FAnimNode_ControlRigBase::operator=
          (FAnimNode_ControlRigBase *this,FAnimNode_ControlRigBase *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FControlRigAnimNodeEventName,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  
  this->_padding_ = param_1->_padding_;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  uVar6 = *(undefined8 *)&(param_1->Source).field_0x8;
  *(undefined8 *)&this->Source = *(undefined8 *)&param_1->Source;
  *(undefined8 *)&(this->Source).field_0x8 = uVar6;
  this->bResetInputPoseToInitial = param_1->bResetInputPoseToInitial;
  this->bTransferInputPose = param_1->bTransferInputPose;
  this->bTransferInputCurves = param_1->bTransferInputCurves;
  this->bTransferPoseInGlobalSpace = param_1->bTransferPoseInGlobalSpace;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->InputBonesToTransfer,&param_1->InputBonesToTransfer);
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->OutputBonesToTransfer,&param_1->OutputBonesToTransfer);
  pTVar2 = &this->AssetUserData;
  if (pTVar2 != &param_1->AssetUserData) {
    iVar4 = (param_1->AssetUserData).ArrayNum;
    piVar1 = &(this->AssetUserData).ArrayMax;
    pFVar5 = (param_1->AssetUserData).AllocatorInstance.Data;
    (this->AssetUserData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<TObjectPtr<UAssetUserData>,TObjectPtr<UAssetUserData>,int>
                ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UAssetUserData> *)pFVar5,iVar4);
    }
  }
  (this->NodeMappingContainer).WeakPtr = (param_1->NodeMappingContainer).WeakPtr;
  pTVar3 = &this->EventQueue;
  this->InputSettings = param_1->InputSettings;
  this->OutputSettings = param_1->OutputSettings;
  this->bExecute = param_1->bExecute;
  this->InternalBlendAlpha = param_1->InternalBlendAlpha;
  if (pTVar3 != &param_1->EventQueue) {
    iVar4 = (param_1->EventQueue).ArrayNum;
    piVar1 = &(this->EventQueue).ArrayMax;
    pFVar5 = (param_1->EventQueue).AllocatorInstance.Data;
    (this->EventQueue).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
      }
    }
  }
  this->bClearEventQueueRequired = param_1->bClearEventQueueRequired;
  this->bControlRigRequiresInitialization = param_1->bControlRigRequiresInitialization;
  this->LastBonesSerialNumberForCacheBones = param_1->LastBonesSerialNumberForCacheBones;
  FControlRigHierarchyMappings::operator=
            (&this->ControlRigHierarchyMappings,&param_1->ControlRigHierarchyMappings);
  (this->WeakAnimInstanceObject).WeakPtr = (param_1->WeakAnimInstanceObject).WeakPtr;
  return this;
}

// CacheBones_AnyThread @ 14a242840

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRigBase::CacheBones_AnyThread
          (FAnimNode_ControlRigBase *this,FAnimationCacheBonesContext *param_1)

{
  longlong *lpCriticalSection;
  ushort uVar1;
  longlong lVar2;
  FBoneContainer *pFVar3;
  URigHierarchy *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  UControlRig *this_00;
  FName local_res8;
  undefined1 local_res18 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  this_00 = (UControlRig *)(**(code **)(this->_padding_ + 0xb8))(this);
  if (this_00 == (UControlRig *)0x0) goto LAB_14a242a7b;
  lVar2 = *(longlong *)param_1;
  if (*(longlong *)(lVar2 + 0x660) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = *(FBoneContainer **)(lVar2 + 0x660);
  lpCriticalSection = &this_00->_padding_;
  uVar1 = pFVar3->SerialNumber;
  if (lpCriticalSection == (longlong *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bExecute != false) {
    if ((this->bControlRigRequiresInitialization == false) &&
       (uVar1 != this->LastBonesSerialNumberForCacheBones)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    cVar7 = (**(code **)(this_00->_padding_ + 0x3d8))(this_00);
    if (cVar7 == '\0') {
      FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
      bVar8 = URigVMHost::IsRunOnceEvent((URigVMHost *)this_00,&local_res8);
      if ((!bVar8) || ((this->bControlRigRequiresInitialization == false && (!bVar6))))
      goto LAB_14a2429cb;
    }
    UpdateGetAssetUserDataDelegate(this,this_00);
    pcVar5 = *(code **)(this_00->_padding_ + 0x2f0);
    FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
    (*pcVar5)(this_00,local_res18);
    this->bControlRigRequiresInitialization = false;
  }
LAB_14a2429cb:
  pUVar4 = (this_00->DynamicHierarchy).field0_0x0.DebugPtr;
  FControlRigHierarchyMappings::UpdateInputOutputMappingIfRequired
            (&this->ControlRigHierarchyMappings,this_00,pUVar4,pFVar3,&this->InputBonesToTransfer,
             &this->OutputBonesToTransfer,&this->NodeMappingContainer,
             this->bTransferPoseInGlobalSpace,this->bResetInputPoseToInitial);
  if ((this->bControlRigRequiresInitialization != false) && (this->bExecute != false)) {
    (**(code **)(this_00->_padding_ + 0x318))(this_00);
    this->bControlRigRequiresInitialization = false;
  }
  this->LastBonesSerialNumberForCacheBones = uVar1;
  FControlRigHierarchyMappings::LinkToHierarchy(&this->ControlRigHierarchyMappings,pUVar4);
  if (lpCriticalSection != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
LAB_14a242a7b:
  FStatsHierarchical::EndMeasurement();
  return;
}

// CanExecute @ 14a245880

bool __thiscall FAnimNode_ControlRigBase::CanExecute(FAnimNode_ControlRigBase *this)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = (**(code **)(*(longlong *)CVarControlRigDisableExecutionAnimNode._padding_ + 200))();
  if ((iVar2 == 0) &&
     (((this->ControlRigHierarchyMappings).bEnablePoseAdapter == false ||
      ((this->ControlRigHierarchyMappings).PoseAdapter.Object != (FControlRigPoseAdapter *)0x0)))) {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0xb8))(this);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a2458d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar3 + 0x2b8))(plVar3,*(code **)(*plVar3 + 0x2b8));
      return (bool)uVar1;
    }
  }
  return false;
}

// Evaluate_AnyThread @ 14a252080

void __thiscall
FAnimNode_ControlRigBase::Evaluate_AnyThread(FAnimNode_ControlRigBase *this,FPoseContext *param_1)

{
  FCurveElement *pFVar1;
  FName FVar2;
  FName FVar3;
  undefined4 uVar4;
  ForElementType<UE::Math::TTransform<double>_> _Src;
  ForAnyElementType FVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  void *_Src_00;
  bool bVar9;
  char cVar10;
  int iVar11;
  FAnimNode_Base *pFVar12;
  longlong lVar13;
  FCurveElement *pFVar14;
  ECurveElementFlags *pEVar15;
  longlong lVar16;
  FCurveElement *pFVar17;
  int iVar18;
  ForElementType<UE::Anim::FCurveElement> FVar19;
  uint uVar20;
  FCurveElement *pFVar21;
  FIdentityFunctor local_res8 [8];
  undefined1 local_248 [32];
  undefined1 local_228 [16];
  undefined8 local_218;
  ForElementType<UE::Anim::FCurveElement> FStack_210;
  undefined8 local_208;
  char local_200;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [16];
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  bool local_1b0;
  undefined1 local_1a8 [32];
  ForElementType<UE::Math::TTransform<double>_> local_188;
  undefined8 local_180;
  FBoneContainer *local_178;
  ForElementType<UE::Anim::FCurveElement> FStack_170;
  undefined8 local_168;
  char local_160;
  undefined8 local_158;
  ForAnyElementType FStack_150;
  undefined8 local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  ForAnyElementType local_130;
  undefined8 local_128;
  ForAnyElementType local_120;
  undefined8 local_118;
  bool local_110;
  undefined1 local_108 [32];
  FBaseCompactPose<TMemStackAllocator<0>_> local_e8;
  FCurveElement *pFStack_d0;
  ulonglong local_c8;
  char local_c0;
  undefined8 local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_b0;
  ulonglong local_a8;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_a0;
  ulonglong local_98;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_90;
  ulonglong local_88;
  void *local_80;
  ulonglong local_78;
  bool local_70;
  FAnimationPoseData local_68;
  FAnimationPoseData local_50;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::Evaluate_AnyThread");
  FAnimationBaseContext::FAnimationBaseContext
            ((FAnimationBaseContext *)local_108,(FAnimInstanceProxy *)param_1->_padding_,
             (FAnimationUpdateSharedContext *)0x0);
  local_70 = param_1->bExpectsAdditivePose != false;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8.BoneContainer = (FBoneContainer *)0x0;
  pFStack_d0 = (FCurveElement *)0x0;
  local_c8 = 0;
  local_c0 = '\0';
  local_b8 = 0;
  pTStack_b0 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_a8 = 0;
  local_a0 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_98 = 0;
  local_90 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  FPoseContext::InitializeImpl((FPoseContext *)local_108,(FAnimInstanceProxy *)param_1->_padding_);
  local_108._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
  local_108._24_4_ = (undefined4)param_1->_padding_;
  pFVar12 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)&this->Source);
  if (pFVar12 == (FAnimNode_Base *)0x0) {
    if (local_70 == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(&local_e8,local_e8.BoneContainer);
    }
    else {
      FCompactPose::ResetToAdditiveIdentity((FCompactPose *)&local_e8);
    }
  }
  else {
    FPoseLink::Evaluate(&this->Source,(FPoseContext *)local_108);
  }
  ExecuteConstructionIfNeeded(this);
  bVar9 = FControlRigHierarchyMappings::CheckPoseAdapter(&this->ControlRigHierarchyMappings);
  if (!bVar9) {
    FPoseContext::operator=(param_1,(FPoseContext *)local_108);
    `FAnimNode_ControlRigBase::Evaluate_AnyThread'::__l10::<lambda_1>::operator()(local_res8);
    goto LAB_14a252254;
  }
  cVar10 = (**(code **)(this->_padding_ + 200))(this);
  if (((cVar10 != '\0') && (__real_3727c5ac < this->InternalBlendAlpha)) &&
     (lVar13 = (**(code **)(this->_padding_ + 0xb8))(this), lVar13 != 0)) {
    if (this->InternalBlendAlpha <= __real_3f7fff58 && __real_3f7fff58 != this->InternalBlendAlpha)
    {
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)local_1a8,(FAnimInstanceProxy *)local_108._0_8_,
                 (FAnimationUpdateSharedContext *)0x0);
      local_110 = local_70 != false;
      local_188.Data = (TTransform<double> *)0x0;
      local_180 = 0;
      local_178 = (FBoneContainer *)0x0;
      FStack_170.Data = (FCurveElement *)0x0;
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      FStack_150.Data = (FScriptContainerElement *)0x0;
      local_148 = 0;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138 = 0;
      local_130.Data = (FScriptContainerElement *)0x0;
      local_128 = 0;
      local_120.Data = (FScriptContainerElement *)0x0;
      local_118 = 0;
      FPoseContext::InitializeImpl((FPoseContext *)local_1a8,(FAnimInstanceProxy *)local_108._0_8_);
      local_1a8._20_4_ = local_108._20_4_;
      local_1a8._24_4_ = local_108._24_4_;
      if (local_1a8._0_8_ != local_108._0_8_) {
        FPoseContext::InitializeImpl
                  ((FPoseContext *)local_1a8,(FAnimInstanceProxy *)local_1a8._0_8_);
      }
      lVar13 = local_e8._padding_;
      iVar11 = (int)local_e8._padding_;
      lVar16 = (longlong)(int)local_e8._padding_;
      local_180 = CONCAT44(local_180._4_4_,(int)local_e8._padding_);
      if (((int)local_e8._padding_ == 0) && (local_180._4_4_ == 0)) {
        local_180 = local_e8._padding_ & 0xffffffff;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,(int)local_e8._padding_,local_180._4_4_,&local_188,
                   (int)local_e8._padding_,(int *)((longlong)&local_180 + 4));
        if (iVar11 != 0) {
          memcpy(local_188.Data,(void *)lVar13,lVar16 * 0x60);
        }
      }
      pFVar17 = pFStack_d0;
      iVar11 = (int)local_c8;
      lVar13 = (longlong)(int)local_c8;
      local_178 = local_e8.BoneContainer;
      local_168 = CONCAT44(local_168._4_4_,(int)local_c8);
      if (((int)local_c8 == 0) && (local_168._4_4_ == 0)) {
        local_168 = local_c8 & 0xffffffff;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,(int)local_c8,local_168._4_4_,&FStack_170,(int)local_c8,
                   (int *)((longlong)&local_168 + 4));
        if (iVar11 != 0) {
          memcpy(FStack_170.Data,pFVar17,lVar13 << 4);
        }
      }
      local_160 = local_c0;
      local_158 = local_b8;
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)FStack_150.Data,(int)local_148);
      pTVar6 = pTStack_b0;
      iVar11 = (int)local_a8;
      local_148 = CONCAT44(local_148._4_4_,(int)local_a8);
      if (((int)local_a8 == 0) && (local_148._4_4_ == 0)) {
        local_148 = local_a8 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_a8,local_148._4_4_,&FStack_150,(int)local_a8,
                   (int *)((longlong)&local_148 + 4));
        ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                  (FStack_150.Data,pTVar6,iVar11);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)local_140.Data,
                 (int)local_138);
      pTVar7 = local_a0;
      iVar11 = (int)local_98;
      local_138 = CONCAT44(local_138._4_4_,(int)local_98);
      if (((int)local_98 == 0) && (local_138._4_4_ == 0)) {
        local_138 = local_98 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_98,local_138._4_4_,&local_140,(int)local_98,
                   (int *)((longlong)&local_138 + 4));
        ConstructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                  (local_140.Data,pTVar7,iVar11);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                  *)local_130.Data,(int)local_128);
      pTVar8 = local_90;
      iVar11 = (int)local_88;
      local_128 = CONCAT44(local_128._4_4_,(int)local_88);
      if (((int)local_88 == 0) && (local_128._4_4_ == 0)) {
        local_128 = local_88 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_88,local_128._4_4_,&local_130,(int)local_88,
                   (int *)((longlong)&local_128 + 4));
        ConstructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                  (local_130.Data,pTVar8,iVar11);
      }
      _Src_00 = local_80;
      iVar11 = (int)local_78;
      lVar13 = (longlong)(int)local_78;
      local_118 = CONCAT44(local_118._4_4_,(int)local_78);
      if (((int)local_78 == 0) && (local_118._4_4_ == 0)) {
        local_118 = local_78 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(int)local_78,local_118._4_4_,&local_120,(int)local_78,
                   (int *)((longlong)&local_118 + 4));
        if (iVar11 != 0) {
          memcpy(local_120.Data,_Src_00,lVar13 << 3);
        }
      }
      local_110 = local_70;
      ExecuteControlRig(this,(FPoseContext *)local_1a8);
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)local_248,(FAnimInstanceProxy *)local_1a8._0_8_,
                 (FAnimationUpdateSharedContext *)0x0);
      local_1b0 = local_110 != false;
      local_228._0_8_ = (TTransform<double> *)0x0;
      local_228._8_8_ = 0;
      local_218 = (FBoneContainer *)0x0;
      FStack_210.Data = (FCurveElement *)0x0;
      local_208 = 0;
      local_200 = 0;
      local_1f8 = 0;
      auStack_1f0._0_8_ = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      auStack_1f0._8_8_ = 0;
      local_1e0.Data = (FScriptContainerElement *)0x0;
      local_1d8 = 0;
      local_1d0.Data = (FScriptContainerElement *)0x0;
      local_1c8 = 0;
      local_1c0.Data = (FScriptContainerElement *)0x0;
      local_1b8 = 0;
      FPoseContext::InitializeImpl((FPoseContext *)local_248,(FAnimInstanceProxy *)local_1a8._0_8_);
      local_248._20_4_ = local_1a8._20_4_;
      local_248._24_4_ = local_1a8._24_4_;
      if (local_248._0_8_ != local_1a8._0_8_) {
        FPoseContext::InitializeImpl
                  ((FPoseContext *)local_248,(FAnimInstanceProxy *)local_248._0_8_);
      }
      _Src.Data = local_188.Data;
      iVar11 = (int)local_180;
      lVar13 = (longlong)(int)local_180;
      local_228._8_4_ = (int)local_180;
      if (((int)local_180 == 0) && (local_228._12_4_ == 0)) {
        local_228._8_8_ = local_180 & 0xffffffff;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,(int)local_180,local_228._12_4_,
                   (ForElementType<UE::Math::TTransform<double>_> *)local_228,(int)local_180,
                   (int *)(local_228 + 0xc));
        if (iVar11 != 0) {
          memcpy((void *)local_228._0_8_,_Src.Data,lVar13 * 0x60);
        }
      }
      FVar19.Data = FStack_170.Data;
      iVar11 = (int)local_168;
      lVar13 = (longlong)(int)local_168;
      local_218 = local_178;
      local_208 = CONCAT44(local_208._4_4_,(int)local_168);
      if (((int)local_168 == 0) && (local_208._4_4_ == 0)) {
        local_208 = local_168 & 0xffffffff;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,(int)local_168,local_208._4_4_,&FStack_210,(int)local_168,
                   (int *)((longlong)&local_208 + 4));
        if (iVar11 != 0) {
          memcpy(FStack_210.Data,FVar19.Data,lVar13 << 4);
        }
      }
      local_200 = local_160;
      local_1f8 = local_158;
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)auStack_1f0._0_8_,auStack_1f0._8_4_);
      FVar5.Data = FStack_150.Data;
      iVar11 = (int)local_148;
      auStack_1f0._8_4_ = (int)local_148;
      if (((int)local_148 == 0) && (auStack_1f0._12_4_ == 0)) {
        auStack_1f0._8_8_ = local_148 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_148,auStack_1f0._12_4_,(ForAnyElementType *)auStack_1f0,
                   (int)local_148,(int *)(auStack_1f0 + 0xc));
        ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((void *)auStack_1f0._0_8_,(TArray<int,TSizedDefaultAllocator<32>_> *)FVar5.Data,
                   iVar11);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)local_1e0.Data,
                 (int)local_1d8);
      FVar5.Data = local_140.Data;
      iVar11 = (int)local_138;
      local_1d8 = CONCAT44(local_1d8._4_4_,(int)local_138);
      if (((int)local_138 == 0) && (local_1d8._4_4_ == 0)) {
        local_1d8 = local_138 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_138,local_1d8._4_4_,&local_1e0,(int)local_138,
                   (int *)((longlong)&local_1d8 + 4));
        ConstructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                  (local_1e0.Data,
                   (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)FVar5.Data,iVar11);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                  *)local_1d0.Data,(int)local_1c8);
      FVar5.Data = local_130.Data;
      iVar11 = (int)local_128;
      local_1c8 = CONCAT44(local_1c8._4_4_,(int)local_128);
      if (((int)local_128 == 0) && (local_1c8._4_4_ == 0)) {
        local_1c8 = local_128 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_128,local_1c8._4_4_,&local_1d0,(int)local_128,
                   (int *)((longlong)&local_1c8 + 4));
        ConstructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                  (local_1d0.Data,
                   (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                    *)FVar5.Data,iVar11);
      }
      FVar5.Data = local_120.Data;
      iVar11 = (int)local_118;
      lVar13 = (longlong)(int)local_118;
      local_1b8 = CONCAT44(local_1b8._4_4_,(int)local_118);
      if (((int)local_118 == 0) && (local_1b8._4_4_ == 0)) {
        local_1b8 = local_118 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(int)local_118,local_1b8._4_4_,&local_1c0,(int)local_118,
                   (int *)((longlong)&local_1b8 + 4));
        if (iVar11 != 0) {
          memcpy(local_1c0.Data,FVar5.Data,lVar13 << 3);
        }
      }
      local_1b0 = local_110;
      FAnimationRuntime::ConvertPoseToAdditive((FCompactPose *)local_228,(FCompactPose *)&local_e8);
      iVar11 = (int)local_c8;
      lVar13 = (longlong)(int)local_c8;
      iVar18 = (int)local_208;
      lVar16 = (longlong)(int)local_208;
      if ((int)local_c8 != 0) {
        if (local_200 == '\0') {
          AlgoImpl::
          IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                    (FStack_210.Data,(int)local_208,local_res8[0],
                     (FElementSortPredicate)local_res8[0]);
          local_200 = '\x01';
        }
        if (local_c0 == '\0') {
          AlgoImpl::
          IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                    (pFStack_d0,(int)local_c8,local_res8[0],(FElementSortPredicate)local_res8[0]);
          local_c0 = '\x01';
        }
        if (iVar11 < iVar18) {
          iVar11 = iVar18;
        }
        uVar20 = iVar11 / 2 + iVar11;
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        if (local_208._4_4_ < (int)uVar20) {
          UE::Core::Private::
          ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,uVar20,&FStack_210,(int)local_208,(int *)((longlong)&local_208 + 4));
        }
        uVar4 = __xmm_80000000800000008000000080000000;
        pFVar14 = FStack_210.Data + lVar16;
        pFVar21 = pFStack_d0 + lVar13;
        pFVar17 = pFStack_d0;
        if (FStack_210.Data != pFVar14) {
          FVar19.Data = FStack_210.Data;
          if (pFStack_d0 == pFVar21) goto LAB_14a252bd6;
          do {
            while( true ) {
              FVar2 = pFVar17->Name;
              FVar3 = (FVar19.Data)->Name;
              if (FVar3 != FVar2) break;
              (FVar19.Data)->Value = (FVar19.Data)->Value - pFVar17->Value;
              pEVar15 = &pFVar17->Flags;
              pFVar17 = pFVar17 + 1;
              (FVar19.Data)->Flags = (FVar19.Data)->Flags | *pEVar15;
              if ((FVar19.Data + 1 == pFVar14) ||
                 (FVar19.Data = FVar19.Data + 1, pFVar17 == pFVar21)) goto LAB_14a252b13;
            }
            iVar11 = FVar3.ComparisonIndex.Value.Value - FVar2.ComparisonIndex.Value;
            if (iVar11 == 0) {
              iVar11 = FVar3.Number - FVar2.Number;
            }
            if (iVar11 < 0) {
              FVar19.Data = FVar19.Data + 1;
              bVar9 = FVar19.Data == pFVar14;
            }
            else {
              lVar13 = (longlong)FVar19.Data - (longlong)FStack_210.Data;
              iVar11 = (int)local_208;
              if ((int)local_208 == local_208._4_4_) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                   (0x410,&FStack_210,(int *)((longlong)&local_208 + 4));
              }
              iVar18 = (int)(lVar13 >> 4);
              local_208 = CONCAT44(local_208._4_4_,iVar11 + 1);
              memmove(FStack_210.Data + iVar18 + 1,FStack_210.Data + iVar18,
                      (longlong)(iVar11 - iVar18) << 4);
              pFVar14 = FStack_210.Data + (int)local_208;
              pFVar1 = FStack_210.Data + iVar18;
              (pFVar1->Name).ComparisonIndex = 0;
              (pFVar1->Name).Number = 0;
              pFVar1->Value = 0.0;
              pFVar1->Flags = None;
              *(undefined3 *)&pFVar1->field_0xd = 0;
              FStack_210.Data[iVar18].Value = 0.0;
              FVar19.Data = FStack_210.Data + (longlong)iVar18 + 1;
              FStack_210.Data[iVar18].Name = pFVar17->Name;
              FStack_210.Data[iVar18].Value = (float)((uint)pFVar17->Value ^ uVar4);
              pEVar15 = &pFVar17->Flags;
              pFVar17 = pFVar17 + 1;
              bVar9 = pFVar17 == pFVar21;
              FStack_210.Data[iVar18].Flags = *pEVar15;
            }
          } while (!bVar9);
        }
LAB_14a252b13:
        if (pFVar17 < pFVar21) {
          lVar13 = (longlong)(int)local_208;
          iVar11 = (int)((longlong)pFVar21 - (longlong)pFVar17 >> 4);
          uVar20 = (int)local_208 + iVar11;
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
          }
          if (local_208._4_4_ < (int)uVar20) {
            UE::Core::Private::
            ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x10,4,uVar20,&FStack_210,(int)local_208,(int *)((longlong)&local_208 + 4));
          }
          UE::Core::Private::
          ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,iVar11,&FStack_210,(int *)&local_208,(int *)((longlong)&local_208 + 4));
          lVar16 = (longlong)pFVar17 - (longlong)(FStack_210.Data + lVar13);
          pFVar14 = FStack_210.Data + lVar13;
          pEVar15 = &pFVar17->Flags;
          do {
            (pFVar14->Name).ComparisonIndex = 0;
            (pFVar14->Name).Number = 0;
            pFVar14->Value = 0.0;
            pFVar14->Flags = None;
            *(undefined3 *)&pFVar14->field_0xd = 0;
            pFVar14->Value = 0.0;
            pFVar14->Name = *(FName *)((longlong)pFVar14 + lVar16);
            pFVar17 = pFVar14 + 1;
            pFVar14->Value = (float)((uint)*(float *)(pEVar15 + -4) ^ uVar4);
            pFVar14->Flags = *pEVar15;
            pFVar14 = pFVar17;
            pEVar15 = pEVar15 + 0x10;
          } while ((FCurveElement *)((longlong)pFVar17 + lVar16) < pFVar21);
        }
      }
LAB_14a252bd6:
      FPoseContext::operator=(param_1,(FPoseContext *)local_108);
      UE::Anim::Attributes::ConvertToAdditive
                ((FStackAttributeContainer *)&pTStack_b0,(FStackAttributeContainer *)auStack_1f0);
      FAnimationPoseData::FAnimationPoseData(&local_50,param_1);
      FAnimationPoseData::FAnimationPoseData(&local_68,(FPoseContext *)local_248);
      FAnimationRuntime::AccumulateAdditivePose
                (&local_50,&local_68,this->InternalBlendAlpha,AAT_LocalSpaceBase);
      if (local_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                  *)local_1d0.Data,(int)local_1c8);
      if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )local_1d0.Data !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_1d0.Data);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)local_1e0.Data,
                 (int)local_1d8);
      if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)local_1e0.Data !=
          (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1e0.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)auStack_1f0._0_8_,auStack_1f0._8_4_);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)auStack_1f0._0_8_ !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free((void *)auStack_1f0._0_8_);
      }
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                  *)local_130.Data,(int)local_128);
      if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )local_130.Data !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_130.Data);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)local_140.Data,
                 (int)local_138);
      if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)local_140.Data !=
          (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_140.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)FStack_150.Data,(int)local_148);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)FStack_150.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(FStack_150.Data);
      }
      goto LAB_14a252254;
    }
    ExecuteControlRig(this,(FPoseContext *)local_108);
  }
  FPoseContext::operator=(param_1,(FPoseContext *)local_108);
LAB_14a252254:
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_90,(int)local_88);
  if (local_90 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_90);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_a0,(int)local_98);
  if (local_a0 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a0);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_b0,(int)local_a8);
  if (pTStack_b0 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTStack_b0);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// ExecuteConstructionIfNeeded @ 14a256020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRigBase::ExecuteConstructionIfNeeded(FAnimNode_ControlRigBase *this)

{
  int *piVar1;
  longlong *lpCriticalSection;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_ControlRig_Evaluate_Construction> FVar9;
  UControlRig *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  longlong lVar13;
  void *local_res8;
  FName local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_98;
  FName local_90;
  TArray<FName,TSizedDefaultAllocator<32>_> local_80;
  TArray<FName,TSizedDefaultAllocator<32>_> local_70;
  FStatMessage local_60 [2];
  
  FVar9 = StatPtr_STAT_ControlRig_Evaluate_Construction;
  if (StatPtr_STAT_ControlRig_Evaluate_Construction ==
      (FThreadSafeStaticStat<FStat_STAT_ControlRig_Evaluate_Construction>)0x0) {
    pFVar8 = ::FName::FName(&local_98,"STAT_ControlRig_Evaluate_Construction");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_ControlRig_Evaluate_Construction>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_Evaluate_Construction,
                       *pFVar8,L"ControlRig_Evaluate_Construction","STATGROUP_Anim",
                       "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = (void *)((ulonglong)local_res8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\AnimNode_ControlRigBase.cpp"
                   ,0x14f);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.ComparisonIndex.Value = FVar11.Value;
      local_res18.Number = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_14a25615b;
    }
  }
  bVar5 = false;
  FVar12 = local_90;
LAB_14a25615b:
  this_00 = (UControlRig *)(**(code **)(this->_padding_ + 0xb8))(this);
  if (this_00 != (UControlRig *)0x0) {
    FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
    bVar7 = URigVMHost::IsRunOnceEvent((URigVMHost *)this_00,&local_res18);
    if (bVar7) {
      lpCriticalSection = &this_00->_padding_;
      if ((lpCriticalSection == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (((this_00->DynamicHierarchy).field0_0x0.DebugPtr != (URigHierarchy *)0x0) &&
         (this->bExecute != false)) {
        bVar7 = this_00->bResetCurrentTransformsAfterConstruction;
        this_00->bResetCurrentTransformsAfterConstruction = true;
        local_res8 = (void *)this_00->_padding_;
        local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_80.ArrayNum = (int)this_00->_padding_;
        lVar13 = (longlong)local_80.ArrayNum;
        if (local_80.ArrayNum == 0) {
          local_80.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_80.ArrayNum,0,&local_80.AllocatorInstance,local_80.ArrayNum,
                     &local_80.ArrayMax);
          memcpy(local_80.AllocatorInstance.Data,local_res8,lVar13 << 3);
        }
        local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_70.ArrayNum = 0;
        local_70.ArrayMax = 0;
        URigVMHost::SetEventQueue((URigVMHost *)this_00,&local_70);
        if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.AllocatorInstance.Data);
        }
        bVar2 = this_00->bOnlyRunConstruction;
        this_00->bOnlyRunConstruction = true;
        UpdateGetAssetUserDataDelegate(this,this_00);
        (**(code **)(this_00->_padding_ + 0x2d0))(this_00);
        URigVMHost::SetEventQueue((URigVMHost *)this_00,&local_80);
        this_00->bOnlyRunConstruction = bVar2;
        if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.AllocatorInstance.Data);
        }
        this_00->bResetCurrentTransformsAfterConstruction = bVar7;
      }
      if (lpCriticalSection != (longlong *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,local_60);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// ExecuteControlRig @ 14a256410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRigBase::ExecuteControlRig(FAnimNode_ControlRigBase *this,FPoseContext *param_1)

{
  int *piVar1;
  longlong *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  int iVar3;
  URigHierarchy *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ControlRig_Evaluate> FVar14;
  UControlRig *this_00;
  longlong lVar15;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar16;
  int iVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FScriptContainerElement *pFVar20;
  FPoseContext *pFVar21;
  uint local_res8;
  uint uStackX_c;
  FPoseContext *local_res10;
  bool local_res18;
  FColor_u_0 local_res20 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8 [2];
  TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_98;
  FName local_88;
  FName local_80;
  undefined8 local_70;
  LARGE_INTEGER local_68;
  FStatMessage local_60;
  FName local_50 [2];
  
  FVar14 = StatPtr_STAT_ControlRig_Evaluate;
  local_res10 = param_1;
  if (StatPtr_STAT_ControlRig_Evaluate == (FThreadSafeStaticStat<FStat_STAT_ControlRig_Evaluate>)0x0
     ) {
    pFVar13 = ::FName::FName(local_50,"STAT_ControlRig_Evaluate");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ControlRig_Evaluate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_Evaluate,*pFVar13,
                        L"ControlRig_Evaluate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar16 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar16 == 0)) {
LAB_14a25654a:
    bVar7 = false;
    FVar19 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar18.Value;
        local_88.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\AnimNode_ControlRigBase.cpp"
                   ,0xe9);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a25654a;
    local_res8 = FVar18.Value;
    uStackX_c = uVar16;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
  }
  this_00 = (UControlRig *)(**(code **)(this->_padding_ + 0xb8))(this);
  if (this_00 != (UControlRig *)0x0) {
    lpCriticalSection = &this_00->_padding_;
    if ((lpCriticalSection == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_d8.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniqueTypedBoneIndices.ArrayNum = 0;
    local_d8.UniqueTypedBoneIndices.ArrayMax = 0;
    local_d8.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.AttributeIdentifiers.ArrayNum = 0;
    local_d8.AttributeIdentifiers.ArrayMax = 0;
    local_d8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Values.ArrayNum = 0;
    local_d8.Values.ArrayMax = 0;
    local_d8.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniqueTypes.ArrayNum = 0;
    local_d8.UniqueTypes.ArrayMax = 0;
    UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
    CopyFrom<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
              (&local_d8,
               (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
               &param_1->CustomAttributes,*(FBoneContainer **)&(param_1->Pose).field_0x10);
    pUVar4 = (this_00->DynamicHierarchy).field0_0x0.DebugPtr;
    this_00->ExternalAnimAttributeContainer = (FMeshAttributeContainer *)&local_d8;
    if (pUVar4 == (URigHierarchy *)0x0) {
      this_00->ExternalAnimAttributeContainer = (FMeshAttributeContainer *)0x0;
      if (local_d8.UniqueTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.UniqueTypes.AllocatorInstance.Data);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)local_d8.Values.AllocatorInstance.Data,local_d8.Values.ArrayNum);
      if ((TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *)local_d8.Values.AllocatorInstance.Data !=
          (TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        FMemory::Free(local_d8.Values.AllocatorInstance.Data);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                 local_d8.AttributeIdentifiers.AllocatorInstance.Data,
                 local_d8.AttributeIdentifiers.ArrayNum);
      if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
          local_d8.AttributeIdentifiers.AllocatorInstance.Data !=
          (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_d8.AttributeIdentifiers.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_d8.UniqueTypedBoneIndices.AllocatorInstance.Data,
                 local_d8.UniqueTypedBoneIndices.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)
          local_d8.UniqueTypedBoneIndices.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_d8.UniqueTypedBoneIndices.AllocatorInstance.Data);
      }
      if (lpCriticalSection == (longlong *)0x0) goto LAB_14a2569bd;
    }
    else {
      if (((this->ControlRigHierarchyMappings).bEnablePoseAdapter != false) &&
         (bVar10 = FControlRigHierarchyMappings::IsUpdateToDate
                             (&this->ControlRigHierarchyMappings,pUVar4), !bVar10)) {
        FControlRigHierarchyMappings::PerformUpdateToDate
                  (&this->ControlRigHierarchyMappings,this_00,pUVar4,
                   *(FBoneContainer **)&(local_res10->Pose).field_0x10,&this->NodeMappingContainer,
                   this->bTransferPoseInGlobalSpace,this->bResetInputPoseToInitial);
      }
      pFVar21 = local_res10;
      (**(code **)(this->_padding_ + 0xd0))(this,this_00,local_res10);
      if (this->bExecute != false) {
        local_res18 = this_00->bResetCurrentTransformsAfterConstruction;
        this_00->bResetCurrentTransformsAfterConstruction = true;
        iVar3 = (this->EventQueue).ArrayNum;
        if (iVar3 == 0) {
          if (this->bClearEventQueueRequired != false) {
            FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
            local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
            *(undefined8 *)local_98.AllocatorInstance.Data = local_70;
            URigVMHost::SetEventQueue((URigVMHost *)this_00,&local_98);
            if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.AllocatorInstance.Data);
            }
            this->bClearEventQueueRequired = false;
          }
        }
        else {
          pFVar20 = (this->EventQueue).AllocatorInstance.Data;
          iVar17 = 0;
          local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.ArrayNum = 0;
          local_f8.ArrayMax = 0;
          pFVar2 = pFVar20 + (longlong)iVar3 * 8;
          while( true ) {
            if ((this->EventQueue).ArrayNum != iVar3) {
              local_res8 = local_res8 & 0xffffff00;
              `TCheckedPointerIterator<FControlRigAnimNodeEventName_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&local_res8);
              iVar17 = local_f8.ArrayNum;
            }
            if (pFVar20 == pFVar2) break;
            local_e8[0] = *(undefined8 *)pFVar20;
            iVar12 = iVar17;
            if ((local_f8.AllocatorInstance.Data <= (FScriptContainerElement *)local_e8) &&
               ((FScriptContainerElement *)local_e8 <
                local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayMax * 8)) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar10) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar12 = local_f8.ArrayNum;
            }
            if (iVar12 == local_f8.ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
            }
            iVar17 = iVar12 + 1;
            local_f8.ArrayNum = iVar17;
            pFVar20 = pFVar20 + 8;
            *(undefined8 *)(local_f8.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_e8[0];
          }
          URigVMHost::SetEventQueue((URigVMHost *)this_00,&local_f8);
          this->bClearEventQueueRequired = true;
          if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.AllocatorInstance.Data);
          }
        }
        cVar11 = (**(code **)(this_00->_padding_ + 0x490))(this_00);
        if (cVar11 != '\0') {
          UControlRig::ClearPoseBeforeBackwardsSolve(this_00);
        }
        UpdateGetAssetUserDataDelegate(this,this_00);
        (**(code **)(this_00->_padding_ + 0x2d0))(this_00);
        pTVar9 = CVarAnimNodeControlRigDebug.Ref;
        bVar10 = IsInParallelGameThread();
        if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
          lVar15 = 0;
        }
        else {
          lVar15 = 4;
        }
        pFVar21 = local_res10;
        if ((*(int *)((longlong)pTVar9->ShadowedValue + lVar15) == 1) &&
           (this_00->ExecutionType != Editing)) {
          QueueControlRigDrawInstructions(this,this_00,(FAnimInstanceProxy *)local_res10->_padding_)
          ;
        }
        this_00->bResetCurrentTransformsAfterConstruction = local_res18;
      }
      (**(code **)(this->_padding_ + 0xd8))(this,this_00,pFVar21);
      UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
      CopyFrom<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
                ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                 &pFVar21->CustomAttributes,&local_d8,
                 *(FBoneContainer **)&(pFVar21->Pose).field_0x10);
      this_00->ExternalAnimAttributeContainer = (FMeshAttributeContainer *)0x0;
      if (local_d8.UniqueTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.UniqueTypes.AllocatorInstance.Data);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)local_d8.Values.AllocatorInstance.Data,local_d8.Values.ArrayNum);
      if ((TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *)local_d8.Values.AllocatorInstance.Data !=
          (TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        FMemory::Free(local_d8.Values.AllocatorInstance.Data);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                 local_d8.AttributeIdentifiers.AllocatorInstance.Data,
                 local_d8.AttributeIdentifiers.ArrayNum);
      if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
          local_d8.AttributeIdentifiers.AllocatorInstance.Data !=
          (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_d8.AttributeIdentifiers.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_d8.UniqueTypedBoneIndices.AllocatorInstance.Data,
                 local_d8.UniqueTypedBoneIndices.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)
          local_d8.UniqueTypedBoneIndices.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_d8.UniqueTypedBoneIndices.AllocatorInstance.Data);
      }
      if (this_00 == (UControlRig *)0xfffffffffffffdc0) goto LAB_14a2569bd;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this_00->_padding_);
  }
LAB_14a2569bd:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_60.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_60);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// GatherDebugData @ 14a25d820

void __thiscall
FAnimNode_ControlRigBase::GatherDebugData(FAnimNode_ControlRigBase *this,FNodeDebugData *param_1)

{
  FNodeDebugData *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pFVar1 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_18);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Source,pFVar1);
  return;
}

// GetAssetUserData @ 14a25e740

TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> * __thiscall
FAnimNode_ControlRigBase::GetAssetUserData
          (FAnimNode_ControlRigBase *this,
          TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->AssetUserData).ArrayNum;
  pFVar2 = (this->AssetUserData).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<TObjectPtr<UAssetUserData>,TObjectPtr<UAssetUserData>,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(TObjectPtr<UAssetUserData> *)pFVar2,
             iVar1);
  return __return_storage_ptr__;
}

// GetControlRig @ 14a260880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall FAnimNode_ControlRigBase::GetControlRig(FAnimNode_ControlRigBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\AnimNode_ControlRigBase.h"
             ,0x30,L"Pure virtual not implemented (%s)");
  return (UControlRig *)0x0;
}

// GetControlRigClass @ 14a260940

TSubclassOf<UControlRig> __thiscall
FAnimNode_ControlRigBase::GetControlRigClass(FAnimNode_ControlRigBase *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\AnimNode_ControlRigBase.h"
             ,0x31,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UControlRig>)in_RDX.field0_0x0;
}

// GetTargetClass @ 14a26bc20

UClass * __thiscall FAnimNode_ControlRigBase::GetTargetClass(FAnimNode_ControlRigBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0xb8))();
  if (lVar1 != 0) {
    return *(UClass **)(lVar1 + 0x10);
  }
  return (UClass *)0x0;
}

// Initialize_AnyThread @ 14a272be0

void __thiscall
FAnimNode_ControlRigBase::Initialize_AnyThread
          (FAnimNode_ControlRigBase *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// NeedsOnInitializeAnimInstance @ 14a276d30

bool __thiscall
FAnimNode_ControlRigBase::NeedsOnInitializeAnimInstance(FAnimNode_ControlRigBase *this)

{
  return true;
}

// OnInitializeAnimInstance @ 14a278130

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRigBase::OnInitializeAnimInstance
          (FAnimNode_ControlRigBase *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  USkeletalMeshComponent *pUVar1;
  UControlRig *this_00;
  USkeletalMesh *pUVar2;
  UAnimationDataSourceRegistry *this_01;
  FWeakObjectPtr local_res8;
  UAnimInstance *local_res18 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::OnInitializeAnimInstance");
  FAnimNode_Base::OnInitializeAnimInstance((FAnimNode_Base *)this,param_1,param_2);
  FControlRigHierarchyMappings::InitializeInstance(&this->ControlRigHierarchyMappings);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->WeakAnimInstanceObject).WeakPtr = local_res8;
  pUVar1 = UAnimInstance::GetOwningComponent(param_2);
  this_00 = (UControlRig *)(**(code **)(this->_padding_ + 0xb8))(this);
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    pUVar2 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar1);
    if ((pUVar2 != (USkeletalMesh *)0x0) && (this_00 != (UControlRig *)0x0)) {
      this_01 = UControlRig::GetDataSourceRegistry(this_00);
      pUVar1 = UAnimInstance::GetOwningComponent(param_2);
      UAnimationDataSourceRegistry::RegisterDataSource
                (this_01,&UControlRig::OwnerComponent,(UObject *)pUVar1);
      UpdateGetAssetUserDataDelegate(this,this_00);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// QueueControlRigDrawInstructions @ 14a27d210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRigBase::QueueControlRigDrawInstructions
          (FAnimNode_ControlRigBase *this,UControlRig *param_1,FAnimInstanceProxy *param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  double *pdVar22;
  int *piVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar79;
  double dVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auStackY_208 [32];
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  UControlRig *local_1c0;
  longlong local_1b8;
  FColor local_1b0;
  FColor local_1ac;
  FColor local_1a8;
  uint local_1a4;
  FAnimInstanceProxy *local_1a0;
  longlong local_198;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1c0 = param_1;
  local_1a0 = param_2;
  if ((param_1 == (UControlRig *)0x0) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5721137269973189100>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\AnimNode_ControlRigBase.cpp"
                          ,0x1ec,"ControlRig"), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2 == (FAnimInstanceProxy *)0x0) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5721137269973189101>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\AnimNode_ControlRigBase.cpp"
                          ,0x1ed,"Proxy"), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1 != (UControlRig *)0x0) && (param_2 != (FAnimInstanceProxy *)0x0)) {
    local_1a4 = (uint)param_1->_padding_;
    uVar18 = (ulonglong)(int)local_1a4;
    lVar24 = param_1->_padding_;
    piVar23 = (int *)(lVar24 + 0x18);
    lVar21 = uVar18 * 0xd0 + lVar24;
    local_1b8 = lVar21;
    while( true ) {
      local_198 = lVar24;
      if ((int)param_1->_padding_ != (int)uVar18) {
        local_1c8 = 0;
        `TCheckedPointerIterator<FRigVMDrawInstruction,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1c8);
      }
      if (lVar24 == lVar21) break;
      if ((char)piVar23[-4] == '\x03') {
        if ((piVar23[0x26] != 0) && (piVar23[0x2a] != 0)) {
          bVar16 = *(longlong *)(piVar23 + 0x2c) == 0;
          goto LAB_14a27d39c;
        }
      }
      else {
        bVar16 = *piVar23 == 0;
LAB_14a27d39c:
        if (!bVar16) {
          local_118.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_118.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_118.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_118.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_118.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_118.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_118.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_118.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_118,(TTransform<double> *)(piVar23 + 10),&param_2->ComponentTransform);
          cVar4 = (char)piVar23[-4];
          if (cVar4 == '\0') {
            iVar6 = *piVar23;
            pdVar22 = *(double **)(piVar23 + -2);
            pdVar1 = pdVar22 + (longlong)iVar6 * 3;
            while( true ) {
              if (*piVar23 != iVar6) {
                local_1c7[0] = 0;
                `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_1c7);
              }
              param_1 = local_1c0;
              lVar21 = local_1b8;
              if (pdVar22 == pdVar1) break;
              bVar5 = *(byte *)(piVar23 + 0x22);
              fVar2 = (float)piVar23[0x23];
              FLinearColor::ToFColorSRGB((FLinearColor *)(piVar23 + 2));
              dVar79 = local_118.Rotation.XY.m128d_f64[1];
              dVar80 = *pdVar22 * local_118.Scale3D.XY.m128d_f64[0];
              dVar8 = pdVar22[1] * local_118.Scale3D.XY.m128d_f64[1];
              uVar56 = (undefined4)((ulonglong)dVar8 >> 0x20);
              dVar74 = pdVar22[2] * local_118.Scale3D.ZW.m128d_f64[0];
              dVar13 = local_118.Scale3D.ZW.m128d_f64[1] * 0.0;
              dVar76 = local_118.Rotation.ZW.m128d_f64[0];
              auVar73._8_4_ = SUB84(dVar8,0);
              auVar73._0_8_ = dVar80;
              auVar73._12_4_ = uVar56;
              auVar77._0_8_ = auVar73._8_8_ * local_118.Rotation.XY.m128d_f64[0] - dVar80 * dVar79;
              auVar77._8_8_ = dVar74 * dVar79 - dVar8 * dVar76;
              auVar73 = blendpd((undefined1  [16])local_118.Rotation.XY.m128d_f64,
                                (undefined1  [16])local_118.Rotation.ZW.m128d_f64,2);
              auVar58._8_4_ = SUB84(dVar8,0);
              auVar58._0_8_ = dVar80;
              auVar58._12_4_ = uVar56;
              auVar27._8_4_ = SUB84(dVar13,0);
              auVar27._0_8_ = dVar74;
              auVar27._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
              auVar27 = blendpd(auVar58,auVar27,2);
              dVar75 = local_118.Rotation.ZW.m128d_f64[1];
              auVar43._0_8_ = auVar27._0_8_ * dVar76 - dVar74 * auVar73._0_8_;
              auVar43._8_8_ = auVar27._8_8_ * dVar75 - dVar13 * auVar73._8_8_;
              auVar27 = blendpd(auVar77,auVar43,2);
              dVar13 = auVar77._8_8_ + auVar77._8_8_;
              dVar57 = auVar43._0_8_ + auVar43._0_8_;
              uVar56 = (undefined4)((ulonglong)dVar57 >> 0x20);
              auVar78._0_8_ = auVar27._0_8_ + auVar27._0_8_;
              auVar78._8_8_ = auVar27._8_8_ + auVar27._8_8_;
              auVar54._8_4_ = SUB84(dVar57,0);
              auVar54._0_8_ = dVar13;
              auVar54._12_4_ = uVar56;
              auVar44._8_4_ = SUB84(dVar57,0);
              auVar44._0_8_ = dVar13;
              auVar44._12_4_ = uVar56;
              auVar27 = blendpd(auVar44,auVar78,2);
              auVar55._0_8_ = auVar54._8_8_ * local_118.Rotation.XY.m128d_f64[0] - dVar13 * dVar79;
              auVar55._8_8_ = auVar78._0_8_ * dVar79 - dVar57 * dVar76;
              auVar45._0_8_ = auVar27._0_8_ * dVar76 - auVar78._0_8_ * auVar73._0_8_;
              auVar45._8_8_ = auVar27._8_8_ * dVar75 - auVar78._8_8_ * auVar73._8_8_;
              auVar27 = blendpd(auVar55,auVar45,2);
              local_130._s_0.Z =
                   auVar78._0_8_ * dVar75 + dVar74 + auVar27._0_8_ +
                   local_118.Translation.ZW.m128d_f64[0];
              dVar57 = dVar57 * dVar75 + dVar8 + auVar45._0_8_ +
                       local_118.Translation.XY.m128d_f64[1];
              local_130._8_4_ = SUB84(dVar57,0);
              local_130._0_8_ =
                   dVar13 * dVar75 + dVar80 + auVar55._8_8_ + local_118.Translation.XY.m128d_f64[0];
              local_130._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
              FAnimInstanceProxy::AnimDrawDebugPoint
                        (param_2,(TVector<double> *)&local_130._s_0,(float)piVar23[6],&local_1a8,
                         false,fVar2,(uint)bVar5);
              pdVar22 = pdVar22 + 3;
            }
          }
          else if (cVar4 == '\x01') {
            uVar20 = 0;
            param_1 = local_1c0;
            if (0 < *piVar23 + -1) {
              lVar25 = 0;
              do {
                bVar5 = *(byte *)(piVar23 + 0x22);
                fVar2 = (float)piVar23[6];
                fVar3 = (float)piVar23[0x23];
                FLinearColor::ToFColorSRGB((FLinearColor *)(piVar23 + 2));
                uVar17 = 0;
                if ((int)(uVar20 + 1) < *piVar23) {
                  uVar17 = ~(uVar20 + 1) >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                dVar57 = local_118.Rotation.XY.m128d_f64[1];
                dVar13 = local_118.Rotation.ZW.m128d_f64[0];
                auVar27 = blendpd((undefined1  [16])local_118.Rotation.XY.m128d_f64,
                                  (undefined1  [16])local_118.Rotation.ZW.m128d_f64,2);
                pdVar1 = (double *)(lVar25 + 0x18 + *(longlong *)(piVar23 + -2));
                dVar76 = *pdVar1 * local_118.Scale3D.XY.m128d_f64[0];
                dVar75 = pdVar1[1] * local_118.Scale3D.XY.m128d_f64[1];
                uVar17 = 0;
                if ((int)uVar20 < *piVar23) {
                  uVar17 = ~uVar20 >> 0x1f;
                }
                dVar79 = local_118.Rotation.ZW.m128d_f64[1];
                auVar67._8_4_ = SUB84(dVar75,0);
                auVar67._0_8_ = dVar76;
                uVar56 = (undefined4)((ulonglong)dVar75 >> 0x20);
                auVar67._12_4_ = uVar56;
                auVar35._8_4_ = SUB84(dVar75,0);
                auVar35._0_8_ = dVar76;
                auVar35._12_4_ = uVar56;
                dVar74 = *(double *)(lVar25 + 0x28 + *(longlong *)(piVar23 + -2)) *
                         local_118.Scale3D.ZW.m128d_f64[0];
                dVar80 = local_118.Scale3D.ZW.m128d_f64[1] * 0.0;
                auVar11._8_4_ = SUB84(dVar80,0);
                auVar11._0_8_ = dVar74;
                auVar11._12_4_ = (int)((ulonglong)dVar80 >> 0x20);
                auVar58 = blendpd(auVar35,auVar11,2);
                auVar68._0_8_ = auVar67._8_8_ * local_118.Rotation.XY.m128d_f64[0] - dVar76 * dVar57
                ;
                auVar68._8_8_ = dVar74 * dVar57 - dVar75 * dVar13;
                auVar36._0_8_ = auVar58._0_8_ * dVar13 - dVar74 * auVar27._0_8_;
                auVar36._8_8_ = auVar58._8_8_ * dVar79 - dVar80 * auVar27._8_8_;
                auVar58 = blendpd(auVar68,auVar36,2);
                dVar80 = auVar68._8_8_ + auVar68._8_8_;
                dVar8 = auVar36._0_8_ + auVar36._0_8_;
                uVar56 = (undefined4)((ulonglong)dVar8 >> 0x20);
                auVar69._0_8_ = auVar58._0_8_ + auVar58._0_8_;
                auVar69._8_8_ = auVar58._8_8_ + auVar58._8_8_;
                auVar50._8_4_ = SUB84(dVar8,0);
                auVar50._0_8_ = dVar80;
                auVar50._12_4_ = uVar56;
                auVar37._8_4_ = SUB84(dVar8,0);
                auVar37._0_8_ = dVar80;
                auVar37._12_4_ = uVar56;
                auVar58 = blendpd(auVar37,auVar69,2);
                auVar51._0_8_ = auVar50._8_8_ * local_118.Rotation.XY.m128d_f64[0] - dVar80 * dVar57
                ;
                auVar51._8_8_ = auVar69._0_8_ * dVar57 - dVar8 * dVar13;
                auVar38._0_8_ = auVar58._0_8_ * dVar13 - auVar69._0_8_ * auVar27._0_8_;
                auVar38._8_8_ = auVar58._8_8_ * dVar79 - auVar69._8_8_ * auVar27._8_8_;
                auVar27 = blendpd(auVar51,auVar38,2);
                dVar13 = dVar8 * dVar79 + dVar75 + auVar38._0_8_ +
                         local_118.Translation.XY.m128d_f64[1];
                local_160._s_0.Z =
                     auVar69._0_8_ * dVar79 + dVar74 + auVar27._0_8_ +
                     local_118.Translation.ZW.m128d_f64[0];
                local_160._8_4_ = SUB84(dVar13,0);
                local_160._0_8_ =
                     dVar80 * dVar79 + dVar76 + auVar51._8_8_ +
                     local_118.Translation.XY.m128d_f64[0];
                local_160._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                if (uVar17 == 0) {
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar16) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                auVar60._4_4_ = local_118.Rotation.XY.m128d_f64[0]._4_4_;
                auVar60._0_4_ = local_118.Rotation.XY.m128d_f64[0]._0_4_;
                auVar60._8_4_ = local_118.Rotation.XY.m128d_f64[1]._0_4_;
                auVar60._12_4_ = local_118.Rotation.XY.m128d_f64[1]._4_4_;
                pdVar1 = (double *)(*(longlong *)(piVar23 + -2) + lVar25);
                dVar75 = *pdVar1 * local_118.Scale3D.XY.m128d_f64[0];
                dVar80 = pdVar1[1] * local_118.Scale3D.XY.m128d_f64[1];
                dVar76 = *(double *)(*(longlong *)(piVar23 + -2) + 0x10 + lVar25) *
                         local_118.Scale3D.ZW.m128d_f64[0];
                dVar13 = local_118.Scale3D.ZW.m128d_f64[1] * 0.0;
                auVar15._4_4_ = local_118.Rotation.ZW.m128d_f64[0]._4_4_;
                auVar15._0_4_ = local_118.Rotation.ZW.m128d_f64[0]._0_4_;
                auVar15._8_4_ = local_118.Rotation.ZW.m128d_f64[1]._0_4_;
                auVar15._12_4_ = local_118.Rotation.ZW.m128d_f64[1]._4_4_;
                auVar58 = blendpd(auVar60,auVar15,2);
                auVar70._8_4_ = SUB84(dVar80,0);
                auVar70._0_8_ = dVar75;
                uVar56 = (undefined4)((ulonglong)dVar80 >> 0x20);
                auVar70._12_4_ = uVar56;
                auVar39._8_4_ = SUB84(dVar80,0);
                auVar39._0_8_ = dVar75;
                auVar39._12_4_ = uVar56;
                auVar71._0_8_ =
                     auVar70._8_8_ *
                     (double)CONCAT44(local_118.Rotation.XY.m128d_f64[0]._4_4_,
                                      local_118.Rotation.XY.m128d_f64[0]._0_4_) -
                     dVar75 * (double)CONCAT44(local_118.Rotation.XY.m128d_f64[1]._4_4_,
                                               local_118.Rotation.XY.m128d_f64[1]._0_4_);
                auVar71._8_8_ =
                     dVar76 * (double)CONCAT44(local_118.Rotation.XY.m128d_f64[1]._4_4_,
                                               local_118.Rotation.XY.m128d_f64[1]._0_4_) -
                     dVar80 * (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[0]._4_4_,
                                               local_118.Rotation.ZW.m128d_f64[0]._0_4_);
                auVar12._8_4_ = SUB84(dVar13,0);
                auVar12._0_8_ = dVar76;
                auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                auVar27 = blendpd(auVar39,auVar12,2);
                auVar40._0_8_ =
                     auVar27._0_8_ *
                     (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[0]._4_4_,
                                      local_118.Rotation.ZW.m128d_f64[0]._0_4_) -
                     dVar76 * auVar58._0_8_;
                auVar40._8_8_ =
                     auVar27._8_8_ *
                     (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                      local_118.Rotation.ZW.m128d_f64[1]._0_4_) -
                     dVar13 * auVar58._8_8_;
                auVar27 = blendpd(auVar71,auVar40,2);
                dVar13 = auVar71._8_8_ + auVar71._8_8_;
                dVar57 = auVar40._0_8_ + auVar40._0_8_;
                uVar56 = (undefined4)((ulonglong)dVar57 >> 0x20);
                auVar72._0_8_ = auVar27._0_8_ + auVar27._0_8_;
                auVar72._8_8_ = auVar27._8_8_ + auVar27._8_8_;
                auVar52._8_4_ = SUB84(dVar57,0);
                auVar52._0_8_ = dVar13;
                auVar52._12_4_ = uVar56;
                auVar41._8_4_ = SUB84(dVar57,0);
                auVar41._0_8_ = dVar13;
                auVar41._12_4_ = uVar56;
                auVar27 = blendpd(auVar41,auVar72,2);
                auVar53._0_8_ =
                     auVar52._8_8_ *
                     (double)CONCAT44(local_118.Rotation.XY.m128d_f64[0]._4_4_,
                                      local_118.Rotation.XY.m128d_f64[0]._0_4_) -
                     dVar13 * (double)CONCAT44(local_118.Rotation.XY.m128d_f64[1]._4_4_,
                                               local_118.Rotation.XY.m128d_f64[1]._0_4_);
                auVar53._8_8_ =
                     auVar72._0_8_ *
                     (double)CONCAT44(local_118.Rotation.XY.m128d_f64[1]._4_4_,
                                      local_118.Rotation.XY.m128d_f64[1]._0_4_) -
                     dVar57 * (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[0]._4_4_,
                                               local_118.Rotation.ZW.m128d_f64[0]._0_4_);
                auVar42._0_8_ =
                     auVar27._0_8_ *
                     (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[0]._4_4_,
                                      local_118.Rotation.ZW.m128d_f64[0]._0_4_) -
                     auVar72._0_8_ * auVar58._0_8_;
                auVar42._8_8_ =
                     auVar27._8_8_ *
                     (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                      local_118.Rotation.ZW.m128d_f64[1]._0_4_) -
                     auVar72._8_8_ * auVar58._8_8_;
                auVar27 = blendpd(auVar53,auVar42,2);
                dVar57 = dVar57 * (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                                   local_118.Rotation.ZW.m128d_f64[1]._0_4_) +
                         dVar80 + auVar42._0_8_ + local_118.Translation.XY.m128d_f64[1];
                local_148._s_0.Z =
                     auVar72._0_8_ *
                     (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                      local_118.Rotation.ZW.m128d_f64[1]._0_4_) + dVar76 +
                     auVar27._0_8_ + local_118.Translation.ZW.m128d_f64[0];
                local_148._8_4_ = SUB84(dVar57,0);
                local_148._0_8_ =
                     dVar13 * (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                               local_118.Rotation.ZW.m128d_f64[1]._0_4_) + dVar75 +
                     auVar53._8_8_ + local_118.Translation.XY.m128d_f64[0];
                local_148._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
                FAnimInstanceProxy::AnimDrawDebugLine
                          (param_2,(TVector<double> *)&local_148._s_0,
                           (TVector<double> *)&local_160._s_0,&local_1ac,false,fVar3,fVar2,
                           (uint)bVar5);
                uVar20 = uVar20 + 2;
                lVar25 = lVar25 + 0x30;
                param_1 = local_1c0;
                lVar21 = local_1b8;
              } while ((int)uVar20 < *piVar23 + -1);
            }
          }
          else if ((cVar4 == '\x02') && (lVar21 = local_1b8, 0 < *piVar23 + -1)) {
            lVar25 = 0;
            uVar20 = 0;
            do {
              bVar5 = *(byte *)(piVar23 + 0x22);
              fVar2 = (float)piVar23[6];
              fVar3 = (float)piVar23[0x23];
              FLinearColor::ToFColorSRGB((FLinearColor *)(piVar23 + 2));
              uVar19 = uVar20 + 1;
              uVar17 = 0;
              if ((int)uVar19 < *piVar23) {
                uVar17 = ~uVar19 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar75 = local_118.Rotation.XY.m128d_f64[1];
              dVar76 = local_118.Rotation.ZW.m128d_f64[0];
              pdVar1 = (double *)(*(longlong *)(piVar23 + -2) + 0x18 + lVar25);
              dVar13 = *(double *)(*(longlong *)(piVar23 + -2) + 0x28 + lVar25) *
                       local_118.Scale3D.ZW.m128d_f64[0];
              dVar57 = local_118.Scale3D.ZW.m128d_f64[1] * 0.0;
              uVar17 = 0;
              if ((int)uVar20 < *piVar23) {
                uVar17 = ~uVar20 >> 0x1f;
              }
              dVar8 = local_118.Rotation.ZW.m128d_f64[1];
              dVar74 = local_118.Scale3D.XY.m128d_f64[0] * *pdVar1;
              dVar79 = local_118.Scale3D.XY.m128d_f64[1] * pdVar1[1];
              auVar61._8_4_ = SUB84(dVar79,0);
              auVar61._0_8_ = dVar74;
              uVar56 = (undefined4)((ulonglong)dVar79 >> 0x20);
              auVar61._12_4_ = uVar56;
              auVar26._8_4_ = SUB84(dVar79,0);
              auVar26._0_8_ = dVar74;
              auVar26._12_4_ = uVar56;
              auVar9._8_4_ = SUB84(dVar57,0);
              auVar9._0_8_ = dVar13;
              auVar9._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
              auVar27 = blendpd(auVar26,auVar9,2);
              auVar62._0_8_ = auVar61._8_8_ * local_118.Rotation.XY.m128d_f64[0] - dVar75 * dVar74;
              auVar62._8_8_ = dVar13 * dVar75 - dVar76 * dVar79;
              auVar58 = blendpd((undefined1  [16])local_118.Rotation.XY.m128d_f64,
                                (undefined1  [16])local_118.Rotation.ZW.m128d_f64,2);
              auVar28._0_8_ = auVar27._0_8_ * dVar76 - auVar58._0_8_ * dVar13;
              auVar28._8_8_ = auVar27._8_8_ * dVar8 - auVar58._8_8_ * dVar57;
              auVar27 = blendpd(auVar62,auVar28,2);
              dVar57 = auVar62._8_8_ + auVar62._8_8_;
              dVar80 = auVar28._0_8_ + auVar28._0_8_;
              uVar56 = (undefined4)((ulonglong)dVar80 >> 0x20);
              auVar63._0_8_ = auVar27._0_8_ + auVar27._0_8_;
              auVar63._8_8_ = auVar27._8_8_ + auVar27._8_8_;
              auVar46._8_4_ = SUB84(dVar80,0);
              auVar46._0_8_ = dVar57;
              auVar46._12_4_ = uVar56;
              auVar29._8_4_ = SUB84(dVar80,0);
              auVar29._0_8_ = dVar57;
              auVar29._12_4_ = uVar56;
              auVar27 = blendpd(auVar29,auVar63,2);
              auVar47._0_8_ = auVar46._8_8_ * local_118.Rotation.XY.m128d_f64[0] - dVar57 * dVar75;
              auVar47._8_8_ = auVar63._0_8_ * dVar75 - dVar80 * dVar76;
              auVar30._0_8_ = auVar27._0_8_ * dVar76 - auVar63._0_8_ * auVar58._0_8_;
              auVar30._8_8_ = auVar27._8_8_ * dVar8 - auVar63._8_8_ * auVar58._8_8_;
              auVar27 = blendpd(auVar47,auVar30,2);
              dVar76 = dVar80 * dVar8 + dVar79 + auVar30._0_8_ +
                       local_118.Translation.XY.m128d_f64[1];
              local_190._s_0.Z =
                   auVar63._0_8_ * dVar8 + dVar13 + auVar27._0_8_ +
                   local_118.Translation.ZW.m128d_f64[0];
              local_190._8_4_ = SUB84(dVar76,0);
              local_190._0_8_ =
                   dVar57 * dVar8 + dVar74 + auVar47._8_8_ + local_118.Translation.XY.m128d_f64[0];
              local_190._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
              if (uVar17 == 0) {
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              pdVar1 = (double *)(*(longlong *)(piVar23 + -2) + lVar25);
              auVar59._4_4_ = local_118.Rotation.XY.m128d_f64[0]._4_4_;
              auVar59._0_4_ = local_118.Rotation.XY.m128d_f64[0]._0_4_;
              auVar59._8_4_ = local_118.Rotation.XY.m128d_f64[1]._0_4_;
              auVar59._12_4_ = local_118.Rotation.XY.m128d_f64[1]._4_4_;
              dVar75 = *pdVar1 * local_118.Scale3D.XY.m128d_f64[0];
              dVar80 = pdVar1[1] * local_118.Scale3D.XY.m128d_f64[1];
              dVar76 = *(double *)(*(longlong *)(piVar23 + -2) + 0x10 + lVar25) *
                       local_118.Scale3D.ZW.m128d_f64[0];
              dVar13 = local_118.Scale3D.ZW.m128d_f64[1] * 0.0;
              auVar14._4_4_ = local_118.Rotation.ZW.m128d_f64[0]._4_4_;
              auVar14._0_4_ = local_118.Rotation.ZW.m128d_f64[0]._0_4_;
              auVar14._8_4_ = local_118.Rotation.ZW.m128d_f64[1]._0_4_;
              auVar14._12_4_ = local_118.Rotation.ZW.m128d_f64[1]._4_4_;
              auVar58 = blendpd(auVar59,auVar14,2);
              auVar64._8_4_ = SUB84(dVar80,0);
              auVar64._0_8_ = dVar75;
              uVar56 = (undefined4)((ulonglong)dVar80 >> 0x20);
              auVar64._12_4_ = uVar56;
              auVar31._8_4_ = SUB84(dVar80,0);
              auVar31._0_8_ = dVar75;
              auVar31._12_4_ = uVar56;
              auVar65._0_8_ =
                   auVar64._8_8_ *
                   (double)CONCAT44(local_118.Rotation.XY.m128d_f64[0]._4_4_,
                                    local_118.Rotation.XY.m128d_f64[0]._0_4_) -
                   dVar75 * (double)CONCAT44(local_118.Rotation.XY.m128d_f64[1]._4_4_,
                                             local_118.Rotation.XY.m128d_f64[1]._0_4_);
              auVar65._8_8_ =
                   dVar76 * (double)CONCAT44(local_118.Rotation.XY.m128d_f64[1]._4_4_,
                                             local_118.Rotation.XY.m128d_f64[1]._0_4_) -
                   dVar80 * (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[0]._4_4_,
                                             local_118.Rotation.ZW.m128d_f64[0]._0_4_);
              auVar10._8_4_ = SUB84(dVar13,0);
              auVar10._0_8_ = dVar76;
              auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
              auVar27 = blendpd(auVar31,auVar10,2);
              auVar32._0_8_ =
                   auVar27._0_8_ *
                   (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[0]._4_4_,
                                    local_118.Rotation.ZW.m128d_f64[0]._0_4_) -
                   dVar76 * auVar58._0_8_;
              auVar32._8_8_ =
                   auVar27._8_8_ *
                   (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                    local_118.Rotation.ZW.m128d_f64[1]._0_4_) -
                   dVar13 * auVar58._8_8_;
              auVar27 = blendpd(auVar65,auVar32,2);
              dVar13 = auVar65._8_8_ + auVar65._8_8_;
              dVar57 = auVar32._0_8_ + auVar32._0_8_;
              uVar56 = (undefined4)((ulonglong)dVar57 >> 0x20);
              auVar66._0_8_ = auVar27._0_8_ + auVar27._0_8_;
              auVar66._8_8_ = auVar27._8_8_ + auVar27._8_8_;
              auVar48._8_4_ = SUB84(dVar57,0);
              auVar48._0_8_ = dVar13;
              auVar48._12_4_ = uVar56;
              auVar33._8_4_ = SUB84(dVar57,0);
              auVar33._0_8_ = dVar13;
              auVar33._12_4_ = uVar56;
              auVar27 = blendpd(auVar33,auVar66,2);
              auVar49._0_8_ =
                   auVar48._8_8_ *
                   (double)CONCAT44(local_118.Rotation.XY.m128d_f64[0]._4_4_,
                                    local_118.Rotation.XY.m128d_f64[0]._0_4_) -
                   dVar13 * (double)CONCAT44(local_118.Rotation.XY.m128d_f64[1]._4_4_,
                                             local_118.Rotation.XY.m128d_f64[1]._0_4_);
              auVar49._8_8_ =
                   auVar66._0_8_ *
                   (double)CONCAT44(local_118.Rotation.XY.m128d_f64[1]._4_4_,
                                    local_118.Rotation.XY.m128d_f64[1]._0_4_) -
                   dVar57 * (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[0]._4_4_,
                                             local_118.Rotation.ZW.m128d_f64[0]._0_4_);
              auVar34._0_8_ =
                   auVar27._0_8_ *
                   (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[0]._4_4_,
                                    local_118.Rotation.ZW.m128d_f64[0]._0_4_) -
                   auVar66._0_8_ * auVar58._0_8_;
              auVar34._8_8_ =
                   auVar27._8_8_ *
                   (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                    local_118.Rotation.ZW.m128d_f64[1]._0_4_) -
                   auVar66._8_8_ * auVar58._8_8_;
              auVar27 = blendpd(auVar49,auVar34,2);
              dVar57 = dVar57 * (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                                 local_118.Rotation.ZW.m128d_f64[1]._0_4_) + dVar80
                       + auVar34._0_8_ + local_118.Translation.XY.m128d_f64[1];
              local_178._s_0.Z =
                   auVar66._0_8_ *
                   (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                    local_118.Rotation.ZW.m128d_f64[1]._0_4_) + dVar76 +
                   auVar27._0_8_ + local_118.Translation.ZW.m128d_f64[0];
              local_178._8_4_ = SUB84(dVar57,0);
              local_178._0_8_ =
                   dVar13 * (double)CONCAT44(local_118.Rotation.ZW.m128d_f64[1]._4_4_,
                                             local_118.Rotation.ZW.m128d_f64[1]._0_4_) + dVar75 +
                   auVar49._8_8_ + local_118.Translation.XY.m128d_f64[0];
              local_178._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
              FAnimInstanceProxy::AnimDrawDebugLine
                        (local_1a0,(TVector<double> *)&local_178._s_0,
                         (TVector<double> *)&local_190._s_0,&local_1b0,false,fVar3,fVar2,(uint)bVar5
                        );
              lVar25 = lVar25 + 0x18;
              param_1 = local_1c0;
              lVar21 = local_1b8;
              lVar24 = local_198;
              param_2 = local_1a0;
              uVar20 = uVar19;
            } while ((int)uVar19 < *piVar23 + -1);
          }
        }
      }
      uVar18 = (ulonglong)local_1a4;
      lVar24 = lVar24 + 0xd0;
      piVar23 = piVar23 + 0x34;
    }
  }
  return;
}

// UpdateGetAssetUserDataDelegate @ 14a2a49e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate
          (FAnimNode_ControlRigBase *this,UControlRig *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  bVar4 = IsInGameThread();
  if (bVar4) {
    iVar1 = (this->AssetUserData).ArrayNum;
    pFVar2 = (this->AssetUserData).AllocatorInstance.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = iVar1;
    if (iVar1 == 0) {
      local_6c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_78,iVar1,&local_6c);
      ConstructItems<TObjectPtr<UAssetUserData>,TObjectPtr<UAssetUserData>,int>
                (local_78.Data,(TObjectPtr<UAssetUserData> *)pFVar2,iVar1);
    }
    if ((local_70 == 0) ||
       (bVar4 = FWeakObjectPtr::IsValid(&(this->WeakAnimInstanceObject).WeakPtr), !bVar4)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    if (bVar4) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &param_1->GetExternalAssetUserDataDelegate);
    }
    else {
      FVar3 = (this->WeakAnimInstanceObject).WeakPtr;
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_38);
      local_20 = &local_60;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6A_AV__TArray_U__TObjectPtr_VUAssetUserData____V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::`2'::<lambda_1>_>
                   ::_vftable_;
        puVar5[3] = param_1;
        *(FWeakObjectPtr *)(puVar5 + 4) = FVar3;
        puVar5[5] = this;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &param_1->GetExternalAssetUserDataDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
  }
  return;
}

// UpdateInput @ 14a2a4ec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRigBase::UpdateInput
          (FAnimNode_ControlRigBase *this,UControlRig *param_1,FPoseContext *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_ControlRig_UpdateInput> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_ControlRig_UpdateInput;
  if (StatPtr_STAT_ControlRig_UpdateInput ==
      (FThreadSafeStaticStat<FStat_STAT_ControlRig_UpdateInput>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_ControlRig_UpdateInput");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_ControlRig_UpdateInput>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_UpdateInput,*pFVar6,
                       L"ControlRig_UpdateInput","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\AnimNode_ControlRigBase.cpp"
                   ,0x84);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a2a5028;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a2a5028:
  cVar5 = (**(code **)(this->_padding_ + 200))(this);
  if (cVar5 != '\0') {
    FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::UpdateInput");
    FControlRigHierarchyMappings::UpdateInput
              (&this->ControlRigHierarchyMappings,param_1,param_2,&this->InputSettings,
               &this->OutputSettings,&this->NodeMappingContainer,this->bExecute,
               this->bTransferInputPose,this->bResetInputPoseToInitial,
               this->bTransferPoseInGlobalSpace,this->bTransferInputCurves);
    FStatsHierarchical::EndMeasurement();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateOutput @ 14a2a59c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRigBase::UpdateOutput
          (FAnimNode_ControlRigBase *this,UControlRig *param_1,FPoseContext *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_ControlRig_UpdateOutput> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_ControlRig_UpdateOutput;
  if (StatPtr_STAT_ControlRig_UpdateOutput ==
      (FThreadSafeStaticStat<FStat_STAT_ControlRig_UpdateOutput>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_ControlRig_UpdateOutput");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_ControlRig_UpdateOutput>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_UpdateOutput,*pFVar6,
                       L"ControlRig_UpdateOutput","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\AnimNode_ControlRigBase.cpp"
                   ,0x9b);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a2a5b28;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a2a5b28:
  cVar5 = (**(code **)(this->_padding_ + 200))(this);
  if (cVar5 != '\0') {
    FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::UpdateOutput");
    FControlRigHierarchyMappings::UpdateOutput
              (&this->ControlRigHierarchyMappings,param_1,param_2,&this->OutputSettings,
               &this->NodeMappingContainer,this->bExecute,this->bTransferPoseInGlobalSpace);
    FStatsHierarchical::EndMeasurement();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Update_AnyThread @ 14a2a6a80

void __thiscall
FAnimNode_ControlRigBase::Update_AnyThread
          (FAnimNode_ControlRigBase *this,FAnimationUpdateContext *param_1)

{
  URigVMHost *this_00;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::Update_AnyThread");
  FAnimNode_Base::Update_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  if (this->bExecute != false) {
    this_00 = (URigVMHost *)(**(code **)(this->_padding_ + 0xb8))(this);
    if (this_00 != (URigVMHost *)0x0) {
      URigVMHost::SetDeltaTime(this_00,param_1->DeltaTime);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// operator() @ 15054cdf0

bool __thiscall
`FAnimNode_ControlRigBase::Evaluate_AnyThread'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5721137269973188801>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5721137269973188801>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

