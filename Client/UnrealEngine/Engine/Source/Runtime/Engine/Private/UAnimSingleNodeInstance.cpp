// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 57

// StaticClass @ 147512530

UClass * __cdecl UAnimSingleNodeInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSingleNodeInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSingleNodeInstance",
               &Z_Registration_Info_UClass_UAnimSingleNodeInstance.InnerSingleton,
               StaticRegisterNativesUAnimSingleNodeInstance,0x450,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSingleNodeInstance>,
               InternalVTableHelperCtorCaller<UAnimSingleNodeInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSingleNodeInstance.InnerSingleton;
}

// UAnimSingleNodeInstance @ 1475320c0

UAnimSingleNodeInstance * __thiscall
UAnimSingleNodeInstance::UAnimSingleNodeInstance
          (UAnimSingleNodeInstance *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &___7UAnimSingleNodeInstance__6B_;
  (this->CurrentAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  *(undefined8 *)&this->PostEvaluateAnimEvent = 0;
  *(undefined8 *)&(this->PostEvaluateAnimEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PostEvaluateAnimEvent).field_0x10 = 0;
  return this;
}

// UAnimSingleNodeInstance @ 147532110

UAnimSingleNodeInstance * __thiscall
UAnimSingleNodeInstance::UAnimSingleNodeInstance
          (UAnimSingleNodeInstance *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &___7UAnimSingleNodeInstance__6B_;
  (this->CurrentAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  *(undefined8 *)&this->PostEvaluateAnimEvent = 0;
  *(undefined8 *)&(this->PostEvaluateAnimEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PostEvaluateAnimEvent).field_0x10 = 0;
  return this;
}

// CreateAnimInstanceProxy @ 147550180

FAnimInstanceProxy * __thiscall
UAnimSingleNodeInstance::CreateAnimInstanceProxy(UAnimSingleNodeInstance *this)

{
  FAnimInstanceProxy *this_00;
  
  this_00 = ::operator_new(0x910);
  if (this_00 != (FAnimInstanceProxy *)0x0) {
    FAnimInstanceProxy::FAnimInstanceProxy(this_00,(UAnimInstance *)this);
    *(undefined ***)this_00 = &___7FAnimSingleNodeInstanceProxy__6B_;
    *(undefined8 *)(this_00 + 1) = 0;
    *(undefined8 *)&this_00->field_0x808 = 0;
    this_00[1].QueuedDrawDebugItems.ArrayNum = 0;
    this_00[1].QueuedDrawDebugItems.ArrayMax = 0;
    *(undefined4 *)this_00[1].ComponentTransform.Rotation.XY.m128d_f64 = 0;
    *(undefined4 *)((longlong)this_00[1].ComponentTransform.Rotation.XY.m128d_f64 + 4) = 0x80;
    *(undefined4 *)((longlong)this_00[1].ComponentTransform.Rotation.XY.m128d_f64 + 0xc) = 0;
    *(undefined4 *)(this_00[1].ComponentTransform.Rotation.XY.m128d_f64 + 1) = 0xffffffff;
    this_00[1].ComponentTransform.Rotation.ZW.m128d_f64[1] = 0.0;
    *(undefined4 *)this_00[1].ComponentTransform.Translation.XY.m128d_f64 = 0;
    this_00[1].ComponentTransform.Translation.ZW.m128d_f64[1] =
         (double)&___7FAnimNode_SingleNode__6B_;
    this_00[1].ComponentTransform.Scale3D.XY.m128d_f64[0] = 0.0;
    this_00[1].ComponentTransform.Scale3D.XY.m128d_f64[1] = 0.0;
    *(undefined1 *)((longlong)this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64 + 4) = 0;
    this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64[1] = 0.0;
    this_00[1].ComponentRelativeTransform.Rotation.XY.m128d_f64[1] = 0.0;
    this_00[1].ComponentRelativeTransform.Rotation.ZW.m128d_f64[0] = 0.0;
    this_00[1].ComponentRelativeTransform.Rotation.ZW.m128d_f64[1] = 0.0;
    this_00[1].ComponentRelativeTransform.Translation.XY.m128d_f64[0] = 0.0;
    this_00[1].ComponentRelativeTransform.Translation.XY.m128d_f64[1] = 0.0;
    this_00[1].ComponentRelativeTransform.Translation.ZW.m128d_f64[0] = 0.0;
    this_00[1].ComponentRelativeTransform.Translation.ZW.m128d_f64[1] = 0.0;
    this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64[0] = 0.0;
    this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64[1] = 0.0;
    *(undefined4 *)this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64 = 0xffffffff;
    this_00[1].ComponentTransform.Translation.XY.m128d_f64[1] = 0.0;
    this_00[1].ComponentTransform.Translation.ZW.m128d_f64[0] = 0.0;
    this_00[1].ComponentRelativeTransform.Scale3D.ZW.m128d_f64[0] = 0.0;
    *(undefined4 *)this_00[1].ComponentRelativeTransform.Scale3D.ZW.m128d_f64 = 0;
    *(undefined1 *)((longlong)this_00[1].ActorTransform.Rotation.ZW.m128d_f64 + 2) = 0;
    *(undefined8 *)((longlong)this_00[1].ComponentRelativeTransform.Scale3D.ZW.m128d_f64 + 4) = 0;
    *(undefined4 *)((longlong)this_00[1].ComponentRelativeTransform.Scale3D.ZW.m128d_f64 + 0xc) =
         0xfffffffe;
    *(undefined4 *)((longlong)this_00[1].ActorTransform.Rotation.XY.m128d_f64 + 4) = 0xfffffffe;
    *(undefined4 *)((longlong)this_00[1].ActorTransform.Rotation.XY.m128d_f64 + 0xc) = 0x3f800000;
    *(undefined2 *)this_00[1].ActorTransform.Rotation.ZW.m128d_f64 = 0x101;
    this_00[1].ComponentRelativeTransform.Rotation.XY.m128d_f64[0] = (double)this_00;
    return this_00;
  }
  return (FAnimInstanceProxy *)0x0;
}

// GetAnimationAsset @ 147557ce0

UAnimationAsset * __thiscall
UAnimSingleNodeInstance::GetAnimationAsset(UAnimSingleNodeInstance *this)

{
  return (this->CurrentAsset).field0_0x0.DebugPtr;
}

// GetBlendSpaceState @ 14755aa10

void __thiscall
UAnimSingleNodeInstance::GetBlendSpaceState
          (UAnimSingleNodeInstance *this,TVector<double> *param_1,TVector<double> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  FAnimSingleNodeInstanceProxy *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pFVar4 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>((UAnimInstance *)this);
  iVar1 = (pFVar4->BlendFilter).FilterPerAxis.ArrayNum;
  if (iVar1 < 3) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    if (iVar1 < 2) {
      if (iVar1 < 1) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = *(float *)(pFVar4->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
      }
    }
    else {
      pFVar2 = (pFVar4->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
      fVar6 = *(float *)(pFVar2 + 0x38);
      fVar5 = *(float *)pFVar2;
    }
  }
  else {
    pFVar2 = (pFVar4->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
    fVar7 = *(float *)(pFVar2 + 0x70);
    fVar6 = *(float *)(pFVar2 + 0x38);
    fVar5 = *(float *)pFVar2;
  }
  (param_2->field0_0x0)._s_0.X = (double)fVar5;
  (param_2->field0_0x0)._s_0.Y = (double)fVar6;
  (param_2->field0_0x0)._s_0.Z = (double)fVar7;
  dVar3 = (pFVar4->BlendSpacePosition).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (pFVar4->BlendSpacePosition).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar3;
  (param_1->field0_0x0)._s_0.Z = (pFVar4->BlendSpacePosition).field0_0x0._s_0.Z;
  return;
}

// GetCurrentAsset @ 14755b530

UAnimationAsset * __thiscall UAnimSingleNodeInstance::GetCurrentAsset(UAnimSingleNodeInstance *this)

{
  return (this->CurrentAsset).field0_0x0.DebugPtr;
}

// GetCurrentTime @ 14755b540

float __thiscall UAnimSingleNodeInstance::GetCurrentTime(UAnimSingleNodeInstance *this)

{
  FAnimSingleNodeInstanceProxy *pFVar1;
  
  pFVar1 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>((UAnimInstance *)this);
  return pFVar1->CurrentTime;
}

// GetFilterLastOutput @ 14755bd40

TVector<double> * __thiscall
UAnimSingleNodeInstance::GetFilterLastOutput
          (UAnimSingleNodeInstance *this,TVector<double> *__return_storage_ptr__)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  UClass *pUVar6;
  TVector<double> *pTVar7;
  USkeletalMeshComponent *pUVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((this->CurrentAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0) {
    pUVar6 = UBlendSpace::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->CurrentAsset,pUVar6);
    if ((bVar5) && ((this->CurrentAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0)) {
      if (this == (UAnimSingleNodeInstance *)0x0) {
        lVar9 = 0;
      }
      else {
        bVar5 = IsInGameThread();
        if (!bVar5) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                             ,0x687,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<double> *)(*pcVar3)();
            return pTVar7;
          }
        }
        bVar5 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
        if (bVar5) {
          pUVar8 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
          UAnimInstance::HandleExistingParallelEvaluationTask(pUVar8);
        }
        lVar9 = *(longlong *)&this->field_0x3f0;
        if (lVar9 == 0) {
          lVar9 = (**(code **)(*(longlong *)this + 0x378))(this);
          *(longlong *)&this->field_0x3f0 = lVar9;
        }
      }
      iVar1 = *(int *)(lVar9 + 0x8c8);
      if (iVar1 < 3) {
        fVar11 = 0.0;
        fVar12 = 0.0;
        if (iVar1 < 2) {
          if (iVar1 < 1) {
            fVar10 = 0.0;
          }
          else {
            fVar10 = **(float **)(lVar9 + 0x8c0);
          }
        }
        else {
          fVar11 = (*(float **)(lVar9 + 0x8c0))[0xe];
          fVar10 = **(float **)(lVar9 + 0x8c0);
        }
      }
      else {
        pfVar2 = *(float **)(lVar9 + 0x8c0);
        fVar12 = pfVar2[0x1c];
        fVar11 = pfVar2[0xe];
        fVar10 = *pfVar2;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar10;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar11;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar12;
      return __return_storage_ptr__;
    }
  }
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetInterpolationOverride @ 14755cfe0

TOptional<EAnimInterpolationType> __thiscall
UAnimSingleNodeInstance::GetInterpolationOverride(UAnimSingleNodeInstance *this)

{
  FAnimSingleNodeInstanceProxy *this_00;
  TOptional<EAnimInterpolationType> in_DX;
  
  this_00 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>((UAnimInstance *)this)
  ;
  FAnimInstanceProxy::GetInterpolationOverride((FAnimInstanceProxy *)this_00);
  return in_DX;
}

// GetLength @ 14755d090

float __thiscall UAnimSingleNodeInstance::GetLength(UAnimSingleNodeInstance *this)

{
  TObjectPtr<UAnimationAsset> *this_00;
  bool bVar1;
  UClass *pUVar2;
  float fVar3;
  
  this_00 = &this->CurrentAsset;
  if ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0) {
    pUVar2 = UBlendSpace::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      if ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0) {
        return __real_3f800000;
      }
    }
    else if ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0) {
      pUVar2 = UAnimSequenceBase::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if ((bVar1) && ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014755d0f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar3 = (float)(**(code **)(((this_00->field0_0x0).DebugPtr)->_padding_ + 0x2c0))();
        return fVar3;
      }
    }
  }
  return 0.0;
}

