// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1473c9430

UClass * __cdecl UAnimationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationSettings",
               &Z_Registration_Info_UClass_UAnimationSettings.InnerSingleton,
               StaticRegisterNativesUAnimationSettings,0x148,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationSettings>,
               InternalVTableHelperCtorCaller<UAnimationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSettings.InnerSingleton;
}

// UAnimationSettings @ 1473d8850

UAnimationSettings * __thiscall
UAnimationSettings::UAnimationSettings(UAnimationSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimationSettings__6B_;
  (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyEndEffectorsMatchNameArray).ArrayNum = 0;
  (this->KeyEndEffectorsMatchNameArray).ArrayMax = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).HourAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).HourAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).MinuteAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).MinuteAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).SecondAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).SecondAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).FrameAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).FrameAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).SubframeAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).SubframeAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).RateAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).RateAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).TakenameAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).TakenameAttributeName.Number = 0;
  (this->BoneCustomAttributesNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneCustomAttributesNames).ArrayNum = 0;
  (this->BoneCustomAttributesNames).ArrayMax = 0;
  (this->BoneNamesWithCustomAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneNamesWithCustomAttributes).ArrayNum = 0;
  (this->BoneNamesWithCustomAttributes).ArrayMax = 0;
  *(undefined8 *)&this->AttributeBlendModes = 0;
  *(undefined8 *)&(this->AttributeBlendModes).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeBlendModes).field_0x20 = 0;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x34 = 0;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributeBlendModes).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x48 = 0;
  (this->TransformAttributeNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformAttributeNames).ArrayNum = 0;
  (this->TransformAttributeNames).ArrayMax = 0;
  (this->UserDefinedStructAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDefinedStructAttributes).ArrayNum = 0;
  (this->UserDefinedStructAttributes).ArrayMax = 0;
  (this->MirrorFindReplaceExpressions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MirrorFindReplaceExpressions).ArrayNum = 0;
  (this->MirrorFindReplaceExpressions).ArrayMax = 0;
  (this->DefaultFrameRate).Numerator = 60000;
  (this->DefaultFrameRate).Denominator = 1;
  return this;
}

// UAnimationSettings @ 1473d8940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001473d8ed3) */
/* WARNING: Removing unreachable block (ram,0x0001473d8d27) */
/* WARNING: Removing unreachable block (ram,0x0001473d8b67) */
/* WARNING: Removing unreachable block (ram,0x0001473d8c47) */
/* WARNING: Removing unreachable block (ram,0x0001473d8dfd) */
/* WARNING: Removing unreachable block (ram,0x0001473d8fa9) */

UAnimationSettings * __thiscall
UAnimationSettings::UAnimationSettings(UAnimationSettings *this,FObjectInitializer *param_1)

