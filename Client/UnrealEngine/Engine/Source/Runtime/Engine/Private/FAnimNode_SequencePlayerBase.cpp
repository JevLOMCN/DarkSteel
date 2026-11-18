// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticStruct @ 14749e7a0

UScriptStruct * __cdecl FAnimNode_SequencePlayerBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase,(UObject *)pUVar1,
                         L"AnimNode_SequencePlayerBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.OuterSingleton;
}

// GetCurrentAssetTime @ 14749e7e0

float __thiscall
FAnimNode_SequencePlayerBase::GetCurrentAssetTime(FAnimNode_SequencePlayerBase *this)

{
  return *(float *)((longlong)&this->_padding_ + 4);
}

// GetCurrentAssetTimePlayRateAdjusted @ 14749e7f0

float __thiscall
FAnimNode_SequencePlayerBase::GetCurrentAssetTimePlayRateAdjusted
          (FAnimNode_SequencePlayerBase *this)

{
  longlong lVar1;
  FInputScaleBiasClampConstants *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = (**(code **)(this->_padding_ + 0x148))();
  fVar5 = __real_3f800000;
  if (lVar1 != 0) {
    fVar5 = *(float *)(lVar1 + 0xa8);
  }
  fVar3 = (float)(**(code **)(this->_padding_ + 0x170))(this);
  fVar4 = (float)(**(code **)(this->_padding_ + 0x168))(this);
  if (__real_322bcc77 < (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar3 = fVar3 / fVar4;
  }
  else {
    fVar3 = 0.0;
  }
  pFVar2 = (FInputScaleBiasClampConstants *)(**(code **)(this->_padding_ + 0x178))(this);
  fVar3 = FInputScaleBiasClampState::ApplyTo(&this->PlayRateScaleBiasClampState,pFVar2,fVar3);
  if (0.0 <= fVar3 * fVar5) {
    fVar5 = *(float *)((longlong)&this->_padding_ + 4);
  }
  else {
    fVar3 = *(float *)((longlong)&this->_padding_ + 4);
    fVar5 = (float)(**(code **)(this->_padding_ + 0xb8))(this);
    fVar5 = fVar5 - fVar3;
  }
  return fVar5;
}

// GetCurrentAssetLength @ 14749e8d0

float __thiscall
FAnimNode_SequencePlayerBase::GetCurrentAssetLength(FAnimNode_SequencePlayerBase *this)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x148))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014749e8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*plVar1 + 0x2c0))(plVar1,*(code **)(*plVar1 + 0x2c0));
    return fVar2;
  }
  return 0.0;
}

// GetAnimAsset @ 14749e910

UAnimationAsset * __thiscall
FAnimNode_SequencePlayerBase::GetAnimAsset(FAnimNode_SequencePlayerBase *this)

{
  UAnimationAsset *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014749e913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UAnimationAsset *)(**(code **)(this->_padding_ + 0x148))();
  return pUVar1;
}

// Initialize_AnyThread @ 14749e920

void __thiscall
FAnimNode_SequencePlayerBase::Initialize_AnyThread
          (FAnimNode_SequencePlayerBase *this,FAnimationInitializeContext *param_1)