// GetMirrorDataTable @ 14755d890

UMirrorDataTable * __thiscall
UAnimSingleNodeInstance::GetMirrorDataTable(UAnimSingleNodeInstance *this)

{
  code *pcVar1;
  bool bVar2;
  UMirrorDataTable *pUVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
        pUVar3 = (UMirrorDataTable *)(*pcVar1)();
        return pUVar3;
      }
    }
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
    }
    lVar5 = *(longlong *)&this->field_0x3f0;
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(longlong *)&this->field_0x3f0 = lVar5;
      return *(UMirrorDataTable **)(lVar5 + 0x860);
    }
  }
  return *(UMirrorDataTable **)(lVar5 + 0x860);
}

// GetPlayRate @ 14755e7c0

float __thiscall UAnimSingleNodeInstance::GetPlayRate(UAnimSingleNodeInstance *this)

{
  FAnimSingleNodeInstanceProxy *pFVar1;
  
  pFVar1 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>((UAnimInstance *)this);
  return pFVar1->PlayRate;
}

// GetPrivateStaticClass @ 14755ea80

UClass * __cdecl UAnimSingleNodeInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSingleNodeInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSingleNodeInstance",
               &Z_Registration_Info_UClass_UAnimSingleNodeInstance.InnerSingleton,
               StaticRegisterNativesUAnimSingleNodeInstance,0x450,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSingleNodeInstance>,
               InternalVTableHelperCtorCaller<UAnimSingleNodeInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSingleNodeInstance.InnerSingleton;
}

// IsLooping @ 14756a990

bool __thiscall UAnimSingleNodeInstance::IsLooping(UAnimSingleNodeInstance *this)

{
  FAnimSingleNodeInstanceProxy *pFVar1;
  
  pFVar1 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>((UAnimInstance *)this);
  return pFVar1->bLooping;
}

// IsPlaying @ 14756ac30

bool __thiscall UAnimSingleNodeInstance::IsPlaying(UAnimSingleNodeInstance *this)

{
  FAnimMontageInstance *pFVar1;
  FAnimSingleNodeInstanceProxy *pFVar2;
  
  pFVar1 = UAnimInstance::GetActiveMontageInstance((UAnimInstance *)this);
  if (pFVar1 != (FAnimMontageInstance *)0x0) {
    return pFVar1->bPlaying;
  }
  pFVar2 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>((UAnimInstance *)this);
  return pFVar2->bPlaying;
}

// IsReverse @ 14756ad80

bool __thiscall UAnimSingleNodeInstance::IsReverse(UAnimSingleNodeInstance *this)

{
  FAnimSingleNodeInstanceProxy *pFVar1;
  
  pFVar1 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>((UAnimInstance *)this);
  return pFVar1->bReverse;
}

// Montage_Advance @ 14756c570

void __thiscall
UAnimSingleNodeInstance::Montage_Advance(UAnimSingleNodeInstance *this,float param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  FAnimMontageInstance *pFVar4;
  USkeletalMeshComponent *pUVar5;
  longlong lVar6;
  
  UAnimInstance::Montage_Advance((UAnimInstance *)this,param_1);
  pFVar4 = UAnimInstance::GetActiveMontageInstance((UAnimInstance *)this);
  if (pFVar4 != (FAnimMontageInstance *)0x0) {
    if (this == (UAnimSingleNodeInstance *)0x0) {
      lVar6 = 0;
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
        pUVar5 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
        UAnimInstance::HandleExistingParallelEvaluationTask(pUVar5);
      }
      lVar6 = *(longlong *)&this->field_0x3f0;
      if (lVar6 == 0) {
        lVar6 = (**(code **)(*(longlong *)this + 0x378))(this);
        *(longlong *)&this->field_0x3f0 = lVar6;
      }
    }
    fVar1 = pFVar4->Position;
    if (fVar1 != *(float *)(lVar6 + 0x8dc)) {
      *(undefined4 *)(lVar6 + 0x8ec) = 0xfffffffe;
      *(undefined4 *)(lVar6 + 0x8f4) = 0xfffffffe;
    }
    *(float *)(lVar6 + 0x8dc) = fVar1;
  }
  return;
}