{
  int *piVar1;
  TArray<FMirrorFindReplaceExpression,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  code *pcVar4;
  FName *pFVar5;
  bool bVar6;
  int iVar7;
  UAnimationSettings *pUVar8;
  FName *pFVar9;
  FName *pFVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined1 auStackY_3f8 [32];
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FName local_340;
  FName local_338;
  FName local_330;
  FName local_328;
  FName local_320;
  FName local_318;
  FName local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName FStack_1e0;
  undefined1 local_1d8;
  FName FStack_1d4;
  FName FStack_1cc;
  undefined1 uStack_1c4;
  FName FStack_1c0;
  FName local_1b8;
  undefined1 uStack_1b0;
  FName FStack_1ac;
  FName FStack_1a4;
  undefined1 uStack_19c;
  FName local_198;
  FName FStack_190;
  undefined1 local_188;
  FName FStack_184;
  FName FStack_17c;
  undefined1 uStack_174;
  FName FStack_170;
  FName local_168;
  undefined1 uStack_160;
  FName FStack_15c;
  FName FStack_154;
  undefined1 uStack_14c;
  FName local_148;
  FName local_140;
  undefined1 local_138;
  FName local_134;
  FName local_12c;
  undefined1 local_124;
  FName local_120;
  FName local_118;
  undefined1 local_110;
  FName local_10c;
  FName local_104;
  undefined1 local_fc;
  FName local_f8;
  FName local_f0;
  undefined1 local_e8;
  FName local_e4;
  FName local_dc;
  undefined1 local_d4;
  FName local_d0;
  FName local_c8;
  undefined1 local_c0;
  FName local_bc;
  FName local_b4;
  undefined1 local_ac;
  FName local_a8;
  FName local_a0;
  undefined1 local_98;
  FName local_94;
  FName local_8c;
  undefined1 local_84;
  FName local_80;
  FName local_78;
  undefined1 local_70;
  FName local_6c;
  FName local_64;
  undefined1 local_5c;
  FName local_58;
  FName local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->CompressCommandletVersion = 2;
  this->ForceRecompression = false;
  this->bForceBelowThreshold = false;
  this->bFirstRecompressUsingCurrentOrDefault = true;
  this->bRaiseMaxErrorToExisting = false;
  pTVar2 = &this->MirrorFindReplaceExpressions;
  this->bEnablePerformanceLog = false;
  this->_padding_ = (longlong)&___7UAnimationSettings__6B_;
  piVar1 = &(this->MirrorFindReplaceExpressions).ArrayMax;
  (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyEndEffectorsMatchNameArray).ArrayNum = 0;
  (this->KeyEndEffectorsMatchNameArray).ArrayMax = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).HourAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).HourAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).MinuteAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).MinuteAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).SecondAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).SecondAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).FrameAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).FrameAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).SubframeAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).SubframeAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).RateAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).RateAttributeName.Number = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).TakenameAttributeName.ComparisonIndex = 0;
  (this->BoneTimecodeCustomAttributeNameSettings).TakenameAttributeName.Number = 0;
  (this->BoneCustomAttributesNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneCustomAttributesNames).ArrayNum = 0;
  (this->BoneCustomAttributesNames).ArrayMax = 0;
  (this->BoneNamesWithCustomAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneNamesWithCustomAttributes).ArrayNum = 0;
  (this->BoneNamesWithCustomAttributes).ArrayMax = 0;
  *(undefined8 *)&this->AttributeBlendModes = 0;
  *(undefined8 *)&(this->AttributeBlendModes).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeBlendModes).field_0x20 = 0;
  this->bTickAnimationOnSkeletalMeshInit = true;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x34 = 0;
  *(undefined8 *)&(this->AttributeBlendModes).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeBlendModes).field_0x48 = 0;
  this->DefaultAttributeBlendMode = Blend;
  (this->TransformAttributeNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformAttributeNames).ArrayNum = 0;
  (this->TransformAttributeNames).ArrayMax = 0;
  (this->UserDefinedStructAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDefinedStructAttributes).ArrayNum = 0;
  (this->UserDefinedStructAttributes).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MirrorFindReplaceExpressions).ArrayNum = 0;
  *piVar1 = 0;
  (this->DefaultFrameRate).Numerator = 60000;
  (this->DefaultFrameRate).Denominator = 1;
  ::FName::FName(&local_340,L"Animation");
  this->_padding_ = (longlong)local_340;
  ::FString::FString(&local_3a8,L"IK");
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_3a8) &&
      ((FScriptContainerElement *)&local_3a8 <
       pFVar12 + (longlong)(this->KeyEndEffectorsMatchNameArray).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UAnimationSettings *)(*pcVar4)();
    return pUVar8;
  }
  iVar7 = (this->KeyEndEffectorsMatchNameArray).ArrayNum;
  if (iVar7 == (this->KeyEndEffectorsMatchNameArray).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->KeyEndEffectorsMatchNameArray).AllocatorInstance,
                       &(this->KeyEndEffectorsMatchNameArray).ArrayMax);
  }
  (this->KeyEndEffectorsMatchNameArray).ArrayNum = iVar7 + 1;
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  *(FScriptContainerElement **)pFVar12 = local_3a8.Data.AllocatorInstance.Data;
  *(int *)(pFVar12 + 8) = local_3a8.Data.ArrayNum;
  *(int *)(pFVar12 + 0xc) = local_3a8.Data.ArrayMax;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_398,L"eye");
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_398) &&
      ((FScriptContainerElement *)&local_398 <
       pFVar12 + (longlong)(this->KeyEndEffectorsMatchNameArray).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UAnimationSettings *)(*pcVar4)();
    return pUVar8;
  }
  iVar7 = (this->KeyEndEffectorsMatchNameArray).ArrayNum;
  if (iVar7 == (this->KeyEndEffectorsMatchNameArray).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->KeyEndEffectorsMatchNameArray).AllocatorInstance,
                       &(this->KeyEndEffectorsMatchNameArray).ArrayMax);
  }
  (this->KeyEndEffectorsMatchNameArray).ArrayNum = iVar7 + 1;
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  *(FScriptContainerElement **)pFVar12 = local_398.Data.AllocatorInstance.Data;
  *(int *)(pFVar12 + 8) = local_398.Data.ArrayNum;
  *(int *)(pFVar12 + 0xc) = local_398.Data.ArrayMax;
  local_398.Data.ArrayNum = 0;
  local_398.Data.ArrayMax = 0;
  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_388,L"weapon");
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_388) &&
      ((FScriptContainerElement *)&local_388 <
       pFVar12 + (longlong)(this->KeyEndEffectorsMatchNameArray).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UAnimationSettings *)(*pcVar4)();
    return pUVar8;
  }
  iVar7 = (this->KeyEndEffectorsMatchNameArray).ArrayNum;
  if (iVar7 == (this->KeyEndEffectorsMatchNameArray).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->KeyEndEffectorsMatchNameArray).AllocatorInstance,
                       &(this->KeyEndEffectorsMatchNameArray).ArrayMax);
  }
  (this->KeyEndEffectorsMatchNameArray).ArrayNum = iVar7 + 1;
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  *(FScriptContainerElement **)pFVar12 = local_388.Data.AllocatorInstance.Data;
  *(int *)(pFVar12 + 8) = local_388.Data.ArrayNum;
  *(int *)(pFVar12 + 0xc) = local_388.Data.ArrayMax;
  local_388.Data.ArrayNum = 0;
  local_388.Data.ArrayMax = 0;
  local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_378,L"hand");
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_378) &&
      ((FScriptContainerElement *)&local_378 <
       pFVar12 + (longlong)(this->KeyEndEffectorsMatchNameArray).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UAnimationSettings *)(*pcVar4)();
    return pUVar8;
  }
  iVar7 = (this->KeyEndEffectorsMatchNameArray).ArrayNum;
  if (iVar7 == (this->KeyEndEffectorsMatchNameArray).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->KeyEndEffectorsMatchNameArray).AllocatorInstance,
                       &(this->KeyEndEffectorsMatchNameArray).ArrayMax);
  }
  (this->KeyEndEffectorsMatchNameArray).ArrayNum = iVar7 + 1;
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  *(FScriptContainerElement **)pFVar12 = local_378.Data.AllocatorInstance.Data;
  *(int *)(pFVar12 + 8) = local_378.Data.ArrayNum;
  *(int *)(pFVar12 + 0xc) = local_378.Data.ArrayMax;
  local_378.Data.ArrayNum = 0;
  local_378.Data.ArrayMax = 0;
  local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_368,L"attach");
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_368) &&
      ((FScriptContainerElement *)&local_368 <
       pFVar12 + (longlong)(this->KeyEndEffectorsMatchNameArray).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UAnimationSettings *)(*pcVar4)();
    return pUVar8;
  }
  iVar7 = (this->KeyEndEffectorsMatchNameArray).ArrayNum;
  if (iVar7 == (this->KeyEndEffectorsMatchNameArray).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->KeyEndEffectorsMatchNameArray).AllocatorInstance,
                       &(this->KeyEndEffectorsMatchNameArray).ArrayMax);
  }
  (this->KeyEndEffectorsMatchNameArray).ArrayNum = iVar7 + 1;
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  *(FScriptContainerElement **)pFVar12 = local_368.Data.AllocatorInstance.Data;
  *(int *)(pFVar12 + 8) = local_368.Data.ArrayNum;
  *(int *)(pFVar12 + 0xc) = local_368.Data.ArrayMax;
  local_368.Data.ArrayNum = 0;
  local_368.Data.ArrayMax = 0;
  local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_358,L"camera");
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_358) &&
      ((FScriptContainerElement *)&local_358 <
       pFVar12 + (longlong)(this->KeyEndEffectorsMatchNameArray).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UAnimationSettings *)(*pcVar4)();
    return pUVar8;
  }
  iVar7 = (this->KeyEndEffectorsMatchNameArray).ArrayNum;
  if (iVar7 == (this->KeyEndEffectorsMatchNameArray).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->KeyEndEffectorsMatchNameArray).AllocatorInstance,
                       &(this->KeyEndEffectorsMatchNameArray).ArrayMax);
  }
  (this->KeyEndEffectorsMatchNameArray).ArrayNum = iVar7 + 1;
  pFVar12 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  *(FScriptContainerElement **)pFVar12 = local_358.Data.AllocatorInstance.Data;
  *(int *)(pFVar12 + 8) = local_358.Data.ArrayNum;
  *(int *)(pFVar12 + 0xc) = local_358.Data.ArrayMax;
  local_358.Data.ArrayNum = 0;
  local_358.Data.ArrayMax = 0;
  local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = ::FName::FName(&local_248,"l_");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_210,"r_");
  local_1d8 = 0;
  local_1e8 = *pFVar9;
  FStack_1e0 = FVar3;
  pFVar9 = ::FName::FName(&local_208,"r_");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_200,"l_");
  uStack_1c4 = 0;
  FStack_1d4 = *pFVar9;
  FStack_1cc = FVar3;
  pFVar9 = ::FName::FName(&local_1f8,"L_");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_1f0,"R_");
  uStack_1b0 = 0;
  FStack_1c0 = *pFVar9;
  local_1b8 = FVar3;
  pFVar9 = ::FName::FName(&local_338,"R_");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_330,"L_");
  uStack_19c = 0;
  FStack_1ac = *pFVar9;
  FStack_1a4 = FVar3;
  pFVar9 = ::FName::FName(&local_328,"_r");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_320,"_l");
  local_188 = 1;
  local_198 = *pFVar9;
  FStack_190 = FVar3;
  pFVar9 = ::FName::FName(&local_318,"_l");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_310,"_r");
  uStack_174 = 1;
  FStack_184 = *pFVar9;
  FStack_17c = FVar3;
  pFVar9 = ::FName::FName(&local_308,"_L");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_300,"_R");
  uStack_160 = 1;
  FStack_170 = *pFVar9;
  local_168 = FVar3;
  pFVar9 = ::FName::FName(&local_2f8,"_R");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_2f0,"_L");
  uStack_14c = 1;
  FStack_15c = *pFVar9;
  FStack_154 = FVar3;
  pFVar9 = ::FName::FName(&local_2e8,"left");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_2e0,"right");
  local_138 = 0;
  local_148 = *pFVar9;
  local_140 = FVar3;
  pFVar9 = ::FName::FName(&local_2d8,"right");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_2d0,"left");
  local_124 = 0;
  local_134 = *pFVar9;
  local_12c = FVar3;
  pFVar9 = ::FName::FName(&local_2c8,"Left");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_2c0,"Right");
  local_110 = 0;
  local_120 = *pFVar9;
  local_118 = FVar3;
  pFVar9 = ::FName::FName(&local_2b8,"Right");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_2b0,"Left");
  local_fc = 0;
  local_10c = *pFVar9;
  local_104 = FVar3;
  pFVar9 = ::FName::FName(&local_2a8,"$1_r_$2");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_2a0,"([^}]*)_l_([^}]*)");
  local_e8 = 2;
  local_f8 = *pFVar9;
  local_f0 = FVar3;
  pFVar9 = ::FName::FName(&local_298,"$1_l_$2");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_290,"([^}]*)_r_([^}]*)");
  local_d4 = 2;
  local_e4 = *pFVar9;
  local_dc = FVar3;
  pFVar9 = ::FName::FName(&local_288,"$1_R_$2");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_280,"([^}]*)_L_([^}]*)");
  local_d0 = *pFVar9;
  local_c0 = 2;
  local_c8 = FVar3;
  pFVar9 = ::FName::FName(&local_278,"$1_L_$2");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_270,"([^}]*)_R_([^}]*)");
  local_ac = 2;
  local_bc = *pFVar9;
  local_b4 = FVar3;
  pFVar9 = ::FName::FName(&local_268,"$1_right_$2");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_260,"([^}]*)_left_([^}]*)");
  local_98 = 2;
  local_a8 = *pFVar9;
  local_a0 = FVar3;
  pFVar9 = ::FName::FName(&local_258,"$1_left_$2");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_250,"([^}]*)_right_([^}]*)");
  local_84 = 2;
  local_94 = *pFVar9;
  local_8c = FVar3;
  pFVar9 = ::FName::FName(&local_218,"$1_Right_$2");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_240,"([^}]*)_Left_([^}]*)");
  local_70 = 2;
  local_80 = *pFVar9;
  local_78 = FVar3;
  pFVar9 = ::FName::FName(&local_238,"$1_Left_$2");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_230,"([^}]*)_Right_([^}]*)");
  local_5c = 2;
  local_6c = *pFVar9;
  local_64 = FVar3;
  pFVar9 = ::FName::FName(&local_228,"$1");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(&local_220,
                          "((?:^[sS]pine|^[rR]oot|^[pP]elvis|^[nN]eck|^[hH]ead|^ik_hand_gun).*)");
  local_58 = *pFVar9;
  local_48 = 2;
  (this->MirrorFindReplaceExpressions).ArrayNum = 0x15;
  local_50 = FVar3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,0x15,*piVar1,&pTVar2->AllocatorInstance,0x15,piVar1);
  lVar13 = 3;
  pFVar9 = &local_1e8;
  pFVar5 = (FName *)(pTVar2->AllocatorInstance).Data;
  do {
    pFVar11 = pFVar5;
    pFVar10 = pFVar9;
    FVar3 = pFVar10[1];
    *pFVar11 = *pFVar10;
    pFVar11[1] = FVar3;
    FVar3 = pFVar10[3];
    pFVar11[2] = pFVar10[2];
    pFVar11[3] = FVar3;
    FVar3 = pFVar10[5];
    pFVar11[4] = pFVar10[4];
    pFVar11[5] = FVar3;
    FVar3 = pFVar10[7];
    pFVar11[6] = pFVar10[6];
    pFVar11[7] = FVar3;
    FVar3 = pFVar10[9];
    pFVar11[8] = pFVar10[8];
    pFVar11[9] = FVar3;
    FVar3 = pFVar10[0xb];
    pFVar11[10] = pFVar10[10];
    pFVar11[0xb] = FVar3;
    FVar3 = pFVar10[0xd];
    pFVar11[0xc] = pFVar10[0xc];
    pFVar11[0xd] = FVar3;
    FVar3 = pFVar10[0xf];
    pFVar11[0xe] = pFVar10[0xe];
    pFVar11[0xf] = FVar3;
    lVar13 = lVar13 + -1;
    pFVar9 = pFVar10 + 0x10;
    pFVar5 = pFVar11 + 0x10;
  } while (lVar13 != 0);
  FVar3 = pFVar10[0x11];
  pFVar11[0x10] = pFVar10[0x10];
  pFVar11[0x11] = FVar3;
  FVar3 = pFVar10[0x13];
  pFVar11[0x12] = pFVar10[0x12];
  pFVar11[0x13] = FVar3;
  pFVar11[0x14].ComparisonIndex.Value = pFVar10[0x14].ComparisonIndex.Value;
  (this->DefaultFrameRate).Numerator = 0x1e;
  (this->DefaultFrameRate).Denominator = 1;
  this->bEnforceSupportedFrameRates = false;
  return this;
}

