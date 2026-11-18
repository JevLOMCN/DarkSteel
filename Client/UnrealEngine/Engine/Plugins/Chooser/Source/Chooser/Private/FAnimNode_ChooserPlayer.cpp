// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 18

// StaticStruct @ 14a86e520

UScriptStruct * __cdecl FAnimNode_ChooserPlayer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer,(UObject *)pUVar1,
                         L"AnimNode_ChooserPlayer");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton;
}

// FAnimNode_ChooserPlayer @ 14a87cde0

FAnimNode_ChooserPlayer * __thiscall
FAnimNode_ChooserPlayer::FAnimNode_ChooserPlayer(FAnimNode_ChooserPlayer *this)

{
  undefined8 uVar1;
  
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FAnimNode_BlendStack_Standalone__;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0x3dcccccd;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x42c80000;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0x3e4ccccd;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->EvaluationFrequency = OnBecomeRelevant;
  FInstancedStruct::FInstancedStruct(&this->Chooser);
  (this->MirrorDataTable).field0_0x0.DebugPtr = (UMirrorDataTable *)0x0;
  (this->DefaultSettings).CurveOverrides.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultSettings).CurveOverrides.Values.ArrayNum = 0;
  (this->DefaultSettings).CurveOverrides.Values.ArrayMax = 0;
  (this->DefaultSettings).CurveOverrides.Hash = 0;
  (this->DefaultSettings).BlendProfile.field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->DefaultSettings).PlayingAsset.field0_0x0.DebugPtr = (UObject *)0x0;
  this->BlendSpaceX = 0.0;
  this->BlendSpaceY = 0.0;
  this->bUpdateAllActiveBlendSpaces = true;
  (this->DefaultSettings).bMirror = false;
  (this->DefaultSettings).StartTime = 0.0;
  (this->DefaultSettings).bForceLooping = false;
  (this->DefaultSettings).PlaybackRate = 1.0;
  (this->DefaultSettings).BlendTime = 0.2;
  (this->DefaultSettings).BlendOption = HermiteCubic;
  (this->DefaultSettings).bUseInertialBlend = false;
  (this->DefaultSettings).bForceBlendTo = false;
  (this->DefaultSettings).MinDeltaTimeToForceBlendTo = 0.0;
  (this->DefaultSettings).PlayingAssetAccumulatedTime = 0.0;
  (this->DefaultSettings).bIsPlayingAssetMirrored = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DefaultSettings).PlayingAssetBlendParameters.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DefaultSettings).PlayingAssetBlendParameters.field0_0x0._s_0.Y = (double)uVar1;
  (this->DefaultSettings).PlayingAssetBlendParameters.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DefaultSettings).AnimationUpdateContext = (FAnimationUpdateContext *)0x0;
  (this->ChooserContextDefinition).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChooserContextDefinition).ArrayNum = 0;
  (this->ChooserContextDefinition).ArrayMax = 0;
  this->bStartFromMatchingPose = false;
  (this->Settings).bMirror = false;
  (this->Settings).StartTime = 0.0;
  (this->Settings).bForceLooping = false;
  (this->Settings).PlaybackRate = 1.0;
  (this->Settings).CurveOverrides.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).CurveOverrides.Values.ArrayNum = 0;
  (this->Settings).CurveOverrides.Values.ArrayMax = 0;
  (this->Settings).CurveOverrides.Hash = 0;
  (this->Settings).BlendTime = 0.2;
  (this->Settings).BlendProfile.field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->Settings).BlendOption = HermiteCubic;
  (this->Settings).bUseInertialBlend = false;
  (this->Settings).bForceBlendTo = false;
  (this->Settings).MinDeltaTimeToForceBlendTo = 0.0;
  (this->Settings).PlayingAsset.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Settings).PlayingAssetAccumulatedTime = 0.0;
  (this->Settings).bIsPlayingAssetMirrored = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Settings).PlayingAssetBlendParameters.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Settings).PlayingAssetBlendParameters.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Settings).AnimationUpdateContext = (FAnimationUpdateContext *)0x0;
  (this->Settings).PlayingAssetBlendParameters.field0_0x0._s_0.Z = (double)uVar1;
  this->CurrentAsset = (UAnimationAsset *)0x0;
  this->CurrentStartTime = 0.0;
  this->CurrentMirror = false;
  this->bInitialized = false;
  this->CurrentCurveOverridesHash = 0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  return this;
}

