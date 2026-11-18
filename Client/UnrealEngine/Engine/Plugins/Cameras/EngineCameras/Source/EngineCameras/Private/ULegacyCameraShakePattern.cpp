// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 13

// StaticClass @ 14ad1a0a0

UClass * __cdecl ULegacyCameraShakePattern::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULegacyCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"LegacyCameraShakePattern",
               &Z_Registration_Info_UClass_ULegacyCameraShakePattern.InnerSingleton,
               StaticRegisterNativesULegacyCameraShakePattern,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULegacyCameraShakePattern>,
               InternalVTableHelperCtorCaller<ULegacyCameraShakePattern>,local_res8,
               UCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULegacyCameraShakePattern.InnerSingleton;
}

// ULegacyCameraShakePattern @ 14ad1e980

ULegacyCameraShakePattern * __thiscall
ULegacyCameraShakePattern::ULegacyCameraShakePattern
          (ULegacyCameraShakePattern *this,FVTableHelper *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  *(undefined ***)this = &___7ULegacyCameraShakePattern__6B_;
  return this;
}

// ULegacyCameraShakePattern @ 14ad1e9b0

ULegacyCameraShakePattern * __thiscall
ULegacyCameraShakePattern::ULegacyCameraShakePattern
          (ULegacyCameraShakePattern *this,FObjectInitializer *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  *(undefined ***)this = &___7ULegacyCameraShakePattern__6B_;
  return this;
}

// ~ULegacyCameraShakePattern @ 14ad1efd0

void __thiscall
ULegacyCameraShakePattern::~ULegacyCameraShakePattern(ULegacyCameraShakePattern *this)

{
  *(undefined ***)this = &___7ULegacyCameraShakePattern__6B_;
  UCameraShakePattern::~UCameraShakePattern((UCameraShakePattern *)this);
  return;
}

// GetPrivateStaticClass @ 14ad22070

UClass * __cdecl ULegacyCameraShakePattern::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULegacyCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"LegacyCameraShakePattern",
               &Z_Registration_Info_UClass_ULegacyCameraShakePattern.InnerSingleton,
               StaticRegisterNativesULegacyCameraShakePattern,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULegacyCameraShakePattern>,
               InternalVTableHelperCtorCaller<ULegacyCameraShakePattern>,local_res8,
               UCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULegacyCameraShakePattern.InnerSingleton;
}

// GetShakePatternInfoImpl @ 14ad225a0

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
ULegacyCameraShakePattern::GetShakePatternInfoImpl
          (ULegacyCameraShakePattern *this,FCameraShakeInfo *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  FCameraShakeDuration FVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  UCameraShakeBase *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  int iVar11;
  char cVar12;
  float fVar13;
  float fVar14;
  undefined4 uStackX_1c;
  
  pUVar8 = UCameraShakePattern::GetShakeInstance((UCameraShakePattern *)this);
  if (pUVar8 != (UCameraShakeBase *)0x0) {
    pUVar9 = ULegacyCameraShake::StaticClass();
    iVar5 = (int)pUVar9->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar9->_padding_)) goto LAB_14ad225de;
  }
  pUVar8 = (UCameraShakeBase *)0x0;
