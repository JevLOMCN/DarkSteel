// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 147493000

UScriptStruct * __cdecl FAnimationActiveTransitionEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimationActiveTransitionEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimationActiveTransitionEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry,(UObject *)pUVar1
                         ,L"AnimationActiveTransitionEntry");
  }
  return Z_Registration_Info_UScriptStruct_FAnimationActiveTransitionEntry.OuterSingleton;
}

// FAnimationActiveTransitionEntry @ 1474b2850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAnimationActiveTransitionEntry * __thiscall
FAnimationActiveTransitionEntry::FAnimationActiveTransitionEntry
          (FAnimationActiveTransitionEntry *this,int param_1,float param_2,int param_3,
          FAnimationTransitionBetweenStates *param_4,float param_5)

{
  EAlphaBlendOption EVar1;
  uchar uVar2;
  int iVar3;
  UBlendProfile *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = __real_3e4ccccd;
  this->ElapsedTime = 0.0;
  this->Alpha = 0.0;
  (this->InputPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputPose).ArrayNum = 0;
  (this->InputPose).ArrayMax = 0;
  *(undefined8 *)&this->CustomTransitionGraph = 0;
  (this->CustomTransitionGraph).field_0xc = 0;
  *(undefined4 *)&(this->CustomTransitionGraph).field_0x8 = 0xffffffff;
  this->NextState = param_1;
  this->PreviousState = param_3;
  this->StartNotify = param_4->StartNotify;
  this->EndNotify = param_4->EndNotify;
  iVar3 = param_4->InterruptNotify;
  (this->PoseEvaluators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseEvaluators).ArrayNum = 0;
  (this->PoseEvaluators).ArrayMax = 0;
  (this->StateBlendData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateBlendData).ArrayNum = 0;
  (this->StateBlendData).ArrayMax = 0;
  (this->SourceTransitionIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->InterruptNotify = iVar3;
  (this->SourceTransitionIndices).ArrayNum = 0;
  (this->SourceTransitionIndices).ArrayMax = 3;
  FAlphaBlend::FAlphaBlend(&this->Blend,fVar6);
  pUVar4 = (param_4->BlendProfile).field0_0x0.DebugPtr;
  (this->BlendProfile).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  fVar6 = __real_3f800000;
  EVar1 = param_4->BlendMode;
  this->BlendOption = EVar1;
  fVar6 = fVar6 - param_2;
  uVar2 = (param_4->LogicType).Value;
  (this->LogicType).Value = uVar2;
  this->bActive = true;
  if (uVar2 == '\x01') {
    fVar6 = 0.0;
  }
  else {
    fVar7 = param_4->CrossfadeDuration - param_5;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (EVar1 == HermiteCubic) {
      fVar5 = fVar6 * fVar6;
      fVar6 = (fVar5 * fVar6 * ___real_3faaaaab - (fVar5 + fVar5)) + fVar6 * ___real_3fd55555;
    }
    else {
      if (__real_3f800000 <= fVar6) {
        fVar6 = __real_3f800000;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
    }
    fVar6 = fVar6 * fVar7;
  }
  this->CrossfadeDuration = fVar6;
  FAlphaBlend::SetBlendTime(&this->Blend,fVar6);
  FAlphaBlend::SetBlendOption(&this->Blend,this->BlendOption);
  FAlphaBlend::SetCustomCurve(&this->Blend,(param_4->CustomCurve).field0_0x0.DebugPtr);
  FAlphaBlend::SetValueRange(&this->Blend,0.0,__real_3f800000);
  return this;
}

// FAnimationActiveTransitionEntry @ 1474b29f0

FAnimationActiveTransitionEntry * __thiscall
FAnimationActiveTransitionEntry::FAnimationActiveTransitionEntry
          (FAnimationActiveTransitionEntry *this,int param_1,float param_2,
          FAnimationActiveTransitionEntry *param_3,int param_4,
          FAnimationTransitionBetweenStates *param_5,FAnimationPotentialTransition *param_6)

{
  FAnimationActiveTransitionEntry
            (this,param_1,param_2,param_4,param_5,param_6->CrossfadeTimeAdjustment);
  return this;
}

// FAnimationActiveTransitionEntry @ 1474b2a30

FAnimationActiveTransitionEntry * __thiscall
FAnimationActiveTransitionEntry::FAnimationActiveTransitionEntry
          (FAnimationActiveTransitionEntry *this)

{
  float fVar1;
  
  fVar1 = __real_3e4ccccd;
  this->ElapsedTime = 0.0;
  this->Alpha = 0.0;
  this->CrossfadeDuration = 0.0;
  (this->InputPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputPose).ArrayNum = 0;
  (this->InputPose).ArrayMax = 0;
  *(undefined8 *)&this->CustomTransitionGraph = 0;
  (this->CustomTransitionGraph).field_0xc = 0;
  (this->PoseEvaluators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseEvaluators).ArrayNum = 0;
  (this->PoseEvaluators).ArrayMax = 0;
  (this->StateBlendData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateBlendData).ArrayNum = 0;
  (this->StateBlendData).ArrayMax = 0;
  (this->SourceTransitionIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  *(undefined4 *)&(this->CustomTransitionGraph).field_0x8 = 0xffffffff;
  this->NextState = -1;
  this->PreviousState = -1;
  this->StartNotify = -1;
  this->EndNotify = -1;
  this->InterruptNotify = -1;
  (this->SourceTransitionIndices).ArrayNum = 0;
  (this->SourceTransitionIndices).ArrayMax = 3;
  FAlphaBlend::FAlphaBlend(&this->Blend,fVar1);
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  this->BlendOption = HermiteCubic;
  this->LogicType = '\0';
  this->bActive = false;
  return this;
}

// CalculateInverseAlpha @ 1474c3a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FAnimationActiveTransitionEntry::CalculateInverseAlpha
          (FAnimationActiveTransitionEntry *this,EAlphaBlendOption param_1,float param_2)

{
  float fVar1;
  
  if (param_1 == HermiteCubic) {
    fVar1 = param_2 * param_2;
    return (fVar1 * param_2 * ___real_3faaaaab - (fVar1 + fVar1)) + param_2 * ___real_3fd55555;
  }
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  return param_2;
}

// InitializeCustomGraphLinks @ 1474e88b0

void __thiscall
FAnimationActiveTransitionEntry::InitializeCustomGraphLinks
          (FAnimationActiveTransitionEntry *this,FAnimationUpdateContext *param_1,
          FBakedStateExitTransition *param_2)

{
  UObject *pUVar1;
  FProperty *this_00;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  UPackage *pUVar12;
  uint uVar13;
  longlong *plVar14;
  void *local_68;
  FAnimationInitializeContext local_60;
  
  if (param_2->CustomResultNodeIndex != -1) {
    if (param_1->_padding_ == 0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = *(longlong **)(param_1->_padding_ + 0x148);
    }
    if (plVar14 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
      local_60._16_1_ = 1;
      local_60._20_8_ = 0xffffffffffffffff;
      *(int *)&(this->CustomTransitionGraph).field_0x8 =
           (*(int *)(lVar9 + 8) - param_2->CustomResultNodeIndex) + -1;
      local_60._0_8_ = param_1->_padding_;
      local_60._8_8_ = param_1->_padding_;
      FPoseLinkBase::Initialize((FPoseLinkBase *)&this->CustomTransitionGraph,&local_60);
      if ((param_1->_padding_ != 0) && (uVar13 = 0, 0 < (param_2->PoseEvaluatorLinks).ArrayNum)) {
        lVar9 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar13 < (param_2->PoseEvaluatorLinks).ArrayNum) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          iVar8 = *(int *)((param_2->PoseEvaluatorLinks).AllocatorInstance.Data + lVar9);
          pUVar1 = *(UObject **)(param_1->_padding_ + 0x140);
          if (iVar8 == -1) {
            local_68 = (void *)0x0;
          }
          else {
            plVar10 = (longlong *)(**(code **)(*plVar14 + 0x20))(plVar14);
            lVar11 = (**(code **)(*plVar14 + 0x20))(plVar14);
            uVar6 = (*(int *)(lVar11 + 8) - iVar8) - 1;
            uVar7 = 0;
            if ((int)uVar6 < (int)plVar10[1]) {
              uVar7 = ~uVar6 >> 0x1f;
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
            this_00 = *(FProperty **)(*plVar10 + (longlong)(int)uVar6 * 8);
            if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton
                == (UScriptStruct *)0x0) {
              pUVar12 = Z_Construct_UPackage__Script_Engine();
              Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator,
                                   (UObject *)pUVar12,L"AnimNode_TransitionPoseEvaluator");
            }
            pUVar2 = (UScriptStruct *)this_00[1]._padding_;
            if (pUVar2 == (UScriptStruct *)0x0) {
              bVar5 = Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.
                      OuterSingleton == (UScriptStruct *)0x0;
            }
            else {
              bVar5 = pUVar2 == Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.
                                OuterSingleton;
            }
            if ((!bVar5) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NodeProperty->Struct == NodeType::StaticStruct()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimBlueprintGeneratedClass.h"
                                   ,0x297,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_68 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar1,0);
          }
          pFVar3 = (this->PoseEvaluators).AllocatorInstance.Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 <
               pFVar3 + (longlong)(this->PoseEvaluators).ArrayMax * 8)) &&
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
          iVar8 = (this->PoseEvaluators).ArrayNum;
          if (iVar8 == (this->PoseEvaluators).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(this->PoseEvaluators).AllocatorInstance,
                               &(this->PoseEvaluators).ArrayMax);
          }
          (this->PoseEvaluators).ArrayNum = iVar8 + 1;
          uVar13 = uVar13 + 1;
          lVar9 = lVar9 + 4;
          *(void **)((this->PoseEvaluators).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_68
          ;
        } while ((int)uVar13 < (param_2->PoseEvaluatorLinks).ArrayNum);
      }
    }
  }
  return;
}