// ~UAnimationSettings @ 1473db510

void __thiscall UAnimationSettings::~UAnimationSettings(UAnimationSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UAnimationSettings__6B_;
  pFVar1 = (this->MirrorFindReplaceExpressions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UUserDefinedStruct>,int>
            ((TSoftObjectPtr<UUserDefinedStruct> *)
             (this->UserDefinedStructAttributes).AllocatorInstance.Data,
             (this->UserDefinedStructAttributes).ArrayNum);
  pFVar1 = (this->UserDefinedStructAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->TransformAttributeNames).AllocatorInstance.Data,
             (this->TransformAttributeNames).ArrayNum);
  pFVar1 = (this->TransformAttributeNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AttributeBlendModes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AttributeBlendModes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_ECustomAttributeBlendType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_ECustomAttributeBlendType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AttributeBlendModes);
  DestructItems<FString,int>
            ((FString *)(this->BoneNamesWithCustomAttributes).AllocatorInstance.Data,
             (this->BoneNamesWithCustomAttributes).ArrayNum);
  pFVar1 = (this->BoneNamesWithCustomAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomAttributeSetting,int>
            ((FCustomAttributeSetting *)(this->BoneCustomAttributesNames).AllocatorInstance.Data,
             (this->BoneCustomAttributesNames).ArrayNum);
  pFVar1 = (this->BoneCustomAttributesNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data,
             (this->KeyEndEffectorsMatchNameArray).ArrayNum);
  pFVar1 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetBoneCustomAttributeNamesToImport @ 1474002e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UAnimationSettings::GetBoneCustomAttributeNamesToImport
          (UAnimationSettings *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  ulonglong *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [16];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_e8;
  ::FName::ToString(&(this->BoneTimecodeCustomAttributeNameSettings).HourAttributeName,&local_98);
  ::FName::ToString(&(this->BoneTimecodeCustomAttributeNameSettings).MinuteAttributeName,&local_88);
  ::FName::ToString(&(this->BoneTimecodeCustomAttributeNameSettings).SecondAttributeName,&local_78);
  ::FName::ToString(&(this->BoneTimecodeCustomAttributeNameSettings).FrameAttributeName,&local_68);
  ::FName::ToString(&(this->BoneTimecodeCustomAttributeNameSettings).SubframeAttributeName,&local_58
                   );
  ::FName::ToString(&(this->BoneTimecodeCustomAttributeNameSettings).RateAttributeName,&local_48);
  ::FName::ToString(&(this->BoneTimecodeCustomAttributeNameSettings).TakenameAttributeName,&local_38
                   );
  lVar3 = 7;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,7,0,&__return_storage_ptr__->AllocatorInstance,7,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FString,FString,int>((__return_storage_ptr__->AllocatorInstance).Data,&local_98,7);
  puVar5 = local_28;
  do {
    puVar1 = puVar5 + -2;
    puVar5 = puVar5 + -2;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  iVar2 = (this->BoneCustomAttributesNames).ArrayNum;
  pFVar4 = (this->BoneCustomAttributesNames).AllocatorInstance.Data;
  pFVar6 = pFVar4 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->BoneCustomAttributesNames).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCustomAttributeSetting_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_a8);
    }
    if (pFVar4 == pFVar6) break;
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (__return_storage_ptr__,(FString *)pFVar4);
    pFVar4 = pFVar4 + 0x20;
  }
  return __return_storage_ptr__;
}