// ~FAnimNode_ChooserPlayer @ 14a87e360

void __thiscall FAnimNode_ChooserPlayer::~FAnimNode_ChooserPlayer(FAnimNode_ChooserPlayer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Settings).CurveOverrides.Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->ChooserContextDefinition).AllocatorInstance.Data,
             (this->ChooserContextDefinition).ArrayNum);
  pFVar1 = (this->ChooserContextDefinition).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultSettings).CurveOverrides.Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&this->Chooser);
  this->_padding_ = (longlong)&___7IHasContextClass__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FAnimNode_BlendStack_Standalone::~FAnimNode_BlendStack_Standalone
            ((FAnimNode_BlendStack_Standalone *)this);
  return;
}

// operator() @ 14a87f9d0

EIteratorStatus __thiscall
`FAnimNode_ChooserPlayer::ChooseAsset'::__l11::<lambda_1>::operator()(void *this,UObject *param_1)

{
  ForElementType<UObject_const_*> FVar1;
  code *pcVar2;
  bool bVar3;
  EIteratorStatus EVar4;
  int iVar5;
  ForElementType<UObject_const_*> FVar6;
  UObject *local_res10 [3];
  
  FVar1 = *(ForElementType<UObject_const_*> *)this;
  FVar6 = *(ForElementType<UObject_const_*> *)((longlong)FVar1 + 0x400);
  if (*(ForElementType<UObject_const_*> *)((longlong)FVar1 + 0x400) ==
      (ForElementType<UObject_const_*>)0x0) {
    FVar6 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 < (UObject **)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar1 + 0x40c) * 8))
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  iVar5 = *(int *)((longlong)FVar1 + 0x408);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x40c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,(ForElementType<UObject_const_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0x40c));
  }
  *(int *)((longlong)FVar1 + 0x408) = iVar5 + 1;
  FVar6 = *(ForElementType<UObject_const_*> *)((longlong)FVar1 + 0x400);
  if (*(ForElementType<UObject_const_*> *)((longlong)FVar1 + 0x400) ==
      (ForElementType<UObject_const_*>)0x0) {
    FVar6 = FVar1;
  }
  *(UObject **)((longlong)FVar6 + (longlong)iVar5 * 8) = local_res10[0];
  return Continue;
}

// ChooseAsset @ 14a8815d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UAnimationAsset * __thiscall
FAnimNode_ChooserPlayer::ChooseAsset(FAnimNode_ChooserPlayer *this,FAnimationUpdateContext *param_1)

{
  FChooserPlayerSettings *this_00;
  UScriptStruct **ppUVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  TVector<double> *pTVar7;
  UPackage *pUVar8;
  ForElementType<FStructView> FVar9;
  UAnimationAsset *pUVar10;
  FObjectChooserBase *pFVar11;
  IPoseSearchProvider *pIVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  UClass *pUVar15;
  float fVar16;
  undefined1 auStack_648 [32];
  UScriptStruct **local_628;
  ForElementType<FStructView> local_620;
  longlong local_618;
  longlong local_610;
  undefined8 local_608;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  UScriptStruct *local_5e8;
  UScriptStruct *pUStack_5e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5d8;
  FDelegateAllocation local_5d0;
  undefined8 local_5c0;
  undefined4 local_5b8;
  undefined1 local_5b4;
  undefined2 local_5b3;
  undefined1 local_5b1;
  double local_5b0;
  double dStack_5a8;
  double local_5a0;
  undefined8 local_598;
  UScriptStruct *local_590;
  undefined4 local_588;
  undefined1 local_584;
  double local_580;
  double dStack_578;
  double local_570;
  FDestructionSentinel local_568;
  FDelegateAllocation *local_550;
  undefined4 local_548;
  undefined4 uStack_544;
  int iStack_540;
  undefined4 uStack_53c;
  UAnimationAsset *local_538;
  float local_530;
  char local_528;
  bool local_527;
  TVector<double> local_508;
  TVector<double> local_4f0;
  FChooserEvaluationContext local_4d8;
  UScriptStruct local_450 [5];
  UScriptStruct *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_648;
  if (((this->Chooser).StructMemory == (uchar *)0x0) ||
     ((this->Chooser).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    return (UAnimationAsset *)0x0;
  }
  this_00 = &this->Settings;
  FChooserPlayerSettings::operator=(this_00,&this->DefaultSettings);
  pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0xa0))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  (this->Settings).PlayingAsset.field0_0x0.DebugPtr = pUVar6;
  fVar16 = (float)(**(code **)(this->_padding_ + 0xa8))(this);
  (this->Settings).PlayingAssetAccumulatedTime = fVar16;
  bVar5 = FAnimNode_BlendStack_Standalone::GetMirror((FAnimNode_BlendStack_Standalone *)this);
  (this->Settings).bIsPlayingAssetMirrored = bVar5;
  pTVar7 = FAnimNode_BlendStack_Standalone::GetBlendParameters
                     ((FAnimNode_BlendStack_Standalone *)this,&local_508);
  dVar4 = (pTVar7->field0_0x0)._s_0.Y;
  (this->Settings).PlayingAssetBlendParameters.field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (this->Settings).PlayingAssetBlendParameters.field0_0x0._s_0.Y = dVar4;
  (this->Settings).PlayingAssetBlendParameters.field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  (this->Settings).AnimationUpdateContext = param_1;
  local_4d8.DebuggingInfo.CurrentChooser = (UObject *)0x0;
  local_4d8.DebuggingInfo.bCurrentDebugTarget = false;
  local_4d8.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
  local_4d8.Params.ArrayNum = 0;
  local_4d8.Params.ArrayMax = 4;
  local_4d8.ObjectParams.ArrayNum = 0;
  local_4d8.ObjectParams.ArrayMax = 4;
  pUVar6 = FAnimationBaseContext::GetAnimInstanceObject((FAnimationBaseContext *)param_1);
  FChooserEvaluationContext::AddObjectParam(&local_4d8,pUVar6);
  if (Z_Registration_Info_UScriptStruct_FChooserPlayerSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserPlayerSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserPlayerSettings,(UObject *)pUVar8,
                         L"ChooserPlayerSettings");
  }
  FVar9 = (ForElementType<FStructView>)&local_4d8.Params;
  if (local_4d8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
    FVar9 = local_4d8.Params.AllocatorInstance.SecondaryData;
  }
  local_5f8 = Z_Registration_Info_UScriptStruct_FChooserPlayerSettings.OuterSingleton;
  uStack_5f0 = this_00;
  local_5e8 = Z_Registration_Info_UScriptStruct_FChooserPlayerSettings.OuterSingleton;
  pUStack_5e0 = (UScriptStruct *)this_00;
  if ((ulonglong)FVar9 <= &local_5e8) {
    FVar9 = (ForElementType<FStructView>)&local_4d8.Params;
    if (local_4d8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
      FVar9 = local_4d8.Params.AllocatorInstance.SecondaryData;
    }
    if (&local_5e8 <
        (UScriptStruct **)((longlong)local_4d8.Params.ArrayMax * 0x10 + (longlong)FVar9)) {
      local_610 = (longlong)local_4d8.Params.ArrayNum;
      local_608 = 0x10;
      local_628 = &local_5e8;
      local_620 = (ForElementType<FStructView>)&local_4d8.Params;
      if (local_4d8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
        local_620 = local_4d8.Params.AllocatorInstance.SecondaryData;
      }
      local_618 = (longlong)local_4d8.Params.ArrayMax;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pUVar10 = (UAnimationAsset *)(*pcVar3)();
        return pUVar10;
      }
    }
  }
  if (local_4d8.Params.ArrayNum == local_4d8.Params.ArrayMax) {
    local_4d8.Params.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStructView>_>
                   (0x810,&local_4d8.Params.AllocatorInstance,&local_4d8.Params.ArrayMax);
  }
  FVar9 = (ForElementType<FStructView>)&local_4d8.Params;
  if (local_4d8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
    FVar9 = local_4d8.Params.AllocatorInstance.SecondaryData;
  }
  ppUVar1 = (UScriptStruct **)((longlong)FVar9 + (longlong)local_4d8.Params.ArrayNum * 0x10);
  local_4d8.Params.ArrayNum = local_4d8.Params.ArrayNum + 1;
  *ppUVar1 = local_5e8;
  ppUVar1[1] = pUStack_5e0;
  pFVar11 = UE::StructUtils::GetStructRef<FObjectChooserBase>
                      ((this->Chooser).ScriptStruct.field0_0x0.DebugPtr,(this->Chooser).StructMemory
                      );
  if ((this->bStartFromMatchingPose != false) &&
     (pIVar12 = UE::Anim::IPoseSearchProvider::Get(), pIVar12 != (IPoseSearchProvider *)0x0)) {
    local_50 = (UScriptStruct *)0x0;
    local_48 = 0;
    pcVar3 = *(code **)((longlong)*pFVar11 + 0x30);
    local_44 = 0x80;
    local_5d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_5d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_5d0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_5d8,(FWriteAccessScope *)&local_568);
    local_550 = &local_5d0;
    puVar13 = UE::Core::Private::DelegateAllocate(0x20,&local_5d0);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy,`FAnimNode_ChooserPlayer::ChooseAsset'::`11'::<lambda_1>_>
                  ::_vftable_;
      puVar13[3] = local_450;
    }
    if (local_568.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_568.Accessor,&local_568);
    }
    (*pcVar3)(pFVar11,&local_4d8,&local_5d8);
    local_580 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_578 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_570 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_590 = (UScriptStruct *)(**(code **)(this->_padding_ + 0xa0))(this);
    local_588 = (**(code **)(this->_padding_ + 0xa8))(this);
    local_584 = FAnimNode_BlendStack_Standalone::GetMirror((FAnimNode_BlendStack_Standalone *)this);
    pTVar7 = FAnimNode_BlendStack_Standalone::GetBlendParameters
                       ((FAnimNode_BlendStack_Standalone *)this,&local_4f0);
    iStack_540 = local_48;
    local_580 = (pTVar7->field0_0x0)._s_0.X;
    dStack_578 = (pTVar7->field0_0x0)._s_0.Y;
    local_570 = (pTVar7->field0_0x0)._s_0.Z;
    pcVar3 = *(code **)((longlong)*pIVar12 + 8);
    local_5b3 = 0;
    local_5b1 = 0;
    local_598 = 0;
    local_5c0 = 0;
    local_5b8 = 0;
    local_5b4 = 0;
    local_5a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_5b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_5a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_5f8 = local_450;
    if (local_50 != (UScriptStruct *)0x0) {
      local_5f8 = local_50;
    }
    if ((local_48 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (UAnimationAsset *)(*pcVar3)();
      return pUVar10;
    }
    local_620 = (ForElementType<FStructView>)&local_5c0;
    uStack_5f0 = (FChooserPlayerSettings *)CONCAT44(uStack_5f0._4_4_,iStack_540);
    local_628 = &local_590;
    local_548 = (undefined4)local_5f8;
    uStack_544 = local_5f8._4_4_;
    uStack_53c = uStack_5f0._4_4_;
    (*pcVar3)(pIVar12,&local_538,param_1,&local_548);
    if (local_538 != (UAnimationAsset *)0x0) {
      pUVar15 = Z_Construct_UClass_UAnimationAsset_NoRegister();
      iVar2 = (int)pUVar15->_padding_;
      if ((iVar2 <= *(int *)(local_538->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(local_538->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar15->_padding_)) {
        if (local_528 == '\0') {
          (this->Settings).StartTime = local_530;
          this_00->bMirror = local_527;
          (this->Settings).bForceBlendTo = true;
        }
        if (local_50 != (UScriptStruct *)0x0) {
          FMemory::Free(local_50);
        }
        goto LAB_14a881ae8;
      }
    }
    if (local_50 != (UScriptStruct *)0x0) {
      FMemory::Free(local_50);
    }
  }
  local_538 = (UAnimationAsset *)(**(code **)((longlong)*pFVar11 + 0x18))(pFVar11,&local_4d8);
  if (local_538 != (UAnimationAsset *)0x0) {
    pUVar15 = Z_Construct_UClass_UAnimationAsset_NoRegister();
    iVar2 = (int)pUVar15->_padding_;
    if ((iVar2 <= *(int *)(local_538->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_538->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar15->_padding_)) goto LAB_14a881ae8;
  }
  local_538 = (UAnimationAsset *)0x0;
LAB_14a881ae8:
  if (local_4d8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
    FMemory::Free((void *)local_4d8.Params.AllocatorInstance.SecondaryData);
  }
  return local_538;
}

// Evaluate_AnyThread @ 14a887560

void __thiscall
FAnimNode_ChooserPlayer::Evaluate_AnyThread(FAnimNode_ChooserPlayer *this,FPoseContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ChooserPlayer::Evaluate_AnyThread");
  FAnimNode_BlendStack_Standalone::Evaluate_AnyThread
            ((FAnimNode_BlendStack_Standalone *)this,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetContextData @ 14a889b60

TArrayView<FInstancedStruct_const_,int> * __thiscall
FAnimNode_ChooserPlayer::GetContextData
          (FAnimNode_ChooserPlayer *this,
          TArrayView<FInstancedStruct_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FInstancedStruct_const_,int> *pTVar4;
  
  iVar1 = (int)this->_padding_;
  __return_storage_ptr__->DataPtr = (FInstancedStruct *)this->_padding_;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FInstancedStruct_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetGroupMethod @ 14a889f20

EAnimSyncMethod __thiscall FAnimNode_ChooserPlayer::GetGroupMethod(FAnimNode_ChooserPlayer *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EAnimSyncMethod EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EAnimSyncMethod *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Method.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Method,"Method");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer,(UObject *)pUVar6,
                           L"AnimNode_ChooserPlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton);
    CachedId_Method.Id = pFVar7->Id;
    CachedId_Method.Index = pFVar7->Index;
  }
  iVar3 = CachedId_Method.Index;
  FVar2 = CachedId_Method.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pEVar8;
}

// GetGroupName @ 14a88a070

FName __thiscall FAnimNode_ChooserPlayer::GetGroupName(FAnimNode_ChooserPlayer *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNodeDataId *pFVar5;
  FName FVar6;
  undefined8 *puVar7;
  FName in_RDX;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupName.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupName,"GroupName");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer,(UObject *)pUVar4,
                           L"AnimNode_ChooserPlayer");
    }
    pFVar5 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton);
    CachedId_GroupName.Id = pFVar5->Id;
    CachedId_GroupName.Index = pFVar5->Index;
  }
  iVar2 = CachedId_GroupName.Index;
  FVar6 = CachedId_GroupName.Id;
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar6 = (FName)(*pcVar1)();
    return FVar6;
  }
  local_28.Id = FVar6;
  local_28.Index = iVar2;
  puVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  *(undefined8 *)in_RDX = *puVar7;
  return in_RDX;
}