// Serialize @ 1474f72e0

bool __thiscall
FAnimationActiveTransitionEntry::Serialize(FAnimationActiveTransitionEntry *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  float *pfVar3;
  float *pfVar4;
  int *piVar5;
  
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->ElapsedTime = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = &this->Alpha;
  puVar2 = &param_1->field_0x2a;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = &this->CrossfadeDuration;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bActive);
  piVar1 = &this->NextState;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->PreviousState;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar5 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((*puVar2 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return true;
}

// Update @ 1474fe480

void __thiscall
FAnimationActiveTransitionEntry::Update
          (FAnimationActiveTransitionEntry *this,FAnimationUpdateContext *param_1,int param_2,
          bool *param_3)

{
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar1;
  FAlphaBlend *this_00;
  UBlendProfile *pUVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  *param_3 = false;
  if (this->bActive != false) {
    this_00 = &this->Blend;
    this->ElapsedTime = param_1->DeltaTime + this->ElapsedTime;
    FAlphaBlend::Update(this_00,param_1->DeltaTime);
    fVar5 = 0.0;
    if (0.0 < this->CrossfadeDuration) {
      fVar5 = this->ElapsedTime / this->CrossfadeDuration;
    }
    fVar5 = FAlphaBlend::AlphaToBlendOption
                      (fVar5,(this->Blend).BlendOption,(this_00->CustomCurve).field0_0x0.DebugPtr);
    this->Alpha = fVar5;
    bVar4 = FAlphaBlend::IsComplete(this_00);
    if (bVar4) {
      this->bActive = false;
      *param_3 = true;
    }
    if ((this->BlendProfile).field0_0x0.DebugPtr != (UBlendProfile *)0x0) {
      pTVar1 = &this->StateBlendData;
      fVar5 = this->Alpha;
      if (((this->StateBlendData).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((pTVar1->AllocatorInstance).Data + 0x10) = fVar5;
      pUVar2 = (this->BlendProfile).field0_0x0.DebugPtr;
      if (((this->StateBlendData).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar5 = *(float *)((pTVar1->AllocatorInstance).Data + 0x10);
      if (((this->StateBlendData).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UBlendProfile::UpdateBoneWeights
                (pUVar2,(FBlendSampleData *)(pTVar1->AllocatorInstance).Data,this_00,0.0,fVar5,false
                );
      fVar5 = __real_3f800000 - this->Alpha;
      if (((this->StateBlendData).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((pTVar1->AllocatorInstance).Data + 0x70) = fVar5;
      pUVar2 = (this->BlendProfile).field0_0x0.DebugPtr;
      if (((this->StateBlendData).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar5 = *(float *)((pTVar1->AllocatorInstance).Data + 0x70);
      if (((this->StateBlendData).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UBlendProfile::UpdateBoneWeights
                (pUVar2,(FBlendSampleData *)((pTVar1->AllocatorInstance).Data + 0x60),this_00,0.0,
                 fVar5,true);
      FBlendSampleData::NormalizeDataWeight(pTVar1);
    }
  }
  return;
}

