// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 149b62ce0

double __thiscall
`FPCGElevationIsolinesElement::ExecuteInternal'::__l36::<lambda_3>::operator()
          (void *this,int param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar1 = param_1 * *(int *)this + param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return *(double *)(*plVar2 + (longlong)(int)uVar1 * 0x30);
}

// ExecuteInternal @ 149b7e0d0

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
FPCGElevationIsolinesElement::ExecuteInternal
          (FPCGElevationIsolinesElement *this,FPCGContext *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UPCGNode *this_00;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  FObjectPtr_u_0 FVar29;
  FPCGContext *pFVar30;
  bool bVar31;
  undefined1 uVar32;
  bool bVar33;
  int iVar34;
  int iVar35;
  UClass *pUVar36;
  UPCGSettings *pUVar37;
  UPCGElevationIsolinesSettings *pUVar38;
  UPCGSpatialData *pUVar39;
  IPCGGraphExecutionSource *pIVar40;
  longlong *plVar41;
  UPCGData *pUVar42;
  TQuat<double> *pTVar43;
  FPCGTaggedData *pFVar44;
  TRotator<double> *pTVar45;
  UObject *pUVar46;
  UPCGSplineData *this_01;
  UPCGBasePointData *pUVar47;
  ulonglong uVar48;
  undefined8 *puVar49;
  ulonglong uVar50;
  char cVar51;
  FObjectPtr_u_0 *pFVar52;
  FPCGMarchingSquareResult *pFVar53;
  uint uVar54;
  uint uVar55;
  longlong lVar56;
  FScriptContainerElement *pFVar57;
  ForAnyElementType FVar58;
  ulonglong uVar59;
  uint uVar60;
  FScriptContainerElement *pFVar61;
  ForAnyElementType FVar62;
  bool bVar63;
  ulonglong uVar64;
  uint uVar65;
  uint uVar66;
  double dVar67;
  double dVar75;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar68;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  double dVar88;
  __m128 _Var89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar95;
  undefined8 uVar96;
  float fVar97;
  undefined1 auVar98 [16];
  undefined4 uVar99;
  undefined4 uVar100;
  undefined1 auStackY_728 [32];
  bool local_6d7;
  char local_6d6;
  <lambda_1> local_6d5 [5];
  ForAnyElementType local_6d0;
  undefined8 local_6c8;
  undefined1 local_6c0;
  undefined1 local_6bf;
  undefined1 local_6be [6];
  UPCGElevationIsolinesSettings *local_6b8;
  FPCGMarchingSquareResult *local_6b0;
  <lambda_1> local_6a8 [4];
  int local_6a4;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_6a0;
  FPCGTaggedData *local_690;
  TArray<TTuple<double,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_> local_688;
  double local_678;
  int local_670;
  ForAnyElementType local_668;
  int local_660;
  int local_65c;
  uint local_658;
  uint local_654;
  FObjectPtr_u_0 local_650;
  ulonglong local_648;
  FPCGMarchingSquareResult *local_640;
  FPCGContext *local_638;
  FObjectPtr_u_0 *local_630;
  FObjectPtr_u_0 *local_628;
  FPCGProjectionParams local_620;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_600;
  TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> local_5f0;
  undefined1 local_5e0 [16];
  double local_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  UPCGSpatialData *local_5b0;
  undefined1 local_5a8 [16];
  ulonglong local_598;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_590;
  UPCGSplineData *local_580;
  uint local_578 [2];
  TArray<TTuple<double,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_> *local_570;
  code *local_568;
  uint *local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  FString local_548;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  double local_4f8;
  double local_4f0;
  double local_4e8;
  <lambda_2> local_4e0;
  TQuat<double> local_488;
  TQuat<double> local_468;
  TQuat<double> local_448;
  TQuat<double> local_428;
  TQuat<double> local_408;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  TRotator<double> local_308;
  TQuat<double> local_2e8;
  TQuat<double> local_2c8;
  TQuat<double> local_2a8;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  double local_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  undefined1 local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  TTransform<double> local_1b8;
  longlong local_158;
  int local_150;
  int local_14c;
  int local_148;
  undefined8 local_138 [12];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_728;
  bVar63 = -1 < CpuChannel->Enabled;
  local_638 = param_1;
  if (bVar63) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId56,"FPCGElevationIsolinesElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGElevationIsolines.cpp"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId56);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGElevationIsolines.cpp"
                          ,0x3a,L""), bVar31)) {
    pcVar6 = (code *)swi(3);
    uVar32 = (*pcVar6)();
    return (bool)uVar32;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar37 = UPCGNode::GetSettings(this_00), pUVar37 == (UPCGSettings *)0x0)) {
      pFVar44 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGElevationIsolinesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_6d5[0]);
      if (pFVar44 != (FPCGTaggedData *)0x0) {
        local_6b8 = Cast<UPCGElevationIsolinesSettings_const_>(&pFVar44->Data);
        goto LAB_149b7e234;
      }
    }
    else {
      pUVar37 = UPCGNode::GetSettings(this_00);
      pUVar38 = (UPCGElevationIsolinesSettings *)
                FPCGDataCollection::GetSettings(&param_1->InputData,pUVar37);
      if (pUVar38 != (UPCGElevationIsolinesSettings *)0x0) {
        local_6b8 = pUVar38;
        pUVar36 = UPCGElevationIsolinesSettings::StaticClass();
        iVar35 = (int)pUVar36->_padding_;
        if ((iVar35 <= *(int *)(pUVar38->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar38->_padding_ + 0x30) + (longlong)iVar35 * 8) ==
            &pUVar36->_padding_)) goto LAB_149b7e234;
      }
    }
    local_6b8 = (UPCGElevationIsolinesSettings *)0x0;
  }
  else {
    pUVar36 = UPCGElevationIsolinesSettings::StaticClass();
    bVar31 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar36);
    if (bVar31) {
      local_6b8 = (UPCGElevationIsolinesSettings *)
                  (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      local_6b8 = (UPCGElevationIsolinesSettings *)0x0;
    }
  }
LAB_149b7e234:
  pUVar38 = local_6b8;
  if ((local_6b8 == (UPCGElevationIsolinesSettings *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGElevationIsolines.cpp"
                          ,0x3d,L""), bVar31)) {
    pcVar6 = (code *)swi(3);
    uVar32 = (*pcVar6)();
    return (bool)uVar32;
  }
  uVar65 = SUB84(pUVar38->ElevationIncrement,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar66 = (uint)((ulonglong)pUVar38->ElevationIncrement >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((double)CONCAT44(uVar66,uVar65) < __real_3e45798ee2308c3a ||
       (double)CONCAT44(uVar66,uVar65) == __real_3e45798ee2308c3a) ||
     (pUVar38->ElevationEnd <= pUVar38->ElevationStart &&
      pUVar38->ElevationStart != pUVar38->ElevationEnd)) goto LAB_149b7fa55;
  local_6d7 = false;
  ::FName::FName((FName *)(local_5a8 + 8),L"BoundingShape");
  pUVar39 = FPCGDataCollection::GetSpatialUnionOfInputsByPin
                      (&param_1->InputData,param_1,(FName *)(local_5a8 + 8),&local_6d7);
  if (pUVar39 == (UPCGSpatialData *)0x0) {
    local_5b0 = pUVar39;
    if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
       (bVar31 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar31))
    goto LAB_149b7fa55;
    if ((local_6d7 != false) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bOutUnionDataCreated",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGElevationIsolines.cpp"
                            ,0x4a,L""), bVar31)) {
      pcVar6 = (code *)swi(3);
      uVar32 = (*pcVar6)();
      return (bool)uVar32;
    }
    pIVar40 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->(&param_1->ExecutionSource);
    plVar41 = (longlong *)(**(code **)((longlong)*pIVar40 + 0x18))(pIVar40);
    pUVar42 = (UPCGData *)(**(code **)(*plVar41 + 8))(plVar41);
    pUVar39 = Cast<UPCGSpatialData,UPCGData>(pUVar42);
    local_5b0 = pUVar39;
    if (pUVar39 == (UPCGSpatialData *)0x0) goto LAB_149b7fa55;
  }
  local_5b0 = pUVar39;
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_600,&PCGPinConstants::DefaultInputLabel);
  dVar28 = __real_bfe0000000000000;
  dVar27 = __real_4000000000000000;
  dVar26 = __real_3e45798ee0000000;
  uVar48 = (ulonglong)local_600.ArrayNum;
  auVar98._8_8_ = 0;
  auVar98._0_8_ = (double)__xmm_80000000000000008000000000000000;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = __real_3ff0000000000000;
  uVar99 = (undefined4)__real_3fe0000000000000;
  uVar100 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  local_558 = ___xmm_3f0000003f0000003f0000003f000000;
  uStack_550 = _UNK_150689628;
  local_654 = local_600.ArrayNum;
  pFVar52 = (FObjectPtr_u_0 *)(local_600.AllocatorInstance.Data + uVar48 * 0x78);
  FVar58.Data = local_600.AllocatorInstance.Data;
  dVar95 = __real_3fd0000000000000;
  local_630 = pFVar52;
  while( true ) {
    local_628 = (FObjectPtr_u_0 *)FVar58.Data;
    if (local_600.ArrayNum != (uint)uVar48) {
      local_6c0 = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_6c0);
    }
    if ((FObjectPtr_u_0 *)FVar58.Data == pFVar52) break;
    local_650 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar58.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b7e47b:
      if (local_650.Handle != (UObject *)0x0) {
        pUVar36 = Z_Construct_UClass_UPCGSurfaceData_NoRegister();
        bVar31 = FObjectPtr::IsA((FObjectPtr *)&local_650,pUVar36);
        FVar29 = local_650;
        if ((bVar31) && (pFVar52 = local_630, local_650.Handle != (UObject *)0x0)) {
          (**(code **)(pUVar39->_padding_ + 0x388))(pUVar39,&local_1f0);
          local_5e0._8_8_ = pUVar38->Resolution;
          local_5d0 = auVar79._0_8_;
          dVar88 = local_5d0 / (double)local_5e0._8_8_;
          local_1f8 = 1;
          local_688.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_688.ArrayNum = 0;
          local_688.ArrayMax = 0;
          local_210 = (double)local_5e0._8_8_ * (double)CONCAT44(uVar100,uVar99);
          local_5e0._0_8_ = local_5e0._8_8_;
          local_218 = dVar28;
          local_200 = CONCAT44(uVar100,uVar99);
          local_228 = SUB84(local_210,0) ^ auVar98._0_4_;
          uStack_224 = (uint)((ulonglong)local_210 >> 0x20) ^ auVar98._4_4_;
          local_5c8 = local_1f0;
          dStack_5c0 = local_1e8;
          local_5b8 = local_1c8;
          uVar65 = (int)((longlong)ROUND(dVar28 - (dVar88 * local_1f0 + dVar88 * local_1f0)) >> 1) +
                   (int)((longlong)
                         ROUND((dVar88 * local_1d8 + dVar88 * local_1d8) -
                               (double)CONCAT44(uVar100,uVar99)) >> 1);
          local_598 = (ulonglong)uVar65;
          uVar66 = (int)((longlong)ROUND(dVar28 - (dVar88 * local_1e8 + dVar88 * local_1e8)) >> 1) +
                   (int)((longlong)
                         ROUND((dVar88 * local_1d0 + dVar88 * local_1d0) -
                               (double)CONCAT44(uVar100,uVar99)) >> 1);
          uVar48 = (ulonglong)uVar66;
          uVar65 = uVar66 * uVar65;
          local_648 = uVar48;
          uStack_220 = local_228;
          uStack_21c = uStack_224;
          dStack_208 = local_210;
          if ((int)uVar65 < 1) {
            if ((int)uVar65 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar65);
            }
          }
          else {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,uVar65,&local_688.AllocatorInstance,&local_688.ArrayNum,
                       &local_688.ArrayMax);
          }
          local_620.AttributeList.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_620.bProjectPositions = true;
          local_620.bProjectRotations = true;
          local_620.bProjectScales = false;
          local_620.ColorBlendMode = SourceValue;
          local_620._4_4_ = 0;
          local_620.AttributeList.Data.ArrayNum = 0;
          local_620.AttributeList.Data.ArrayMax = 0;
          local_620.AttributeMode = ExcludeAttributes;
          local_620.AttributeMergeOperation = Min;
          local_620.TagMergeOperation = Source;
          local_620._27_5_ = 0;
          ::FString::FString(&local_620.AttributeList,L"");
          local_620.bProjectRotations = pUVar38->bProjectSurfaceNormal;
          local_4e0.HeightmapWithRotation = &local_688;
          local_4e0.ProjectionParams = &local_620;
          local_4e0.Origin.field0_0x0._s_0.Z = local_5b8;
          local_620.AttributeMode = ExcludeAttributes;
          local_620.AttributeMergeOperation = TargetValue;
          local_620.TagMergeOperation = Source;
          local_620.bProjectPositions = true;
          local_4e0.SurfaceData = (UPCGSurfaceData *)FVar29;
          local_4e0.Origin.field0_0x0._s_0.X = local_5c8;
          local_4e0.Origin.field0_0x0._s_0.Y = dStack_5c0;
          local_4e0.CellSize.field0_0x0._0_16_ = local_5e0;
          local_4e0.CellSize.field0_0x0._s_0.Z = local_5d0;
          local_4e0.CellYCount = uVar66;
          local_4e0.Settings = pUVar38;
          FPCGAsync::
          AsyncProcessingOneToOneEx<_FPCGElevationIsolinesElement::ExecuteInternal_::__l36::<lambda_1>,_FPCGElevationIsolinesElement::ExecuteInternal_::__l36::<lambda_2>_>
                    (&param_1->AsyncState,local_688.ArrayNum,local_6a8,&local_4e0,false,0x40,true);
          local_678 = pUVar38->ElevationStart;
          auVar94._8_8_ = 0;
          auVar94._0_8_ = local_678;
          local_570 = &local_688;
          local_6a4 = 0;
          local_578[0] = uVar66;
          if (local_678 < pUVar38->ElevationEnd) {
            do {
              local_560 = local_578;
              local_568 = UE::Core::Private::Function::
                          TFunctionRefCaller<`FPCGElevationIsolinesElement::ExecuteInternal'::__l36::<lambda_3>,double,int,int>
                          ::Call;
              PCGSpatialAlgo::MarchingSquares
                        (&local_5f0,(int)local_598,(int)uVar48,auVar94._0_8_,
                         (TFunctionRef<double___cdecl(int,int)> *)&local_568,true);
              uVar50 = (ulonglong)local_5f0.ArrayNum;
              local_658 = local_5f0.ArrayNum;
              pFVar53 = (FPCGMarchingSquareResult *)
                        (local_5f0.AllocatorInstance.Data + uVar50 * 0x18);
              FVar62.Data = local_5f0.AllocatorInstance.Data;
              local_640 = pFVar53;
              while( true ) {
                uVar59 = 0;
                local_6b0 = (FPCGMarchingSquareResult *)FVar62.Data;
                if (local_5f0.ArrayNum != (uint)uVar50) {
                  local_6bf = 0;
                  `TCheckedPointerIterator<PCGSpatialAlgo::FPCGMarchingSquareResult,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_6bf);
                }
                if ((FPCGMarchingSquareResult *)FVar62.Data == pFVar53) break;
                if (1 < (((FPCGMarchingSquareResult *)FVar62.Data)->LinkedGridCoordinates).ArrayNum)
                {
                  bVar31 = CpuChannel->Enabled < 0;
                  if (bVar31) {
                    local_6d6 = '\0';
                  }
                  else {
                    local_6d6 = '\x01';
                    FCpuProfilerTrace::GetOrCreateSpecId
                              (&::__CpuProfilerEventSpecId150,
                               "FPCGElevationIsolinesElement::Execute::CreateOutputData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGElevationIsolines.cpp"
                               ,0x96);
                    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId150);
                  }
                  FVar62.Data = local_688.AllocatorInstance.Data;
                  local_670 = (int)uVar48;
                  lVar56 = (longlong)local_688.ArrayNum;
                  local_668.Data = (FScriptContainerElement *)0x0;
                  local_660 = local_688.ArrayNum;
                  uVar65 = 0;
                  if (local_688.ArrayNum == 0) {
                    local_65c = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x30,0x10,local_688.ArrayNum,0,&local_668,local_688.ArrayNum,
                               &local_65c);
                    memcpy(local_668.Data,FVar62.Data,lVar56 * 0x30);
                  }
                  FVar62.Data = (FScriptContainerElement *)local_6b0;
                  local_6d0.Data = (FScriptContainerElement *)0x0;
                  local_6c8 = 0;
                  uVar66 = (local_6b0->LinkedGridCoordinates).ArrayNum;
                  dVar95 = pUVar38->Resolution * pUVar38->Resolution * dVar95;
                  if ((int)uVar66 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar66);
                  }
                  if (0 < (int)uVar66) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x60,0x10,uVar66,&local_6d0,0,(int *)((longlong)&local_6c8 + 4));
                  }
                  pUVar38 = local_6b8;
                  iVar35 = (((FPCGMarchingSquareResult *)FVar62.Data)->LinkedGridCoordinates).
                           ArrayNum;
                  cVar51 = !bVar31;
                  if (0 < iVar35) {
                    fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                    fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                    fVar91 = GlobalVectorConstants::Float0001.m128_f32[2];
                    fVar92 = GlobalVectorConstants::Float0001.m128_f32[3];
                    local_690 = (FPCGTaggedData *)0x0;
                    uVar48 = uVar59;
                    _Var89 = GlobalVectorConstants::Float1110;
                    do {
                      pFVar44 = local_690;
                      uVar55 = (uint)uVar48;
                      uVar66 = uVar65;
                      if ((int)uVar55 < iVar35) {
                        uVar66 = ~uVar55 >> 0x1f;
                      }
                      if (uVar66 == 0) {
                        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar31) {
                          pcVar6 = (code *)swi(3);
                          uVar32 = (*pcVar6)();
                          return (bool)uVar32;
                        }
                        fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                        fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                        fVar91 = GlobalVectorConstants::Float0001.m128_f32[2];
                        fVar92 = GlobalVectorConstants::Float0001.m128_f32[3];
                        _Var89 = GlobalVectorConstants::Float1110;
                      }
                      auVar79 = *(undefined1 (*) [16])
                                 ((((FPCGMarchingSquareResult *)FVar62.Data)->LinkedGridCoordinates)
                                  .AllocatorInstance.Data + (longlong)pFVar44);
                      uVar7 = auVar79._8_4_;
                      uVar8 = auVar79._12_4_;
                      local_288._8_4_ = SUB84((double)fVar90,0);
                      local_288._0_8_ = (double)fVar97;
                      local_288._12_4_ = (int)((ulonglong)(double)fVar90 >> 0x20);
                      dVar88 = auVar79._0_8_;
                      local_258 = auVar94._0_8_;
                      dStack_250 = 0.0;
                      auVar16._4_8_ = auVar98._8_8_;
                      auVar16._0_4_ = auVar79._4_4_;
                      auVar93._0_8_ = auVar16._0_8_ << 0x20;
                      auVar93._8_4_ = uVar7;
                      auVar93._12_4_ = uVar8;
                      local_278._8_4_ = SUB84((double)fVar92,0);
                      local_278._0_8_ = (double)fVar91;
                      local_278._12_4_ = (int)((ulonglong)(double)fVar92 >> 0x20);
                      dVar67 = auVar93._8_8_;
                      uVar96 = auVar79._8_8_;
                      auVar98._8_8_ = uVar96;
                      auVar98._0_8_ = dVar67;
                      local_268 = dVar88 * (double)local_5e0._0_8_ + local_5c8;
                      dStack_260 = (double)local_5e0._8_8_ * dVar67 + dStack_5c0;
                      local_248._8_4_ = SUB84((double)_Var89.m128_f32[1],0);
                      local_248._0_8_ = (double)_Var89.m128_f32[0];
                      local_248._12_4_ = (int)((ulonglong)(double)_Var89.m128_f32[1] >> 0x20);
                      local_238._8_4_ = SUB84((double)_Var89.m128_f32[3],0);
                      local_238._0_8_ = (double)_Var89.m128_f32[2];
                      local_238._12_4_ = (int)((ulonglong)(double)_Var89.m128_f32[3] >> 0x20);
                      if (pUVar38->bProjectSurfaceNormal != false) {
                        auVar78._0_8_ = dVar88 * dVar27;
                        auVar78._8_8_ = uVar96;
                        dVar82 = dVar67 * dVar27;
                        uVar60 = (int)((longlong)
                                       ROUND(auVar78._0_8_ - (double)CONCAT44(uVar100,uVar99)) >> 1)
                                 * local_670 +
                                 (int)((longlong)ROUND(dVar82 - (double)CONCAT44(uVar100,uVar99)) >>
                                      1);
                        uVar54 = -((int)((longlong)ROUND(dVar28 - auVar78._0_8_) >> 1) * local_670 +
                                  (int)((longlong)ROUND(dVar28 - dVar82) >> 1));
                        uVar66 = uVar65;
                        if ((int)uVar60 < local_660) {
                          uVar66 = ~uVar60 >> 0x1f;
                        }
                        if (uVar66 == 0) {
                          bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar31) {
                            pcVar6 = (code *)swi(3);
                            uVar32 = (*pcVar6)();
                            return (bool)uVar32;
                          }
                          fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                          fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                          fVar91 = GlobalVectorConstants::Float0001.m128_f32[2];
                          fVar92 = GlobalVectorConstants::Float0001.m128_f32[3];
                          _Var89 = GlobalVectorConstants::Float1110;
                        }
                        local_518 = *(undefined1 (*) [16])
                                     (local_668.Data + (longlong)(int)uVar60 * 0x30 + 0x10);
                        local_508 = *(undefined1 (*) [16])
                                     (local_668.Data + (longlong)(int)uVar60 * 0x30 + 0x20);
                        if (uVar60 != uVar54) {
                          lVar56 = (longlong)dVar88;
                          FVar58.Data = local_668.Data;
                          dVar82 = dVar88;
                          if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != dVar88)) {
                            auVar9._8_4_ = auVar79._0_4_;
                            auVar9._0_8_ = dVar88;
                            auVar9._12_4_ = auVar79._4_4_;
                            uVar66 = movmskpd((int)local_668.Data,auVar9);
                            FVar58.Data = (FScriptContainerElement *)(ulonglong)(uVar66 & 1);
                            dVar82 = (double)(lVar56 - (longlong)FVar58.Data);
                          }
                          dVar88 = dVar88 - dVar82;
                          uVar66 = SUB84(dVar88,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                          uVar60 = (uint)((ulonglong)dVar88 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                          if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar60,uVar66) &&
                              (double)CONCAT44(uVar60,uVar66) != __real_3e45798ee2308c3a) {
                            auVar98._8_4_ = uVar7;
                            auVar98._0_8_ = dVar88;
                            auVar98._12_4_ = uVar8;
                          }
                          else {
                            lVar56 = (longlong)dVar67;
                            dVar88 = dVar67;
                            if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != dVar67)) {
                              auVar10._8_4_ = uVar7;
                              auVar10._0_8_ = dVar67;
                              auVar10._12_4_ = uVar8;
                              uVar66 = movmskpd((int)FVar58.Data,auVar10);
                              dVar88 = (double)(longlong)(lVar56 - (ulonglong)(uVar66 & 1));
                            }
                            auVar98._0_8_ = dVar67 - dVar88;
                          }
                          uVar66 = uVar65;
                          if ((int)uVar54 < local_660) {
                            uVar66 = ~uVar54 >> 0x1f;
                          }
                          if ((uVar66 == 0) &&
                             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar31)) {
                            pcVar6 = (code *)swi(3);
                            uVar32 = (*pcVar6)();
                            return (bool)uVar32;
                          }
                          pTVar43 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                              (&local_2e8,(TQuat<double> *)local_518,
                                               (TQuat<double> *)
                                               (local_668.Data + (longlong)(int)uVar54 * 0x30 + 0x10
                                               ),auVar98._0_8_);
                          fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                          fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                          fVar91 = GlobalVectorConstants::Float0001.m128_f32[2];
                          fVar92 = GlobalVectorConstants::Float0001.m128_f32[3];
                          dVar82 = pTVar43->X;
                          dVar68 = pTVar43->Y;
                          dVar76 = pTVar43->Z;
                          dVar83 = pTVar43->W;
                          local_4f8 = dVar26;
                          dVar67 = dVar82 * dVar82 + dVar76 * dVar76;
                          dVar75 = dVar68 * dVar68 + dVar83 * dVar83;
                          dVar88 = dVar75 + dVar67;
                          dVar67 = dVar67 + dVar75;
                          auVar11._8_4_ = SUB84(dVar67,0);
                          auVar11._0_8_ = dVar88;
                          auVar11._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
                          auVar79 = sqrtpd(auVar78,auVar11);
                          uVar50 = -(ulonglong)(dVar26 <= dVar88);
                          uVar64 = -(ulonglong)(dVar26 <= dVar67);
                          auVar93 = divpd((undefined1  [16])
                                          GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar79);
                          uVar66 = (uint)(uVar50 >> 0x20);
                          uVar54 = (uint)(uVar64 >> 0x20);
                          auVar69._0_4_ = ~(uint)uVar50 & SUB84((double)fVar97,0);
                          auVar69._4_4_ = ~uVar66 & (uint)((ulonglong)(double)fVar97 >> 0x20);
                          auVar69._8_4_ = ~(uint)uVar64 & SUB84((double)fVar90,0);
                          auVar69._12_4_ = ~uVar54 & (uint)((ulonglong)(double)fVar90 >> 0x20);
                          local_518._0_8_ = uVar50 & (ulonglong)(auVar93._0_8_ * dVar82);
                          uVar48 = uVar64 & (ulonglong)(auVar93._8_8_ * dVar68);
                          local_518._8_4_ = (undefined4)uVar48;
                          local_518._12_4_ = (undefined4)(uVar48 >> 0x20);
                          local_518 = local_518 | auVar69;
                          auVar79 = divpd((undefined1  [16])
                                          GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar79);
                          auVar70._0_8_ = (ulonglong)(auVar79._0_8_ * dVar76) & uVar50;
                          uVar48 = (ulonglong)(auVar79._8_8_ * dVar83) & uVar64;
                          auVar70._8_4_ = (undefined4)uVar48;
                          auVar70._12_4_ = (undefined4)(uVar48 >> 0x20);
                          local_508._0_4_ = ~(uint)uVar50 & SUB84((double)fVar91,0);
                          local_508._4_4_ = ~uVar66 & (uint)((ulonglong)(double)fVar91 >> 0x20);
                          local_508._8_4_ = ~(uint)uVar64 & SUB84((double)fVar92,0);
                          local_508._12_4_ = ~uVar54 & (uint)((ulonglong)(double)fVar92 >> 0x20);
                          local_508 = local_508 | auVar70;
                          _Var89 = GlobalVectorConstants::Float1110;
                          local_368 = local_518;
                          local_358 = local_508;
                        }
                        local_288 = local_518;
                        local_278 = local_508;
                        FVar62.Data = (FScriptContainerElement *)local_6b0;
                      }
                      if ((int)local_6c8 == 0) {
LAB_149b7f22a:
                        if (((local_6d0.Data <= (FScriptContainerElement *)local_288) &&
                            ((FScriptContainerElement *)local_288 <
                             local_6d0.Data + (longlong)local_6c8._4_4_ * 0x60)) &&
                           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar31)) {
                          pcVar6 = (code *)swi(3);
                          uVar32 = (*pcVar6)();
                          return (bool)uVar32;
                        }
                        if ((int)local_6c8 == local_6c8._4_4_) {
                          iVar35 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x1060,&local_6d0,(int *)((longlong)&local_6c8 + 4));
                          local_6c8 = CONCAT44(local_6c8._4_4_,iVar35);
                        }
                        lVar56 = (longlong)(int)local_6c8;
                        local_6c8 = CONCAT44(local_6c8._4_4_,(int)local_6c8 + 1);
                        lVar56 = lVar56 * 0x60;
                        *(undefined8 *)(local_6d0.Data + lVar56) = local_288._0_8_;
                        *(undefined8 *)(local_6d0.Data + lVar56 + 8) = local_288._8_8_;
                        *(undefined8 *)(local_6d0.Data + lVar56 + 0x10) = local_278._0_8_;
                        *(undefined8 *)(local_6d0.Data + lVar56 + 0x10 + 8) = local_278._8_8_;
                        *(double *)(local_6d0.Data + lVar56 + 0x20) = local_268;
                        *(double *)(local_6d0.Data + lVar56 + 0x20 + 8) = dStack_260;
                        *(double *)(local_6d0.Data + lVar56 + 0x30) = local_258;
                        *(double *)(local_6d0.Data + lVar56 + 0x30 + 8) = dStack_250;
                        *(undefined8 *)(local_6d0.Data + lVar56 + 0x40) = local_248._0_8_;
                        *(undefined8 *)(local_6d0.Data + lVar56 + 0x40 + 8) = local_248._8_8_;
                        *(undefined8 *)(local_6d0.Data + lVar56 + 0x50) = local_238._0_8_;
                        *(undefined8 *)(local_6d0.Data + lVar56 + 0x50 + 8) = local_238._8_8_;
LAB_149b7f328:
                        fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                        fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                        fVar91 = GlobalVectorConstants::Float0001.m128_f32[2];
                        fVar92 = GlobalVectorConstants::Float0001.m128_f32[3];
                        _Var89 = GlobalVectorConstants::Float1110;
                      }
                      else {
                        uVar66 = uVar65;
                        if ((int)((int)local_6c8 - 1U) < (int)local_6c8) {
                          uVar66 = ~((int)local_6c8 - 1U) >> 0x1f;
                        }
                        if (uVar66 == 0) {
                          bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar31) {
                            pcVar6 = (code *)swi(3);
                            uVar32 = (*pcVar6)();
                            return (bool)uVar32;
                          }
                          fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                          fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                          fVar91 = GlobalVectorConstants::Float0001.m128_f32[2];
                          fVar92 = GlobalVectorConstants::Float0001.m128_f32[3];
                          _Var89 = GlobalVectorConstants::Float1110;
                        }
                        local_3e8 = local_268;
                        dStack_3e0 = dStack_260;
                        local_3d8 = local_258;
                        pFVar57 = local_6d0.Data + (longlong)((int)local_6c8 + -1) * 0x60;
                        local_3d0 = *(double *)(pFVar57 + 0x20);
                        dStack_3c8 = *(double *)(pFVar57 + 0x28);
                        local_3c0 = *(double *)(pFVar57 + 0x30);
                        auVar86._0_8_ =
                             (dStack_260 - dStack_3c8) * (dStack_260 - dStack_3c8) +
                             (local_268 - local_3d0) * (local_268 - local_3d0) +
                             (local_258 - local_3c0) * (local_258 - local_3c0);
                        auVar86._8_8_ = dStack_260;
                        bVar31 = dVar95 <= auVar86._0_8_;
                        if (bVar31) {
                          auVar98._8_8_ = uStack_550;
                          auVar98._0_8_ = (double)local_558;
                          dVar88 = ___xmm_3fe00000000000003fe0000000000000;
                          dVar67 = _UNK_150689678;
                        }
                        else {
                          local_488.X = (double)local_288._0_8_;
                          local_488.Y = (double)local_288._8_8_;
                          local_468.Z = *(double *)(pFVar57 + 0x10);
                          local_468.W = *(double *)(pFVar57 + 0x18);
                          local_488.Z = (double)local_278._0_8_;
                          local_488.W = (double)local_278._8_8_;
                          local_468.X = *(double *)pFVar57;
                          local_468.Y = *(double *)(pFVar57 + 8);
                          pTVar43 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                              (&local_2c8,&local_468,&local_488,
                                               (double)CONCAT44(uVar100,uVar99));
                          dVar67 = _UNK_150689678;
                          dVar88 = ___xmm_3fe00000000000003fe0000000000000;
                          _Var89 = GlobalVectorConstants::Float0001;
                          auVar98._8_8_ = uStack_550;
                          auVar98._0_8_ = (double)local_558;
                          dVar76 = pTVar43->X;
                          dVar83 = pTVar43->Y;
                          uVar2 = pTVar43->Z;
                          uVar4 = pTVar43->W;
                          local_4e8 = dVar26;
                          dVar68 = dVar76 * dVar76 + (double)uVar2 * (double)uVar2;
                          dVar75 = dVar83 * dVar83 + (double)uVar4 * (double)uVar4;
                          dVar82 = dVar75 + dVar68;
                          dVar68 = dVar68 + dVar75;
                          auVar12._8_4_ = SUB84(dVar68,0);
                          auVar12._0_8_ = dVar82;
                          auVar12._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
                          auVar79 = sqrtpd(auVar86,auVar12);
                          uVar50 = -(ulonglong)(dVar26 <= dVar82);
                          uVar64 = -(ulonglong)(dVar26 <= dVar68);
                          uVar66 = (uint)(uVar50 >> 0x20);
                          uVar54 = (uint)(uVar64 >> 0x20);
                          auVar93 = divpd((undefined1  [16])
                                          GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar79);
                          local_348._0_8_ = uVar50 & (ulonglong)(auVar93._0_8_ * dVar76);
                          uVar48 = uVar64 & (ulonglong)(auVar93._8_8_ * dVar83);
                          local_348._8_4_ = (undefined4)uVar48;
                          local_348._12_4_ = (undefined4)(uVar48 >> 0x20);
                          auVar71._0_4_ =
                               ~(uint)uVar50 &
                               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                          auVar71._4_4_ =
                               ~uVar66 & (uint)((ulonglong)
                                                (double)GlobalVectorConstants::Float0001.m128_f32[0]
                                               >> 0x20);
                          auVar71._8_4_ =
                               ~(uint)uVar64 &
                               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                          auVar71._12_4_ =
                               ~uVar54 & (uint)((ulonglong)
                                                (double)GlobalVectorConstants::Float0001.m128_f32[1]
                                               >> 0x20);
                          local_348 = local_348 | auVar71;
                          auVar79 = divpd((undefined1  [16])
                                          GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar79);
                          *(undefined1 (*) [16])pFVar57 = local_348;
                          dVar82 = (double)_Var89.m128_f32[2];
                          dVar68 = (double)_Var89.m128_f32[3];
                          auVar72._0_8_ = (ulonglong)(auVar79._0_8_ * (double)uVar2) & uVar50;
                          uVar48 = (ulonglong)(auVar79._8_8_ * (double)uVar4) & uVar64;
                          auVar72._8_4_ = (undefined4)uVar48;
                          auVar72._12_4_ = (undefined4)(uVar48 >> 0x20);
                          local_338._0_4_ = ~(uint)uVar50 & SUB84(dVar82,0);
                          local_338._4_4_ = ~uVar66 & (uint)((ulonglong)dVar82 >> 0x20);
                          local_338._8_4_ = ~(uint)uVar64 & SUB84(dVar68,0);
                          local_338._12_4_ = ~uVar54 & (uint)((ulonglong)dVar68 >> 0x20);
                          local_338 = local_338 | auVar72;
                          *(undefined1 (*) [16])(pFVar57 + 0x10) = local_338;
                          dVar82 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
                          dVar83 = (double)(float)uStack_550;
                          dVar75 = (double)(float)((ulonglong)uStack_550 >> 0x20);
                          dVar68 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
                          auVar80._0_8_ =
                               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar88) *
                               *(double *)(pFVar57 + 0x20) + dVar88 * local_268;
                          auVar80._8_8_ =
                               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar67) *
                               *(double *)(pFVar57 + 0x28) + dVar67 * dStack_260;
                          *(undefined1 (*) [16])(pFVar57 + 0x20) = auVar80;
                          *(double *)(pFVar57 + 0x30) =
                               (dVar82 - dVar83) * *(double *)(pFVar57 + 0x30) + dVar83 * local_258;
                          *(double *)(pFVar57 + 0x38) =
                               (dVar68 - dVar75) * *(double *)(pFVar57 + 0x38) + dVar75 * dStack_250
                          ;
                          dVar76 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
                          dVar82 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
                          dVar68 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
                          *(double *)(pFVar57 + 0x40) =
                               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar88) *
                               *(double *)(pFVar57 + 0x40) + dVar88 * (double)local_248._0_8_;
                          *(double *)(pFVar57 + 0x48) =
                               (dVar76 - dVar67) * *(double *)(pFVar57 + 0x48) +
                               dVar67 * (double)local_248._8_8_;
                          dVar68 = (dVar68 - dVar75) * *(double *)(pFVar57 + 0x58) +
                                   dVar75 * (double)local_238._8_8_;
                          auVar13._8_4_ = SUB84(dVar68,0);
                          auVar13._0_8_ =
                               (dVar82 - dVar83) * *(double *)(pFVar57 + 0x50) +
                               dVar83 * (double)local_238._0_8_;
                          auVar13._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
                          *(undefined1 (*) [16])(pFVar57 + 0x50) = auVar13;
                          fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                          fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                          fVar91 = GlobalVectorConstants::Float0001.m128_f32[2];
                          fVar92 = GlobalVectorConstants::Float0001.m128_f32[3];
                          _Var89 = GlobalVectorConstants::Float1110;
                        }
                        if ((((FPCGMarchingSquareResult *)FVar62.Data)->bClosed != false) &&
                           (uVar55 == (((FPCGMarchingSquareResult *)FVar62.Data)->
                                      LinkedGridCoordinates).ArrayNum - 1U)) {
                          pFVar61 = (FScriptContainerElement *)local_288;
                          if (!bVar31) {
                            pFVar61 = pFVar57;
                          }
                          if ((int)local_6c8 < 1) {
                            bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               );
                            if (bVar33) {
                              pcVar6 = (code *)swi(3);
                              uVar32 = (*pcVar6)();
                              return (bool)uVar32;
                            }
                            fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                            fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                            fVar91 = GlobalVectorConstants::Float0001.m128_f32[2];
                            fVar92 = GlobalVectorConstants::Float0001.m128_f32[3];
                            _Var89 = GlobalVectorConstants::Float1110;
                          }
                          FVar58.Data = local_6d0.Data;
                          local_3b8 = *(double *)(pFVar61 + 0x20);
                          dStack_3b0 = *(double *)(pFVar61 + 0x28);
                          local_3a8 = *(double *)(pFVar61 + 0x30);
                          local_3a0 = *(double *)(local_6d0.Data + 0x20);
                          dStack_398 = *(double *)(local_6d0.Data + 0x28);
                          local_390 = *(double *)(local_6d0.Data + 0x30);
                          auVar87._0_8_ =
                               (dStack_3b0 - dStack_398) * (dStack_3b0 - dStack_398) +
                               (local_3b8 - local_3a0) * (local_3b8 - local_3a0) +
                               (local_3a8 - local_390) * (local_3a8 - local_390);
                          auVar87._8_8_ = dStack_3b0;
                          FVar62.Data = (FScriptContainerElement *)local_6b0;
                          if (dVar95 <= auVar87._0_8_) goto LAB_149b7f221;
                          local_448.X = *(double *)pFVar61;
                          local_448.Y = *(double *)(pFVar61 + 8);
                          local_448.Z = *(double *)(pFVar61 + 0x10);
                          local_448.W = *(double *)(pFVar61 + 0x18);
                          local_428.X = *(double *)local_6d0.Data;
                          local_428.Y = *(double *)(local_6d0.Data + 8);
                          local_428.Z = *(double *)(local_6d0.Data + 0x10);
                          local_428.W = *(double *)(local_6d0.Data + 0x18);
                          pTVar43 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                              (&local_2a8,&local_428,&local_448,
                                               (double)CONCAT44(uVar100,uVar99));
                          _Var89 = GlobalVectorConstants::Float0001;
                          local_4f0 = dVar26;
                          dVar76 = pTVar43->X;
                          dVar83 = pTVar43->Y;
                          uVar3 = pTVar43->Z;
                          uVar5 = pTVar43->W;
                          dVar68 = dVar76 * dVar76 + (double)uVar3 * (double)uVar3;
                          dVar75 = dVar83 * dVar83 + (double)uVar5 * (double)uVar5;
                          dVar82 = dVar75 + dVar68;
                          dVar68 = dVar68 + dVar75;
                          auVar14._8_4_ = SUB84(dVar68,0);
                          auVar14._0_8_ = dVar82;
                          auVar14._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
                          auVar79 = sqrtpd(auVar87,auVar14);
                          uVar50 = -(ulonglong)(dVar26 <= dVar82);
                          uVar64 = -(ulonglong)(dVar26 <= dVar68);
                          uVar66 = (uint)(uVar50 >> 0x20);
                          uVar54 = (uint)(uVar64 >> 0x20);
                          auVar93 = divpd((undefined1  [16])
                                          GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar79);
                          local_328._0_8_ = uVar50 & (ulonglong)(auVar93._0_8_ * dVar76);
                          uVar48 = uVar64 & (ulonglong)(auVar93._8_8_ * dVar83);
                          local_328._8_4_ = (undefined4)uVar48;
                          local_328._12_4_ = (undefined4)(uVar48 >> 0x20);
                          auVar73._0_4_ =
                               ~(uint)uVar50 &
                               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                          auVar73._4_4_ =
                               ~uVar66 & (uint)((ulonglong)
                                                (double)GlobalVectorConstants::Float0001.m128_f32[0]
                                               >> 0x20);
                          auVar73._8_4_ =
                               ~(uint)uVar64 &
                               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                          auVar73._12_4_ =
                               ~uVar54 & (uint)((ulonglong)
                                                (double)GlobalVectorConstants::Float0001.m128_f32[1]
                                               >> 0x20);
                          local_328 = local_328 | auVar73;
                          auVar79 = divpd((undefined1  [16])
                                          GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar79);
                          *(undefined1 (*) [16])FVar58.Data = local_328;
                          dVar82 = (double)_Var89.m128_f32[2];
                          dVar68 = (double)_Var89.m128_f32[3];
                          auVar74._0_8_ = (ulonglong)(auVar79._0_8_ * (double)uVar3) & uVar50;
                          uVar48 = (ulonglong)(auVar79._8_8_ * (double)uVar5) & uVar64;
                          auVar74._8_4_ = (undefined4)uVar48;
                          auVar74._12_4_ = (undefined4)(uVar48 >> 0x20);
                          local_318._0_4_ = ~(uint)uVar50 & SUB84(dVar82,0);
                          local_318._4_4_ = ~uVar66 & (uint)((ulonglong)dVar82 >> 0x20);
                          local_318._8_4_ = ~(uint)uVar64 & SUB84(dVar68,0);
                          local_318._12_4_ = ~uVar54 & (uint)((ulonglong)dVar68 >> 0x20);
                          local_318 = local_318 | auVar74;
                          *(undefined1 (*) [16])(FVar58.Data + 0x10) = local_318;
                          dVar76 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
                          dVar84 = (double)auVar98._8_4_;
                          dVar85 = (double)auVar98._12_4_;
                          dVar83 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
                          auVar81._0_8_ =
                               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar88) *
                               *(double *)(FVar58.Data + 0x20) +
                               dVar88 * *(double *)(pFVar61 + 0x20);
                          auVar81._8_8_ =
                               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar67) *
                               *(double *)(FVar58.Data + 0x28) +
                               dVar67 * *(double *)(pFVar61 + 0x28);
                          dVar82 = *(double *)(pFVar61 + 0x30);
                          dVar68 = *(double *)(pFVar61 + 0x38);
                          *(undefined1 (*) [16])(FVar58.Data + 0x20) = auVar81;
                          *(double *)(FVar58.Data + 0x30) =
                               (dVar76 - dVar84) * *(double *)(FVar58.Data + 0x30) + dVar84 * dVar82
                          ;
                          *(double *)(FVar58.Data + 0x38) =
                               (dVar83 - dVar85) * *(double *)(FVar58.Data + 0x38) + dVar85 * dVar68
                          ;
                          dVar76 = *(double *)(pFVar61 + 0x48);
                          dVar77 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
                          dVar82 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
                          dVar68 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
                          dVar83 = *(double *)(pFVar61 + 0x50);
                          dVar75 = *(double *)(pFVar61 + 0x58);
                          *(double *)(FVar58.Data + 0x40) =
                               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar88) *
                               *(double *)(FVar58.Data + 0x40) +
                               dVar88 * *(double *)(pFVar61 + 0x40);
                          *(double *)(FVar58.Data + 0x48) =
                               (dVar77 - dVar67) * *(double *)(FVar58.Data + 0x48) + dVar67 * dVar76
                          ;
                          dVar88 = (dVar68 - dVar85) * *(double *)(FVar58.Data + 0x58) +
                                   dVar85 * dVar75;
                          auVar15._8_4_ = SUB84(dVar88,0);
                          auVar15._0_8_ =
                               (dVar82 - dVar84) * *(double *)(FVar58.Data + 0x50) + dVar84 * dVar83
                          ;
                          auVar15._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
                          *(undefined1 (*) [16])(FVar58.Data + 0x50) = auVar15;
                          FVar62.Data = (FScriptContainerElement *)local_6b0;
                          if (!bVar31) {
                            if ((int)local_6c8 < 1) {
                              bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 );
                              if (bVar31) {
                                pcVar6 = (code *)swi(3);
                                uVar32 = (*pcVar6)();
                                return (bool)uVar32;
                              }
                            }
                            iVar34 = ((int)local_6c8 - ((int)local_6c8 + -1)) + -1;
                            iVar35 = (int)local_6c8;
                            if (iVar34 != 0) {
                              memmove(local_6d0.Data + (longlong)((int)local_6c8 + -1) * 0x60,
                                      local_6d0.Data + (longlong)((int)local_6c8 + -1) * 0x60 + 0x60
                                      ,(longlong)iVar34 * 0x60);
                              iVar35 = (int)local_6c8;
                            }
                            local_6c8 = CONCAT44(local_6c8._4_4_,iVar35 + -1);
                            UE::Core::Private::
                            ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x60,0x10,&local_6d0,iVar35 + -1,
                                       (int *)((longlong)&local_6c8 + 4));
                            FVar62.Data = (FScriptContainerElement *)local_6b0;
                          }
                          goto LAB_149b7f328;
                        }
LAB_149b7f221:
                        if (bVar31) goto LAB_149b7f22a;
                      }
                      uVar48 = (ulonglong)(uVar55 + 1);
                      iVar35 = (((FPCGMarchingSquareResult *)FVar62.Data)->LinkedGridCoordinates).
                               ArrayNum;
                      local_690 = (FPCGTaggedData *)((longlong)local_690 + 0x10);
                    } while ((int)(uVar55 + 1) < iVar35);
                    auVar94._8_8_ = 0;
                    auVar94._0_8_ = local_678;
                    FVar58.Data = (FScriptContainerElement *)local_628;
                    cVar51 = local_6d6;
                  }
                  pFVar30 = local_638;
                  if ((int)local_6c8 < 2) {
                    if (local_6d0.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_6d0.Data);
                    }
                    pUVar38 = local_6b8;
                    uVar48 = local_648;
                    pFVar53 = local_640;
                    if (local_668.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_668.Data);
                      pUVar38 = local_6b8;
                      uVar48 = local_648;
                      pFVar53 = local_640;
                    }
                  }
                  else {
                    piVar1 = &(local_638->OutputData).TaggedData.ArrayMax;
                    iVar35 = (local_638->OutputData).TaggedData.ArrayNum;
                    if (iVar35 == *piVar1) {
                      iVar35 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x878,(ForAnyElementType *)&local_638->OutputData,piVar1);
                    }
                    (pFVar30->OutputData).TaggedData.ArrayNum = iVar35 + 1;
                    pFVar44 = FPCGTaggedData::FPCGTaggedData
                                        ((FPCGTaggedData *)
                                         ((pFVar30->OutputData).TaggedData.AllocatorInstance.Data +
                                         (longlong)iVar35 * 0x78),(FPCGTaggedData *)FVar58.Data);
                    pUVar38 = local_6b8;
                    pFVar44->Pin = PCGPinConstants::DefaultOutputLabel;
                    local_690 = pFVar44;
                    if (local_6b8->bAddTagOnOutputForSameElevation != false) {
                      ::FString::PrintfImpl(&local_548,L"ElevationIdx_%d");
                      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                      Emplace<FString>(&pFVar44->Tags,(FString *)local_5a8,(bool *)&local_548);
                      if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_548.Data.AllocatorInstance.Data);
                      }
                    }
                    if (pUVar38->bOutputAsSpline == false) {
                      pUVar47 = FPCGContext::NewPointData_AnyThread(pFVar30);
                      (**(code **)(pUVar47->_padding_ + 0x490))(pUVar47,local_6c8 & 0xffffffff,1);
                      (**(code **)(pUVar47->_padding_ + 0x550))(pUVar47,&local_228);
                      (**(code **)(pUVar47->_padding_ + 0x558))(pUVar47,&local_210);
                      (**(code **)(pUVar47->_padding_ + 0x498))(pUVar47,1);
                      (**(code **)(pUVar47->_padding_ + 0x4c0))(pUVar47,&local_158,0);
                      uVar48 = uVar59;
                      if (0 < (int)local_6c8) {
                        do {
                          uVar55 = (uint)uVar59;
                          uVar66 = uVar65;
                          if ((int)uVar55 < (int)local_6c8) {
                            uVar66 = ~uVar55 >> 0x1f;
                          }
                          if ((uVar66 == 0) &&
                             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar31)) {
                            pcVar6 = (code *)swi(3);
                            uVar32 = (*pcVar6)();
                            return (bool)uVar32;
                          }
                          uVar96 = *(undefined8 *)(local_6d0.Data + uVar48);
                          uVar17 = *(undefined8 *)(local_6d0.Data + uVar48 + 8);
                          uVar18 = *(undefined8 *)(local_6d0.Data + uVar48 + 0x10);
                          uVar19 = *(undefined8 *)(local_6d0.Data + uVar48 + 0x10 + 8);
                          uVar20 = *(undefined8 *)(local_6d0.Data + uVar48 + 0x20);
                          uVar21 = *(undefined8 *)(local_6d0.Data + uVar48 + 0x20 + 8);
                          auVar98 = *(undefined1 (*) [16])(local_6d0.Data + uVar48 + 0x30);
                          uVar22 = *(undefined8 *)(local_6d0.Data + uVar48 + 0x40);
                          uVar23 = *(undefined8 *)(local_6d0.Data + uVar48 + 0x40 + 8);
                          uVar24 = *(undefined8 *)(local_6d0.Data + uVar48 + 0x50);
                          uVar25 = *(undefined8 *)(local_6d0.Data + uVar48 + 0x50 + 8);
                          uVar66 = uVar65;
                          if ((int)uVar55 < local_148) {
                            uVar66 = ~uVar55 >> 0x1f;
                          }
                          if ((uVar66 == 0) &&
                             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < NumElements)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                 ), bVar31)) {
                            pcVar6 = (code *)swi(3);
                            uVar32 = (*pcVar6)();
                            return (bool)uVar32;
                          }
                          if (uVar55 == (int)uVar55 % local_14c) {
                            puVar49 = (undefined8 *)
                                      ((longlong)((int)uVar55 % local_14c) * (longlong)local_150 +
                                      local_158);
                          }
                          else {
                            puVar49 = local_138;
                          }
                          *puVar49 = uVar96;
                          puVar49[1] = uVar17;
                          uVar59 = (ulonglong)(uVar55 + 1);
                          puVar49[2] = uVar18;
                          puVar49[3] = uVar19;
                          puVar49[4] = uVar20;
                          puVar49[5] = uVar21;
                          *(undefined1 (*) [16])(puVar49 + 6) = auVar98;
                          puVar49[8] = uVar22;
                          puVar49[9] = uVar23;
                          puVar49[10] = uVar24;
                          puVar49[0xb] = uVar25;
                          uVar48 = uVar48 + 0x60;
                        } while ((int)(uVar55 + 1) < (int)local_6c8);
                      }
                      FPCGDataPtrWrapper::operator=(&local_690->Data,(UPCGData *)pUVar47);
                      auVar94._8_8_ = 0;
                      auVar94._0_8_ = local_678;
                      FVar62.Data = (FScriptContainerElement *)local_6b0;
                    }
                    else {
                      uVar48 = local_6c8 & 0xffffffff;
                      local_6a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_6a0.ArrayNum = 0;
                      local_6a0.ArrayMax = 0;
                      if ((int)local_6c8 < 0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::OnInvalidArrayNum(uVar48);
                      }
                      if (0 < (int)local_6c8) {
                        UE::Core::Private::
                        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x88,8,(int)local_6c8,&local_6a0.AllocatorInstance,0,
                                   &local_6a0.ArrayMax);
                        uVar48 = local_6c8 & 0xffffffff;
                      }
                      pUVar38 = local_6b8;
                      iVar35 = (int)uVar48;
                      pFVar57 = local_6d0.Data + (longlong)iVar35 * 0x60;
                      FVar58.Data = local_6d0.Data;
                      while( true ) {
                        if ((int)uVar48 != iVar35) {
                          local_6be[0] = 0;
                          `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='
                          ::__l2::<lambda_1>::operator()(local_6be);
                        }
                        if (FVar58.Data == pFVar57) break;
                        uVar17 = *(undefined8 *)(FVar58.Data + 0x20);
                        uVar18 = *(undefined8 *)(FVar58.Data + 0x28);
                        uVar19 = *(undefined8 *)(FVar58.Data + 0x40);
                        uVar20 = *(undefined8 *)(FVar58.Data + 0x48);
                        uVar96 = *(undefined8 *)(FVar58.Data + 0x50);
                        local_408.X = *(double *)FVar58.Data;
                        local_408.Y = *(double *)(FVar58.Data + 8);
                        local_408.Z = *(double *)(FVar58.Data + 0x10);
                        local_408.W = *(double *)(FVar58.Data + 0x18);
                        bVar31 = pUVar38->bLinearSpline;
                        local_528 = 0;
                        local_538 = uVar17;
                        uStack_530 = uVar18;
                        local_388 = uVar19;
                        uStack_380 = uVar20;
                        local_378 = uVar96;
                        pTVar45 = UE::Math::TQuat<double>::Rotator(&local_408,&local_308);
                        fVar97 = (float)local_6a0.ArrayNum;
                        auVar98 = ZEXT416((uint)fVar97);
                        iVar34 = local_6a0.ArrayNum;
                        if (local_6a0.ArrayNum == local_6a0.ArrayMax) {
                          iVar34 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x888,&local_6a0.AllocatorInstance,&local_6a0.ArrayMax
                                             );
                        }
                        local_6a0.ArrayNum = iVar34 + 1;
                        lVar56 = (longlong)iVar34 * 0x88;
                        FVar58.Data = FVar58.Data + 0x60;
                        *(undefined8 *)(local_6a0.AllocatorInstance.Data + lVar56 + 8) = uVar17;
                        *(undefined8 *)(local_6a0.AllocatorInstance.Data + lVar56 + 8 + 8) = uVar18;
                        *(undefined8 *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x18) =
                             local_528;
                        *(float *)(local_6a0.AllocatorInstance.Data + lVar56) = fVar97;
                        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                        *(double *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x20) =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                        *(undefined8 *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x20 + 8) =
                             uVar17;
                        *(double *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x30) =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                        *(double *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x38) =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                        *(undefined8 *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x38 + 8) =
                             uVar17;
                        *(double *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x48) =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                        dVar95 = pTVar45->Yaw;
                        *(double *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x50) =
                             pTVar45->Pitch;
                        *(double *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x50 + 8) = dVar95;
                        dVar95 = pTVar45->Roll;
                        *(undefined8 *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x68) = uVar19;
                        *(undefined8 *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x68 + 8) =
                             uVar20;
                        *(double *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x60) = dVar95;
                        *(undefined8 *)(local_6a0.AllocatorInstance.Data + lVar56 + 0x78) = uVar96;
                        local_6a0.AllocatorInstance.Data[lVar56 + 0x80] =
                             (FScriptContainerElement)(bVar31 == false);
                        uVar48 = local_6c8 & 0xffffffff;
                      }
                      bVar31 = IsInGameThread();
                      pFVar30 = local_638;
                      if (bVar31) {
                        pUVar46 = GetTransientPackageAsObject();
                        this_01 = NewObject<UPCGSplineData>(pUVar46);
                      }
                      else {
                        if (((local_638->AsyncState).bIsRunningOnMainThread != false) &&
                           (bVar31 = UE::Assert::Private::ExecCheckImplInternal
                                               (&bGEnsureHasExecuted<4331830188552749348>,false,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                                ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar31
                           )) {
                          pcVar6 = (code *)swi(3);
                          uVar32 = (*pcVar6)();
                          return (bool)uVar32;
                        }
                        FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_6d5);
                        pUVar46 = GetTransientPackageAsObject();
                        this_01 = NewObject<UPCGSplineData>(pUVar46);
                        FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_6d5);
                        if ((this_01 == (UPCGSplineData *)0x0) &&
                           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Object",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                                ,0x12a,L""), bVar31)) {
                          pcVar6 = (code *)swi(3);
                          uVar32 = (*pcVar6)();
                          return (bool)uVar32;
                        }
                        local_580 = this_01;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (this_01 != (UPCGSplineData *)0x0)) {
                          UE::GC::MarkAsReachable((UObject *)this_01);
                        }
                        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                        ::Emplace<TObjectPtr<UObject>_>
                                  (&pFVar30->AsyncObjects,(TObjectPtr<UObject> *)(local_5a8 + 4),
                                   (bool *)&local_580);
                      }
                      FVar62.Data = (FScriptContainerElement *)local_6b0;
                      auVar94._8_8_ = 0;
                      auVar94._0_8_ = local_678;
                      local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_590.ArrayNum = 0;
                      local_590.ArrayMax = 0;
                      local_1b8.Translation.XY.m128d_f64[0] =
                           local_678 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
                      local_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                      local_1b8.Rotation.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[0];
                      local_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                0x20);
                      local_1b8.Translation.ZW.m128d_f64[0] =
                           local_678 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
                      local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                      local_1b8.Rotation.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[2];
                      local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                0x20);
                      local_1b8.Translation.XY.m128d_f64[1] =
                           local_678 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
                      local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                      local_1b8.Scale3D.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[0];
                      local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >>
                                0x20);
                      local_1b8.Translation.ZW.m128d_f64[1] = 0.0;
                      local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                      local_1b8.Scale3D.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[2];
                      local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >>
                                0x20);
                      UPCGSplineData::Initialize
                                (this_01,&local_6a0,local_6b0->bClosed,&local_1b8,&local_590);
                      FPCGDataPtrWrapper::operator=(&local_690->Data,(UPCGData *)this_01);
                      uVar99 = (undefined4)__real_3fe0000000000000;
                      uVar100 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
                      if (local_6a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_6a0.AllocatorInstance.Data);
                      }
                    }
                    if (local_6d0.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_6d0.Data);
                    }
                    pUVar38 = local_6b8;
                    uVar48 = local_648;
                    pFVar53 = local_640;
                    if (local_668.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_668.Data);
                      pUVar38 = local_6b8;
                      uVar48 = local_648;
                      pFVar53 = local_640;
                    }
                  }
                  local_6b8 = pUVar38;
                  local_648 = uVar48;
                  local_640 = pFVar53;
                  if (cVar51 != '\0') {
                    FCpuProfilerTrace::OutputEndEvent();
                    pFVar53 = local_640;
                    uVar48 = local_648;
                    pUVar38 = local_6b8;
                  }
                }
                FVar62.Data = FVar62.Data + 0x18;
                uVar50 = (ulonglong)local_658;
                FVar58.Data = (FScriptContainerElement *)local_628;
                dVar95 = __real_3fd0000000000000;
              }
              DestructItems<PCGSpatialAlgo::FPCGMarchingSquareResult,int>
                        ((FPCGMarchingSquareResult *)local_5f0.AllocatorInstance.Data,
                         local_5f0.ArrayNum);
              if ((FPCGMarchingSquareResult *)local_5f0.AllocatorInstance.Data !=
                  (FPCGMarchingSquareResult *)0x0) {
                FMemory::Free(local_5f0.AllocatorInstance.Data);
              }
              auVar94._0_8_ = auVar94._0_8_ + pUVar38->ElevationIncrement;
              local_6a4 = local_6a4 + 1;
              local_678 = auVar94._0_8_;
            } while (auVar94._0_8_ < pUVar38->ElevationEnd);
            auVar98._8_8_ = 0;
            auVar98._0_8_ = (double)__xmm_80000000000000008000000000000000;
            param_1 = local_638;
          }
          if (local_620.AttributeList.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_620.AttributeList.Data.AllocatorInstance.Data);
          }
          if (local_688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_688.AllocatorInstance.Data);
          }
          auVar79._8_8_ = 0;
          auVar79._0_8_ = __real_3ff0000000000000;
          pFVar52 = local_630;
        }
      }
    }
    else if (local_650.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_650.Handle);
      goto LAB_149b7e47b;
    }
    FVar58.Data = FVar58.Data + 0x78;
    uVar48 = (ulonglong)local_654;
    pUVar39 = local_5b0;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_600.AllocatorInstance.Data,local_600.ArrayNum);
  if ((FPCGTaggedData *)local_600.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_600.AllocatorInstance.Data);
  }
LAB_149b7fa55:
  if (bVar63) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b88bc0

EPCGElementExecutionLoopMode __thiscall
FPCGElevationIsolinesElement::ExecutionLoopMode
          (FPCGElevationIsolinesElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98990

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
FPCGElevationIsolinesElement::SupportsBasePointDataInputs
          (FPCGElevationIsolinesElement *this,FPCGContext *param_1)

{
  return true;
}