// GetGroupRole @ 14a88a1e0

Type __thiscall FAnimNode_ChooserPlayer::GetGroupRole(FAnimNode_ChooserPlayer *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  Type TVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  byte *pbVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupRole.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupRole,"GroupRole");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer,(UObject *)pUVar6,
                           L"AnimNode_ChooserPlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton);
    CachedId_GroupRole.Id = pFVar7->Id;
    CachedId_GroupRole.Index = pFVar7->Index;
  }
  iVar3 = CachedId_GroupRole.Index;
  FVar2 = CachedId_GroupRole.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    TVar5 = (*pcVar1)();
    return TVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pbVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (Type)*pbVar8;
}

// GetIgnoreForRelevancyTest @ 14a88a370

bool __thiscall FAnimNode_ChooserPlayer::GetIgnoreForRelevancyTest(FAnimNode_ChooserPlayer *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bIgnoreForRelevancyTest.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bIgnoreForRelevancyTest,"bIgnoreForRelevancyTest");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer,(UObject *)pUVar6,
                           L"AnimNode_ChooserPlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton);
    CachedId_bIgnoreForRelevancyTest.Id = pFVar7->Id;
    CachedId_bIgnoreForRelevancyTest.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bIgnoreForRelevancyTest.Index;
  FVar2 = CachedId_bIgnoreForRelevancyTest.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// Initialize_AnyThread @ 14a88bf10