// NativeInitializeAnimation @ 14756c650

void __thiscall UAnimSingleNodeInstance::NativeInitializeAnimation(UAnimSingleNodeInstance *this)

{
  USkeletalMeshComponent *pUVar1;
  
  pUVar1 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
  FSingleAnimationPlayData::Initialize(&pUVar1->AnimationData,this);
  return;
}

// NativePostEvaluateAnimation @ 14756c680

void __thiscall UAnimSingleNodeInstance::NativePostEvaluateAnimation(UAnimSingleNodeInstance *this)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  bool bVar6;
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PostEvaluateAnimEvent,
             &local_20);
  if (*(longlong *)&(this->PostEvaluateAnimEvent).field_0x10 != 0) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->PostEvaluateAnimEvent).field_0x8);
    if (pUVar4 != (UObject *)0x0) {
      FVar1.ComparisonIndex.Value = *(uint *)&(this->PostEvaluateAnimEvent).field_0x10;
      FVar1.Number = *(uint *)&(this->PostEvaluateAnimEvent).field_0x14;
      pUVar5 = UObject::FindFunction(pUVar4,FVar1);
      bVar6 = pUVar5 != (UFunction *)0x0;
      goto LAB_14756c6d8;
    }
  }
  bVar6 = false;
LAB_14756c6d8:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  if (bVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->PostEvaluateAnimEvent,(FWriteAccessScope *)&local_38);
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&(this->PostEvaluateAnimEvent).field_0x8);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object.IsValid() != false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                         ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)&(this->PostEvaluateAnimEvent).field_0x10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FunctionName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                         ,0x1bc,L"ProcessDelegate() called with no function name set!");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->PostEvaluateAnimEvent).field_0x8);
    FVar2.ComparisonIndex.Value = *(uint *)&(this->PostEvaluateAnimEvent).field_0x10;
    FVar2.Number = *(uint *)&(this->PostEvaluateAnimEvent).field_0x14;
    pUVar5 = UObject::FindFunctionChecked(pUVar4,FVar2);
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    (**(code **)(*(longlong *)pUVar4 + 0x260))(pUVar4,pUVar5,0);
  }
  UAnimInstance::NativePostEvaluateAnimation((UAnimInstance *)this);
  return;
}

// OnMontageInstanceStopped @ 14756ca10

void __thiscall
UAnimSingleNodeInstance::OnMontageInstanceStopped
          (UAnimSingleNodeInstance *this,FAnimMontageInstance *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if (this != (UAnimSingleNodeInstance *)0x0) {
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
  if ((param_1->Montage).field0_0x0.DebugPtr ==
      (UAnimMontage *)(this->CurrentAsset).field0_0x0.DebugPtr) {
    fVar1 = param_1->Position;
    if (fVar1 != *(float *)(lVar5 + 0x8dc)) {
      *(undefined4 *)(lVar5 + 0x8ec) = 0xfffffffe;
      *(undefined4 *)(lVar5 + 0x8f4) = 0xfffffffe;
    }
    *(float *)(lVar5 + 0x8dc) = fVar1;
  }
  UAnimInstance::OnMontageInstanceStopped((UAnimInstance *)this,param_1);
  return;
}

// PlayAnim @ 147571c90

void __thiscall
UAnimSingleNodeInstance::PlayAnim
          (UAnimSingleNodeInstance *this,bool param_1,float param_2,float param_3)

{
  SetPlaying(this,true);
  SetLooping(this,param_1);
  SetPlayRate(this,param_2);
  SetPosition(this,param_3,true);
  return;
}

// RestartMontage @ 147577360

void __thiscall
UAnimSingleNodeInstance::RestartMontage
          (UAnimSingleNodeInstance *this,UAnimMontage *param_1,FName param_2)

{
  UAnimMontage *pUVar1;
  UAnimationAsset *pUVar2;
  code *pcVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  UClass *pUVar6;
  FAnimInstanceProxy *this_00;
  bool bVar7;
  FName local_res8;
  
  pUVar1 = (UAnimMontage *)(this->CurrentAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UAnimMontage *)0x0) {
    bVar7 = param_1 == (UAnimMontage *)0x0;
  }
  else {
    bVar7 = pUVar1 == param_1;
  }
  if (bVar7) {
    bVar7 = IsInGameThread();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                           ,0x687,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar7) {
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
    }
    lVar5 = *(longlong *)&this->field_0x3f0;
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(longlong *)&this->field_0x3f0 = lVar5;
    }
    *(undefined8 *)(lVar5 + 0x8d0) = 0;
    *(undefined4 *)(lVar5 + 0x8d8) = 0;
    UAnimInstance::Montage_Play
              ((UAnimInstance *)this,param_1,*(float *)(lVar5 + 0x8fc),MontageLength,0.0,true);
    if (param_2 != (FName)0x0) {
      UAnimInstance::Montage_JumpToSection((UAnimInstance *)this,param_2,(UAnimMontage *)0x0);
    }
    SetMontageLoop(this,param_1,*(bool *)(lVar5 + 0x900),param_2);
    (**(code **)(*(longlong *)this + 0x2e8))(this,(param_1->BlendIn).BlendTime);
    if ((this->CurrentAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0) {
      pUVar6 = Z_Construct_UClass_UAnimMontage_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->CurrentAsset,pUVar6);
      if ((bVar7) &&
         (pUVar2 = (this->CurrentAsset).field0_0x0.DebugPtr, pUVar2 != (UAnimationAsset *)0x0)) {
        bVar7 = IsInGameThread();
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                               ,0x687,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar7 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
        if (bVar7) {
          pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
          UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
        }
        this_00 = *(FAnimInstanceProxy **)&this->field_0x3f0;
        if (this_00 == (FAnimInstanceProxy *)0x0) {
          this_00 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
          *(FAnimInstanceProxy **)&this->field_0x3f0 = this_00;
        }
        UAnimInstance::UpdateMontageEvaluationData((UAnimInstance *)this);
        if (0 < pUVar2[2].MetaData.ArrayNum) {
          local_res8 = *(FName *)pUVar2[2].MetaData.AllocatorInstance.Data;
          FAnimInstanceProxy::GetSlotWeight
                    (this_00,&local_res8,
                     (float *)((longlong)this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64
                              + 4),(float *)&this_00[1].ComponentRelativeTransform.Scale3D,
                     (float *)(this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64 + 1));
          FAnimInstanceProxy::UpdateSlotNodeWeight
                    (this_00,&local_res8,
                     *(float *)((longlong)this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64
                               + 4),__real_3f800000);
        }
      }
    }
  }
  return;
}

// SetAnimationAsset @ 1475785d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimSingleNodeInstance::SetAnimationAsset
          (UAnimSingleNodeInstance *this,UAnimationAsset *param_1,bool param_2,float param_3)

