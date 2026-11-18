// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 26

// StaticClass @ 14a37b700

UClass * __cdecl UControlRigLayerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigLayerInstance",
               &Z_Registration_Info_UClass_UControlRigLayerInstance.InnerSingleton,
               StaticRegisterNativesUControlRigLayerInstance,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigLayerInstance>,
               InternalVTableHelperCtorCaller<UControlRigLayerInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigLayerInstance.InnerSingleton;
}

// UControlRigLayerInstance @ 14a3b8c00

UControlRigLayerInstance * __thiscall
UControlRigLayerInstance::UControlRigLayerInstance
          (UControlRigLayerInstance *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &_vftable__for__UAnimInstance__;
  *(undefined ***)&this->field_0x428 = &_vftable__for__ISequencerAnimationSupport__;
  return this;
}

// UControlRigLayerInstance @ 14a3b8c40

UControlRigLayerInstance * __thiscall
UControlRigLayerInstance::UControlRigLayerInstance
          (UControlRigLayerInstance *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->field_0x31 = this->field_0x31 & 0xfe;
  *(undefined ***)this = &_vftable__for__UAnimInstance__;
  *(undefined ***)&this->field_0x428 = &_vftable__for__ISequencerAnimationSupport__;
  return this;
}

// ~UControlRigLayerInstance @ 14a3bcfe0

void __thiscall UControlRigLayerInstance::~UControlRigLayerInstance(UControlRigLayerInstance *this)

{
  *(undefined ***)this = &_vftable__for__UAnimInstance__;
  *(undefined ***)&this->field_0x428 = &___7ISequencerAnimationSupport__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// AddAnimation @ 14a3c9e40

void __thiscall
UControlRigLayerInstance::AddAnimation
          (UControlRigLayerInstance *this,int param_1,UAnimSequenceBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  undefined8 uVar4;
  
  if (this != (UControlRigLayerInstance *)0x0) {
    bVar2 = IsInGameThread();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                           ,0x687,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    if (*(longlong *)&this->field_0x3f0 == 0) {
      uVar4 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(undefined8 *)&this->field_0x3f0 = uVar4;
    }
  }
  return;
}

// AddControlRigTrack @ 14a3dbeb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigLayerInstance::AddControlRigTrack
          (UControlRigLayerInstance *this,int param_1,UControlRig *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  USkeletalMeshComponent *pUVar5;
  FControlRigLayerInstanceProxy *this_00;
  
  cVar2 = (**(code **)(param_2->_padding_ + 0x490))(param_2);
  if (cVar2 != '\0') {
    lVar4 = (**(code **)(*(longlong *)&this->field_0x428 + 0x10))();
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x31) = *(byte *)(lVar4 + 0x31) & 0xfe;
    }
  }
  if (this == (UControlRigLayerInstance *)0x0) {
    this_00 = (FControlRigLayerInstanceProxy *)0x0;
  }
  else {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar3) {
      pUVar5 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar5);
    }
    this_00 = *(FControlRigLayerInstanceProxy **)&this->field_0x3f0;
    if (this_00 == (FControlRigLayerInstanceProxy *)0x0) {
      this_00 = (FControlRigLayerInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      *(FControlRigLayerInstanceProxy **)&this->field_0x3f0 = this_00;
    }
  }
  FControlRigLayerInstanceProxy::AddControlRigTrack(this_00,param_1,param_2);
  return;
}

// ConstructNodes @ 14a3f55a0

void __thiscall UControlRigLayerInstance::ConstructNodes(UControlRigLayerInstance *this)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong *plVar4;
  
  this_00 = &this[-1].field_0x8;
  if (this_00 == (undefined1 *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this[-1].field_0x28);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this_00);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    plVar4 = *(longlong **)&this[-1].field_0x3f8;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)this_00 + 0x378))(this_00);
      *(longlong **)&this[-1].field_0x3f8 = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00014a3f5628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xa8))(plVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a3f5639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0xa8))();
  return;
}

// CreateAnimInstanceProxy @ 14a400070

