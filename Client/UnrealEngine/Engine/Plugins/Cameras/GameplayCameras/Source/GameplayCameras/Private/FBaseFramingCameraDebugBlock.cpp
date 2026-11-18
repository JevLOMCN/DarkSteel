// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FBaseFramingCameraDebugBlock @ 14d5fb5a0

FBaseFramingCameraDebugBlock * __thiscall
UE::Cameras::FBaseFramingCameraDebugBlock::FBaseFramingCameraDebugBlock
          (FBaseFramingCameraDebugBlock *this)

{
  (this->State).ReframeDamper.W0 = -1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBaseFramingCameraDebugBlock_Cameras_UE__6B_;
  (this->State).DeadZone.RightBound = 1.0;
  (this->State).DeadZone.BottomBound = 1.0;
  (this->State).SoftZone.RightBound = 1.0;
  (this->State).SoftZone.BottomBound = 1.0;
  (this->State).ScreenTargetBounds.RightBound = 1.0;
  (this->State).ScreenTargetBounds.BottomBound = 1.0;
  (this->State).EffectiveDeadZone.RightBound = 1.0;
  (this->State).EffectiveDeadZone.BottomBound = 1.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->State).bIsReframingTarget = false;
  (this->State).DebugAllScreenTargetBounds.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FFramingZone>)0x0;
  (this->State).DeadZone.LeftBound = 0.0;
  (this->State).DeadZone.TopBound = 0.0;
  (this->State).SoftZone.LeftBound = 0.0;
  (this->State).SoftZone.TopBound = 0.0;
  (this->State).ScreenTargetBounds.LeftBound = 0.0;
  (this->State).ScreenTargetBounds.TopBound = 0.0;
  (this->State).EffectiveDeadZone.LeftBound = 0.0;
  (this->State).EffectiveDeadZone.TopBound = 0.0;
  (this->State).ReframeDamper.X0 = 0.0;
  (this->State).ReframeDamper.X0Derivative = 0.0;
  (this->State).DebugAllScreenTargetBounds.ArrayNum = 0;
  (this->State).DebugAllScreenTargetBounds.ArrayMax = 4;
  (this->Desired).bHasCorrection = false;
  (this->WorldTargets).TargetInfos.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0;
  (this->WorldTargets).TargetInfos.ArrayNum = 0;
  (this->WorldTargets).TargetInfos.ArrayMax = 4;
  return this;
}

// GetStaticFields @ 14d61dd80

TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Cameras::FBaseFramingCameraDebugBlock::GetStaticFields(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBaseFramingCameraDebugBlock::GetStaticFields(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBaseFramingCameraDebugBlock::GetStaticFields(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBaseFramingCameraDebugBlock::GetStaticFields(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Cameras::FBaseFramingCameraDebugBlock::GetStaticFields'::__l2::
             _dynamic_atexit_destructor_for__StaticFields__);
      _Init_thread_footer(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBaseFramingCameraDebugBlock::GetStaticFields(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *)
         &`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBaseFramingCameraDebugBlock::GetStaticFields(void)'
          ::__l2::StaticFields;
}

// GetTypeID @ 14d61e4f0

FCameraObjectTypeID * __thiscall
UE::Cameras::FBaseFramingCameraDebugBlock::GetTypeID(FBaseFramingCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621060

bool __thiscall
UE::Cameras::FBaseFramingCameraDebugBlock::IsKindOf
          (FBaseFramingCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBaseFramingCameraDebugBlock>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
         FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d626570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FBaseFramingCameraDebugBlock::OnDebugDraw
          (FBaseFramingCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  ETargetFramingState EVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  wchar_t *pwVar5;
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> FVar6;
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> FVar7;
  undefined1 local_res8 [8];
  FString local_58;
  FLinearColor_u_0 local_48 [3];
  
  ::FString::FString(&local_58,L"Unknown");
  EVar1 = (this->State).TargetFramingState;
  if (EVar1 == InDeadZone) {
    pwVar5 = L"Dead Zone";
  }
  else if (EVar1 == InSoftZone) {
    pwVar5 = L"Soft Zone";
  }
  else {
    if (EVar1 != InHardZone) goto LAB_14d6265e0;
    pwVar5 = L"Hard Zone";
  }
  ::FString::operator=(&local_58,pwVar5);
LAB_14d6265e0:
  FCameraDebugRenderer::AddText(param_2,L"state [%s]");
  if ((this->State).bIsReframingTarget != false) {
    FCameraDebugRenderer::AddText(param_2,L"[REFRAMING]");
  }
  FCameraDebugRenderer::NewLine(param_2,false);
  FCameraDebugRenderer::AddIndent(param_2);
  if (param_2->Canvas != (FCanvas *)0x0) {
    FCameraDebugRenderer::AddText(param_2,L"correction (%0.1f ; %0.1f) ");
    FCameraDebugRenderer::AddText(param_2,L"target (%0.1f; %0.1f) ");
  }
  FCameraDebugRenderer::AddText(param_2,L"damping %0.3f (factor = %0.1f)\n");
  FCameraDebugRenderer::AddText
            (param_2,L"reengage/disengage time left %.3f (damping factor alpha = %.1f)\n");
  FCameraDebugRenderer::AddText(param_2,L"interpolation = %.1f\n");
  FCameraDebugRenderer::RemoveIndent(param_2);
  FBaseFramingCameraNodeEvaluator::DrawFramingState(&this->State,&this->Desired,param_2);
  fVar4 = __real_3dcccccd;
  fVar3 = __real_3b808081;
  iVar2 = (this->WorldTargets).TargetInfos.ArrayNum;
  FVar6 = (this->WorldTargets).TargetInfos.AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)0x0) {
    FVar6 = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)&this->WorldTargets;
  }
  FVar7 = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)
          ((longlong)iVar2 * 0xa0 + (longlong)FVar6);
  while( true ) {
    if ((this->WorldTargets).TargetInfos.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraActorComputedTargetInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    local_48[0]._0_4_ =
         FLinearColor::sRGBToLinearTable[FColorList::LightSteelBlue.field0_0x0._s_0.R];
    local_48[0]._4_4_ =
         FLinearColor::sRGBToLinearTable[FColorList::LightSteelBlue.field0_0x0._s_0.G];
    local_48[0]._8_4_ =
         FLinearColor::sRGBToLinearTable[FColorList::LightSteelBlue.field0_0x0._s_0.B];
    local_48[0]._12_4_ = (float)FColorList::LightSteelBlue.field0_0x0._3_1_ * fVar3;
    FCameraDebugRenderer::DrawBox
              (param_2,(TTransform<double> *)FVar6,(TVector<double> *)((longlong)FVar6 + 0x78),
               (FLinearColor *)&local_48[0]._s_0,fVar4);
    FVar6 = (ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>)((longlong)FVar6 + 0xa0);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSerialize @ 14d62d850

void __thiscall
UE::Cameras::FBaseFramingCameraDebugBlock::OnSerialize
          (FBaseFramingCameraDebugBlock *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  
  pTVar3 = GetStaticFields();
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  iVar2 = pTVar3->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraDebugBlockField_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar4 + 8))(*(longlong **)pFVar4,this,param_1);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

