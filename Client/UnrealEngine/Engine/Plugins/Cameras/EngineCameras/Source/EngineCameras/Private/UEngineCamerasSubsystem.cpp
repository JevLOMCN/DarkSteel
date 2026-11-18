// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 21

// StaticClass @ 14ad1b460

UClass * __cdecl UEngineCamerasSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineCamerasSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"EngineCamerasSubsystem",
               &Z_Registration_Info_UClass_UEngineCamerasSubsystem.InnerSingleton,
               StaticRegisterNativesUEngineCamerasSubsystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEngineCamerasSubsystem>,
               InternalVTableHelperCtorCaller<UEngineCamerasSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineCamerasSubsystem.InnerSingleton;
}

// UEngineCamerasSubsystem @ 14ad1e6d0

UEngineCamerasSubsystem * __thiscall
UEngineCamerasSubsystem::UEngineCamerasSubsystem
          (UEngineCamerasSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  *(undefined ***)this = &___7UEngineCamerasSubsystem__6B_;
  return this;
}

// UEngineCamerasSubsystem @ 14ad1e700

UEngineCamerasSubsystem * __thiscall
UEngineCamerasSubsystem::UEngineCamerasSubsystem(UEngineCamerasSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  *(undefined ***)this = &___7UEngineCamerasSubsystem__6B_;
  return this;
}

// ~UEngineCamerasSubsystem @ 14ad1ef70

void __thiscall UEngineCamerasSubsystem::~UEngineCamerasSubsystem(UEngineCamerasSubsystem *this)

