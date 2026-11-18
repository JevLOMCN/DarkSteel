// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c620b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGClipPathsElement::ExecuteInternal(FPCGClipPathsElement *this,FPCGContext *param_1)

{
  double *pdVar1;
  UPCGNode *this_00;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  FPCGContext *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  UClass *pUVar16;
  UPCGSettings *pUVar17;
  UPCGClipPathsSettings *pUVar18;
  FPCGTaggedData *pFVar19;
  ulonglong uVar20;
  UObject *pUVar21;
  UPCGSplineData *pUVar22;
  UPCGBasePointData *this_01;
  TTransform<double> *pTVar23;
  int *piVar24;
  FPCGTaggedData *pFVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  FObjectPtr_u_0 *pFVar31;
  FObjectPtr_u_0 FVar32;
  FObjectPtr_u_0 FVar33;
  ForAnyElementType FVar34;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar35;
  FScriptContainerElement *pFVar36;
  longlong lVar37;
  FObjectPtr_u_0 FVar38;
  ForAnyElementType FVar39;
  FScriptContainerElement *pFVar40;
  FObjectPtr_u_0 FVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  uint uVar46;
  undefined4 uVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar68 [16];
  double dVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar80;
  double dVar81;
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar89;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined4 uVar90;
  undefined4 uVar91;
  undefined1 auStackY_578 [32];
  bool local_527;
  <lambda_1> local_526;
  undefined1 local_525;
  undefined1 local_524;
  undefined1 local_523;
  FGCScopeGuard local_522;
  undefined1 local_521;
  ForAnyElementType local_520;
  undefined8 local_518;
  ForAnyElementType local_510;
  undefined8 local_508;
  TArray<TArrayView<UE::Math::TVector2<double>,int>,TSizedDefaultAllocator<32>_> local_500;
  UPCGClipPathsSettings *local_4f0;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_4e8;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_4d8;
  UPCGBasePointData *local_4c8;
  FPCGContext *local_4c0;
  FPCGTaggedData *local_4b8;
  UPCGSplineData *local_4b0;
  UPCGBasePointData *local_4a8;
  FPCGTaggedData *local_4a0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_498;
  uint local_488;
  uint local_484;
  uint local_480;
  FObjectPtr_u_0 local_478;
  FObjectPtr_u_0 local_470;
  FObjectPtr_u_0 local_468;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_460;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_458;
  TVector<double>_u_0 local_448;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_430;
  uint local_420;
  float fStack_41c;
  int local_418;
  float fStack_414;
  longlong local_410;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_408;
  FScriptContainerElement *local_400;
  int iStack_3f8;
  undefined4 uStack_3f4;
  FObjectPtr_u_0 local_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  undefined8 local_3b8;
  UPCGSplineData *local_3b0;
  FName local_3a8;
  TObjectPtr<UObject> local_3a0;
  TGeneralPolygon2<double> *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  TGeneralPolygon2<double> *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  TTuple<int,float> *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  FPCGInitializeFromDataParams local_368;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_328;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_318;
  TArrayView<TTuple<int,float>_const_,int> local_308;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2e0;
  double local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  double local_2b0;
  double dStack_2a8;
  undefined8 local_2a0;
  double local_298;
  double dStack_290;
  undefined8 local_288;
  undefined1 local_280 [16];
  double local_270;
  TPCGValueRange<int,TStridedView<int,int>_> local_268;
  TTransform<double> local_248;
  TTuple<int,float> local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
  local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_578;
  bVar42 = -1 < CpuChannel->Enabled;
  local_4c0 = param_1;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId78,"FPCGCLipPathsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGClipPaths.cpp"
               ,0x4e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId78);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(this_00), pUVar17 == (UPCGSettings *)0x0)) {
      pFVar19 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGClipPathsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_526);
      if (pFVar19 != (FPCGTaggedData *)0x0) {
        local_4f0 = Cast<UPCGClipPathsSettings_const_>(&pFVar19->Data);
        goto LAB_149c621e5;
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(this_00);
      pUVar18 = (UPCGClipPathsSettings *)
                FPCGDataCollection::GetSettings(&param_1->InputData,pUVar17);
      if (pUVar18 != (UPCGClipPathsSettings *)0x0) {
        local_4f0 = pUVar18;
        pUVar16 = UPCGClipPathsSettings::StaticClass();
        iVar26 = (int)pUVar16->_padding_;
        if ((iVar26 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
            &pUVar16->_padding_)) goto LAB_149c621e5;
      }
    }
    local_4f0 = (UPCGClipPathsSettings *)0x0;
  }
  else {
    pUVar16 = UPCGClipPathsSettings::StaticClass();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar16);
    if (bVar12) {
      local_4f0 = (UPCGClipPathsSettings *)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      local_4f0 = (UPCGClipPathsSettings *)0x0;
    }
  }
