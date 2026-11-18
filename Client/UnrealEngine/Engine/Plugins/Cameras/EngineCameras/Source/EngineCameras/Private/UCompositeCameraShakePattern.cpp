// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 13

// StaticClass @ 14ad1c6f0

UClass * __cdecl UCompositeCameraShakePattern::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"CompositeCameraShakePattern",
               &Z_Registration_Info_UClass_UCompositeCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUCompositeCameraShakePattern,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCompositeCameraShakePattern>,
               InternalVTableHelperCtorCaller<UCompositeCameraShakePattern>,local_res8,
               UCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCameraShakePattern.InnerSingleton;
}

// AddChildPattern<UConstantCameraShakePattern> @ 14ad1c7b0

UConstantCameraShakePattern * __thiscall
UCompositeCameraShakePattern::AddChildPattern<UConstantCameraShakePattern>
          (UCompositeCameraShakePattern *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UConstantCameraShakePattern *pUVar7;
  UConstantCameraShakePattern *local_18 [2];
  
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UConstantCameraShakePattern>(pUVar6);
  local_18[0] = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UConstantCameraShakePattern *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar2 = (this->ChildPatterns).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->ChildPatterns).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UConstantCameraShakePattern *)(*pcVar3)();
      return pUVar7;
    }
  }
  iVar5 = (this->ChildPatterns).ArrayNum;
  piVar1 = &(this->ChildPatterns).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ChildPatterns).AllocatorInstance,piVar1);
  }
  (this->ChildPatterns).ArrayNum = iVar5 + 1;
  *(UConstantCameraShakePattern **)
   ((this->ChildPatterns).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UConstantCameraShakePattern *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return pUVar7;
}

// UCompositeCameraShakePattern @ 14ad1e4d0

UCompositeCameraShakePattern * __thiscall
UCompositeCameraShakePattern::UCompositeCameraShakePattern
          (UCompositeCameraShakePattern *this,FVTableHelper *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  this->_padding_ = (longlong)&___7UCompositeCameraShakePattern__6B_;
  (this->ChildPatterns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildPatterns).ArrayNum = 0;
  (this->ChildPatterns).ArrayMax = 0;
  return this;
}

// ~UCompositeCameraShakePattern @ 14ad1eed0

void __thiscall
UCompositeCameraShakePattern::~UCompositeCameraShakePattern(UCompositeCameraShakePattern *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCompositeCameraShakePattern__6B_;
  pFVar1 = (this->ChildPatterns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraShakePattern::~UCameraShakePattern((UCameraShakePattern *)this);
  return;
}

// GetPrivateStaticClass @ 14ad21b30

UClass * __cdecl UCompositeCameraShakePattern::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"CompositeCameraShakePattern",
               &Z_Registration_Info_UClass_UCompositeCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUCompositeCameraShakePattern,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCompositeCameraShakePattern>,
               InternalVTableHelperCtorCaller<UCompositeCameraShakePattern>,local_res8,
               UCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCameraShakePattern.InnerSingleton;
}

// GetShakePatternInfoImpl @ 14ad22430

/* WARNING: Removing unreachable block (ram,0x00014ad22516) */
/* WARNING: Removing unreachable block (ram,0x00014ad2253b) */
/* WARNING: Removing unreachable block (ram,0x00014ad224d2) */
/* WARNING: Removing unreachable block (ram,0x00014ad224f7) */