{
  *(undefined ***)this = &___7UEngineCamerasSubsystem__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// GetEngineCamerasSubsystem @ 14ad21980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEngineCamerasSubsystem * __cdecl
UEngineCamerasSubsystem::GetEngineCamerasSubsystem(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UEngineCamerasSubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return (UEngineCamerasSubsystem *)0x0;
  }
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14ad219b8;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14ad219b8:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14ad219e8;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14ad219e8:
  pUVar5 = (UEngineCamerasSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetPrivateStaticClass @ 14ad21e30

UClass * __cdecl UEngineCamerasSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineCamerasSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"EngineCamerasSubsystem",
               &Z_Registration_Info_UClass_UEngineCamerasSubsystem.InnerSingleton,
               StaticRegisterNativesUEngineCamerasSubsystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEngineCamerasSubsystem>,
               InternalVTableHelperCtorCaller<UEngineCamerasSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineCamerasSubsystem.InnerSingleton;
}

// IsCameraAnimationActive @ 14ad22960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UEngineCamerasSubsystem::IsCameraAnimationActive
          (UEngineCamerasSubsystem *this,APlayerController *param_1,FCameraAnimationHandle *param_2)

{
  bool bVar1;
  UCameraAnimationCameraModifier *this_00;
  
  this_00 = UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController
                      (param_1);
  if (this_00 != (UCameraAnimationCameraModifier *)0x0) {
    bVar1 = UCameraAnimationCameraModifier::IsCameraAnimationActive(this_00,param_2);
    return bVar1;
  }
  return false;
}

// PlayCameraAnimation @ 14ad22fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCameraAnimationHandle __thiscall
UEngineCamerasSubsystem::PlayCameraAnimation
          (UEngineCamerasSubsystem *this,APlayerController *param_1,
          UCameraAnimationSequence *param_2,FCameraAnimationParams *param_3)

{
  bool bVar1;
  UCameraAnimationCameraModifier *this_00;
  undefined8 *in_stack_00000028;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  this_00 = UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController
                      ((APlayerController *)param_2);
  if (this_00 == (UCameraAnimationCameraModifier *)0x0) {
    bVar1 = `UEngineCamerasSubsystem::PlayCameraAnimation'::__l3::<lambda_1>::operator()(local_68);
    if (!bVar1) {
      local_64 = 0;
      FFrame::KismetExecutionMessage
                (L"Can\'t play camera animation: no camera animation modifier found",Error,
                 (FName)0x0);
      *(FCameraAnimationHandle *)&param_1->_padding_ = FCameraAnimationHandle::Invalid;
      goto LAB_14ad23061;
    }
  }
  local_58 = *in_stack_00000028;
  uStack_50 = in_stack_00000028[1];
  local_48 = in_stack_00000028[2];
  uStack_40 = in_stack_00000028[3];
  local_38 = in_stack_00000028[4];
  uStack_30 = in_stack_00000028[5];
  local_28 = in_stack_00000028[6];
  uStack_20 = in_stack_00000028[7];
  local_18 = in_stack_00000028[8];
  UCameraAnimationCameraModifier::PlayCameraAnimation
            (this_00,(UCameraAnimationSequence *)param_1,param_3);
LAB_14ad23061:
  return SUB84(param_1,0);
}

// StaticRegisterNativesUEngineCamerasSubsystem @ 14ad23ef0

void __cdecl UEngineCamerasSubsystem::StaticRegisterNativesUEngineCamerasSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UEngineCamerasSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAllCameraAnimations @ 14ad24070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEngineCamerasSubsystem::StopAllCameraAnimations
          (UEngineCamerasSubsystem *this,APlayerController *param_1,bool param_2)

{
  bool bVar1;
  UCameraAnimationCameraModifier *pUVar2;
  undefined8 local_res20;
  
  pUVar2 = UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController
                     (param_1);
  if (pUVar2 == (UCameraAnimationCameraModifier *)0x0) {
    bVar1 = `UEngineCamerasSubsystem::StopAllCameraAnimations'::__l3::<lambda_1>::operator()
                      (&local_res20);
    if (!bVar1) {
      local_res20 = 0;
      FFrame::KismetExecutionMessage
                (L"Can\'t stop all camera animation: no camera animation modifier found",Error,
                 (FName)0x0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ad240d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar2->_padding_ + 800))(pUVar2,param_2);
  return;
}

// StopAllCameraAnimationsOf @ 14ad24180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEngineCamerasSubsystem::StopAllCameraAnimationsOf
          (UEngineCamerasSubsystem *this,APlayerController *param_1,
          UCameraAnimationSequence *param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UCameraAnimationCameraModifier *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_28 [4];
  undefined8 local_24;
  
  this_00 = UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController
                      (param_1);
  if (this_00 == (UCameraAnimationCameraModifier *)0x0) {
    bVar2 = `UEngineCamerasSubsystem::StopAllCameraAnimationsOf'::__l3::<lambda_1>::operator()
                      (local_28);
    if (!bVar2) {
      local_24 = 0;
      FFrame::KismetExecutionMessage
                (L"Can\'t stop camera animations: no camera animation modifier found",Error,
                 (FName)0x0);
      return;
    }
  }
  pFVar3 = (this_00->ActiveAnimations).AllocatorInstance.Data;
  iVar1 = (this_00->ActiveAnimations).ArrayNum;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this_00->ActiveAnimations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FActiveCameraAnimationInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_28);
    }
    if (pFVar3 == pFVar4) break;
    if (*(UCameraAnimationSequence **)pFVar3 == (UCameraAnimationSequence *)0x0) {
      bVar2 = param_2 == (UCameraAnimationSequence *)0x0;
    }
    else {
      bVar2 = *(UCameraAnimationSequence **)pFVar3 == param_2;
    }
    if (bVar2) {
      UCameraAnimationCameraModifier::StopCameraAnimation
                (this_00,(FCameraAnimationHandle *)(pFVar3 + 0x50),param_3);
    }
    pFVar3 = pFVar3 + 0x78;
  }
  return;
}

// StopCameraAnimation @ 14ad244c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEngineCamerasSubsystem::StopCameraAnimation
          (UEngineCamerasSubsystem *this,APlayerController *param_1,FCameraAnimationHandle *param_2,
          bool param_3)

{
  bool bVar1;
  UCameraAnimationCameraModifier *this_00;
  undefined1 local_18 [4];
  undefined8 local_14;
  
  this_00 = UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController
                      (param_1);
  if (this_00 == (UCameraAnimationCameraModifier *)0x0) {
    bVar1 = `UEngineCamerasSubsystem::StopCameraAnimation'::__l3::<lambda_1>::operator()(local_18);
    if (!bVar1) {
      local_14 = 0;
      FFrame::KismetExecutionMessage
                (L"Can\'t stop camera animation: no camera animation modifier found",Error,
                 (FName)0x0);
      return;
    }
  }
  UCameraAnimationCameraModifier::StopCameraAnimation(this_00,param_2,param_3);
  return;
}

// execIsCameraAnimationActive @ 14ad27090

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
UEngineCamerasSubsystem::execIsCameraAnimationActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UCameraAnimationCameraModifier *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  UCameraAnimationCameraModifier *this;
  wchar_t *pwVar9;
  FCameraAnimationHandle *pFVar10;
  wchar_t *pwVar11;
  FCameraAnimationHandle local_res10 [2];
  longlong local_res20;
  UClass *local_48;
  FString local_40;
  FString local_30;
  
  this = (UCameraAnimationCameraModifier *)0x0;
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
  local_res10[0].InstanceID = 0xffff;
  local_res10[0].InstanceSerial = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pFVar10 = local_res10;
  if ((FCameraAnimationHandle *)param_2->MostRecentPropertyAddress != (FCameraAnimationHandle *)0x0)
  {
    pFVar10 = (FCameraAnimationHandle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != 0) {
    plVar3 = *(longlong **)(local_res20 + 0x390);
    pcVar4 = *(code **)(*plVar3 + 2000);
    local_48 = UCameraAnimationCameraModifier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    pUVar6 = (UCameraAnimationCameraModifier *)(*pcVar4)(plVar3,&local_48);
    if (pUVar6 != (UCameraAnimationCameraModifier *)0x0) {
      pUVar7 = UCameraAnimationCameraModifier::StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
         (this = pUVar6,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar7->_padding_)) {
        pFVar8 = GetTypeName<UCameraAnimationCameraModifier>(&local_40);
        pwVar11 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<UCameraModifier>(&local_30,(UCameraModifier *)pUVar6);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar11,pwVar9);
      }
    }
    if (this != (UCameraAnimationCameraModifier *)0x0) {
      bVar5 = UCameraAnimationCameraModifier::IsCameraAnimationActive(this,pFVar10);
      goto LAB_14ad27204;
    }
  }
  bVar5 = false;
LAB_14ad27204:
  *(bool *)param_3 = bVar5;
  return;
}