// GetDefaultFrameRate @ 147401cb0

FFrameRate * __thiscall UAnimationSettings::GetDefaultFrameRate(UAnimationSettings *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameRate *pFVar3;
  
  if ((this->DefaultFrameRate).Denominator < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultFrameRate.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationSettings.cpp"
                       ,0x47,L"Invalid default frame-rate set in Project Settings");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFrameRate *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->DefaultFrameRate;
}

// GetPrivateStaticClass @ 147403df0

UClass * __cdecl UAnimationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationSettings",
               &Z_Registration_Info_UClass_UAnimationSettings.InnerSingleton,
               StaticRegisterNativesUAnimationSettings,0x148,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationSettings>,
               InternalVTableHelperCtorCaller<UAnimationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSettings.InnerSingleton;
}

// StaticRegisterNativesUAnimationSettings @ 147419c50

void __cdecl UAnimationSettings::StaticRegisterNativesUAnimationSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAnimationSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBoneCustomAttributeNamesToImport @ 14741de40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAnimationSettings::execGetBoneCustomAttributeNamesToImport
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  FString *pFVar4;
  ulonglong *puVar5;
  FString *pFVar6;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_118;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FName::ToString((FName *)&param_1[2].field_0x8,&local_b8);
  ::FName::ToString((FName *)&param_1[2].field_0x10,&local_a8);
  ::FName::ToString((FName *)&param_1[2].field_0x18,&local_98);
  ::FName::ToString((FName *)&param_1[2].field_0x20,&local_88);
  ::FName::ToString((FName *)(param_1 + 3),&local_78);
  ::FName::ToString((FName *)&param_1[3].field_0x8,&local_68);
  ::FName::ToString((FName *)&param_1[3].field_0x10,&local_58);
  lVar3 = 7;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,7,0,&local_d0.AllocatorInstance,7,&local_d0.ArrayMax);
  ConstructItems<FString,FString,int>(local_d0.AllocatorInstance.Data,&local_b8,7);
  puVar5 = local_48;
  do {
    puVar1 = puVar5 + -2;
    puVar5 = puVar5 + -2;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  iVar2 = *(int *)&param_1[3].field_0x20;
  pFVar4 = *(FString **)&param_1[3].field_0x18;
  pFVar6 = pFVar4 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)&param_1[3].field_0x20 != iVar2) {
      `TCheckedPointerIterator<FCustomAttributeSetting_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_d8);
    }
    if (pFVar4 == pFVar6) break;
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>(&local_d0,pFVar4);
    pFVar4 = pFVar4 + 2;
  }
  if (param_3 != &local_d0) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_d0.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_d0.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_d0.ArrayMax;
    local_d0.ArrayMax = 0;
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
  }
  DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return;
}

// Get @ 147557440

UAnimationSettings * __cdecl UAnimationSettings::Get(void)

{
  int iVar1;
  UAnimationSettings *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar3 = Z_Construct_UClass_UAnimationSettings_NoRegister();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar2 = (UAnimationSettings *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UAnimationSettings *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimationSettings_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
    pFVar4 = GetTypeName<UAnimationSettings>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UAnimationSettings>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