void __thiscall
UCompositeCameraShakePattern::GetShakePatternInfoImpl
          (UCompositeCameraShakePattern *this,FCameraShakeInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FCameraShakeDuration FVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res8 [12];
  undefined4 uStackX_14;
  FCameraShakeInfo local_58 [3];
  
  pFVar4 = (this->ChildPatterns).AllocatorInstance.Data;
  iVar2 = (this->ChildPatterns).ArrayNum;
  cVar5 = '\0';
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  fVar6 = 0.0;
  do {
    while( true ) {
      if ((this->ChildPatterns).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UCameraShakePattern>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      fVar7 = fVar6;
      if (pFVar4 == pFVar1) goto LAB_14ad2255e;
      if (*(UCameraShakePattern **)pFVar4 != (UCameraShakePattern *)0x0) break;
LAB_14ad2254f:
      pFVar4 = pFVar4 + 8;
    }
    local_58[0].Duration.Duration = 0.0;
    local_58[0].Duration.Type = Fixed;
    local_58[0].BlendIn = 0.0;
    local_58[0].BlendOut = 0.0;
    UCameraShakePattern::GetShakePatternInfo(*(UCameraShakePattern **)pFVar4,local_58);
    if (local_58[0].Duration.Type == Fixed) {
      fVar7 = local_58[0].Duration.Duration;
      if (local_58[0].Duration.Duration <= fVar6) {
        fVar7 = fVar6;
      }
LAB_14ad22549:
      fVar6 = fVar7;
      if (cVar5 != '\x01') goto LAB_14ad2254f;
      goto LAB_14ad2255e;
    }
    if (local_58[0].Duration.Type == Infinite) {
      fVar7 = 0.0;
      cVar5 = '\x01';
LAB_14ad2255e:
      uStackX_14 = CONCAT31(uStackX_14._1_3_,cVar5);
      FVar3._4_4_ = uStackX_14;
      FVar3.Duration = fVar7;
      param_1->Duration = FVar3;
      return;
    }
    if (local_58[0].Duration.Type != Custom) goto LAB_14ad22549;
    cVar5 = '\x02';
    fVar7 = local_58[0].Duration.Duration;
    if (local_58[0].Duration.Duration <= fVar6) {
      fVar7 = fVar6;
    }
    pFVar4 = pFVar4 + 8;
    fVar6 = fVar7;
  } while( true );
}

// IsFinishedImpl @ 14ad229a0

bool __thiscall UCompositeCameraShakePattern::IsFinishedImpl(UCompositeCameraShakePattern *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ChildPatterns).AllocatorInstance.Data;
  iVar2 = (this->ChildPatterns).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildPatterns).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraShakePattern>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(UCameraShakePattern **)pFVar4 != (UCameraShakePattern *)0x0) &&
       (bVar3 = UCameraShakePattern::IsFinished(*(UCameraShakePattern **)pFVar4), !bVar3)) {
      return false;
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

// ScrubShakePatternImpl @ 14ad231a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

void __thiscall
UCompositeCameraShakePattern::ScrubShakePatternImpl
          (UCompositeCameraShakePattern *this,FCameraShakePatternScrubParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UCameraShakePattern *this_00;
  code *pcVar3;
  bool bVar4;
  UCameraShakeBase *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStack_11c8 [32];
  undefined1 local_11a8 [8];
  FCameraShakePatternUpdateResult *local_11a0;
  FCameraShakeApplyResultParams local_1198;
  TVector<double>_u_0 local_10f8;
  double local_10e0;
  double dStack_10d8;
  double local_10d0;
  undefined4 local_10c8;
  FPostProcessSettings local_10b8;
  undefined4 local_948;
  undefined1 local_944;
  float local_938;
  float local_934;
  float local_930;
  TVector<double>_u_0 local_928;
  double local_910;
  double dStack_908;
  double local_900;
  float local_8f8;
  void *local_150;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_11c8;
  local_11a0 = param_2;
  pUVar5 = UCameraShakePattern::GetShakeInstance((UCameraShakePattern *)this);
  if (pUVar5 == (UCameraShakeBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShakeInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Shakes\\CompositeCameraShakePattern.cpp"
                       ,0x6d,L"Running a shake pattern without an outer shake instance");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_938 = param_1->AbsoluteTime;
  local_934 = param_1->ShakeScale;
  local_930 = param_1->DynamicScale;
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_928._s_0,&param_1->POV);
  pFVar6 = (this->ChildPatterns).AllocatorInstance.Data;
  iVar2 = (this->ChildPatterns).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildPatterns).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraShakePattern>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_11a8);
    }
    if (pFVar6 == pFVar1) break;
    this_00 = *(UCameraShakePattern **)pFVar6;
    if (this_00 != (UCameraShakePattern *)0x0) {
      local_10c8 = 0;
      local_10f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_10f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_10f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_10d0 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_10e0 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_10d8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      FPostProcessSettings::FPostProcessSettings(&local_10b8);
      local_948 = 0;
      local_944 = 0;
      UCameraShakePattern::ScrubShakePattern
                (this_00,param_1,(FCameraShakePatternUpdateResult *)&local_10f8._s_0);
      bVar4 = UCameraShakePattern::IsFinished(this_00);
      if (!bVar4) {
        local_1198.Scale = param_1->ShakeScale * param_1->DynamicScale;
        local_1198.UserPlaySpaceMatrix.M[0][2] = (pUVar5->UserPlaySpaceMatrix).M[0][2];
        local_1198.UserPlaySpaceMatrix.M[0][3] = (pUVar5->UserPlaySpaceMatrix).M[0][3];
        local_1198.UserPlaySpaceMatrix.M[1][2] = (pUVar5->UserPlaySpaceMatrix).M[1][2];
        local_1198.UserPlaySpaceMatrix.M[1][3] = (pUVar5->UserPlaySpaceMatrix).M[1][3];
        if (local_1198.Scale <= 0.0) {
          local_1198.Scale = 0.0;
        }
        local_1198.UserPlaySpaceMatrix.M[2][2] = (pUVar5->UserPlaySpaceMatrix).M[2][2];
        local_1198.UserPlaySpaceMatrix.M[2][3] = (pUVar5->UserPlaySpaceMatrix).M[2][3];
        local_1198.CameraManager.WeakPtr.ObjectIndex = 0;
        local_1198.CameraManager.WeakPtr.ObjectSerialNumber = 0;
        local_1198.PlaySpace = pUVar5->PlaySpace;
        local_1198.UserPlaySpaceMatrix.M[0][0] = (pUVar5->UserPlaySpaceMatrix).M[0][0];
        local_1198.UserPlaySpaceMatrix.M[0][1] = (pUVar5->UserPlaySpaceMatrix).M[0][1];
        local_1198.UserPlaySpaceMatrix.M[1][0] = (pUVar5->UserPlaySpaceMatrix).M[1][0];
        local_1198.UserPlaySpaceMatrix.M[1][1] = (pUVar5->UserPlaySpaceMatrix).M[1][1];
        local_1198.UserPlaySpaceMatrix.M[2][0] = (pUVar5->UserPlaySpaceMatrix).M[2][0];
        local_1198.UserPlaySpaceMatrix.M[2][1] = (pUVar5->UserPlaySpaceMatrix).M[2][1];
        local_1198.UserPlaySpaceMatrix.M[3][0] = (pUVar5->UserPlaySpaceMatrix).M[3][0];
        local_1198.UserPlaySpaceMatrix.M[3][1] = (pUVar5->UserPlaySpaceMatrix).M[3][1];
        local_1198.UserPlaySpaceMatrix.M[3][2] = (pUVar5->UserPlaySpaceMatrix).M[3][2];
        local_1198.UserPlaySpaceMatrix.M[3][3] = (pUVar5->UserPlaySpaceMatrix).M[3][3];
        UCameraShakeBase::ApplyResult
                  (&local_1198,(FCameraShakePatternUpdateResult *)&local_10f8._s_0,
                   (FMinimalViewInfo *)&local_928._s_0);
      }
      if (local_10b8.WeightedBlendables.Array.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10b8.WeightedBlendables.Array.AllocatorInstance.Data);
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  local_11a0->Flags = ApplyAsAbsolute;
  (local_11a0->Location).field0_0x0._s_0.X = local_928._s_0.X;
  (local_11a0->Location).field0_0x0._s_0.Y = local_928._s_0.Y;
  (local_11a0->Location).field0_0x0._s_0.Z = local_928._s_0.Z;
  (local_11a0->Rotation).Pitch = local_910;
  (local_11a0->Rotation).Yaw = dStack_908;
  local_11a0->FOV = local_8f8;
  (local_11a0->Rotation).Roll = local_900;
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  return;
}

