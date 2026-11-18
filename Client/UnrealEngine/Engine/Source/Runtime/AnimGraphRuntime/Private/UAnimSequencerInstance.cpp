// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 18

// StaticClass @ 1463ef220

UClass * __cdecl UAnimSequencerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequencerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimSequencerInstance",
               &Z_Registration_Info_UClass_UAnimSequencerInstance.InnerSingleton,
               StaticRegisterNativesUAnimSequencerInstance,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSequencerInstance>,
               InternalVTableHelperCtorCaller<UAnimSequencerInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequencerInstance.InnerSingleton;
}

// UAnimSequencerInstance @ 1464076c0

UAnimSequencerInstance * __thiscall
UAnimSequencerInstance::UAnimSequencerInstance(UAnimSequencerInstance *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &_vftable__for__UAnimInstance__;
  *(undefined ***)&this->field_0x428 = &_vftable__for__ISequencerAnimationSupport__;
  return this;
}

// UAnimSequencerInstance @ 146407700

UAnimSequencerInstance * __thiscall
UAnimSequencerInstance::UAnimSequencerInstance
          (UAnimSequencerInstance *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->field_0x31 = this->field_0x31 & 0xfe;
  *(undefined ***)this = &_vftable__for__UAnimInstance__;
  *(undefined ***)&this->field_0x428 = &_vftable__for__ISequencerAnimationSupport__;
  return this;
}

// ~UAnimSequencerInstance @ 1464096c0

void __thiscall UAnimSequencerInstance::~UAnimSequencerInstance(UAnimSequencerInstance *this)