FAnimInstanceProxy * __thiscall
UControlRigLayerInstance::CreateAnimInstanceProxy(UControlRigLayerInstance *this)

{
  FAnimInstanceProxy *this_00;
  
  this_00 = ::operator_new(0x8b0);
  if (this_00 != (FAnimInstanceProxy *)0x0) {
    FAnimInstanceProxy::FAnimInstanceProxy(this_00,(UAnimInstance *)this);
    *(undefined ***)this_00 = &___7FControlRigLayerInstanceProxy__6B_;
    *(undefined ***)&this_00->field_0x808 = &___7FAnimNode_ControlRigInputPose__6B_;
    *(undefined8 *)(this_00 + 1) = 0;
    *(undefined8 *)&this_00[1].field_0x8 = 0;
    *(undefined1 *)((longlong)&this_00[1].QueuedDrawDebugItems.AllocatorInstance.Data + 4) = 0;
    this_00[1].QueuedDrawDebugItems.ArrayNum = 0;
    this_00[1].QueuedDrawDebugItems.ArrayMax = 0;
    this_00[1].ComponentTransform.Rotation.XY.m128d_f64[0] = 0.0;
    this_00[1].ComponentTransform.Rotation.XY.m128d_f64[1] = 0.0;
    this_00[1].ComponentTransform.Rotation.ZW.m128d_f64[0] = 0.0;
    this_00[1].ComponentTransform.Rotation.ZW.m128d_f64[1] = 0.0;
    this_00[1].ComponentTransform.Translation.XY.m128d_f64[0] = 0.0;
    this_00[1].ComponentTransform.Translation.XY.m128d_f64[1] = 0.0;
    this_00[1].ComponentTransform.Scale3D.XY.m128d_f64[0] = 0.0;
    *(undefined4 *)&this_00[1].QueuedDrawDebugItems.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)(this_00[1].ComponentTransform.Scale3D.XY.m128d_f64 + 1) = 0;
    *(undefined4 *)((longlong)this_00[1].ComponentTransform.Scale3D.XY.m128d_f64 + 0xc) = 0x80;
    *(undefined4 *)((longlong)this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64 + 4) = 0;
    *(undefined4 *)this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64 = 0xffffffff;
    this_00[1].ComponentRelativeTransform.Rotation.XY.m128d_f64[0] = 0.0;
    *(undefined4 *)(this_00[1].ComponentRelativeTransform.Rotation.XY.m128d_f64 + 1) = 0;
    this_00[1].ComponentRelativeTransform.Rotation.ZW.m128d_f64[0] = 0.0;
    return this_00;
  }
  return (FAnimInstanceProxy *)0x0;
}

// DoesSupportDifferentSourceAnimInstance @ 14a4039c0

bool __thiscall
UControlRigLayerInstance::DoesSupportDifferentSourceAnimInstance(UControlRigLayerInstance *this)

{
  return true;
}

// GetFirstAvailableControlRig @ 14a413d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall
UControlRigLayerInstance::GetFirstAvailableControlRig(UControlRigLayerInstance *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UControlRig *pUVar4;
  USkeletalMeshComponent *pUVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x6a1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UControlRig *)(*pcVar2)();
    return pUVar4;
  }
  bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
  if (bVar3) {
    pUVar5 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
    UAnimInstance::HandleExistingParallelEvaluationTask(pUVar5);
  }
  lVar6 = *(longlong *)&this->field_0x3f0;
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(longlong *)this + 0x378))(this);
    *(longlong *)&this->field_0x3f0 = lVar6;
  }
  iVar1 = *(int *)(lVar6 + 0x848);
  plVar7 = *(longlong **)(lVar6 + 0x840);
  plVar8 = plVar7 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)(lVar6 + 0x848) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar7 == plVar8) break;
    if ((*plVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UControlRig *)(*pcVar2)();
      return pUVar4;
    }
    pUVar4 = (UControlRig *)(**(code **)(*(longlong *)*plVar7 + 0xb8))();
    if (pUVar4 != (UControlRig *)0x0) {
      return pUVar4;
    }
    plVar7 = plVar7 + 2;
  }
  return (UControlRig *)0x0;
}

