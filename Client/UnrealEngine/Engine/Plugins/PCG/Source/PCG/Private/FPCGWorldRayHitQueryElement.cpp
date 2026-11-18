// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// <lambda_invoker_cdecl> @ 149c3c250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGWorldRayHitQueryElement::ExecuteInternal'::__l28::<lambda_1>::<lambda_invoker_cdecl>
          (AActor *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 149c3c260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGWorldRayHitQueryElement::ExecuteInternal'::__l28::<lambda_2>::<lambda_invoker_cdecl>
          (AActor *param_1)

{
  return true;
}

// CanExecuteOnlyOnMainThread @ 149c5d6b0

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
FPCGWorldRayHitQueryElement::CanExecuteOnlyOnMainThread
          (FPCGWorldRayHitQueryElement *this,FPCGContext *param_1)

{
  UPCGWorldRayHitSettings *pUVar1;
  
  if (param_1 != (FPCGContext *)0x0) {
    pUVar1 = FPCGContext::GetInputSettings<UPCGWorldRayHitSettings>(param_1);
    if ((pUVar1 != (UPCGWorldRayHitSettings *)0x0) &&
       (((pUVar1->QueryParams)._padding_ & 0x2000) == 0)) {
      return false;
    }
  }
  return true;
}

// ExecuteInternal @ 149c73c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

bool __thiscall
FPCGWorldRayHitQueryElement::ExecuteInternal(FPCGWorldRayHitQueryElement *this,FPCGContext *param_1)

{
  int *piVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  byte *pbVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  int iVar5;
  IPCGGraphExecutionSource *pIVar6;
  ALandscapeProxy *pAVar7;
  UPCGData *pUVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [12];
  undefined7 uVar19;
  float fVar20;
  float fVar21;
  code *pcVar22;
  undefined **ppuVar23;
  UPCGWorldRayHitData *pUVar24;
  bool bVar25;
  undefined1 uVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  int iVar31;
  UPCGWorldRayHitSettings *pUVar32;
  UPCGComponent *this_01;
  UClass *pUVar33;
  longlong *plVar34;
  UWorld *pUVar35;
  UObject *pUVar36;
  UPCGWorldRayHitData *this_02;
  UPCGSubsystem *this_03;
  UPCGLandscapeCache *this_04;
  TObjectPtr<UClass>_u_0 TVar37;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar38;
  FPCGDataPtrWrapper *pFVar39;
  FText *pFVar40;
  byte bVar41;
  undefined ***pppuVar42;
  ulonglong uVar43;
  undefined ***pppuVar44;
  FPCGDataPtrWrapper *pFVar45;
  uint uVar46;
  uint uVar47;
  FScriptContainerElement *pFVar48;
  ForAnyElementType FVar49;
  bool bVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  double dVar53;
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
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar72;
  undefined1 auVar71 [16];
  undefined1 unaff_XMM6 [16];
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined4 uVar77;
  undefined1 auStackY_598 [32];
  FGCScopeGuard local_568;
  undefined1 local_567;
  undefined1 local_566 [2];
  uint local_564;
  FScriptContainerElement *local_560;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_558;
  UPCGLandscapeCache *local_548;
  FPCGContext *local_540;
  UPCGWorldRayHitSettings *local_538;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_530;
  undefined1 local_518 [72];
  int local_4d0;
  undefined4 local_4c0;
  undefined4 local_4bc;
  ForAnyElementType local_4b8;
  undefined8 local_4b0;
  undefined2 local_4a8;
  TObjectPtr<UObject> local_498;
  FName local_490;
  UPCGWorldRayHitData *local_488;
  UPCGComponent *local_480;
  FScriptContainerElement *local_478;
  undefined8 local_468;
  undefined4 uStack_460;
  uint uStack_45c;
  TArray<FName,TSizedDefaultAllocator<32>_> local_458;
  FPCGDataPtrWrapper local_448;
  FPCGDataPtrWrapper local_438;
  FText local_428;
  FText local_418;
  TArrayView<AActor_*,int> local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  undefined1 local_3e0 [16];
  double local_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  double local_3a0;
  double local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  double local_370;
  TBox<double> local_368;
  code *local_328 [2];
  undefined **local_318;
  UPCGWorldRayHitData *pUStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined ***pppuStack_300;
  code *local_2f8;
  undefined8 uStack_2f0;
  undefined **local_2e8;
  UPCGWorldRayHitData *pUStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined ***pppuStack_2d0;
  undefined1 local_2c8 [184];
  ForElementType<FSetElementId> local_210;
  int local_208;
  byte local_200;
  byte local_1ff;
  int local_1fc;
  byte local_1f8;
  int local_1f4;
  bool local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined1 local_1d0 [16];
  double local_1c0;
  double local_1b8;
  code *local_1a8 [2];
  undefined **local_198;
  code *local_190;
  undefined ***local_180;
  TVector<double>_u_0 local_178;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined4 local_147;
  undefined2 local_143;
  undefined1 local_141;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_598;
  bVar50 = -1 < CpuChannel->Enabled;
  local_540 = param_1;
  if (bVar50) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId167,"FPCGWorldRayHitQueryElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldQuery.cpp"
               ,0xa7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId167);
  }
  pUVar32 = FPCGContext::GetInputSettings<UPCGWorldRayHitSettings>(param_1);
  local_538 = pUVar32;
  if ((pUVar32 == (UPCGWorldRayHitSettings *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldQuery.cpp"
                          ,0xaa,L""), bVar25)) {
    pcVar10 = (code *)swi(3);
    uVar26 = (*pcVar10)();
    return (bool)uVar26;
  }
  FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams
            ((FPCGWorldRaycastQueryParams *)local_2c8,
             (FPCGWorldRaycastQueryParams *)&pUVar32->QueryParams);
  local_1f0 = (pUVar32->QueryParams).bOverrideDefaultParams;
  local_1e8 = *(undefined1 (*) [16])&(pUVar32->QueryParams).RayOrigin.field0_0x0;
  local_1d8 = (pUVar32->QueryParams).RayOrigin.field0_0x0._s_0.Z;
  local_1d0 = *(undefined1 (*) [16])&(pUVar32->QueryParams).RayDirection.field0_0x0;
  local_1c0 = (pUVar32->QueryParams).RayDirection.field0_0x0._s_0.Z;
  local_1b8 = (pUVar32->QueryParams).RayLength;
  if (((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar25 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar25)) &&
      (pIVar6 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar6 != (IPCGGraphExecutionSource *)0x0)) &&
     (this_01 = (UPCGComponent *)(**(code **)((longlong)*pIVar6 + 8))(),
     this_01 != (UPCGComponent *)0x0)) {
    pUVar33 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar31 = (int)pUVar33->_padding_;
    if ((iVar31 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar31 * 8) ==
        &pUVar33->_padding_)) {
      if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
          (bVar25 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar25))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                 ,0x8d,L""), bVar25)) {
        pcVar10 = (code *)swi(3);
        uVar26 = (*pcVar10)();
        return (bool)uVar26;
      }
      plVar34 = (longlong *)
                (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
      (**(code **)(*plVar34 + 0x38))(plVar34,&local_138);
      if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
          (bVar25 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar25))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                 ,0x8d,L""), bVar25)) {
        pcVar10 = (code *)swi(3);
        uVar26 = (*pcVar10)();
        return (bool)uVar26;
      }
      plVar34 = (longlong *)
                (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
      (**(code **)(*plVar34 + 0x58))(plVar34);
      if (local_1f0 == false) {
        local_380 = 0;
        uStack_378 = 0;
        dVar53 = local_368.Max.field0_0x0._s_0.Z * local_138.Scale3D.ZW.m128d_f64[0];
        dVar12 = local_138.Scale3D.ZW.m128d_f64[1] * 0.0;
        local_370 = local_368.Max.field0_0x0._s_0.Z;
        dVar69 = local_138.Scale3D.XY.m128d_f64[0] * 0.0;
        dVar72 = local_138.Scale3D.XY.m128d_f64[1] * 0.0;
        dVar15 = local_138.Rotation.ZW.m128d_f64[0];
        dVar13 = local_138.Rotation.XY.m128d_f64[1];
        auVar76 = blendpd((undefined1  [16])local_138.Rotation.XY.m128d_f64,
                          (undefined1  [16])local_138.Rotation.ZW.m128d_f64,2);
        dVar16 = local_138.Rotation.ZW.m128d_f64[1];
        dVar14 = local_138.Rotation.XY.m128d_f64[0];
        auVar54._8_4_ = SUB84(dVar72,0);
        auVar54._0_8_ = dVar69;
        auVar54._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
        dVar17 = dVar53 * dVar13 - dVar15 * dVar72;
        auVar11._8_4_ = SUB84(dVar12,0);
        auVar11._0_8_ = dVar53;
        auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar55 = blendpd(auVar54,auVar11,2);
        auVar66._8_4_ = SUB84(dVar17,0);
        auVar66._0_8_ = dVar72 * dVar14 - dVar13 * dVar69;
        auVar66._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        dVar70 = auVar76._0_8_;
        dVar73 = auVar76._8_8_;
        auVar76._0_8_ = auVar55._0_8_ * dVar15 - dVar70 * dVar53;
        auVar76._8_8_ = auVar55._8_8_ * dVar16 - dVar73 * dVar12;
        auVar55 = blendpd(auVar66,auVar76,2);
        auVar67._0_8_ = auVar55._0_8_ + auVar55._0_8_;
        auVar67._8_8_ = auVar55._8_8_ + auVar55._8_8_;
        dVar17 = dVar17 + dVar17;
        dVar12 = auVar76._0_8_ + auVar76._0_8_;
        uVar51 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar62._8_4_ = SUB84(dVar12,0);
        auVar62._0_8_ = dVar17;
        auVar62._12_4_ = uVar51;
        auVar56._8_4_ = SUB84(dVar12,0);
        auVar56._0_8_ = dVar17;
        auVar56._12_4_ = uVar51;
        auVar55 = blendpd(auVar56,auVar67,2);
        auVar63._0_8_ = auVar62._8_8_ * dVar14 - dVar17 * dVar13;
        auVar63._8_8_ = auVar67._0_8_ * dVar13 - dVar12 * dVar15;
        auVar57._0_8_ = auVar55._0_8_ * dVar15 - auVar67._0_8_ * dVar70;
        auVar57._8_8_ = auVar55._8_8_ * dVar16 - auVar67._8_8_ * dVar73;
        auVar55 = blendpd(auVar63,auVar57,2);
        local_3b8 = auVar67._0_8_ * dVar16 + dVar53 + auVar55._0_8_ +
                    local_138.Translation.ZW.m128d_f64[0];
        local_3e8 = local_368.Min.field0_0x0._s_0.Z;
        dVar17 = dVar17 * dVar16 + dVar69 + auVar63._8_8_ + local_138.Translation.XY.m128d_f64[0];
        dVar69 = dVar12 * dVar16 + dVar72 + auVar57._0_8_ + local_138.Translation.XY.m128d_f64[1];
        uVar77 = (undefined4)((ulonglong)dVar69 >> 0x20);
        local_138.Scale3D.XY.m128d_f64[0] = local_138.Scale3D.XY.m128d_f64[0] * 0.0;
        local_138.Scale3D.XY.m128d_f64[1] = local_138.Scale3D.XY.m128d_f64[1] * 0.0;
        auVar68._0_8_ = local_368.Min.field0_0x0._s_0.Z * local_138.Scale3D.ZW.m128d_f64[0];
        auVar68._8_8_ = local_138.Scale3D.ZW.m128d_f64[1] * 0.0;
        local_3f8 = 0;
        uStack_3f0 = 0;
        local_3c8._8_4_ = SUB84(dVar69,0);
        local_3c8._0_8_ = dVar17;
        local_3c8._12_4_ = uVar77;
        dVar53 = auVar68._0_8_ * dVar13 - local_138.Scale3D.XY.m128d_f64[1] * dVar15;
        auVar74._8_4_ = SUB84(dVar53,0);
        auVar74._0_8_ =
             local_138.Scale3D.XY.m128d_f64[1] * dVar14 - local_138.Scale3D.XY.m128d_f64[0] * dVar13
        ;
        auVar74._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        auVar58._8_4_ = SUB84(local_138.Scale3D.XY.m128d_f64[1],0);
        auVar58._0_8_ = local_138.Scale3D.XY.m128d_f64[0];
        auVar58._12_4_ = (int)((ulonglong)local_138.Scale3D.XY.m128d_f64[1] >> 0x20);
        auVar55 = blendpd(auVar58,auVar68,2);
        auVar59._0_8_ = auVar55._0_8_ * dVar15 - auVar68._0_8_ * dVar70;
        auVar59._8_8_ = auVar55._8_8_ * dVar16 - auVar68._8_8_ * dVar73;
        auVar55 = blendpd(auVar74,auVar59,2);
        dVar53 = dVar53 + dVar53;
        dVar12 = auVar59._0_8_ + auVar59._0_8_;
        uVar51 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar75._0_8_ = auVar55._0_8_ + auVar55._0_8_;
        auVar75._8_8_ = auVar55._8_8_ + auVar55._8_8_;
        auVar64._8_4_ = SUB84(dVar12,0);
        auVar64._0_8_ = dVar53;
        auVar64._12_4_ = uVar51;
        auVar60._8_4_ = SUB84(dVar12,0);
        auVar60._0_8_ = dVar53;
        auVar60._12_4_ = uVar51;
        auVar55 = blendpd(auVar60,auVar75,2);
        auVar65._0_8_ = auVar64._8_8_ * dVar14 - dVar53 * dVar13;
        auVar65._8_8_ = auVar75._0_8_ * dVar13 - dVar12 * dVar15;
        auVar61._0_8_ = auVar55._0_8_ * dVar15 - auVar75._0_8_ * dVar70;
        auVar61._8_8_ = auVar55._8_8_ * dVar16 - auVar75._8_8_ * dVar73;
        auVar55 = blendpd(auVar65,auVar61,2);
        local_3d0 = auVar75._0_8_ * dVar16 + auVar68._0_8_ + auVar55._0_8_ +
                    local_138.Translation.ZW.m128d_f64[0];
        local_138.Translation.XY.m128d_f64[0] =
             dVar53 * dVar16 + local_138.Scale3D.XY.m128d_f64[0] + auVar65._8_8_ +
             local_138.Translation.XY.m128d_f64[0];
        local_138.Translation.XY.m128d_f64[1] =
             dVar12 * dVar16 + local_138.Scale3D.XY.m128d_f64[1] + auVar61._0_8_ +
             local_138.Translation.XY.m128d_f64[1];
        uVar51 = SUB84(local_138.Translation.XY.m128d_f64[1],0);
        uVar52 = (undefined4)((ulonglong)local_138.Translation.XY.m128d_f64[1] >> 0x20);
        dVar73 = local_3d0 - local_3b8;
        auVar18._4_8_ = dVar72;
        auVar18._0_4_ = (int)((ulonglong)local_138.Translation.XY.m128d_f64[0] >> 0x20);
        auVar71._0_8_ = auVar18._0_8_ << 0x20;
        auVar71._8_4_ = uVar51;
        auVar71._12_4_ = uVar52;
        dVar70 = auVar71._8_8_ - dVar69;
        local_3e0._8_4_ = uVar51;
        local_3e0._0_8_ = local_138.Translation.XY.m128d_f64[0];
        local_3e0._12_4_ = uVar52;
        local_138.Translation.XY.m128d_f64[0] = local_138.Translation.XY.m128d_f64[0] - dVar17;
        local_1b8 = SQRT(local_138.Translation.XY.m128d_f64[0] *
                         local_138.Translation.XY.m128d_f64[0] + dVar70 * dVar70 + dVar73 * dVar73);
        if (local_1b8 <= __real_3e45798ee0000000) {
          local_138.Translation.XY.m128d_f64[0] = 0.0;
          dVar70 = 0.0;
          local_388 = __real_bff0000000000000;
        }
        else {
          dVar53 = __real_3ff0000000000000 / local_1b8;
          local_138.Translation.XY.m128d_f64[0] = dVar53 * local_138.Translation.XY.m128d_f64[0];
          dVar70 = dVar53 * dVar70;
          local_388 = dVar53 * dVar73;
        }
        local_1e8._8_4_ = SUB84(dVar69,0);
        local_1e8._0_8_ = dVar17;
        local_1e8._12_4_ = uVar77;
        uVar51 = SUB84(dVar70,0);
        uVar52 = (undefined4)((ulonglong)dVar70 >> 0x20);
        local_1c0 = local_388;
        local_1d8 = local_3b8;
LAB_149c74294:
        local_1d0._8_4_ = uVar51;
        local_1d0._0_8_ = local_138.Translation.XY.m128d_f64[0];
        local_1d0._12_4_ = uVar52;
      }
      else {
        auVar55._0_8_ =
             (double)local_1d0._0_8_ * (double)local_1d0._0_8_ +
             (double)local_1d0._8_8_ * (double)local_1d0._8_8_ + local_1c0 * local_1c0;
        auVar55._8_8_ = 0;
        auVar55 = sqrtpd(unaff_XMM6,auVar55);
        dVar70 = auVar55._0_8_;
        if (dVar70 <= __real_3e45798ee0000000) {
          local_138.Translation.XY.m128d_f64[0] = 0.0;
          uVar51 = 0;
          uVar52 = 0;
          local_3a0 = __real_bff0000000000000;
          local_3b0 = 0;
          uStack_3a8 = 0;
          local_1c0 = __real_bff0000000000000;
          goto LAB_149c74294;
        }
        dVar53 = __real_3ff0000000000000 / dVar70;
        local_388 = dVar53 * local_1c0;
        dVar73 = dVar53 * (double)local_1d0._8_8_;
        local_1d0._8_4_ = SUB84(dVar73,0);
        local_1d0._0_8_ = dVar53 * (double)local_1d0._0_8_;
        local_1d0._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        local_1b8 = local_1b8 * dVar70;
        local_1c0 = local_388;
      }
      pUVar35 = (UWorld *)this_01->_padding_;
      if (pUVar35 == (UWorld *)0x0) {
        pUVar35 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01);
      }
      bVar25 = IsInGameThread();
      if (param_1 == (FPCGContext *)0x0) {
        if ((!bVar25) &&
           (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4331830188552749225>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0xa9,"Context != nullptr || IsInGameThread()"), bVar25)) {
          pcVar10 = (code *)swi(3);
          uVar26 = (*pcVar10)();
          return (bool)uVar26;
        }
