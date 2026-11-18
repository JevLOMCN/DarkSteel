// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 24

// StaticStruct @ 1463dcb60

UScriptStruct * __cdecl FAnimNode_SequenceEvaluatorBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluatorBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluatorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase,(UObject *)pUVar1
                         ,L"AnimNode_SequenceEvaluatorBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluatorBase.OuterSingleton;
}

// GetCurrentAssetTime @ 1463dcc80

float __thiscall
FAnimNode_SequenceEvaluatorBase::GetCurrentAssetTime(FAnimNode_SequenceEvaluatorBase *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001463dcc83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x178))();
  return fVar1;
}

// GetCurrentAssetLength @ 1463dcc90

float __thiscall
FAnimNode_SequenceEvaluatorBase::GetCurrentAssetLength(FAnimNode_SequenceEvaluatorBase *this)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x170))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001463dccb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*plVar1 + 0x2c0))(plVar1,*(code **)(*plVar1 + 0x2c0));
    return fVar2;
  }
  return 0.0;
}

// Initialize_AnyThread @ 1463dccd0

void __thiscall
FAnimNode_SequenceEvaluatorBase::Initialize_AnyThread
          (FAnimNode_SequenceEvaluatorBase *this,FAnimationInitializeContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SequenceEvaluatorBase::Initialize_AnyThread");
  FAnimNode_AssetPlayerBase::Initialize_AnyThread((FAnimNode_AssetPlayerBase *)this,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  this->bReinitialized = true;
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 1463dcd30

void __thiscall
FAnimNode_SequenceEvaluatorBase::CacheBones_AnyThread
          (FAnimNode_SequenceEvaluatorBase *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_SequenceEvaluatorBase::CacheBones_AnyThread");
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateAssetPlayer @ 1463dcd50

void __thiscall
FAnimNode_SequenceEvaluatorBase::UpdateAssetPlayer
          (FAnimNode_SequenceEvaluatorBase *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  PostExposedInputsUpdateAssetPlayer(this,param_1);
  return;
}

// Evaluate_AnyThread @ 1463dcdd0

void __thiscall
FAnimNode_SequenceEvaluatorBase::Evaluate_AnyThread
          (FAnimNode_SequenceEvaluatorBase *this,FPoseContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FAnimationPoseData local_68;
  double local_50;
  byte local_48;
  longlong local_44;
  undefined4 local_3c;
  undefined1 local_38;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  undefined1 local_f;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SequenceEvaluatorBase::Evaluate_AnyThread");
  if (param_1->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Output.AnimInstanceProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_SequenceEvaluator.cpp"
                       ,0x5f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x170))(this);
  if ((plVar3 == (longlong *)0x0) || (plVar3[7] == 0)) {
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
    FAnimationPoseData::FAnimationPoseData(&local_68,param_1);
    pcVar1 = *(code **)(*plVar3 + 0x330);
    local_38 = (**(code **)(this->_padding_ + 0xd0))(this);
    local_50 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_3c = (undefined4)this->_padding_;
    local_48 = *(byte *)(param_1->_padding_ + 0x801) >> 1 & 1;
    local_44 = this->_padding_;
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_f = 0;
    (*pcVar1)(plVar3,&local_68,&local_50);
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1463dcf40

void __thiscall
FAnimNode_SequenceEvaluatorBase::GatherDebugData
          (FAnimNode_SequenceEvaluatorBase *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  longlong lVar2;
  int iVar3;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48 [3];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SequenceEvaluatorBase::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluatorBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluatorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase,(UObject *)pUVar1
                         ,L"AnimNode_SequenceEvaluatorBase");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluatorBase.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_68);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  (**(code **)(this->_padding_ + 0x178))(this);
  lVar2 = (**(code **)(this->_padding_ + 0x170))(this);
  if (lVar2 == 0) {
    ::FString::FString(&local_68,L"None");
  }
  else {
    local_res8 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res8,&local_68);
  }
  ::FString::PrintfImpl(local_48,L"(\'%s\' InputTime: %.3f, Time: %.3f)");
  iVar3 = local_48[0].Data.ArrayNum + -1;
  if (local_48[0].Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_48[0].Data.AllocatorInstance.Data,iVar3);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_58.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_68,true);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetAccumulatedTime @ 1463dd180

float __thiscall
FAnimNode_SequenceEvaluatorBase::GetAccumulatedTime(FAnimNode_SequenceEvaluatorBase *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001463dd183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x178))();
  return fVar1;
}