{
  int iVar1;
  bool bVar2;
  FExposedValueHandler *this_00;
  longlong *plVar3;
  UClass *pUVar4;
  FInputScaleBiasClampConstants *pFVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SequencePlayerBase::Initialize_AnyThread");
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x148))(this);
  if (plVar3 != (longlong *)0x0) {
    pUVar4 = UAnimMontage::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(plVar3[2] + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) &&
       (bVar2 = `FAnimNode_SequencePlayerBase::Initialize_AnyThread'::__l3::<lambda_1>::operator()
                          (local_res8), !bVar2)) {
      plVar3 = (longlong *)0x0;
    }
  }
  uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
  (this->PlayRateScaleBiasClampState).bInitialized = false;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar6;
  if (plVar3 != (longlong *)0x0) {
    fVar7 = GetEffectiveStartPosition(this,(FAnimationBaseContext *)param_1);
    fVar8 = (float)(**(code **)(this->_padding_ + 0x170))(this);
    fVar9 = (float)(**(code **)(this->_padding_ + 0x168))(this);
    fVar10 = (float)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    fVar11 = __real_322bcc77;
    if (fVar7 <= fVar10) {
      fVar10 = fVar7;
    }
    fVar12 = (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar10;
    if (fVar11 < fVar12) {
      fVar8 = fVar8 / fVar9;
    }
    else {
      fVar8 = 0.0;
    }
    pFVar5 = (FInputScaleBiasClampConstants *)(**(code **)(this->_padding_ + 0x178))(this);
    fVar11 = FInputScaleBiasClampState::ApplyTo(&this->PlayRateScaleBiasClampState,pFVar5,fVar8,0.0)
    ;
    if ((fVar7 == 0.0) && (fVar11 * *(float *)(plVar3 + 0x15) < 0.0)) {
      uVar6 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar6;
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 14749ead0

void __thiscall
FAnimNode_SequencePlayerBase::CacheBones_AnyThread
          (FAnimNode_SequencePlayerBase *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_SequencePlayerBase::CacheBones_AnyThread");
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateAssetPlayer @ 14749eaf0

void __thiscall
FAnimNode_SequencePlayerBase::UpdateAssetPlayer
          (FAnimNode_SequencePlayerBase *this,FAnimationUpdateContext *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  FExposedValueHandler *this_00;
  UAnimSequenceBase *pUVar4;
  UClass *pUVar5;
  FInputScaleBiasClampConstants *pFVar6;
  FName *pFVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FName local_res8;
  FName local_res10;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SequencePlayerBase::UpdateAssetPlayer");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  pUVar4 = (UAnimSequenceBase *)(**(code **)(this->_padding_ + 0x148))(this);
  if (pUVar4 == (UAnimSequenceBase *)0x0) {
LAB_14749eced:
    FAnimTrace::OutputAnimSequencePlayer((FAnimationBaseContext *)param_1,this);
    if (pUVar4 != (UAnimSequenceBase *)0x0) {
      local_res10 = (FName)pUVar4->_padding_;
      pFVar7 = &local_res10;
      goto LAB_14749eb94;
    }
  }
  else {
    pUVar5 = UAnimMontage::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
LAB_14749ebe6:
      if (pUVar4->_padding_ != 0) {
        fVar8 = (float)(**(code **)(this->_padding_ + 0x170))(this);
        fVar9 = (float)(**(code **)(this->_padding_ + 0x168))(this);
        fVar10 = (float)(**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4);
        fVar2 = __real_322bcc77;
        fVar11 = *(float *)((longlong)&this->_padding_ + 4);
        fVar12 = 0.0;
        if (fVar10 <= fVar11) {
          fVar11 = fVar10;
        }
        fVar10 = (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        *(float *)((longlong)&this->_padding_ + 4) = fVar11;
        fVar11 = param_1->DeltaTime;
        if (fVar2 < fVar10) {
          fVar12 = fVar8 / fVar9;
        }
        pFVar6 = (FInputScaleBiasClampConstants *)(**(code **)(this->_padding_ + 0x178))(this);
        fVar11 = FInputScaleBiasClampState::ApplyTo
                           (&this->PlayRateScaleBiasClampState,pFVar6,fVar12,fVar11);
        bVar3 = (bool)(**(code **)(this->_padding_ + 0xd0))(this);
        FAnimNode_AssetPlayerBase::CreateTickRecordForNode
                  ((FAnimNode_AssetPlayerBase *)this,param_1,pUVar4,bVar3,fVar11,false);
        FAnimTrace::OutputAnimSequencePlayer((FAnimationBaseContext *)param_1,this);
        local_res10 = (FName)pUVar4->_padding_;
        pFVar7 = &local_res10;
        goto LAB_14749eb94;
      }
      goto LAB_14749eced;
    }
    bVar3 = `FAnimNode_SequencePlayerBase::UpdateAssetPlayer'::__l3::<lambda_1>::operator()
                      (&local_res8);
    if (bVar3) goto LAB_14749ebe6;
    FAnimTrace::OutputAnimSequencePlayer((FAnimationBaseContext *)param_1,this);
    pUVar4 = (UAnimSequenceBase *)0x0;
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar7 = &local_res8;
LAB_14749eb94:
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             pFVar7);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Asset",
             (UObject *)pUVar4);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Playback Time",*(float *)((longlong)&this->_padding_ + 4));
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14749ed20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FAnimNode_SequencePlayerBase::Evaluate_AnyThread
          (FAnimNode_SequencePlayerBase *this,FPoseContext *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TSharedRef<FTokenizedMessage,1> *pTVar10;
  FName *pFVar11;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_198;
  FText local_188;
  FText local_178;
  double local_168;
  byte local_160;
  longlong local_15c;
  undefined4 local_154;
  undefined1 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  undefined1 local_127;
  FTextFormat local_120;
  FString local_110;
  FString local_100;
  FFormatArgumentValue local_e8;
  undefined4 local_c8;
  FText local_b8;
  FText local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  FAnimationPoseData local_88;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SequencePlayerBase::Evaluate_AnyThread");
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x148))(this);
  if ((plVar5 == (longlong *)0x0) || (plVar5[7] == 0)) {
    if (param_1->bExpectsAdditivePose != false) {
      FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
      FStatsHierarchical::EndMeasurement();
      return;
    }
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
  }
  else {
    bVar4 = param_1->bExpectsAdditivePose;
    cVar3 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
    if ((bVar4 != false) && (cVar3 == '\0')) {
      UObjectBaseUtility::GetFullName
                (*(UObjectBaseUtility **)(param_1->_padding_ + 0x140),&local_100,(UObject *)0x0,None
                );
      pFVar6 = FText::FromString(&local_70,&local_100);
      local_res18 = *(FName *)(plVar5 + 3);
      ::FName::ToString(&local_res18,&local_110);
      pFVar7 = FText::FromString(&local_60,&local_110);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"AnimNode_SequencePlayer",L"AdditiveMismatchWarning",
                          L"Trying to play a non-additive animation \'{0}\' into a pose that is expected to be additive in anim instance \'{1}\'"
                         );
      pFVar9 = FTextFormat::FTextFormat(&local_50,pFVar8,Default);
      local_e8.Type = Text;
      FText::FText((FText *)&local_e8.TextValue,pFVar7);
      if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_c8 = 4;
      FText::FText(&local_b8,pFVar6);
      if (local_b8.TextData.Reference == (ITextData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_198.AllocatorInstance,2,&local_198.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_198.AllocatorInstance.Data,&local_e8,2);
      local_120.TextFormatData.Object = (pFVar9->TextFormatData).Object;
      local_120.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_120.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_120.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_120.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_178,&local_120,&local_198);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
      if ((FFormatArgumentValue *)local_198.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar1 = (pFVar7->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (pFVar6->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      local_188.TextData.Reference = local_178.TextData.Reference;
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 8))
                  (local_178.TextData.Reference,local_res8);
      }
      local_188.Flags = local_178.Flags;
      pTVar10 = FTokenizedMessage::Create(&local_98,Warning,&local_188);
      pFVar11 = ::FName::FName(&local_res20,"Evaluate");
      FAnimInstanceProxy::LogMessage((FAnimInstanceProxy *)param_1->_padding_,*pFVar11,pTVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
    }
    FAnimationPoseData::FAnimationPoseData(&local_88,param_1);
    pcVar2 = *(code **)(*plVar5 + 0x330);
    local_150 = (**(code **)(this->_padding_ + 0xd0))(this);
    local_168 = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_154 = (undefined4)this->_padding_;
    local_160 = *(byte *)(param_1->_padding_ + 0x801) >> 1 & 1;
    local_15c = this->_padding_;
    local_148 = (void *)0x0;
    local_140 = 0;
    local_138 = (void *)0x0;
    local_130 = 0;
    local_127 = 0;
    (*pcVar2)(plVar5,&local_88,&local_168);
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
      FStatsHierarchical::EndMeasurement();
      return;
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 14749f160

void __thiscall
FAnimNode_SequencePlayerBase::GatherDebugData
          (FAnimNode_SequencePlayerBase *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  longlong lVar2;
  int iVar3;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase,(UObject *)pUVar1,
                         L"AnimNode_SequencePlayerBase");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.OuterSingleton
                      )->_padding_;
  ::FName::ToString(&local_res8,&local_68);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  lVar2 = (**(code **)(this->_padding_ + 0x148))(this);
  if (lVar2 != 0) {
    local_res8 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res8,local_48);
  }
  ::FString::PrintfImpl(&local_68,L"(\'%s\' Play Time: %.3f)");
  iVar3 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar3);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((lVar2 != 0) && (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
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
  return;
}

// GetSequence @ 14749f380

UAnimSequenceBase * __thiscall
FAnimNode_SequencePlayerBase::GetSequence(FAnimNode_SequencePlayerBase *this)

{
  return (UAnimSequenceBase *)0x0;
}

// GetLoopAnimation @ 14749f390

bool __thiscall FAnimNode_SequencePlayerBase::GetLoopAnimation(FAnimNode_SequencePlayerBase *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014749f393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0xd0))();
  return (bool)uVar1;
}