LAB_149c621e5:
  pUVar18 = local_4f0;
  if ((local_4f0 == (UPCGClipPathsSettings *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGClipPaths.cpp"
                          ,0x50,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_458,&PCGPinConstants::DefaultInputLabel);
  FLazyName::Resolve(&PCGPolygon2DUtils::Constants::ClipPolysLabel);
  FPCGDataCollection::GetInputsByPin(&param_1->InputData,&local_498,&local_3a8);
  local_527 = false;
  local_4d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d8.ArrayNum = 0;
  local_4d8.ArrayMax = 0;
  local_248.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_248.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_248.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_248.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_248.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_248.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_248.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_248.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_248.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_248.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_248.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_248.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_248.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_248.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_248.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_248.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  if (local_498.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_498.ArrayNum);
  }
  if (0 < local_498.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,local_498.ArrayNum,&local_4d8.AllocatorInstance,0,&local_4d8.ArrayMax);
  }
  iVar26 = local_498.ArrayNum;
  pFVar31 = (FObjectPtr_u_0 *)
            (local_498.AllocatorInstance.Data + (longlong)local_498.ArrayNum * 0x78);
  FVar34.Data = local_498.AllocatorInstance.Data;
  while( true ) {
    if (local_498.ArrayNum != iVar26) {
      local_525 = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_525);
    }
    dVar10 = __real_3f1a36e2e0000000;
    uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar7 = __real_3e45798ee2308c3a;
    if ((FObjectPtr_u_0 *)FVar34.Data == pFVar31) break;
    local_478 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar34.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c62345:
      if ((UPCGPolygon2DData *)local_478.Handle != (UPCGPolygon2DData *)0x0) {
        pUVar16 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
        bVar12 = FObjectPtr::IsA((FObjectPtr *)&local_478,pUVar16);
        if ((bVar12) && ((UPCGPolygon2DData *)local_478.Handle != (UPCGPolygon2DData *)0x0)) {
          PCGPolygon2DProcessingHelpers::AddPolygon
                    ((UPCGPolygon2DData *)local_478.Handle,&local_4d8,&local_527,&local_248);
        }
      }
    }
    else if ((UPCGPolygon2DData *)local_478.Handle != (UPCGPolygon2DData *)0x0) {
      UE::GC::MarkAsReachable(local_478.Handle);
      goto LAB_149c62345;
    }
    FVar34.Data = FVar34.Data + 0x78;
  }
  if (local_527 != false) {
    uVar27 = (ulonglong)local_458.ArrayNum;
    uVar90 = 0;
    uVar91 = 0;
    local_3b8 = 0;
    local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0 = (FPCGTaggedData *)(local_458.AllocatorInstance.Data + uVar27 * 0x78);
    local_430.ArrayNum = 0;
    local_430.ArrayMax = 0;
    local_480 = local_458.ArrayNum;
    uVar20 = uVar27;
    pFVar19 = local_4a0;
    FVar34.Data = local_458.AllocatorInstance.Data;
LAB_149c6246c:
    local_4b8 = (FPCGTaggedData *)FVar34.Data;
    if ((int)uVar27 != (int)uVar20) {
      local_524 = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_524);
    }
    if ((FPCGTaggedData *)FVar34.Data == pFVar19) goto LAB_149c638e4;
    bVar12 = PCGPolygon2DProcessingHelpers::GetPath
                       ((((FPCGTaggedData *)FVar34.Data)->Data).Data.field0_0x0.DebugPtr,&local_248,
                        pUVar18->SplineMaxDiscretizationError,&local_430);
    if (bVar12) {
      iVar26 = local_430.ArrayNum;
      local_500.ArrayNum = 0;
      local_400 = local_430.AllocatorInstance.Data;
      local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_500.ArrayMax = 0;
      if ((local_430.ArrayNum < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar13 = (*pcVar2)();
        return (bool)uVar13;
      }
      iStack_3f8 = iVar26;
      if (((local_500.AllocatorInstance.Data <= (FScriptContainerElement *)&local_400) &&
          ((FScriptContainerElement *)&local_400 <
           local_500.AllocatorInstance.Data + (longlong)local_500.ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar13 = (*pcVar2)();
        return (bool)uVar13;
      }
      if (local_500.ArrayNum == local_500.ArrayMax) {
        local_500.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_500.AllocatorInstance,&local_500.ArrayMax);
      }
      iVar26 = local_500.ArrayNum + 1;
      *(FScriptContainerElement **)
       (local_500.AllocatorInstance.Data + (longlong)local_500.ArrayNum * 0x10) = local_400;
      *(ulonglong *)(local_500.AllocatorInstance.Data + (longlong)local_500.ArrayNum * 0x10 + 8) =
           CONCAT44(uStack_3f4,iStack_3f8);
      local_4e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.ArrayNum = 0;
      local_4e8.ArrayMax = 0;
      local_500.ArrayNum = iVar26;
      if (pUVar18->Operation == Intersection) {
        iVar26 = local_4d8.ArrayNum;
        local_398 = (TGeneralPolygon2<double> *)local_4d8.AllocatorInstance.Data;
        if ((local_4d8.ArrayNum < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          uVar13 = (*pcVar2)();
          return (bool)uVar13;
        }
        iStack_390 = iVar26;
        local_328._12_4_ = uStack_38c;
        local_328.ArrayNum = iVar26;
        local_328.DataPtr = local_398;
        bVar12 = UE::Geometry::PathsIntersection(&local_500,&local_328,&local_4e8);
        if (bVar12) goto LAB_149c62696;
      }
      if (pUVar18->Operation == Difference) {
        iVar26 = local_4d8.ArrayNum;
        local_388 = (TGeneralPolygon2<double> *)local_4d8.AllocatorInstance.Data;
        if ((local_4d8.ArrayNum < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          uVar13 = (*pcVar2)();
          return (bool)uVar13;
        }
        iStack_380 = iVar26;
        local_318._12_4_ = uStack_37c;
        local_318.ArrayNum = iVar26;
        local_318.DataPtr = local_388;
        bVar12 = UE::Geometry::PathsDifference(&local_500,&local_318,&local_4e8);
        if (bVar12) {
LAB_149c62696:
          local_520.Data = (FScriptContainerElement *)0x0;
          local_518 = 0;
          if (local_4e8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(local_4e8._8_8_ & 0xffffffff);
          }
          if (0 < local_4e8.ArrayNum) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_4e8.ArrayNum,&local_520,0,(int *)((longlong)&local_518 + 4));
          }
          uVar20 = (ulonglong)local_4e8.ArrayNum;
          local_460 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                      (local_4e8.AllocatorInstance.Data + uVar20 * 0x10);
          local_484 = local_4e8.ArrayNum;
          pTVar35 = local_460;
          FVar39.Data = local_4e8.AllocatorInstance.Data;
LAB_149c626ec:
          do {
            FVar33.Handle = (UObject *)0x0;
            local_408 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                        FVar39.Data;
            if (local_4e8.ArrayNum != (int)uVar20) {
              local_523 = 0;
              `TCheckedPointerIterator<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_523);
            }
            pFVar19 = local_4b8;
            if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar39.Data ==
                pTVar35) goto LAB_149c63769;
            if (1 < ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar39.Data)
                    ->ArrayNum) {
              local_470.Handle =
                   (UObject *)(((FPCGTaggedData *)FVar34.Data)->Data).Data.field0_0x0.DebugPtr;
              if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c62739:
                if ((UPCGSplineData *)local_470.Handle == (UPCGSplineData *)0x0) goto LAB_149c62757;
                pUVar16 = Z_Construct_UClass_UPCGSplineData_NoRegister();
                bVar12 = FObjectPtr::IsA((FObjectPtr *)&local_470,pUVar16);
                FVar32 = local_470;
                if (!bVar12) goto LAB_149c62757;
              }
              else {
                if ((UPCGSplineData *)local_470.Handle != (UPCGSplineData *)0x0) {
                  UE::GC::MarkAsReachable(local_470.Handle);
                  goto LAB_149c62739;
                }
LAB_149c62757:
                FVar32.Handle = FVar33.Handle;
              }
              if ((UPCGSplineData *)FVar32.Handle == (UPCGSplineData *)0x0) {
                local_468.Handle =
                     (UObject *)(((FPCGTaggedData *)FVar34.Data)->Data).Data.field0_0x0.DebugPtr;
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c62c70:
                  if ((UPCGSplineData *)local_468.Handle == (UPCGSplineData *)0x0)
                  goto LAB_149c62c8e;
                  pUVar16 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
                  bVar12 = FObjectPtr::IsA((FObjectPtr *)&local_468,pUVar16);
                  FVar32 = local_468;
                  if (!bVar12) goto LAB_149c62c8e;
                }
                else {
                  if ((UPCGSplineData *)local_468.Handle != (UPCGSplineData *)0x0) {
                    UE::GC::MarkAsReachable(local_468.Handle);
                    goto LAB_149c62c70;
                  }
LAB_149c62c8e:
                  FVar32.Handle = FVar33.Handle;
                }
                local_3f0 = FVar32;
                if ((UPCGSplineData *)FVar32.Handle == (UPCGSplineData *)0x0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGClipPaths.cpp"
                                      ,0x11c,L"");
                  if (bVar12) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                }
                else {
                  uVar15 = ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                           FVar39.Data)->ArrayNum;
                  local_510.Data = (FScriptContainerElement *)0x0;
                  local_508 = 0;
                  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
                  }
                  if (0 < (int)uVar15) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x18,8,uVar15,&local_510,0,(int *)((longlong)&local_508 + 4));
                  }
                  iVar26 = ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                           FVar39.Data)->ArrayNum;
                  pFVar36 = (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                             FVar39.Data)->AllocatorInstance).Data;
                  pFVar40 = pFVar36 + (longlong)iVar26 * 0x10;
                  while( true ) {
                    if (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                        FVar39.Data)->ArrayNum != iVar26) {
                      local_521 = 0;
                      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='
                      ::__l2::<lambda_1>::operator()(&local_521);
                    }
                    param_1 = local_4c0;
                    if (pFVar36 == pFVar40) break;
                    local_298 = *(double *)pFVar36;
                    dStack_290 = *(double *)(pFVar36 + 8);
                    local_288 = CONCAT44(uVar91,uVar90);
                    dVar82 = local_248.Rotation.ZW.m128d_f64[0];
                    dVar73 = local_248.Rotation.XY.m128d_f64[1];
                    dVar89 = local_248.Rotation.ZW.m128d_f64[1];
                    dVar81 = (double)CONCAT44(uVar91,uVar90) * local_248.Scale3D.ZW.m128d_f64[0];
                    dVar3 = local_248.Scale3D.ZW.m128d_f64[1] * 0.0;
                    auVar50 = blendpd((undefined1  [16])local_248.Rotation.XY.m128d_f64,
                                      (undefined1  [16])local_248.Rotation.ZW.m128d_f64,2);
                    dVar74 = local_298 * local_248.Scale3D.XY.m128d_f64[0];
                    dVar80 = dStack_290 * local_248.Scale3D.XY.m128d_f64[1];
                    uVar47 = (undefined4)((ulonglong)dVar80 >> 0x20);
                    auVar86._8_4_ = SUB84(dVar80,0);
                    auVar86._0_8_ = dVar74;
                    auVar86._12_4_ = uVar47;
                    auVar57._8_4_ = SUB84(dVar80,0);
                    auVar57._0_8_ = dVar74;
                    auVar57._12_4_ = uVar47;
                    auVar5._8_4_ = SUB84(dVar3,0);
                    auVar5._0_8_ = dVar81;
                    auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
                    auVar76 = blendpd(auVar57,auVar5,2);
                    auVar87._0_8_ =
                         auVar86._8_8_ * local_248.Rotation.XY.m128d_f64[0] - dVar73 * dVar74;
                    auVar87._8_8_ = dVar81 * dVar73 - dVar82 * dVar80;
                    auVar58._0_8_ = auVar76._0_8_ * dVar82 - auVar50._0_8_ * dVar81;
                    auVar58._8_8_ = auVar76._8_8_ * dVar89 - auVar50._8_8_ * dVar3;
                    dVar3 = auVar87._8_8_ + auVar87._8_8_;
                    dVar67 = auVar58._0_8_ + auVar58._0_8_;
                    uVar47 = (undefined4)((ulonglong)dVar67 >> 0x20);
                    auVar76 = blendpd(auVar87,auVar58,2);
                    auVar59._8_4_ = local_248.Rotation.ZW.m128d_f64[1]._0_4_;
                    auVar59._0_8_ = dVar89;
                    auVar59._12_4_ = local_248.Rotation.ZW.m128d_f64[1]._4_4_;
                    auVar71._8_4_ = SUB84(dVar67,0);
                    auVar71._0_8_ = dVar3;
                    auVar71._12_4_ = uVar47;
                    auVar88._0_8_ = auVar76._0_8_ + auVar76._0_8_;
                    auVar88._8_8_ = auVar76._8_8_ + auVar76._8_8_;
                    auVar65._8_4_ = SUB84(dVar67,0);
                    auVar65._0_8_ = dVar3;
                    auVar65._12_4_ = uVar47;
                    auVar76 = blendpd(auVar65,auVar88,2);
                    auVar72._0_8_ =
                         auVar71._8_8_ * local_248.Rotation.XY.m128d_f64[0] - dVar73 * dVar3;
                    auVar72._8_8_ = auVar88._0_8_ * dVar73 - dVar82 * dVar67;
                    auVar66._0_8_ = auVar76._0_8_ * dVar82 - auVar50._0_8_ * auVar88._0_8_;
                    auVar66._8_8_ = auVar76._8_8_ * dVar89 - auVar50._8_8_ * auVar88._8_8_;
                    auVar76 = blendpd(auVar72,auVar66,2);
                    local_3d0 = dVar89 * dVar3 + dVar74 + auVar72._8_8_ +
                                local_248.Translation.XY.m128d_f64[0];
                    dStack_3c8 = auVar59._8_8_ * dVar67 + dVar80 + auVar66._0_8_ +
                                 local_248.Translation.XY.m128d_f64[1];
                    local_3c0 = dVar89 * auVar88._0_8_ + dVar81 + auVar76._0_8_ +
                                local_248.Translation.ZW.m128d_f64[0];
                    if (((local_510.Data <= (FScriptContainerElement *)&local_3d0) &&
                        ((FScriptContainerElement *)&local_3d0 <
                         local_510.Data + (longlong)local_508._4_4_ * 0x18)) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar12)) {
                      pcVar2 = (code *)swi(3);
                      uVar13 = (*pcVar2)();
                      return (bool)uVar13;
                    }
                    if ((int)local_508 == local_508._4_4_) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x818,&local_510,(int *)((longlong)&local_508 + 4));
                      local_508 = CONCAT44(local_508._4_4_,iVar14);
                    }
                    lVar28 = (longlong)(int)local_508;
                    pFVar36 = pFVar36 + 0x10;
                    local_508 = CONCAT44(local_508._4_4_,(int)local_508 + 1);
                    *(double *)(local_510.Data + lVar28 * 0x18) = local_3d0;
                    *(double *)(local_510.Data + lVar28 * 0x18 + 8) = dStack_3c8;
                    *(double *)(local_510.Data + lVar28 * 0x18 + 0x10) = local_3c0;
                  }
                  this_01 = FPCGContext::NewPointData_AnyThread(local_4c0);
                  local_4c8 = this_01;
                  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                            (&local_368,(UPCGSpatialData *)FVar32.Handle);
                  local_368.bInheritMetadata = true;
                  local_368.bInheritAttributes = true;
                  local_368.bInheritSpatialData = false;
                  UPCGSpatialData::InitializeFromDataWithParams
                            ((UPCGSpatialData *)this_01,&local_368);
                  (**(code **)(this_01->_padding_ + 0x490))
                            (this_01,((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
                                       *)FVar39.Data)->ArrayNum,1);
                  uVar15 = (**(code **)(*(longlong *)FVar32.Handle + 0x640))(FVar32.Handle,1);
                  local_488 = CONCAT31((uint3)(uVar15 >> 0xf),(char)(uVar15 >> 7)) & 0xffffff01;
                  pcVar2 = *(code **)(this_01->_padding_ + 0x498);
                  uVar15 = (**(code **)(*(longlong *)FVar32.Handle + 0x640))(FVar32.Handle,1);
                  (*pcVar2)(this_01,uVar15 | 0x41);
                  (**(code **)(this_01->_padding_ + 0x4b0))(this_01,FVar32.Handle);
                  (**(code **)(*(longlong *)FVar32.Handle + 0x500))(FVar32.Handle,&local_1d8);
                  (**(code **)(this_01->_padding_ + 0x4c0))(this_01,&local_158,0);
                  (**(code **)(this_01->_padding_ + 0x4f0))(this_01,&local_268,0);
                  FVar32 = local_3f0;
                  if (0 < (int)local_508) {
                    local_410 = 0x18;
                    iVar26 = 1;
                    lVar28 = -0x18;
                    FVar38.Handle = FVar33.Handle;
                    FVar41.Handle = FVar33.Handle;
                    do {
                      lVar37 = local_410;
                      uVar30 = FVar33._0_4_;
                      uVar15 = 0;
                      if ((int)uVar30 < (int)local_508) {
                        uVar15 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar15 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar2 = (code *)swi(3);
                        uVar13 = (*pcVar2)();
                        return (bool)uVar13;
                      }
                      local_448._s_0.X =
                           (double)*(undefined8 *)
                                    (local_510.Data + (longlong)&(FVar38.Handle)->field_0x0);
                      local_448._s_0.Y =
                           (double)*(undefined8 *)
                                    (local_510.Data + (longlong)&(FVar38.Handle)->field_0x0 + 8);
                      local_448._s_0.Z =
                           (double)*(undefined8 *)
                                    (&(FVar38.Handle)->field_0x10 + (longlong)local_510.Data);
                      uVar15 = FVar41._0_4_;
                      if ((iVar26 < 0) || (local_1c8 <= iVar26)) {
                        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<7454651530235347142>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGClipPaths.cpp"
                                            ,0xc6,
                                            "InputTransformRange.IsValidIndex(SegmentEndIndex)");
                        if (bVar12) {
                          pcVar2 = (code *)swi(3);
                          uVar13 = (*pcVar2)();
                          return (bool)uVar13;
                        }
LAB_149c635d8:
                        (**(code **)(*(longlong *)FVar32.Handle + 0x638))
                                  (FVar32.Handle,local_4c8,FVar41.Handle,FVar33.Handle);
                      }
                      else {
                        uVar45 = 0;
                        if ((int)uVar15 < local_1c8) {
                          uVar45 = ~uVar15 >> 0x1f;
                        }
                        if ((uVar45 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < NumElements)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                ,0x8b,
                                                L"Array index out of bounds: %lld from an array of size %lld"
                                               ), bVar12)) {
                          pcVar2 = (code *)swi(3);
                          uVar13 = (*pcVar2)();
                          return (bool)uVar13;
                        }
                        lVar29 = (longlong)((int)uVar15 % local_1cc) * (longlong)local_1d0;
                        pdVar1 = (double *)(lVar29 + 0x20 + local_1d8);
                        local_3e8 = *pdVar1;
                        dStack_3e0 = pdVar1[1];
                        local_3d8 = *(double *)(lVar29 + 0x30 + local_1d8);
                        if ((local_1c8 <= iVar26) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < NumElements)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                ,0x8b,
                                                L"Array index out of bounds: %lld from an array of size %lld"
                                               ), bVar12)) {
                          pcVar2 = (code *)swi(3);
                          uVar13 = (*pcVar2)();
                          return (bool)uVar13;
                        }
                        dVar89 = local_3d8;
                        dVar80 = dStack_3e0;
                        dVar74 = local_3e8;
                        lVar29 = (longlong)(iVar26 % local_1cc) * (longlong)local_1d0;
                        local_280 = *(undefined1 (*) [16])(lVar29 + 0x20 + local_1d8);
                        dVar3 = local_280._0_8_ - local_3e8;
                        dVar81 = local_280._8_8_ - dStack_3e0;
                        local_270 = SUB168(*(undefined1 (*) [16])(lVar29 + 0x30 + local_1d8),0);
                        dVar82 = local_270 - local_3d8;
                        dVar67 = dVar81 * dVar81 + dVar3 * dVar3 + dVar82 * dVar82;
                        uVar45 = SUB84(dVar67,0) & uVar8;
                        uVar46 = (uint)((ulonglong)dVar67 >> 0x20) & uVar9;
                        if (dVar7 <= (double)CONCAT44(uVar46,uVar45) &&
                            (double)CONCAT44(uVar46,uVar45) != dVar7) {
                          uVar45 = 0;
                          if ((int)uVar30 < (int)local_508) {
                            uVar45 = ~uVar30 >> 0x1f;
                          }
                          if ((uVar45 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar12)) {
                            pcVar2 = (code *)swi(3);
                            uVar13 = (*pcVar2)();
                            return (bool)uVar13;
                          }
                          dVar73 = __real_3ff0000000000000;
                          dVar89 = *(double *)
                                    (&(FVar38.Handle)->field_0x10 + (longlong)local_510.Data) -
                                   dVar89;
                          dVar74 = *(double *)
                                    (local_510.Data + (longlong)&(FVar38.Handle)->field_0x0) -
                                   dVar74;
                          dVar80 = *(double *)
                                    (&(FVar38.Handle)->field_0x8 + (longlong)local_510.Data) -
                                   dVar80;
                          dVar67 = (dVar81 * dVar80 + dVar3 * dVar74 + dVar82 * dVar89) / dVar67;
                          dVar48 = dVar81 * dVar89 - dVar82 * dVar80;
                          dVar89 = dVar82 * dVar74 - dVar3 * dVar89;
                          dVar74 = dVar3 * dVar80 - dVar81 * dVar74;
                          if ((((__real_be45798ee0000000 <= dVar67) &&
                               (dVar67 <= __real_3ff0000002af31dc)) &&
                              ((double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & uVar9,
                                                SUB84(dVar48,0) & uVar8) <= dVar10)) &&
                             (((double)CONCAT44((uint)((ulonglong)dVar89 >> 0x20) & uVar9,
                                                SUB84(dVar89,0) & uVar8) <= dVar10 &&
                              ((double)CONCAT44((uint)((ulonglong)dVar74 >> 0x20) & uVar9,
                                                SUB84(dVar74,0) & uVar8) <= dVar10)))) {
                            uVar45 = SUB84(dVar67,0) & uVar8;
                            uVar46 = (uint)((ulonglong)dVar67 >> 0x20) & uVar9;
                            if ((double)CONCAT44(uVar46,uVar45) < dVar7 ||
                                (double)CONCAT44(uVar46,uVar45) == dVar7) goto LAB_149c635d8;
                            uVar45 = SUB84(dVar67 - __real_3ff0000000000000,0) & uVar8;
                            uVar46 = (uint)((ulonglong)(dVar67 - __real_3ff0000000000000) >> 0x20) &
                                     uVar9;
                            if (dVar7 <= (double)CONCAT44(uVar46,uVar45) &&
                                (double)CONCAT44(uVar46,uVar45) != dVar7) {
                              if (uVar30 == 0) {
                                if (((int)local_508 < 2) &&
                                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                  pcVar2 = (code *)swi(3);
                                  uVar13 = (*pcVar2)();
                                  return (bool)uVar13;
                                }
                                dVar74 = *(double *)(local_510.Data + lVar37) - local_448._s_0.X;
                                dVar80 = *(double *)(local_510.Data + lVar37 + 8) - local_448._s_0.Y
                                ;
                                dVar89 = *(double *)(local_510.Data + lVar37 + 0x10) -
                                         local_448._s_0.Z;
                              }
                              else {
                                uVar45 = 0;
                                if ((int)(uVar30 - 1) < (int)local_508) {
                                  uVar45 = ~(uVar30 - 1) >> 0x1f;
                                }
                                if ((uVar45 == 0) &&
                                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                  pcVar2 = (code *)swi(3);
                                  uVar13 = (*pcVar2)();
                                  return (bool)uVar13;
                                }
                                dVar74 = local_448._s_0.X - *(double *)(local_510.Data + lVar28);
                                dVar80 = local_448._s_0.Y - *(double *)(local_510.Data + lVar28 + 8)
                                ;
                                dVar89 = local_448._s_0.Z -
                                         *(double *)(local_510.Data + lVar28 + 0x10);
                              }
                              dVar48 = dVar82 * dVar74 - dVar3 * dVar89;
                              dVar82 = dVar81 * dVar89 - dVar82 * dVar80;
                              dVar3 = dVar3 * dVar80 - dVar81 * dVar74;
                              if (((dVar10 < (double)CONCAT44((uint)((ulonglong)dVar82 >> 0x20) &
                                                              uVar9,SUB84(dVar82,0) & uVar8)) ||
                                  (dVar10 < (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) &
                                                             uVar9,SUB84(dVar48,0) & uVar8))) ||
                                 (uVar45 = SUB84(dVar3,0) & uVar8,
                                 uVar46 = (uint)((ulonglong)dVar3 >> 0x20) & uVar9,
                                 dVar10 <= (double)CONCAT44(uVar46,uVar45) &&
                                 (double)CONCAT44(uVar46,uVar45) != dVar10)) goto LAB_149c63208;
                              uStack_370 = 2;
                              fStack_41c = (float)(dVar73 - dVar67);
                              local_1e8._4_4_ = fStack_41c;
                              local_1e8._0_4_ = uVar15;
                              fStack_414 = (float)dVar67;
                              local_1e0 = CONCAT44(fStack_414,iVar26);
                              local_378 = &local_1e8;
                              local_308._12_4_ = uStack_36c;
                              local_308.ArrayNum = 2;
                              local_420 = uVar15;
                              local_418 = iVar26;
                              local_308.DataPtr = local_378;
                              PCGPointDataHelpers::WeightedAverage
                                        ((UPCGBasePointData *)FVar32.Handle,&local_308,local_4c8,
                                         uVar30,SUB41(local_488,0));
                              pTVar23 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                                        ::operator[](&local_158,uVar30);
                              auVar6._8_8_ = local_448._s_0.Y;
                              auVar6._0_8_ = local_448._s_0.X;
                              *(undefined1 (*) [16])(pTVar23->Translation).XY.m128d_f64 = auVar6;
                              (pTVar23->Translation).ZW.m128d_f64[0] = local_448._s_0.Z;
                              (pTVar23->Translation).ZW.m128d_f64[1] = 0.0;
                              iVar14 = PCGHelpers::ComputeSeedFromPosition
                                                 ((TVector<double> *)&local_448._s_0);
                              piVar24 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                                                  (&local_268,uVar30);
                              *piVar24 = iVar14;
                              lVar37 = local_410;
                            }
                            else {
                              (**(code **)(*(longlong *)FVar32.Handle + 0x638))
                                        (FVar32.Handle,local_4c8,iVar26,FVar33.Handle);
                              FVar41._0_4_ = uVar15 + 1;
                              FVar41._4_4_ = 0;
                              iVar26 = iVar26 + 1;
                            }
                            goto LAB_149c635f6;
                          }
                        }
LAB_149c63208:
                        FVar41._0_4_ = uVar15 + 1;
                        FVar41._4_4_ = 0;
                        iVar26 = iVar26 + 1;
                        uVar30 = uVar30 - 1;
                        FVar38.Handle = (UObject *)&FVar38.Handle[-1].field_0x10;
                        lVar28 = lVar28 + -0x18;
                        lVar37 = lVar37 + -0x18;
                      }
LAB_149c635f6:
                      local_410 = lVar37 + 0x18;
                      FVar33._0_4_ = uVar30 + 1;
                      FVar33._4_4_ = 0;
                      FVar38.Handle = (UObject *)&(FVar38.Handle)->field_0x18;
                      lVar28 = lVar28 + 0x18;
                    } while ((int)FVar33._0_4_ < (int)local_508);
                    uVar90 = (undefined4)local_3b8;
                    uVar91 = (undefined4)((ulonglong)local_3b8 >> 0x20);
                    param_1 = local_4c0;
                    FVar39.Data = (FScriptContainerElement *)local_408;
                  }
                  local_4a8 = local_4c8;
                  if (((local_520.Data <= (FScriptContainerElement *)&local_4a8) &&
                      ((FScriptContainerElement *)&local_4a8 <
                       local_520.Data + (longlong)local_518._4_4_ * 8)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  iVar26 = (int)local_518;
                  if ((int)local_518 == local_518._4_4_) {
                    iVar26 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_520,(int *)((longlong)&local_518 + 4));
                  }
                  local_518 = CONCAT44(local_518._4_4_,iVar26 + 1);
                  *(UPCGBasePointData **)(local_520.Data + (longlong)iVar26 * 8) = local_4a8;
                  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                            ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                             local_368.MetadataInitializeParams.DomainInitializeParams.
                             AllocatorInstance.Data,
                             local_368.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
                  if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                      local_368.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                      Data != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0
                     ) {
                    FMemory::Free(local_368.MetadataInitializeParams.DomainInitializeParams.
                                  AllocatorInstance.Data);
                  }
                  if (local_368.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_368.MetadataInitializeParams.DomainMapping.AllocatorInstance
                                  .Data);
                  }
                  pTVar35 = local_460;
                  if (local_510.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_510.Data);
                    uVar20 = (ulonglong)local_484;
                    FVar39.Data = FVar39.Data + 0x10;
                    pTVar35 = local_460;
                    FVar34.Data = (FScriptContainerElement *)local_4b8;
                    goto LAB_149c626ec;
                  }
                }
              }
              else {
                if ((((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar39.Data)
                     ->ArrayNum < 1) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar2 = (code *)swi(3);
                  uVar13 = (*pcVar2)();
                  return (bool)uVar13;
                }
                dVar3 = (double)CONCAT44(uVar91,uVar90) * local_248.Scale3D.ZW.m128d_f64[0];
                dVar67 = local_248.Scale3D.ZW.m128d_f64[1] * 0.0;
                pFVar36 = (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                           FVar39.Data)->AllocatorInstance).Data;
                uVar30 = ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                         FVar39.Data)->ArrayNum - 1;
                local_2b8 = CONCAT44(uVar91,uVar90);
                local_2c8 = *(double *)pFVar36;
                dStack_2c0 = *(double *)(pFVar36 + 8);
                dVar82 = local_248.Rotation.ZW.m128d_f64[0];
                dVar74 = local_248.Rotation.XY.m128d_f64[1];
                auVar76 = blendpd((undefined1  [16])local_248.Rotation.XY.m128d_f64,
                                  (undefined1  [16])local_248.Rotation.ZW.m128d_f64,2);
                uVar15 = 0;
                if ((int)uVar30 <
                    ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)FVar39.Data)
                    ->ArrayNum) {
                  uVar15 = ~uVar30 >> 0x1f;
                }
                dVar81 = local_248.Rotation.ZW.m128d_f64[1];
                dVar80 = local_2c8 * local_248.Scale3D.XY.m128d_f64[0];
                dVar89 = dStack_2c0 * local_248.Scale3D.XY.m128d_f64[1];
                uVar47 = (undefined4)((ulonglong)dVar89 >> 0x20);
                auVar83._8_4_ = SUB84(dVar89,0);
                auVar83._0_8_ = dVar80;
                auVar83._12_4_ = uVar47;
                auVar49._8_4_ = SUB84(dVar89,0);
                auVar49._0_8_ = dVar80;
                auVar49._12_4_ = uVar47;
                auVar50._8_4_ = SUB84(dVar67,0);
                auVar50._0_8_ = dVar3;
                auVar50._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
                auVar50 = blendpd(auVar49,auVar50,2);
                auVar84._0_8_ = auVar83._8_8_ * local_248.Rotation.XY.m128d_f64[0] - dVar74 * dVar80
                ;
                auVar84._8_8_ = dVar3 * dVar74 - dVar82 * dVar89;
                auVar68._8_4_ = SUB84(auVar84._8_8_,0);
                auVar68._0_8_ = auVar84._0_8_;
                auVar68._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
                auVar51._0_8_ = auVar50._0_8_ * dVar82 - auVar76._0_8_ * dVar3;
                auVar51._8_8_ = auVar50._8_8_ * dVar81 - auVar76._8_8_ * dVar67;
                auVar50 = blendpd(auVar84,auVar51,2);
                dVar67 = auVar68._8_8_ + auVar68._8_8_;
                dVar73 = auVar51._0_8_ + auVar51._0_8_;
                auVar85._0_8_ = auVar50._0_8_ + auVar50._0_8_;
                auVar85._8_8_ = auVar50._8_8_ + auVar50._8_8_;
                auVar60._8_4_ = SUB84(dVar73,0);
                auVar60._0_8_ = dVar67;
                uVar47 = (undefined4)((ulonglong)dVar73 >> 0x20);
                auVar60._12_4_ = uVar47;
                auVar52._8_4_ = SUB84(dVar73,0);
                auVar52._0_8_ = dVar67;
                auVar52._12_4_ = uVar47;
                auVar50 = blendpd(auVar52,auVar85,2);
                auVar61._0_8_ = auVar60._8_8_ * local_248.Rotation.XY.m128d_f64[0] - dVar67 * dVar74
                ;
                auVar61._8_8_ = auVar85._0_8_ * dVar74 - dVar73 * dVar82;
                auVar53._0_8_ = auVar50._0_8_ * dVar82 - auVar85._0_8_ * auVar76._0_8_;
                auVar53._8_8_ = auVar50._8_8_ * dVar81 - auVar85._8_8_ * auVar76._8_8_;
                auVar76 = blendpd(auVar61,auVar53,2);
                local_2f8._s_0.X =
                     dVar67 * dVar81 + dVar80 + auVar61._8_8_ +
                     local_248.Translation.XY.m128d_f64[0];
                local_2f8._s_0.Y =
                     dVar73 * dVar81 + dVar89 + auVar53._0_8_ +
                     local_248.Translation.XY.m128d_f64[1];
                local_2f8._s_0.Z =
                     auVar85._0_8_ * dVar81 + dVar3 + auVar76._0_8_ +
                     local_248.Translation.ZW.m128d_f64[0];
                if (uVar15 == 0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar12) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                }
                local_2a0 = CONCAT44(uVar91,uVar90);
                auVar62._4_4_ = local_248.Rotation.XY.m128d_f64[0]._4_4_;
                auVar62._0_4_ = local_248.Rotation.XY.m128d_f64[0]._0_4_;
                auVar62._8_4_ = local_248.Rotation.XY.m128d_f64[1]._0_4_;
                auVar62._12_4_ = local_248.Rotation.XY.m128d_f64[1]._4_4_;
                dVar74 = (double)CONCAT44(uVar91,uVar90) * local_248.Scale3D.ZW.m128d_f64[0];
                dVar3 = local_248.Scale3D.ZW.m128d_f64[1] * 0.0;
                pFVar36 = (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                           FVar39.Data)->AllocatorInstance).Data +
                          (longlong)
                          ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                          FVar39.Data)->ArrayNum * 0x10 + -0x10;
                local_2b0 = *(double *)pFVar36;
                dStack_2a8 = *(double *)(pFVar36 + 8);
                auVar75._4_4_ = local_248.Rotation.XY.m128d_f64[0]._4_4_;
                auVar75._0_4_ = local_248.Rotation.XY.m128d_f64[0]._0_4_;
                auVar75._8_4_ = local_248.Rotation.XY.m128d_f64[1]._0_4_;
                auVar75._12_4_ = local_248.Rotation.XY.m128d_f64[1]._4_4_;
                dVar82 = (double)CONCAT44(local_248.Rotation.ZW.m128d_f64[1]._4_4_,
                                          local_248.Rotation.ZW.m128d_f64[1]._0_4_);
                auVar4._4_4_ = local_248.Rotation.ZW.m128d_f64[0]._4_4_;
                auVar4._0_4_ = local_248.Rotation.ZW.m128d_f64[0]._0_4_;
                auVar4._8_4_ = local_248.Rotation.ZW.m128d_f64[1]._0_4_;
                auVar4._12_4_ = local_248.Rotation.ZW.m128d_f64[1]._4_4_;
                auVar50 = blendpd(auVar75,auVar4,2);
                dVar80 = local_2b0 * local_248.Scale3D.XY.m128d_f64[0];
                dVar89 = dStack_2a8 * local_248.Scale3D.XY.m128d_f64[1];
                auVar77._8_4_ = SUB84(dVar89,0);
                auVar77._0_8_ = dVar80;
                uVar47 = (undefined4)((ulonglong)dVar89 >> 0x20);
                auVar77._12_4_ = uVar47;
                auVar54._8_4_ = SUB84(dVar89,0);
                auVar54._0_8_ = dVar80;
                auVar54._12_4_ = uVar47;
                auVar76._8_4_ = SUB84(dVar3,0);
                auVar76._0_8_ = dVar74;
                auVar76._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
                auVar76 = blendpd(auVar54,auVar76,2);
                auVar78._0_8_ =
                     auVar77._8_8_ *
                     (double)CONCAT44(local_248.Rotation.XY.m128d_f64[0]._4_4_,
                                      local_248.Rotation.XY.m128d_f64[0]._0_4_) -
                     dVar80 * auVar62._8_8_;
                auVar78._8_8_ =
                     dVar74 * (double)CONCAT44(local_248.Rotation.XY.m128d_f64[1]._4_4_,
                                               local_248.Rotation.XY.m128d_f64[1]._0_4_) -
                     dVar89 * (double)CONCAT44(local_248.Rotation.ZW.m128d_f64[0]._4_4_,
                                               local_248.Rotation.ZW.m128d_f64[0]._0_4_);
                auVar55._0_8_ =
                     auVar76._0_8_ *
                     (double)CONCAT44(local_248.Rotation.ZW.m128d_f64[0]._4_4_,
                                      local_248.Rotation.ZW.m128d_f64[0]._0_4_) -
                     auVar50._0_8_ * dVar74;
                auVar55._8_8_ =
                     auVar76._8_8_ *
                     (double)CONCAT44(local_248.Rotation.ZW.m128d_f64[1]._4_4_,
                                      local_248.Rotation.ZW.m128d_f64[1]._0_4_) -
                     auVar50._8_8_ * dVar3;
                dVar3 = auVar78._8_8_ + auVar78._8_8_;
                dVar67 = auVar55._0_8_ + auVar55._0_8_;
                uVar47 = (undefined4)((ulonglong)dVar67 >> 0x20);
                auVar76 = blendpd(auVar78,auVar55,2);
                auVar56._8_4_ = local_248.Rotation.ZW.m128d_f64[1]._0_4_;
                auVar56._0_8_ = dVar82;
                auVar56._12_4_ = local_248.Rotation.ZW.m128d_f64[1]._4_4_;
                auVar69._8_4_ = SUB84(dVar67,0);
                auVar69._0_8_ = dVar3;
                auVar69._12_4_ = uVar47;
                auVar79._0_8_ = auVar76._0_8_ + auVar76._0_8_;
                auVar79._8_8_ = auVar76._8_8_ + auVar76._8_8_;
                auVar70._0_8_ =
                     auVar69._8_8_ *
                     (double)CONCAT44(local_248.Rotation.XY.m128d_f64[0]._4_4_,
                                      local_248.Rotation.XY.m128d_f64[0]._0_4_) -
                     auVar62._8_8_ * dVar3;
                auVar70._8_8_ =
                     auVar79._0_8_ *
                     (double)CONCAT44(local_248.Rotation.XY.m128d_f64[1]._4_4_,
                                      local_248.Rotation.XY.m128d_f64[1]._0_4_) -
                     (double)CONCAT44(local_248.Rotation.ZW.m128d_f64[0]._4_4_,
                                      local_248.Rotation.ZW.m128d_f64[0]._0_4_) * dVar67;
                auVar63._8_4_ = SUB84(dVar67,0);
                auVar63._0_8_ = dVar3;
                auVar63._12_4_ = uVar47;
                auVar76 = blendpd(auVar63,auVar79,2);
                auVar64._0_8_ =
                     auVar76._0_8_ *
                     (double)CONCAT44(local_248.Rotation.ZW.m128d_f64[0]._4_4_,
                                      local_248.Rotation.ZW.m128d_f64[0]._0_4_) -
                     auVar50._0_8_ * auVar79._0_8_;
                auVar64._8_8_ =
                     auVar76._8_8_ *
                     (double)CONCAT44(local_248.Rotation.ZW.m128d_f64[1]._4_4_,
                                      local_248.Rotation.ZW.m128d_f64[1]._0_4_) -
                     auVar50._8_8_ * auVar79._8_8_;
                auVar76 = blendpd(auVar70,auVar64,2);
                local_2e0._0_8_ =
                     dVar82 * dVar3 + dVar80 + auVar70._8_8_ + local_248.Translation.XY.m128d_f64[0]
                ;
                local_2e0._8_8_ =
                     auVar56._8_8_ * dVar67 + dVar89 + auVar64._0_8_ +
                     local_248.Translation.XY.m128d_f64[1];
                local_2e0._s_0.Z =
                     dVar82 * auVar79._0_8_ + dVar74 + auVar76._0_8_ +
                     local_248.Translation.ZW.m128d_f64[0];
                fVar43 = FPCGSplineStruct::FindInputKeyClosestToWorldLocation
                                   ((FPCGSplineStruct *)&FVar32.Handle[6].field_0x20,
                                    (TVector<double> *)&local_2f8._s_0);
                fVar44 = FPCGSplineStruct::FindInputKeyClosestToWorldLocation
                                   ((FPCGSplineStruct *)&FVar32.Handle[6].field_0x20,
                                    (TVector<double> *)&local_2e0._s_0);
                bVar12 = IsInGameThread();
                if (bVar12) {
                  pUVar21 = GetTransientPackageAsObject();
                  pUVar22 = NewObject<UPCGSplineData>(pUVar21);
                }
                else {
                  if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
                     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<4331830188552749348>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                          ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  FGCScopeGuard::FGCScopeGuard(&local_522);
                  pUVar21 = GetTransientPackageAsObject();
                  pUVar22 = NewObject<UPCGSplineData>(pUVar21);
                  FGCScopeGuard::~FGCScopeGuard(&local_522);
                  if ((pUVar22 == (UPCGSplineData *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Object",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                          ,0x12a,L""), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  local_3b0 = pUVar22;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar22 != (UPCGSplineData *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar22);
                  }
                  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  ::Emplace<TObjectPtr<UObject>_>
                            (&param_1->AsyncObjects,&local_3a0,(bool *)&local_3b0);
                }
                UPCGSpatialData::InitializeFromData
                          ((UPCGSpatialData *)pUVar22,(UPCGSpatialData *)FVar32.Handle,
                           (UPCGMetadata *)0x0,true,true);
                PCGSplitSpline::SplitSpline
                          ((UPCGSplineData *)FVar32.Handle,pUVar22,(double)fVar43,(double)fVar44);
                local_4b0 = pUVar22;
                if (((local_520.Data <= (FScriptContainerElement *)&local_4b0) &&
                    ((FScriptContainerElement *)&local_4b0 <
                     local_520.Data + (longlong)local_518._4_4_ * 8)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar2 = (code *)swi(3);
                  uVar13 = (*pcVar2)();
                  return (bool)uVar13;
                }
                iVar26 = (int)local_518;
                if ((int)local_518 == local_518._4_4_) {
                  iVar26 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_520,(int *)((longlong)&local_518 + 4));
                }
                local_518 = CONCAT44(local_518._4_4_,iVar26 + 1);
                *(UPCGSplineData **)(local_520.Data + (longlong)iVar26 * 8) = local_4b0;
                pTVar35 = local_460;
              }
            }
            FVar39.Data = FVar39.Data + 0x10;
            uVar20 = (ulonglong)local_484;
            FVar34.Data = (FScriptContainerElement *)local_4b8;
          } while( true );
        }
      }
      DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                 local_4e8.AllocatorInstance.Data,local_4e8.ArrayNum);
      if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
          local_4e8.AllocatorInstance.Data !=
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_4e8.AllocatorInstance.Data);
      }
      pFVar19 = local_4a0;
      if (local_500.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149c63899;
      FMemory::Free(local_500.AllocatorInstance.Data);
      uVar27 = (ulonglong)(uint)local_458.ArrayNum;
      FVar34.Data = FVar34.Data + 0x78;
      uVar20 = (ulonglong)local_480;
      pFVar19 = local_4a0;
      goto LAB_149c6246c;
    }
LAB_149c63899:
    uVar27 = (ulonglong)(uint)local_458.ArrayNum;
    FVar34.Data = FVar34.Data + 0x78;
    uVar20 = (ulonglong)local_480;
    goto LAB_149c6246c;
  }
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
            (&(param_1->OutputData).TaggedData,&local_458);
LAB_149c638f2:
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            ((TGeneralPolygon2<double> *)local_4d8.AllocatorInstance.Data,local_4d8.ArrayNum);
  if ((TGeneralPolygon2<double> *)local_4d8.AllocatorInstance.Data !=
      (TGeneralPolygon2<double> *)0x0) {
    FMemory::Free(local_4d8.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_498.AllocatorInstance.Data,local_498.ArrayNum);
  if ((FObjectPtr_u_0 *)local_498.AllocatorInstance.Data != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free(local_498.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_458.AllocatorInstance.Data,local_458.ArrayNum);
  if ((FPCGTaggedData *)local_458.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_458.AllocatorInstance.Data);
  }
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
LAB_149c638e4:
  if (local_430.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.AllocatorInstance.Data);
  }
  goto LAB_149c638f2;
LAB_149c63769:
  iVar26 = (int)local_518;
  pFVar36 = local_520.Data + (longlong)(int)local_518 * 8;
  FVar34.Data = local_520.Data;
  while( true ) {
    if ((int)local_518 != iVar26) {
      local_526 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<UPCGSpatialData_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_526);
    }
    pFVar11 = local_4c0;
    if (FVar34.Data == pFVar36) break;
    pUVar22 = *(UPCGSplineData **)FVar34.Data;
    pFVar25 = (FPCGTaggedData *)(local_4c0->OutputData).TaggedData.AllocatorInstance.Data;
    if (((pFVar25 <= pFVar19) && (pFVar19 < pFVar25 + (local_4c0->OutputData).TaggedData.ArrayMax))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar2 = (code *)swi(3);
      uVar13 = (*pcVar2)();
      return (bool)uVar13;
    }
    iVar14 = (pFVar11->OutputData).TaggedData.ArrayNum;
    piVar24 = &(pFVar11->OutputData).TaggedData.ArrayMax;
    if (iVar14 == *piVar24) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)&pFVar11->OutputData,piVar24);
    }
    (pFVar11->OutputData).TaggedData.ArrayNum = iVar14 + 1;
    pFVar25 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         ((pFVar11->OutputData).TaggedData.AllocatorInstance.Data +
                         (longlong)iVar14 * 0x78),pFVar19);
    FPCGDataPtrWrapper::operator=(&pFVar25->Data,(UPCGData *)pUVar22);
    FVar34.Data = FVar34.Data + 8;
  }
  if (local_520.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data);
  }
  DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             local_4e8.AllocatorInstance.Data,local_4e8.ArrayNum);
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      local_4e8.AllocatorInstance.Data !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_4e8.AllocatorInstance.Data);
  }
  pFVar19 = local_4a0;
  param_1 = local_4c0;
  pUVar18 = local_4f0;
  FVar34.Data = (FScriptContainerElement *)local_4b8;
  if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.AllocatorInstance.Data);
    pFVar19 = local_4a0;
    param_1 = local_4c0;
    pUVar18 = local_4f0;
    FVar34.Data = (FScriptContainerElement *)local_4b8;
  }
  goto LAB_149c63899;
}

// ExecutionLoopMode @ 149c75af0

EPCGElementExecutionLoopMode __thiscall
FPCGClipPathsElement::ExecutionLoopMode(FPCGClipPathsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c928a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGClipPathsElement::SupportsBasePointDataInputs(FPCGClipPathsElement *this,FPCGContext *param_1)

{
  return true;
}