// GetPrivateStaticClass @ 14a416ce0

UClass * __cdecl UControlRigLayerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigLayerInstance",
               &Z_Registration_Info_UClass_UControlRigLayerInstance.InnerSingleton,
               StaticRegisterNativesUControlRigLayerInstance,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigLayerInstance>,
               InternalVTableHelperCtorCaller<UControlRigLayerInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigLayerInstance.InnerSingleton;
}

// GetSourceAnimInstance @ 14a419990

UAnimInstance * __thiscall
UControlRigLayerInstance::GetSourceAnimInstance(UControlRigLayerInstance *this)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  UAnimInstance *pUVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  
  this_00 = &this[-1].field_0x8;
  if (this_00 == (undefined1 *)0x0) {
    lVar5 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UAnimInstance *)(*pcVar1)();
        return pUVar3;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this[-1].field_0x28);
    if (bVar2) {
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this_00);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
    }
    lVar5 = *(longlong *)&this[-1].field_0x3f8;
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)this_00 + 0x378))(this_00);
      *(longlong *)&this[-1].field_0x3f8 = lVar5;
      return *(UAnimInstance **)(lVar5 + 0x8a0);
    }
  }
  return *(UAnimInstance **)(lVar5 + 0x8a0);
}

// HasControlRigTrack @ 14a41cc50

bool __thiscall
UControlRigLayerInstance::HasControlRigTrack(UControlRigLayerInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  USkeletalMeshComponent *pUVar4;
  FControlRigLayerInstanceProxy *this_00;
  FAnimNode_ControlRig_ExternalSource *pFVar5;
  
  if (this == (UControlRigLayerInstance *)0x0) {
    this_00 = (FControlRigLayerInstanceProxy *)0x0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
    }
    this_00 = *(FControlRigLayerInstanceProxy **)&this->field_0x3f0;
    if (this_00 == (FControlRigLayerInstanceProxy *)0x0) {
      this_00 = (FControlRigLayerInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      *(FControlRigLayerInstanceProxy **)&this->field_0x3f0 = this_00;
    }
  }
  pFVar5 = FControlRigLayerInstanceProxy::FindControlRigNode(this_00,param_1);
  return pFVar5 != (FAnimNode_ControlRig_ExternalSource *)0x0;
}

// NativeUpdateAnimation @ 14a42e7e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigLayerInstance::NativeUpdateAnimation(UControlRigLayerInstance *this,float param_1)

{
  char cVar1;
  UAnimInstance *this_00;
  UControlRig *pUVar2;
  
  UAnimInstance::NativeUpdateAnimation((UAnimInstance *)this,param_1);
  this_00 = (UAnimInstance *)(**(code **)(*(longlong *)&this->field_0x428 + 0x10))();
  if (this_00 != (UAnimInstance *)0x0) {
    pUVar2 = GetFirstAvailableControlRig(this);
    if (pUVar2 != (UControlRig *)0x0) {
      cVar1 = (**(code **)(pUVar2->_padding_ + 0x490))(pUVar2);
      if (cVar1 != '\0') {
        UAnimInstance::UpdateAnimation(this_00,param_1,true,Default);
      }
    }
  }
  return;
}

// RemoveAnimation @ 14a43d850

void __thiscall
UControlRigLayerInstance::RemoveAnimation(UControlRigLayerInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  undefined8 uVar4;
  
  if (this != (UControlRigLayerInstance *)0x0) {
    bVar2 = IsInGameThread();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                           ,0x687,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    if (*(longlong *)&this->field_0x3f0 == 0) {
      uVar4 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(undefined8 *)&this->field_0x3f0 = uVar4;
    }
  }
  return;
}

