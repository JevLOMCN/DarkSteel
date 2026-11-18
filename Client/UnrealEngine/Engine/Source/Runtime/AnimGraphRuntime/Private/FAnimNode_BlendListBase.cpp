// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 19

// StaticStruct @ 1463df220

UScriptStruct * __cdecl FAnimNode_BlendListBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar1,
                         L"AnimNode_BlendListBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton;
}

// Initialize_AnyThread @ 1463e22c0

void __thiscall
FAnimNode_BlendListBase::Initialize_AnyThread
          (FAnimNode_BlendListBase *this,FAnimationInitializeContext *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendListBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  uVar3 = (this->BlendPose).ArrayNum;
  GetBlendTimes(this);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->PerBlendData).ArrayNum;
  piVar2 = &(this->PerBlendData).ArrayMax;
  *piVar1 = 0;
  if ((this->PerBlendData).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar3,&(this->PerBlendData).AllocatorInstance,0,piVar2);
  }
  if (0 < (int)uVar3) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,uVar3,&(this->PerBlendData).AllocatorInstance,piVar1,piVar2);
    memset((this->PerBlendData).AllocatorInstance.Data + (longlong)iVar6 * 0x40,0,
           (longlong)(int)uVar3 << 6);
    if (*piVar1 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = 0;
    lVar9 = 0;
    *(undefined4 *)((this->PerBlendData).AllocatorInstance.Data + 0x30) = 0x3f800000;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->BlendPose).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FPoseLinkBase::Initialize
                ((FPoseLinkBase *)((this->BlendPose).AllocatorInstance.Data + lVar9),param_1);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (int)uVar3);
  }
  Initialize(this);
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 1463e2470