// SetAccumulatedTime @ 1463dd190

void __thiscall
FAnimNode_SequenceEvaluatorBase::SetAccumulatedTime
          (FAnimNode_SequenceEvaluatorBase *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001463dd193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x158))();
  return;
}

// GetAnimAsset @ 1463dd1a0

UAnimationAsset * __thiscall
FAnimNode_SequenceEvaluatorBase::GetAnimAsset(FAnimNode_SequenceEvaluatorBase *this)

{
  UAnimationAsset *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001463dd1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UAnimationAsset *)(**(code **)(this->_padding_ + 0x170))();
  return pUVar1;
}

// GetEffectiveDeltaTime @ 1463dd1b0

float __thiscall
FAnimNode_SequenceEvaluatorBase::GetEffectiveDeltaTime
          (FAnimNode_SequenceEvaluatorBase *this,float param_1,float param_2)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = param_1 - param_2;
  cVar2 = (**(code **)(this->_padding_ + 0xd0))();
  if (cVar2 != '\0') {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x170))(this);
    fVar5 = (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar4 = (float)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    if (fVar4 * __real_3f000000 < fVar5) {
      pcVar1 = *(code **)(this->_padding_ + 0x170);
      if (0.0 < fVar6) {
        plVar3 = (longlong *)(*pcVar1)();
        fVar4 = (float)(**(code **)(*plVar3 + 0x2c0))(plVar3);
        return fVar6 - fVar4;
      }
      plVar3 = (longlong *)(*pcVar1)(this);
      fVar4 = (float)(**(code **)(*plVar3 + 0x2c0))(plVar3);
      fVar6 = fVar6 + fVar4;
    }
  }
  return fVar6;
}

// SetTeleportToExplicitTime @ 1463dd280

void __thiscall
FAnimNode_SequenceEvaluatorBase::SetTeleportToExplicitTime
          (FAnimNode_SequenceEvaluatorBase *this,bool param_1)

{
  return;
}

// SetReinitializationBehavior @ 1463dd290

void __thiscall
FAnimNode_SequenceEvaluatorBase::SetReinitializationBehavior
          (FAnimNode_SequenceEvaluatorBase *this,TEnumAsByte<ESequenceEvalReinit::Type> param_1)

{
  return;
}

// GetShouldLoop @ 1463dd2e0

bool __thiscall
FAnimNode_SequenceEvaluatorBase::GetShouldLoop(FAnimNode_SequenceEvaluatorBase *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001463dd2e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0xd0))();
  return (bool)uVar1;
}

// GetExplicitTime @ 14644a250

float __thiscall
FAnimNode_SequenceEvaluatorBase::GetExplicitTime(FAnimNode_SequenceEvaluatorBase *this)

{
  return 0.0;
}

// GetReinitializationBehavior @ 14644e860

TEnumAsByte<ESequenceEvalReinit::Type> __thiscall
FAnimNode_SequenceEvaluatorBase::GetReinitializationBehavior(FAnimNode_SequenceEvaluatorBase *this)

{
  undefined1 *in_RDX;
  
  *in_RDX = 2;
  return (TEnumAsByte<ESequenceEvalReinit::Type>)(uchar)in_RDX;
}

// GetSequence @ 14644ec10

UAnimSequenceBase * __thiscall
FAnimNode_SequenceEvaluatorBase::GetSequence(FAnimNode_SequenceEvaluatorBase *this)

{
  return (UAnimSequenceBase *)0x0;
}

// GetStartPosition @ 14644f620

float __thiscall
FAnimNode_SequenceEvaluatorBase::GetStartPosition(FAnimNode_SequenceEvaluatorBase *this)

{
  return 0.0;
}

// GetTeleportToExplicitTime @ 14644fe50

bool __thiscall
FAnimNode_SequenceEvaluatorBase::GetTeleportToExplicitTime(FAnimNode_SequenceEvaluatorBase *this)

{
  return true;
}