// RemoveControlRigTrack @ 14a4422d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigLayerInstance::RemoveControlRigTrack(UControlRigLayerInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  USkeletalMeshComponent *pUVar4;
  FControlRigLayerInstanceProxy *this_00;
  longlong lVar5;
  UControlRig *pUVar6;
  
  if (this == (UControlRigLayerInstance *)0x0) {
    this_00 = (FControlRigLayerInstanceProxy *)0x0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
    }
    this_00 = *(FControlRigLayerInstanceProxy **)&this->field_0x3f0;
    if (this_00 == (FControlRigLayerInstanceProxy *)0x0) {
      this_00 = (FControlRigLayerInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      *(FControlRigLayerInstanceProxy **)&this->field_0x3f0 = this_00;
    }
  }
  FControlRigLayerInstanceProxy::RemoveControlRigTrack(this_00,param_1);
  lVar5 = (**(code **)(*(longlong *)&this->field_0x428 + 0x10))();
  if (lVar5 != 0) {
    pUVar6 = GetFirstAvailableControlRig(this);
    if (pUVar6 != (UControlRig *)0x0) {
      cVar3 = (**(code **)(pUVar6->_padding_ + 0x490))(pUVar6);
      *(byte *)(lVar5 + 0x31) = *(byte *)(lVar5 + 0x31) & 0xfe | cVar3 == '\0';
      return;
    }
    *(byte *)(lVar5 + 0x31) = *(byte *)(lVar5 + 0x31) | 1;
  }
  return;
}

// ResetControlRigTracks @ 14a450210

void __thiscall UControlRigLayerInstance::ResetControlRigTracks(UControlRigLayerInstance *this)

{
  TSharedPtr<FAnimNode_ControlRig_ExternalSource,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  
  if (this == (UControlRigLayerInstance *)0x0) {
    lVar5 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar3) {
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
    }
    lVar5 = *(longlong *)&this->field_0x3f0;
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(longlong *)&this->field_0x3f0 = lVar5;
    }
  }
  TSet<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>,FDefaultSetAllocator>
           *)(lVar5 + 0x850));
  pTVar1 = (TSharedPtr<FAnimNode_ControlRig_ExternalSource,1> *)
           ((ForAnyElementType *)(lVar5 + 0x840))->Data;
  if (-1 < *(int *)(lVar5 + 0x84c)) {
    DestructItems<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>,int>
              (pTVar1,*(int *)(lVar5 + 0x848));
    *(undefined4 *)(lVar5 + 0x848) = 0;
    return;
  }
  DestructItems<TSharedPtr<FAnimNode_ControlRig_ExternalSource,1>,int>
            (pTVar1,*(int *)(lVar5 + 0x848));
  *(undefined4 *)(lVar5 + 0x848) = 0;
  if (*(int *)(lVar5 + 0x84c) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)(lVar5 + 0x840),0,(int *)(lVar5 + 0x84c));
  }
  return;
}

// ResetNodes @ 14a450540

void __thiscall UControlRigLayerInstance::ResetNodes(UControlRigLayerInstance *this)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong *plVar4;
  
  this_00 = &this[-1].field_0x8;
  if (this_00 == (undefined1 *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this[-1].field_0x28);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this_00);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    plVar4 = *(longlong **)&this[-1].field_0x3f8;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)this_00 + 0x378))(this_00);
      *(longlong **)&this[-1].field_0x3f8 = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00014a4505c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x98))(plVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4505d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x98))();
  return;
}

// ResetPose @ 14a4505f0

void __thiscall UControlRigLayerInstance::ResetPose(UControlRigLayerInstance *this)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong *plVar4;
  
  this_00 = &this[-1].field_0x8;
  if (this_00 == (undefined1 *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this[-1].field_0x28);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this_00);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    plVar4 = *(longlong **)&this[-1].field_0x3f8;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)this_00 + 0x378))(this_00);
      *(longlong **)&this[-1].field_0x3f8 = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00014a450678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xa0))(plVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a450689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0xa0))();
  return;
}

// SavePose @ 14a455830

void __thiscall UControlRigLayerInstance::SavePose(UControlRigLayerInstance *this)