// execPlayCameraAnimation @ 14ad277b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UEngineCamerasSubsystem::execPlayCameraAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FName FVar5;
  UTemplateSequence *pUVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  UClass *pUVar27;
  UClass *pUVar28;
  FString *pFVar29;
  FName *pFVar30;
  FName FVar31;
  UObject *pUVar32;
  UCameraAnimationSequenceCameraStandIn *this;
  ForAnyElementType FVar33;
  longlong *plVar34;
  wchar_t *pwVar35;
  FCameraAnimationHandle FVar36;
  wchar_t *pwVar37;
  UClass *this_00;
  undefined8 *puVar38;
  bool bVar39;
  undefined1 auStackY_2d8 [32];
  undefined1 local_2a8 [4];
  FCameraAnimationHandle local_2a4;
  UTemplateSequence *local_2a0;
  longlong local_298 [4];
  FName local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  uint uStack_260;
  float fStack_25c;
  uint local_258;
  undefined4 uStack_254;
  uint uStack_250;
  int iStack_24c;
  bool local_248;
  undefined1 uStack_247;
  undefined1 uStack_246;
  undefined1 uStack_245;
  undefined4 uStack_244;
  undefined1 uStack_240;
  undefined1 uStack_23f;
  undefined1 uStack_23e;
  undefined1 uStack_23d;
  undefined1 uStack_23c;
  undefined1 uStack_23b;
  undefined1 uStack_23a;
  undefined1 uStack_239;
  double local_238;
  double dStack_230;
  double local_228;
  UClass *local_218;
  FName local_210;
  FName local_208;
  FString local_200;
  FName local_1f0;
  FName local_1e8;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  this_00 = (UClass *)0x0;
  local_298[0] = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_298,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_298);
  }
  local_2a0 = (UTemplateSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a0);
  }
  local_268 = 0x3f800000;
  uStack_264 = 0x3f800000;
  local_238 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_230 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_228 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uStack_260 = uStack_260 & 0xffffff00;
  fStack_25c = 0.0;
  local_258 = local_258 & 0xffffff00;
  uStack_254 = 0;
  uStack_250 = uStack_250 & 0xffffff00;
  iStack_24c = 0;
  local_248 = false;
  uStack_244 = 0;
  uStack_240 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_268,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_268);
  }
  dVar22 = local_228;
  dVar21 = dStack_230;
  dVar20 = local_238;
  uVar19 = uStack_240;
  bVar23 = local_248;
  iVar14 = iStack_24c;
  uVar13 = uStack_250;
  uVar12 = uStack_254;
  uVar11 = local_258;
  fVar10 = fStack_25c;
  uVar9 = uStack_260;
  uVar8 = uStack_264;
  uVar7 = local_268;
  pUVar6 = local_2a0;
  uVar15 = (undefined1)uStack_244;
  uVar16 = uStack_244._1_1_;
  uVar17 = uStack_244._2_1_;
  uVar18 = uStack_244._3_1_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_298[0] == 0) {
LAB_14ad27a16:
    local_2a8[0] = 0;
    bVar39 = `UEngineCamerasSubsystem::PlayCameraAnimation'::__l3::<lambda_1>::operator()(local_2a8)
    ;
    if (!bVar39) {
      local_298[1] = 0;
      FFrame::KismetExecutionMessage
                (L"Can\'t play camera animation: no camera animation modifier found",Error,
                 (FName)0x0);
      FVar36 = FCameraAnimationHandle::Invalid;
      goto LAB_14ad27db7;
    }
  }
  else {
    plVar34 = *(longlong **)(local_298[0] + 0x390);
    pcVar4 = *(code **)(*plVar34 + 2000);
    local_218 = UCameraAnimationCameraModifier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_218 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_218);
    }
    pUVar27 = (UClass *)(*pcVar4)(plVar34);
    if (pUVar27 != (UClass *)0x0) {
      pUVar28 = UCameraAnimationCameraModifier::StaticClass();
      iVar2 = (int)pUVar28->_padding_;
      if ((*(int *)(pUVar27->_padding_ + 0x38) < iVar2) ||
         (this_00 = pUVar27,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar27->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar28->_padding_)) {
        pFVar29 = GetTypeName<UCameraAnimationCameraModifier>(&local_1d0);
        pwVar35 = L"";
        if ((pFVar29->Data).ArrayNum == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
        }
        pFVar29 = GetFullNameForCastLogError<UCameraModifier>(&local_1c0,(UCameraModifier *)pUVar27)
        ;
        if ((pFVar29->Data).ArrayNum != 0) {
          pwVar35 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar35,pwVar37);
      }
    }
    if (this_00 == (UClass *)0x0) goto LAB_14ad27a16;
  }
  if (pUVar6 == (UTemplateSequence *)0x0) {
    bVar23 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6584040231744307105>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                        ,0x5f,"Sequence");
    FVar36 = FCameraAnimationHandle::Invalid;
    if (bVar23) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_210 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_210,&local_1e0);
    ::FString::PrintfImpl(&local_200,L"PlayCameraAnimation %s");
    FVar33.Data = (FScriptContainerElement *)L"";
    if (local_200.Data.ArrayNum != 0) {
      FVar33.Data = local_200.Data.AllocatorInstance.Data;
    }
    bVar39 = -1 < CpuChannel->Enabled;
    if (bVar39) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar33.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                 ,100);
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    uVar25 = UCameraAnimationCameraModifier::FindInactiveCameraAnimation
                       ((UCameraAnimationCameraModifier *)this_00);
    if ((0xfffe < (int)uVar25) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewIndex < ((uint16) 0xffff)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                            ,0x67,L""), bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_2a4.InstanceSerial = (ushort)this_00->_padding_;
    local_2a4.InstanceID = (ushort)uVar25;
    *(ushort *)&this_00->_padding_ = local_2a4.InstanceSerial + 1;
    uVar26 = 0;
    if ((int)uVar25 < (int)this_00->_padding_) {
      uVar26 = ~uVar25 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar38 = (undefined8 *)((longlong)(int)uVar25 * 0x78 + this_00->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FVar36 = local_2a4;
    *puVar38 = pUVar6;
    *(undefined4 *)(puVar38 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar38 + 0xc) = uVar8;
    *(uint *)(puVar38 + 2) = uVar9;
    *(float *)((longlong)puVar38 + 0x14) = fVar10;
    *(FCameraAnimationHandle *)(puVar38 + 10) = local_2a4;
    *(uint *)(puVar38 + 3) = uVar11;
    *(undefined4 *)((longlong)puVar38 + 0x1c) = uVar12;
    *(uint *)(puVar38 + 4) = uVar13;
    *(int *)((longlong)puVar38 + 0x24) = iVar14;
    *(bool *)(puVar38 + 5) = bVar23;
    *(undefined1 *)((longlong)puVar38 + 0x29) = uStack_247;
    *(undefined1 *)((longlong)puVar38 + 0x2a) = uStack_246;
    *(undefined1 *)((longlong)puVar38 + 0x2b) = uStack_245;
    *(undefined1 *)((longlong)puVar38 + 0x2c) = uVar15;
    *(undefined1 *)((longlong)puVar38 + 0x2d) = uVar16;
    *(undefined1 *)((longlong)puVar38 + 0x2e) = uVar17;
    *(undefined1 *)((longlong)puVar38 + 0x2f) = uVar18;
    *(undefined1 *)(puVar38 + 6) = uVar19;
    *(undefined1 *)((longlong)puVar38 + 0x31) = uStack_23f;
    *(undefined1 *)((longlong)puVar38 + 0x32) = uStack_23e;
    *(undefined1 *)((longlong)puVar38 + 0x33) = uStack_23d;
    *(undefined1 *)((longlong)puVar38 + 0x34) = uStack_23c;
    *(undefined1 *)((longlong)puVar38 + 0x35) = uStack_23b;
    *(undefined1 *)((longlong)puVar38 + 0x36) = uStack_23a;
    *(undefined1 *)((longlong)puVar38 + 0x37) = uStack_239;
    puVar38[7] = dVar20;
    puVar38[8] = dVar21;
    puVar38[9] = dVar22;
    pFVar30 = ::FName::FName(&local_1f0,L"CameraAnimationPlayer");
    FVar5 = *pFVar30;
    FVar31 = (FName)Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister();
    MakeUniqueObjectName((UObject *)&local_208,this_00,FVar31,FVar5.ComparisonIndex.Value.Value);
    local_298[2] = 0;
    if (local_208 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this_00,
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
    local_1a8._16_4_ = local_208.ComparisonIndex.Value;
    local_1a8._20_4_ = local_208.Number;
    local_1a8._8_8_ = this_00;
    pUVar32 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
    if (local_1a8._64_8_ != 0) {
      plVar34 = (longlong *)(local_1a8 + 0x50);
      if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
        plVar34 = (longlong *)local_1a8._104_8_;
      }
      (**(code **)(*plVar34 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar32 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar32);
    }
    puVar38[0xb] = pUVar32;
    pFVar30 = ::FName::FName(&local_1e8,L"CameraStandIn");
    FVar5 = *pFVar30;
    FVar31 = (FName)Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister();
    MakeUniqueObjectName((UObject *)&local_278,this_00,FVar31,FVar5.ComparisonIndex.Value.Value);
    local_298[3] = 0;
    if (local_278 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this_00,
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
    local_128._16_4_ = local_278.ComparisonIndex.Value;
    local_128._20_4_ = local_278.Number;
    local_128._8_8_ = this_00;
    this = (UCameraAnimationSequenceCameraStandIn *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
    if (local_128._64_8_ != 0) {
      plVar34 = (longlong *)(local_128 + 0x50);
      if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
        plVar34 = (longlong *)local_128._104_8_;
      }
      (**(code **)(*plVar34 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCameraAnimationSequenceCameraStandIn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar38[0xc] = this;
    *(bool *)(puVar38 + 0xe) = 0.0 < fVar10;
    UCameraAnimationSequenceCameraStandIn::Initialize(this,pUVar6);
    UCameraAnimationSequencePlayer::SetBoundObjectOverride
              ((UCameraAnimationSequencePlayer *)puVar38[0xb],(UObject *)puVar38[0xc]);
    UCameraAnimationSequencePlayer::Initialize
              ((UCameraAnimationSequencePlayer *)puVar38[0xb],(UMovieSceneSequence *)pUVar6,iVar14,
               0.0);
    UCameraAnimationSequencePlayer::Play
              ((UCameraAnimationSequencePlayer *)puVar38[0xb],SUB41(uVar13,0),bVar23);
    if (bVar39) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
LAB_14ad27db7:
  *(FCameraAnimationHandle *)param_3 = FVar36;
  return;
}

// execStopAllCameraAnimations @ 14ad283d0

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
UEngineCamerasSubsystem::execStopAllCameraAnimations(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UCameraModifier *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  UCameraModifier *pUVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  bool bVar12;
  undefined8 local_res10 [2];
  int local_res20 [2];
  longlong local_48;
  UClass *local_40;
  FString local_38;
  FString local_28;
  
  pUVar9 = (UCameraModifier *)0x0;
  local_48 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar12 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48 != 0) {
    plVar3 = *(longlong **)(local_48 + 0x390);
    pcVar4 = *(code **)(*plVar3 + 2000);
    local_40 = UCameraAnimationCameraModifier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
    pUVar6 = (UCameraModifier *)(*pcVar4)(plVar3,&local_40);
    if (pUVar6 != (UCameraModifier *)0x0) {
      pUVar7 = UCameraAnimationCameraModifier::StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
         (pUVar9 = pUVar6,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar7->_padding_)) {
        pFVar8 = GetTypeName<UCameraAnimationCameraModifier>(&local_38);
        pwVar11 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<UCameraModifier>(&local_28,pUVar6);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar11,pwVar10);
      }
    }
    if (pUVar9 != (UCameraModifier *)0x0) goto LAB_14ad2851d;
  }
  bVar5 = `UEngineCamerasSubsystem::StopAllCameraAnimations'::__l3::<lambda_1>::operator()
                    (local_res10);
  if (!bVar5) {
    local_res10[0] = 0;
    FFrame::KismetExecutionMessage
              (L"Can\'t stop all camera animation: no camera animation modifier found",Error,
               (FName)0x0);
    return;
  }
LAB_14ad2851d:
  (**(code **)(pUVar9->_padding_ + 800))(pUVar9,bVar12);
  return;
}

