// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 31

// StaticClass @ 14ad1a1a0

UClass * __cdecl UCameraAnimationCameraModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationCameraModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"CameraAnimationCameraModifier",
               &Z_Registration_Info_UClass_UCameraAnimationCameraModifier.InnerSingleton,
               StaticRegisterNativesUCameraAnimationCameraModifier,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Camera",InternalConstructor<UCameraAnimationCameraModifier>,
               InternalVTableHelperCtorCaller<UCameraAnimationCameraModifier>,local_res8,
               UCameraModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationCameraModifier.InnerSingleton;
}

// UCameraAnimationCameraModifier @ 14ad1e450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraAnimationCameraModifier * __thiscall
UCameraAnimationCameraModifier::UCameraAnimationCameraModifier
          (UCameraAnimationCameraModifier *this,FVTableHelper *param_1)

{
  UCameraModifier::UCameraModifier((UCameraModifier *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraAnimationCameraModifier__6B_;
  (this->ActiveAnimations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAnimations).ArrayNum = 0;
  (this->ActiveAnimations).ArrayMax = 0;
  return this;
}

// UCameraAnimationCameraModifier @ 14ad1e490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraAnimationCameraModifier * __thiscall
UCameraAnimationCameraModifier::UCameraAnimationCameraModifier
          (UCameraAnimationCameraModifier *this,FObjectInitializer *param_1)

{
  UCameraModifier::UCameraModifier((UCameraModifier *)this,param_1);
  this->NextInstanceSerialNumber = 1;
  this->_padding_ = (longlong)&___7UCameraAnimationCameraModifier__6B_;
  (this->ActiveAnimations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAnimations).ArrayNum = 0;
  (this->ActiveAnimations).ArrayMax = 0;
  return this;
}

// ~UCameraAnimationCameraModifier @ 14ad1ee90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraAnimationCameraModifier::~UCameraAnimationCameraModifier
          (UCameraAnimationCameraModifier *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCameraAnimationCameraModifier__6B_;
  pFVar1 = (this->ActiveAnimations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraModifier::~UCameraModifier((UCameraModifier *)this);
  return;
}

// DeactivateCameraAnimation @ 14ad1f9a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraAnimationCameraModifier::DeactivateCameraAnimation
          (UCameraAnimationCameraModifier *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FActiveCameraAnimationInfo *this_00;
  TObjectPtr<UCameraAnimationSequence>_u_0 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  FCameraAnimationHandle local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined2 local_18;
  
  if ((param_1 < 0) || ((this->ActiveAnimations).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveAnimations.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                       ,0x12d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->ActiveAnimations).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FActiveCameraAnimationInfo *)
            ((this->ActiveAnimations).AllocatorInstance.Data + (longlong)param_1 * 0x78);
  if ((this_00->Player).field0_0x0.DebugPtr == (UCameraAnimationSequencePlayer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CameraAnimation.Player",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                       ,0x130,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = (**(code **)(((this_00->Player).field0_0x0.DebugPtr)->_padding_ + 0x40))();
  if (iVar4 != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6584040231744306895>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                       ,0x131,
                       "CameraAnimation.Player->GetPlaybackStatus() == EMovieScenePlayerStatus::Stopped"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UCameraAnimationSequencePlayer::Stop((this_00->Player).field0_0x0.DebugPtr);
  }
  local_88.DebugPtr = (UCameraAnimationSequence *)0x0;
  local_50 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_48 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_80 = 0x3f800000;
  local_40 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_30 = 0;
  uStack_28 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_38 = FCameraAnimationHandle::Invalid;
  local_20 = 0;
  local_18 = 0;
  FActiveCameraAnimationInfo::operator=(this_00,(FActiveCameraAnimationInfo *)&local_88.ObjectPtr);
  return;
}

// DisplayDebug @ 14ad1fb70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UCameraAnimationCameraModifier::DisplayDebug
          (UCameraAnimationCameraModifier *this,UCanvas *param_1,FDebugDisplayInfo *param_2,
          float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  UFont *pUVar15;
  FString *pFVar16;
  wchar_t *pwVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  int local_258;
  float fStack_24c;
  FString local_240;
  FName local_230 [2];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  FName local_208;
  UFont *local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FString local_1b8;
  FString local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  FString local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  FFontRenderInfo local_138;
  FFontRenderInfo local_f8 [2];
  
  uVar18 = 0;
  bVar8 = false;
  bVar7 = false;
  UCanvas::SetDrawColor(param_1,&FColor::Yellow);
  pUVar15 = UEngine::GetSmallFont();
  fVar1 = *param_3;
  local_138._0_4_ = local_138._0_4_ & 0xfffffffc;
  local_138.GlowInfo._0_4_ = local_138.GlowInfo._0_4_ & 0xfffffffe;
  local_138.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
  local_138.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
  local_138.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_138.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  iVar13 = -((int)ROUND(__real_bf000000 - (*param_4 + *param_4) / fVar1) >> 1);
  local_138.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_138.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_258 = iVar13 + 1;
  local_230[0] = (FName)this->_padding_;
  local_200 = pUVar15;
  ::FName::ToString(local_230,&local_1e8);
  ::FString::PrintfImpl(&local_1f8,L"Modifier_CameraAnimationSequence %s, Alpha:%f");
  fVar11 = __real_3f800000;
  local_1c8 = local_1f8.Data.AllocatorInstance.Data;
  iStack_1c0 = local_1f8.Data.ArrayNum + -1;
  if (local_1f8.Data.ArrayNum == 0) {
    iStack_1c0 = 0;
  }
  local_188._12_4_ = uStack_1bc;
  local_188.Size = iStack_1c0;
  local_188.DataPtr = (wchar_t *)local_1f8.Data.AllocatorInstance.Data;
  UCanvas::DrawText(param_1,pUVar15,&local_188,fVar1,(float)iVar13 * fVar1,__real_3f800000,
                    __real_3f800000,&local_138);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (0 < (this->ActiveAnimations).ArrayNum) {
    lVar19 = 0;
    bVar10 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar18 < (this->ActiveAnimations).ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->ActiveAnimations).AllocatorInstance.Data;
      bVar9 = bVar10;
      if (*(longlong *)(pFVar3 + lVar19) != 0) {
        UCameraAnimationSequencePlayer::GetDuration
                  (*(UCameraAnimationSequencePlayer **)(pFVar3 + lVar19 + 0x58));
        UCameraAnimationSequencePlayer::GetCurrentPosition
                  (*(UCameraAnimationSequencePlayer **)(pFVar3 + lVar19 + 0x58));
        fStack_24c = (float)local_230[1].Number;
        auVar20 = roundps(in_XMM2,ZEXT416((uint)fStack_24c),1);
        fStack_24c = fStack_24c - auVar20._0_4_;
        if (::FFrameTime::MaxSubframe <= fStack_24c) {
          fStack_24c = ::FFrameTime::MaxSubframe;
        }
        if (fStack_24c <= 0.0) {
          fStack_24c = 0.0;
        }
        local_220 = CONCAT44(fStack_24c,
                             (int)auVar20._0_4_ +
                             ((uint)local_230[1].ComparisonIndex.Value -
                             *(int *)(*(longlong *)(pFVar3 + lVar19 + 0x58) + 0x314)));
        local_210 = local_218;
        pwVar17 = L"";
        if (pFVar3[lVar19 + 0x20] != (FScriptContainerElement)0x0) {
          pwVar17 = L" Looping";
        }
        ::FString::FString(&local_148,pwVar17);
        if (pFVar3[lVar19 + 0x70] == (FScriptContainerElement)0x0) {
          bVar7 = true;
          pFVar16 = ::FString::FString(&local_178,L"");
        }
        else {
          bVar8 = true;
          ::FString::PrintfImpl(&local_1b8,L" Easing In: %f / %f");
          pFVar16 = &local_1b8;
        }
        pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        if ((bVar7) &&
           (bVar7 = false, local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if ((bVar8) &&
           (bVar8 = false, local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        bVar12 = pFVar3[lVar19 + 0x71] == (FScriptContainerElement)0x0;
        if (bVar12) {
          pFVar16 = ::FString::FString(&local_168,L"");
        }
        else {
          ::FString::PrintfImpl(&local_1a8,L" Easing Out: %f / %f");
          pFVar16 = &local_1a8;
        }
        pFVar5 = (pFVar16->Data).AllocatorInstance.Data;
        bVar9 = bVar12 | bVar10;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        if (((bool)(bVar12 | bVar10)) &&
           (bVar9 = 0, local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if ((!bVar12) && (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        INSERT(local_f8[0]._0_4_,0,1,1);
        INSERT(local_f8[0]._0_4_,0,0,1);
        INSERT(local_f8[0].GlowInfo._0_4_,0,0,1);
        fVar1 = *(float *)(pFVar3 + lVar19 + 8);
        fVar2 = *param_3;
        local_f8[0].GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
        local_f8[0].GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
        local_f8[0].GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
        local_f8[0].GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
        iVar13 = local_258 + 1;
        local_f8[0].GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
        local_f8[0].GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
        if (*(longlong *)(pFVar3 + lVar19) == 0) {
          ::FString::FString(&local_240,L"None");
        }
        else {
          local_208 = *(FName *)(*(longlong *)(pFVar3 + lVar19) + 0x18);
          ::FName::ToString(&local_208,&local_240);
        }
        in_XMM2._0_8_ = (double)fVar1;
        in_XMM2._8_8_ = 0;
        ::FString::PrintfImpl(&local_1d8,L"[%d] %s PlayRate: %f Duration: %f Elapsed: %f%s%s");
        local_198 = local_1d8.Data.AllocatorInstance.Data;
        iStack_190 = local_1d8.Data.ArrayNum + -1;
        if (local_1d8.Data.ArrayNum == 0) {
          iStack_190 = 0;
        }
        local_158._12_4_ = uStack_18c;
        local_158.Size = iStack_190;
        local_158.DataPtr = (wchar_t *)local_1d8.Data.AllocatorInstance.Data;
        UCanvas::DrawText(param_1,local_200,&local_158,fVar2 + fVar2,(float)local_258 * fVar2,fVar11
                          ,fVar11,local_f8);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        local_258 = iVar13;
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 0x78;
      bVar10 = bVar9;
    } while ((int)uVar18 < (this->ActiveAnimations).ArrayNum);
  }
  *param_4 = (float)local_258 * *param_3;
  UCameraModifier::DisplayDebug((UCameraModifier *)this,param_1,param_2,param_3,param_4);
  return;
}

// EvaluateEasing @ 14ad213d0

float __cdecl
UCameraAnimationCameraModifier::EvaluateEasing(ECameraAnimationEasingType param_1,float param_2)

{
  float fVar1;
  
  switch(param_1) {
  default:
    return param_2;
  case Sinusoidal:
    fVar1 = sinf(param_2 * __real_3fc90fdb);
    return fVar1;
  case Quadratic:
    goto switchD_14ad213ec_caseD_2;
  case Cubic:
    return param_2 * param_2 * param_2;
  case Quartic:
    param_2 = param_2 * param_2;
switchD_14ad213ec_caseD_2:
    return param_2 * param_2;
  case Quintic:
    return param_2 * param_2 * param_2 * param_2 * param_2;
  case Exponential:
    fVar1 = powf(__real_40000000,(param_2 - __real_3f800000) * __real_41200000);
    return fVar1;
  case Circular:
    return __real_3f800000 - SQRT(__real_3f800000 - param_2 * param_2);
  }
}

// FindInactiveCameraAnimation @ 14ad214c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

int __thiscall
UCameraAnimationCameraModifier::FindInactiveCameraAnimation(UCameraAnimationCameraModifier *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  TObjectPtr<UCameraAnimationSequence>_u_0 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  FCameraAnimationHandle local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined2 local_28;
  
  uVar9 = 0;
  uVar11 = uVar9;
  if (0 < (this->ActiveAnimations).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < (this->ActiveAnimations).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      if (*(longlong *)((this->ActiveAnimations).AllocatorInstance.Data + uVar11) == 0) {
        local_48 = FCameraAnimationHandle::Invalid;
        local_60 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        dStack_58 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_98.DebugPtr = (UCameraAnimationSequence *)0x0;
        local_88 = 0;
        local_84 = 0;
        local_80 = 0;
        local_7c = 0;
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_6c = 0;
        local_68 = 0;
        local_30 = 0;
        local_28 = 0;
        uVar6 = 0;
        if ((int)uVar8 < (this->ActiveAnimations).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        local_50 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        local_90 = 0x3f800000;
        local_8c = 0x3f800000;
        local_40 = 0;
        uStack_38 = 0;
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        FActiveCameraAnimationInfo::operator=
                  ((FActiveCameraAnimationInfo *)
                   ((this->ActiveAnimations).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x78),
                   (FActiveCameraAnimationInfo *)&local_98.ObjectPtr);
        return uVar8;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 0x78;
    } while ((int)(uVar8 + 1) < (this->ActiveAnimations).ArrayNum);
  }
  iVar7 = (this->ActiveAnimations).ArrayNum;
  piVar1 = &(this->ActiveAnimations).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,&(this->ActiveAnimations).AllocatorInstance,piVar1);
    (this->ActiveAnimations).ArrayNum = iVar7;
  }
  pFVar2 = (this->ActiveAnimations).AllocatorInstance.Data;
  (this->ActiveAnimations).ArrayNum = iVar7 + 1;
  lVar10 = (longlong)iVar7 * 0x78;
  *(undefined8 *)(pFVar2 + lVar10) = 0;
  *(undefined4 *)(pFVar2 + lVar10 + 8) = 0x3f800000;
  *(undefined4 *)(pFVar2 + lVar10 + 0xc) = 0x3f800000;
  pFVar2[lVar10 + 0x10] = (FScriptContainerElement)0x0;
  *(undefined4 *)(pFVar2 + lVar10 + 0x14) = 0;
  pFVar2[lVar10 + 0x18] = (FScriptContainerElement)0x0;
  *(undefined4 *)(pFVar2 + lVar10 + 0x1c) = 0;
  pFVar2[lVar10 + 0x20] = (FScriptContainerElement)0x0;
  *(undefined4 *)(pFVar2 + lVar10 + 0x24) = 0;
  pFVar2[lVar10 + 0x28] = (FScriptContainerElement)0x0;
  *(undefined4 *)(pFVar2 + lVar10 + 0x2c) = 0;
  pFVar2[lVar10 + 0x30] = (FScriptContainerElement)0x0;
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)(pFVar2 + lVar10 + 0x38) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)(pFVar2 + lVar10 + 0x38 + 8) = dVar4;
  *(double *)(pFVar2 + lVar10 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(FCameraAnimationHandle *)(pFVar2 + lVar10 + 0x50) = FCameraAnimationHandle::Invalid;
  *(undefined8 *)(pFVar2 + lVar10 + 0x58) = 0;
  *(undefined8 *)(pFVar2 + lVar10 + 0x60) = 0;
  *(undefined8 *)(pFVar2 + lVar10 + 0x68) = 0;
  *(undefined2 *)(pFVar2 + lVar10 + 0x70) = 0;
  return iVar7;
}

// GetActiveCameraAnimation @ 14ad21710

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FActiveCameraAnimationInfo * __thiscall
UCameraAnimationCameraModifier::GetActiveCameraAnimation
          (UCameraAnimationCameraModifier *this,FCameraAnimationHandle *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FActiveCameraAnimationInfo *pFVar4;
  FActiveCameraAnimationInfo *pFVar5;
  
  uVar1 = param_1->InstanceID;
  if ((uVar1 != 0xffff) && ((int)(uint)uVar1 < (this->ActiveAnimations).ArrayNum)) {
    if ((this->ActiveAnimations).ArrayNum <= (int)(uint)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FActiveCameraAnimationInfo *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar5 = (FActiveCameraAnimationInfo *)
             ((this->ActiveAnimations).AllocatorInstance.Data + (ulonglong)uVar1 * 0x78);
    pFVar4 = (FActiveCameraAnimationInfo *)0x0;
    if ((pFVar5->Handle).InstanceSerial == param_1->InstanceSerial) {
      pFVar4 = pFVar5;
    }
    return pFVar4;
  }
  return (FActiveCameraAnimationInfo *)0x0;
}

// GetActiveCameraAnimation @ 14ad217b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FActiveCameraAnimationInfo * __thiscall
UCameraAnimationCameraModifier::GetActiveCameraAnimation
          (UCameraAnimationCameraModifier *this,FCameraAnimationHandle *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FActiveCameraAnimationInfo *pFVar4;
  FActiveCameraAnimationInfo *pFVar5;
  
  uVar1 = param_1->InstanceID;
  if ((uVar1 != 0xffff) && ((int)(uint)uVar1 < (this->ActiveAnimations).ArrayNum)) {
    if ((this->ActiveAnimations).ArrayNum <= (int)(uint)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FActiveCameraAnimationInfo *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar5 = (FActiveCameraAnimationInfo *)
             ((this->ActiveAnimations).AllocatorInstance.Data + (ulonglong)uVar1 * 0x78);
    pFVar4 = (FActiveCameraAnimationInfo *)0x0;
    if ((pFVar5->Handle).InstanceSerial == param_1->InstanceSerial) {
      pFVar4 = pFVar5;
    }
    return pFVar4;
  }
  return (FActiveCameraAnimationInfo *)0x0;
}

// GetCameraAnimationCameraModifier @ 14ad21850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCameraAnimationCameraModifier * __cdecl
UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(UObject *param_1,int param_2)

{
  APlayerController *pAVar1;
  UCameraAnimationCameraModifier *pUVar2;
  
  pAVar1 = UGameplayStatics::GetPlayerController(param_1,param_2);
  pUVar2 = GetCameraAnimationCameraModifierFromPlayerController(pAVar1);
  return pUVar2;
}

// GetCameraAnimationCameraModifierFromID @ 14ad21870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCameraAnimationCameraModifier * __cdecl
UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(UObject *param_1,int param_2)

{
  APlayerController *pAVar1;
  UCameraAnimationCameraModifier *pUVar2;
  
  pAVar1 = UGameplayStatics::GetPlayerControllerFromID(param_1,param_2);
  pUVar2 = GetCameraAnimationCameraModifierFromPlayerController(pAVar1);
  return pUVar2;
}

// GetCameraAnimationCameraModifierFromPlayerController @ 14ad21890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCameraAnimationCameraModifier * __cdecl
UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController
          (APlayerController *param_1)

{
  int iVar1;
  APlayerCameraManager *pAVar2;
  code *pcVar3;
  UCameraAnimationCameraModifier *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  if (param_1 == (APlayerController *)0x0) {
    return (UCameraAnimationCameraModifier *)0x0;
  }
  pAVar2 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pAVar2->_padding_ + 2000);
  local_res8 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar4 = (UCameraAnimationCameraModifier *)(*pcVar3)(pAVar2,&local_res8);
  if (pUVar4 == (UCameraAnimationCameraModifier *)0x0) {
    pUVar4 = (UCameraAnimationCameraModifier *)0x0;
  }
  else {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      pFVar6 = GetTypeName<UCameraAnimationCameraModifier>(&local_28);
      pwVar8 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UCameraModifier>(&local_18,(UCameraModifier *)pUVar4);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar7);
    }
  }
  return pUVar4;
}

// GetPrivateStaticClass @ 14ad21a70

UClass * __cdecl UCameraAnimationCameraModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationCameraModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"CameraAnimationCameraModifier",
               &Z_Registration_Info_UClass_UCameraAnimationCameraModifier.InnerSingleton,
               StaticRegisterNativesUCameraAnimationCameraModifier,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Camera",InternalConstructor<UCameraAnimationCameraModifier>,
               InternalVTableHelperCtorCaller<UCameraAnimationCameraModifier>,local_res8,
               UCameraModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationCameraModifier.InnerSingleton;
}

// IsCameraAnimationActive @ 14ad228b0

bool __thiscall
UCameraAnimationCameraModifier::IsCameraAnimationActive
          (UCameraAnimationCameraModifier *this,FCameraAnimationHandle *param_1)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  uVar1 = param_1->InstanceID;
  if ((uVar1 != 0xffff) && ((int)(uint)uVar1 < (this->ActiveAnimations).ArrayNum)) {
    if ((this->ActiveAnimations).ArrayNum <= (int)(uint)uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar2 = (this->ActiveAnimations).AllocatorInstance.Data;
    if (*(ushort *)(pFVar2 + (ulonglong)uVar1 * 0x78 + 0x52) == param_1->InstanceSerial) {
      iVar6 = (**(code **)(*(longlong *)
                            (*(longlong *)(pFVar2 + (ulonglong)uVar1 * 0x78 + 0x58) + 0x28) + 0x40))
                        ();
      return iVar6 == 1;
    }
  }
  return false;
}

// ModifyCamera @ 14ad22b30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCameraAnimationCameraModifier::ModifyCamera
          (UCameraAnimationCameraModifier *this,float param_1,FMinimalViewInfo *param_2)

{
  UCameraModifier::ModifyCamera((UCameraModifier *)this,param_1,param_2);
  TickAllAnimations(this,param_1,param_2);
  return false;
}

// PlayCameraAnimation @ 14ad22b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCameraAnimationHandle __thiscall
UCameraAnimationCameraModifier::PlayCameraAnimation
          (UCameraAnimationCameraModifier *this,UCameraAnimationSequence *param_1,
          FCameraAnimationParams *param_2)

{
  undefined8 uVar1;
  FName FVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  FCameraAnimationHandle FVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  FName FVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  UCameraAnimationSequenceCameraStandIn *this_00;
  ForAnyElementType FVar17;
  longlong *plVar18;
  undefined8 *in_R9;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_1f8 [32];
  undefined4 local_1c8;
  FName local_1c4;
  FName local_1b8;
  FName local_1b0;
  undefined8 *local_1a8;
  FString local_1a0;
  FName local_190;
  FName local_188;
  FString local_180;
  undefined1 local_168 [128];
  undefined1 local_e8 [128];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (param_2 == (FCameraAnimationParams *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6584040231744307105>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                       ,0x5f,"Sequence");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      FVar10 = (FCameraAnimationHandle)(*pcVar3)();
      return FVar10;
    }
    uVar7 = FCameraAnimationHandle::Invalid.InstanceSerial;
    *(ushort *)&param_1->field_0x0 = FCameraAnimationHandle::Invalid.InstanceID;
    *(ushort *)&param_1->field_0x2 = uVar7;
  }
  else {
    local_1c4 = *(FName *)&param_2->bLoop;
    local_1a8 = in_R9;
    ::FName::ToString(&local_1c4,&local_180);
    ::FString::PrintfImpl(&local_1a0,L"PlayCameraAnimation %s");
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar17.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar17.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                 ,100);
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    uVar11 = FindInactiveCameraAnimation(this);
    if ((0xfffe < (int)uVar11) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewIndex < ((uint16) 0xffff)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                           ,0x67,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      FVar10 = (FCameraAnimationHandle)(*pcVar3)();
      return FVar10;
    }
    local_1c8 = CONCAT22(this->NextInstanceSerialNumber,(short)uVar11);
    this->NextInstanceSerialNumber = this->NextInstanceSerialNumber + 1;
    uVar12 = 0;
    if ((int)uVar11 < (this->ActiveAnimations).ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      FVar10 = (FCameraAnimationHandle)(*pcVar3)();
      return FVar10;
    }
    pFVar19 = (this->ActiveAnimations).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x78;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    uVar1 = *in_R9;
    uVar4 = in_R9[1];
    *(FCameraAnimationParams **)pFVar19 = param_2;
    uVar5 = in_R9[2];
    uVar6 = in_R9[3];
    *(undefined8 *)(pFVar19 + 8) = uVar1;
    *(undefined8 *)(pFVar19 + 0x10) = uVar4;
    uVar1 = in_R9[4];
    uVar4 = in_R9[5];
    *(undefined8 *)(pFVar19 + 0x18) = uVar5;
    *(undefined8 *)(pFVar19 + 0x20) = uVar6;
    uVar5 = in_R9[6];
    uVar6 = in_R9[7];
    *(undefined8 *)(pFVar19 + 0x28) = uVar1;
    *(undefined8 *)(pFVar19 + 0x30) = uVar4;
    uVar1 = in_R9[8];
    *(undefined8 *)(pFVar19 + 0x38) = uVar5;
    *(undefined8 *)(pFVar19 + 0x40) = uVar6;
    *(undefined4 *)(pFVar19 + 0x50) = local_1c8;
    *(undefined8 *)(pFVar19 + 0x48) = uVar1;
    pFVar13 = ::FName::FName(&local_190,L"CameraAnimationPlayer");
    FVar2 = *pFVar13;
    FVar14 = (FName)Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister();
    MakeUniqueObjectName
              ((UObject *)&local_1b8,(UClass *)this,FVar14,FVar2.ComparisonIndex.Value.Value);
    if (local_1b8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar15 = Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_168,pUVar15);
    local_168._24_4_ = RF_NoFlags;
    local_168._40_8_ = (UObject *)0x0;
    local_168[0x20] = false;
    local_168._48_8_ = (FObjectInstancingGraph *)0x0;
    local_168._56_8_ = (UPackage *)0x0;
    local_168._16_4_ = local_1b8.ComparisonIndex.Value;
    local_168._20_4_ = local_1b8.Number;
    local_168._8_8_ = this;
    pUVar16 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_168);
    if (local_168._64_8_ != 0) {
      plVar18 = (longlong *)(local_168 + 0x50);
      if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_168._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar16);
    }
    *(UObject **)(pFVar19 + 0x58) = pUVar16;
    pFVar13 = ::FName::FName(&local_188,L"CameraStandIn");
    FVar2 = *pFVar13;
    FVar14 = (FName)Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister();
    MakeUniqueObjectName
              ((UObject *)&local_1b0,(UClass *)this,FVar14,FVar2.ComparisonIndex.Value.Value);
    if (local_1b0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar15 = Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_e8,pUVar15);
    local_e8._24_4_ = RF_NoFlags;
    local_e8._40_8_ = (UObject *)0x0;
    local_e8[0x20] = false;
    local_e8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_e8._56_8_ = (UPackage *)0x0;
    local_e8._16_4_ = local_1b0.ComparisonIndex.Value;
    local_e8._20_4_ = local_1b0.Number;
    local_e8._8_8_ = this;
    this_00 = (UCameraAnimationSequenceCameraStandIn *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
    if (local_e8._64_8_ != 0) {
      plVar18 = (longlong *)(local_e8 + 0x50);
      if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_e8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UCameraAnimationSequenceCameraStandIn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    *(UCameraAnimationSequenceCameraStandIn **)(pFVar19 + 0x60) = this_00;
    pFVar19[0x70] = (FScriptContainerElement)(0.0 < *(float *)((longlong)local_1a8 + 0xc));
    UCameraAnimationSequenceCameraStandIn::Initialize(this_00,(UTemplateSequence *)param_2);
    UCameraAnimationSequencePlayer::SetBoundObjectOverride
              (*(UCameraAnimationSequencePlayer **)(pFVar19 + 0x58),*(UObject **)(pFVar19 + 0x60));
    UCameraAnimationSequencePlayer::Initialize
              (*(UCameraAnimationSequencePlayer **)(pFVar19 + 0x58),(UMovieSceneSequence *)param_2,
               *(int *)((longlong)local_1a8 + 0x1c),0.0);
    UCameraAnimationSequencePlayer::Play
              (*(UCameraAnimationSequencePlayer **)(pFVar19 + 0x58),*(bool *)(local_1a8 + 3),
               *(bool *)(local_1a8 + 4));
    *(undefined4 *)param_1 = local_1c8;
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return SUB84(param_1,0);
}

// StaticRegisterNativesUCameraAnimationCameraModifier @ 14ad23e40

void __cdecl
UCameraAnimationCameraModifier::StaticRegisterNativesUCameraAnimationCameraModifier(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAllCameraAnimations @ 14ad24000

void __thiscall
UCameraAnimationCameraModifier::StopAllCameraAnimations
          (UCameraAnimationCameraModifier *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveAnimations).ArrayNum;
  pFVar2 = (this->ActiveAnimations).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->ActiveAnimations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FActiveCameraAnimationInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    StopCameraAnimation(this,(FCameraAnimationHandle *)(pFVar2 + 0x50),param_1);
    pFVar2 = pFVar2 + 0x78;
  }
  return;
}

// StopAllCameraAnimationsOf @ 14ad240e0

void __thiscall
UCameraAnimationCameraModifier::StopAllCameraAnimationsOf
          (UCameraAnimationCameraModifier *this,UCameraAnimationSequence *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveAnimations).ArrayNum;
  pFVar2 = (this->ActiveAnimations).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->ActiveAnimations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FActiveCameraAnimationInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(UCameraAnimationSequence **)pFVar2 == (UCameraAnimationSequence *)0x0) {
      bVar4 = param_1 == (UCameraAnimationSequence *)0x0;
    }
    else {
      bVar4 = *(UCameraAnimationSequence **)pFVar2 == param_1;
    }
    if (bVar4) {
      StopCameraAnimation(this,(FCameraAnimationHandle *)(pFVar2 + 0x50),param_2);
    }
    pFVar2 = pFVar2 + 0x78;
  }
  return;
}

// StopCameraAnimation @ 14ad24250

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraAnimationCameraModifier::StopCameraAnimation
          (UCameraAnimationCameraModifier *this,FCameraAnimationHandle *param_1,bool param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FName local_res10;
  FString local_c8;
  TObjectPtr<UCameraAnimationSequence>_u_0 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  double local_80;
  double dStack_78;
  double local_70;
  FCameraAnimationHandle local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  FString local_40;
  
  uVar1 = param_1->InstanceID;
  if ((uVar1 != 0xffff) && ((int)(uint)uVar1 < (this->ActiveAnimations).ArrayNum)) {
    if (((this->ActiveAnimations).ArrayNum <= (int)(uint)uVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->ActiveAnimations).AllocatorInstance.Data;
    lVar6 = (ulonglong)uVar1 * 0x78;
    if (*(ushort *)(pFVar2 + lVar6 + 0x52) == param_1->InstanceSerial) {
      if (((*(longlong *)(pFVar2 + lVar6) == 0) || (*(longlong *)(pFVar2 + lVar6 + 0x58) == 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CameraAnimation->Sequence && CameraAnimation->Player",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                             ,0x95,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res10 = *(FName *)(*(longlong *)(pFVar2 + lVar6) + 0x18);
      ::FName::ToString(&local_res10,&local_40);
      ::FString::PrintfImpl(&local_c8,L"StopCameraAnimation %s");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar7.Data = local_c8.Data.AllocatorInstance.Data;
      }
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar7.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                   ,0x97);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if ((param_2) || (*(float *)(pFVar2 + lVar6 + 0x1c) == 0.0)) {
        UCameraAnimationSequencePlayer::Stop
                  (*(UCameraAnimationSequencePlayer **)(pFVar2 + lVar6 + 0x58));
        uVar1 = *(ushort *)(pFVar2 + lVar6 + 0x50);
        local_b8.DebugPtr = (UCameraAnimationSequence *)0x0;
        local_80 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        dStack_78 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_9c = 0;
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        local_8c = 0;
        local_88 = 0;
        local_68 = FCameraAnimationHandle::Invalid;
        local_70 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        local_b0 = 0x3f800000;
        local_ac = 0x3f800000;
        local_50 = 0;
        local_48 = 0;
        local_60 = 0;
        uStack_58 = 0;
        if (((this->ActiveAnimations).ArrayNum <= (int)(uint)uVar1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FActiveCameraAnimationInfo::operator=
                  ((FActiveCameraAnimationInfo *)
                   ((this->ActiveAnimations).AllocatorInstance.Data + (ulonglong)uVar1 * 0x78),
                   (FActiveCameraAnimationInfo *)&local_b8.ObjectPtr);
      }
      else if (pFVar2[lVar6 + 0x71] == (FScriptContainerElement)0x0) {
        pFVar2[lVar6 + 0x71] = (FScriptContainerElement)0x1;
        *(undefined4 *)(pFVar2 + lVar6 + 0x6c) = 0;
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  return;
}

// TickAllAnimations @ 14ad24800

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationCameraModifier::TickAllAnimations
          (UCameraAnimationCameraModifier *this,float param_1,FMinimalViewInfo *param_2)

{
  ushort uVar1;
  int iVar2;
  UCameraAnimationSequencePlayer *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FActiveCameraAnimationInfo *pFVar6;
  FActiveCameraAnimationInfo *pFVar7;
  FActiveCameraAnimationInfo *this_01;
  undefined1 local_res8 [8];
  TObjectPtr<UCameraAnimationSequence>_u_0 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  double local_80;
  double dStack_78;
  double local_70;
  FCameraAnimationHandle local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  
  iVar2 = (this->ActiveAnimations).ArrayNum;
  pFVar6 = (FActiveCameraAnimationInfo *)(this->ActiveAnimations).AllocatorInstance.Data;
  pFVar7 = pFVar6 + iVar2;
LAB_14ad24845:
  do {
    if ((this->ActiveAnimations).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FActiveCameraAnimationInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) {
      return;
    }
    if ((pFVar6->Sequence).field0_0x0.DebugPtr != (UCameraAnimationSequence *)0x0) {
      this_00 = (pFVar6->Player).field0_0x0.DebugPtr;
      if (this_00 != (UCameraAnimationSequencePlayer *)0x0) {
        bVar4 = UCameraAnimationSequencePlayer::IsValid(this_00);
        if (bVar4) {
          TickAnimation(this,pFVar6,param_1,param_2);
          iVar5 = (**(code **)(((pFVar6->Player).field0_0x0.DebugPtr)->_padding_ + 0x40))();
          if (iVar5 != 0) goto LAB_14ad24a35;
          uVar1 = (pFVar6->Handle).InstanceID;
          if ((this->ActiveAnimations).ArrayNum <= (int)(uint)uVar1) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ActiveAnimations.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                               ,0x12d,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if ((this->ActiveAnimations).ArrayNum <= (int)(uint)uVar1) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          this_01 = (FActiveCameraAnimationInfo *)
                    ((this->ActiveAnimations).AllocatorInstance.Data + (ulonglong)uVar1 * 0x78);
          if ((this_01->Player).field0_0x0.DebugPtr == (UCameraAnimationSequencePlayer *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("CameraAnimation.Player",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                               ,0x130,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar5 = (**(code **)(((this_01->Player).field0_0x0.DebugPtr)->_padding_ + 0x40))();
          if (iVar5 != 0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6584040231744306895>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                               ,0x131,
                               "CameraAnimation.Player->GetPlaybackStatus() == EMovieScenePlayerStatus::Stopped"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            UCameraAnimationSequencePlayer::Stop((this_01->Player).field0_0x0.DebugPtr);
          }
          local_b8.DebugPtr = (UCameraAnimationSequence *)0x0;
          local_80 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          dStack_78 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_b0 = 0x3f800000;
          local_70 = UE::Math::TRotator<double>::ZeroRotator.Roll;
          local_60 = 0;
          uStack_58 = 0;
          local_ac = 0x3f800000;
          local_a8 = 0;
          local_a4 = 0;
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
          local_94 = 0;
          local_90 = 0;
          local_8c = 0;
          local_88 = 0;
          local_68 = FCameraAnimationHandle::Invalid;
          local_50 = 0;
          local_48 = 0;
          FActiveCameraAnimationInfo::operator=
                    (this_01,(FActiveCameraAnimationInfo *)&local_b8.ObjectPtr);
          pFVar6 = pFVar6 + 1;
          goto LAB_14ad24845;
        }
      }
      (pFVar6->Sequence).field0_0x0.DebugPtr = (UCameraAnimationSequence *)0x0;
      (pFVar6->Player).field0_0x0.DebugPtr = (UCameraAnimationSequencePlayer *)0x0;
    }
LAB_14ad24a35:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// TickAnimation @ 14ad24a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCameraAnimationCameraModifier::TickAnimation
          (UCameraAnimationCameraModifier *this,FActiveCameraAnimationInfo *param_1,float param_2,
          FMinimalViewInfo *param_3)

{
  int *piVar1;
  UCameraAnimationSequencePlayer *this_00;
  UCameraAnimationSequenceCameraStandIn *this_01;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ECameraAnimationPlaySpace EVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  TConsoleVariableData<bool> *pTVar15;
  UCameraAnimationCameraModifier *pUVar16;
  bool bVar17;
  char cVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_CameraAnimationEval_Total> FVar20;
  FFrameTime FVar21;
  FMovieSceneRootEvaluationTemplateInstance *this_02;
  UMovieSceneEntitySystemLinker *pUVar22;
  TRotator<double> *pTVar23;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  char cVar24;
  int iVar25;
  uint uVar26;
  FName FVar27;
  longlong lVar28;
  int iVar29;
  double extraout_XMM0_Qa;
  undefined1 extraout_XMM0 [16];
  float fVar30;
  float fVar31;
  FFrameRate FVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar41;
  double dVar38;
  double dVar39;
  undefined1 in_register_00001284 [12];
  undefined1 auVar40 [16];
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  undefined1 auStackY_3e8 [32];
  FFrameTime local_388;
  FColor_u_0 local_378 [2];
  undefined8 local_370;
  FFrameRate local_368;
  FFrameRate local_360;
  FName local_358;
  int local_350;
  undefined4 uStack_34c;
  TVector<double>_u_0 local_348;
  FName local_330;
  TRotator<double> local_320;
  undefined8 local_308;
  ulonglong local_300;
  undefined8 local_2f8;
  UCameraAnimationCameraModifier *local_2f0;
  LARGE_INTEGER local_2e8;
  FStatMessage local_2e0;
  FName local_2d0 [2];
  TVector<double>_u_0 local_2c0;
  FFrameRate local_2a8;
  FFrameRate FStack_2a0;
  double local_298;
  TQuat<double> local_288;
  double local_268;
  double dStack_260;
  double local_258;
  TRotator<double> local_250 [3];
  double local_1f8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  FFrameRate local_188;
  double dStack_180;
  FFrameRate local_178;
  double dStack_170;
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  
  auVar40._4_12_ = in_register_00001284;
  auVar40._0_4_ = param_2;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  FVar20 = StatPtr_CameraAnimationEval_Total;
  local_2f0 = this;
  if (StatPtr_CameraAnimationEval_Total ==
      (FThreadSafeStaticStat<FStat_CameraAnimationEval_Total>)0x0) {
    pFVar19 = ::FName::FName(local_2d0,"CameraAnimationEval_Total");
    FVar20 = (FThreadSafeStaticStat<FStat_CameraAnimationEval_Total>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_CameraAnimationEval_Total,*pFVar19,
                        L"Camera Animation Eval","STATGROUP_CameraAnimation","STATCAT_Advanced",
                        L"Camera Animation Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar20;
  bVar12 = false;
  bVar14 = false;
  local_330.ComparisonIndex.Value = 0;
  local_330.Number = 0;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_378[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_378[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_358.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_358.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_358,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                   ,0x156);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar13 = true;
      goto LAB_14ad24c06;
    }
  }
  bVar13 = false;
  FVar27 = local_330;
LAB_14ad24c06:
  if (((param_1->Player).field0_0x0.DebugPtr == (UCameraAnimationSequencePlayer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("CameraAnimation.Player",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                          ,0x158,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_1->CameraStandIn).field0_0x0.DebugPtr == (UCameraAnimationSequenceCameraStandIn *)0x0)
     && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("CameraAnimation.CameraStandIn",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                             ,0x159,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (param_1->Player).field0_0x0.DebugPtr;
  local_1f8 = (param_1->Params).UserPlaySpaceRot.Roll;
  fVar37 = (param_1->Params).PlayRate;
  fVar10 = (param_1->Params).Scale;
  uVar43 = *(undefined4 *)&(param_1->Params).EaseInType;
  fVar31 = (param_1->Params).EaseInDuration;
  this_01 = (param_1->CameraStandIn).field0_0x0.DebugPtr;
  FVar32 = (this_00->PlayPosition).InputRate;
  uVar44 = *(undefined4 *)&(param_1->Params).EaseOutType;
  fVar11 = (param_1->Params).EaseOutDuration;
  EVar9 = (param_1->Params).PlaySpace;
  local_300 = (ulonglong)FVar32 >> 0x20;
  local_368 = FVar32;
  local_360 = FVar32;
  UCameraAnimationSequencePlayer::GetCurrentPosition(this_00);
  dVar45 = ((double)(fVar37 * param_2) * (double)FVar32.Numerator) / (double)FVar32.Denominator;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = dVar45;
  auVar40 = roundpd(auVar40,auVar33,1);
  dVar45 = dVar45 - auVar40._0_8_;
  uVar36 = auVar40._0_4_;
  uVar41 = auVar40._4_4_;
  if (__real_41dfffffffc00000 <= auVar40._0_8_) {
    uVar36 = SUB84(__real_41dfffffffc00000,0);
    uVar41 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  if ((double)CONCAT44(uVar41,uVar36) <= __real_c1e0000000000000) {
    uVar36 = SUB84(__real_c1e0000000000000,0);
    uVar41 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  iVar29 = (int)dVar45;
  fVar42 = (float)dVar45 - (float)iVar29;
  if ((0.0 < fVar42) && (::FFrameTime::MaxSubframe <= fVar42)) {
    fVar42 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar42) {
    fVar42 = ::FFrameTime::MaxSubframe;
  }
  if (fVar42 <= 0.0) {
    fVar42 = 0.0;
  }
  local_388.SubFrame = (float)((ulonglong)local_308 >> 0x20);
  fVar42 = fVar42 + local_388.SubFrame;
  iVar25 = (int)ROUND((fVar42 + fVar42) - __real_3f000000) >> 1;
  local_388.FrameNumber.Value =
       (int)local_308 + iVar25 + (int)(double)CONCAT44(uVar41,uVar36) + iVar29;
  iVar29 = (int)fVar42;
  fVar30 = fVar42;
  if ((iVar29 != -0x80000000) && ((float)iVar29 != fVar42)) {
    auVar34._4_4_ = fVar42;
    auVar34._0_4_ = fVar42;
    auVar34._8_8_ = 0;
    uVar26 = movmskps(iVar25,auVar34);
    fVar30 = (float)(int)(iVar29 - (uVar26 & 1));
  }
  local_388.SubFrame = fVar42 - fVar30;
  if (::FFrameTime::MaxSubframe <= fVar42 - fVar30) {
    local_388.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_388.SubFrame <= 0.0) {
    local_388.SubFrame = 0.0;
  }
  if (param_1->bIsEasingIn != false) {
    param_1->EaseInCurrentTime = param_2 + param_1->EaseInCurrentTime;
  }
  if (param_1->bIsEasingOut != false) {
    param_1->EaseOutCurrentTime = param_2 + param_1->EaseOutCurrentTime;
  }
  if (this_00->bIsLooping == false) {
    local_350 = (this_00->StartFrame).Value;
    lVar28 = (longlong)local_368.Denominator;
    uStack_34c = 0;
    dVar45 = (double)(int)local_300;
    auVar40 = roundps(auVar40,ZEXT416((uint)(local_388.SubFrame - 0.0)),1);
    local_370._4_4_ = (local_388.SubFrame - 0.0) - auVar40._0_4_;
    if (::FFrameTime::MaxSubframe <= local_370._4_4_) {
      local_370._4_4_ = ::FFrameTime::MaxSubframe;
    }
    local_370._0_4_ = (int)auVar40._0_4_ + (local_388.FrameNumber.Value - local_350);
    if (local_370._4_4_ <= 0.0) {
      local_370._4_4_ = 0.0;
    }
    dVar35 = __real_3ff0000000000000 / (double)local_360.Numerator;
    fVar42 = (float)(((double)((int)local_370 * lVar28) + (double)local_370._4_4_ * dVar45) * dVar35
                    );
    FVar21 = UCameraAnimationSequencePlayer::GetDuration(this_00);
    uVar2 = *(undefined8 *)FVar21;
    local_2f8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    fVar37 = (float)(((double)((int)uVar2 * lVar28) + (double)local_2f8._4_4_ * dVar45) * dVar35 *
                    (double)fVar37) - fVar11;
    local_2f8 = uVar2;
    if ((fVar37 < fVar42) && (param_1->bIsEasingOut == false)) {
      param_1->bIsEasingOut = true;
      param_1->EaseOutCurrentTime = fVar42 - fVar37;
    }
  }
  cVar18 = param_1->bIsEasingIn;
  if (((bool)cVar18 != false) && ((fVar31 < param_1->EaseInCurrentTime || (fVar31 == 0.0)))) {
    param_1->bIsEasingIn = false;
    cVar18 = '\0';
  }
  fVar37 = __real_3f800000;
  cVar24 = param_1->bIsEasingOut;
  bVar17 = false;
  if (((bool)cVar24 != false) && (bVar17 = false, fVar11 < param_1->EaseOutCurrentTime)) {
    bVar17 = true;
  }
  fVar42 = __real_3f800000;
  if (cVar18 != '\0') {
    fVar31 = param_1->EaseInCurrentTime / fVar31;
    if (__real_3f800000 <= fVar31) {
      fVar31 = __real_3f800000;
    }
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    fVar42 = EvaluateEasing((ECameraAnimationEasingType)uVar43,fVar31);
    cVar24 = param_1->bIsEasingOut;
  }
  if (cVar24 != '\0') {
    fVar31 = fVar37 - param_1->EaseOutCurrentTime / fVar11;
    if (fVar37 <= fVar31) {
      fVar31 = fVar37;
    }
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    fVar37 = EvaluateEasing((ECameraAnimationEasingType)uVar44,fVar31);
  }
  if (fVar42 <= fVar37) {
    fVar37 = fVar42;
  }
  if ((bVar17) || (fVar37 <= 0.0)) {
    UCameraAnimationSequencePlayer::Stop(this_00);
  }
  else {
    this_02 = (FMovieSceneRootEvaluationTemplateInstance *)
              (**(code **)(this_00->_padding_ + 0x18))(&this_00->_padding_);
    pUVar22 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker(this_02);
    UCameraAnimationSequenceCameraStandIn::Reset(this_01,param_3,pUVar22);
    fVar31 = this_01->FieldOfView;
    UCameraAnimationSequencePlayer::Update(this_00,local_388);
    UCameraAnimationSequenceCameraStandIn::RecalcDerivedData(this_01);
    local_268 = (this_01->Transform).Translation.XY.m128d_f64[0];
    dStack_260 = (this_01->Transform).Translation.XY.m128d_f64[1];
    local_1a8 = (this_01->Transform).Scale3D.XY.m128d_f64[0];
    dStack_1a0 = (this_01->Transform).Scale3D.XY.m128d_f64[1];
    local_258 = (this_01->Transform).Translation.ZW.m128d_f64[0];
    local_288.X = (this_01->Transform).Rotation.XY.m128d_f64[0];
    local_288.Y = (this_01->Transform).Rotation.XY.m128d_f64[1];
    local_288.Z = (this_01->Transform).Rotation.ZW.m128d_f64[0];
    local_288.W = (this_01->Transform).Rotation.ZW.m128d_f64[1];
    local_198 = (this_01->Transform).Scale3D.ZW.m128d_f64[0];
    dStack_190 = (this_01->Transform).Scale3D.ZW.m128d_f64[1];
    fVar37 = fVar37 * fVar10;
    dVar45 = (double)fVar37;
    local_348._s_0.X = local_268 * dVar45;
    local_348._s_0.Y = dStack_260 * dVar45;
    local_348._s_0.Z = local_258 * dVar45;
    pTVar23 = UE::Math::TQuat<double>::Rotator(&local_288,local_250);
    FVar32 = (FFrameRate)(dVar45 * pTVar23->Yaw);
    dVar35 = 0.0;
    local_360 = (FFrameRate)(dVar45 * pTVar23->Pitch);
    local_320.Roll = dVar45 * pTVar23->Roll;
    local_368 = FVar32;
    if (EVar9 == UserDefined) {
      __vdecl_sincos2();
      local_188 = FVar32;
      dStack_180 = dVar35;
      __vdecl_sincos2();
      dVar38 = extraout_XMM0_Qa * extraout_XMM0._0_8_;
      dVar5 = (double)FVar32 * extraout_XMM0._0_8_;
      dVar4 = extraout_XMM0._8_8_;
      dVar45 = (double)FVar32 * (double)local_188;
      uVar43 = 0;
      uVar44 = 0;
      dVar39 = extraout_XMM0_Qa * dVar4 + dStack_180 * dVar5;
      local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_104 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_fc = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_158 = extraout_XMM0._0_4_;
      uStack_154 = extraout_XMM0._4_4_;
      uStack_150 = 0;
      uStack_14c = 0;
      dVar6 = dStack_180 * (double)local_188;
      dVar7 = dStack_180 * dVar38 - (double)FVar32 * dVar4;
      dVar38 = (double)FVar32 * dStack_180 + dVar4 * dVar38;
      dVar8 = (double)local_188 * dVar4;
      local_128 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(dVar39,0) ^ (uint)__xmm_80000000000000008000000000000000);
      dStack_120 = dStack_180 * extraout_XMM0_Qa - dVar4 * dVar5;
      local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dStack_f0 = __real_3ff0000000000000;
      local_138 = (double)CONCAT44((uint)((ulonglong)((double)local_188 * extraout_XMM0_Qa) >> 0x20)
                                   ^ __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84((double)local_188 * extraout_XMM0_Qa,0) ^
                                   (uint)__xmm_80000000000000008000000000000000);
      dStack_130 = 0.0;
      local_178 = FVar32;
      dStack_170 = dVar35;
    }
    else {
      dVar45 = UE::Math::TMatrix<double>::Identity.M[2][2];
      uVar43 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_;
      uVar44 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_;
      local_108 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
      uStack_104 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
      uStack_100 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
      uStack_fc = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
      local_158 = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_;
      uStack_154 = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_;
      uStack_150 = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_;
      uStack_14c = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_;
      dVar6 = UE::Math::TMatrix<double>::Identity.M[0][0];
      dVar7 = UE::Math::TMatrix<double>::Identity.M[1][0];
      dVar38 = UE::Math::TMatrix<double>::Identity.M[1][1];
      dVar8 = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_128 = UE::Math::TMatrix<double>::Identity.M[2][0];
      dStack_120 = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_f8 = UE::Math::TMatrix<double>::Identity.M[3][2];
      dStack_f0 = UE::Math::TMatrix<double>::Identity.M[3][3];
      local_138 = UE::Math::TMatrix<double>::Identity.M[1][2];
      dStack_130 = UE::Math::TMatrix<double>::Identity.M[1][3];
    }
    local_168._8_4_ = SUB84(dVar8,0);
    local_168._0_8_ = dVar6;
    local_168._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_148._8_4_ = SUB84(dVar38,0);
    local_148._0_8_ = dVar7;
    local_148._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    local_118._8_4_ = uVar43;
    local_118._0_8_ = dVar45;
    local_118._12_4_ = uVar44;
    local_2c0._s_0.Z = local_348._s_0.Z;
    local_2c0._s_0.X = local_348._s_0.X;
    local_2c0._s_0.Y = local_348._s_0.Y;
    local_320.Yaw = (double)local_368;
    FStack_2a0 = local_368;
    local_298 = local_320.Roll;
    local_320.Pitch = (double)local_360;
    local_2a8 = local_360;
    if (EVar9 == CameraLocal) {
      FCameraAnimationHelper::ApplyOffset
                (param_3,(FCameraAnimationHelperOffset *)&local_2c0._s_0,
                 (TVector<double> *)&local_348._s_0,&local_320);
    }
    else {
      FCameraAnimationHelper::ApplyOffset
                ((TMatrix<double> *)local_168,param_3,
                 (FCameraAnimationHelperOffset *)&local_2c0._s_0,(TVector<double> *)&local_348._s_0,
                 &local_320);
    }
    pUVar16 = local_2f0;
    (param_3->Location).field0_0x0._s_0.X = local_348._s_0.X;
    (param_3->Location).field0_0x0._s_0.Y = local_348._s_0.Y;
    (param_3->Location).field0_0x0._s_0.Z = local_348._s_0.Z;
    (param_3->Rotation).Pitch = local_320.Pitch;
    (param_3->Rotation).Yaw = local_320.Yaw;
    (param_3->Rotation).Roll = local_320.Roll;
    param_3->FOV = (this_01->FieldOfView - fVar31) * fVar37 + fVar31;
    pTVar15 = GCameraAnimationLegacyPostProcessBlending.Ref;
    if ((local_2f0->_padding_ != 0) && (fVar31 = this_01->PostProcessBlendWeight, 0.0 < fVar31)) {
      bVar17 = IsInParallelGameThread();
      if ((!bVar17) &&
         ((bVar17 = IsInGameThread(), !bVar17 &&
          (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar17)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      APlayerCameraManager::AddCachedPPBlend
                ((APlayerCameraManager *)pUVar16->_padding_,&this_01->PostProcessSettings,
                 fVar31 * fVar37,(uint)(pTVar15->ShadowedValue[0] == false));
    }
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_2e0.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_2e0.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2e8);
      local_2e0.StatData.Pad[4] = '\0';
      local_2e0.StatData.Pad[5] = '\0';
      local_2e0.StatData.Pad[6] = '\0';
      local_2e0.StatData.Pad[7] = '\0';
      local_2e0.StatData.Pad[0] = local_2e8.s.LowPart._0_1_;
      local_2e0.StatData.Pad[1] = local_2e8.s.LowPart._1_1_;
      local_2e0.StatData.Pad[2] = local_2e8.s.LowPart._2_1_;
      local_2e0.StatData.Pad[3] = local_2e8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_03,&local_2e0);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  return;
}

// execGetCameraAnimationCameraModifier @ 14ad26ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UCameraAnimationCameraModifier::execGetCameraAnimationCameraModifier
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APlayerController *pAVar2;
  UCameraAnimationCameraModifier *pUVar3;
  int local_res10 [2];
  UObject *local_res18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar2 = UGameplayStatics::GetPlayerController(local_res18,local_res10[0]);
  pUVar3 = GetCameraAnimationCameraModifierFromPlayerController(pAVar2);
  *(UCameraAnimationCameraModifier **)param_3 = pUVar3;
  return;
}

// execGetCameraAnimationCameraModifierFromID @ 14ad26dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UCameraAnimationCameraModifier::execGetCameraAnimationCameraModifierFromID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APlayerController *pAVar2;
  UCameraAnimationCameraModifier *pUVar3;
  int local_res10 [2];
  UObject *local_res18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar2 = UGameplayStatics::GetPlayerControllerFromID(local_res18,local_res10[0]);
  pUVar3 = GetCameraAnimationCameraModifierFromPlayerController(pAVar2);
  *(UCameraAnimationCameraModifier **)param_3 = pUVar3;
  return;
}

// execGetCameraAnimationCameraModifierFromPlayerController @ 14ad26ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UCameraAnimationCameraModifier::execGetCameraAnimationCameraModifierFromPlayerController
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  UCameraModifier *pUVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong local_res10;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    plVar3 = *(longlong **)(local_res10 + 0x390);
    pcVar4 = *(code **)(*plVar3 + 2000);
    local_res20 = StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    pUVar5 = (UCameraModifier *)(*pcVar4)(plVar3,&local_res20);
    if (pUVar5 != (UCameraModifier *)0x0) {
      pUVar6 = StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pFVar7 = GetTypeName<UCameraAnimationCameraModifier>(&local_28);
        pwVar9 = L"";
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = GetFullNameForCastLogError<UCameraModifier>(&local_18,pUVar5);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar9,pwVar8);
      }
      goto LAB_14ad26f9e;
    }
  }
  pUVar5 = (UCameraModifier *)0x0;
LAB_14ad26f9e:
  *(UCameraModifier **)param_3 = pUVar5;
  return;
}

// execIsCameraAnimationActive @ 14ad26fe0

void __cdecl
UCameraAnimationCameraModifier::execIsCameraAnimationActive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FCameraAnimationHandle *pFVar3;
  FCameraAnimationHandle local_res10 [2];
  
  local_res10[0].InstanceID = 0xffff;
  local_res10[0].InstanceSerial = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pFVar3 = local_res10;
  if ((FCameraAnimationHandle *)param_2->MostRecentPropertyAddress != (FCameraAnimationHandle *)0x0)
  {
    pFVar3 = (FCameraAnimationHandle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsCameraAnimationActive((UCameraAnimationCameraModifier *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execPlayCameraAnimation @ 14ad27250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCameraAnimationCameraModifier::execPlayCameraAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  code *pcVar3;
  UTemplateSequence *pUVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  FName *pFVar25;
  FName FVar26;
  UClass *pUVar27;
  UObject *pUVar28;
  UCameraAnimationSequenceCameraStandIn *this;
  ForAnyElementType FVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  bool bVar32;
  undefined1 auStackY_288 [32];
  undefined4 local_258;
  UTemplateSequence *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  uint uStack_240;
  float fStack_23c;
  uint local_238;
  undefined4 uStack_234;
  uint uStack_230;
  int iStack_22c;
  bool local_228;
  undefined1 uStack_227;
  undefined1 uStack_226;
  undefined1 uStack_225;
  undefined4 uStack_224;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined1 uStack_21e;
  undefined1 uStack_21d;
  undefined1 uStack_21c;
  undefined1 uStack_21b;
  undefined1 uStack_21a;
  undefined1 uStack_219;
  double local_218;
  double dStack_210;
  double local_208;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FString local_1e0;
  FName local_1d0;
  FName local_1c8;
  FString local_1c0;
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_250 = (UTemplateSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_250,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_250);
  }
  local_248 = 0x3f800000;
  uStack_244 = 0x3f800000;
  local_218 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_210 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_208 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uStack_240 = uStack_240 & 0xffffff00;
  fStack_23c = 0.0;
  local_238 = local_238 & 0xffffff00;
  uStack_234 = 0;
  uStack_230 = uStack_230 & 0xffffff00;
  iStack_22c = 0;
  local_228 = false;
  uStack_224 = 0;
  uStack_220 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_248,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_248);
  }
  dVar20 = local_208;
  dVar19 = dStack_210;
  dVar18 = local_218;
  uVar17 = uStack_220;
  bVar21 = local_228;
  iVar12 = iStack_22c;
  uVar11 = uStack_230;
  uVar10 = uStack_234;
  uVar9 = local_238;
  fVar8 = fStack_23c;
  uVar7 = uStack_240;
  uVar6 = uStack_244;
  uVar5 = local_248;
  pUVar4 = local_250;
  uVar13 = (undefined1)uStack_224;
  uVar14 = uStack_224._1_1_;
  uVar15 = uStack_224._2_1_;
  uVar16 = uStack_224._3_1_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_250 == (UTemplateSequence *)0x0) {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6584040231744307105>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                        ,0x5f,"Sequence");
    if (bVar21) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(FCameraAnimationHandle *)param_3 = FCameraAnimationHandle::Invalid;
  }
  else {
    local_1f8 = (FName)local_250->_padding_;
    ::FName::ToString(&local_1f8,&local_1c0);
    ::FString::PrintfImpl(&local_1e0,L"PlayCameraAnimation %s");
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_1e0.Data.ArrayNum != 0) {
      FVar29.Data = local_1e0.Data.AllocatorInstance.Data;
    }
    bVar32 = -1 < CpuChannel->Enabled;
    if (bVar32) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar29.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                 ,100);
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    uVar23 = FindInactiveCameraAnimation((UCameraAnimationCameraModifier *)param_1);
    if ((0xfffe < (int)uVar23) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewIndex < ((uint16) 0xffff)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                            ,0x67,L""), bVar22)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_258 = CONCAT22(*(short *)&param_1[2].field_0x8,(short)uVar23);
    *(short *)&param_1[2].field_0x8 = *(short *)&param_1[2].field_0x8 + 1;
    uVar24 = 0;
    if ((int)uVar23 < *(int *)(param_1 + 2)) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar31 = (undefined8 *)((longlong)(int)uVar23 * 0x78 + *(longlong *)&param_1[1].field_0x20);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    *puVar31 = pUVar4;
    *(undefined4 *)(puVar31 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar31 + 0xc) = uVar6;
    *(uint *)(puVar31 + 2) = uVar7;
    *(float *)((longlong)puVar31 + 0x14) = fVar8;
    *(undefined4 *)(puVar31 + 10) = local_258;
    *(uint *)(puVar31 + 3) = uVar9;
    *(undefined4 *)((longlong)puVar31 + 0x1c) = uVar10;
    *(uint *)(puVar31 + 4) = uVar11;
    *(int *)((longlong)puVar31 + 0x24) = iVar12;
    *(bool *)(puVar31 + 5) = bVar21;
    *(undefined1 *)((longlong)puVar31 + 0x29) = uStack_227;
    *(undefined1 *)((longlong)puVar31 + 0x2a) = uStack_226;
    *(undefined1 *)((longlong)puVar31 + 0x2b) = uStack_225;
    *(undefined1 *)((longlong)puVar31 + 0x2c) = uVar13;
    *(undefined1 *)((longlong)puVar31 + 0x2d) = uVar14;
    *(undefined1 *)((longlong)puVar31 + 0x2e) = uVar15;
    *(undefined1 *)((longlong)puVar31 + 0x2f) = uVar16;
    *(undefined1 *)(puVar31 + 6) = uVar17;
    *(undefined1 *)((longlong)puVar31 + 0x31) = uStack_21f;
    *(undefined1 *)((longlong)puVar31 + 0x32) = uStack_21e;
    *(undefined1 *)((longlong)puVar31 + 0x33) = uStack_21d;
    *(undefined1 *)((longlong)puVar31 + 0x34) = uStack_21c;
    *(undefined1 *)((longlong)puVar31 + 0x35) = uStack_21b;
    *(undefined1 *)((longlong)puVar31 + 0x36) = uStack_21a;
    *(undefined1 *)((longlong)puVar31 + 0x37) = uStack_219;
    puVar31[7] = dVar18;
    puVar31[8] = dVar19;
    puVar31[9] = dVar20;
    pFVar25 = ::FName::FName(&local_1d0,L"CameraAnimationPlayer");
    FVar2 = *pFVar25;
    FVar26 = (FName)Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister();
    MakeUniqueObjectName
              ((UObject *)&local_1f0,(UClass *)param_1,FVar26,FVar2.ComparisonIndex.Value.Value);
    if (local_1f0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar27 = Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1a8,pUVar27);
    local_1a8._24_4_ = RF_NoFlags;
    local_1a8._40_8_ = (UObject *)0x0;
    local_1a8[0x20] = false;
    local_1a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1a8._56_8_ = (UPackage *)0x0;
    local_1a8._16_4_ = local_1f0.ComparisonIndex.Value;
    local_1a8._20_4_ = local_1f0.Number;
    local_1a8._8_8_ = param_1;
    pUVar28 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
    if (local_1a8._64_8_ != 0) {
      plVar30 = (longlong *)(local_1a8 + 0x50);
      if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
        plVar30 = (longlong *)local_1a8._104_8_;
      }
      (**(code **)(*plVar30 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar28 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar28);
    }
    puVar31[0xb] = pUVar28;
    pFVar25 = ::FName::FName(&local_1c8,L"CameraStandIn");
    FVar2 = *pFVar25;
    FVar26 = (FName)Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister();
    MakeUniqueObjectName
              ((UObject *)&local_1e8,(UClass *)param_1,FVar26,FVar2.ComparisonIndex.Value.Value);
    if (local_1e8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar27 = Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_128,pUVar27);
    local_128._24_4_ = RF_NoFlags;
    local_128._40_8_ = (UObject *)0x0;
    local_128[0x20] = false;
    local_128._48_8_ = (FObjectInstancingGraph *)0x0;
    local_128._56_8_ = (UPackage *)0x0;
    local_128._16_4_ = local_1e8.ComparisonIndex.Value;
    local_128._20_4_ = local_1e8.Number;
    local_128._8_8_ = param_1;
    this = (UCameraAnimationSequenceCameraStandIn *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
    if (local_128._64_8_ != 0) {
      plVar30 = (longlong *)(local_128 + 0x50);
      if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
        plVar30 = (longlong *)local_128._104_8_;
      }
      (**(code **)(*plVar30 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCameraAnimationSequenceCameraStandIn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar31[0xc] = this;
    *(bool *)(puVar31 + 0xe) = 0.0 < fVar8;
    UCameraAnimationSequenceCameraStandIn::Initialize(this,pUVar4);
    UCameraAnimationSequencePlayer::SetBoundObjectOverride
              ((UCameraAnimationSequencePlayer *)puVar31[0xb],(UObject *)puVar31[0xc]);
    UCameraAnimationSequencePlayer::Initialize
              ((UCameraAnimationSequencePlayer *)puVar31[0xb],(UMovieSceneSequence *)pUVar4,iVar12,
               0.0);
    UCameraAnimationSequencePlayer::Play
              ((UCameraAnimationSequencePlayer *)puVar31[0xb],SUB41(uVar11,0),bVar21);
    if (bVar32) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    *(undefined4 *)param_3 = local_258;
  }
  return;
}

// execStopAllCameraAnimations @ 14ad28330

void __cdecl
UCameraAnimationCameraModifier::execStopAllCameraAnimations
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 800))(param_1,local_res8[0] != 0);
  return;
}

// execStopAllCameraAnimationsOf @ 14ad285a0

void __cdecl
UCameraAnimationCameraModifier::execStopAllCameraAnimationsOf
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  longlong local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar3 = local_res20;
  bVar6 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(param_1 + 2);
  plVar4 = *(longlong **)&param_1[1].field_0x20;
  plVar5 = plVar4 + (longlong)iVar1 * 0xf;
  while( true ) {
    if (*(int *)(param_1 + 2) != iVar1) {
      `TCheckedPointerIterator<FActiveCameraAnimationInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar4 == plVar5) break;
    if (*plVar4 == 0) {
      bVar7 = lVar3 == 0;
    }
    else {
      bVar7 = *plVar4 == lVar3;
    }
    if (bVar7) {
      StopCameraAnimation((UCameraAnimationCameraModifier *)param_1,
                          (FCameraAnimationHandle *)(plVar4 + 10),bVar6);
    }
    plVar4 = plVar4 + 0xf;
  }
  return;
}

// execStopCameraAnimation @ 14ad28920

void __cdecl
UCameraAnimationCameraModifier::execStopCameraAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCameraAnimationHandle *pFVar2;
  FCameraAnimationHandle local_res10 [4];
  int local_res20 [2];
  
  local_res10[0].InstanceID = 0xffff;
  local_res10[0].InstanceSerial = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  pFVar2 = local_res10;
  if ((FCameraAnimationHandle *)param_2->MostRecentPropertyAddress != (FCameraAnimationHandle *)0x0)
  {
    pFVar2 = (FCameraAnimationHandle *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopCameraAnimation((UCameraAnimationCameraModifier *)param_1,pFVar2,local_res20[0] != 0);
  return;
}

