// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 147497ad0

UScriptStruct * __cdecl FAnimNode_SaveCachedPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose,(UObject *)pUVar1,
                         L"AnimNode_SaveCachedPose");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.OuterSingleton;
}

// FAnimNode_SaveCachedPose @ 1474b1760

FAnimNode_SaveCachedPose * __thiscall
FAnimNode_SaveCachedPose::FAnimNode_SaveCachedPose(FAnimNode_SaveCachedPose *this)

{
  (this->InitializationCounter).Counter = -1;
  (this->InitializationCounter).SkipFrames = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_SaveCachedPose__6B_;
  *(undefined4 *)&(this->Pose).field_0x8 = 0xffffffff;
  (this->InitializationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->CachedBonesCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->EvaluationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  *(undefined8 *)&this->Pose = 0;
  (this->Pose).field_0xc = 0;
  (this->CachePoseName).ComparisonIndex = 0;
  (this->CachePoseName).Number = 0;
  this->GlobalWeight = 0.0;
  (this->CachedUpdateContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedUpdateContexts).ArrayNum = 0;
  (this->CachedUpdateContexts).ArrayMax = 0;
  (this->CachedBonesCounter).Counter = -1;
  (this->CachedBonesCounter).SkipFrames = 0;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  (this->EvaluationCounter).Counter = -1;
  (this->EvaluationCounter).SkipFrames = 0;
  return this;
}

// operator() @ 1474b7390

EEnumerate __thiscall
`FAnimNode_SaveCachedPose::PostGraphUpdate'::__l14::<lambda_1>::operator()
          (void *this,FCachedPoseSkippedUpdateHandler *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  EEnumerate EVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uStack_1c;
  longlong local_18;
  undefined8 uStack_10;
  
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x2c68);
  lVar7 = *(longlong *)(lVar2 + 0x2c60);
  if (*(longlong *)(lVar2 + 0x2c60) == 0) {
    lVar7 = lVar2;
  }
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  uStack_10 = CONCAT44(uStack_1c,iVar1);
  local_18 = lVar7;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar3 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar4 = *(code **)&param_1->Function;
  plVar9 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar9 = plVar3;
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  (*pcVar4)(uVar8,&local_18);
  return Stop;
}

// CacheBones_AnyThread @ 1474c1da0

void __thiscall
FAnimNode_SaveCachedPose::CacheBones_AnyThread
          (FAnimNode_SaveCachedPose *this,FAnimationCacheBonesContext *param_1)

{
  short sVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  sVar1 = (this->CachedBonesCounter).Counter;
  lVar2 = *(longlong *)param_1;
  if ((((sVar1 != -1) &&
       (uVar3 = (this->CachedBonesCounter).LastSyncronizedFrame, uVar3 != 0xffffffffffffffff)) &&
      (sVar1 == *(short *)(lVar2 + 0x5a0))) && (uVar3 == *(ulong64 *)(lVar2 + 0x598))) {
    return;
  }
  (this->CachedBonesCounter).Counter = *(short *)(lVar2 + 0x5a0);
  (this->CachedBonesCounter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x598);
  (this->CachedBonesCounter).SkipFrames = *(short *)(lVar2 + 0x5a2);
  (this->EvaluationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->EvaluationCounter).Counter = -1;
  (this->EvaluationCounter).SkipFrames = 0;
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Pose,param_1);
  return;
}

// Evaluate_AnyThread @ 1474d1160

void __thiscall
FAnimNode_SaveCachedPose::Evaluate_AnyThread(FAnimNode_SaveCachedPose *this,FPoseContext *param_1)

{
  short sVar1;
  int iVar2;
  ulong64 uVar3;
  longlong lVar4;
  FBoneContainer *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FCachedPoseThreadContext *this_00;
  FCachedPose *pFVar9;
  ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal> FVar10;
  undefined1 local_res8 [8];
  undefined1 local_d8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_80;
  undefined8 local_78;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_70;
  undefined8 local_68;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  bool local_40;
  code *local_38;
  undefined1 *local_30;
  
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this_00 = (FCachedPoseThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  sVar1 = (this->EvaluationCounter).Counter;
  if ((((sVar1 != -1) &&
       (uVar3 = (this->EvaluationCounter).LastSyncronizedFrame, uVar3 != 0xffffffffffffffff)) &&
      (sVar1 == *(short *)(param_1->_padding_ + 0x5c0))) &&
     (uVar3 == *(ulong64 *)(param_1->_padding_ + 0x5b8))) {
    iVar2 = (this_00->Scopes).ArrayNum;
    if (0 < iVar2) {
      uVar8 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar8 = ~(iVar2 - 1U) >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar10 = (this_00->Scopes).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>)
                    0x0) {
        FVar10 = (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>)
                 &this_00->Scopes;
      }
      pFVar9 = TMapBase<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>_>
               ::Find((TMapBase<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose,0>_>
                       *)((longlong)FVar10 + (longlong)((this_00->Scopes).ArrayNum + -1) * 0x1180),
                      this);
      if (pFVar9 != (FCachedPose *)0x0) goto LAB_1474d13de;
    }
  }
  lVar4 = param_1->_padding_;
  (this->EvaluationCounter).Counter = *(short *)(lVar4 + 0x5c0);
  (this->EvaluationCounter).LastSyncronizedFrame = *(ulong64 *)(lVar4 + 0x5b8);
  (this->EvaluationCounter).SkipFrames = *(short *)(lVar4 + 0x5c2);
  lVar4 = param_1->_padding_;
  local_40 = param_1->bExpectsAdditivePose != false;
  local_d8._8_8_ = 0;
  local_d8[0x10] = 1;
  local_d8._20_8_ = 0xffffffffffffffff;
  local_d8._32_8_ = 0;
  local_d8._40_8_ = 0;
  local_d8._48_8_ = 0;
  local_d8._56_8_ = 0;
  local_d8._64_8_ = 0;
  local_d8[0x48] = 0;
  local_d8._80_8_ = 0;
  pTStack_80 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_78 = 0;
  local_70 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_68 = 0;
  local_60 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_d8._0_8_ = lVar4;
  if (*(longlong *)(lVar4 + 0x660) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = *(FBoneContainer **)(lVar4 + 0x660);
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)(local_d8 + 0x20),pFVar5);
  FBlendedCurve::InitFrom((FBlendedCurve *)(local_d8 + 0x38),pFVar5);
  local_d8._20_8_ = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  FPoseLink::Evaluate(&this->Pose,(FPoseContext *)local_d8);
  pFVar9 = UE::Anim::FCachedPoseThreadContext::AddCachedPose
                     (this_00,this,(FCompactPose *)(local_d8 + 0x20),
                      (FBlendedCurve *)(local_d8 + 0x38),(FStackAttributeContainer *)&pTStack_80);
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_60,(int)local_58);
  if (local_60 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_60);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_70,(int)local_68);
  if (local_70 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_70);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_80,(int)local_78);
  if (pTStack_80 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTStack_80);
  }
LAB_1474d13de:
  if ((FCachedPose *)&param_1->Pose != pFVar9) {
    TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)&param_1->Pose,
               (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)pFVar9);
    *(undefined8 *)&(param_1->Pose).field_0x10 = *(undefined8 *)&(pFVar9->Pose).field_0x10;
  }
  TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
            ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)&param_1->Curve,
             (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)&pFVar9->Curve);
  (param_1->Curve).field_0x10 = (pFVar9->Curve).field_0x10;
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::CopyFrom
            ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             &param_1->CustomAttributes,
             (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             &pFVar9->Attributes);
  return;
}

// GatherDebugData @ 1474d53f0

void __thiscall
FAnimNode_SaveCachedPose::GatherDebugData(FAnimNode_SaveCachedPose *this,FNodeDebugData *param_1)

{
  longlong *plVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  FNodeDebugData *this_00;
  int iVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose,(UObject *)pUVar2,
                         L"AnimNode_SaveCachedPose");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FName::ToString(&this->CachePoseName,local_38);
  ::FString::PrintfImpl(&local_58,L"%s:");
  iVar3 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  this_00 = FNodeDebugData::GetCachePoseDebugData(param_1,this->GlobalWeight);
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  if (this_00 != (FNodeDebugData *)0x0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    FNodeDebugData::AddDebugItem(this_00,&local_58,false);
    plVar1 = *(longlong **)&this->Pose;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,this_00);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// Initialize_AnyThread @ 1474e98e0

void __thiscall
FAnimNode_SaveCachedPose::Initialize_AnyThread
          (FAnimNode_SaveCachedPose *this,FAnimationInitializeContext *param_1)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = (this->InitializationCounter).Counter;
  if (((sVar3 != -1) && ((this->InitializationCounter).LastSyncronizedFrame != 0xffffffffffffffff))
     && (lVar1 = *(longlong *)param_1, sVar3 == *(short *)(lVar1 + 0x590))) {
    sVar3 = (this->UpdateCounter).Counter;
    if (((sVar3 != -1) && ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
       (sVar3 != *(short *)(lVar1 + 0x5b0))) {
      sVar2 = (this->UpdateCounter).Counter + 1;
      sVar3 = 0;
      if (sVar2 != -1) {
        sVar3 = sVar2;
      }
      if (((sVar3 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
         (sVar3 != *(short *)(lVar1 + 0x5b0))) goto LAB_1474e994f;
    }
    return;
  }
LAB_1474e994f:
  lVar1 = *(longlong *)param_1;
  (this->InitializationCounter).Counter = *(short *)(lVar1 + 0x590);
  (this->InitializationCounter).LastSyncronizedFrame = *(ulong64 *)(lVar1 + 0x588);
  (this->InitializationCounter).SkipFrames = *(short *)(lVar1 + 0x592);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Pose,param_1);
  return;
}

// PostGraphUpdate @ 1474f0bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAnimNode_SaveCachedPose::PostGraphUpdate(FAnimNode_SaveCachedPose *this)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FCachedUpdateContext *pFVar6;
  code *pcVar7;
  bool bVar8;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar9;
  ForElementType<UE::Anim::FMessageStack> FVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  FMessageStack *this_00;
  longlong lVar16;
  ForElementType<UE::Anim::FMessageStack> FVar17;
  ForElementType<UE::Anim::FMessageStack> FVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_2d38 [32];
  FScopedAnimNodeTrace local_2ce0;
  ForElementType<UE::Anim::FMessageStack> *local_2cd8;
  code **local_2cd0;
  FMessageStack *local_2cc8;
  code *local_2cc0;
  ForElementType<UE::Anim::FMessageStack> **local_2cb8;
  code *local_2cb0;
  code ***local_2ca8;
  ForElementType<UE::Anim::FMessageStack> local_2ca0;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_2d38;
  iVar3 = (this->CachedUpdateContexts).ArrayNum;
  lVar13 = (longlong)iVar3;
  this->GlobalWeight = 0.0;
  if (0 < iVar3) {
    uVar14 = 1;
    uVar20 = 0;
    this->GlobalWeight = *(float *)((this->CachedUpdateContexts).AllocatorInstance.Data + 0x20);
    if (1 < lVar13) {
      lVar16 = 0x40;
      lVar19 = lVar13 + -1;
      uVar20 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar14 < (this->CachedUpdateContexts).ArrayNum) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar2 = *(float *)((this->CachedUpdateContexts).AllocatorInstance.Data + lVar16 + 0x20);
        if (this->GlobalWeight <= fVar2 && fVar2 != this->GlobalWeight) {
          this->GlobalWeight = fVar2;
          uVar20 = uVar14;
        }
        uVar14 = uVar14 + 1;
        lVar16 = lVar16 + 0x40;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    uVar15 = ~uVar20 >> 0x1f;
    uVar14 = 0;
    if ((int)uVar20 < (this->CachedUpdateContexts).ArrayNum) {
      uVar14 = uVar15;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar19 = (longlong)(int)uVar20 * 0x40;
    FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace
              (&local_2ce0,
               (FAnimationUpdateContext *)
               ((this->CachedUpdateContexts).AllocatorInstance.Data + lVar19));
    uVar14 = 0;
    if ((int)uVar20 < (this->CachedUpdateContexts).ArrayNum) {
      uVar14 = uVar15;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FPoseLinkBase::Update
              ((FPoseLinkBase *)&this->Pose,
               (FAnimationUpdateContext *)
               ((this->CachedUpdateContexts).AllocatorInstance.Data + lVar19));
    FAnimTrace::FScopedAnimNodeTrace::~FScopedAnimNodeTrace(&local_2ce0);
    uVar14 = 0;
    if ((int)uVar20 < (this->CachedUpdateContexts).ArrayNum) {
      uVar14 = uVar15;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = (this->CachedUpdateContexts).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar4 + lVar19 + 0x30) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_2cc8 = (FMessageStack *)(*(longlong *)(pFVar4 + lVar19 + 0x30) + 0x148);
    pTVar9 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)local_2cc8,UE::Anim::FCachedPoseSkippedUpdateHandler::TypeName);
    puVar11 = &pTVar9->field_0x8;
    if (pTVar9 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                   *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(puVar11 + 0x108) != 0)) {
      FVar18 = (ForElementType<UE::Anim::FMessageStack>)0x0;
      local_2ca0.SecondaryData = (ForElementType<UE::Anim::FMessageStack>)0x0;
      uVar14 = 0;
      local_38 = 0;
      local_34 = 4;
      if (0 < lVar13) {
        lVar16 = 0;
        lVar19 = 0;
        do {
          if (lVar16 != (int)uVar20) {
            uVar15 = 0;
            if ((int)uVar14 < (this->CachedUpdateContexts).ArrayNum) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               FVar18 = local_2ca0.SecondaryData, bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar4 = (this->CachedUpdateContexts).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar4 + lVar19 + 0x30) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), FVar18 = local_2ca0.SecondaryData, bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar5 = *(longlong *)(pFVar4 + lVar19 + 0x30);
            FVar17 = (ForElementType<UE::Anim::FMessageStack>)(lVar5 + 0x148);
            FVar10 = (ForElementType<UE::Anim::FMessageStack>)&local_2ca0;
            if (FVar18 != (ForElementType<UE::Anim::FMessageStack>)0x0) {
              FVar10 = FVar18;
            }
            if ((ulonglong)FVar10 <= (ulonglong)FVar17) {
              FVar10 = (ForElementType<UE::Anim::FMessageStack>)&local_2ca0;
              if (FVar18 != (ForElementType<UE::Anim::FMessageStack>)0x0) {
                FVar10 = FVar18;
              }
              if (((ulonglong)FVar17 < (ulonglong)((longlong)local_34 * 0xb18 + (longlong)FVar10))
                 && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), FVar18 = local_2ca0.SecondaryData, bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if (local_38 == local_34) {
              local_38 = UE::Core::Private::
                         ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack>_>
                                   (0xb18,8,&local_2ca0,&local_34);
              FVar18 = local_2ca0.SecondaryData;
            }
            lVar12 = (longlong)local_38;
            FVar10 = (ForElementType<UE::Anim::FMessageStack>)&local_2ca0;
            if (FVar18 != (ForElementType<UE::Anim::FMessageStack>)0x0) {
              FVar10 = FVar18;
            }
            local_38 = local_38 + 1;
            this_00 = (FMessageStack *)(lVar12 * 0xb18 + (longlong)FVar10);
            TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::
            TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      ((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                        *)this_00,
                       (TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                        *)FVar17);
            TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::
            TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      ((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                        *)&this_00->TagStacks,
                       (TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                        *)(lVar5 + 0xa98));
            FVar18 = local_2ca0.SecondaryData;
          }
          uVar14 = uVar14 + 1;
          lVar16 = lVar16 + 1;
          lVar19 = lVar19 + 0x40;
        } while (lVar16 < lVar13);
      }
      local_2cd8 = &local_2ca0;
      local_2cb8 = &local_2cd8;
      local_2cc0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FAnimNode_SaveCachedPose::PostGraphUpdate'::__l14::<lambda_1>,enum_UE::Anim::FMessageStack::EEnumerate,UE::Anim::FCachedPoseSkippedUpdateHandler_&>
                   ::Call;
      local_2cd0 = &local_2cc0;
      local_2ca8 = &local_2cd0;
      local_2cb0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::Anim::FMessageStack::ForEachMessage<UE::Anim::FCachedPoseSkippedUpdateHandler>'::__l2::<lambda_1>,enum_UE::Anim::FMessageStack::EEnumerate,UE::Anim::IGraphMessage_&>
                   ::Call;
      UE::Anim::FMessageStack::ForEachMessage
                (local_2cc8,UE::Anim::FCachedPoseSkippedUpdateHandler::TypeName,
                 (TFunctionRef<UE::Anim::FMessageStack::EEnumerate___cdecl(UE::Anim::IGraphMessage_&)>
                  *)&local_2cb0);
      FVar18 = (ForElementType<UE::Anim::FMessageStack>)&local_2ca0;
      if (local_2ca0.SecondaryData != (ForElementType<UE::Anim::FMessageStack>)0x0) {
        FVar18 = local_2ca0.SecondaryData;
      }
      DestructItems<UE::Anim::FMessageStack,int>((FMessageStack *)FVar18,local_38);
      if (local_2ca0.SecondaryData != (ForElementType<UE::Anim::FMessageStack>)0x0) {
        FMemory::Free((void *)local_2ca0.SecondaryData);
      }
    }
  }
  piVar1 = &(this->CachedUpdateContexts).ArrayMax;
  pFVar6 = (FCachedUpdateContext *)(this->CachedUpdateContexts).AllocatorInstance.Data;
  iVar3 = (this->CachedUpdateContexts).ArrayNum;
  if ((this->CachedUpdateContexts).ArrayMax < 0) {
    DestructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,int>(pFVar6,iVar3);
    (this->CachedUpdateContexts).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->CachedUpdateContexts).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,int>(pFVar6,iVar3);
    (this->CachedUpdateContexts).ArrayNum = 0;
  }
  return;
}

// Update_AnyThread @ 147501ff0

void __thiscall
FAnimNode_SaveCachedPose::Update_AnyThread
          (FAnimNode_SaveCachedPose *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FAnimNodeTracker *pFVar3;
  FAnimNodeTracker *this_00;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<FAnimationUpdateSharedContext,1> *pTVar11;
  FScriptContainerElement *pFVar12;
  FAnimationUpdateSharedContext *local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<FAnimationUpdateSharedContext,1> local_58;
  longlong local_48;
  undefined8 uStack_40;
  
  iVar10 = (this->CachedUpdateContexts).ArrayNum;
  piVar1 = &(this->CachedUpdateContexts).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&(this->CachedUpdateContexts).AllocatorInstance,piVar1);
  }
  (this->CachedUpdateContexts).ArrayNum = iVar10 + 1;
  pFVar12 = (this->CachedUpdateContexts).AllocatorInstance.Data + (longlong)iVar10 * 0x40;
  DefaultConstructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,int>(pFVar12,1);
  pFVar3 = (FAnimNodeTracker *)param_1->_padding_;
  if (pFVar3 != (FAnimNodeTracker *)0x0) {
    pTVar11 = MakeShared<FAnimationUpdateSharedContext,1>(&local_58);
    local_60.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_68 = pTVar11->Object;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar2 = pFVar12 + 0x30;
    if (pFVar2 != (FScriptContainerElement *)&local_68) {
      *(FAnimationUpdateSharedContext **)pFVar2 = local_68;
      local_68 = (FAnimationUpdateSharedContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar12 + 0x38),&local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = *(FAnimNodeTracker **)pFVar2;
    FAnimNodeTracker::CopyTopsOnly(this_00,pFVar3);
    UE::Anim::FMessageStack::CopyForCachedUpdate
              ((FMessageStack *)(this_00 + 1),(FMessageStack *)(pFVar3 + 1));
  }
  local_48 = param_1->_padding_;
  uStack_40 = *(undefined8 *)(pFVar12 + 0x30);
  lVar5 = param_1->_padding_;
  lVar6 = param_1->_padding_;
  uVar7 = *(undefined8 *)&param_1->CurrentWeight;
  uVar8 = *(undefined8 *)&param_1->DeltaTime;
  *(longlong *)pFVar12 = local_48;
  *(undefined8 *)(pFVar12 + 8) = uStack_40;
  *(longlong *)(pFVar12 + 0x10) = lVar5;
  *(longlong *)(pFVar12 + 0x18) = lVar6;
  *(undefined8 *)(pFVar12 + 0x20) = uVar7;
  *(undefined8 *)(pFVar12 + 0x28) = uVar8;
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             &this->CachePoseName);
  return;
}