{
  FName *pFVar1;
  int iVar2;
  UAnimationAsset *pUVar3;
  code *pcVar4;
  char cVar5;
  USkeletalMeshComponent *pUVar6;
  FAnimInstanceProxy *this_00;
  USkeletalMesh *pUVar7;
  UClass *pUVar8;
  FAnimMontageInstance *pFVar9;
  FAnimSingleNodeInstanceProxy *pFVar10;
  FName *pFVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar13;
  FName local_78;
  FString local_70;
  FString local_60 [2];
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  pUVar3 = (this->CurrentAsset).field0_0x0.DebugPtr;
  if (pUVar3 == (UAnimationAsset *)0x0) {
    bVar12 = param_1 == (UAnimationAsset *)0x0;
  }
  else {
    bVar12 = pUVar3 == param_1;
  }
  if (!bVar12) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimationAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->CurrentAsset).field0_0x0.DebugPtr = param_1;
  }
  if (this == (UAnimSingleNodeInstance *)0x0) {
    this_00 = (FAnimInstanceProxy *)0x0;
  }
  else {
    bVar12 = IsInGameThread();
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                            ,0x687,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar12 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar12) {
      pUVar6 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
    }
    this_00 = *(FAnimInstanceProxy **)&this->field_0x3f0;
    if (this_00 == (FAnimInstanceProxy *)0x0) {
      this_00 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      *(FAnimInstanceProxy **)&this->field_0x3f0 = this_00;
    }
  }
  if (((param_1 != (UAnimationAsset *)0x0) &&
      (cVar5 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1), cVar5 != '\0')) &&
     (2 < (byte)LogAnimation._0_1_)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,local_60,(UObject *)0x0,None);
    local_78 = (FName)param_1->_padding_;
    ::FName::ToString(&local_78,&local_70);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
  }
  pUVar6 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
  if (pUVar6 != (USkeletalMeshComponent *)0x0) {
    pUVar7 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar6);
    if ((pUVar7 == (USkeletalMesh *)0x0) ||
       ((pUVar3 = (this->CurrentAsset).field0_0x0.DebugPtr, pUVar3 != (UAnimationAsset *)0x0 &&
        ((pUVar3->Skeleton).field0_0x0.DebugPtr == (USkeleton *)0x0)))) {
      (this->CurrentAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
    }
    pUVar6->ClothTeleportMode = TeleportAndReset;
  }
  pcVar4 = *(code **)(*(longlong *)this_00 + 0x98);
  pUVar6 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
  (*pcVar4)(this_00,param_1,pUVar6,param_2,CONCAT44(uVar13,param_3));
  if (param_1 != (UAnimationAsset *)0x0) {
    pUVar8 = Z_Construct_UClass_UAnimCompositeBase_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar8->_padding_)) {
      (**(code **)(param_1->_padding_ + 0x3e0))(param_1);
    }
    pUVar8 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar8->_padding_)) {
      FAnimInstanceProxy::ReinitializeSlotNodes(this_00);
      if (0 < param_1[2].MetaData.ArrayNum) {
        iVar2 = param_1[2].MetaData.ArrayNum;
        pFVar11 = (FName *)param_1[2].MetaData.AllocatorInstance.Data;
        pFVar1 = pFVar11 + (longlong)iVar2 * 3;
        while( true ) {
          if (param_1[2].MetaData.ArrayNum != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FSlotAnimationTrack,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar11 == pFVar1) break;
          FAnimInstanceProxy::RegisterSlotNodeWithAnimInstance(this_00,pFVar11);
          pFVar11 = pFVar11 + 3;
        }
        if ((param_1[2].MetaData.ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00[1].ComponentTransform.Scale3D.ZW.m128d_f64[1] =
             *(double *)param_1[2].MetaData.AllocatorInstance.Data;
      }
      local_res10 = 0;
      (**(code **)(*(longlong *)this + 0x3a0))(this,param_1,0);
      pFVar9 = UAnimInstance::GetActiveMontageInstance((UAnimInstance *)this);
      if (pFVar9 != (FAnimMontageInstance *)0x0) {
        SetPlaying(this,pFVar9->bPlaying);
        return;
      }
      pFVar10 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>
                          ((UAnimInstance *)this);
      SetPlaying(this,pFVar10->bPlaying);
      return;
    }
  }
  UAnimInstance::StopAllMontages((UAnimInstance *)this,__real_3e800000);
  return;
}

// SetBlendSpacePosition @ 147578af0

void __thiscall
UAnimSingleNodeInstance::SetBlendSpacePosition
          (UAnimSingleNodeInstance *this,TVector<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
    lVar5 = *(longlong *)&this->field_0x3f0;
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(longlong *)&this->field_0x3f0 = lVar5;
    }
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  *(double *)(lVar5 + 0x898) = (param_1->field0_0x0)._s_0.X;
  *(double *)(lVar5 + 0x8a0) = dVar2;
  *(double *)(lVar5 + 0x8a8) = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetInterpolationOverride @ 147578f40

void __thiscall
UAnimSingleNodeInstance::SetInterpolationOverride
          (UAnimSingleNodeInstance *this,TOptional<EAnimInterpolationType> param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  FAnimInstanceProxy *this_00;
  undefined6 in_register_00000012;
  undefined1 local_res8;
  char local_res9;
  
  this_00 = (FAnimInstanceProxy *)0x0;
  if (this != (UAnimSingleNodeInstance *)0x0) {
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
    this_00 = *(FAnimInstanceProxy **)&this->field_0x3f0;
    if (this_00 == (FAnimInstanceProxy *)0x0) {
      this_00 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      *(FAnimInstanceProxy **)&this->field_0x3f0 = this_00;
    }
  }
  local_res9 = ((undefined1 *)CONCAT62(in_register_00000012,param_1))[1];
  if (local_res9 != '\0') {
    local_res8 = *(undefined1 *)CONCAT62(in_register_00000012,param_1);
  }
  FAnimInstanceProxy::SetInterpolationOverride(this_00,SUB82(&local_res8,0));
  return;
}

// SetLooping @ 147579000

void __thiscall UAnimSingleNodeInstance::SetLooping(UAnimSingleNodeInstance *this,bool param_1)

{
  UAnimMontage *pUVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  UClass *pUVar6;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
  *(bool *)(lVar5 + 0x900) = param_1;
  if ((this->CurrentAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0) {
    pUVar6 = Z_Construct_UClass_UAnimMontage_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->CurrentAsset,pUVar6);
    if ((bVar3) &&
       (pUVar1 = (UAnimMontage *)(this->CurrentAsset).field0_0x0.DebugPtr,
       pUVar1 != (UAnimMontage *)0x0)) {
      SetMontageLoop(this,pUVar1,*(bool *)(lVar5 + 0x900),(FName)0x0);
    }
  }
  return;
}

// SetMirrorDataTable @ 147579130

void __thiscall
UAnimSingleNodeInstance::SetMirrorDataTable(UAnimSingleNodeInstance *this,UMirrorDataTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong lVar4;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    lVar4 = *(longlong *)&this->field_0x3f0;
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(longlong *)&this->field_0x3f0 = lVar4;
      *(UMirrorDataTable **)(lVar4 + 0x860) = param_1;
      return;
    }
  }
  *(UMirrorDataTable **)(lVar4 + 0x860) = param_1;
  return;
}

// SetMontageLoop @ 1475791e0