void __thiscall
FAnimNode_ChooserPlayer::Initialize_AnyThread
          (FAnimNode_ChooserPlayer *this,FAnimationInitializeContext *param_1)

{
  int iVar1;
  longlong *plVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UPackage *pUVar5;
  longlong *plVar6;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ChooserPlayer::Initialize_AnyThread");
  FAnimNode_BlendStack_Standalone::Initialize_AnyThread
            ((FAnimNode_BlendStack_Standalone *)this,param_1);
  if (this->bInitialized != false) goto LAB_14a88bfe0;
  plVar2 = (longlong *)(this->Chooser).StructMemory;
  if ((plVar2 != (longlong *)0x0) &&
     (pUVar3 = (this->Chooser).ScriptStruct.field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar5 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FObjectChooserBase,(UObject *)pUVar5,
                           L"ObjectChooserBase");
      if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a88bfd4;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar6 = &this->_padding_;
      if (this == (FAnimNode_ChooserPlayer *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 8))(plVar2,plVar6,0);
    }
  }
LAB_14a88bfd4:
  this->bInitialized = true;
LAB_14a88bfe0:
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsLooping @ 14a88c000

bool __thiscall FAnimNode_ChooserPlayer::IsLooping(FAnimNode_ChooserPlayer *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 == 0) {
    return false;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = FBlendStackAnimPlayer::IsLooping((FBlendStackAnimPlayer *)this->_padding_);
  return bVar3;
}