// StartShakePatternImpl @ 14ad23980

void __thiscall
UCompositeCameraShakePattern::StartShakePatternImpl
          (UCompositeCameraShakePattern *this,FCameraShakePatternStartParams *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ChildPatterns).AllocatorInstance.Data;
  iVar2 = (this->ChildPatterns).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildPatterns).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraShakePattern>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(UCameraShakePattern **)pFVar3 != (UCameraShakePattern *)0x0) {
      UCameraShakePattern::StartShakePattern(*(UCameraShakePattern **)pFVar3,param_1);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// StaticRegisterNativesUCompositeCameraShakePattern @ 14ad23e80

void __cdecl UCompositeCameraShakePattern::StaticRegisterNativesUCompositeCameraShakePattern(void)

{
  return;
}

// StopShakePatternImpl @ 14ad24540

void __thiscall
UCompositeCameraShakePattern::StopShakePatternImpl
          (UCompositeCameraShakePattern *this,FCameraShakePatternStopParams *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ChildPatterns).AllocatorInstance.Data;
  iVar2 = (this->ChildPatterns).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildPatterns).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraShakePattern>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(UCameraShakePattern **)pFVar3 != (UCameraShakePattern *)0x0) {
      UCameraShakePattern::StopShakePattern(*(UCameraShakePattern **)pFVar3,param_1);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// TeardownShakePatternImpl @ 14ad24700

void __thiscall
UCompositeCameraShakePattern::TeardownShakePatternImpl(UCompositeCameraShakePattern *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ChildPatterns).AllocatorInstance.Data;
  iVar2 = (this->ChildPatterns).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildPatterns).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraShakePattern>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(UCameraShakePattern **)pFVar3 != (UCameraShakePattern *)0x0) {
      UCameraShakePattern::TeardownShakePattern(*(UCameraShakePattern **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// UpdateShakePatternImpl @ 14ad25c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

void __thiscall
UCompositeCameraShakePattern::UpdateShakePatternImpl
          (UCompositeCameraShakePattern *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UCameraShakePattern *this_00;
  code *pcVar3;
  FCameraShakePatternUpdateParams *pFVar4;
  bool bVar5;
  UCameraShakeBase *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_11d8 [32];
  undefined1 local_11b8 [8];
  FCameraShakePatternUpdateParams *local_11b0;
  APlayerCameraManager *local_11a8;
  FCameraShakePatternUpdateResult *local_11a0;
  FCameraShakeApplyResultParams local_1198;
  TVector<double>_u_0 local_10f8;
  double local_10e0;
  double dStack_10d8;
  double local_10d0;
  undefined4 local_10c8;
  FPostProcessSettings local_10b8;
  undefined4 local_948;
  undefined1 local_944;
  FCameraShakePatternUpdateParams local_938;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_11d8;
  local_11b0 = param_1;
  local_11a0 = param_2;
  pUVar6 = UCameraShakePattern::GetShakeInstance((UCameraShakePattern *)this);
  if (pUVar6 == (UCameraShakeBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShakeInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Shakes\\CompositeCameraShakePattern.cpp"
                       ,0x44,L"Running a shake pattern without an outer shake instance");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_938.DeltaTime = param_1->DeltaTime;
  local_938.ShakeScale = param_1->ShakeScale;
  local_938.DynamicScale = param_1->DynamicScale;
  FMinimalViewInfo::FMinimalViewInfo(&local_938.POV,&param_1->POV);
  pFVar4 = local_11b0;
  pFVar7 = (this->ChildPatterns).AllocatorInstance.Data;
  iVar2 = (this->ChildPatterns).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildPatterns).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraShakePattern>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_11b8);
    }
    if (pFVar7 == pFVar1) break;
    this_00 = *(UCameraShakePattern **)pFVar7;
    if (this_00 != (UCameraShakePattern *)0x0) {
      bVar5 = UCameraShakePattern::IsFinished(this_00);
      if (!bVar5) {
        local_10c8 = 0;
        local_10f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_10f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_10f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_10d0 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        local_10e0 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        dStack_10d8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        FPostProcessSettings::FPostProcessSettings(&local_10b8);
        local_948 = 0;
        local_944 = 0;
        UCameraShakePattern::UpdateShakePattern
                  (this_00,&local_938,(FCameraShakePatternUpdateResult *)&local_10f8._s_0);
        bVar5 = UCameraShakePattern::IsFinished(this_00);
        if (!bVar5) {
          local_1198.Scale = pFVar4->DynamicScale * pFVar4->ShakeScale;
          local_11a8 = (pUVar6->CameraManager).field0_0x0.DebugPtr;
          local_1198.UserPlaySpaceMatrix.M[0][2] = (pUVar6->UserPlaySpaceMatrix).M[0][2];
          local_1198.UserPlaySpaceMatrix.M[0][3] = (pUVar6->UserPlaySpaceMatrix).M[0][3];
          local_1198.UserPlaySpaceMatrix.M[1][2] = (pUVar6->UserPlaySpaceMatrix).M[1][2];
          local_1198.UserPlaySpaceMatrix.M[1][3] = (pUVar6->UserPlaySpaceMatrix).M[1][3];
          if (local_1198.Scale <= 0.0) {
            local_1198.Scale = 0.0;
          }
          local_1198.UserPlaySpaceMatrix.M[2][2] = (pUVar6->UserPlaySpaceMatrix).M[2][2];
          local_1198.UserPlaySpaceMatrix.M[2][3] = (pUVar6->UserPlaySpaceMatrix).M[2][3];
          local_1198.CameraManager.WeakPtr.ObjectIndex = 0;
          local_1198.CameraManager.WeakPtr.ObjectSerialNumber = 0;
          local_1198.PlaySpace = pUVar6->PlaySpace;
          local_1198.UserPlaySpaceMatrix.M[0][0] = (pUVar6->UserPlaySpaceMatrix).M[0][0];
          local_1198.UserPlaySpaceMatrix.M[0][1] = (pUVar6->UserPlaySpaceMatrix).M[0][1];
          local_1198.UserPlaySpaceMatrix.M[1][0] = (pUVar6->UserPlaySpaceMatrix).M[1][0];
          local_1198.UserPlaySpaceMatrix.M[1][1] = (pUVar6->UserPlaySpaceMatrix).M[1][1];
          local_1198.UserPlaySpaceMatrix.M[2][0] = (pUVar6->UserPlaySpaceMatrix).M[2][0];
          local_1198.UserPlaySpaceMatrix.M[2][1] = (pUVar6->UserPlaySpaceMatrix).M[2][1];
          local_1198.UserPlaySpaceMatrix.M[3][0] = (pUVar6->UserPlaySpaceMatrix).M[3][0];
          local_1198.UserPlaySpaceMatrix.M[3][1] = (pUVar6->UserPlaySpaceMatrix).M[3][1];
          local_1198.UserPlaySpaceMatrix.M[3][2] = (pUVar6->UserPlaySpaceMatrix).M[3][2];
          local_1198.UserPlaySpaceMatrix.M[3][3] = (pUVar6->UserPlaySpaceMatrix).M[3][3];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_11a8 != (APlayerCameraManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_11a8);
          }
          FWeakObjectPtr::operator=(&local_1198.CameraManager.WeakPtr,(FObjectPtr)&local_11a8);
          UCameraShakeBase::ApplyResult
                    (&local_1198,(FCameraShakePatternUpdateResult *)&local_10f8._s_0,&local_938.POV)
          ;
        }
        if (local_10b8.WeightedBlendables.Array.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10b8.WeightedBlendables.Array.AllocatorInstance.Data);
        }
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  local_11a0->Flags = ApplyAsAbsolute;
  (local_11a0->Location).field0_0x0._s_0.X = local_938.POV.Location.field0_0x0._s_0.X;
  (local_11a0->Location).field0_0x0._s_0.Y = local_938.POV.Location.field0_0x0._s_0.Y;
  (local_11a0->Location).field0_0x0._s_0.Z = local_938.POV.Location.field0_0x0._s_0.Z;
  (local_11a0->Rotation).Pitch = local_938.POV.Rotation.Pitch;
  (local_11a0->Rotation).Yaw = local_938.POV.Rotation.Yaw;
  local_11a0->FOV = local_938.POV.FOV;
  (local_11a0->Rotation).Roll = local_938.POV.Rotation.Roll;
  if (local_938.POV.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.POV.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data)
    ;
  }
  return;
}