void __thiscall
UAnimSingleNodeInstance::SetMontageLoop
          (UAnimSingleNodeInstance *this,UAnimMontage *param_1,bool param_2,FName param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FName FVar6;
  int iVar7;
  
  if ((param_1 == (UAnimMontage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Montage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSingleNodeInstance.cpp"
                         ,0x6f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = (param_1->CompositeSections).ArrayNum;
  if (0 < iVar7) {
    if (param_3 == (FName)0x0) {
      if ((iVar7 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      param_3 = *(FName *)((param_1->CompositeSections).AllocatorInstance.Data + 0x30);
    }
    uVar4 = UAnimMontage::GetSectionIndex(param_1,param_3);
    FVar6 = param_3;
    do {
      iVar7 = iVar7 + -1;
      uVar5 = 0;
      if ((int)uVar4 < (param_1->CompositeSections).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = *(FName *)((param_1->CompositeSections).AllocatorInstance.Data +
                        (longlong)(int)uVar4 * 0x50 + 0x38);
      uVar4 = UAnimMontage::GetSectionIndex(param_1,FVar1);
      if (uVar4 == 0xffffffff) {
        if (!param_2) {
          param_3.ComparisonIndex.Value = 0;
          param_3.Number = 0;
        }
        UAnimInstance::Montage_SetNextSection
                  ((UAnimInstance *)this,FVar6,param_3,(UAnimMontage *)0x0);
        return;
      }
      UAnimInstance::Montage_SetNextSection((UAnimInstance *)this,FVar6,FVar1,(UAnimMontage *)0x0);
      FVar6 = FVar1;
    } while (0 < iVar7);
  }
  return;
}

// SetMontagePreviewSlot @ 147579390

void __thiscall
UAnimSingleNodeInstance::SetMontagePreviewSlot(UAnimSingleNodeInstance *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong lVar4;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    lVar4 = *(longlong *)&this->field_0x3f0;
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(longlong *)&this->field_0x3f0 = lVar4;
      *(FName *)(lVar4 + 0x888) = param_1;
      return;
    }
  }
  *(FName *)(lVar4 + 0x888) = param_1;
  return;
}

// SetPlayRate @ 1475796d0

void __thiscall UAnimSingleNodeInstance::SetPlayRate(UAnimSingleNodeInstance *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong lVar4;
  FAnimMontageInstance *pFVar5;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    lVar4 = *(longlong *)&this->field_0x3f0;
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(longlong *)&this->field_0x3f0 = lVar4;
    }
  }
  *(float *)(lVar4 + 0x8fc) = param_1;
  pFVar5 = UAnimInstance::GetActiveMontageInstance((UAnimInstance *)this);
  if (pFVar5 != (FAnimMontageInstance *)0x0) {
    pFVar5->PlayRate = param_1;
  }
  return;
}

// SetPlaying @ 147579790

void __thiscall UAnimSingleNodeInstance::SetPlaying(UAnimSingleNodeInstance *this,bool param_1)

{
  UAnimationAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  FAnimMontageInstance *pFVar6;
  UClass *pUVar7;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
  *(bool *)(lVar5 + 0x901) = param_1;
  pFVar6 = UAnimInstance::GetActiveMontageInstance((UAnimInstance *)this);
  if (pFVar6 != (FAnimMontageInstance *)0x0) {
    pFVar6->bPlaying = param_1;
    return;
  }
  if ((*(char *)(lVar5 + 0x901) != '\0') &&
     ((this->CurrentAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0)) {
    pUVar7 = Z_Construct_UClass_UAnimMontage_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->CurrentAsset,pUVar7);
    if ((bVar3) &&
       (pUVar1 = (this->CurrentAsset).field0_0x0.DebugPtr, pUVar1 != (UAnimationAsset *)0x0)) {
      (**(code **)(*(longlong *)this + 0x3a0))(this,pUVar1,0);
    }
  }
  return;
}

// SetPosition @ 1475798a0

void __thiscall
UAnimSingleNodeInstance::SetPosition(UAnimSingleNodeInstance *this,float param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong lVar4;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    lVar4 = *(longlong *)&this->field_0x3f0;
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(longlong *)&this->field_0x3f0 = lVar4;
    }
  }
  SetPositionWithPreviousTime(this,param_1,*(float *)(lVar4 + 0x8dc),param_2);
  return;
}

// SetPositionWithPreviousTime @ 147579960

void __thiscall
UAnimSingleNodeInstance::SetPositionWithPreviousTime
          (UAnimSingleNodeInstance *this,float param_1,float param_2,bool param_3)

{
  UAnimationAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  FAnimMontageInstance *pFVar6;
  UClass *pUVar7;
  float fVar8;
  float local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 *local_c8;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  local_res18[0] = param_2;
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
  fVar8 = GetLength(this);
  if (param_1 <= fVar8) {
    fVar8 = param_1;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (fVar8 != *(float *)(lVar5 + 0x8dc)) {
    *(undefined4 *)(lVar5 + 0x8ec) = 0xfffffffe;
    *(undefined4 *)(lVar5 + 0x8f4) = 0xfffffffe;
  }
  *(float *)(lVar5 + 0x8dc) = fVar8;
  pFVar6 = UAnimInstance::GetActiveMontageInstance((UAnimInstance *)this);
  if (pFVar6 != (FAnimMontageInstance *)0x0) {
    pFVar6->Position = *(float *)(lVar5 + 0x8dc);
    (pFVar6->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
    (pFVar6->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  }
  if ((param_3) && ((this->CurrentAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0)) {
    pUVar7 = UAnimSequenceBase::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->CurrentAsset,pUVar7);
    if ((bVar3) &&
       (pUVar1 = (this->CurrentAsset).field0_0x0.DebugPtr, pUVar1 != (UAnimationAsset *)0x0)) {
      local_98 = 0x3f800000;
      local_a8 = 0;
      uStack_a0 = 0;
      local_c8 = &local_a8;
      local_78 = 0;
      pTStack_70 = (TReferenceControllerBase<1> *)0x0;
      local_48 = 0;
      uStack_40 = 0;
      local_90 = 0x3f800000;
      local_88 = 0x100;
      local_80 = 0;
      local_38 = 0;
      local_34 = 0;
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.ArrayNum = 0;
      local_c0.ArrayMax = 0;
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      FAnimNotifyQueue::Reset((FAnimNotifyQueue *)&this->field_0x210,pUVar4);
      local_res20[0] = *(undefined4 *)(lVar5 + 0x8dc);
      (**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1,local_res18,local_res20,&local_c8);
      if (0 < local_c0.ArrayNum) {
        FAnimNotifyQueue::AddAnimNotifies
                  ((FAnimNotifyQueue *)&this->field_0x210,true,&local_c0,__real_3f800000);
      }
      UAnimInstance::TriggerAnimNotifies((UAnimInstance *)this,0.0);
      DestructItems<FAnimNotifyEventReference,int>
                ((FAnimNotifyEventReference *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
      if ((FAnimNotifyEventReference *)local_c0.AllocatorInstance.Data !=
          (FAnimNotifyEventReference *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
    }
  }
  return;
}

// SetPreviewCurveOverride @ 147579ce0

void __thiscall
UAnimSingleNodeInstance::SetPreviewCurveOverride
          (UAnimSingleNodeInstance *this,FName *param_1,float param_2,bool param_3)

{
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *this_00
  ;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  USkeletalMeshComponent *pUVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  FName local_res8 [2];
  undefined1 local_res18 [8];
  float local_res20 [2];
  FName *local_48;
  float *local_40;
  
  pfVar10 = (float *)0x0;
  pfVar7 = pfVar10;
  if (this != (UAnimSingleNodeInstance *)0x0) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                           ,0x687,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar3) {
      pUVar6 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
    }
    pfVar7 = *(float **)&this->field_0x3f0;
    if (*(float **)&this->field_0x3f0 == (float *)0x0) {
      pfVar7 = (float *)(**(code **)(*(longlong *)this + 0x378))(this);
      *(float **)&this->field_0x3f0 = pfVar7;
    }
  }
  FVar1 = *param_1;
  this_00 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)(pfVar7 + 0x202);
  local_res20[0] = param_2;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pfVar8 = pfVar10;
  if (pfVar7[0x204] != pfVar7[0x20f]) {
    pfVar9 = *(float **)(pfVar7 + 0x212);
    if (*(float **)(pfVar7 + 0x212) == (float *)0x0) {
      pfVar9 = pfVar7 + 0x210;
    }
    fVar5 = pfVar9[(int)pfVar7[0x214] - 1U & FVar1.Number + uVar4];
    if (fVar5 != -NAN) {
      do {
        pfVar8 = (float *)(*(longlong *)&this_00->Elements + (longlong)(int)fVar5 * 0x14);
        if (*(FName *)(*(longlong *)&this_00->Elements + (longlong)(int)fVar5 * 0x14) == FVar1)
        break;
        fVar5 = pfVar8[3];
        pfVar8 = pfVar10;
      } while (fVar5 != -NAN);
    }
  }
  pfVar9 = pfVar8 + 2;
  if (pfVar8 == (float *)0x0) {
    pfVar9 = pfVar10;
  }
  if ((!param_3) ||
     (__real_3727c5ac < (float)((uint)local_res20[0] & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if (pfVar9 != (float *)0x0) {
      *pfVar9 = local_res20[0];
      return;
    }
    local_40 = local_res20;
    local_48 = param_1;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,float_const_&>_>
              (this_00,(TPairInitializer<FName_const_&,float_const_&> *)local_res18,
               (bool *)&local_48);
  }
  else {
    FVar1 = *param_1;
    if (pfVar7[0x204] != pfVar7[0x20f]) {
      local_res8[0] = FVar1;
      uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      RemoveImpl<FName>(this_00,FVar1.Number + uVar4,local_res8);
      return;
    }
  }
  return;
}

// SetReverse @ 147579ee0

void __thiscall UAnimSingleNodeInstance::SetReverse(UAnimSingleNodeInstance *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong lVar4;
  FAnimMontageInstance *pFVar5;
  FAnimSingleNodeInstanceProxy *pFVar6;
  uint uVar7;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
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
    bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
    }
    lVar4 = *(longlong *)&this->field_0x3f0;
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)this + 0x378))(this);
      *(longlong *)&this->field_0x3f0 = lVar4;
    }
  }
  uVar7 = *(uint *)(lVar4 + 0x8fc) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  *(bool *)(lVar4 + 0x902) = param_1;
  if (param_1) {
    uVar7 = uVar7 ^ __xmm_80000000800000008000000080000000;
  }
  *(uint *)(lVar4 + 0x8fc) = uVar7;
  pFVar5 = UAnimInstance::GetActiveMontageInstance((UAnimInstance *)this);
  if (pFVar5 != (FAnimMontageInstance *)0x0) {
    pFVar6 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>
                       ((UAnimInstance *)this);
    pFVar5->PlayRate = pFVar6->PlayRate;
  }
  return;
}