LAB_14ad225de:
  plVar1 = (longlong *)pUVar8[1].UserPlaySpaceMatrix.M[1][0];
  if (plVar1 == (longlong *)0x0) {
    fVar13 = *(float *)&pUVar8->field_0xd8;
  }
  else {
    fVar14 = 0.0;
    lVar10 = (**(code **)(*plVar1 + 0x2f8))();
    if (lVar10 != 0) {
      cVar3 = *(char *)(lVar10 + 0x128);
      iVar5 = *(int *)(lVar10 + 300);
      iVar6 = *(int *)(lVar10 + 0x134);
      cVar12 = (char)*(undefined4 *)(lVar10 + 0x130);
      if (((cVar3 == '\x02') || (cVar12 == '\x02')) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                             ,0x1ad,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((cVar3 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((cVar12 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStackX_1c = 0;
      iVar11 = (int)((ulonglong)*(undefined8 *)(lVar10 + 0x138) >> 0x20);
      fVar14 = ((float)((longlong)(iVar6 - iVar5) * (longlong)iVar11) + (float)iVar11 * 0.0) /
               (float)(int)*(undefined8 *)(lVar10 + 0x138);
    }
    fVar13 = *(float *)&pUVar8->field_0xd8;
    if (*(float *)&pUVar8->field_0xd8 <= fVar14) {
      fVar13 = fVar14;
    }
  }
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,2);
  FVar4._4_4_ = uStackX_1c;
  FVar4.Duration = fVar13;
  param_1->Duration = FVar4;
  return;
}

// IsFinishedImpl @ 14ad22a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall ULegacyCameraShakePattern::IsFinishedImpl(ULegacyCameraShakePattern *this)

{
  int iVar1;
  bool bVar2;
  UCameraShakeBase *this_00;
  UClass *pUVar3;
  UFunction *this_01;
  char cVar4;
  char local_res10 [24];
  
  this_00 = UCameraShakePattern::GetShakeInstance((UCameraShakePattern *)this);
  if (this_00 != (UCameraShakeBase *)0x0) {
    pUVar3 = ULegacyCameraShake::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14ad22a48;
  }
  this_00 = (UCameraShakeBase *)0x0;
LAB_14ad22a48:
  if (*(float *)((longlong)this_00[1].UserPlaySpaceMatrix.M[1] + 0xc) <= 0.0) {
    if ((*(UCameraShakePattern **)&this_00[2].field_0x18 != (UCameraShakePattern *)0x0) &&
       (bVar2 = UCameraShakePattern::IsFinished(*(UCameraShakePattern **)&this_00[2].field_0x18),
       !bVar2)) {
      return false;
    }
    this_01 = UObject::FindFunctionChecked
                        ((UObject *)this_00,NAME_ULegacyCameraShake_ReceiveIsFinished);
    pUVar3 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar3->ClassFlags >> 7 & 1) == 0) {
      local_res10[0] = '\0';
      (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,local_res10);
      cVar4 = local_res10[0] != '\0';
    }
    else {
      cVar4 = (**(code **)(*(longlong *)this_00 + 0x2b0))(this_00);
    }
    if (cVar4 != '\0') {
      return true;
    }
  }
  return false;
}

// ScrubShakePatternImpl @ 14ad23490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
ULegacyCameraShakePattern::ScrubShakePatternImpl
          (ULegacyCameraShakePattern *this,FCameraShakePatternScrubParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  ULegacyCameraShake *this_00;
  UClass *pUVar9;
  float fVar10;
  undefined1 auStack_928 [32];
  FCameraShakePatternUpdateParams local_908;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_928;
  this_00 = (ULegacyCameraShake *)UCameraShakePattern::GetShakeInstance((UCameraShakePattern *)this)
  ;
  if (this_00 != (ULegacyCameraShake *)0x0) {
    pUVar9 = ULegacyCameraShake::StaticClass();
    iVar3 = (int)pUVar9->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar9->_padding_)) goto LAB_14ad234e5;
  }
  this_00 = (ULegacyCameraShake *)0x0;
LAB_14ad234e5:
  fVar1 = param_1->AbsoluteTime;
  dVar6 = (this_00->InitialLocSinOffset).field0_0x0._s_0.Y;
  fVar4 = this_00->InitialFOVSinOffset;
  dVar2 = (this_00->InitialLocSinOffset).field0_0x0._s_0.Z;
  (this_00->LocSinOffset).field0_0x0._s_0.X = (this_00->InitialLocSinOffset).field0_0x0._s_0.X;
  (this_00->LocSinOffset).field0_0x0._s_0.Y = dVar6;
  this_00->FOVSinOffset = fVar4;
  dVar6 = (this_00->InitialRotSinOffset).field0_0x0._s_0.X;
  dVar7 = (this_00->InitialRotSinOffset).field0_0x0._s_0.Y;
  (this_00->LocSinOffset).field0_0x0._s_0.Z = dVar2;
  dVar2 = (this_00->InitialRotSinOffset).field0_0x0._s_0.Z;
  (this_00->RotSinOffset).field0_0x0._s_0.X = dVar6;
  (this_00->RotSinOffset).field0_0x0._s_0.Y = dVar7;
  fVar4 = this_00->ActualOscillationDuration;
  (this_00->RotSinOffset).field0_0x0._s_0.Z = dVar2;
  fVar10 = __real_7f7fffff;
  if (0.0 < fVar4) {
    fVar10 = fVar4;
  }
  this_00->OscillatorTimeRemaining = fVar10;
  if (0.0 < this_00->OscillationBlendInTime) {
    this_00->bBlendingIn = true;
    this_00->CurrentBlendInTime = 0.0;
  }
  fVar10 = this_00->OscillationBlendOutTime;
  if (0.0 < fVar10) {
    this_00->bBlendingOut = false;
    this_00->CurrentBlendOutTime = 0.0;
  }
  if (((0.0 < fVar4) && (0.0 < fVar10)) && (fVar4 - fVar10 < fVar1)) {
    this_00->bBlendingOut = true;
    this_00->CurrentBlendOutTime = fVar10 - (this_00->ActualOscillationDuration - fVar1);
  }
  FCameraShakePatternScrubParams::ToUpdateParams(param_1,&local_908);
  ULegacyCameraShake::DoUpdateShake(this_00,&local_908,param_2);
  if (((param_2->Flags & ApplyAsAbsolute) == Default) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(OutResult.Flags, ECameraShakePatternUpdateResultFlags::ApplyAsAbsolute)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Shakes\\LegacyCameraShake.cpp"
                         ,0x17d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (local_908.POV.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.POV.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data)
    ;
  }
  return;
}