{
  undefined1 *this_00;
  USkeletalMeshComponent *this_01;
  USkeletalMesh *pUVar1;
  
  this_00 = &this[-1].field_0x8;
  this_01 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this_00);
  if (this_01 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
    if ((pUVar1 != (USkeletalMesh *)0x0) &&
       (0 < (int)(&this_01->_padding_)[(longlong)(int)this_01->_padding_ * 2])) {
      (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,SequencerPoseName);
    }
  }
  return;
}

// SetSourceAnimInstance @ 14a45a810

void __thiscall
UControlRigLayerInstance::SetSourceAnimInstance
          (UControlRigLayerInstance *this,UAnimInstance *param_1)

{
  int iVar1;
  TObjectPtr<UAnimInstance>_u_0 *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  USkeletalMeshComponent *pUVar6;
  UAnimInstance *pUVar7;
  FControlRigLayerInstanceProxy *pFVar8;
  FControlRigLayerInstanceProxy *pFVar9;
  USkeletalMeshComponent *pUVar10;
  TObjectPtr<UAnimInstance>_u_0 TVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FControlRigLayerInstanceProxy *pFVar15;
  UAnimInstance *this_00;
  TObjectPtr<UAnimInstance>_u_0 local_res8;
  USkeletalMeshComponent *local_res10;
  UAnimInstance *local_res18;
  TObjectPtr<UAnimInstance>_u_0 local_48 [2];
  
  this_00 = (UAnimInstance *)&this[-1].field_0x8;
  local_res18 = this_00;
  pUVar6 = UAnimInstance::GetOwningComponent(this_00);
  local_res10 = pUVar6;
  pUVar7 = USkeletalMeshComponent::GetAnimInstance(pUVar6);
  if ((pUVar7 == param_1) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1691804123453718447>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\ControlRigLayerInstance.cpp"
                         ,0x51,"MeshComponent->GetAnimInstance() != SourceAnimInstance"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 == (UAnimInstance *)0x0) {
    param_1 = (UAnimInstance *)0x0;
    pFVar8 = (FControlRigLayerInstanceProxy *)param_1;
    if (this_00 != (UAnimInstance *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                             ,0x687,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this[-1].field_0x28);
      if (bVar5) {
        pUVar10 = UAnimInstance::GetSkelMeshComponentChecked(this_00);
        UAnimInstance::HandleExistingParallelEvaluationTask(pUVar10);
      }
      pFVar8 = *(FControlRigLayerInstanceProxy **)&this[-1].field_0x3f8;
      if (*(FControlRigLayerInstanceProxy **)&this[-1].field_0x3f8 ==
          (FControlRigLayerInstanceProxy *)0x0) {
        pFVar8 = (FControlRigLayerInstanceProxy *)
                 (**(code **)(*(longlong *)this_00 + 0x378))(this_00);
        *(FControlRigLayerInstanceProxy **)&this[-1].field_0x3f8 = pFVar8;
      }
    }
    if ((pUVar6 != (USkeletalMeshComponent *)0x0) &&
       (TVar11 = (TObjectPtr<UAnimInstance>_u_0)
                 (pFVar8->CurrentSourceAnimInstance).field0_0x0.DebugPtr,
       TVar11.DebugPtr != (UAnimInstance *)0x0)) {
      local_48[0] = TVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
      }
      pTVar2 = (TObjectPtr<UAnimInstance>_u_0 *)(pUVar6->LinkedInstances).AllocatorInstance.Data;
      if (((pTVar2 <= local_48) && (local_48 < pTVar2 + (pUVar6->LinkedInstances).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar1 = (pUVar6->LinkedInstances).ArrayNum;
      if (iVar1 != 0) {
        pFVar3 = (pUVar6->LinkedInstances).AllocatorInstance.Data;
        bVar5 = *(UAnimInstance **)pFVar3 != local_48[0].DebugPtr;
        TVar11 = local_48[0];
        pFVar8 = (FControlRigLayerInstanceProxy *)param_1;
        pFVar9 = (FControlRigLayerInstanceProxy *)param_1;
        pFVar15 = (FControlRigLayerInstanceProxy *)param_1;
        do {
          uVar12 = (uint)pFVar9;
          uVar13 = uVar12;
          do {
            pFVar8 = (FControlRigLayerInstanceProxy *)&pFVar8->field_0x1;
            uVar13 = uVar13 + 1;
            pFVar9 = (FControlRigLayerInstanceProxy *)(ulonglong)uVar13;
            if ((longlong)iVar1 <= (longlong)pFVar8) break;
          } while (bVar5 == (*(UAnimInstance **)(pFVar3 + (longlong)pFVar8 * 8) != TVar11.DebugPtr))
          ;
          if (bVar5 != false) {
            uVar14 = (uint)pFVar15;
            if (uVar14 != uVar12) {
              memmove(pFVar3 + (longlong)(int)uVar14 * 8,pFVar3 + (longlong)(int)uVar12 * 8,
                      (longlong)(int)(uVar13 - uVar12) << 3);
              TVar11 = local_48[0];
            }
            pFVar15 = (FControlRigLayerInstanceProxy *)(ulonglong)(uVar14 + (uVar13 - uVar12));
          }
          bVar5 = (bool)(bVar5 ^ 1);
        } while ((longlong)pFVar8 < (longlong)iVar1);
        (local_res10->LinkedInstances).ArrayNum = (int)pFVar15;
        this_00 = local_res18;
      }
    }
    pFVar8 = (FControlRigLayerInstanceProxy *)param_1;
    pFVar9 = (FControlRigLayerInstanceProxy *)param_1;
    if (this_00 != (UAnimInstance *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                             ,0x687,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this_00->field_0x20);
      if (bVar5) {
        pUVar6 = UAnimInstance::GetSkelMeshComponentChecked(this_00);
        UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
      }
      pFVar8 = (FControlRigLayerInstanceProxy *)this_00->AnimInstanceProxy;
      if ((FControlRigLayerInstanceProxy *)this_00->AnimInstanceProxy ==
          (FControlRigLayerInstanceProxy *)0x0) {
        pFVar8 = (FControlRigLayerInstanceProxy *)
                 (**(code **)(*(longlong *)this_00 + 0x378))(this_00);
        this_00->AnimInstanceProxy = (FAnimInstanceProxy *)pFVar8;
      }
    }
  }
  else {
    if (pUVar6 != (USkeletalMeshComponent *)0x0) {
      local_res8.DebugPtr = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      TArray<TObjectPtr<UAnimInstance>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TObjectPtr<UAnimInstance>_>
                (&pUVar6->LinkedInstances,(TObjectPtr<UAnimInstance> *)&local_res8.ObjectPtr);
    }
    if (this_00 == (UAnimInstance *)0x0) {
      pFVar8 = (FControlRigLayerInstanceProxy *)0x0;
    }
    else {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                             ,0x687,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this[-1].field_0x28);
      if (bVar5) {
        pUVar6 = UAnimInstance::GetSkelMeshComponentChecked(this_00);
        UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
      }
      pFVar8 = *(FControlRigLayerInstanceProxy **)&this[-1].field_0x3f8;
      if (pFVar8 == (FControlRigLayerInstanceProxy *)0x0) {
        pFVar8 = (FControlRigLayerInstanceProxy *)
                 (**(code **)(*(longlong *)this_00 + 0x378))(this_00);
        *(FControlRigLayerInstanceProxy **)&this[-1].field_0x3f8 = pFVar8;
      }
    }
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                           ,0x687,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&param_1->field_0x20);
    if (bVar5) {
      pUVar6 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
    }
    pFVar9 = (FControlRigLayerInstanceProxy *)param_1->AnimInstanceProxy;
    if (pFVar9 == (FControlRigLayerInstanceProxy *)0x0) {
      pFVar9 = (FControlRigLayerInstanceProxy *)(**(code **)(*(longlong *)param_1 + 0x378))(param_1)
      ;
      param_1->AnimInstanceProxy = (FAnimInstanceProxy *)pFVar9;
    }
  }
  FControlRigLayerInstanceProxy::SetSourceAnimInstance(pFVar8,param_1,(FAnimInstanceProxy *)pFVar9);
  return;
}