// StaticRegisterNativesUAnimSingleNodeInstance @ 14757ac00

void __cdecl UAnimSingleNodeInstance::StaticRegisterNativesUAnimSingleNodeInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UAnimSingleNodeInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StepBackward @ 14757ae00

void __thiscall UAnimSingleNodeInstance::StepBackward(UAnimSingleNodeInstance *this)

{
  TObjectPtr<UAnimationAsset> *this_00;
  UAnimationAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  USkeletalMeshComponent *pUVar6;
  longlong lVar7;
  FAnimSingleNodeInstanceProxy *pFVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  float fVar17;
  int local_res8;
  int local_resc;
  uint local_res10;
  undefined4 uStackX_14;
  ulonglong local_res18;
  
  this_00 = &this->CurrentAsset;
  if ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0) {
    pUVar5 = UAnimSequenceBase::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if ((bVar3) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UAnimationAsset *)0x0)) {
      if (this == (UAnimSingleNodeInstance *)0x0) {
        lVar7 = 0;
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
          pUVar6 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
          UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
        }
        lVar7 = *(longlong *)&this->field_0x3f0;
        if (lVar7 == 0) {
          lVar7 = (**(code **)(*(longlong *)this + 0x378))(this);
          *(longlong *)&this->field_0x3f0 = lVar7;
        }
      }
      (**(code **)(pUVar1->_padding_ + 0x318))(pUVar1,&local_res8);
      fVar11 = (float)(**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1);
      dVar15 = (double)local_res8 * (double)fVar11 * (__real_3ff0000000000000 / (double)local_resc);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar15;
      auVar14 = roundpd(in_XMM2,auVar14,1);
      dVar16 = auVar14._0_8_;
      dVar15 = dVar15 - dVar16;
      if (__real_41dfffffffc00000 <= dVar16) {
        dVar16 = __real_41dfffffffc00000;
      }
      if (dVar16 <= __real_c1e0000000000000) {
        dVar16 = __real_c1e0000000000000;
      }
      iVar4 = (int)dVar15;
      fVar11 = (float)dVar15 - (float)iVar4;
      if ((0.0 < fVar11) && (::FFrameTime::MaxSubframe <= fVar11)) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      uVar9 = (int)dVar16 + iVar4;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      dVar16 = (double)(*(float *)(lVar7 + 0x8dc) - __real_38d1b717) * (double)local_res8 *
               (__real_3ff0000000000000 / (double)local_resc);
      if (__real_3f000000 <= fVar11) {
        uVar9 = uVar9 + 1;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar16;
      auVar14 = roundpd(auVar14,auVar12,1);
      dVar13 = auVar14._0_8_;
      dVar15 = dVar13;
      if (__real_41dfffffffc00000 <= dVar13) {
        dVar15 = __real_41dfffffffc00000;
      }
      if (dVar15 <= __real_c1e0000000000000) {
        dVar15 = __real_c1e0000000000000;
      }
      uVar10 = (int)(dVar16 - dVar13) + (int)dVar15;
      pFVar8 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>
                         ((UAnimInstance *)this);
      if ((pFVar8->bLooping != false) && ((int)uVar10 < 0)) {
        uVar10 = uVar9;
      }
      if ((int)uVar10 < (int)uVar9) {
        uVar9 = uVar10;
      }
      uStackX_14 = 0;
      local_res10 = 0;
      if (0 < (int)uVar9) {
        local_res10 = uVar9;
      }
      local_res18 = (ulonglong)local_res10;
      SetPosition(this,((float)local_resc * 0.0 +
                       (float)((longlong)(int)local_res10 * (longlong)local_resc)) /
                       (float)local_res8,true);
    }
    else if ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0) {
      pUVar5 = UBlendSpace::StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
      if ((bVar3) && ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0)) {
        pFVar8 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>
                           ((UAnimInstance *)this);
        fVar11 = FAnimSingleNodeInstanceProxy::GetBlendSpaceLength(pFVar8);
        if (0.0 < fVar11) {
          fVar17 = pFVar8->CurrentTime - __real_3d088889 / fVar11;
          pFVar8 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>
                             ((UAnimInstance *)this);
          fVar11 = __real_3f800000;
          if (pFVar8->bLooping == false) {
            if (__real_3f800000 <= fVar17) {
              fVar17 = __real_3f800000;
            }
            if (fVar17 <= 0.0) {
              fVar17 = 0.0;
            }
          }
          else if (0.0 <= fVar17) {
            if (__real_3f800000 < fVar17) {
              fVar17 = FGenericPlatformMath::Fmod(fVar17 - __real_3f800000,__real_3f800000);
              if (fVar17 == 0.0) {
                fVar17 = fVar11;
              }
            }
          }
          else {
            fVar17 = FGenericPlatformMath::Fmod
                               ((float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000),
                                __real_3f800000);
            if (fVar17 == 0.0) {
              fVar17 = 0.0;
            }
            else {
              fVar17 = fVar11 - fVar17;
            }
          }
          SetPosition(this,fVar17,true);
        }
      }
    }
  }
  return;
}

// StepForward @ 14757b170