// SetGroupMethod @ 14a88ecf0

bool __thiscall
FAnimNode_ChooserPlayer::SetGroupMethod(FAnimNode_ChooserPlayer *this,EAnimSyncMethod param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EAnimSyncMethod *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Method.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Method,"Method");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer,(UObject *)pUVar6,
                           L"AnimNode_ChooserPlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton);
    CachedId_Method.Id = pFVar7->Id;
    CachedId_Method.Index = pFVar7->Index;
  }
  iVar3 = CachedId_Method.Index;
  FVar2 = CachedId_Method.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pEVar8 == (EAnimSyncMethod *)0x0) {
    return false;
  }
  *pEVar8 = param_1;
  return true;
}

// SetGroupName @ 14a88ee70

bool __thiscall FAnimNode_ChooserPlayer::SetGroupName(FAnimNode_ChooserPlayer *this,FName param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  FName *pFVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupName.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupName,"GroupName");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer,(UObject *)pUVar6,
                           L"AnimNode_ChooserPlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton);
    CachedId_GroupName.Id = pFVar7->Id;
    CachedId_GroupName.Index = pFVar7->Index;
  }
  iVar3 = CachedId_GroupName.Index;
  FVar2 = CachedId_GroupName.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pFVar8 == (FName *)0x0) {
    return false;
  }
  *pFVar8 = param_1;
  return true;
}