// PostExposedInputsUpdateAssetPlayer @ 146460030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_SequenceEvaluatorBase::PostExposedInputsUpdateAssetPlayer
          (FAnimNode_SequenceEvaluatorBase *this,FAnimationUpdateContext *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  UAnimSequenceBase *pUVar4;
  longlong *plVar5;
  char *pcVar6;
  FName *pFVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  FName local_res8;
  FName local_res10;
  
  fVar8 = (float)(**(code **)(this->_padding_ + 0x178))();
  pUVar4 = (UAnimSequenceBase *)(**(code **)(this->_padding_ + 0x170))(this);
  if (pUVar4 == (UAnimSequenceBase *)0x0) {
    this->bReinitialized = false;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar7 = &local_res8;
    goto LAB_146460244;
  }
  fVar9 = (float)(**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4);
  if (fVar8 <= fVar9) {
    fVar9 = fVar8;
  }
  fVar8 = fVar9;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  cVar2 = (**(code **)(this->_padding_ + 400))(this);
  if (cVar2 == '\0') {
LAB_1464600e1:
    if (pUVar4->_padding_ == 0) goto LAB_1464601bf;
    if (this->bReinitialized != false) {
      pcVar6 = (char *)(**(code **)(this->_padding_ + 0x198))(this,&local_res8);
      if (*pcVar6 == '\x01') {
        uVar10 = (**(code **)(this->_padding_ + 0x1a0))(this);
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar10;
      }
      else if (*pcVar6 == '\x02') {
        *(float *)((longlong)&this->_padding_ + 4) = fVar8;
      }
      fVar11 = (float)(**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4);
      fVar9 = *(float *)((longlong)&this->_padding_ + 4);
      if (fVar9 <= fVar11) {
        fVar11 = fVar9;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      *(float *)((longlong)&this->_padding_ + 4) = fVar11;
    }
    fVar9 = (float)(**(code **)(this->_padding_ + 0x148))
                             (this,fVar8,*(undefined4 *)((longlong)&this->_padding_ + 4));
    if (fVar9 == 0.0) {
      *(float *)((longlong)&this->_padding_ + 4) = fVar8;
    }
    if ((float)((uint)param_1->DeltaTime & (uint)___xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) {
LAB_1464601a5:
      fVar9 = 0.0;
    }
    else {
      if ((float)((uint)pUVar4->RateScale & (uint)___xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77) goto LAB_1464601a5;
      fVar9 = fVar9 / (pUVar4->RateScale * param_1->DeltaTime);
    }
    uVar3 = (**(code **)(this->_padding_ + 0xd0))(this);
  }
  else {
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x108))(this,&local_res8);
    if (*plVar5 != 0) goto LAB_1464600e1;
    cVar2 = (**(code **)(this->_padding_ + 0x118))(this);
    if (cVar2 == '\x02') goto LAB_1464600e1;
LAB_1464601bf:
    lVar1 = this->_padding_;
    *(float *)((longlong)&this->_padding_ + 4) = fVar8;
    uVar3 = (**(code **)(lVar1 + 0xd0))(this);
    fVar9 = 0.0;
  }
  FAnimNode_AssetPlayerBase::CreateTickRecordForNode
            ((FAnimNode_AssetPlayerBase *)this,param_1,pUVar4,(bool)uVar3,fVar9,true);
  this->bReinitialized = false;
  pFVar7 = &local_res10;
  local_res10 = (FName)pUVar4->_padding_;
LAB_146460244:
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             pFVar7);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Sequence",(UObject *)pUVar4);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"InputTime",fVar8);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Time",
             *(float *)((longlong)&this->_padding_ + 4));
  return;
}

// SetExplicitTime @ 146468d90

bool __thiscall
FAnimNode_SequenceEvaluatorBase::SetExplicitTime
          (FAnimNode_SequenceEvaluatorBase *this,float param_1)

{
  return false;
}

// SetSequence @ 14646ad60

bool __thiscall
FAnimNode_SequenceEvaluatorBase::SetSequence
          (FAnimNode_SequenceEvaluatorBase *this,UAnimSequenceBase *param_1)

{
  return false;
}

// SetShouldLoop @ 14646b030

bool __thiscall
FAnimNode_SequenceEvaluatorBase::SetShouldLoop(FAnimNode_SequenceEvaluatorBase *this,bool param_1)

{
  return false;
}