// StartShakePatternImpl @ 14ad239f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
ULegacyCameraShakePattern::StartShakePatternImpl
          (ULegacyCameraShakePattern *this,FCameraShakePatternStartParams *param_1)

{
  int iVar1;
  ULegacyCameraShake *this_00;
  UClass *pUVar2;
  
  this_00 = (ULegacyCameraShake *)UCameraShakePattern::GetShakeInstance((UCameraShakePattern *)this)
  ;
  if (this_00 != (ULegacyCameraShake *)0x0) {
    pUVar2 = ULegacyCameraShake::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14ad23a30;
  }
  this_00 = (ULegacyCameraShake *)0x0;
LAB_14ad23a30:
  ULegacyCameraShake::DoStartShake(this_00,param_1);
  return;
}

// StaticRegisterNativesULegacyCameraShakePattern @ 14ad23fb0

void __cdecl ULegacyCameraShakePattern::StaticRegisterNativesULegacyCameraShakePattern(void)

{
  return;
}

// StopShakePatternImpl @ 14ad245b0

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
ULegacyCameraShakePattern::StopShakePatternImpl
          (ULegacyCameraShakePattern *this,FCameraShakePatternStopParams *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  UCameraShakeBase *this_00;
  UClass *pUVar5;
  UFunction *pUVar6;
  float fVar7;
  FName local_res10 [3];
  FString local_18;
  
  this_00 = UCameraShakePattern::GetShakeInstance((UCameraShakePattern *)this);
  if (this_00 != (UCameraShakeBase *)0x0) {
    pUVar5 = ULegacyCameraShake::StaticClass();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar5->_padding_)) goto LAB_14ad245f0;
  }
  this_00 = (UCameraShakeBase *)0x0;
LAB_14ad245f0:
  bVar3 = param_1->bImmediately;
  if (bVar3 == false) {
    fVar1 = *(float *)((longlong)this_00[1].UserPlaySpaceMatrix.M[1] + 0xc);
    fVar2 = *(float *)(this_00 + 1);
    fVar7 = fVar2;
    if ((0.0 < fVar1) && (fVar7 = fVar1, fVar2 <= fVar1)) {
      fVar7 = fVar2;
    }
  }
  else {
    fVar7 = 0.0;
  }
  *(float *)((longlong)this_00[1].UserPlaySpaceMatrix.M[1] + 0xc) = fVar7;
  if (*(UCameraShakePattern **)&this_00[2].field_0x18 != (UCameraShakePattern *)0x0) {
    local_res10[0].ComparisonIndex.Value._0_1_ = bVar3;
    UCameraShakePattern::StopShakePattern
              (*(UCameraShakePattern **)&this_00[2].field_0x18,
               (FCameraShakePatternStopParams *)local_res10);
  }
  if (5 < (byte)LogLegacyCameraShake._0_1_) {
    local_res10[0].ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
    local_res10[0].Number = *(uint *)&this_00->field_0x1c;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLegacyCameraShake);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  local_res10[0].ComparisonIndex.Value._0_1_ = bVar3 != false;
  pUVar6 = UObject::FindFunctionChecked((UObject *)this_00,NAME_ULegacyCameraShake_ReceiveStopShake)
  ;
  (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar6,local_res10);
  return;
}

// TeardownShakePatternImpl @ 14ad24770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ULegacyCameraShakePattern::TeardownShakePatternImpl(ULegacyCameraShakePattern *this)

{
  int iVar1;
  UCameraShakeBase *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = UCameraShakePattern::GetShakeInstance((UCameraShakePattern *)this);
  if (pUVar2 != (UCameraShakeBase *)0x0) {
    pUVar3 = ULegacyCameraShake::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14ad247a8;
  }
  pUVar2 = (UCameraShakeBase *)0x0;
LAB_14ad247a8:
  if (*(UCameraShakePattern **)&pUVar2[2].field_0x18 != (UCameraShakePattern *)0x0) {
    UCameraShakePattern::TeardownShakePattern(*(UCameraShakePattern **)&pUVar2[2].field_0x18);
    return;
  }
  return;
}

// UpdateShakePatternImpl @ 14ad25fc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
ULegacyCameraShakePattern::UpdateShakePatternImpl
          (ULegacyCameraShakePattern *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  int iVar1;
  ULegacyCameraShake *this_00;
  UClass *pUVar2;
  
  this_00 = (ULegacyCameraShake *)UCameraShakePattern::GetShakeInstance((UCameraShakePattern *)this)
  ;
  if (this_00 != (ULegacyCameraShake *)0x0) {
    pUVar2 = ULegacyCameraShake::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14ad26008;
  }
  this_00 = (ULegacyCameraShake *)0x0;
LAB_14ad26008:
  ULegacyCameraShake::DoUpdateShake(this_00,param_1,param_2);
  return;
}