// SetGroupRole @ 14a88eff0

bool __thiscall FAnimNode_ChooserPlayer::SetGroupRole(FAnimNode_ChooserPlayer *this,Type param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupRole.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupRole,"GroupRole");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer,(UObject *)pUVar6,
                           L"AnimNode_ChooserPlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton);
    CachedId_GroupRole.Id = pFVar7->Id;
    CachedId_GroupRole.Index = pFVar7->Index;
  }
  iVar3 = CachedId_GroupRole.Index;
  FVar2 = CachedId_GroupRole.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (puVar8 == (undefined1 *)0x0) {
    return false;
  }
  *puVar8 = (char)param_1;
  return true;
}

// SetIgnoreForRelevancyTest @ 14a88f170

bool __thiscall
FAnimNode_ChooserPlayer::SetIgnoreForRelevancyTest(FAnimNode_ChooserPlayer *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  void *pvVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bIgnoreForRelevancyTest.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bIgnoreForRelevancyTest,"bIgnoreForRelevancyTest");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChooserPlayer,(UObject *)pUVar6,
                           L"AnimNode_ChooserPlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_ChooserPlayer.OuterSingleton);
    CachedId_bIgnoreForRelevancyTest.Id = pFVar7->Id;
    CachedId_bIgnoreForRelevancyTest.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bIgnoreForRelevancyTest.Index;
  FVar2 = CachedId_bIgnoreForRelevancyTest.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pvVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pvVar8 == (void *)0x0) {
    return false;
  }
  *(bool *)pvVar8 = param_1;
  return true;
}

// UpdateAssetPlayer @ 14a890890