void __thiscall
FAnimNode_BlendListBase::CacheBones_AnyThread
          (FAnimNode_BlendListBase *this,FAnimationCacheBonesContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendListBase::CacheBones_AnyThread");
  uVar4 = 0;
  if (0 < (this->BlendPose).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->BlendPose).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FPoseLinkBase::CacheBones
                ((FPoseLinkBase *)
                 ((this->BlendPose).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10),param_1);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->BlendPose).ArrayNum);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 1463e2520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_BlendListBase::Update_AnyThread
          (FAnimNode_BlendListBase *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  float fVar2;
  TObjectPtr<UBlendProfile_const_>_u_0 TVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  EBlendListChildUpdateMode EVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  FExposedValueHandler *this_00;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar19;
  UBlendProfile *pUVar20;
  UPackage *pUVar21;
  FNodeDataId *pFVar22;
  char *pcVar23;
  IInertializationRequester *pIVar24;
  TReferenceControllerBase<1> *pTVar25;
  FScopedGraphMessage *this_01;
  FAnimationUpdateContext *pFVar26;
  uint uVar27;
  TReferenceControllerBase<1> *pTVar28;
  TReferenceControllerBase<1> *pTVar29;
  TReferenceControllerBase<1> *pTVar30;
  uint uVar31;
  TReferenceControllerBase<1> *pTVar32;
  FAlphaBlend *pFVar33;
  FName FVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  uint uVar38;
  FBlendSampleData *pFVar39;
  FNameEntryId FVar40;
  float fVar41;
  float fVar42;
  longlong local_res8;
  TReferenceControllerBase<1> *local_res20;
  longlong local_2f8;
  FNodeDataId local_2e8;
  TSharedRef<UE::Anim::IGraphMessage,1> local_2d8;
  TSharedRef<UE::Anim::IGraphMessage,1> local_2c8;
  FAnimationBaseContext local_2b8;
  float local_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  FAnimationBaseContext local_288;
  float local_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  FScopedGraphMessage local_258;
  char local_248;
  FScopedGraphMessage local_240;
  char local_230;
  FInertializationRequest local_228;
  FAnimationUpdateContext local_1c8;
  FAnimationUpdateContext local_198;
  FAnimationUpdateContext local_168;
  FNodeDataId local_138;
  FAnimationUpdateContext local_128;
  FAnimationUpdateContext local_f8;
  FAnimationBaseContext local_c8 [3];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendListBase::Update_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  iVar17 = (this->BlendPose).ArrayNum;
  pTVar19 = GetBlendTimes(this);
  pTVar30 = (TReferenceControllerBase<1> *)0x0;
  cVar10 = '\0';
  local_res8._0_1_ = '\0';
  if (iVar17 < 1) goto LAB_1463e34b5;
  uVar16 = (**(code **)(this->_padding_ + 0xa8))(this);
  fVar12 = __real_3f800000;
  fVar11 = __real_3727c5ac;
  fVar42 = 0.0;
  pTVar28 = (TReferenceControllerBase<1> *)(longlong)(int)uVar16;
  uVar37 = 0;
  uVar27 = 0;
  uVar18 = 0;
  if (uVar16 != this->LastActiveChildIndex) {
    pUVar20 = (UBlendProfile *)(**(code **)(this->_padding_ + 0xa0))(this);
    this->CurrentBlendProfile = pUVar20;
    if ((pUVar20 != (UBlendProfile *)0x0) && ((this->PerBoneSampleData).ArrayNum == 0)) {
      InitializePerBoneData(this);
    }
    iVar17 = this->LastActiveChildIndex;
    uVar38 = ~uVar16 >> 0x1f;
    uVar35 = uVar37;
    if ((int)uVar16 < (this->PerBlendData).ArrayNum) {
      uVar35 = uVar38;
    }
    if ((uVar35 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar1 = *(float *)((this->PerBlendData).AllocatorInstance.Data + (longlong)pTVar28 * 0x40 + 0x30
                      );
    fVar41 = (float)((uint)(fVar12 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar12 <= fVar41) {
      fVar41 = fVar12;
    }
    if (fVar41 <= 0.0) {
      fVar41 = 0.0;
    }
    local_res8._0_1_ = cVar10;
    if (iVar17 == -1) {
      fVar41 = 0.0;
    }
    else {
      if (CachedId_TransitionType.Index == -1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          ::FName::FName(&AnimName_TransitionType,"TransitionType");
          _Init_thread_footer(&::_TSS1);
        }
        if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar21 = Z_Construct_UPackage__Script_AnimGraphRuntime();
          Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar21,
                               L"AnimNode_BlendListBase");
        }
        pFVar22 = UE::Anim::FNodeDataId::FNodeDataId
                            (&local_138,AnimName_TransitionType,(FAnimNode_Base *)this,
                             Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.
                             OuterSingleton);
        CachedId_TransitionType.Id = pFVar22->Id;
        FVar40 = CachedId_TransitionType.Id.ComparisonIndex.Value;
        uVar35 = CachedId_TransitionType.Id.Number;
        CachedId_TransitionType.Index = pFVar22->Index;
      }
      else {
        FVar40 = CachedId_TransitionType.Id.ComparisonIndex.Value;
        uVar35 = CachedId_TransitionType.Id.Number;
      }
      iVar13 = CachedId_TransitionType.Index;
      FVar34.Number = uVar35;
      FVar34.ComparisonIndex.Value = FVar40.Value;
      if ((this->_padding_ == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("NodeData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                              ,0x3e1,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_2e8.Id = FVar34;
      local_2e8.Index = iVar13;
      pcVar23 = FAnimNodeData::GetData
                          ((FAnimNodeData *)this->_padding_,&local_2e8,(FAnimNode_Base *)this,
                           (UObject *)0x0);
      if (*pcVar23 == '\x01') {
        pIVar24 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                            ((FAnimationBaseContext *)param_1);
        if (pIVar24 == (IInertializationRequester *)0x0) {
          uVar35 = uVar27;
          if ((int)uVar16 < (this->BlendPose).ArrayNum) {
            uVar35 = uVar38;
          }
          if ((uVar35 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FAnimNode_Inertialization::LogRequestError
                    (param_1,(FPoseLinkBase *)
                             ((this->BlendPose).AllocatorInstance.Data + (longlong)pTVar28 * 0x10));
        }
        else {
          FInertializationRequest::FInertializationRequest(&local_228);
          uVar35 = uVar37;
          if ((int)uVar16 < pTVar19->ArrayNum) {
            uVar35 = uVar38;
          }
          if ((uVar35 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_228.Duration = *(float *)((pTVar19->AllocatorInstance).Data + (longlong)pTVar28 * 4)
          ;
          TVar3 = (TObjectPtr<UBlendProfile_const_>_u_0)this->CurrentBlendProfile;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar3.DebugPtr != (UBlendProfile *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
          }
          local_228.bUseBlendMode = true;
          local_228.BlendProfile.field0_0x0 = TVar3;
          local_228.BlendMode = GetBlendType(this);
          local_228.CustomBlendCurve.field0_0x0 =
               (TObjectPtr<UCurveFloat>_u_0)GetCustomBlendCurve(this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_228.CustomBlendCurve.field0_0x0.DebugPtr != (TObjectPtr<UCurveFloat>_u_0)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_228.CustomBlendCurve.field0_0x0);
          }
          local_228.NodeId = *(int *)((longlong)&param_1->_padding_ + 4);
          TVar4 = (TObjectPtr<UObject>_u_0)
                  ((TObjectPtr<UObject>_u_0 *)(param_1->_padding_ + 0x140))->DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar4.DebugPtr != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(TVar4.DebugPtr);
          }
          local_228.AnimInstance.field0_0x0 = TVar4;
          (**(code **)((longlong)*pIVar24 + 0x20))(pIVar24,&local_228);
          (**(code **)((longlong)*pIVar24 + 0x30))
                    (pIVar24,param_1->_padding_,*(undefined4 *)((longlong)&param_1->_padding_ + 4));
          cVar10 = '\x01';
          if (local_228.DescriptionString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.DescriptionString.Data.AllocatorInstance.Data);
          }
          if (local_228.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_228.Description_DEPRECATED.TextData.Reference + 0x10))();
            fVar41 = 0.0;
            local_res8._0_1_ = cVar10;
            goto LAB_1463e29ae;
          }
        }
        fVar41 = 0.0;
        local_res8._0_1_ = cVar10;
      }
      else {
        uVar35 = uVar27;
        if ((int)uVar16 < pTVar19->ArrayNum) {
          uVar35 = uVar38;
        }
        if ((uVar35 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar41 = fVar41 * *(float *)((pTVar19->AllocatorInstance).Data + (longlong)pTVar28 * 4);
      }
    }
LAB_1463e29ae:
    pTVar29 = pTVar30;
    pTVar32 = pTVar30;
    if (0 < (this->PerBlendData).ArrayNum) {
      do {
        uVar31 = (uint)pTVar29;
        uVar35 = uVar37;
        if ((int)uVar31 < (this->PerBlendData).ArrayNum) {
          uVar35 = ~uVar31 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(float *)((longlong)&pTVar32[3]._padding_ +
                  (longlong)((this->PerBlendData).AllocatorInstance.Data + 4)) = fVar41;
        pTVar29 = (TReferenceControllerBase<1> *)(ulonglong)(uVar31 + 1);
        pTVar32 = pTVar32 + 4;
      } while ((int)(uVar31 + 1) < (this->PerBlendData).ArrayNum);
    }
    if ((fVar41 == 0.0) && (iVar17 != -1)) {
      uVar37 = this->LastActiveChildIndex;
      uVar35 = uVar27;
      if ((int)uVar37 < (this->BlendPose).ArrayNum) {
        uVar35 = ~uVar37 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_1c8._padding_ = param_1->_padding_;
      local_1c8._padding_ = param_1->_padding_;
      local_1c8._padding_ = param_1->_padding_;
      local_1c8._padding_ = param_1->_padding_;
      uVar7._0_4_ = param_1->CurrentWeight;
      uVar7._4_4_ = param_1->RootMotionWeightModifier;
      local_1c8.DeltaTime = param_1->DeltaTime;
      local_1c8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
      local_1c8._32_8_ = uVar7 & 0xffffffff00000000;
      FPoseLinkBase::Update
                ((FPoseLinkBase *)
                 ((this->BlendPose).AllocatorInstance.Data + (longlong)(int)uVar37 * 0x10),
                 &local_1c8);
    }
    pTVar29 = pTVar30;
    pTVar32 = pTVar30;
    pTVar25 = pTVar30;
    if (0 < (this->PerBlendData).ArrayNum) {
      do {
        uVar35 = (uint)pTVar29;
        uVar31 = ~uVar35 >> 0x1f;
        uVar37 = uVar27;
        if ((int)uVar35 < (this->PerBlendData).ArrayNum) {
          uVar37 = uVar31;
        }
        if ((uVar37 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar33 = (FAlphaBlend *)
                  ((longlong)&pTVar25->_padding_ +
                  (longlong)(this->PerBlendData).AllocatorInstance.Data);
        FAlphaBlend::SetBlendTime(pFVar33,fVar41);
        iVar17 = (this->PerBlendData).ArrayNum;
        if (pTVar32 == pTVar28) {
          uVar37 = uVar27;
          if ((int)uVar35 < iVar17) {
            uVar37 = uVar31;
          }
          if ((uVar37 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FAlphaBlend::SetValueRange
                    (pFVar33,*(float *)((longlong)&pTVar25[3]._padding_ +
                                       (longlong)(this->PerBlendData).AllocatorInstance.Data),fVar12
                    );
          if (this->CurrentBlendProfile != (UBlendProfile *)0x0) {
            FAlphaBlend::ResetAlpha(pFVar33);
            fVar2 = pFVar33->AlphaLerp;
            uVar37 = uVar18;
            if ((int)uVar35 < (this->PerBlendData).ArrayNum) {
              uVar37 = uVar31;
            }
            if ((uVar37 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)((this->PerBlendData).AllocatorInstance.Data +
                      (longlong)&pTVar25[3].SharedReferenceCount.field_0x0) = fVar2;
            goto LAB_1463e2c52;
          }
        }
        else {
          uVar37 = uVar18;
          if ((int)uVar35 < iVar17) {
            uVar37 = uVar31;
          }
          if ((uVar37 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FAlphaBlend::SetValueRange
                    (pFVar33,*(float *)((longlong)&pTVar25[3]._padding_ +
                                       (longlong)(this->PerBlendData).AllocatorInstance.Data),0.0);
LAB_1463e2c52:
          if (this->CurrentBlendProfile != (UBlendProfile *)0x0) {
            fVar2 = pFVar33->AlphaLerp;
            uVar37 = uVar18;
            if ((int)uVar35 < (this->PerBlendData).ArrayNum) {
              uVar37 = uVar31;
            }
            if ((uVar37 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)((this->PerBlendData).AllocatorInstance.Data +
                      (longlong)&pTVar25[3].SharedReferenceCount.field_0x0) = fVar2;
          }
        }
        pTVar29 = (TReferenceControllerBase<1> *)(ulonglong)(uVar35 + 1);
        pTVar32 = (TReferenceControllerBase<1> *)((longlong)&pTVar32->_padding_ + 1);
        pTVar25 = pTVar25 + 4;
      } while ((int)(uVar35 + 1) < (this->PerBlendData).ArrayNum);
    }
    EVar15 = GetChildUpdateMode(this);
    if ((EVar15 == ResetChildOnActivate) && (fVar1 <= fVar11)) {
      FAnimationBaseContext::FAnimationBaseContext
                (local_c8,(FAnimInstanceProxy *)param_1->_padding_,
                 (FAnimationUpdateSharedContext *)param_1->_padding_);
      uVar37 = uVar18;
      if ((int)uVar16 < (this->BlendPose).ArrayNum) {
        uVar37 = uVar38;
      }
      if ((uVar37 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FPoseLinkBase::Initialize
                ((FPoseLinkBase *)
                 ((this->BlendPose).AllocatorInstance.Data + (longlong)pTVar28 * 0x10),
                 (FAnimationInitializeContext *)local_c8);
    }
    this->LastActiveChildIndex = uVar16;
  }
  pTVar29 = pTVar30;
  pTVar32 = pTVar30;
  if (0 < (this->PerBlendData).ArrayNum) {
    do {
      uVar35 = (uint)pTVar29;
      uVar37 = uVar27;
      if ((int)uVar35 < (this->PerBlendData).ArrayNum) {
        uVar37 = ~uVar35 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->PerBlendData).AllocatorInstance.Data;
      uVar37 = uVar27;
      if ((int)uVar35 < (this->PerBlendData).ArrayNum) {
        uVar37 = ~uVar35 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar33 = (FAlphaBlend *)
                ((longlong)&pTVar32->_padding_ +
                (longlong)(this->PerBlendData).AllocatorInstance.Data);
      FAlphaBlend::Update(pFVar33,param_1->DeltaTime);
      fVar1 = pFVar33->BlendedValue;
      *(float *)((longlong)&pTVar32[3]._padding_ + (longlong)pFVar5) = fVar1;
      fVar42 = fVar42 + fVar1;
      iVar17 = (this->PerBlendData).ArrayNum;
      pTVar29 = (TReferenceControllerBase<1> *)(ulonglong)(uVar35 + 1);
      pTVar32 = pTVar32 + 4;
    } while ((int)(uVar35 + 1) < iVar17);
    if (((fVar11 < fVar42) &&
        (fVar11 < (float)((uint)(fVar42 - fVar12) & __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
       (pTVar29 = pTVar30, pTVar32 = pTVar30, 0 < iVar17)) {
      do {
        uVar35 = (uint)pTVar29;
        uVar37 = uVar18;
        if ((int)uVar35 < (this->PerBlendData).ArrayNum) {
          uVar37 = ~uVar35 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->PerBlendData).AllocatorInstance.Data;
        *(float *)((longlong)&pTVar32[3]._padding_ + (longlong)pFVar5) =
             (fVar12 / fVar42) * *(float *)((longlong)&pTVar32[3]._padding_ + (longlong)pFVar5);
        pTVar29 = (TReferenceControllerBase<1> *)(ulonglong)(uVar35 + 1);
        pTVar32 = pTVar32 + 4;
      } while ((int)(uVar35 + 1) < (this->PerBlendData).ArrayNum);
    }
  }
  fVar12 = __real_37a7c5ac;
  pTVar32 = _UNK_150651568;
  pTVar29 = ___xmm_00000000000000000000000000000010;
  iVar17 = (this->BlendPose).ArrayNum;
  if (0 < iVar17) {
    local_res20 = (TReferenceControllerBase<1> *)0x0;
    local_2f8 = 0;
    pTVar25 = pTVar30;
    do {
      uVar38 = (uint)pTVar25;
      uVar35 = ~uVar38 >> 0x1f;
      uVar37 = uVar18;
      if ((int)uVar38 < (this->PerBlendData).ArrayNum) {
        uVar37 = uVar35;
      }
      if ((uVar37 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar42 = *(float *)((this->PerBlendData).AllocatorInstance.Data + local_2f8 + 0x30);
      if (fVar42 <= fVar11) {
        EVar15 = GetChildUpdateMode(this);
        if (EVar15 == AlwaysTickChildren) {
          local_288._16_8_ = param_1->_padding_;
          local_288._24_8_ = param_1->_padding_;
          local_288.AnimInstanceProxy = (FAnimInstanceProxy *)param_1->_padding_;
          local_288.SharedContext = (FAnimationUpdateSharedContext *)param_1->_padding_;
          uVar9 = param_1->RootMotionWeightModifier;
          fStack_260 = param_1->DeltaTime;
          uStack_25c = *(undefined4 *)&param_1->field_0x2c;
          fStack_264 = (float)uVar9;
          local_268 = param_1->CurrentWeight * fVar12;
          UE::Anim::FScopedGraphMessage::FScopedGraphMessage(&local_240,&local_288);
          local_230 = (char)local_res8;
          if ((char)local_res8 != '\0') {
            pTVar25 = ::operator_new(0x18);
            if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
              local_2c8.Object = (IGraphMessage *)pTVar29;
              local_2c8.SharedReferenceCount.ReferenceController = pTVar32;
              pTVar25 = pTVar30;
              FVar34 = UE::Anim::FAnimInertializationSyncScope::TypeName;
            }
            else {
              pTVar25->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFAnimInertializationSyncScope_Anim_UE___00_SharedPointerInternals__6B_
              ;
              pTVar25->SharedReferenceCount = (atomic<int>)0x1;
              pTVar25->WeakReferenceCount = (atomic<int>)0x1;
              pTVar25[1]._padding_ = (longlong)&___7FAnimInertializationSyncScope_Anim_UE__6B_;
              if ((pTVar25 + 1 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar34 = UE::Anim::FAnimInertializationSyncScope::TypeName;
              LOCK();
              pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
              UNLOCK();
              local_2c8.Object = (IGraphMessage *)(pTVar25 + 1);
              local_2c8.SharedReferenceCount.ReferenceController = pTVar25;
            }
            UE::Anim::FScopedGraphMessage::PushMessage(&local_240,&local_288,&local_2c8,FVar34);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar25);
          }
          uVar37 = uVar27;
          if ((int)uVar38 < (this->BlendPose).ArrayNum) {
            uVar37 = uVar35;
          }
          if ((uVar37 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_res20 == pTVar28) {
            local_f8._padding_ = (longlong)local_288.AnimInstanceProxy;
            local_f8._padding_ = (longlong)local_288.SharedContext;
            pFVar26 = &local_f8;
            local_f8._padding_._0_1_ = local_288.bIsActive;
            local_f8._padding_._1_3_ = local_288._17_3_;
            local_f8._padding_._4_4_ = local_288.CurrentNodeId;
            local_f8._padding_ = local_288._24_8_;
            local_f8.CurrentWeight = local_268;
            local_f8.RootMotionWeightModifier = fStack_264;
            local_f8.DeltaTime = fStack_260;
            local_f8._44_4_ = uStack_25c;
          }
          else {
            local_168._padding_ = (longlong)local_288.AnimInstanceProxy;
            local_168._padding_ = (longlong)local_288.SharedContext;
            pFVar26 = &local_168;
            local_168._padding_ = local_288._24_8_;
            local_168._padding_ = local_288._16_8_ & 0xffffffffffffff00;
            local_168.CurrentWeight = local_268;
            local_168.RootMotionWeightModifier = fStack_264;
            local_168.DeltaTime = fStack_260;
            local_168._44_4_ = uStack_25c;
          }
          FPoseLinkBase::Update
                    ((FPoseLinkBase *)
                     ((this->BlendPose).AllocatorInstance.Data + (longlong)(int)uVar38 * 0x10),
                     pFVar26);
          if (local_230 != '\0') {
            this_01 = &local_240;
            goto LAB_1463e333f;
          }
        }
      }
      else {
        local_2b8.AnimInstanceProxy = (FAnimInstanceProxy *)param_1->_padding_;
        local_2b8.SharedContext = (FAnimationUpdateSharedContext *)param_1->_padding_;
        local_2b8._16_8_ = param_1->_padding_;
        local_2b8._24_8_ = param_1->_padding_;
        uVar8 = param_1->RootMotionWeightModifier;
        fStack_290 = param_1->DeltaTime;
        uStack_28c = *(undefined4 *)&param_1->field_0x2c;
        fStack_294 = (float)uVar8;
        local_298 = fVar42 * param_1->CurrentWeight;
        UE::Anim::FScopedGraphMessage::FScopedGraphMessage(&local_258,&local_2b8);
        local_248 = (char)local_res8;
        if ((char)local_res8 != '\0') {
          pTVar25 = ::operator_new(0x18);
          if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
            local_2d8.Object = (IGraphMessage *)pTVar29;
            local_2d8.SharedReferenceCount.ReferenceController = pTVar32;
            pTVar25 = pTVar30;
            FVar34 = UE::Anim::FAnimInertializationSyncScope::TypeName;
          }
          else {
            pTVar25->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFAnimInertializationSyncScope_Anim_UE___00_SharedPointerInternals__6B_
            ;
            pTVar25->SharedReferenceCount = (atomic<int>)0x1;
            pTVar25->WeakReferenceCount = (atomic<int>)0x1;
            pTVar25[1]._padding_ = (longlong)&___7FAnimInertializationSyncScope_Anim_UE__6B_;
            if ((pTVar25 + 1 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar34 = UE::Anim::FAnimInertializationSyncScope::TypeName;
            LOCK();
            pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
            UNLOCK();
            local_2d8.Object = (IGraphMessage *)(pTVar25 + 1);
            local_2d8.SharedReferenceCount.ReferenceController = pTVar25;
          }
          UE::Anim::FScopedGraphMessage::PushMessage(&local_258,&local_2b8,&local_2d8,FVar34);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
        }
        uVar37 = uVar27;
        if ((int)uVar38 < (this->BlendPose).ArrayNum) {
          uVar37 = uVar35;
        }
        if ((uVar37 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_res20 == pTVar28) {
          local_128._padding_ = (longlong)local_2b8.AnimInstanceProxy;
          local_128._padding_ = (longlong)local_2b8.SharedContext;
          pFVar26 = &local_128;
          local_128._padding_._0_1_ = local_2b8.bIsActive;
          local_128._padding_._1_3_ = local_2b8._17_3_;
          local_128._padding_._4_4_ = local_2b8.CurrentNodeId;
          local_128._padding_ = local_2b8._24_8_;
          local_128.CurrentWeight = local_298;
          local_128.RootMotionWeightModifier = fStack_294;
          local_128.DeltaTime = fStack_290;
          local_128._44_4_ = uStack_28c;
        }
        else {
          local_198._padding_ = (longlong)local_2b8.AnimInstanceProxy;
          local_198._padding_ = (longlong)local_2b8.SharedContext;
          pFVar26 = &local_198;
          local_198._padding_ = local_2b8._24_8_;
          local_198._padding_ = local_2b8._16_8_ & 0xffffffffffffff00;
          local_198.CurrentWeight = local_298;
          local_198.RootMotionWeightModifier = fStack_294;
          local_198.DeltaTime = fStack_290;
          local_198._44_4_ = uStack_28c;
        }
        FPoseLinkBase::Update
                  ((FPoseLinkBase *)
                   ((this->BlendPose).AllocatorInstance.Data + (longlong)(int)uVar38 * 0x10),pFVar26
                  );
        if (local_248 != '\0') {
          this_01 = &local_258;
LAB_1463e333f:
          UE::Anim::FScopedGraphMessage::PopMessage(this_01);
        }
      }
      iVar17 = (this->BlendPose).ArrayNum;
      local_res20 = (TReferenceControllerBase<1> *)((longlong)&local_res20->_padding_ + 1);
      local_2f8 = local_2f8 + 0x40;
      pTVar25 = (TReferenceControllerBase<1> *)(ulonglong)(uVar38 + 1);
    } while ((int)(uVar38 + 1) < iVar17);
  }
  if (this->CurrentBlendProfile != (UBlendProfile *)0x0) {
    if (0 < iVar17) {
      local_res8 = 0;
      lVar36 = 0;
      do {
        uVar27 = (uint)pTVar30;
        uVar18 = 0;
        if ((int)uVar27 < (this->PerBoneSampleData).ArrayNum) {
          uVar18 = ~uVar27 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar39 = (FBlendSampleData *)((this->PerBoneSampleData).AllocatorInstance.Data + lVar36);
        uVar18 = 0;
        if ((int)uVar27 < (this->PerBlendData).ArrayNum) {
          uVar18 = ~uVar27 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar33 = (FAlphaBlend *)((this->PerBlendData).AllocatorInstance.Data + local_res8);
        pFVar39->TotalWeight = *(float *)&pFVar33[1].CustomCurve.field0_0x0;
        UBlendProfile::UpdateBoneWeights
                  (this->CurrentBlendProfile,pFVar39,pFVar33,pFVar33[1].BlendTime,
                   *(float *)&pFVar33[1].CustomCurve.field0_0x0,
                   this->CurrentBlendProfile->Mode == WeightFactor && uVar16 != uVar27);
        local_res8 = local_res8 + 0x40;
        pTVar30 = (TReferenceControllerBase<1> *)(ulonglong)(uVar27 + 1);
        lVar36 = lVar36 + 0x60;
      } while ((int)(uVar27 + 1) < (this->BlendPose).ArrayNum);
    }
    FBlendSampleData::NormalizeDataWeight(&this->PerBoneSampleData);
  }
LAB_1463e34b5:
  uVar18 = (**(code **)(this->_padding_ + 0xa8))(this);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Active Index",uVar18);
  uVar16 = 0;
  if ((int)uVar18 < (this->PerBlendData).ArrayNum) {
    uVar16 = ~uVar18 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Active Weight",
             *(float *)((this->PerBlendData).AllocatorInstance.Data +
                       (longlong)(int)uVar18 * 0x40 + 0x30));
  uVar16 = 0;
  if ((int)uVar18 < pTVar19->ArrayNum) {
    uVar16 = ~uVar18 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Active Blend Time",
             *(float *)((pTVar19->AllocatorInstance).Data + (longlong)(int)uVar18 * 4));
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 1463e3660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_BlendListBase::Evaluate_AnyThread(FAnimNode_BlendListBase *this,FPoseContext *param_1)

{
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **ppTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  USkeleton *pUVar4;
  code *pcVar5;
  bool bVar6;
  float fVar7;
  FPoseContext *pFVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph> FVar17;
  ForElementType<float> FVar18;
  ForElementType<int> FVar19;
  USkeleton *pUVar20;
  FSkeletonRemappingRegistry *this_00;
  FSkeletonRemapping *this_01;
  FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph_WorkerThread> *this_02;
  ForElementType<FBlendedCurve> FVar21;
  ForElementType<UE::Anim::FStackAttributeContainer> FVar22;
  ForElementType<FCompactPose> FVar23;
  undefined8 *puVar24;
  FName FVar25;
  uint uVar26;
  ForElementType<float> FVar27;
  TArray<int,TSizedDefaultAllocator<32>_> **ppTVar28;
  TArray<int,TSizedDefaultAllocator<32>_> **ppTVar29;
  IInterpolationIndexProvider *pIVar30;
  wchar_t *pwVar31;
  IInterpolationIndexProvider *pIVar32;
  uint uVar33;
  IInterpolationIndexProvider *pIVar34;
  undefined1 auStackY_7f8 [32];
  uint local_794;
  FName local_790;
  undefined1 local_788 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_730;
  undefined8 local_728;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_720;
  undefined8 local_718;
  TArray<int,TSizedDefaultAllocator<32>_> *local_710;
  undefined8 local_708;
  TArray<int,TSizedDefaultAllocator<32>_> *local_700;
  undefined8 local_6f8;
  bool local_6f0;
  FColor_u_0 local_6e8 [2];
  longlong local_6e0;
  longlong local_6d8;
  FName local_6d0;
  FName local_6c8;
  FPoseContext *local_6c0;
  FName local_6b8;
  ForElementType<FCompactPose> local_6a8;
  int iStack_6a0;
  undefined4 uStack_69c;
  ForElementType<int> local_698;
  int iStack_690;
  undefined4 uStack_68c;
  FBlendSampleData *local_688;
  int iStack_680;
  undefined4 uStack_67c;
  ForElementType<UE::Anim::FStackAttributeContainer> local_678;
  int iStack_670;
  undefined4 uStack_66c;
  ForElementType<FBlendedCurve> local_668;
  int iStack_660;
  undefined4 uStack_65c;
  ForElementType<FCompactPose> local_658;
  int iStack_650;
  undefined4 uStack_64c;
  ForElementType<int> local_648;
  int iStack_640;
  undefined4 uStack_63c;
  FBlendSampleData *local_638;
  int iStack_630;
  undefined4 uStack_62c;
  ForElementType<UE::Anim::FStackAttributeContainer> local_628;
  int iStack_620;
  undefined4 uStack_61c;
  ForElementType<FBlendedCurve> local_618;
  int iStack_610;
  undefined4 uStack_60c;
  ForElementType<FCompactPose> local_608;
  int iStack_600;
  undefined4 uStack_5fc;
  ForElementType<int> local_5f8;
  int iStack_5f0;
  undefined4 uStack_5ec;
  ForElementType<float> local_5e8;
  uint uStack_5e0;
  undefined4 uStack_5dc;
  ForElementType<UE::Anim::FStackAttributeContainer> local_5d8;
  int iStack_5d0;
  undefined4 uStack_5cc;
  ForElementType<FBlendedCurve> local_5c8;
  int iStack_5c0;
  undefined4 uStack_5bc;
  FAnimationPoseData local_5b8;
  FName local_5a0;
  TArrayView<int_const_,int> local_598;
  TArrayView<FBlendSampleData_const_,int> local_588;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_578;
  TArrayView<FBlendedCurve_const_,int> local_568;
  TArrayView<FCompactPose_const_,int> local_558;
  TArrayView<int_const_,int> local_548;
  TArrayView<FBlendSampleData_const_,int> local_538;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_528;
  TArrayView<FBlendedCurve_const_,int> local_518;
  TArrayView<int_const_,int> local_508;
  TArrayView<float_const_,int> local_4f8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_4e8;
  TArrayView<FBlendedCurve_const_,int> local_4d8;
  TArrayView<FCompactPose_const_,int> local_4c8;
  TArrayView<FCompactPose_const_,int> local_4b8;
  FName local_4a8;
  ForElementType<int> local_4a0;
  int local_478;
  int local_474;
  ForElementType<float> local_470;
  uint local_448;
  uint local_444;
  TArray<FCompactPose,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_440;
  TArray<FBlendedCurve,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_370;
  TArray<UE::Anim::FStackAttributeContainer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_260;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  local_6c0 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendListBase::Evaluate_AnyThread");
  bVar10 = IsInGameThread();
  pIVar34 = (IInterpolationIndexProvider *)0x0;
  if (bVar10) {
    FVar17 = StatPtr_STAT_BlendPosesInGraph;
    if (StatPtr_STAT_BlendPosesInGraph == (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph>)0x0)
    {
      pFVar16 = ::FName::FName(&local_4a8,"STAT_BlendPosesInGraph");
      pwVar31 = L"BlendPosesInGraph";
      this_02 = (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph_WorkerThread> *)
                &StatPtr_STAT_BlendPosesInGraph;
      goto LAB_1463e378c;
    }
  }
  else {
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph>)
             StatPtr_STAT_BlendPosesInGraph_WorkerThread;
    if (StatPtr_STAT_BlendPosesInGraph_WorkerThread ==
        (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph_WorkerThread>)0x0) {
      pFVar16 = ::FName::FName(&local_5a0,"STAT_BlendPosesInGraph_WorkerThread");
      pwVar31 = L"BlendPosesInGraph_WorkerThread";
      this_02 = &StatPtr_STAT_BlendPosesInGraph_WorkerThread;
LAB_1463e378c:
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_02,*pFVar16,pwVar31,"STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar25 = *(FName *)FVar17;
  bVar10 = false;
  bVar6 = false;
  local_6b8.ComparisonIndex.Value = 0;
  local_6b8.Number = 0;
  bVar9 = false;
  bVar11 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_1463e385c:
    bVar6 = bVar11;
    bVar10 = bVar9;
    bVar9 = false;
    local_6c8 = local_6b8;
    FVar25 = local_6b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6e8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar6 = true;
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_6d0.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_6d0.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_6d0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_BlendListBase.cpp"
                   ,0x126);
        bVar10 = true;
        bVar6 = true;
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1463e385c;
    local_790 = FVar25;
    local_6c8 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar9 = true;
  }
  fVar7 = __real_3727c5ac;
  iVar3 = (this->PerBlendData).ArrayNum;
  local_478 = 0;
  local_4a0.SecondaryData = (ForElementType<int>)0x0;
  local_474 = 8;
  local_470.SecondaryData = (ForElementType<float>)0x0;
  local_448 = 0;
  local_444 = 8;
  local_794 = 0;
  uVar33 = 0;
  pIVar30 = pIVar34;
  pIVar32 = pIVar34;
  if (0 < iVar3) {
    do {
      uVar26 = (uint)pIVar30;
      uVar12 = uVar33;
      if ((int)uVar26 < (this->PerBlendData).ArrayNum) {
        uVar12 = ~uVar26 >> 0x1f;
      }
      uVar13 = (uint)pIVar32;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar13 = local_448, bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar27 = (ForElementType<float>)
               ((longlong)(this->PerBlendData).AllocatorInstance.Data +
               (longlong)(int)uVar26 * 0x40 + 0x30);
      FVar18 = (ForElementType<float>)&local_470;
      if (local_470.SecondaryData != (ForElementType<float>)0x0) {
        FVar18 = local_470.SecondaryData;
      }
      if ((ulonglong)FVar18 <= (ulonglong)FVar27) {
        FVar18 = (ForElementType<float>)&local_470;
        if (local_470.SecondaryData != (ForElementType<float>)0x0) {
          FVar18 = local_470.SecondaryData;
        }
        if (((ulonglong)FVar27 < (ulonglong)((longlong)FVar18 + (longlong)(int)local_444 * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar13 = local_448, bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (uVar13 == local_444) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                           (0x404,&local_470,(int *)&local_444);
      }
      local_448 = uVar13 + 1;
      FVar18 = (ForElementType<float>)&local_470;
      if (local_470.SecondaryData != (ForElementType<float>)0x0) {
        FVar18 = local_470.SecondaryData;
      }
      *(float *)((longlong)FVar18 + (longlong)(int)uVar13 * 4) = *(float *)FVar27;
      if (fVar7 < *(float *)FVar27) {
        FVar19 = (ForElementType<int>)&local_4a0;
        if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
          FVar19 = local_4a0.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_794) {
          FVar19 = (ForElementType<int>)&local_4a0;
          if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
            FVar19 = local_4a0.SecondaryData;
          }
          if ((&local_794 < (uint *)((longlong)FVar19 + (longlong)local_474 * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar14 = local_478;
        if (local_478 == local_474) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&local_4a0,&local_474);
        }
        local_478 = iVar14 + 1;
        FVar19 = (ForElementType<int>)&local_4a0;
        if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
          FVar19 = local_4a0.SecondaryData;
        }
        *(uint *)((longlong)FVar19 + (longlong)iVar14 * 4) = local_794;
      }
      local_794 = local_794 + 1;
      pIVar30 = (IInterpolationIndexProvider *)(ulonglong)local_794;
      pIVar32 = (IInterpolationIndexProvider *)(ulonglong)local_448;
    } while ((int)local_794 < iVar3);
  }
  iVar3 = local_478;
  if ((local_478 < 1) || ((this->BlendPose).ArrayNum != local_448)) {
    if (param_1->bExpectsAdditivePose == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
                 *(FBoneContainer **)&(param_1->Pose).field_0x10);
    }
    else {
      FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
    }
  }
  else {
    if (local_478 == 1) {
      FVar19 = (ForElementType<int>)&local_4a0;
      if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
        FVar19 = local_4a0.SecondaryData;
      }
      uVar12 = *(uint *)FVar19;
      uVar26 = uVar33;
      if ((int)uVar12 < (int)local_448) {
        uVar26 = ~uVar12 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar18 = (ForElementType<float>)&local_470;
      if (local_470.SecondaryData != (ForElementType<float>)0x0) {
        FVar18 = local_470.SecondaryData;
      }
      pFVar2 = (FScriptContainerElement *)((longlong)FVar18 + (longlong)(int)uVar12 * 4);
      if ((__real_3f7fff58 < *(float *)pFVar2 || __real_3f7fff58 == *(float *)pFVar2) &&
         (this->CurrentBlendProfile == (UBlendProfile *)0x0)) {
        if ((local_478 < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar19 = (ForElementType<int>)&local_4a0;
        if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
          FVar19 = local_4a0.SecondaryData;
        }
        uVar12 = *(uint *)FVar19;
        if ((int)uVar12 < (this->BlendPose).ArrayNum) {
          uVar33 = ~uVar12 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FPoseLink::Evaluate((FPoseLink *)
                            ((this->BlendPose).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10
                            ),param_1);
        goto LAB_1463e48e7;
      }
    }
    local_440.AllocatorInstance.SecondaryData = (ForElementType<FCompactPose>)0x0;
    local_440.ArrayNum = 0;
    local_440.ArrayMax = 8;
    local_370.AllocatorInstance.SecondaryData = (ForElementType<FBlendedCurve>)0x0;
    local_370.ArrayNum = 0;
    local_370.ArrayMax = 8;
    local_260.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Anim::FStackAttributeContainer>)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 8;
    TArray<FCompactPose,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_440,iVar3,No);
    TArray<FBlendedCurve,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_370,iVar3,No);
    TArray<UE::Anim::FStackAttributeContainer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::SetNum(&local_260,iVar3,No);
    pFVar8 = local_6c0;
    if (0 < local_478) {
      local_790.ComparisonIndex.Value = 0;
      local_790.Number = 0;
      local_6d8 = 0;
      local_6e0 = 0;
      pIVar30 = pIVar34;
      pIVar32 = pIVar34;
      do {
        uVar13 = (uint)pIVar32;
        uVar26 = ~uVar13 >> 0x1f;
        uVar12 = uVar33;
        if ((int)uVar13 < local_478) {
          uVar12 = uVar26;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar19 = (ForElementType<int>)&local_4a0;
        if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
          FVar19 = local_4a0.SecondaryData;
        }
        uVar12 = *(uint *)((longlong)FVar19 + (longlong)pIVar30 * 4);
        FAnimationBaseContext::FAnimationBaseContext
                  ((FAnimationBaseContext *)local_788,(FAnimInstanceProxy *)pFVar8->_padding_,
                   (FAnimationUpdateSharedContext *)0x0);
        local_6f0 = pFVar8->bExpectsAdditivePose != false;
        local_788._32_8_ = 0;
        local_788._40_8_ = 0;
        local_788._48_8_ = 0;
        local_788._56_8_ = 0;
        local_788._64_8_ = 0;
        local_788[0x48] = 0;
        local_788._80_8_ = 0;
        pTStack_730 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        local_728 = 0;
        local_720 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
        local_718 = 0;
        local_710 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        local_708 = 0;
        local_700 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        local_6f8 = 0;
        FPoseContext::InitializeImpl
                  ((FPoseContext *)local_788,(FAnimInstanceProxy *)pFVar8->_padding_);
        local_788._20_4_ = *(int *)((longlong)&pFVar8->_padding_ + 4);
        local_788._24_4_ = (undefined4)pFVar8->_padding_;
        uVar15 = 0;
        if ((int)uVar12 < (this->BlendPose).ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FPoseLink::Evaluate((FPoseLink *)
                            ((this->BlendPose).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10
                            ),(FPoseContext *)local_788);
        uVar12 = 0;
        if ((int)uVar13 < local_440.ArrayNum) {
          uVar12 = uVar26;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar23 = (ForElementType<FCompactPose>)&local_440;
        if (local_440.AllocatorInstance.SecondaryData != (ForElementType<FCompactPose>)0x0) {
          FVar23 = local_440.AllocatorInstance.SecondaryData;
        }
        puVar24 = (undefined8 *)((longlong)FVar23 + local_6e0);
        if (puVar24 != (undefined8 *)(local_788 + 0x20)) {
          *puVar24 = local_788._32_8_;
          local_788._32_8_ = 0;
          *(undefined4 *)(puVar24 + 1) = local_788._40_4_;
          *(undefined4 *)((longlong)puVar24 + 0xc) = local_788._44_4_;
          local_788._40_8_ = 0;
          puVar24[2] = local_788._48_8_;
          local_788._48_8_ = 0;
        }
        uVar12 = uVar33;
        if ((int)uVar13 < local_370.ArrayNum) {
          uVar12 = uVar26;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar21 = (ForElementType<FBlendedCurve>)&local_370;
        if (local_370.AllocatorInstance.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
          FVar21 = local_370.AllocatorInstance.SecondaryData;
        }
        puVar24 = (undefined8 *)(local_6d8 + (longlong)FVar21);
        if (puVar24 != (undefined8 *)(local_788 + 0x38)) {
          *puVar24 = local_788._56_8_;
          local_788._56_8_ = 0;
          *(undefined4 *)(puVar24 + 1) = local_788._64_4_;
          *(undefined4 *)((longlong)puVar24 + 0xc) = local_788._68_4_;
          local_788._64_8_ = 0;
        }
        *(undefined1 *)(puVar24 + 2) = local_788[0x48];
        local_788[0x48] = 0;
        uVar12 = uVar33;
        if ((int)uVar13 < local_260.ArrayNum) {
          uVar12 = uVar26;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar22 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_260;
        if (local_260.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
          FVar22 = local_260.AllocatorInstance.SecondaryData;
        }
        ppTVar28 = (TArray<int,TSizedDefaultAllocator<32>_> **)
                   ((longlong)local_790 + (longlong)FVar22);
        ppTVar1 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)(ppTVar28 + 2);
        if (ppTVar1 != &local_720) {
          DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                    (*ppTVar1,*(int *)(ppTVar28 + 3));
          if (*ppTVar1 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(*ppTVar1);
          }
          *ppTVar1 = local_720;
          local_720 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
          *(int *)(ppTVar28 + 3) = (int)local_718;
          *(undefined4 *)((longlong)ppTVar28 + 0x1c) = local_718._4_4_;
          local_718 = 0;
        }
        if (ppTVar28 != &pTStack_730) {
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                    (*ppTVar28,*(int *)(ppTVar28 + 1));
          if (*ppTVar28 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(*ppTVar28);
          }
          *ppTVar28 = pTStack_730;
          pTStack_730 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          *(int *)(ppTVar28 + 1) = (int)local_728;
          *(undefined4 *)((longlong)ppTVar28 + 0xc) = local_728._4_4_;
          local_728 = 0;
        }
        ppTVar29 = ppTVar28 + 4;
        if (ppTVar29 != &local_710) {
          DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                      *)*ppTVar29,*(int *)(ppTVar28 + 5));
          if (*ppTVar29 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(*ppTVar29);
          }
          *ppTVar29 = local_710;
          local_710 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          *(int *)(ppTVar28 + 5) = (int)local_708;
          *(undefined4 *)((longlong)ppTVar28 + 0x2c) = local_708._4_4_;
          local_708 = 0;
        }
        ppTVar29 = ppTVar28 + 6;
        if (ppTVar29 != &local_700) {
          if (*ppTVar29 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(*ppTVar29);
          }
          *ppTVar29 = local_700;
          local_700 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          *(undefined4 *)(ppTVar28 + 7) = (undefined4)local_6f8;
          *(undefined4 *)((longlong)ppTVar28 + 0x3c) = local_6f8._4_4_;
          local_6f8 = 0;
        }
        if (local_700 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_700);
        }
        DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                    *)local_710,(int)local_708);
        if (local_710 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_710);
        }
        DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                  (local_720,(int)local_718);
        if (local_720 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_720);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_730,(int)local_728);
        if (pTStack_730 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(pTStack_730);
        }
        local_6e0 = local_6e0 + 0x18;
        pIVar32 = (IInterpolationIndexProvider *)(ulonglong)(uVar13 + 1);
        local_6d8 = local_6d8 + 0x20;
        pIVar30 = (IInterpolationIndexProvider *)&pIVar30->field_0x1;
        local_790 = (FName)((longlong)local_790 + 0x40);
        FVar25 = local_6c8;
        param_1 = local_6c0;
      } while ((int)(uVar13 + 1) < local_478);
    }
    FAnimationPoseData::FAnimationPoseData(&local_5b8,param_1);
    iVar3 = local_478;
    if (this->CurrentBlendProfile == (UBlendProfile *)0x0) {
      local_5f8 = (ForElementType<int>)&local_4a0;
      if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
        local_5f8 = local_4a0.SecondaryData;
      }
      if ((local_478 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar33 = local_448;
      iStack_5f0 = iVar3;
      local_5e8 = (ForElementType<float>)&local_470;
      if (local_470.SecondaryData != (ForElementType<float>)0x0) {
        local_5e8 = local_470.SecondaryData;
      }
      if (((int)local_448 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = local_260.ArrayNum;
      uStack_5e0 = uVar33;
      local_5d8 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_260;
      if (local_260.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
        local_5d8 = local_260.AllocatorInstance.SecondaryData;
      }
      if ((local_260.ArrayNum < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = local_370.ArrayNum;
      iStack_5d0 = iVar3;
      local_5c8 = (ForElementType<FBlendedCurve>)&local_370;
      if (local_370.AllocatorInstance.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
        local_5c8 = local_370.AllocatorInstance.SecondaryData;
      }
      if ((local_370.ArrayNum < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = local_440.ArrayNum;
      iStack_5c0 = iVar14;
      local_6a8 = (ForElementType<FCompactPose>)&local_440;
      if (local_440.AllocatorInstance.SecondaryData != (ForElementType<FCompactPose>)0x0) {
        local_6a8 = local_440.AllocatorInstance.SecondaryData;
      }
      if ((local_440.ArrayNum < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_508._12_4_ = uStack_5ec;
      local_508.ArrayNum = iStack_5f0;
      local_4f8._12_4_ = uStack_5dc;
      local_4f8.ArrayNum = uStack_5e0;
      local_508.DataPtr = (int *)local_5f8;
      local_4e8._12_4_ = uStack_5cc;
      local_4e8.ArrayNum = iStack_5d0;
      local_4e8.DataPtr = (FStackAttributeContainer *)local_5d8;
      local_4f8.DataPtr = (float *)local_5e8;
      local_4d8._12_4_ = uStack_5bc;
      local_4d8.ArrayNum = iStack_5c0;
      iStack_6a0 = iVar3;
      local_4c8._12_4_ = uStack_69c;
      local_4c8.ArrayNum = iVar3;
      local_4c8.DataPtr = (FCompactPose *)local_6a8;
      local_4d8.DataPtr = (FBlendedCurve *)local_5c8;
      FAnimationRuntime::BlendPosesTogether
                (&local_4c8,&local_4d8,&local_4e8,&local_4f8,&local_508,&local_5b8);
    }
    else {
      pUVar20 = (USkeleton *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (*(longlong *)&(param_1->Pose).field_0x10 + 0x40));
      pUVar4 = (this->CurrentBlendProfile->OwningSkeleton).field0_0x0.DebugPtr;
      this_00 = UE::Anim::FSkeletonRemappingRegistry::Get();
      this_01 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping(this_00,pUVar4,pUVar20);
      bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
      if ((bVar11) &&
         (bVar11 = FWeakObjectPtr::IsValid(&(this_01->TargetSkeleton).WeakPtr), iVar3 = local_478,
         bVar11)) {
        local_698 = (ForElementType<int>)&local_4a0;
        if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
          local_698 = local_4a0.SecondaryData;
        }
        if ((local_478 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_688 = (FBlendSampleData *)(this->PerBoneSampleData).AllocatorInstance.Data;
        iStack_690 = iVar3;
        iVar3 = (this->PerBoneSampleData).ArrayNum;
        if ((iVar3 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = local_260.ArrayNum;
        pIVar30 = (IInterpolationIndexProvider *)&this->CurrentBlendProfile->_padding_;
        if (this->CurrentBlendProfile == (UBlendProfile *)0x0) {
          pIVar30 = pIVar34;
        }
        local_678 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_260;
        if (local_260.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
          local_678 = local_260.AllocatorInstance.SecondaryData;
        }
        iStack_680 = iVar3;
        if ((local_260.ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = local_370.ArrayNum;
        iStack_670 = iVar14;
        local_668 = (ForElementType<FBlendedCurve>)&local_370;
        if (local_370.AllocatorInstance.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
          local_668 = local_370.AllocatorInstance.SecondaryData;
        }
        if ((local_370.ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = local_440.ArrayNum;
        iStack_660 = iVar3;
        local_658 = (ForElementType<FCompactPose>)&local_440;
        if (local_440.AllocatorInstance.SecondaryData != (ForElementType<FCompactPose>)0x0) {
          local_658 = local_440.AllocatorInstance.SecondaryData;
        }
        if ((local_440.ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_598._12_4_ = uStack_68c;
        local_598.ArrayNum = iStack_690;
        local_588._12_4_ = uStack_67c;
        local_588.ArrayNum = iStack_680;
        local_598.DataPtr = (int *)local_698;
        local_578._12_4_ = uStack_66c;
        local_578.ArrayNum = iStack_670;
        local_578.DataPtr = (FStackAttributeContainer *)local_678;
        local_588.DataPtr = local_688;
        local_568._12_4_ = uStack_65c;
        local_568.ArrayNum = iStack_660;
        iStack_650 = iVar14;
        local_558._12_4_ = uStack_64c;
        local_558.ArrayNum = iVar14;
        local_558.DataPtr = (FCompactPose *)local_658;
        local_568.DataPtr = (FBlendedCurve *)local_668;
        FAnimationRuntime::BlendPosesTogetherPerBoneRemapped
                  (&local_558,&local_568,&local_578,pIVar30,&local_588,&local_598,this_01,&local_5b8
                  );
      }
      else {
        iVar3 = local_478;
        local_648 = (ForElementType<int>)&local_4a0;
        if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
          local_648 = local_4a0.SecondaryData;
        }
        if ((local_478 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_638 = (FBlendSampleData *)(this->PerBoneSampleData).AllocatorInstance.Data;
        iStack_640 = iVar3;
        iVar3 = (this->PerBoneSampleData).ArrayNum;
        if ((iVar3 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = local_260.ArrayNum;
        pIVar30 = (IInterpolationIndexProvider *)&this->CurrentBlendProfile->_padding_;
        if (this->CurrentBlendProfile == (UBlendProfile *)0x0) {
          pIVar30 = pIVar34;
        }
        local_628 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_260;
        if (local_260.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
          local_628 = local_260.AllocatorInstance.SecondaryData;
        }
        iStack_630 = iVar3;
        if ((local_260.ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = local_370.ArrayNum;
        iStack_620 = iVar14;
        local_618 = (ForElementType<FBlendedCurve>)&local_370;
        if (local_370.AllocatorInstance.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
          local_618 = local_370.AllocatorInstance.SecondaryData;
        }
        if ((local_370.ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = local_440.ArrayNum;
        iStack_610 = iVar3;
        local_608 = (ForElementType<FCompactPose>)&local_440;
        if (local_440.AllocatorInstance.SecondaryData != (ForElementType<FCompactPose>)0x0) {
          local_608 = local_440.AllocatorInstance.SecondaryData;
        }
        if ((local_440.ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_548._12_4_ = uStack_63c;
        local_548.ArrayNum = iStack_640;
        local_538._12_4_ = uStack_62c;
        local_538.ArrayNum = iStack_630;
        local_548.DataPtr = (int *)local_648;
        local_528._12_4_ = uStack_61c;
        local_528.ArrayNum = iStack_620;
        local_528.DataPtr = (FStackAttributeContainer *)local_628;
        local_538.DataPtr = local_638;
        local_518._12_4_ = uStack_60c;
        local_518.ArrayNum = iStack_610;
        iStack_600 = iVar14;
        local_4b8._12_4_ = uStack_5fc;
        local_4b8.ArrayNum = iVar14;
        local_4b8.DataPtr = (FCompactPose *)local_608;
        local_518.DataPtr = (FBlendedCurve *)local_618;
        FAnimationRuntime::BlendPosesTogetherPerBone
                  (&local_4b8,&local_518,&local_528,pIVar30,&local_538,&local_548,&local_5b8);
      }
    }
    FVar22 = (ForElementType<UE::Anim::FStackAttributeContainer>)&local_260;
    if (local_260.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
      FVar22 = local_260.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::Anim::FStackAttributeContainer,int>
              ((FStackAttributeContainer *)FVar22,local_260.ArrayNum);
    if (local_260.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
      FMemory::Free((void *)local_260.AllocatorInstance.SecondaryData);
    }
    if (local_370.AllocatorInstance.SecondaryData != (ForElementType<FBlendedCurve>)0x0) {
      FMemory::Free((void *)local_370.AllocatorInstance.SecondaryData);
    }
    if (local_440.AllocatorInstance.SecondaryData != (ForElementType<FCompactPose>)0x0) {
      FMemory::Free((void *)local_440.AllocatorInstance.SecondaryData);
    }
  }
LAB_1463e48e7:
  if (local_470.SecondaryData != (ForElementType<float>)0x0) {
    FMemory::Free((void *)local_470.SecondaryData);
  }
  if (local_4a0.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_4a0.SecondaryData);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1463e49a0

void __thiscall
FAnimNode_BlendListBase::GatherDebugData(FAnimNode_BlendListBase *this,FNodeDebugData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  FNodeDebugData *pFVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendListBase::GatherDebugData");
  iVar1 = (this->BlendPose).ArrayNum;
  lVar10 = (longlong)iVar1;
  uVar5 = (**(code **)(this->_padding_ + 0xa8))(this);
  (**(code **)(this->_padding_ + 0xb0))(this,&local_68,param_1);
  pTVar7 = GetBlendTimes(this);
  uVar11 = 0;
  uVar9 = 0;
  if ((int)uVar5 < pTVar7->ArrayNum) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = 0;
  uVar9 = uVar6;
  if ((int)uVar5 < (this->PerBlendData).ArrayNum) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::PrintfImpl(&local_58,L"(Active: (%i/%i) Weight: %.1f%% Time %.3f)");
  iVar13 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar13);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_68.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_78,false);
  uVar12 = uVar11;
  if (0 < iVar1) {
    do {
      uVar5 = (uint)uVar12;
      uVar9 = uVar6;
      if ((int)uVar5 < (this->BlendPose).ArrayNum) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_48[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar2 = (this->BlendPose).AllocatorInstance.Data;
      local_48[0].Data.ArrayNum = 0;
      local_48[0].Data.ArrayMax = 0;
      uVar9 = uVar6;
      if ((int)uVar5 < (this->PerBlendData).ArrayNum) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = FNodeDebugData::BranchFlow
                         (param_1,*(float *)((this->PerBlendData).AllocatorInstance.Data +
                                            uVar11 + 0x30),local_48);
      FPoseLinkBase::GatherDebugData((FPoseLinkBase *)(pFVar2 + (longlong)(int)uVar5 * 0x10),pFVar8)
      ;
      uVar11 = uVar11 + 0x40;
      lVar10 = lVar10 + -1;
      uVar12 = (ulonglong)(uVar5 + 1);
    } while (lVar10 != 0);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetBlendProfile @ 1463e4cc0

UBlendProfile * __thiscall FAnimNode_BlendListBase::GetBlendProfile(FAnimNode_BlendListBase *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  UBlendProfile *pUVar7;
  undefined8 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_BlendProfile.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BlendProfile,"BlendProfile");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar5,
                           L"AnimNode_BlendListBase");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_BlendProfile,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton);
    CachedId_BlendProfile.Id = pFVar6->Id;
    CachedId_BlendProfile.Index = pFVar6->Index;
  }
  iVar3 = CachedId_BlendProfile.Index;
  FVar2 = CachedId_BlendProfile.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UBlendProfile *)(*pcVar1)();
    return pUVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (UBlendProfile *)*puVar8;
}

// GetActiveChildIndex @ 1463e4e10

int __thiscall FAnimNode_BlendListBase::GetActiveChildIndex(FAnimNode_BlendListBase *this)

{
  return 0;
}

// GetNodeName @ 1463e4e30

FString * __thiscall
FAnimNode_BlendListBase::GetNodeName
          (FAnimNode_BlendListBase *this,FString *__return_storage_ptr__,FNodeDebugData *param_1)

{
  UPackage *pUVar1;
  FName local_res10;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar1,
                         L"AnimNode_BlendListBase");
  }
  local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton)->
                       _padding_;
  ::FName::ToString(&local_res10,local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s<W:%.1f%%> %s");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  return __return_storage_ptr__;
}

// operator= @ 14640b210

FAnimNode_BlendListBase * __thiscall
FAnimNode_BlendListBase::operator=(FAnimNode_BlendListBase *this,FAnimNode_BlendListBase *param_1)

{
  TArray<FAnimNode_BlendListBase::FBlendData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FBlendData *pFVar5;
  
  this->_padding_ = param_1->_padding_;
  TArray<FPoseLink,TSizedDefaultAllocator<32>_>::operator=(&this->BlendPose,&param_1->BlendPose);
  pTVar1 = &this->PerBlendData;
  if (pTVar1 != &param_1->PerBlendData) {
    iVar3 = (this->PerBlendData).ArrayMax;
    piVar2 = &(this->PerBlendData).ArrayMax;
    iVar4 = (param_1->PerBlendData).ArrayNum;
    pFVar5 = (FBlendData *)(param_1->PerBlendData).AllocatorInstance.Data;
    (this->PerBlendData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FAnimNode_BlendListBase::FBlendData,FAnimNode_BlendListBase::FBlendData,int>
                ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::operator=
            (&this->PerBoneSampleData,&param_1->PerBoneSampleData);
  this->LastActiveChildIndex = param_1->LastActiveChildIndex;
  this->CurrentBlendProfile = param_1->CurrentBlendProfile;
  return this;
}

// GetBlendTimes @ 146447f20

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
FAnimNode_BlendListBase::GetBlendTimes(FAnimNode_BlendListBase *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_BlendTime.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BlendTime,"BlendTime");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar5,
                           L"AnimNode_BlendListBase");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_BlendTime,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton);
    CachedId_BlendTime.Id = pFVar6->Id;
    CachedId_BlendTime.Index = pFVar6->Index;
  }
  iVar3 = CachedId_BlendTime.Index;
  FVar2 = CachedId_BlendTime.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pTVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pTVar7;
}

// GetBlendType @ 146448070

EAlphaBlendOption __thiscall FAnimNode_BlendListBase::GetBlendType(FAnimNode_BlendListBase *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EAlphaBlendOption EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EAlphaBlendOption *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_BlendType.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BlendType,"BlendType");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar6,
                           L"AnimNode_BlendListBase");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_BlendType,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton);
    CachedId_BlendType.Id = pFVar7->Id;
    CachedId_BlendType.Index = pFVar7->Index;
  }
  iVar3 = CachedId_BlendType.Index;
  FVar2 = CachedId_BlendType.Id;
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

// GetChildUpdateMode @ 1464486e0

EBlendListChildUpdateMode __thiscall
FAnimNode_BlendListBase::GetChildUpdateMode(FAnimNode_BlendListBase *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EBlendListChildUpdateMode EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EBlendListChildUpdateMode *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_ChildUpateMode.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ChildUpateMode,"ChildUpateMode");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar6,
                           L"AnimNode_BlendListBase");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_ChildUpateMode,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton);
    CachedId_ChildUpateMode.Id = pFVar7->Id;
    CachedId_ChildUpateMode.Index = pFVar7->Index;
  }
  iVar3 = CachedId_ChildUpateMode.Index;
  FVar2 = CachedId_ChildUpateMode.Id;
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

// GetCustomBlendCurve @ 1464497f0

UCurveFloat * __thiscall FAnimNode_BlendListBase::GetCustomBlendCurve(FAnimNode_BlendListBase *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  UCurveFloat *pUVar7;
  undefined8 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_CustomBlendCurve.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_CustomBlendCurve,"CustomBlendCurve");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar5,
                           L"AnimNode_BlendListBase");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_CustomBlendCurve,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton);
    CachedId_CustomBlendCurve.Id = pFVar6->Id;
    CachedId_CustomBlendCurve.Index = pFVar6->Index;
  }
  iVar3 = CachedId_CustomBlendCurve.Index;
  FVar2 = CachedId_CustomBlendCurve.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UCurveFloat *)(*pcVar1)();
    return pUVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (UCurveFloat *)*puVar8;
}

// GetResetChildOnActivation @ 14644ea80

bool __thiscall FAnimNode_BlendListBase::GetResetChildOnActivation(FAnimNode_BlendListBase *this)

{
  EBlendListChildUpdateMode EVar1;
  
  EVar1 = GetChildUpdateMode(this);
  return EVar1 == ResetChildOnActivate;
}

// GetTransitionType @ 146450270

EBlendListTransitionType __thiscall
FAnimNode_BlendListBase::GetTransitionType(FAnimNode_BlendListBase *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EBlendListTransitionType EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EBlendListTransitionType *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_TransitionType.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_TransitionType,"TransitionType");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar6,
                           L"AnimNode_BlendListBase");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_TransitionType,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton);
    CachedId_TransitionType.Id = pFVar7->Id;
    CachedId_TransitionType.Index = pFVar7->Index;
  }
  iVar3 = CachedId_TransitionType.Index;
  FVar2 = CachedId_TransitionType.Id;
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

// Initialize @ 146455540

void __thiscall FAnimNode_BlendListBase::Initialize(FAnimNode_BlendListBase *this)

{
  code *pcVar1;
  EAlphaBlendOption EVar2;
  bool bVar3;
  uint uVar4;
  UBlendProfile *pUVar5;
  UCurveFloat *pUVar6;
  FAlphaBlend *this_00;
  uint uVar7;
  longlong lVar8;
  
  pUVar5 = (UBlendProfile *)(**(code **)(this->_padding_ + 0xa0))();
  this->CurrentBlendProfile = pUVar5;
  if ((pUVar5 != (UBlendProfile *)0x0) && ((this->PerBoneSampleData).ArrayNum == 0)) {
    InitializePerBoneData(this);
  }
  this->LastActiveChildIndex = -1;
  EVar2 = GetBlendType(this);
  pUVar6 = GetCustomBlendCurve(this);
  uVar7 = 0;
  if (0 < (this->PerBlendData).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->PerBlendData).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FAlphaBlend *)
                ((this->PerBlendData).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x40);
      FAlphaBlend::SetBlendTime(this_00,0.0);
      FAlphaBlend::SetBlendOption(this_00,EVar2);
      FAlphaBlend::SetCustomCurve(this_00,pUVar6);
      if (this->CurrentBlendProfile != (UBlendProfile *)0x0) {
        uVar4 = 0;
        if ((int)uVar7 < (this->PerBlendData).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(undefined4 *)((this->PerBlendData).AllocatorInstance.Data + lVar8 + 0x38) = 0;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x40;
    } while ((int)uVar7 < (this->PerBlendData).ArrayNum);
  }
  if (((this->PerBlendData).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FAlphaBlend::SetAlpha((FAlphaBlend *)(this->PerBlendData).AllocatorInstance.Data,__real_3f800000);
  if (((this->PerBlendData).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)((this->PerBlendData).AllocatorInstance.Data + 0x38) = 0x3f800000;
  return;
}

// InitializePerBoneData @ 146458f00

void __thiscall FAnimNode_BlendListBase::InitializePerBoneData(FAnimNode_BlendListBase *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong local_res8;
  
  if (this->CurrentBlendProfile != (UBlendProfile *)0x0) {
    uVar6 = (this->BlendPose).ArrayNum;
    lVar8 = (longlong)(int)uVar6;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar1 = &(this->PerBoneSampleData).ArrayNum;
    DestructItems<FBlendSampleData,int>
              ((FBlendSampleData *)(this->PerBoneSampleData).AllocatorInstance.Data,
               (this->PerBoneSampleData).ArrayNum);
    piVar2 = &(this->PerBoneSampleData).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar6,&(this->PerBoneSampleData).AllocatorInstance,0,piVar2);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,uVar6,&(this->PerBoneSampleData).AllocatorInstance,piVar1,piVar2);
    memset((this->PerBoneSampleData).AllocatorInstance.Data + (longlong)iVar5 * 0x60,0,lVar8 * 0x60)
    ;
    uVar10 = 0;
    if (0 < (int)uVar6) {
      local_res8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < *piVar1) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->PerBoneSampleData).AllocatorInstance.Data + local_res8;
        *(uint *)pFVar9 = uVar10;
        iVar5 = (**(code **)(this->CurrentBlendProfile->_padding_ + 0x30))();
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar5,(ForAnyElementType *)(pFVar9 + 0x40),(int *)(pFVar9 + 0x48),
                           (int *)(pFVar9 + 0x4c));
        memset((void *)(*(longlong *)(pFVar9 + 0x40) + (longlong)iVar7 * 4),0,(longlong)iVar5 << 2);
        uVar10 = uVar10 + 1;
        local_res8 = local_res8 + 0x60;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}

// SetCurrentBlendProfile @ 146468990

void __thiscall
FAnimNode_BlendListBase::SetCurrentBlendProfile
          (FAnimNode_BlendListBase *this,UBlendProfile *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lStackX_8;
  
  this->CurrentBlendProfile = param_1;
  if ((param_1 == (UBlendProfile *)0x0) || ((this->PerBoneSampleData).ArrayNum != 0)) {
    return;
  }
  if (this->CurrentBlendProfile != (UBlendProfile *)0x0) {
    uVar6 = (this->BlendPose).ArrayNum;
    lVar8 = (longlong)(int)uVar6;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar1 = &(this->PerBoneSampleData).ArrayNum;
    DestructItems<FBlendSampleData,int>
              ((FBlendSampleData *)(this->PerBoneSampleData).AllocatorInstance.Data,
               (this->PerBoneSampleData).ArrayNum);
    piVar2 = &(this->PerBoneSampleData).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar6,&(this->PerBoneSampleData).AllocatorInstance,0,piVar2);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,uVar6,&(this->PerBoneSampleData).AllocatorInstance,piVar1,piVar2);
    memset((this->PerBoneSampleData).AllocatorInstance.Data + (longlong)iVar5 * 0x60,0,lVar8 * 0x60)
    ;
    uVar10 = 0;
    if (0 < (int)uVar6) {
      lStackX_8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < *piVar1) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->PerBoneSampleData).AllocatorInstance.Data + lStackX_8;
        *(uint *)pFVar9 = uVar10;
        iVar5 = (**(code **)(this->CurrentBlendProfile->_padding_ + 0x30))();
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar5,(ForAnyElementType *)(pFVar9 + 0x40),(int *)(pFVar9 + 0x48),
                           (int *)(pFVar9 + 0x4c));
        memset((void *)(*(longlong *)(pFVar9 + 0x40) + (longlong)iVar7 * 4),0,(longlong)iVar5 << 2);
        uVar10 = uVar10 + 1;
        lStackX_8 = lStackX_8 + 0x60;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}