// StaticRegisterNativesUControlRigLayerInstance @ 14a45c360

void __cdecl UControlRigLayerInstance::StaticRegisterNativesUControlRigLayerInstance(void)

{
  return;
}

// UpdateAnimTrack @ 14a45ea90

void __thiscall
UControlRigLayerInstance::UpdateAnimTrack
          (UControlRigLayerInstance *this,UAnimSequenceBase *param_1,int param_2,float param_3,
          float param_4,float param_5,bool param_6)

{
  FObjectPtr_u_0 *this_00;
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong lVar4;
  UClass *pUVar5;
  undefined1 *puVar6;
  
  puVar6 = &this[-1].field_0x8;
  if (puVar6 == (undefined1 *)0x0) {
    lVar4 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this[-1].field_0x28);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)puVar6);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    lVar4 = *(longlong *)&this[-1].field_0x3f8;
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)puVar6 + 0x378))(puVar6);
      *(longlong *)&this[-1].field_0x3f8 = lVar4;
    }
  }
  this_00 = (FObjectPtr_u_0 *)(lVar4 + 0x8a0);
  if (this_00->Handle != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if ((bVar2) && (this_00->Handle != (UObject *)0x0)) {
      puVar6 = &this_00->Handle[0x1a].field_0x18;
      (**(code **)(*(longlong *)puVar6 + 0x28))
                (puVar6,param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}

// UpdateAnimTrack @ 14a45ebb0

void __thiscall
UControlRigLayerInstance::UpdateAnimTrack
          (UControlRigLayerInstance *this,UAnimSequenceBase *param_1,int param_2,float param_3,
          float param_4,bool param_5)

{
  FObjectPtr_u_0 *this_00;
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong lVar4;
  UClass *pUVar5;
  undefined1 *puVar6;
  
  puVar6 = &this[-1].field_0x8;
  if (puVar6 == (undefined1 *)0x0) {
    lVar4 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this[-1].field_0x28);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)puVar6);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    lVar4 = *(longlong *)&this[-1].field_0x3f8;
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)puVar6 + 0x378))(puVar6);
      *(longlong *)&this[-1].field_0x3f8 = lVar4;
    }
  }
  this_00 = (FObjectPtr_u_0 *)(lVar4 + 0x8a0);
  if (this_00->Handle != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if ((bVar2) && (this_00->Handle != (UObject *)0x0)) {
      puVar6 = &this_00->Handle[0x1a].field_0x18;
      (**(code **)(*(longlong *)puVar6 + 0x30))(puVar6,param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

// UpdateControlRigTrack @ 14a45f7e0

void __thiscall
UControlRigLayerInstance::UpdateControlRigTrack
          (UControlRigLayerInstance *this,int param_1,float param_2,FControlRigIOSettings *param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  FControlRigLayerInstanceProxy *this_00;
  FAnimNode_ControlRig_ExternalSource *pFVar4;
  
  if (this == (UControlRigLayerInstance *)0x0) {
    this_00 = (FControlRigLayerInstanceProxy *)0x0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    this_00 = *(FControlRigLayerInstanceProxy **)&this->field_0x3f0;
    if (this_00 == (FControlRigLayerInstanceProxy *)0x0) {
      this_00 = (FControlRigLayerInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      *(FControlRigLayerInstanceProxy **)&this->field_0x3f0 = this_00;
    }
  }
  pFVar4 = FControlRigLayerInstanceProxy::FindControlRigNode(this_00,param_1);
  if (pFVar4 != (FAnimNode_ControlRig_ExternalSource *)0x0) {
    if (__real_3f800000 <= param_2) {
      param_2 = __real_3f800000;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)&pFVar4->_padding_ = param_2;
    *(FControlRigIOSettings *)&pFVar4->_padding_ = *param_3;
    *(bool *)((longlong)&pFVar4->_padding_ + 4) = param_4;
  }
  return;
}

// _getUObject @ 14a468e90

UObject * __thiscall UControlRigLayerInstance::_getUObject(UControlRigLayerInstance *this)

{
  return (UObject *)&this[-1].field_0x8;
}