void __thiscall
FAnimNode_ChooserPlayer::UpdateAssetPlayer
          (FAnimNode_ChooserPlayer *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  EChooserEvaluationFrequency EVar7;
  uint uVar8;
  int iVar9;
  FBlendStackAnimPlayer *this_00;
  ForAnyElementType *pFVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  bool bVar14;
  EAnimSyncMethod EVar15;
  bool bVar16;
  short sVar17;
  Type TVar18;
  int iVar19;
  FExposedValueHandler *this_01;
  UClass *pUVar20;
  FName *pFVar21;
  FObjectChooserBase *pFVar22;
  longlong lVar23;
  UAnimationAsset *pUVar24;
  FScriptContainerElement *pFVar25;
  short sVar26;
  wchar_t *pwVar27;
  undefined1 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  wchar_t *local_98;
  undefined8 local_90;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ChooserPlayer::UpdateAssetPlayer");
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  if (((this->Chooser).StructMemory == (uchar *)0x0) ||
     ((this->Chooser).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) goto LAB_14a890e43;
  sVar26 = (this->UpdateCounter).Counter;
  lVar23 = param_1->_padding_;
  if ((sVar26 == -1) ||
     (((this->UpdateCounter).LastSyncronizedFrame == 0xffffffffffffffff ||
      (sVar26 != *(short *)(lVar23 + 0x5b0))))) {
    sVar17 = (this->UpdateCounter).Counter + 1;
    sVar26 = 0;
    if (sVar17 != -1) {
      sVar26 = sVar17;
    }
    if ((GFrameCounter == 0xffffffffffffffff) || (sVar26 != *(short *)(lVar23 + 0x5b0))) {
      bVar16 = true;
    }
    else {
      bVar16 = false;
    }
  }
  else {
    bVar16 = false;
  }
  (this->UpdateCounter).Counter = *(short *)(lVar23 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar23 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar23 + 0x5b2);
  pUVar24 = this->CurrentAsset;
  if (((pUVar24 != (UAnimationAsset *)0x0) && ((int)this->_padding_ == 0)) &&
     (this->EvaluationFrequency != OnInitialUpdate)) {
    this->CurrentAsset = (UAnimationAsset *)0x0;
    pUVar24 = (UAnimationAsset *)0x0;
  }
  EVar7 = this->EvaluationFrequency;
  if ((EVar7 == OnUpdate) || (pUVar24 == (UAnimationAsset *)0x0)) {
LAB_14a890a5d:
    pUVar24 = ChooseAsset(this,param_1);
  }
  else if (EVar7 == OnLoop) {
    if ((int)this->_padding_ != 0) {
      if (((int)this->_padding_ < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      this_00 = (FBlendStackAnimPlayer *)this->_padding_;
      fVar32 = param_1->DeltaTime;
      fVar29 = FBlendStackAnimPlayer::GetPlayRate(this_00);
      fVar30 = FBlendStackAnimPlayer::GetAccumulatedTime(this_00);
      fVar31 = (float)(**(code **)(this->CurrentAsset->_padding_ + 0x2c0))();
      if (fVar31 < fVar30 + fVar29 * fVar32) goto LAB_14a890a5d;
    }
  }
  else if ((EVar7 == OnBecomeRelevant) && (bVar16)) goto LAB_14a890a5d;
  if (((((((this->Settings).bForceBlendTo != false) || (bVar16)) || (pUVar24 != this->CurrentAsset))
       || (((int)this->_padding_ == 0 || (this->CurrentMirror != (this->Settings).bMirror)))) ||
      ((fVar32 = (float)((uint)(this->CurrentStartTime - (this->Settings).StartTime) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff),
       pfVar3 = &(this->Settings).MinDeltaTimeToForceBlendTo, *pfVar3 <= fVar32 && fVar32 != *pfVar3
       && ((this->Settings).PlaybackRate == 0.0)))) ||
     (this->CurrentCurveOverridesHash != (this->Settings).CurveOverrides.Hash)) {
    uVar28 = (this->Settings).bForceLooping;
    this->CurrentCurveOverridesHash = (this->Settings).CurveOverrides.Hash;
    this->CurrentMirror = (this->Settings).bMirror;
    (this->Settings).bForceBlendTo = false;
    if (((bool)uVar28 == false) && (pUVar24 != (UAnimationAsset *)0x0)) {
      pUVar20 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
      iVar9 = (int)pUVar20->_padding_;
      if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar20->_padding_)) {
        pUVar20 = Z_Construct_UClass_UBlendSpace_NoRegister();
        iVar9 = (int)pUVar20->_padding_;
        if ((iVar9 <= *(int *)(pUVar24->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar20->_padding_)) {
          uVar28 = *(undefined1 *)((longlong)&pUVar24[1].SkeletonGuid.A + 2);
        }
      }
      else {
        uVar28 = *(undefined1 *)((longlong)&pUVar24[1]._padding_ + 4);
      }
    }
    EVar15 = (**(code **)(this->_padding_ + 0x118))(this);
    TVar18 = (**(code **)(this->_padding_ + 0x110))(this);
    pFVar21 = (FName *)(**(code **)(this->_padding_ + 0x108))(this,local_res20);
    local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FAnimNode_BlendStack_Standalone::BlendTo
              ((FAnimNode_BlendStack_Standalone *)this,param_1,pUVar24,(this->Settings).StartTime,
               (bool)uVar28,(this->Settings).bMirror,(this->MirrorDataTable).field0_0x0.DebugPtr,
               (this->Settings).BlendTime,(this->Settings).BlendProfile.field0_0x0.DebugPtr,
               (this->Settings).BlendOption,(this->Settings).bUseInertialBlend,(FName)0x0,
               (TVector<double> *)&local_88._s_0,(this->Settings).PlaybackRate,0.0,*pFVar21,TVar18,
               EVar15,false);
    if ((this->Settings).CurveOverrides.Values.ArrayNum != 0) {
      if (((int)this->_padding_ < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar8 = (this->Settings).CurveOverrides.Values.ArrayNum;
      pFVar10 = (ForAnyElementType *)this->_padding_;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
      if (*piVar1 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,uVar8,pFVar10,*(int *)&pFVar10[1].Data,piVar1);
      }
      iVar9 = (this->Settings).CurveOverrides.Values.ArrayNum;
      pFVar25 = (this->Settings).CurveOverrides.Values.AllocatorInstance.Data;
      pFVar4 = pFVar25 + (longlong)iVar9 * 0xc;
      while( true ) {
        if ((this->Settings).CurveOverrides.Values.ArrayNum != iVar9) {
          `TCheckedPointerIterator<FAnimCurveOverride,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar25 == pFVar4) break;
        iVar19 = *(int *)&pFVar10[1].Data;
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,pFVar10,piVar1);
        }
        lVar23 = (longlong)iVar19;
        *(int *)&pFVar10[1].Data = iVar19 + 1;
        pFVar2 = pFVar25 + 8;
        uVar11 = *(undefined8 *)pFVar25;
        pFVar25 = pFVar25 + 0xc;
        pFVar12 = pFVar10->Data;
        *(undefined4 *)(pFVar12 + lVar23 * 0x10 + 8) = *(undefined4 *)pFVar2;
        *(undefined8 *)(pFVar12 + lVar23 * 0x10) = uVar11;
        pFVar12[lVar23 * 0x10 + 0xc] = (FScriptContainerElement)0x0;
        *(undefined1 *)&pFVar10[2].Data = 0;
      }
    }
    this->CurrentStartTime = (this->Settings).StartTime;
    this->CurrentAsset = pUVar24;
  }
  uVar5 = this->BlendSpaceX;
  uVar6 = this->BlendSpaceY;
  local_70[0]._8_4_ = SUB84((double)(float)uVar6,0);
  local_70[0]._0_8_ = (double)(float)uVar5;
  local_70[0]._12_4_ = (int)((ulonglong)(double)(float)uVar6 >> 0x20);
  local_70[0]._s_0.Z = 0.0;
  FAnimNode_BlendStack_Standalone::UpdateBlendspaceParameters
            ((FAnimNode_BlendStack_Standalone *)this,
             (this->bUpdateAllActiveBlendSpaces != false) + UpdateActiveOnly,
             (TVector<double> *)&local_70[0]._s_0);
  FAnimNode_BlendStack_Standalone::UpdateAssetPlayer
            ((FAnimNode_BlendStack_Standalone *)this,param_1);
  local_98 = (wchar_t *)0x0;
  local_90 = 0;
  pFVar22 = UE::StructUtils::GetStructRef<FObjectChooserBase>
                      ((this->Chooser).ScriptStruct.field0_0x0.DebugPtr,(this->Chooser).StructMemory
                      );
  (**(code **)((longlong)*pFVar22 + 0x40))(pFVar22,&local_98);
  pwVar27 = L"";
  if ((int)local_90 != 0) {
    pwVar27 = local_98;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             pwVar27);
  if (local_98 != (wchar_t *)0x0) {
    FMemory::Free(local_98);
  }
LAB_14a890e43:
  FStatsHierarchical::EndMeasurement();
  return;
}