LAB_149c74301:
        pUVar36 = GetTransientPackageAsObject();
        this_02 = NewObject<UPCGWorldRayHitData>(pUVar36);
      }
      else {
        if (bVar25) goto LAB_149c74301;
        if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
           (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4331830188552749348>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar25)) {
          pcVar10 = (code *)swi(3);
          uVar26 = (*pcVar10)();
          return (bool)uVar26;
        }
        FGCScopeGuard::FGCScopeGuard(&local_568);
        pUVar36 = GetTransientPackageAsObject();
        this_02 = NewObject<UPCGWorldRayHitData>(pUVar36);
        FGCScopeGuard::~FGCScopeGuard(&local_568);
        if ((this_02 == (UPCGWorldRayHitData *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x12a,L""), bVar25)) {
          pcVar10 = (code *)swi(3);
          uVar26 = (*pcVar10)();
          return (bool)uVar26;
        }
        local_488 = this_02;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_02 != (UPCGWorldRayHitData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_498,(bool *)&local_488);
      }
      FPCGWorldCommonQueryParams::operator=
                ((FPCGWorldCommonQueryParams *)&this_02->QueryParams,
                 (FPCGWorldCommonQueryParams *)local_2c8);
      bVar4 = (byte)(this_02->QueryParams)._padding_;
      bVar41 = local_200 & 1;
      *(byte *)&(this_02->QueryParams)._padding_ = bVar41 | bVar4 & 0xfe;
      bVar27 = local_200 & 2;
      *(byte *)&(this_02->QueryParams)._padding_ = bVar41 | bVar4 & 0xfc | bVar27;
      bVar28 = local_200 & 4;
      *(byte *)&(this_02->QueryParams)._padding_ = bVar41 | bVar4 & 0xf8 | bVar27 | bVar28;
      bVar29 = local_200 & 8;
      *(byte *)&(this_02->QueryParams)._padding_ = bVar41 | bVar4 & 0xf0 | bVar27 | bVar28 | bVar29;
      bVar30 = local_200 & 0x10;
      *(byte *)&(this_02->QueryParams)._padding_ =
           bVar41 | bVar4 & 0xe0 | bVar27 | bVar28 | bVar29 | bVar30;
      *(byte *)&(this_02->QueryParams)._padding_ =
           bVar41 | bVar4 & 0xc0 | bVar27 | bVar28 | bVar29 | bVar30 | local_200 & 0x20;
      *(byte *)&(this_02->QueryParams)._padding_ =
           bVar41 | bVar4 & 0x80 | bVar27 | bVar28 | bVar29 | bVar30 | local_200 & 0x20 |
           local_200 & 0x40;
      bVar4 = *(byte *)((longlong)&(this_02->QueryParams)._padding_ + 1);
      *(byte *)&(this_02->QueryParams)._padding_ = local_200;
      bVar41 = local_1ff & 1;
      *(byte *)((longlong)&(this_02->QueryParams)._padding_ + 1) = bVar41 | bVar4 & 0xfe;
      bVar27 = local_1ff & 2;
      *(byte *)((longlong)&(this_02->QueryParams)._padding_ + 1) = bVar41 | bVar4 & 0xfc | bVar27;
      bVar28 = local_1ff & 4;
      *(byte *)((longlong)&(this_02->QueryParams)._padding_ + 1) =
           bVar41 | bVar4 & 0xf8 | bVar27 | bVar28;
      bVar29 = local_1ff & 8;
      *(byte *)((longlong)&(this_02->QueryParams)._padding_ + 1) =
           bVar41 | bVar4 & 0xf0 | bVar27 | bVar28 | bVar29;
      bVar30 = local_1ff & 0x10;
      *(byte *)((longlong)&(this_02->QueryParams)._padding_ + 1) =
           bVar41 | bVar4 & 0xe0 | bVar27 | bVar28 | bVar29 | bVar30;
      *(byte *)((longlong)&(this_02->QueryParams)._padding_ + 1) =
           bVar41 | bVar4 & 0xc0 | bVar27 | bVar28 | bVar29 | bVar30 | local_1ff & 0x20;
      *(byte *)((longlong)&(this_02->QueryParams)._padding_ + 1) =
           bVar41 | bVar4 & 0x80 | bVar27 | bVar28 | bVar29 | bVar30 | local_1ff & 0x20 |
           local_1ff & 0x40;
      *(int *)((longlong)&(this_02->QueryParams)._padding_ + 4) = local_1fc;
      *(byte *)&(this_02->QueryParams)._padding_ =
           local_1f8 & 1 | (byte)(this_02->QueryParams)._padding_ & 0xfe;
      *(int *)((longlong)&(this_02->QueryParams)._padding_ + 4) = local_1f4;
      (this_02->QueryParams).bOverrideDefaultParams = local_1f0;
      (this_02->QueryParams).RayOrigin.field0_0x0._s_0.X = (double)local_1e8._0_8_;
      (this_02->QueryParams).RayOrigin.field0_0x0._s_0.Y = (double)local_1e8._8_8_;
      (this_02->QueryParams).RayOrigin.field0_0x0._s_0.Z = local_1d8;
      (this_02->QueryParams).RayDirection.field0_0x0._s_0.X = (double)local_1d0._0_8_;
      (this_02->QueryParams).RayDirection.field0_0x0._s_0.Y = (double)local_1d0._8_8_;
      (this_02->QueryParams).RayDirection.field0_0x0._s_0.Z = local_1c0;
      (this_02->QueryParams).RayLength = local_1b8;
      FPCGWorldRayHitQueryParams::Initialize(&this_02->QueryParams);
      local_480 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FWeakObjectPtr::operator=(&(this_02->OriginatingComponent).WeakPtr,(FObjectPtr)&local_480);
      uVar19 = *(undefined7 *)&(pUVar32->CollisionShape).field_0x1;
      dVar70 = (pUVar32->CollisionShape).BoxHalfExtent.field0_0x0._s_0.X;
      local_148 = 0;
      local_147 = 0;
      (this_02->CollisionShape).ShapeType = (pUVar32->CollisionShape).ShapeType;
      *(undefined7 *)&(this_02->CollisionShape).field_0x1 = uVar19;
      (this_02->CollisionShape).BoxHalfExtent.field0_0x0._s_0.X = dVar70;
      local_143 = 0;
      dVar70 = (pUVar32->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Z;
      local_141 = 0;
      (this_02->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Y =
           (pUVar32->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Y;
      (this_02->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Z = dVar70;
      fVar20 = (pUVar32->CollisionShape).CapsuleRadius;
      fVar21 = (pUVar32->CollisionShape).CapsuleHalfHeight;
      uVar51 = *(undefined4 *)&(pUVar32->CollisionShape).field_0x2c;
      (this_02->CollisionShape).SphereRadius = (pUVar32->CollisionShape).SphereRadius;
      (this_02->CollisionShape).CapsuleRadius = fVar20;
      (this_02->CollisionShape).CapsuleHalfHeight = fVar21;
      *(undefined4 *)&(this_02->CollisionShape).field_0x2c = uVar51;
      dVar70 = (pUVar32->CollisionShape).ShapeRotation.Yaw;
      (this_02->CollisionShape).ShapeRotation.Pitch = (pUVar32->CollisionShape).ShapeRotation.Pitch;
      (this_02->CollisionShape).ShapeRotation.Yaw = dVar70;
      (this_02->CollisionShape).ShapeRotation.Roll = (pUVar32->CollisionShape).ShapeRotation.Roll;
      local_178._s_0.Z = 0.0;
      uStack_160 = 0;
      local_178._s_0.X = 0.0;
      local_178._s_0.Y = 0.0;
      local_158 = 0;
      uStack_150 = 0;
      UPCGWorldRayHitData::Initialize
                (this_02,pUVar35,&local_138,(TBox<double> *)&local_178._s_0,&local_368);
      if (((((local_1ff & 0x20) != 0) && (this_02->_padding_ != 0)) &&
          (this_03 = UPCGSubsystem::GetInstance(pUVar35), this_03 != (UPCGSubsystem *)0x0)) &&
         (this_04 = UPCGSubsystem::GetLandscapeCache(this_03), local_548 = this_04,
         this_04 != (UPCGLandscapeCache *)0x0)) {
        local_328[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call
        ;
        local_1a8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call
        ;
        pUStack_310 = (UPCGWorldRayHitData *)
                      `FPCGWorldRayHitQueryElement::ExecuteInternal'::__l28::<lambda_1>::
                      <lambda_invoker_cdecl>;
        pppuStack_300 = (undefined ***)0x0;
        local_190 = `FPCGWorldRayHitQueryElement::ExecuteInternal'::__l28::<lambda_2>::
                    <lambda_invoker_cdecl>;
        local_318 = &
                    ___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        local_180 = (undefined ***)0x0;
        local_198 = &
                    ___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        local_518[0] = Self;
        local_518[1] = false;
        local_518[2] = false;
        local_518[3] = false;
        local_518[4] = ByTag;
        local_518._8_4_ = 0;
        local_518._12_4_ = 0;
        local_518._16_8_ = (UClass *)0x0;
        FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                  ((FPCGAttributePropertyInputSelector *)(local_518 + 0x18));
        local_4c0._0_1_ = false;
        local_4c0._1_1_ = false;
        local_4c0._2_1_ = true;
        local_4c0._3_1_ = true;
        local_4bc._0_1_ = true;
        local_4bc._1_1_ = true;
        local_4bc._2_1_ = true;
        local_4bc._3_1_ = true;
        local_4b8.Data = (FScriptContainerElement *)0x0;
        local_4b0._0_4_ = 0;
        local_4b0._4_4_ = 0;
        local_4a8._0_1_ = false;
        local_4a8._1_1_ = false;
        local_518[0] = AllWorldActors;
        local_518[4] = ByClass;
        TVar37.DebugPtr = Z_Construct_UClass_ALandscapeProxy_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar37.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar37.DebugPtr);
        }
        pppuVar44 = pppuStack_300;
        pUVar24 = pUStack_310;
        ppuVar23 = local_318;
        pcVar22 = local_328[1];
        pcVar10 = local_328[0];
        local_4c0._0_1_ = true;
        local_518._16_8_ = TVar37.DebugPtr;
        if ((this_02->Bounds).IsValid != '\0') {
          local_328[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FPCGWorldRayHitQueryElement::ExecuteInternal'::__l31::<lambda_3>,bool,AActor_const_*>
                         ::Call;
          local_328[1] = (code *)uStack_2f0;
          local_2d8 = SUB84(this_01,0);
          uStack_2d4 = (undefined4)((ulonglong)this_01 >> 0x20);
          local_308 = local_2d8;
          uStack_304 = uStack_2d4;
          pppuStack_300 = (undefined ***)0x0;
          local_318 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::`31'::<lambda_3>,0,0>
                       ::_vftable_;
          pUStack_310 = this_02;
          local_2f8 = pcVar10;
          uStack_2f0 = pcVar22;
          local_2e8 = ppuVar23;
          pUStack_2e0 = pUVar24;
          pppuStack_2d0 = pppuVar44;
          if (pcVar10 != (code *)0x0) {
            pppuVar42 = &local_2e8;
            if (pppuVar44 != (undefined ***)0x0) {
              pppuVar42 = pppuVar44;
            }
            (*(code *)(*pppuVar42)[2])();
          }
        }
        local_468 = 0;
        uStack_460 = 0;
        local_408._8_8_ = (ulonglong)uStack_45c << 0x20;
        local_408.DataPtr = (AActor **)0x0;
        PCGActorSelector::FindActors
                  (&local_530,(FPCGActorSelectorSettings *)local_518,this_01,
                   (TFunction<bool___cdecl(AActor_const_*)> *)local_328,
                   (TFunction<bool___cdecl(AActor_const_*)> *)local_1a8,&local_408);
        uVar43 = (ulonglong)local_530.ArrayNum;
        local_564 = local_530.ArrayNum;
        local_478 = local_530.AllocatorInstance.Data + uVar43 * 8;
        FVar49.Data = local_530.AllocatorInstance.Data;
        while( true ) {
          pFVar3 = local_478;
          local_560 = FVar49.Data;
          if (local_530.ArrayNum != (uint)uVar43) {
            local_567 = 0;
            `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_567);
          }
          if (FVar49.Data == pFVar3) break;
          pAVar7 = *(ALandscapeProxy **)FVar49.Data;
          if (pAVar7 != (ALandscapeProxy *)0x0) {
            pUVar33 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
            iVar31 = (int)pUVar33->_padding_;
            if ((iVar31 <= *(int *)(pAVar7->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar31 * 8) ==
                &pUVar33->_padding_)) {
              this_00 = &this_02->CachedLandscapeLayerNames;
              pTVar38 = UPCGLandscapeCache::GetLayerNames(this_04,&local_458,pAVar7);
              uVar46 = *(int *)&(this_02->CachedLandscapeLayerNames).Elements.field_0x8 -
                       *(int *)&(this_02->CachedLandscapeLayerNames).Elements.field_0x34;
              uVar47 = pTVar38->ArrayNum + uVar46;
              if (uVar46 < uVar47) {
                if ((int)uVar47 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar47);
                }
                TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_00,uVar47);
                if (uVar47 < 4) {
                  iVar31 = 1;
                }
                else {
                  uVar43 = (ulonglong)((uVar47 >> 1) + 7) * 2 + 1;
                  lVar9 = 0x3f;
                  if (uVar43 != 0) {
                    for (; uVar43 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                    }
                  }
                  local_498.field0_0x0._4_4_ = (undefined4)lVar9;
                  iVar31 = 1 << ((byte)lVar9 & 0x1f);
                }
                iVar5 = (this_02->CachedLandscapeLayerNames).HashSize;
                if ((iVar5 == 0) || (iVar5 < iVar31)) {
                  (this_02->CachedLandscapeLayerNames).HashSize = iVar31;
                  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(this_00);
                }
              }
              pFVar48 = (pTVar38->AllocatorInstance).Data;
              iVar31 = pTVar38->ArrayNum;
              pFVar3 = pFVar48 + (longlong)iVar31 * 8;
              while( true ) {
                if (pTVar38->ArrayNum != iVar31) {
                  local_566[0] = 0;
                  `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_566);
                }
                if (pFVar48 == pFVar3) break;
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                          (this_00,&local_490,(bool *)pFVar48);
                pFVar48 = pFVar48 + 8;
              }
              pTVar38->ArrayNum = 0;
              if (pTVar38->ArrayMax < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,0,&pTVar38->AllocatorInstance,0,&pTVar38->ArrayMax);
              }
              FVar49.Data = local_560;
              this_04 = local_548;
              if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_458.AllocatorInstance.Data);
                FVar49.Data = local_560;
                this_04 = local_548;
              }
            }
          }
          uVar43 = (ulonglong)local_564;
          FVar49.Data = FVar49.Data + 8;
        }
        if (local_530.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_530.AllocatorInstance.Data);
        }
        if (local_4b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Data);
        }
        DestructItems<FString,int>((FString *)local_518._64_8_,local_4d0);
        if ((FString *)local_518._64_8_ != (FString *)0x0) {
          FMemory::Free((void *)local_518._64_8_);
        }
        if (local_1a8[0] != (code *)0x0) {
          pppuVar44 = &local_198;
          if (local_180 != (undefined ***)0x0) {
            pppuVar44 = local_180;
          }
          (*(code *)(*pppuVar44)[2])();
        }
        param_1 = local_540;
        pUVar32 = local_538;
        if (local_328[0] != (code *)0x0) {
          pppuVar44 = &local_318;
          if (pppuStack_300 != (undefined ***)0x0) {
            pppuVar44 = pppuStack_300;
          }
          (*(code *)(*pppuVar44)[2])();
          param_1 = local_540;
          pUVar32 = local_538;
        }
      }
      if (*(int *)&(this_02->CachedLandscapeLayerNames).Elements.field_0x8 ==
          *(int *)&(this_02->CachedLandscapeLayerNames).Elements.field_0x34) {
        pbVar2 = (byte *)((longlong)&(this_02->QueryParams)._padding_ + 1);
        *pbVar2 = *pbVar2 & 0xdf;
      }
      if ((char)(pUVar32->QueryParams)._padding_ != '\0') {
        FPCGDataCollection::GetInputsByPin
                  (&param_1->InputData,&local_558,&PCGWorldRayHitConstants::FilterActorPinLabel);
        if (1 < local_558.ArrayNum) {
          PCGLog::InputOutput::LogFirstInputOnlyWarning
                    (PCGWorldRayHitConstants::FilterActorPinLabel,param_1);
        }
        if (local_558.ArrayNum == 0) {
          pFVar39 = FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_448,(UPCGData *)0x0);
          pFVar45 = &local_448;
        }
        else {
          if ((local_558.ArrayNum < 1) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar10 = (code *)swi(3);
            uVar26 = (*pcVar10)();
            return (bool)uVar26;
          }
          pFVar39 = FPCGDataPtrWrapper::FPCGDataPtrWrapper
                              (&local_438,(FPCGDataPtrWrapper *)local_558.AllocatorInstance.Data);
          pFVar45 = &local_438;
        }
        pUVar8 = (pFVar39->Data).field0_0x0.DebugPtr;
        FPCGDataPtrWrapper::~FPCGDataPtrWrapper(pFVar45);
        if (pUVar8 != (UPCGData *)0x0) {
          (this_02->ActorFilter).CachedFilterActorsDirty = true;
          bVar25 = FPCGWorldCommonQueryParams::ExtractActorFiltersIfNeeded
                             ((FPCGWorldCommonQueryParams *)&pUVar32->QueryParams,pUVar8,
                              &(this_02->ActorFilter).FilterActors,param_1);
          if (!bVar25) {
            pFVar40 = FText::AsLocalizable_Advanced_LocText
                                (&local_428,L"PCGWorldQuery",L"FailExtractActorFilters",
                                 L"Failed to extract actor filters.");
            PCGLog::LogWarningOnGraph(pFVar40,(FPCGContext *)0x0);
            if (local_428.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
            }
          }
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_558.AllocatorInstance.Data,local_558.ArrayNum);
        if ((FPCGTaggedData *)local_558.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_558.AllocatorInstance.Data);
        }
      }
      iVar31 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar31 == *piVar1) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar31 + 1;
      pFVar45 = (FPCGDataPtrWrapper *)
                ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar31 * 0x78);
      pFVar45[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar45[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar45[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar45[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar45[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (pFVar45->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (pFVar45->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      pFVar45[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar45[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar45[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar45[3].WeakData.WeakPtr.ObjectIndex = 0;
      pFVar45[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&pFVar45[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar45[4].Data.field0_0x0 + 4) = 0;
      pFVar45[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar45[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&pFVar45[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&pFVar45[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(pFVar45,(UPCGData *)this_02);
      goto LAB_149c74ca3;
    }
  }
  pFVar40 = FText::AsLocalizable_Advanced_LocText
                      (&local_418,L"PCGWorldQuery",L"NoSourceComponent",
                       L"Execution source is not a PCG Component.");
  PCGLog::LogErrorOnGraph(pFVar40,param_1);
  if (local_418.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
  }
LAB_149c74ca3:
  local_208 = 0;
  if (local_210 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_210);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_2c8 + 0x78));
  DestructItems<FString,int>((FString *)local_2c8._88_8_,local_2c8._96_4_);
  if ((FString *)local_2c8._88_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_2c8._88_8_);
  }
  if ((FScriptContainerElement *)local_2c8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c8._8_8_);
  }
  if (bVar50) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149c806b0

bool __thiscall
FPCGWorldRayHitQueryElement::IsCacheable(FPCGWorldRayHitQueryElement *this,UPCGSettings *param_1)

{
  return false;
}