// SetSequence @ 14749f3a0

bool __thiscall
FAnimNode_SequencePlayerBase::SetSequence
          (FAnimNode_SequencePlayerBase *this,UAnimSequenceBase *param_1)

{
  return false;
}

// SetLoopAnimation @ 14749f3b0

bool __thiscall
FAnimNode_SequencePlayerBase::SetLoopAnimation(FAnimNode_SequencePlayerBase *this,bool param_1)

{
  return false;
}

// GetPlayRateBasis @ 14749f3c0

float __thiscall FAnimNode_SequencePlayerBase::GetPlayRateBasis(FAnimNode_SequencePlayerBase *this)

{
  return __real_3f800000;
}

// GetPlayRate @ 14749f3d0

float __thiscall FAnimNode_SequencePlayerBase::GetPlayRate(FAnimNode_SequencePlayerBase *this)

{
  return __real_3f800000;
}

// GetPlayRateScaleBiasClampConstants @ 14749f3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInputScaleBiasClampConstants * __thiscall
FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(FAnimNode_SequencePlayerBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.InRange = ___xmm_3f800000000000003f80000000000000;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.OutRange = _UNK_15076b198;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.bMapRange = false;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.bClampResult = false;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.Scale = ___xmm_3f80000000000000000000003f800000;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.Bias = _UNK_15076b184;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.ClampMin = _UNK_15076b188;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.ClampMax = _UNK_15076b18c;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.bInterpResult = false;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.InterpSpeedIncreasing = 10.0;
      `protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
      ::__l2::Dummy.InterpSpeedDecreasing = 10.0;
      _Init_thread_footer(&`protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`protected:_virtual_struct_FInputScaleBiasClampConstants_const&___ptr64___cdecl_FAnimNode_SequencePlayerBase::GetPlayRateScaleBiasClampConstants(void)const___ptr64'
          ::__l2::Dummy;
}

// GetStartPosition @ 14749f480

float __thiscall FAnimNode_SequencePlayerBase::GetStartPosition(FAnimNode_SequencePlayerBase *this)

{
  return 0.0;
}

// GetStartFromMatchingPose @ 14749f490

bool __thiscall
FAnimNode_SequencePlayerBase::GetStartFromMatchingPose(FAnimNode_SequencePlayerBase *this)

{
  return false;
}

// SetStartPosition @ 14749f4a0

bool __thiscall
FAnimNode_SequencePlayerBase::SetStartPosition(FAnimNode_SequencePlayerBase *this,float param_1)

{
  return false;
}

// SetPlayRate @ 14749f4b0

bool __thiscall
FAnimNode_SequencePlayerBase::SetPlayRate(FAnimNode_SequencePlayerBase *this,float param_1)

{
  return false;
}

// GetEffectiveStartPosition @ 1474d9340

float __thiscall
FAnimNode_SequencePlayerBase::GetEffectiveStartPosition
          (FAnimNode_SequencePlayerBase *this,FAnimationBaseContext *param_1)

{
  char cVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  longlong local_res8;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_9b;
  undefined1 local_99;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined2 local_6b;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  longlong local_50;
  float local_48;
  
  local_res8 = (**(code **)(this->_padding_ + 0x148))();
  if ((local_res8 != 0) && (cVar1 = (**(code **)(this->_padding_ + 0x188))(this), cVar1 != '\0')) {
    pIVar3 = IModularFeatures::Get();
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3);
    pIVar3 = IModularFeatures::Get();
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::FeatureName,L"AnimPoseSearch");
      _Init_thread_footer(&::_TSS0);
    }
    iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,::FeatureName);
    if (iVar2 < 1) {
      pIVar3 = IModularFeatures::Get();
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
    else {
      pIVar3 = IModularFeatures::Get();
      if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::FeatureName,L"AnimPoseSearch");
        _Init_thread_footer(&::_TSS0);
      }
      lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,::FeatureName,0);
      plVar5 = (longlong *)(lVar4 + -8);
      if (lVar4 == 0) {
        plVar5 = (longlong *)0x0;
      }
      pIVar3 = IModularFeatures::Get();
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      if (plVar5 != (longlong *)0x0) {
        local_b8 = &local_res8;
        local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_9b = 0;
        local_99 = 0;
        local_80 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_9c = 0;
        local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uStack_94 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uStack_8c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_6b = 0;
        local_69 = 0;
        local_78 = 0;
        local_70 = 0;
        local_6c = 0;
        local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uStack_64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uStack_5c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uStack_b0 = 1;
        (**(code **)(*plVar5 + 8))(plVar5,&local_50,param_1,&local_b8,&local_78,&local_a8);
        if (local_50 != 0) {
          return local_48;
        }
      }
    }
  }
  fVar6 = (float)(**(code **)(this->_padding_ + 0x180))(this);
  return fVar6;
}

// GetTimeFromEnd @ 1474e02e0

float __thiscall
FAnimNode_SequencePlayerBase::GetTimeFromEnd(FAnimNode_SequencePlayerBase *this,float param_1)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x148))();
  if (plVar1 != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x2c0))(plVar1);
    return fVar2 - param_1;
  }
  return 0.0;
}

// operator() @ 15050a0e0

bool __thiscall
`FAnimNode_SequencePlayerBase::Initialize_AnyThread'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<824006616952078392>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<824006616952078392>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15050a120

bool __thiscall
`FAnimNode_SequencePlayerBase::UpdateAssetPlayer'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<824006616952078428>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<824006616952078428>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