// execStopAllCameraAnimationsOf @ 14ad286c0

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
UEngineCamerasSubsystem::execStopAllCameraAnimationsOf
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  UCameraAnimationCameraModifier *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  UCameraAnimationCameraModifier *this;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  bool bVar14;
  bool bVar15;
  undefined8 local_res10 [2];
  int local_res20 [2];
  longlong local_68;
  longlong local_60;
  UClass *local_58;
  FString local_50;
  FString local_40;
  
  this = (UCameraAnimationCameraModifier *)0x0;
  local_60 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  lVar6 = local_68;
  bVar14 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_60 != 0) {
    plVar4 = *(longlong **)(local_60 + 0x390);
    pcVar5 = *(code **)(*plVar4 + 2000);
    local_58 = UCameraAnimationCameraModifier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_58);
    }
    pUVar7 = (UCameraAnimationCameraModifier *)(*pcVar5)(plVar4,&local_58);
    if (pUVar7 != (UCameraAnimationCameraModifier *)0x0) {
      pUVar8 = UCameraAnimationCameraModifier::StaticClass();
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar2) ||
         (this = pUVar7,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
         != &pUVar8->_padding_)) {
        pFVar9 = GetTypeName<UCameraAnimationCameraModifier>(&local_50);
        pwVar10 = L"";
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        pFVar9 = GetFullNameForCastLogError<UCameraModifier>(&local_40,(UCameraModifier *)pUVar7);
        if ((pFVar9->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar10,pwVar13);
      }
    }
    if (this != (UCameraAnimationCameraModifier *)0x0) goto LAB_14ad28846;
  }
  bVar15 = `UEngineCamerasSubsystem::StopAllCameraAnimationsOf'::__l3::<lambda_1>::operator()
                     (local_res10);
  if (!bVar15) {
    local_res10[0] = 0;
    FFrame::KismetExecutionMessage
              (L"Can\'t stop camera animations: no camera animation modifier found",Error,(FName)0x0
              );
    return;
  }
LAB_14ad28846:
  pFVar11 = (this->ActiveAnimations).AllocatorInstance.Data;
  iVar2 = (this->ActiveAnimations).ArrayNum;
  pFVar12 = pFVar11 + (longlong)iVar2 * 0x78;
  while( true ) {
    if ((this->ActiveAnimations).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FActiveCameraAnimationInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar11 == pFVar12) break;
    if (*(longlong *)pFVar11 == 0) {
      bVar15 = lVar6 == 0;
    }
    else {
      bVar15 = *(longlong *)pFVar11 == lVar6;
    }
    if (bVar15) {
      UCameraAnimationCameraModifier::StopCameraAnimation
                (this,(FCameraAnimationHandle *)(pFVar11 + 0x50),bVar14);
    }
    pFVar11 = pFVar11 + 0x78;
  }
  return;
}

// execStopCameraAnimation @ 14ad28a00

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
UEngineCamerasSubsystem::execStopCameraAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  UCameraAnimationCameraModifier *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  UCameraAnimationCameraModifier *this;
  FCameraAnimationHandle *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined8 local_res10;
  FCameraAnimationHandle local_res20 [2];
  int local_58 [2];
  longlong local_50;
  UClass *local_48;
  FString local_40;
  FString local_30;
  
  this = (UCameraAnimationCameraModifier *)0x0;
  local_50 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res20[0].InstanceID = 0xffff;
  local_res20[0].InstanceSerial = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_58[0] = 0;
  pFVar10 = local_res20;
  if ((FCameraAnimationHandle *)param_2->MostRecentPropertyAddress != (FCameraAnimationHandle *)0x0)
  {
    pFVar10 = (FCameraAnimationHandle *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  bVar13 = local_58[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_50 != 0) {
    plVar4 = *(longlong **)(local_50 + 0x390);
    pcVar5 = *(code **)(*plVar4 + 2000);
    local_48 = UCameraAnimationCameraModifier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    pUVar7 = (UCameraAnimationCameraModifier *)(*pcVar5)(plVar4,&local_48);
    if (pUVar7 != (UCameraAnimationCameraModifier *)0x0) {
      pUVar8 = UCameraAnimationCameraModifier::StaticClass();
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar2) ||
         (this = pUVar7,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
         != &pUVar8->_padding_)) {
        pFVar9 = GetTypeName<UCameraAnimationCameraModifier>(&local_40);
        pwVar12 = L"";
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        pFVar9 = GetFullNameForCastLogError<UCameraModifier>(&local_30,(UCameraModifier *)pUVar7);
        if ((pFVar9->Data).ArrayNum != 0) {
          pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar12,pwVar11);
      }
    }
    if (this != (UCameraAnimationCameraModifier *)0x0) goto LAB_14ad28b9b;
  }
  bVar6 = `UEngineCamerasSubsystem::StopCameraAnimation'::__l3::<lambda_1>::operator()(&local_res10)
  ;
  if (!bVar6) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage
              (L"Can\'t stop camera animation: no camera animation modifier found",Error,(FName)0x0)
    ;
    return;
  }
LAB_14ad28b9b:
  UCameraAnimationCameraModifier::StopCameraAnimation(this,pFVar10,bVar13);
  return;
}

// operator() @ 15055aec0

bool __thiscall
`UEngineCamerasSubsystem::PlayCameraAnimation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6361445644594315289>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6361445644594315289>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15055af00

bool __thiscall
`UEngineCamerasSubsystem::StopAllCameraAnimations'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6361445644594315332>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6361445644594315332>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15055af40

bool __thiscall
`UEngineCamerasSubsystem::StopAllCameraAnimationsOf'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6361445644594315321>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6361445644594315321>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15055af80

bool __thiscall
`UEngineCamerasSubsystem::StopCameraAnimation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6361445644594315310>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6361445644594315310>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

