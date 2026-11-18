// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 14687f5e0

UClass * __cdecl UMovieSceneCameraCutTrackInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraCutTrackInstance",
               &Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraCutTrackInstance,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraCutTrackInstance>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrackInstance>,local_res8,
               UMovieSceneTrackInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.InnerSingleton;
}

// UMovieSceneCameraCutTrackInstance @ 14689d100

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCameraCutTrackInstance * __thiscall
UMovieSceneCameraCutTrackInstance::UMovieSceneCameraCutTrackInstance
          (UMovieSceneCameraCutTrackInstance *this,FVTableHelper *param_1)

{
  UMovieSceneTrackInstance::UMovieSceneTrackInstance((UMovieSceneTrackInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCameraCutTrackInstance__6B_;
  (this->CameraCutCache).LastLockedCamera.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CameraCutCache).LastInput.Section.field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  (this->CameraCutCache).LastInput.InstanceHandle.InstanceID = 0xffff;
  (this->CameraCutCache).LastInput.InstanceHandle.InstanceSerial = 0;
  (this->CameraCutCache).LastInput.bInputHasBeenProcessed = false;
  (this->SortedInputInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedInputInfos).ArrayNum = 0;
  (this->SortedInputInfos).ArrayMax = 0;
  return this;
}

// UMovieSceneCameraCutTrackInstance @ 14689d150

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCameraCutTrackInstance * __thiscall
UMovieSceneCameraCutTrackInstance::UMovieSceneCameraCutTrackInstance
          (UMovieSceneCameraCutTrackInstance *this,FObjectInitializer *param_1)

{
  UMovieSceneTrackInstance::UMovieSceneTrackInstance((UMovieSceneTrackInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCameraCutTrackInstance__6B_;
  (this->CameraCutCache).LastLockedCamera.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CameraCutCache).LastInput.Section.field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  (this->CameraCutCache).LastInput.InstanceHandle.InstanceID = 0xffff;
  (this->CameraCutCache).LastInput.InstanceHandle.InstanceSerial = 0;
  (this->CameraCutCache).LastInput.bInputHasBeenProcessed = false;
  (this->SortedInputInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedInputInfos).ArrayNum = 0;
  (this->SortedInputInfos).ArrayMax = 0;
  return this;
}

// ~UMovieSceneCameraCutTrackInstance @ 1468a0530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraCutTrackInstance::~UMovieSceneCameraCutTrackInstance
          (UMovieSceneCameraCutTrackInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneCameraCutTrackInstance__6B_;
  pFVar1 = (this->SortedInputInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneTrackInstance::~UMovieSceneTrackInstance((UMovieSceneTrackInstance *)this);
  return;
}

// GetPrivateStaticClass @ 1468b6910

UClass * __cdecl UMovieSceneCameraCutTrackInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraCutTrackInstance",
               &Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraCutTrackInstance,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraCutTrackInstance>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrackInstance>,local_res8,
               UMovieSceneTrackInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.InnerSingleton;
}

// OnAnimate @ 1468be290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001468be5e8) */
/* WARNING: Removing unreachable block (ram,0x0001468be63f) */
/* WARNING: Removing unreachable block (ram,0x0001468be660) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraCutTrackInstance::OnAnimate(UMovieSceneCameraCutTrackInstance *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FFrameTime FVar18;
  FFrameTime FVar19;
  ForAnyElementType FVar20;
  FInstanceRegistry *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined4 uVar23;
  bool bVar24;
  int iVar25;
  UClass *pUVar26;
  TRangeBound<FFrameNumber> TVar27;
  UObject *pUVar28;
  FMovieSceneEasingSettings *pFVar29;
  int *piVar30;
  FFrameNumber FVar31;
  longlong lVar32;
  FFrameNumber FVar33;
  ulonglong uVar34;
  uint *puVar35;
  FFrameTime FVar36;
  FMovieSceneContext *pFVar37;
  UMovieSceneSection *this_00;
  FMovieSceneContext *this_01;
  TEnumAsByte<ERangeBoundTypes::Type> TVar38;
  uint uVar39;
  FFrameTime FVar40;
  FScriptContainerElement *this_02;
  uint uVar41;
  undefined1 in_XMM2 [16];
  float fVar42;
  undefined1 auStack_478 [32];
  TObjectPtr<UMovieSceneSection>_u_0 *local_458;
  TObjectPtr<UMovieSceneSection>_u_0 *local_450;
  longlong local_448;
  longlong local_440;
  undefined8 local_438;
  undefined1 local_428;
  undefined1 local_427 [7];
  ForAnyElementType local_420;
  undefined8 local_418;
  FInstanceRegistry *local_410;
  undefined8 local_408;
  undefined1 local_400;
  uint local_3fc;
  undefined1 local_3f8;
  uint local_3f4;
  ForAnyElementType local_3f0;
  int local_3e8;
  int iStack_3e4;
  FFrameTime local_3e0;
  FFrameTime local_3d8;
  int local_3d0;
  EMovieSceneBuiltInEasing local_3c8 [8];
  longlong local_3c0;
  EMovieSceneBuiltInEasing local_3b4 [12];
  TObjectPtr<UMovieSceneSection>_u_0 local_3a8;
  undefined4 local_3a0;
  undefined1 local_39c;
  UMovieSceneSection *local_398;
  UMovieSceneSection *pUStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined8 local_37c;
  FScriptContainerElement *local_374;
  ulonglong local_36c;
  int local_364;
  undefined4 local_360;
  FScriptContainerElement local_35c;
  char local_35b;
  undefined4 local_358;
  FScriptContainerElement local_354;
  char local_353;
  undefined1 local_350;
  TObjectPtr<UMovieSceneSection>_u_0 local_34c;
  TObjectPtr<UMovieSceneSection>_u_0 TStack_344;
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  float local_330;
  undefined1 local_32c;
  TObjectPtr<UMovieSceneSection>_u_0 local_328;
  undefined4 local_320;
  FScriptContainerElement local_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  ulonglong local_2f4;
  undefined8 local_2ec;
  int local_2e4;
  undefined1 local_2e0 [5];
  char cStack_2db;
  undefined2 uStack_2da;
  undefined1 local_2d8 [5];
  char cStack_2d3;
  undefined2 uStack_2d2;
  undefined1 local_2d0;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined8 local_2b8;
  float local_2b0;
  undefined1 local_2ac;
  uint local_2a8;
  undefined1 local_2a4;
  uint local_2a0;
  undefined1 local_29c;
  uint local_298;
  ulonglong local_294;
  FFrameTime local_28c;
  FScriptContainerElement *local_280;
  uint local_278;
  undefined4 uStack_274;
  uint local_270;
  undefined4 uStack_26c;
  uint local_268;
  undefined4 uStack_264;
  uint local_260;
  undefined4 uStack_25c;
  uint local_258;
  undefined4 uStack_254;
  uint local_250;
  undefined4 uStack_24c;
  uint local_248;
  undefined4 uStack_244;
  int local_240;
  undefined4 uStack_23c;
  int local_238;
  undefined4 uStack_234;
  FCameraCutAnimator local_230;
  undefined4 local_228;
  int iStack_224;
  TRangeBound<FFrameNumber> local_220;
  undefined4 local_218;
  int iStack_214;
  uint local_210;
  int iStack_20c;
  TRangeBound<FFrameNumber> local_208;
  TRangeBound<FFrameNumber> local_200;
  uint local_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  TOptional<FFrameTime> local_1d8;
  TOptional<FFrameTime> local_1c8;
  UMovieSceneCameraCutTrackInstance *local_1b8;
  UMovieSceneEntitySystemLinker *local_1b0;
  ulonglong local_1a8;
  TOptional<FFrameTime> local_1a0;
  TOptional<FFrameTime> local_190;
  FMovieSceneInverseSequenceTransform local_180;
  TObjectPtr<UMovieSceneSection>_u_0 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_478;
  pUVar3 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_3f0.Data = (FScriptContainerElement *)0x0;
  local_3e8 = 0;
  iStack_3e4 = 0;
  local_420.Data = (FScriptContainerElement *)0x0;
  local_418 = 0;
  local_1b8 = this;
  local_1b0 = pUVar3;
  if (((pUVar3->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_2a8 = (this->SortedInputInfos).ArrayNum;
  uVar34 = (ulonglong)(int)local_2a8;
  this_02 = (this->SortedInputInfos).AllocatorInstance.Data;
  local_410 = (pUVar3->InstanceRegistry).Ptr;
  local_408 = this_02 + uVar34 * 0x18;
  do {
    pFVar22 = local_408;
    pFVar21 = local_410;
    local_280 = this_02;
    if ((this->SortedInputInfos).ArrayNum != (int)uVar34) {
      local_427[0] = 0;
      `TCheckedPointerIterator<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_427);
    }
    if (this_02 == pFVar22) {
      local_230.CameraCutCache = &this->CameraCutCache;
      if (0 < local_3e8) {
        uVar39 = local_3e8 - 1;
        uVar41 = 0;
        if ((int)uVar39 < local_3e8) {
          uVar41 = ~uVar39 >> 0x1f;
        }
        if (uVar41 == 0) {
          local_458 = (TObjectPtr<UMovieSceneSection>_u_0 *)(longlong)(int)uVar39;
          local_450 = (TObjectPtr<UMovieSceneSection>_u_0 *)(longlong)local_3e8;
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        UE::MovieScene::FCameraCutAnimator::AnimatePreRoll
                  (&local_230,
                   (FPreRollCameraCut *)(local_3f0.Data + (longlong)(local_3e8 + -1) * 0x90),
                   (FSequenceInstance *)
                   ((ulonglong)
                    (((FPreRollCameraCut *)(local_3f0.Data + (longlong)(local_3e8 + -1) * 0x90))->
                    InstanceHandle).InstanceID * 0x140 + *(longlong *)&pFVar21->Instances));
      }
      local_3a8.DebugPtr = (UMovieSceneSection *)0x0;
      local_3a0 = 0xffff;
      local_39c = 0;
      local_398 = (UMovieSceneSection *)0x0;
      pUStack_390 = (UMovieSceneSection *)0x0;
      local_388 = 0;
      uStack_384 = 0xffffffff;
      uStack_380 = 0xffffffff;
      local_37c = 0;
      local_374 = (FScriptContainerElement *)0x0;
      local_36c = 0;
      local_364 = 0;
      local_360 = 0xbf800000;
      local_35b = '\0';
      local_358 = 0xbf800000;
      local_353 = '\0';
      local_350 = 0;
      local_34c.DebugPtr = (UMovieSceneSection *)0x0;
      TStack_344.DebugPtr = (UMovieSceneSection *)0x0;
      local_33c = 0;
      uStack_338 = 0xffffffff;
      uStack_334 = 0xffffffff;
      local_330 = -1.0;
      local_32c = 0;
      if ((int)local_418 < 2) {
        if ((int)local_418 == 1) {
          UE::MovieScene::FBlendedCameraCut::operator=
                    ((FBlendedCameraCut *)&local_3a8.ObjectPtr,(FBlendedCameraCut *)local_420.Data);
          uVar2 = uStack_380;
          iVar25 = (int)local_374;
          local_408._4_4_ = (float)((ulonglong)local_374 >> 0x20);
          fVar42 = local_408._4_4_;
          if (local_364 == 1) {
            local_238 = (int)local_36c;
            uStack_234 = 0;
            local_410 = (FInstanceRegistry *)(local_36c & 0xffffffff);
            local_408 = local_374;
            if (((int)local_36c <= iVar25) && ((iVar25 != (int)local_36c || (0.0 <= fVar42))))
            goto LAB_1468bf584;
          }
          else {
            local_240 = (int)local_36c;
            uStack_23c = 0;
            local_410 = (FInstanceRegistry *)(local_36c & 0xffffffff);
            local_408 = local_374;
            if ((iVar25 <= (int)local_36c) && ((iVar25 != (int)local_36c || (fVar42 <= 0.0))))
            goto LAB_1468bf584;
          }
          local_410 = (FInstanceRegistry *)(local_36c & 0xffffffff);
          local_408 = local_374;
          local_330 = __real_3f800000 - local_330;
          local_360 = local_358;
          if (local_353 == '\0') {
            if (local_35b != '\0') {
              local_35b = '\0';
            }
          }
          else {
            local_35c = local_354;
            local_35b = '\x01';
          }
          local_358 = 0xbf800000;
          if (local_353 != '\0') {
            local_353 = '\0';
          }
          local_34c.DebugPtr = local_398;
          TStack_344.DebugPtr = pUStack_390;
          local_1f0 = 0;
          uStack_1e8 = 0;
          local_1e0 = 0;
          local_33c = local_388;
          uStack_338 = uStack_384;
          uStack_1dc = 0xffffffff;
          local_398 = (UMovieSceneSection *)0x0;
          pUStack_390 = (UMovieSceneSection *)0x0;
          local_388 = 0;
          uStack_384 = 0xffffffff;
          uStack_380 = 0xffffffff;
          uStack_334 = uVar2;
        }
        goto LAB_1468bf584;
      }
      if ((int)local_418 < 1) {
        local_458 = (TObjectPtr<UMovieSceneSection>_u_0 *)0x0;
        local_450 = (TObjectPtr<UMovieSceneSection>_u_0 *)(longlong)(int)local_418;
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)(local_420.Data + 0x44) == 1) {
        uStack_24c = 0;
        local_250 = *(uint *)(local_420.Data + 0x30);
        local_410 = (FInstanceRegistry *)(ulonglong)local_250;
        local_408 = *(FScriptContainerElement **)(local_420.Data + 0x34);
        if (((int)local_250 < (int)(uint)local_408) ||
           (((uint)local_408 == local_250 &&
            (local_408._4_4_ = (float)((ulonglong)local_408 >> 0x20), bVar24 = 0.0 < local_408._4_4_
            , bVar24)))) goto LAB_1468bf38c;
        uStack_244 = 0;
        local_248 = *(uint *)(local_420.Data + 0x3c);
        local_410 = (FInstanceRegistry *)(ulonglong)local_248;
        local_408 = *(FScriptContainerElement **)(local_420.Data + 0x34);
        if (((int)local_248 <= (int)(uint)local_408) &&
           (((uint)local_408 != local_248 ||
            (local_408._4_4_ = (float)((ulonglong)local_408 >> 0x20),
            bVar24 = 0.0 <= local_408._4_4_, bVar24)))) goto LAB_1468bf33c;
      }
      else {
        local_260 = *(uint *)(local_420.Data + 0x30);
        uStack_25c = 0;
        local_410 = (FInstanceRegistry *)(ulonglong)local_260;
        local_408 = *(FScriptContainerElement **)(local_420.Data + 0x34);
        if (((int)(uint)local_408 < (int)local_260) ||
           (((uint)local_408 == local_260 &&
            (local_408._4_4_ = (float)((ulonglong)local_408 >> 0x20), bVar24 = local_408._4_4_ < 0.0
            , bVar24)))) {
LAB_1468bf38c:
          if ((int)local_418 < 2) {
            local_458 = (TObjectPtr<UMovieSceneSection>_u_0 *)&DAT_00000001;
            local_450 = (TObjectPtr<UMovieSceneSection>_u_0 *)(longlong)(int)local_418;
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar24) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          FVar20.Data = local_420.Data;
          if ((int)local_418 < 1) {
            local_458 = (TObjectPtr<UMovieSceneSection>_u_0 *)0x0;
            local_450 = (TObjectPtr<UMovieSceneSection>_u_0 *)(longlong)(int)local_418;
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar24) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          UE::MovieScene::FBlendedCameraCut::operator=
                    ((FBlendedCameraCut *)&local_3a8.ObjectPtr,(FBlendedCameraCut *)local_420.Data);
          local_34c = *(TObjectPtr<UMovieSceneSection>_u_0 *)(FVar20.Data + 0x90);
          TStack_344 = *(TObjectPtr<UMovieSceneSection>_u_0 *)(FVar20.Data + 0x98);
          local_33c = SUB84(*(TObjectPtr<UMovieSceneSection>_u_0 *)(FVar20.Data + 0xa0),0);
          uStack_338 = SUB84(*(TObjectPtr<UMovieSceneSection>_u_0 *)(FVar20.Data + 0xa0),4);
          uStack_334 = *(undefined4 *)(FVar20.Data + 0xa8);
          goto LAB_1468bf584;
        }
        uStack_254 = 0;
        local_258 = *(uint *)(local_420.Data + 0x3c);
        local_410 = (FInstanceRegistry *)(ulonglong)local_258;
        local_408 = *(FScriptContainerElement **)(local_420.Data + 0x34);
        if (((int)(uint)local_408 <= (int)local_258) &&
           (((uint)local_408 != local_258 ||
            (local_408._4_4_ = (float)((ulonglong)local_408 >> 0x20),
            bVar24 = local_408._4_4_ <= 0.0, bVar24)))) {
LAB_1468bf33c:
          UE::MovieScene::FBlendedCameraCut::operator=
                    ((FBlendedCameraCut *)&local_3a8.ObjectPtr,(FBlendedCameraCut *)local_420.Data);
          goto LAB_1468bf584;
        }
      }
      if ((int)local_418 < 1) {
        local_458 = (TObjectPtr<UMovieSceneSection>_u_0 *)0x0;
        local_450 = (TObjectPtr<UMovieSceneSection>_u_0 *)(longlong)(int)local_418;
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar20.Data = local_420.Data;
      if ((int)local_418 < 2) {
        local_458 = (TObjectPtr<UMovieSceneSection>_u_0 *)&DAT_00000001;
        local_450 = (TObjectPtr<UMovieSceneSection>_u_0 *)(longlong)(int)local_418;
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      UE::MovieScene::FBlendedCameraCut::operator=
                ((FBlendedCameraCut *)&local_3a8.ObjectPtr,
                 (FBlendedCameraCut *)
                 &((TObjectPtr<UMovieSceneSection>_u_0 *)(local_420.Data + 0x80))->ObjectPtr);
      local_34c = *(TObjectPtr<UMovieSceneSection>_u_0 *)(FVar20.Data + 0x10);
      TStack_344 = *(TObjectPtr<UMovieSceneSection>_u_0 *)(FVar20.Data + 0x18);
      local_33c = SUB84(*(TObjectPtr<UMovieSceneSection>_u_0 *)(FVar20.Data + 0x20),0);
      uStack_338 = SUB84(*(TObjectPtr<UMovieSceneSection>_u_0 *)(FVar20.Data + 0x20),4);
      local_360 = *(undefined4 *)(FVar20.Data + 0x50);
      if (FVar20.Data + 0x54 != &local_35c) {
        if (FVar20.Data[0x55] == (FScriptContainerElement)0x0) {
          if (local_35b != '\0') {
            local_35b = '\0';
          }
        }
        else {
          local_35c = FVar20.Data[0x54];
          local_35b = '\x01';
        }
      }
      local_358 = 0xbf800000;
      if (local_353 != '\0') {
        local_353 = '\0';
      }
      local_330 = __real_3f800000 - *(float *)(FVar20.Data + 0x78);
      local_350 = *(undefined1 *)(FVar20.Data + 0x58);
      local_32c = 1;
      uStack_334 = *(undefined4 *)(FVar20.Data + 0x28);
LAB_1468bf584:
      if (0 < (int)local_418) {
        UE::MovieScene::FCameraCutAnimator::AnimateBlendedCameraCut
                  (&local_230,(FBlendedCameraCut *)&local_3a8.ObjectPtr,local_1b0,
                   (FSequenceInstance *)
                   ((ulonglong)(ushort)local_3a0 * 0x140 + *(longlong *)&pFVar21->Instances));
      }
      if ((TObjectPtr<UMovieSceneSection>_u_0 *)local_420.Data !=
          (TObjectPtr<UMovieSceneSection>_u_0 *)0x0) {
        FMemory::Free(local_420.Data);
      }
      if ((TObjectPtr<UMovieSceneSection>_u_0 *)local_3f0.Data !=
          (TObjectPtr<UMovieSceneSection>_u_0 *)0x0) {
        FMemory::Free(local_3f0.Data);
      }
      return;
    }
    FVar40 = *(FFrameTime *)&pFVar21->Instances;
    local_3d8 = FVar40;
    FVar36 = (FFrameTime)((ulonglong)*(ushort *)&this_02[8].field_0x0 * 0x140);
    this_01 = (FMovieSceneContext *)((longlong)FVar40 + 0x68 + (longlong)FVar36);
    local_3e0 = FVar36;
    local_3c0 = (ulonglong)*(ushort *)((longlong)FVar36 + 0x13a + (longlong)FVar40) * 0x140 +
                (longlong)FVar40;
    if (*(longlong *)this_02 == 0) {
LAB_1468be42a:
      this_00 = (UMovieSceneSection *)0x0;
    }
    else {
      pUVar26 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
      bVar24 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar26);
      if (!bVar24) goto LAB_1468be42a;
      this_00 = *(UMovieSceneSection **)this_02;
    }
    local_428 = this_00[1].Easing.EaseOut.field_0x8;
    bVar24 = false;
    iVar25 = (this_00->PreRollFrames).Value;
    uVar1 = *(undefined8 *)((longlong)&this_00[1]._padding_ + 4);
    local_3d0 = (int)this_01->_padding_;
    uVar6 = *(undefined8 *)((longlong)&this_00[1]._padding_ + 4);
    uVar7 = *(undefined8 *)((longlong)&this_00[1]._padding_ + 4);
    lVar32 = this_00[1]._padding_;
    lVar4 = this_00[1]._padding_;
    lVar8 = this_00[1]._padding_;
    lVar9 = this_00[1]._padding_;
    lVar10 = this_00[1]._padding_;
    lVar11 = this_00[1]._padding_;
    uVar12._0_1_ = this_00[1].EvalOptions.bCanEditCompletionMode;
    uVar12._1_1_ = this_00[1].EvalOptions.CompletionMode;
    uVar12._2_1_ = this_00[1].EventHandlers;
    uVar12._3_1_ = this_00[1].field_0x73;
    uVar12._4_4_ = this_00[1]._padding_;
    uVar13._0_4_ = this_00[1].Easing.AutoEaseInDuration;
    uVar13._4_4_ = this_00[1].Easing.AutoEaseOutDuration;
    uVar14 = *(undefined8 *)&this_00[1].Easing.EaseIn;
    uVar15 = *(undefined8 *)&this_00[1].Easing.EaseIn.field_0x8;
    uVar16._0_1_ = this_00[1].Easing.bManualEaseIn;
    uVar16._1_3_ = *(undefined3 *)&this_00[1].Easing.field_0x19;
    uVar16._4_4_ = this_00[1].Easing.ManualEaseInDuration;
    uVar17 = *(undefined8 *)&this_00[1].Easing.EaseOut;
    if (0 < iVar25) {
      TVar27 = (this_00->SectionRange).Value.LowerBound;
      if (TVar27.Type.Value.Value != '\x02') {
        if (TVar27.Type.Value.Value == '\0') {
          iStack_224 = TVar27.Value.Value.Value + 1;
          local_228 = CONCAT31(local_228._1_3_,1);
          TVar27.Value.Value = iStack_224;
          TVar27._0_4_ = local_228;
        }
        local_220 = TVar27;
        if ((TVar27.Type.Value.Value == '\x02') &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar33.Value = local_220.Value.Value;
        local_3f8 = 0;
        uVar41 = local_220.Value.Value - iVar25;
        local_3f4 = local_220.Value.Value;
        local_400 = 1;
        local_3fc = uVar41;
        if (local_3d0 != 1) {
          uVar39 = *(uint *)((longlong)&this_01->_padding_ + 4);
          if (uVar39 == 0x80000000) {
            if ((int)this_01->_padding_ == 0) {
              pFVar37 = (FMovieSceneContext *)((longlong)&this_01->_padding_ + 4);
              if ((*(char *)((longlong)&this_01->_padding_ + 4) == '\x02') &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar24)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              pFVar37 = this_01;
              if (((char)this_01->_padding_ == '\x02') &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar24)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            uVar34 = *(ulonglong *)((longlong)&pFVar37->_padding_ + 4);
            uVar39 = (uint)uVar34;
            local_1a8 = uVar34;
          }
          else {
            uVar34 = (ulonglong)uVar39;
          }
          local_2a4 = 1;
          local_2a0 = uVar39;
          if ((int)uVar41 < (int)uVar34) {
            puVar35 = &local_3fc;
          }
          else if ((int)uVar39 < (int)uVar41) {
            puVar35 = &local_2a0;
          }
          else {
            puVar35 = &local_3fc;
          }
          if (*puVar35 == uVar41) {
            local_29c = 1;
            local_298 = uVar39;
            if (((int)uVar39 < FVar33.Value) && (local_3f4 == FVar33.Value)) {
              bVar24 = true;
              FVar36 = local_3e0;
              FVar40 = local_3d8;
              this_02 = local_280;
              goto LAB_1468be69b;
            }
          }
        }
        bVar24 = false;
        FVar36 = local_3e0;
        FVar40 = local_3d8;
        this_02 = local_280;
      }
    }
LAB_1468be69b:
    if (((bool)this_01->bSectionPreRoll || (bool)this_01->bHasPreRollEndTime) || (bVar24)) {
      local_158._0_4_ = *(undefined4 *)(this_02 + 8);
      uStack_144 = (undefined4)uVar1;
      uStack_140 = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_158._4_4_ = (undefined4)uVar6;
      uStack_150 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_14c = (undefined4)uVar7;
      uStack_148 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_138 = lVar32;
      lStack_130 = lVar4;
      local_128 = lVar8;
      lStack_120 = lVar9;
      local_118 = lVar10;
      lStack_110 = lVar11;
      local_108 = uVar12;
      uStack_100 = uVar13;
      local_f8 = uVar14;
      uStack_f0 = uVar15;
      local_e8 = uVar16;
      uStack_e0 = uVar17;
      local_d8 = local_428;
      if ((local_3f0.Data <= &local_158) &&
         (&local_158 <
          (TObjectPtr<UMovieSceneSection>_u_0 *)(local_3f0.Data + (longlong)iStack_3e4 * 0x90))) {
        local_440 = (longlong)local_3e8;
        local_438 = 0x90;
        local_458 = &local_158;
        local_450 = (TObjectPtr<UMovieSceneSection>_u_0 *)local_3f0.Data;
        local_448 = (longlong)iStack_3e4;
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar24) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (local_3e8 == iStack_3e4) {
        local_3e8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1090,&local_3f0,&iStack_3e4);
      }
      lVar32 = (longlong)local_3e8;
      local_3e8 = local_3e8 + 1;
      *(ulonglong *)(local_3f0.Data + lVar32 * 0x90) = CONCAT44(local_158._4_4_,local_158._0_4_);
      *(ulonglong *)(local_3f0.Data + lVar32 * 0x90 + 8) = CONCAT44(uStack_14c,uStack_150);
      *(ulonglong *)(local_3f0.Data + lVar32 * 0x90 + 0x10) = CONCAT44(uStack_144,uStack_148);
      *(ulonglong *)(local_3f0.Data + lVar32 * 0x90 + 0x10 + 8) = CONCAT44(uStack_13c,uStack_140);
      *(longlong *)(local_3f0.Data + lVar32 * 0x90 + 0x20) = local_138;
      *(longlong *)(local_3f0.Data + lVar32 * 0x90 + 0x20 + 8) = lStack_130;
      *(longlong *)(local_3f0.Data + lVar32 * 0x90 + 0x30) = local_128;
      *(longlong *)(local_3f0.Data + lVar32 * 0x90 + 0x30 + 8) = lStack_120;
      *(longlong *)(local_3f0.Data + lVar32 * 0x90 + 0x40) = local_118;
      *(longlong *)(local_3f0.Data + lVar32 * 0x90 + 0x40 + 8) = lStack_110;
      *(undefined8 *)(local_3f0.Data + lVar32 * 0x90 + 0x50) = local_108;
      *(undefined8 *)(local_3f0.Data + lVar32 * 0x90 + 0x50 + 8) = uStack_100;
      *(undefined8 *)(local_3f0.Data + lVar32 * 0x90 + 0x60) = local_f8;
      *(undefined8 *)(local_3f0.Data + lVar32 * 0x90 + 0x60 + 8) = uStack_f0;
      *(undefined8 *)(local_3f0.Data + lVar32 * 0x90 + 0x70) = local_e8;
      *(undefined8 *)(local_3f0.Data + lVar32 * 0x90 + 0x70 + 8) = uStack_e0;
      *(ulonglong *)(local_3f0.Data + lVar32 * 0x90 + 0x80) = CONCAT71(uStack_d7,local_d8);
      *(undefined8 *)(local_3f0.Data + lVar32 * 0x90 + 0x80 + 8) = uStack_d0;
    }
    else {
      pUVar26 = UMovieSceneCameraCutTrack::StaticClass();
      pUVar28 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar26);
      FMovieSceneContext::GetSequenceToRootSequenceTransform(this_01,&local_180);
      local_328.DebugPtr = *(UMovieSceneSection **)this_02;
      uVar2 = *(undefined4 *)((longlong)FVar36 + 0x128 + (longlong)FVar40);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_328.DebugPtr != (UMovieSceneSection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_328.DebugPtr);
      }
      uVar14 = _local_2d8;
      uVar12 = _local_2e0;
      local_320 = *(undefined4 *)(this_02 + 8);
      local_2e4 = (int)this_01->_padding_;
      local_31c = this_02[0xc];
      local_2fc = 0;
      local_2f4 = 0;
      local_2ec = 0;
      _local_2e0 = CONCAT44(stack0xfffffffffffffd24,0xbf800000);
      uVar13 = _local_2e0;
      uStack_2da = SUB82(uVar12,6);
      local_2e0 = SUB85(uVar13,0);
      _local_2e0 = (uint6)(uint5)local_2e0;
      _local_2d8 = CONCAT44(stack0xfffffffffffffd2c,0xbf800000);
      uVar12 = _local_2d8;
      uStack_2d2 = SUB82(uVar14,6);
      local_2d8 = SUB85(uVar12,0);
      _local_2d8 = (uint6)(uint5)local_2d8;
      local_2d0 = 0;
      local_2cc = 0;
      local_2c4 = 0;
      local_2bc = 0;
      local_2b8 = 0xffffffffffffffff;
      local_2b0 = -1.0;
      local_2ac = *(undefined1 *)(pUVar28 + 7);
      uVar41 = *(uint *)((longlong)&this_01->_padding_ + 4);
      local_318 = uVar6;
      uStack_310 = uVar7;
      local_308 = uVar1;
      local_300 = uVar2;
      if (uVar41 == 0x80000000) {
        if (local_2e4 == 0) {
          pFVar37 = (FMovieSceneContext *)((longlong)&this_01->_padding_ + 4);
          if ((*(char *)((longlong)&this_01->_padding_ + 4) == '\x02') &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          pFVar37 = this_01;
          if (((char)this_01->_padding_ == '\x02') &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_294 = *(ulonglong *)((longlong)&pFVar37->_padding_ + 4);
      }
      else {
        local_294 = (ulonglong)uVar41;
      }
      uVar41 = local_210;
      local_208 = (this_00->SectionRange).Value.LowerBound;
      local_200 = (this_00->SectionRange).Value.UpperBound;
      TVar38 = local_208.Type.Value;
      if (TVar38.Value == '\0') {
        iStack_214 = local_208.Value.Value.Value + 1;
        local_218 = CONCAT31(local_218._1_3_,1);
        local_208.Value.Value = iStack_214;
        local_208._0_4_ = local_218;
      }
      if (local_200.Type.Value.Value == '\x01') {
        iStack_20c = local_200.Value.Value.Value + 1;
        local_210 = local_210 & 0xffffff00;
        local_200 = (TRangeBound<FFrameNumber>)(CONCAT44(iStack_20c,uVar41) & 0xffffffffffffff00);
      }
      FVar33.Value = 0x80000001;
      if (local_208.Type.Value.Value != '\x02') {
        FVar33.Value = local_208.Value.Value;
      }
      FVar31.Value = 0x7fffffff;
      if (local_200.Type.Value.Value != '\x02') {
        FVar31.Value = local_200.Value.Value;
      }
      local_2ec = CONCAT44(FVar31.Value,FVar31.Value);
      local_2fc = CONCAT44(FVar33.Value,FVar33.Value);
      lVar32 = local_3c0;
      local_2f4 = local_294;
      uVar1 = _local_2e0;
      if (TVar38.Value != '\x02') {
        pFVar29 = &this_00->Easing;
        bVar24 = (this_00->Easing).bManualEaseIn;
        if (bVar24 == false) {
          iVar25 = pFVar29->AutoEaseInDuration;
        }
        else {
          iVar25 = (this_00->Easing).ManualEaseInDuration;
        }
        if (0 < iVar25) {
          if (bVar24 != false) {
            pFVar29 = (FMovieSceneEasingSettings *)&(this_00->Easing).ManualEaseInDuration;
          }
          local_2fc = CONCAT44(pFVar29->AutoEaseInDuration + FVar33.Value,FVar33.Value);
          uStack_1f4 = 0;
          FVar36.SubFrame = 0.0;
          FVar36.FrameNumber.Value = FVar33.Value;
          local_1f8 = FVar33.Value;
          FMovieSceneInverseSequenceTransform::TryTransformTime(&local_180,&local_1a0,FVar36);
          local_278 = local_2fc._4_4_;
          uStack_274 = 0;
          FVar40.SubFrame = 0.0;
          FVar40.FrameNumber.Value = local_2fc._4_4_;
          FMovieSceneInverseSequenceTransform::TryTransformTime(&local_180,&local_190,FVar40);
          lVar32 = local_3c0;
          uVar1 = _local_2e0;
          if ((local_1a0.bIsSet != false) && (local_190.bIsSet != false)) {
            bVar24 = false;
            lVar4 = *(longlong *)&(this_00->Easing).EaseIn;
            local_3d8 = local_190.TypedValue;
            FVar36 = local_3d8;
            local_3d8.SubFrame = local_190.TypedValue.SubFrame;
            local_3e0 = local_1a0.TypedValue;
            FVar40 = local_3e0;
            local_3e0.SubFrame = local_1a0.TypedValue.SubFrame;
            in_XMM2 = roundps(in_XMM2,ZEXT416((uint)(local_3d8.SubFrame - local_3e0.SubFrame)),1);
            fVar42 = (local_3d8.SubFrame - local_3e0.SubFrame) - in_XMM2._0_4_;
            if (::FFrameTime::MaxSubframe <= fVar42) {
              fVar42 = ::FFrameTime::MaxSubframe;
            }
            iVar25 = (int)((ulonglong)*(undefined8 *)(local_3c0 + 0x80) >> 0x20);
            if (fVar42 <= 0.0) {
              fVar42 = 0.0;
            }
            fVar42 = ((float)((longlong)
                              ((int)in_XMM2._0_4_ +
                              (local_190.TypedValue.FrameNumber.Value.Value -
                              local_1a0.TypedValue.FrameNumber.Value)) * (longlong)iVar25) +
                     fVar42 * (float)iVar25) / (float)(int)*(undefined8 *)(local_3c0 + 0x80);
            local_3e0 = FVar40;
            local_3d8 = FVar36;
            if (lVar4 != 0) {
              pUVar26 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
              iVar25 = (int)pUVar26->_padding_;
              if (((iVar25 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar25 * 8) ==
                   &pUVar26->_padding_)) &&
                 ((EMovieSceneBuiltInEasing *)(lVar4 + 0x30) != local_3c8)) {
                local_3c8[0] = *(EMovieSceneBuiltInEasing *)(lVar4 + 0x30);
                bVar24 = true;
              }
            }
            uVar6 = _local_2e0;
            _local_2e0 = CONCAT44(stack0xfffffffffffffd24,fVar42);
            uVar1 = _local_2e0;
            uStack_2da = SUB82(uVar6,6);
            if (bVar24) {
              local_2e0 = (undefined1  [5])CONCAT14(local_3c8[0],fVar42);
              _local_2e0 = CONCAT15(1,local_2e0);
              uVar1 = _local_2e0;
            }
            else {
              cStack_2db = SUB81(uVar6,5);
              if (cStack_2db != '\0') {
                local_2e0 = SUB85(uVar1,0);
                _local_2e0 = (uint6)(uint5)local_2e0;
                uVar1 = _local_2e0;
              }
            }
          }
        }
      }
      _local_2e0 = uVar1;
      uVar1 = _local_2d8;
      if ((this_00->SectionRange).Value.UpperBound.Type.Value != '\x02') {
        bVar24 = (this_00->Easing).bManualEaseOut;
        piVar30 = &(this_00->Easing).ManualEaseOutDuration;
        if (bVar24 == false) {
          piVar30 = &(this_00->Easing).AutoEaseOutDuration;
        }
        if (0 < *piVar30) {
          piVar30 = &(this_00->Easing).ManualEaseOutDuration;
          if (bVar24 == false) {
            piVar30 = &(this_00->Easing).AutoEaseOutDuration;
          }
          local_270 = local_2ec._4_4_ - *piVar30;
          uStack_26c = 0;
          FVar18.SubFrame = 0.0;
          FVar18.FrameNumber.Value = local_270;
          local_2ec = CONCAT44(local_2ec._4_4_,local_270);
          FMovieSceneInverseSequenceTransform::TryTransformTime(&local_180,&local_1d8,FVar18);
          local_268 = local_2ec._4_4_;
          uStack_264 = 0;
          FVar19.SubFrame = 0.0;
          FVar19.FrameNumber.Value = local_2ec._4_4_;
          FMovieSceneInverseSequenceTransform::TryTransformTime(&local_180,&local_1c8,FVar19);
          uVar1 = _local_2d8;
          if ((local_1d8.bIsSet != false) && (local_1c8.bIsSet != false)) {
            bVar24 = false;
            lVar4 = *(longlong *)&(this_00->Easing).EaseOut;
            local_3d8 = local_1c8.TypedValue;
            FVar36 = local_3d8;
            local_3d8.SubFrame = local_1c8.TypedValue.SubFrame;
            local_3e0 = local_1d8.TypedValue;
            FVar40 = local_3e0;
            local_3e0.SubFrame = local_1d8.TypedValue.SubFrame;
            in_XMM2 = roundps(in_XMM2,ZEXT416((uint)(local_3d8.SubFrame - local_3e0.SubFrame)),1);
            fVar42 = (local_3d8.SubFrame - local_3e0.SubFrame) - in_XMM2._0_4_;
            if (::FFrameTime::MaxSubframe <= fVar42) {
              fVar42 = ::FFrameTime::MaxSubframe;
            }
            iVar25 = (int)((ulonglong)*(undefined8 *)(lVar32 + 0x80) >> 0x20);
            if (fVar42 <= 0.0) {
              fVar42 = 0.0;
            }
            fVar42 = ((float)((longlong)
                              ((int)in_XMM2._0_4_ +
                              (local_1c8.TypedValue.FrameNumber.Value.Value -
                              local_1d8.TypedValue.FrameNumber.Value)) * (longlong)iVar25) +
                     fVar42 * (float)iVar25) / (float)(int)*(undefined8 *)(lVar32 + 0x80);
            local_3e0 = FVar40;
            local_3d8 = FVar36;
            if (lVar4 != 0) {
              pUVar26 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
              iVar25 = (int)pUVar26->_padding_;
              if (((iVar25 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar25 * 8) ==
                   &pUVar26->_padding_)) &&
                 ((EMovieSceneBuiltInEasing *)(lVar4 + 0x30) != local_3b4)) {
                local_3b4[0] = *(EMovieSceneBuiltInEasing *)(lVar4 + 0x30);
                bVar24 = true;
              }
            }
            uVar6 = _local_2d8;
            _local_2d8 = CONCAT44(stack0xfffffffffffffd2c,fVar42);
            uVar1 = _local_2d8;
            uStack_2d2 = SUB82(uVar6,6);
            if (bVar24) {
              local_2d8 = (undefined1  [5])CONCAT14(local_3b4[0],fVar42);
              _local_2d8 = CONCAT15(1,local_2d8);
              uVar1 = _local_2d8;
            }
            else {
              cStack_2d3 = SUB81(uVar6,5);
              if (cStack_2d3 != '\0') {
                local_2d8 = SUB85(uVar1,0);
                _local_2d8 = (uint6)(uint5)local_2d8;
                uVar1 = _local_2d8;
              }
            }
          }
        }
      }
      _local_2d8 = uVar1;
      uVar1 = _local_2e0;
      if (local_3d0 == 1) {
        uVar2 = (undefined4)local_2fc;
        uVar23 = local_2fc._4_4_;
        _local_2e0 = _local_2d8;
        _local_2d8 = uVar1;
        local_2fc = CONCAT44((undefined4)local_2ec,local_2ec._4_4_);
        local_2ec = CONCAT44(uVar2,uVar23);
      }
      local_2d0 = (undefined1)this_00[1]._padding_;
      uVar41 = *(uint *)((longlong)&this_01->_padding_ + 4);
      if (uVar41 == 0x80000000) {
        if ((int)this_01->_padding_ == 0) {
          this_01 = (FMovieSceneContext *)((longlong)&this_01->_padding_ + 4);
        }
        if (((char)this_01->_padding_ == '\x02') &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_28c = *(FFrameTime *)((longlong)&this_01->_padding_ + 4);
      }
      else {
        local_28c.SubFrame = 0.0;
        local_28c.FrameNumber.Value = uVar41;
      }
      local_2b0 = UMovieSceneSection::EvaluateEasing(this_00,local_28c);
      if (local_420.Data <= &local_328) {
        if (&local_328 <
            (TObjectPtr<UMovieSceneSection>_u_0 *)
            (local_420.Data + (longlong)local_418._4_4_ * 0x80)) {
          local_440 = (longlong)(int)local_418;
          local_438 = 0x80;
          local_458 = &local_328;
          local_450 = (TObjectPtr<UMovieSceneSection>_u_0 *)local_420.Data;
          local_448 = (longlong)local_418._4_4_;
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar24) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      iVar25 = (int)local_418;
      if ((int)local_418 == local_418._4_4_) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x880,&local_420,(int *)((longlong)&local_418 + 4));
      }
      local_418 = CONCAT44(local_418._4_4_,iVar25 + 1);
      UE::MovieScene::FBlendedCameraCut::FBlendedCameraCut
                ((FBlendedCameraCut *)(local_420.Data + (longlong)iVar25 * 0x80),
                 (FBlendedCameraCut *)&local_328.ObjectPtr);
      if (local_180.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.NestedTransforms.AllocatorInstance.Data);
      }
    }
    this_02 = this_02 + 0x18;
    uVar34 = (ulonglong)local_2a8;
    this = local_1b8;
  } while( true );
}

// OnDestroyed @ 1468bf6e0

void __thiscall
UMovieSceneCameraCutTrackInstance::OnDestroyed(UMovieSceneCameraCutTrackInstance *this)

{
  return;
}

// OnEndUpdateInputs @ 1468bff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs(UMovieSceneCameraCutTrackInstance *this)

{
  TArray<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UMovieSceneSection *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar6;
  code *pcVar7;
  <lambda_1> <Var8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  uint uVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FMovieSceneTrackInstanceInput *pFVar18;
  FMovieSceneTrackInstanceInput *pFVar19;
  undefined1 auStackY_118 [32];
  FIdentityFunctor local_c8 [8];
  TObjectPtr<UMovieSceneSection>_u_0 local_c0;
  FInstanceHandle local_b8;
  FScriptContainerElement local_b4;
  float local_b0;
  <lambda_1> local_a8;
  TPairInitializer<FMovieSceneTrackInstanceInput_const_&,float_const_&> local_a0;
  FScriptContainerElement *local_90;
  TSet<TTuple<FMovieSceneTrackInstanceInput,float>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackInstanceInput,float,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  lVar13 = this->_padding_;
  if ((*(longlong *)(lVar13 + 0x580) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_a8.InstanceRegistry = *(FInstanceRegistry **)(lVar13 + 0x580);
  iVar10 = (this->SortedInputInfos).ArrayNum;
  pTVar1 = &this->SortedInputInfos;
  pFVar17 = (pTVar1->AllocatorInstance).Data;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  pFVar3 = pFVar17 + (longlong)iVar10 * 0x18;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  while( true ) {
    if ((this->SortedInputInfos).ArrayNum != iVar10) {
      local_c8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (pFVar17 == pFVar3) break;
    local_90 = pFVar17 + 0x10;
    local_a0.Value = (float *)pFVar17;
    TSet<TTuple<FMovieSceneTrackInstanceInput,float>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackInstanceInput,float,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FMovieSceneTrackInstanceInput_const_&,float_const_&>_>
              (&local_88,&local_a0,(bool *)&local_a0.Value);
    pFVar17 = pFVar17 + 0x18;
  }
  piVar2 = &(this->SortedInputInfos).ArrayMax;
  (this->SortedInputInfos).ArrayNum = 0;
  if ((this->SortedInputInfos).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar10 = (int)this->_padding_;
  pFVar19 = (FMovieSceneTrackInstanceInput *)this->_padding_;
  if ((iVar10 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  <Var8.InstanceRegistry = local_a8.InstanceRegistry;
  pFVar18 = pFVar19 + iVar10;
  do {
    if (pFVar19 == pFVar18) {
      AlgoImpl::
      IntroSortInternal<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,FIdentityFunctor,_UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs_::__l2::<lambda_1>_>
                ((FCameraCutInputInfo *)(pTVar1->AllocatorInstance).Data,
                 (this->SortedInputInfos).ArrayNum,local_c8[0],<Var8);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    local_c0.DebugPtr = (UMovieSceneSection *)0x0;
    local_b8.InstanceID = 0xffff;
    local_b8.InstanceSerial = 0;
    local_b4 = (FScriptContainerElement)0x0;
    local_b0 = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (pFVar19->Section).field0_0x0.DebugPtr, pUVar4 != (UMovieSceneSection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_b8 = pFVar19->InstanceHandle;
    local_c0 = (TObjectPtr<UMovieSceneSection>_u_0)(pFVar19->Section).field0_0x0.DebugPtr;
    uVar16 = (uint)local_b8 & 0xffff;
    local_b4 = (FScriptContainerElement)pFVar19->bInputHasBeenProcessed;
    uVar12 = ((uint)((ulonglong)local_c0.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)local_c0.DebugPtr >> 4)) * -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    iVar10 = TSet<TTuple<FMovieSceneTrackInstanceInput,float>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackInstanceInput,float,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FMovieSceneTrackInstanceInput>
                       (&local_88,((uVar12 >> 0x10 ^ uVar12) + 0x21c791) * 0x133 + uVar16,pFVar19);
    if (iVar10 == -1) {
LAB_1468c012f:
      lVar13 = *(longlong *)&(<Var8.InstanceRegistry)->Instances;
      lVar15 = (ulonglong)uVar16 * 0x140;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar15 + 0x120 + lVar13);
      lVar13 = *(longlong *)(lVar15 + 0x118 + lVar13);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar13 + 0x18));
      if ((pUVar11 != (UObject *)0x0) &&
         (lVar13 = (**(code **)(*(longlong *)pUVar11 + 0x180))(pUVar11), lVar13 != 0)) {
        local_b0 = (float)*(double *)(lVar13 + 0x8f8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    else {
      lVar13 = (longlong)iVar10 * 0x20 + local_88.Elements._0_8_;
      pfVar14 = (float *)(lVar13 + 0x10);
      if (lVar13 == 0) {
        pfVar14 = (float *)0x0;
      }
      if (pfVar14 == (float *)0x0) goto LAB_1468c012f;
      local_b0 = *pfVar14;
    }
    pTVar6 = (TObjectPtr<UMovieSceneSection>_u_0 *)(pTVar1->AllocatorInstance).Data;
    if (((pTVar6 <= &local_c0) && (&local_c0 < pTVar6 + (longlong)*piVar2 * 3)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->SortedInputInfos).ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    (this->SortedInputInfos).ArrayNum = iVar10 + 1;
    lVar13 = (longlong)iVar10;
    ((TObjectPtr<UMovieSceneSection>_u_0 *)(pFVar3 + lVar13 * 0x18))->DebugPtr =
         (UMovieSceneSection *)local_c0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_c0.DebugPtr != (UMovieSceneSection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c0.DebugPtr);
    }
    pFVar19 = pFVar19 + 1;
    *(FInstanceHandle *)(pFVar3 + lVar13 * 0x18 + 8) = local_b8;
    pFVar3[lVar13 * 0x18 + 0xc] = local_b4;
    *(float *)(pFVar3 + lVar13 * 0x18 + 0x10) = local_b0;
  } while( true );
}

// OnInitialize @ 1468c02e0

void __thiscall
UMovieSceneCameraCutTrackInstance::OnInitialize(UMovieSceneCameraCutTrackInstance *this)

{
  return;
}

// StaticRegisterNativesUMovieSceneCameraCutTrackInstance @ 1468cffa0

void __cdecl
UMovieSceneCameraCutTrackInstance::StaticRegisterNativesUMovieSceneCameraCutTrackInstance(void)

{
  return;
}