void __thiscall UAnimSingleNodeInstance::StepForward(UAnimSingleNodeInstance *this)

{
  TObjectPtr<UAnimationAsset> *this_00;
  UAnimationAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  USkeletalMeshComponent *pUVar6;
  longlong lVar7;
  FAnimSingleNodeInstanceProxy *pFVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  double dVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int local_res8;
  int local_resc;
  uint local_res10;
  undefined4 uStackX_14;
  ulonglong local_res18;
  
  this_00 = &this->CurrentAsset;
  if ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0) {
    pUVar5 = UAnimSequenceBase::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if ((bVar3) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UAnimationAsset *)0x0)) {
      if (this == (UAnimSingleNodeInstance *)0x0) {
        lVar7 = 0;
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
          pUVar6 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
          UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
        }
        lVar7 = *(longlong *)&this->field_0x3f0;
        if (lVar7 == 0) {
          lVar7 = (**(code **)(*(longlong *)this + 0x378))(this);
          *(longlong *)&this->field_0x3f0 = lVar7;
        }
      }
      (**(code **)(pUVar1->_padding_ + 0x318))(pUVar1,&local_res8);
      fVar11 = (float)(**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1);
      dVar14 = (double)local_res8 * (double)fVar11 * (__real_3ff0000000000000 / (double)local_resc);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar14;
      auVar13 = roundpd(in_XMM2,auVar13,1);
      dVar14 = dVar14 - auVar13._0_8_;
      uVar17 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
      uVar16 = auVar13._0_4_;
      uVar19 = auVar13._4_4_;
      if (__real_41dfffffffc00000 <= auVar13._0_8_) {
        uVar16 = SUB84(__real_41dfffffffc00000,0);
        uVar19 = uVar17;
      }
      uVar18 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
      if ((double)CONCAT44(uVar19,uVar16) <= __real_c1e0000000000000) {
        uVar16 = SUB84(__real_c1e0000000000000,0);
        uVar19 = uVar18;
      }
      iVar4 = (int)dVar14;
      fVar11 = (float)dVar14 - (float)iVar4;
      if ((0.0 < fVar11) && (::FFrameTime::MaxSubframe <= fVar11)) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      uVar10 = (int)(double)CONCAT44(uVar19,uVar16) + iVar4;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      dVar14 = (double)(*(float *)(lVar7 + 0x8dc) + __real_38d1b717) * (double)local_res8 *
               (__real_3ff0000000000000 / (double)local_resc);
      if (__real_3f000000 <= fVar11) {
        uVar10 = uVar10 + 1;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar14;
      auVar13 = roundpd(auVar13,auVar12,1);
      dVar14 = dVar14 - auVar13._0_8_;
      uVar16 = auVar13._0_4_;
      uVar19 = auVar13._4_4_;
      if (__real_41dfffffffc00000 <= auVar13._0_8_) {
        uVar16 = SUB84(__real_41dfffffffc00000,0);
        uVar19 = uVar17;
      }
      if ((double)CONCAT44(uVar19,uVar16) <= __real_c1e0000000000000) {
        uVar16 = SUB84(__real_c1e0000000000000,0);
        uVar19 = uVar18;
      }
      iVar4 = (int)dVar14;
      fVar11 = (float)dVar14 - (float)iVar4;
      if ((0.0 < fVar11) && (::FFrameTime::MaxSubframe <= fVar11)) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      uVar9 = (int)(double)CONCAT44(uVar19,uVar16) + iVar4;
      if (fVar11 != 0.0) {
        uVar9 = uVar9 + 1;
      }
      pFVar8 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>
                         ((UAnimInstance *)this);
      if (pFVar8->bLooping != false) {
        uVar9 = (int)uVar9 % (int)(uVar10 + 1);
      }
      if ((int)uVar9 < (int)uVar10) {
        uVar10 = uVar9;
      }
      uStackX_14 = 0;
      local_res10 = 0;
      if (0 < (int)uVar10) {
        local_res10 = uVar10;
      }
      local_res18 = (ulonglong)local_res10;
      SetPosition(this,((float)local_resc * 0.0 +
                       (float)((longlong)(int)local_res10 * (longlong)local_resc)) /
                       (float)local_res8,true);
    }
    else if ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0) {
      pUVar5 = UBlendSpace::StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
      if ((bVar3) && ((this_00->field0_0x0).DebugPtr != (UAnimationAsset *)0x0)) {
        pFVar8 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>
                           ((UAnimInstance *)this);
        fVar11 = FAnimSingleNodeInstanceProxy::GetBlendSpaceLength(pFVar8);
        if (0.0 < fVar11) {
          fVar15 = __real_3d088889 / fVar11 + pFVar8->CurrentTime;
          pFVar8 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>
                             ((UAnimInstance *)this);
          fVar11 = __real_3f800000;
          if (pFVar8->bLooping == false) {
            if (__real_3f800000 <= fVar15) {
              fVar15 = __real_3f800000;
            }
            if (fVar15 <= 0.0) {
              fVar15 = 0.0;
            }
          }
          else if (0.0 <= fVar15) {
            if (__real_3f800000 < fVar15) {
              fVar15 = FGenericPlatformMath::Fmod(fVar15 - __real_3f800000,__real_3f800000);
              if (fVar15 == 0.0) {
                fVar15 = fVar11;
              }
            }
          }
          else {
            fVar15 = FGenericPlatformMath::Fmod
                               ((float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000),
                                __real_3f800000);
            if (fVar15 == 0.0) {
              fVar15 = 0.0;
            }
            else {
              fVar15 = fVar11 - fVar15;
            }
          }
          SetPosition(this,fVar15,true);
        }
      }
    }
  }
  return;
}

// StopAnim @ 14757b530

void __thiscall UAnimSingleNodeInstance::StopAnim(UAnimSingleNodeInstance *this)

{
  SetPlaying(this,false);
  return;
}

// UpdateBlendspaceSamples @ 147581ca0

void __thiscall
UAnimSingleNodeInstance::UpdateBlendspaceSamples
          (UAnimSingleNodeInstance *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  FAnimSingleNodeInstanceProxy *this_00;
  TVector<double>_u_0 local_28;
  
  if (this == (UAnimSingleNodeInstance *)0x0) {
    this_00 = (FAnimSingleNodeInstanceProxy *)0x0;
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
    this_00 = *(FAnimSingleNodeInstanceProxy **)&this->field_0x3f0;
    if (this_00 == (FAnimSingleNodeInstanceProxy *)0x0) {
      this_00 = (FAnimSingleNodeInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      *(FAnimSingleNodeInstanceProxy **)&this->field_0x3f0 = this_00;
    }
  }
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  FAnimSingleNodeInstanceProxy::UpdateBlendspaceSamples(this_00,(TVector<double> *)&local_28._s_0);
  return;
}

// UpdateMontageWeightForTimeSkip @ 1475821b0

void __thiscall
UAnimSingleNodeInstance::UpdateMontageWeightForTimeSkip(UAnimSingleNodeInstance *this,float param_1)

{
  UAnimationAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *pUVar5;
  FAnimInstanceProxy *this_00;
  FName local_res8;
  
  (**(code **)(*(longlong *)this + 0x2e8))();
  if ((this->CurrentAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0) {
    pUVar4 = Z_Construct_UClass_UAnimMontage_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->CurrentAsset,pUVar4);
    if ((bVar3) &&
       (pUVar1 = (this->CurrentAsset).field0_0x0.DebugPtr, pUVar1 != (UAnimationAsset *)0x0)) {
      bVar3 = IsInGameThread();
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                             ,0x687,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
      if (bVar3) {
        pUVar5 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
        UAnimInstance::HandleExistingParallelEvaluationTask(pUVar5);
      }
      this_00 = *(FAnimInstanceProxy **)&this->field_0x3f0;
      if (this_00 == (FAnimInstanceProxy *)0x0) {
        this_00 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
        *(FAnimInstanceProxy **)&this->field_0x3f0 = this_00;
      }
      UAnimInstance::UpdateMontageEvaluationData((UAnimInstance *)this);
      if (0 < pUVar1[2].MetaData.ArrayNum) {
        local_res8 = *(FName *)pUVar1[2].MetaData.AllocatorInstance.Data;
        FAnimInstanceProxy::GetSlotWeight
                  (this_00,&local_res8,
                   (float *)((longlong)this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64 +
                            4),(float *)&this_00[1].ComponentRelativeTransform.Scale3D,
                   (float *)(this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64 + 1));
        FAnimInstanceProxy::UpdateSlotNodeWeight
                  (this_00,&local_res8,
                   *(float *)((longlong)this_00[1].ComponentRelativeTransform.Scale3D.XY.m128d_f64 +
                             4),__real_3f800000);
      }
    }
  }
  return;
}

// execGetAnimationAsset @ 147584730

void __cdecl
UAnimSingleNodeInstance::execGetAnimationAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x398))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetLength @ 147584900