{
  *(undefined ***)this = &_vftable__for__UAnimInstance__;
  *(undefined ***)&this->field_0x428 = &___7ISequencerAnimationSupport__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// ConstructNodes @ 1464200e0

void __thiscall UAnimSequencerInstance::ConstructNodes(UAnimSequencerInstance *this)

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
                    /* WARNING: Could not recover jumptable at 0x000146420168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xa8))(plVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146420179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0xa8))();
  return;
}

// CreateAnimInstanceProxy @ 146422800

FAnimInstanceProxy * __thiscall
UAnimSequencerInstance::CreateAnimInstanceProxy(UAnimSequencerInstance *this)

{
  FAnimSequencerInstanceProxy *pFVar1;
  
  pFVar1 = ::operator_new(0xc70);
  if (pFVar1 != (FAnimSequencerInstanceProxy *)0x0) {
    pFVar1 = FAnimSequencerInstanceProxy::FAnimSequencerInstanceProxy(pFVar1,(UAnimInstance *)this);
    return (FAnimInstanceProxy *)pFVar1;
  }
  return (FAnimInstanceProxy *)0x0;
}

// DoesSupportDifferentSourceAnimInstance @ 146423b70

bool __thiscall
UAnimSequencerInstance::DoesSupportDifferentSourceAnimInstance(UAnimSequencerInstance *this)

{
  return false;
}

// GetPrivateStaticClass @ 14644cee0

UClass * __cdecl UAnimSequencerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequencerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimSequencerInstance",
               &Z_Registration_Info_UClass_UAnimSequencerInstance.InnerSingleton,
               StaticRegisterNativesUAnimSequencerInstance,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSequencerInstance>,
               InternalVTableHelperCtorCaller<UAnimSequencerInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequencerInstance.InnerSingleton;
}

// GetSourceAnimInstance @ 14644f460

UAnimInstance * __thiscall
UAnimSequencerInstance::GetSourceAnimInstance(UAnimSequencerInstance *this)

{
  return (UAnimInstance *)&this[-1].field_0x8;
}

// ResetNodes @ 146464510

void __thiscall UAnimSequencerInstance::ResetNodes(UAnimSequencerInstance *this)

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
                    /* WARNING: Could not recover jumptable at 0x000146464598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x98))(plVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001464645a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x98))();
  return;
}

// ResetPose @ 1464645c0

void __thiscall UAnimSequencerInstance::ResetPose(UAnimSequencerInstance *this)

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
                    /* WARNING: Could not recover jumptable at 0x000146464648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xa0))(plVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146464659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0xa0))();
  return;
}

// SavePose @ 146467340

void __thiscall UAnimSequencerInstance::SavePose(UAnimSequencerInstance *this)

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

// SetSourceAnimInstance @ 14646b1c0

void __thiscall
UAnimSequencerInstance::SetSourceAnimInstance(UAnimSequencerInstance *this,UAnimInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5138461291970559953>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimSequencerInstance.h"
                     ,0x2f,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticRegisterNativesUAnimSequencerInstance @ 14646e580

void __cdecl UAnimSequencerInstance::StaticRegisterNativesUAnimSequencerInstance(void)

{
  return;
}

// UpdateAnimTrack @ 1464714b0

void __thiscall
UAnimSequencerInstance::UpdateAnimTrack
          (UAnimSequencerInstance *this,UAnimSequenceBase *param_1,int param_2,float param_3,
          float param_4,float param_5,bool param_6)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  FAnimSequencerInstanceProxy *this_01;
  float local_res8;
  undefined1 local_resc;
  TOptional<FRootMotionOverride> local_f8;
  
  this_00 = &this[-1].field_0x8;
  if (this_00 == (undefined1 *)0x0) {
    this_01 = (FAnimSequencerInstanceProxy *)0x0;
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
    this_01 = *(FAnimSequencerInstanceProxy **)&this[-1].field_0x3f8;
    if (this_01 == (FAnimSequencerInstanceProxy *)0x0) {
      this_01 = (FAnimSequencerInstanceProxy *)(**(code **)(*(longlong *)this_00 + 0x378))(this_00);
      *(FAnimSequencerInstanceProxy **)&this[-1].field_0x3f8 = this_01;
    }
  }
  local_resc = 1;
  local_f8.bIsSet = false;
  local_res8 = param_3;
  FAnimSequencerInstanceProxy::UpdateAnimTrack
            (this_01,param_1,param_2,&local_f8,(TOptional<float>)&local_res8,param_4,param_5,param_6
             ,(UMirrorDataTable *)0x0);
  return;
}

// UpdateAnimTrack @ 1464715e0

void __thiscall
UAnimSequencerInstance::UpdateAnimTrack
          (UAnimSequencerInstance *this,UAnimSequenceBase *param_1,int param_2,float param_3,
          float param_4,bool param_5)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  FAnimSequencerInstanceProxy *this_01;
  undefined1 local_res8 [4];
  undefined1 local_resc;
  TOptional<FRootMotionOverride> local_f8;
  
  this_00 = &this[-1].field_0x8;
  if (this_00 == (undefined1 *)0x0) {
    this_01 = (FAnimSequencerInstanceProxy *)0x0;
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
    this_01 = *(FAnimSequencerInstanceProxy **)&this[-1].field_0x3f8;
    if (this_01 == (FAnimSequencerInstanceProxy *)0x0) {
      this_01 = (FAnimSequencerInstanceProxy *)(**(code **)(*(longlong *)this_00 + 0x378))(this_00);
      *(FAnimSequencerInstanceProxy **)&this[-1].field_0x3f8 = this_01;
    }
  }
  local_resc = 0;
  local_f8.bIsSet = false;
  FAnimSequencerInstanceProxy::UpdateAnimTrack
            (this_01,param_1,param_2,&local_f8,(TOptional<float>)local_res8,param_3,param_4,param_5,
             (UMirrorDataTable *)0x0);
  return;
}

// UpdateAnimTrackWithRootMotion @ 1464718b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UAnimSequencerInstance::UpdateAnimTrackWithRootMotion
          (UAnimSequencerInstance *this,FAnimSequencerData *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  FAnimSequencerInstanceProxy *this_00;
  float local_res8;
  undefined1 local_resc;
  
  this_00 = (FAnimSequencerInstanceProxy *)0x0;
  if (this != (UAnimSequencerInstance *)0x0) {
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
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
    }
    this_00 = *(FAnimSequencerInstanceProxy **)&this->field_0x3f0;
    if (this_00 == (FAnimSequencerInstanceProxy *)0x0) {
      this_00 = (FAnimSequencerInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      *(FAnimSequencerInstanceProxy **)&this->field_0x3f0 = this_00;
    }
  }
  this_00->SwapRootBone = param_1->SwapRootBone;
  if (&param_1->InitialTransform != &this_00->InitialTransform) {
    if ((param_1->InitialTransform).bIsSet == false) {
      if ((this_00->InitialTransform).bIsSet != false) {
        (this_00->InitialTransform).bIsSet = false;
      }
    }
    else {
      dVar2 = (param_1->InitialTransform).TypedValue.Rotation.XY.m128d_f64[1];
      (this_00->InitialTransform).TypedValue.Rotation.XY.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Rotation.XY.m128d_f64[0];
      (this_00->InitialTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->InitialTransform).TypedValue.Rotation.ZW.m128d_f64[1];
      (this_00->InitialTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Rotation.ZW.m128d_f64[0];
      (this_00->InitialTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_1->InitialTransform).TypedValue.Translation.XY.m128d_f64[1];
      (this_00->InitialTransform).TypedValue.Translation.XY.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Translation.XY.m128d_f64[0];
      (this_00->InitialTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->InitialTransform).TypedValue.Translation.ZW.m128d_f64[1];
      (this_00->InitialTransform).TypedValue.Translation.ZW.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Translation.ZW.m128d_f64[0];
      (this_00->InitialTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_1->InitialTransform).TypedValue.Scale3D.XY.m128d_f64[1];
      (this_00->InitialTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Scale3D.XY.m128d_f64[0];
      (this_00->InitialTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->InitialTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
      (this_00->InitialTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
      (this_00->InitialTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar2;
      (this_00->InitialTransform).bIsSet = true;
    }
  }
  local_res8 = param_1->FromPosition;
  local_resc = 1;
  FAnimSequencerInstanceProxy::UpdateAnimTrack
            (this_00,param_1->AnimSequence,param_1->SequenceId,param_1->RootMotion,
             (TOptional<float>)&local_res8,param_1->ToPosition,param_1->Weight,
             param_1->bFireNotifies,param_1->MirrorDataTable);
  return;
}

// _getUObject @ 14647d480

UObject * __thiscall UAnimSequencerInstance::_getUObject(UAnimSequencerInstance *this)

{
  return (UObject *)&this[-1].field_0x8;
}