void __cdecl UAnimSingleNodeInstance::execGetLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetLength((UAnimSingleNodeInstance *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetMirrorDataTable @ 147584940

void __cdecl
UAnimSingleNodeInstance::execGetMirrorDataTable(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  longlong lVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1 == (UObject *)0x0) {
    *(undefined8 *)param_3 = uRam0000000000000860;
    return;
  }
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
  bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&param_1->field_0x20);
  if (bVar2) {
    pUVar3 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
    UAnimInstance::HandleExistingParallelEvaluationTask(pUVar3);
  }
  lVar4 = *(longlong *)&param_1[0x19].field_0x8;
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
    *(longlong *)&param_1[0x19].field_0x8 = lVar4;
  }
  *(undefined8 *)param_3 = *(undefined8 *)(lVar4 + 0x860);
  return;
}

// execPlayAnim @ 147585470

void __cdecl UAnimSingleNodeInstance::execPlayAnim(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int local_res10 [4];
  float local_res20 [2];
  float local_48 [12];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_48[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  fVar3 = local_48[0];
  fVar2 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPlaying((UAnimSingleNodeInstance *)param_1,true);
  SetLooping((UAnimSingleNodeInstance *)param_1,bVar4);
  SetPlayRate((UAnimSingleNodeInstance *)param_1,fVar3);
  SetPosition((UAnimSingleNodeInstance *)param_1,fVar2,true);
  return;
}

// execSetAnimationAsset @ 1475855d0

void __cdecl
UAnimSingleNodeInstance::execSetAnimationAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x390))(param_1,local_res20,bVar2,local_res10[0]);
  return;
}

// execSetBlendSpacePosition @ 1475856f0

void __cdecl
UAnimSingleNodeInstance::execSetBlendSpacePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  USkeletalMeshComponent *pUVar5;
  longlong lVar6;
  uchar *puVar7;
  uchar local_28 [32];
  
  lVar6 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar7 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1 != (UObject *)0x0) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar4 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&param_1->field_0x20);
    if (bVar4) {
      pUVar5 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar5);
    }
    lVar6 = *(longlong *)&param_1[0x19].field_0x8;
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
      *(longlong *)&param_1[0x19].field_0x8 = lVar6;
    }
  }
  uVar3 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(lVar6 + 0x898) = *(undefined8 *)puVar7;
  *(undefined8 *)(lVar6 + 0x8a0) = uVar3;
  *(undefined8 *)(lVar6 + 0x8a8) = *(undefined8 *)(puVar7 + 0x10);
  return;
}

// execSetLooping @ 147585820

void __cdecl UAnimSingleNodeInstance::execSetLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLooping((UAnimSingleNodeInstance *)param_1,local_res10[0] != 0);
  return;
}

// execSetMirrorDataTable @ 1475858b0

void __cdecl
UAnimSingleNodeInstance::execSetMirrorDataTable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  USkeletalMeshComponent *pUVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1 != (UObject *)0x0) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar4 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&param_1->field_0x20);
    if (bVar4) {
      pUVar5 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar5);
    }
    lVar6 = *(longlong *)&param_1[0x19].field_0x8;
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
      *(longlong *)&param_1[0x19].field_0x8 = lVar6;
    }
    *(undefined8 *)(lVar6 + 0x860) = uVar3;
    return;
  }
  uRam0000000000000860 = local_res8;
  return;
}

// execSetPlayRate @ 1475859d0

void __cdecl
UAnimSingleNodeInstance::execSetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPlayRate((UAnimSingleNodeInstance *)param_1,local_res10[0]);
  return;
}

// execSetPlaying @ 147585a60

void __cdecl UAnimSingleNodeInstance::execSetPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPlaying((UAnimSingleNodeInstance *)param_1,local_res10[0] != 0);
  return;
}

// execSetPosition @ 147585af0

void __cdecl
UAnimSingleNodeInstance::execSetPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPosition((UAnimSingleNodeInstance *)param_1,local_res20[0],local_res10[0] != 0);
  return;
}

// execSetPositionWithPreviousTime @ 147585bd0

void __cdecl
UAnimSingleNodeInstance::execSetPositionWithPreviousTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  float local_res20 [2];
  float local_18 [4];
  
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPositionWithPreviousTime
            ((UAnimSingleNodeInstance *)param_1,local_18[0],local_res20[0],local_res10[0] != 0);
  return;
}

// execSetPreviewCurveOverride @ 147585cf0

void __cdecl
UAnimSingleNodeInstance::execSetPreviewCurveOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  int local_res10 [4];
  float local_res20 [2];
  FName local_28 [2];
  
  local_28[0].ComparisonIndex.Value = 0;
  local_28[0].Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20[0] = 0.0;
  pFVar2 = local_28;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPreviewCurveOverride
            ((UAnimSingleNodeInstance *)param_1,pFVar2,local_res20[0],local_res10[0] != 0);
  return;
}

// execSetReverse @ 147585e20

void __cdecl UAnimSingleNodeInstance::execSetReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  FAnimMontageInstance *pFVar6;
  FAnimSingleNodeInstanceProxy *pFVar7;
  bool bVar8;
  uint uVar9;
  int local_res8 [2];
  
  lVar5 = 0;
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar8 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1 != (UObject *)0x0) {
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
    bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&param_1->field_0x20);
    if (bVar3) {
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
      UAnimInstance::HandleExistingParallelEvaluationTask(pUVar4);
    }
    lVar5 = *(longlong *)&param_1[0x19].field_0x8;
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)param_1 + 0x378))(param_1);
      *(longlong *)&param_1[0x19].field_0x8 = lVar5;
    }
  }
  uVar9 = *(uint *)(lVar5 + 0x8fc) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  *(bool *)(lVar5 + 0x902) = bVar8;
  if (bVar8) {
    uVar9 = uVar9 ^ __xmm_80000000800000008000000080000000;
  }
  *(uint *)(lVar5 + 0x8fc) = uVar9;
  pFVar6 = UAnimInstance::GetActiveMontageInstance((UAnimInstance *)param_1);
  if (pFVar6 != (FAnimMontageInstance *)0x0) {
    pFVar7 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>
                       ((UAnimInstance *)param_1);
    pFVar6->PlayRate = pFVar7->PlayRate;
  }
  return;
}

// execStopAnim @ 147586e10

void __cdecl UAnimSingleNodeInstance::execStopAnim(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPlaying((UAnimSingleNodeInstance *)param_1,false);
  return;
}

