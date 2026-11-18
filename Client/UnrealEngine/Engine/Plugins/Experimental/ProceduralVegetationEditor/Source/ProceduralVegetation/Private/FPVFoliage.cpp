// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// DistributeFoliage @ 14da7b4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPVFoliage::DistributeFoliage
          (FManagedArrayCollection *param_1,FManagedArrayCollection *param_2,
          FDistributionSettings *param_3,FScaleSettings *param_4,FVectorSettings *param_5,
          FPhyllotaxySettings *param_6,FMiscSettings *param_7)

{
  undefined8 uVar1;
  EPhyllotaxyType EVar2;
  EPhyllotaxyFormation EVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  FName FVar14;
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar15;
  FVectorSettings *pFVar16;
  longlong *plVar17;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar18;
  TManagedArray<float> *pTVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar27;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar28;
  TVector<float> *pTVar29;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar30;
  FFoliageEntryData *pFVar31;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar32;
  float *pfVar33;
  byte bVar34;
  FValueType *this;
  uint *puVar35;
  ForElementType<FSetElementId> FVar36;
  ForElementType<FSetElementId> FVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  float fVar42;
  uint uVar43;
  TManagedArray<int> *pTVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  longlong lVar48;
  ulonglong uVar49;
  uint uVar50;
  longlong lVar51;
  float fVar52;
  float fVar53;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined8 uVar54;
  undefined1 auVar55 [16];
  float fVar56;
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
  undefined1 auStackY_1348 [32];
  float local_12f4;
  ForAnyElementType local_12f0;
  undefined8 local_12e8;
  uint local_12e0;
  ForAnyElementType local_12d8;
  undefined8 local_12d0;
  ForAnyElementType local_12c8;
  undefined8 local_12c0;
  undefined1 local_12b8 [4];
  float local_12b4;
  int local_12b0;
  int local_12ac;
  ForAnyElementType local_12a8;
  undefined8 local_12a0;
  float local_1298;
  float local_1294;
  undefined8 local_1290;
  float local_1288;
  ForAnyElementType local_1280;
  undefined8 local_1278;
  uint local_1270;
  int local_126c;
  uint local_1268;
  float local_1264;
  TArray<int,TSizedDefaultAllocator<32>_> local_1260;
  undefined4 local_1250;
  undefined4 local_124c;
  float local_1248;
  int local_1244;
  float local_1240;
  int local_123c;
  float local_1238;
  float local_1234;
  float local_1230;
  float local_122c;
  float local_1228;
  uint local_1224;
  float local_1220;
  float local_121c;
  float local_1218;
  ForAnyElementType local_1210;
  undefined8 local_1208;
  ForAnyElementType local_1200;
  int local_11f8;
  int local_11f4;
  float local_11f0;
  undefined1 local_11ec [4];
  undefined8 local_11e8;
  float local_11e0;
  uint local_11d8;
  longlong local_11d0;
  ForAnyElementType local_11c8;
  int local_11c0;
  int local_11bc;
  longlong *local_11b8;
  undefined8 uStack_11b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_11a8;
  uint uStack_11a0;
  uint uStack_119c;
  undefined8 uStack_1198;
  int local_1190;
  undefined4 uStack_118c;
  float local_1188;
  float local_1184;
  float local_1180;
  float fStack_117c;
  undefined4 local_1178;
  float local_1174;
  float local_1170;
  float fStack_116c;
  undefined4 local_1168;
  float local_1160;
  float fStack_115c;
  float local_1158;
  float local_1150;
  float fStack_114c;
  undefined4 local_1148;
  float local_1140;
  float fStack_113c;
  float local_1138;
  float local_1130;
  float fStack_112c;
  undefined4 local_1128;
  float local_1120;
  float fStack_111c;
  float local_1118;
  FDistributionSettings *local_1110;
  undefined8 local_1108;
  undefined4 local_1100;
  longlong local_10f8;
  longlong local_10f0;
  FManagedArrayCollection *local_10e8;
  float local_10e0;
  float local_10dc;
  uint local_10d8;
  float local_10d4;
  uint local_10d0;
  float local_10cc;
  uint local_10c8;
  int local_10c4;
  float local_10c0;
  float local_10bc;
  undefined4 local_10b8 [2];
  FScaleSettings *local_10b0;
  undefined8 local_10a8;
  float local_10a0;
  undefined8 local_109c;
  float local_1094;
  float local_1090;
  undefined8 local_1088;
  float local_1080;
  FName local_1078;
  FName local_1070;
  FName local_1068;
  FName local_1060;
  TVector2<float>_u_0 local_1058;
  TVector2<float>_u_0 local_1050;
  FName local_1048;
  undefined8 local_1040;
  TQuat<float> local_1038;
  TQuat<float> local_1028;
  TQuat<float> local_1018;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1008;
  TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> local_fe8;
  undefined8 local_fb0;
  int local_fa0 [2];
  FVectorSettings *local_f98;
  ulonglong local_f90;
  uint *local_f88;
  int local_f80;
  int local_f7c;
  int local_f78;
  int local_f74;
  undefined8 local_f70;
  undefined8 local_f68;
  undefined8 local_f58;
  TVector<float>_u_0 local_f48;
  float local_f38;
  undefined4 uStack_f34;
  undefined4 uStack_f30;
  undefined4 uStack_f2c;
  undefined8 local_f28;
  undefined8 local_f18;
  undefined8 local_f08;
  undefined1 local_ef8 [12];
  uint uStack_eec;
  TBitArray<FDefaultBitArrayAllocator> *local_ee8;
  undefined8 uStack_ee0;
  longlong local_ed8;
  undefined8 uStack_ed0;
  longlong *local_ec8;
  undefined1 auStack_ec0 [16];
  uint uStack_eb0;
  uint uStack_eac;
  longlong local_ea8;
  undefined8 uStack_ea0;
  longlong *local_e98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e90;
  undefined8 uStack_e70;
  FFoliageEntryData local_e68;
  FName local_e30;
  FName local_e28;
  undefined8 local_e20;
  undefined8 local_e10;
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> local_e00;
  TManagedArrayAccessor<UE::Math::TVector<float>_> local_dc8;
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> local_d90;
  undefined1 local_d58 [32];
  longlong local_d38;
  undefined8 uStack_d30;
  TManagedArrayAccessor<float> local_d28;
  FFoliageFacade local_ce8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a68;
  undefined4 local_a2c;
  undefined4 local_a0c;
  FFoliageEntryData local_a08;
  FFoliageEntryData local_9d0;
  FFoliageEntryData local_998;
  FPointFacade local_958;
  FBranchFacade local_528;
  undefined1 local_238 [32];
  uint *local_218;
  uint local_210;
  undefined4 local_20c;
  undefined4 local_208;
  int local_204;
  undefined1 local_200 [8];
  ForElementType<FSetElementId> local_1f8;
  int local_1f0;
  undefined1 local_1e8 [32];
  uint *local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  undefined1 local_198 [32];
  undefined8 local_178;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  ForElementType<FSetElementId> local_158;
  int local_150;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_148;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_1348;
  local_f98 = param_5;
  local_1110 = param_3;
  local_10e8 = param_1;
  local_10b0 = param_4;
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_ce8,param_1,0);
  if (local_ce8.NamesAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0) {
    iVar23 = FManagedArrayCollection::NumElements
                       (local_ce8.NamesAttribute.ConstCollection,local_ce8.NamesAttribute.Group);
  }
  else {
    iVar23 = (**(code **)(*(longlong *)local_ce8.NamesAttribute.ConstAttributeArray + 0x60))();
  }
  if (iVar23 == 0) {
    if ((byte)LogProceduralVegetation._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
    return;
  }
  local_1224 = param_7->RandomSeed;
  PV::Facades::FBranchFacade::FBranchFacade(&local_528,param_2);
  PV::Facades::FPointFacade::FPointFacade(&local_958,param_2);
  local_1078.ComparisonIndex.Value = 0;
  local_1078.Number = 0;
  TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
  TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
            (&local_fe8,param_1,&PV::AttributeNames::BudDirection,&PV::GroupNames::PointGroup,
             &local_1078);
  local_1070.ComparisonIndex.Value = 0;
  local_1070.Number = 0;
  TManagedArrayAccessor<float>::TManagedArrayAccessor<float>
            (&local_d28,param_1,&PV::AttributeNames::BranchGradient,&PV::GroupNames::PointGroup,
             &local_1070);
  local_1068.ComparisonIndex.Value = 0;
  local_1068.Number = 0;
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_d90,param_1,&PV::AttributeNames::LeafPhyllotaxy,&PV::GroupNames::DetailsGroup,
             &local_1068);
  local_1060.ComparisonIndex.Value = 0;
  local_1060.Number = 0;
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_e00,param_1,&PV::AttributeNames::BudHormoneLevels,&PV::GroupNames::PointGroup,
             &local_1060);
  pTVar27 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                      (&local_d90,0);
  local_1040 = 1;
  if ((pTVar27->ArrayNum < 2) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_12f4 = *(float *)((pTVar27->AllocatorInstance).Data + 4);
  pTVar27 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                      (&local_d90,0);
  if ((pTVar27->ArrayNum < 4) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1298 = *(float *)((pTVar27->AllocatorInstance).Data + 0xc);
  pTVar27 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                      (&local_d90,0);
  if ((pTVar27->ArrayNum < 5) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1294 = *(float *)((pTVar27->AllocatorInstance).Data + 0x10);
  pTVar27 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                      (&local_d90,0);
  if ((pTVar27->ArrayNum < 7) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar46 = (uint)*(float *)((pTVar27->AllocatorInstance).Data + 0x18);
  local_1268 = uVar46;
  pTVar27 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                      (&local_d90,0);
  if ((pTVar27->ArrayNum < 8) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar67 = __real_3f800000;
  local_10bc = *(float *)((pTVar27->AllocatorInstance).Data + 0x1c);
  if (param_6->OverridePhyllotaxy == false) goto LAB_14da7b9b4;
  EVar2 = param_6->PhyllotaxyType;
  if (EVar2 == Alternate) {
    local_12f4 = param_6->PhyllotaxyAdditionalAngle + __real_43340000;
LAB_14da7b9a8:
    local_1298 = __real_3f800000;
    local_1294 = __real_3f800000;
  }
  else {
    if (EVar2 == Opposite) {
      local_12f4 = param_6->PhyllotaxyAdditionalAngle;
    }
    else {
      if (EVar2 != Decussate) {
        if (EVar2 == Whorled) {
          local_12f4 = param_6->PhyllotaxyAdditionalAngle + __real_42b40000;
          local_1298 = (float)param_6->MinimumNodeBuds;
          local_1294 = (float)param_6->MaximumNodeBuds;
          goto LAB_14da7b9b4;
        }
        if (EVar2 != Spiral) goto LAB_14da7b9b4;
        EVar3 = param_6->PhyllotaxyFormation;
        if (EVar3 == Distichous) {
          local_12f4 = param_6->PhyllotaxyAdditionalAngle + __real_43340000;
        }
        else if (EVar3 == Tristichous) {
          local_12f4 = param_6->PhyllotaxyAdditionalAngle + __real_42f00000;
        }
        else if (EVar3 == Pentastichous) {
          local_12f4 = param_6->PhyllotaxyAdditionalAngle + __real_43100000;
        }
        else if (EVar3 == Octastichous) {
          local_12f4 = param_6->PhyllotaxyAdditionalAngle + __real_43070000;
        }
        else if (EVar3 == Parastichous) {
          local_12f4 = param_6->PhyllotaxyAdditionalAngle;
        }
        goto LAB_14da7b9a8;
      }
      local_12f4 = param_6->PhyllotaxyAdditionalAngle + __real_42b40000;
    }
    local_1298 = __real_40000000;
    local_1294 = __real_40000000;
  }
LAB_14da7b9b4:
  if (local_528.Parents.ConstAttributeArray ==
      (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    local_126c = FManagedArrayCollection::NumElements
                           (local_528.Parents.ConstCollection,local_528.Parents.Group);
  }
  else {
    local_126c = (**(code **)(*(longlong *)local_528.Parents.ConstAttributeArray + 0x60))();
  }
  fVar62 = __real_3a83126f;
  uVar26 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar53 = __real_322bcc77;
  pTVar44 = local_ce8.NameIdsAttribute.ConstAttributeArray;
  if (param_3->OverrideDistribution != false) {
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId91,"PVFoliageDistributorNode::OverrideDistribution",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVFoliage.cpp"
                 ,0x5b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId91);
    }
    FManagedArrayCollection::EmptyGroup(param_1,PV::GroupNames::FoliageGroup);
    local_123c = 0;
    fVar42 = __real_41200000;
    if (0 < local_126c) {
      do {
        iVar23 = local_123c;
        iVar25 = 0;
        local_1280.Data = (FScriptContainerElement *)0x0;
        local_1278 = 0;
        local_12a8.Data = (FScriptContainerElement *)0x0;
        local_12a0 = 0;
        local_12d8.Data = (FScriptContainerElement *)0x0;
        local_12d0 = 0;
        local_12f0.Data = (FScriptContainerElement *)0x0;
        local_12e8 = 0;
        local_1210.Data = (FScriptContainerElement *)0x0;
        local_1208 = 0;
        local_12c8.Data = (FScriptContainerElement *)0x0;
        local_12c0 = 0;
        pTVar28 = PV::Facades::FBranchFacade::GetPoints(&local_528,local_123c);
        local_1260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                  (&local_1260,(int *)(pTVar28->AllocatorInstance).Data,pTVar28->ArrayNum,0);
        if (local_1260.ArrayNum < 2) {
          if (local_1260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1260.AllocatorInstance.Data);
          }
          if (local_12c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12c8.Data);
          }
          if (local_1210.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1210.Data);
          }
          if (local_12f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12f0.Data);
          }
          if (local_12d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12d8.Data);
          }
          if (local_12a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12a8.Data);
          }
          if (local_1280.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1280.Data);
          }
        }
        else {
          pfVar33 = PV::Facades::FPointFacade::GetLengthFromRoot
                              (&local_958,*(uint *)local_1260.AllocatorInstance.Data);
          fVar62 = *pfVar33;
          uVar26 = 0;
          if ((int)(local_1260.ArrayNum - 1U) < local_1260.ArrayNum) {
            uVar26 = ~(local_1260.ArrayNum - 1U) >> 0x1f;
          }
          local_1188 = fVar62;
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pfVar33 = PV::Facades::FPointFacade::GetLengthFromRoot
                              (&local_958,
                               *(int *)(local_1260.AllocatorInstance.Data +
                                       (longlong)local_1260.ArrayNum * 4 + -4));
          fVar59 = 0.0;
          local_10d4 = *pfVar33;
          local_1184 = local_10d4 - fVar62;
          iVar7 = param_3->MaxPerBranch;
          if (param_3->MaxPerBranch == -1) {
            iVar7 = local_1260.ArrayNum;
          }
          local_10dc = fVar67 / local_1184;
          fVar62 = local_10dc * param_3->InstanceSpacing;
          if (0.0 < (float)iVar7) {
            do {
              if (fVar67 < fVar59) break;
              fVar60 = fVar67 - fVar59;
              fVar52 = fVar62;
              if (&param_3->InstanceSpacingRamp->EditorCurveData != (FRichCurve *)0x0) {
                fVar52 = FRichCurve::Eval(&param_3->InstanceSpacingRamp->EditorCurveData,fVar60,0.0)
                ;
              }
              fVar61 = param_3->InstanceSpacingRampEffect;
              local_1238 = fVar60;
              if (((local_1280.Data <= (FScriptContainerElement *)&local_1238) &&
                  ((FScriptContainerElement *)&local_1238 <
                   local_1280.Data + (longlong)local_1278._4_4_ * 4)) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar24 = (int)local_1278;
              if ((int)local_1278 == local_1278._4_4_) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_1280,(int *)((longlong)&local_1278 + 4));
              }
              iVar25 = iVar25 + 1;
              local_1278 = CONCAT44(local_1278._4_4_,iVar24 + 1);
              fVar59 = fVar59 + fVar52 * fVar61 * fVar62 * fVar42 + fVar62;
              *(float *)(local_1280.Data + (longlong)iVar24 * 4) = local_1238;
            } while ((float)iVar25 < (float)iVar7);
          }
          iVar25 = 0;
          if ((local_1260.ArrayNum < 1) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar26 = *(uint *)local_1260.AllocatorInstance.Data;
          if ((local_fe8.ConstAttributeArray ==
               (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0)
             && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                     ,0x60,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar15 = local_fe8.ConstAttributeArray;
          uVar47 = 0;
          if ((int)uVar26 < *(int *)&(local_fe8.ConstAttributeArray)->field_0x18) {
            uVar47 = ~uVar26 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar40 = *(longlong *)&pTVar15->field_0x10;
          if ((*(int *)(lVar40 + 8 + (longlong)(int)uVar26 * 0x10) < 1) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar4 = *(undefined8 **)(lVar40 + (longlong)(int)uVar26 * 0x10);
          uVar54 = *puVar4;
          uVar65 = *(undefined4 *)(puVar4 + 1);
          local_1174 = (float)uVar65;
          local_f70 = uVar54;
          local_f68 = uVar54;
          if ((local_1260.ArrayNum < 1) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar26 = *(uint *)local_1260.AllocatorInstance.Data;
          if ((local_fe8.ConstAttributeArray ==
               (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0)
             && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                     ,0x60,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar15 = local_fe8.ConstAttributeArray;
          uVar47 = 0;
          if ((int)uVar26 < *(int *)&(local_fe8.ConstAttributeArray)->field_0x18) {
            uVar47 = ~uVar26 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar40 = *(longlong *)&pTVar15->field_0x10;
          if ((*(int *)(lVar40 + 8 + (longlong)(int)uVar26 * 0x10) < 2) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar40 = *(longlong *)(lVar40 + (longlong)(int)uVar26 * 0x10);
          local_1088 = *(undefined8 *)(lVar40 + 0xc);
          local_1080 = *(float *)(lVar40 + 0x14);
          if ((local_1260.ArrayNum < 1) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar26 = *(uint *)local_1260.AllocatorInstance.Data;
          if ((local_fe8.ConstAttributeArray ==
               (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0)
             && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                     ,0x60,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar15 = local_fe8.ConstAttributeArray;
          uVar47 = 0;
          if ((int)uVar26 < *(int *)&(local_fe8.ConstAttributeArray)->field_0x18) {
            uVar47 = ~uVar26 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar40 = *(longlong *)&pTVar15->field_0x10;
          if ((*(int *)(lVar40 + 8 + (longlong)(int)uVar26 * 0x10) < 6) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar40 = *(longlong *)(lVar40 + (longlong)(int)uVar26 * 0x10);
          local_1234 = local_f68._4_4_;
          uVar1 = *(undefined8 *)(lVar40 + 0x3c);
          local_1220 = (float)local_f68;
          if (uVar46 == 1) {
            fVar59 = *(float *)(lVar40 + 0x44);
            local_f58._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            local_f58._0_4_ = (float)uVar1;
            fVar62 = (float)local_f68 * local_f58._4_4_ - local_f68._4_4_ * (float)local_f58;
            fVar42 = fVar59 * local_f68._4_4_ - (float)uVar65 * local_f58._4_4_;
            fVar59 = (float)uVar65 * (float)local_f58 - fVar59 * (float)local_f68;
          }
          else {
            fVar62 = local_1080;
            fVar42 = (float)local_1088;
            fVar59 = local_1088._4_4_;
          }
          local_12b4 = fVar42;
          local_1228 = fVar62;
          local_11f0 = fVar59;
          local_f58 = uVar1;
          if (__real_3c23d70a < local_10bc) {
            fVar52 = (float)local_f68 * (float)local_f68 + local_f68._4_4_ * local_f68._4_4_ +
                     (float)uVar65 * (float)uVar65;
            if (fVar52 != fVar67) {
              if (fVar53 <= fVar52) {
                fVar52 = fVar67 / SQRT(fVar52);
                uVar65 = fVar52 * (float)uVar65;
                uVar54 = CONCAT44(fVar52 * local_f68._4_4_,fVar52 * (float)local_f68);
              }
              else {
                uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                  UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                uVar65 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
            }
            local_f48._0_8_ = uVar54;
            local_f48._s_0.Z = (float)uVar65;
            UE::Math::TQuat<float>::TQuat<float>
                      (&local_1038,(TVector<float> *)&local_f48._s_0,local_10bc * __real_3c8efa35);
            fVar61 = fVar62 * local_1038.Y - fVar59 * local_1038.Z;
            fVar60 = fVar42 * local_1038.Z - fVar62 * local_1038.X;
            fVar61 = fVar61 + fVar61;
            fVar52 = fVar59 * local_1038.X - fVar42 * local_1038.Y;
            fVar60 = fVar60 + fVar60;
            fVar52 = fVar52 + fVar52;
            local_12b4 = (local_1038.Y * fVar52 - local_1038.Z * fVar60) +
                         local_1038.W * fVar61 + fVar42;
            local_11f0 = (local_1038.Z * fVar61 - local_1038.X * fVar52) +
                         local_1038.W * fVar60 + fVar59;
            local_1228 = (local_1038.X * fVar60 - local_1038.Y * fVar61) +
                         local_1038.W * fVar52 + fVar62;
          }
          local_1244 = 0;
          local_1270 = 0;
          if (0 < (int)local_1278) {
            local_11d0 = 0;
            do {
              uVar39 = 0;
              uVar46 = local_1270;
              if (0 < local_1260.ArrayNum + -1) {
                fVar62 = (float)((uint)local_1184 & __xmm_7fffffff7fffffff7fffffff7fffffff);
                uVar26 = ~local_1270 >> 0x1f;
                uStack_f34 = 0;
                uStack_f30 = 0;
                uStack_f2c = 0;
                uVar41 = uVar39;
                local_10c8 = uVar26;
                local_f38 = fVar62;
                do {
                  uVar47 = (uint)uVar39;
                  uVar46 = 0;
                  if ((int)uVar47 < local_1260.ArrayNum) {
                    uVar46 = ~uVar47 >> 0x1f;
                  }
                  if ((uVar46 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_11d8 = uVar47 + 1;
                  uVar39 = uVar41 + 1;
                  uVar47 = *(uint *)(local_1260.AllocatorInstance.Data + uVar41 * 4);
                  uVar46 = 0;
                  if ((int)local_11d8 < local_1260.ArrayNum) {
                    uVar46 = ~local_11d8 >> 0x1f;
                  }
                  local_f90 = uVar39;
                  if ((uVar46 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar45 = *(uint *)(local_1260.AllocatorInstance.Data + uVar39 * 4);
                  pTVar29 = PV::Facades::FPointFacade::GetPosition(&local_958,uVar47);
                  local_f18 = *(undefined8 *)&pTVar29->field0_0x0;
                  fVar42 = (pTVar29->field0_0x0)._s_0.Z;
                  pTVar29 = PV::Facades::FPointFacade::GetPosition(&local_958,uVar45);
                  local_f28 = *(undefined8 *)&pTVar29->field0_0x0;
                  fVar59 = (pTVar29->field0_0x0)._s_0.Z;
                  if ((local_e00.ConstAttributeArray ==
                       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                          ,0x60,L""), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pTVar18 = local_e00.ConstAttributeArray;
                  uVar43 = ~uVar47 >> 0x1f;
                  uVar46 = 0;
                  if ((int)uVar47 < *(int *)&(local_e00.ConstAttributeArray)->field_0x18) {
                    uVar46 = uVar43;
                  }
                  if ((uVar46 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar40 = *(longlong *)&pTVar18->field_0x10;
                  local_10f8 = (longlong)(int)uVar47 * 0x10;
                  if ((*(int *)(local_10f8 + 8 + lVar40) < 5) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  fVar52 = *(float *)(*(longlong *)(local_10f8 + lVar40) + 0x10);
                  if ((local_e00.ConstAttributeArray ==
                       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                          ,0x60,L""), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pTVar18 = local_e00.ConstAttributeArray;
                  local_12e0 = ~uVar45 >> 0x1f;
                  uVar46 = 0;
                  if ((int)uVar45 < *(int *)&(local_e00.ConstAttributeArray)->field_0x18) {
                    uVar46 = local_12e0;
                  }
                  if ((uVar46 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar40 = *(longlong *)&pTVar18->field_0x10;
                  local_10f0 = (longlong)(int)uVar45 * 0x10;
                  if ((*(int *)(local_10f0 + 8 + lVar40) < 5) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  fVar60 = *(float *)(*(longlong *)(local_10f0 + lVar40) + 0x10);
                  bVar22 = local_958.LengthFromRoot.ConstAttributeArray ==
                           (TManagedArray<float> *)0x0;
                  if ((local_958.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0)
                     || (bVar21 = TManagedArrayAccessor<float>::IsValidIndex
                                            (&local_958.LengthFromRoot,uVar47), !bVar21)) {
                    pfVar33 = &DefaultLengthFromRoot;
                  }
                  else {
                    pfVar33 = TManagedArrayAccessor<float>::operator[]
                                        (&local_958.LengthFromRoot,uVar47);
                  }
                  fVar61 = *pfVar33;
                  if ((bVar22) ||
                     (bVar22 = TManagedArrayAccessor<float>::IsValidIndex
                                         (&local_958.LengthFromRoot,uVar45), !bVar22)) {
                    pfVar33 = &DefaultLengthFromRoot;
                  }
                  else {
                    pfVar33 = TManagedArrayAccessor<float>::operator[]
                                        (&local_958.LengthFromRoot,uVar45);
                  }
                  fVar64 = local_1188;
                  uVar46 = local_1270;
                  if (fVar53 < fVar62) {
                    fVar56 = (fVar61 - local_1188) * local_10dc;
                    fVar61 = (*pfVar33 - local_1188) * local_10dc;
                    if (fVar67 <= fVar56) {
                      fVar56 = fVar67;
                    }
                    if (fVar56 <= 0.0) {
                      fVar56 = 0.0;
                    }
                  }
                  else {
                    fVar56 = fVar67;
                    if (fVar61 < local_10d4) {
                      fVar56 = 0.0;
                    }
                    fVar61 = fVar67;
                    if (*pfVar33 < local_10d4) {
                      fVar61 = 0.0;
                    }
                  }
                  if (fVar67 <= fVar61) {
                    fVar61 = fVar67;
                  }
                  uVar38 = 0;
                  if ((int)local_1270 < (int)local_1278) {
                    uVar38 = uVar26;
                  }
                  if (fVar61 <= 0.0) {
                    fVar61 = 0.0;
                  }
                  if ((uVar38 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (fVar56 < *(float *)(local_1280.Data + local_11d0) ||
                      fVar56 == *(float *)(local_1280.Data + local_11d0)) {
                    uVar38 = 0;
                    if ((int)uVar46 < (int)local_1278) {
                      uVar38 = uVar26;
                    }
                    if ((uVar38 == 0) &&
                       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar22)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    if (*(float *)(local_1280.Data + local_11d0) <= fVar61) {
                      uVar38 = 0;
                      if ((int)uVar46 < (int)local_1278) {
                        uVar38 = uVar26;
                      }
                      if ((uVar38 == 0) &&
                         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar22)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      fVar61 = (*(float *)(local_1280.Data + local_11d0) - fVar56) /
                               (fVar61 - fVar56);
                      fVar62 = local_f38;
                      local_10cc = fVar61;
                      if (((fVar60 - fVar52) * fVar61 + fVar52) - __real_3a83126f <
                          local_1110->EthyleneThreshold) {
                        local_1140 = ((float)local_f28 - (float)local_f18) * fVar61 +
                                     (float)local_f18;
                        fStack_113c = (local_f28._4_4_ - local_f18._4_4_) * fVar61 + local_f18._4_4_
                        ;
                        local_1138 = (fVar59 - fVar42) * fVar61 + fVar42;
                        if (((local_12a8.Data <= (FScriptContainerElement *)&local_1140) &&
                            ((FScriptContainerElement *)&local_1140 <
                             local_12a8.Data + (longlong)local_12a0._4_4_ * 0xc)) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar23 = (int)local_12a0;
                        if ((int)local_12a0 == local_12a0._4_4_) {
                          iVar23 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x40c,&local_12a8,(int *)((longlong)&local_12a0 + 4));
                        }
                        uVar50 = 0;
                        local_12a0 = CONCAT44(local_12a0._4_4_,iVar23 + 1);
                        *(ulonglong *)(local_12a8.Data + (longlong)iVar23 * 0xc) =
                             CONCAT44(fStack_113c,local_1140);
                        *(float *)(local_12a8.Data + (longlong)iVar23 * 0xc + 8) = local_1138;
                        uVar38 = uVar50;
                        if ((int)uVar46 < (int)local_1278) {
                          uVar38 = uVar26;
                        }
                        if ((uVar38 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        local_1058._s_0.X = 0.0;
                        local_1058._s_0.Y = 1.0;
                        fVar62 = FMath::GetRangePct<float,float>
                                           ((TVector2<float> *)&local_1058._s_0,
                                            *(float *)(local_1280.Data + local_11d0));
                        if (fVar67 <= fVar62) {
                          fVar62 = fVar67;
                        }
                        if (fVar62 <= 0.0) {
                          fVar62 = 0.0;
                        }
                        local_1230 = fVar62 * local_1184 + fVar64;
                        if (((local_12d8.Data <= (FScriptContainerElement *)&local_1230) &&
                            ((FScriptContainerElement *)&local_1230 <
                             local_12d8.Data + (longlong)local_12d0._4_4_ * 4)) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar23 = (int)local_12d0;
                        if ((int)local_12d0 == local_12d0._4_4_) {
                          iVar23 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&local_12d8,(int *)((longlong)&local_12d0 + 4));
                        }
                        local_12d0 = CONCAT44(local_12d0._4_4_,iVar23 + 1);
                        *(float *)(local_12d8.Data + (longlong)iVar23 * 4) = local_1230;
                        if ((local_d28.ConstAttributeArray == (TManagedArray<float> *)0x0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                                ,0x60,L""), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pTVar19 = local_d28.ConstAttributeArray;
                        uVar46 = uVar50;
                        if ((int)uVar47 < *(int *)&(local_d28.ConstAttributeArray)->field_0x18) {
                          uVar46 = uVar43;
                        }
                        if ((uVar46 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        fVar62 = *(float *)(*(longlong *)&pTVar19->field_0x10 +
                                           (longlong)(int)uVar47 * 4);
                        if ((local_d28.ConstAttributeArray == (TManagedArray<float> *)0x0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                                ,0x60,L""), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pTVar19 = local_d28.ConstAttributeArray;
                        uVar46 = local_12e0;
                        if ((int)uVar45 < *(int *)&(local_d28.ConstAttributeArray)->field_0x18) {
                          uVar50 = local_12e0;
                        }
                        if ((uVar50 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        local_10e0 = (*(float *)(*(longlong *)&pTVar19->field_0x10 +
                                                (longlong)(int)uVar45 * 4) - fVar62) * fVar61 +
                                     fVar62;
                        if (fVar67 <= local_10e0) {
                          local_10e0 = fVar67;
                        }
                        if (local_10e0 <= 0.0) {
                          local_10e0 = 0.0;
                        }
                        fVar62 = fVar67;
                        if (&local_10b0->ScaleRamp->EditorCurveData != (FRichCurve *)0x0) {
                          fVar62 = FRichCurve::Eval(&local_10b0->ScaleRamp->EditorCurveData,
                                                    fVar67 - local_10e0,0.0);
                        }
                        bVar22 = local_958.PointScale.ConstAttributeArray ==
                                 (TManagedArray<float> *)0x0;
                        if ((local_958.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0
                            ) || (bVar21 = TManagedArrayAccessor<float>::IsValidIndex
                                                     (&local_958.PointScale,uVar47), !bVar21)) {
                          pfVar33 = &DefaultPScale;
                        }
                        else {
                          pfVar33 = TManagedArrayAccessor<float>::operator[]
                                              (&local_958.PointScale,uVar47);
                        }
                        fVar42 = *pfVar33;
                        if ((bVar22) ||
                           (bVar22 = TManagedArrayAccessor<float>::IsValidIndex
                                               (&local_958.PointScale,uVar45), !bVar22)) {
                          pfVar33 = &DefaultPScale;
                        }
                        else {
                          pfVar33 = TManagedArrayAccessor<float>::operator[]
                                              (&local_958.PointScale,uVar45);
                        }
                        local_1050._s_0.X = 0.0;
                        fVar59 = local_10b0->RandomScaleMin;
                        fVar52 = local_10b0->MinScale;
                        local_1050._s_0.Y = 1.0;
                        local_1224 = local_1224 * 0xbb38435 + 0x3619636b;
                        uVar38 = local_1224 >> 9;
                        fVar62 = (((*pfVar33 - fVar42) * fVar61 + fVar42 + __real_3dcccccd) * fVar62
                                 - fVar62) * local_10b0->BranchScaleImpact + fVar62;
                        if (fVar67 <= fVar62) {
                          fVar62 = fVar67;
                        }
                        if (fVar62 <= 0.0) {
                          fVar62 = 0.0;
                        }
                        fVar62 = FMath::GetRangePct<float,float>
                                           ((TVector2<float> *)&local_1050._s_0,fVar62);
                        auVar55._4_4_ = extraout_var._0_4_;
                        auVar55._0_4_ = fVar62;
                        auVar55._8_4_ = extraout_var._4_4_;
                        auVar55._12_4_ = extraout_var._8_4_;
                        if (fVar67 <= fVar62) {
                          auVar55._0_4_ = fVar67;
                        }
                        if (auVar55._0_4_ <= 0.0) {
                          auVar9._12_4_ = 0;
                          auVar9._0_12_ = auVar55._4_12_;
                          auVar55 = auVar9 << 0x20;
                        }
                        local_122c = (auVar55._0_4_ * (local_10b0->MaxScale - fVar52) + fVar52) *
                                     local_10b0->BaseScale *
                                     ((local_10b0->RandomScaleMax - fVar59) *
                                      ((float)(uVar38 | 0x3f800000) - fVar67) + fVar59);
                        if (((local_12c8.Data <= (FScriptContainerElement *)&local_122c) &&
                            ((FScriptContainerElement *)&local_122c <
                             local_12c8.Data + (longlong)local_12c0._4_4_ * 4)) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar23 = (int)local_12c0;
                        if ((int)local_12c0 == local_12c0._4_4_) {
                          iVar23 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&local_12c8,(int *)((longlong)&local_12c0 + 4));
                        }
                        local_12c0 = CONCAT44(local_12c0._4_4_,iVar23 + 1);
                        *(float *)(local_12c8.Data + (longlong)iVar23 * 4) = local_122c;
                        if ((local_fe8.ConstAttributeArray ==
                             (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                              *)0x0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                                ,0x60,L""), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pTVar15 = local_fe8.ConstAttributeArray;
                        uVar38 = 0;
                        if ((int)uVar47 < *(int *)&(local_fe8.ConstAttributeArray)->field_0x18) {
                          uVar38 = uVar43;
                        }
                        if ((uVar38 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        lVar48 = local_10f8;
                        lVar40 = *(longlong *)&pTVar15->field_0x10;
                        if ((*(int *)(lVar40 + 8 + local_10f8) < 1) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        puVar4 = *(undefined8 **)(lVar40 + lVar48);
                        local_f08 = *puVar4;
                        fVar62 = *(float *)(puVar4 + 1);
                        if ((local_fe8.ConstAttributeArray ==
                             (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                              *)0x0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                                ,0x60,L""), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pTVar15 = local_fe8.ConstAttributeArray;
                        uVar38 = 0;
                        if ((int)uVar45 < *(int *)&(local_fe8.ConstAttributeArray)->field_0x18) {
                          uVar38 = uVar46;
                        }
                        if ((uVar38 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        lVar48 = local_10f0;
                        lVar40 = *(longlong *)&pTVar15->field_0x10;
                        if ((*(int *)(lVar40 + 8 + local_10f0) < 1) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        fVar42 = __real_322bcc77;
                        puVar4 = *(undefined8 **)(lVar40 + lVar48);
                        uVar38 = 1;
                        local_e20 = *puVar4;
                        fVar52 = ((float)local_e20 - (float)local_f08) * fVar61 + (float)local_f08;
                        fVar59 = ((float)((ulonglong)local_e20 >> 0x20) - local_f08._4_4_) * fVar61
                                 + local_f08._4_4_;
                        local_1288 = (*(float *)(puVar4 + 1) - fVar62) * fVar61 + fVar62;
                        local_1290 = CONCAT44(fVar59,fVar52);
                        if (local_1270 == 0) {
                          if (((local_12f0.Data <= (FScriptContainerElement *)&local_1290) &&
                              ((FScriptContainerElement *)&local_1290 <
                               local_12f0.Data + (longlong)local_12e8._4_4_ * 0xc)) &&
                             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar22)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          iVar23 = (int)local_12e8;
                          if ((int)local_12e8 == local_12e8._4_4_) {
                            iVar23 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x40c,&local_12f0,(int *)((longlong)&local_12e8 + 4)
                                               );
                          }
                          local_12e8 = CONCAT44(local_12e8._4_4_,iVar23 + 1);
                          *(undefined8 *)(local_12f0.Data + (longlong)iVar23 * 0xc) = local_1290;
                          *(float *)(local_12f0.Data + (longlong)iVar23 * 0xc + 8) = local_1288;
                          uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                        }
                        else {
                          fVar62 = local_1220 * local_1220 + local_1234 * local_1234 +
                                   local_1174 * local_1174;
                          uVar65 = local_1234;
                          uVar66 = local_1220;
                          uVar63 = local_1174;
                          if ((fVar62 != fVar67) &&
                             (uVar65 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                             uVar66 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                             uVar63 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                             fVar53 <= fVar62)) {
                            fVar67 = fVar67 / SQRT(fVar62);
                            uVar65 = local_1234 * fVar67;
                            uVar66 = local_1220 * fVar67;
                            uVar63 = local_1174 * fVar67;
                          }
                          fVar67 = (float)iVar25 * local_12f4 * __real_3c0efa35;
                          if (fVar67 < __real_00000000) {
                            fVar53 = fVar67 * __real_3e22f983 - __real_3f000000;
                          }
                          else {
                            fVar53 = fVar67 * __real_3e22f983 + __real_3f000000;
                          }
                          fVar67 = fVar67 - (float)(longlong)fVar53 * __real_40c90fdb;
                          fVar53 = __real_40490fdb;
                          if ((__real_3fc90fdb < fVar67) ||
                             (fVar53 = __real_c0490fdb, fVar60 = __real_3f800000,
                             fVar67 < __real_bfc90fdb)) {
                            fVar67 = fVar53 - fVar67;
                            fVar60 = __real_bf800000;
                          }
                          fVar53 = fVar67 * fVar67;
                          fVar67 = (((((__real_3638b88e - fVar53 * __real_32cd365b) * fVar53 -
                                      __real_39500bf1) * fVar53 + ___real_3c088886) * fVar53 -
                                    __real_3e2aaaab) * fVar53 + __real_3f800000) * fVar67;
                          fVar64 = (float)uVar66 * fVar67;
                          fVar61 = (float)uVar65 * fVar67;
                          fVar67 = (float)uVar63 * fVar67;
                          fVar60 = (((((__real_37cfb4c2 - fVar53 * ___real_348bdd11) * fVar53 -
                                      ___real_3ab609aa) * fVar53 + ___real_3d2aaaa3) * fVar53 -
                                    __real_3f000000) * fVar53 + __real_3f800000) * fVar60;
                          fVar53 = local_11f0 * local_11f0 + local_12b4 * local_12b4 +
                                   local_1228 * local_1228;
                          uVar65 = local_11f0;
                          uVar66 = local_1228;
                          uVar63 = local_12b4;
                          if ((fVar53 != __real_3f800000) &&
                             (uVar65 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                             uVar66 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                             uVar63 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                             __real_322bcc77 <= fVar53)) {
                            fVar53 = __real_3f800000 / SQRT(fVar53);
                            uVar63 = local_12b4 * fVar53;
                            uVar65 = local_11f0 * fVar53;
                            uVar66 = local_1228 * fVar53;
                          }
                          fVar58 = (float)uVar66 * fVar61 - (float)uVar65 * fVar67;
                          fVar58 = fVar58 + fVar58;
                          fVar56 = (float)uVar63 * fVar67 - (float)uVar66 * fVar64;
                          fVar53 = (float)uVar65 * fVar64 - (float)uVar63 * fVar61;
                          fVar56 = fVar56 + fVar56;
                          fVar53 = fVar53 + fVar53;
                          fVar68 = (fVar61 * fVar53 - fVar67 * fVar56) +
                                   fVar60 * fVar58 + (float)uVar63;
                          _local_1130 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0.
                                                 _s_0.Y,UE::Math::TVector<float>::ZeroVector.
                                                        field0_0x0._s_0.X);
                          fVar61 = (fVar64 * fVar56 - fVar61 * fVar58) +
                                   fVar60 * fVar53 + (float)uVar66;
                          fVar53 = (fVar67 * fVar58 - fVar64 * fVar53) +
                                   fVar60 * fVar56 + (float)uVar65;
                          fVar67 = fVar59 * fVar59 + fVar52 * fVar52 + local_1288 * local_1288;
                          if (fVar67 == __real_3f800000) {
                            _local_1150 = CONCAT44(fVar59,fVar52);
                            local_1148 = local_1288;
                          }
                          else if (__real_322bcc77 <= fVar67) {
                            fVar67 = __real_3f800000 / SQRT(fVar67);
                            local_1148 = local_1288 * fVar67;
                            fStack_114c = fVar59 * fVar67;
                            local_1150 = fVar52 * fVar67;
                          }
                          else {
                            local_1148 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                            _local_1150 = _local_1130;
                          }
                          local_1290 = CONCAT44(fVar59,fVar52);
                          if (fVar62 == __real_3f800000) {
                            _local_1130 = local_f70;
                            local_1128 = local_1174;
                          }
                          else if (__real_322bcc77 <= fVar62) {
                            fVar67 = __real_3f800000 / SQRT(fVar62);
                            local_1128 = local_1174 * fVar67;
                            fStack_112c = local_1234 * fVar67;
                            local_1130 = local_1220 * fVar67;
                          }
                          else {
                            local_1128 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                          }
                          local_1264 = fVar62;
                          UE::Math::TQuat<float>::FindBetweenNormals
                                    (&local_1028,(TVector<float> *)&local_1130,
                                     (TVector<float> *)&local_1150);
                          pFVar16 = local_f98;
                          fVar59 = local_1174;
                          fVar60 = local_1028.Y * fVar61 - fVar53 * local_1028.Z;
                          fVar52 = local_1028.Z * fVar68 - local_1028.X * fVar61;
                          fVar60 = fVar60 + fVar60;
                          fVar67 = fVar53 * local_1028.X - local_1028.Y * fVar68;
                          fVar52 = fVar52 + fVar52;
                          fVar67 = fVar67 + fVar67;
                          uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                          local_121c = (local_1028.Y * fVar67 - local_1028.Z * fVar52) +
                                       local_1028.W * fVar60 + fVar68;
                          local_1240 = (local_1028.X * fVar52 - local_1028.Y * fVar60) +
                                       local_1028.W * fVar67 + fVar61;
                          local_1248 = (local_1028.Z * fVar60 - local_1028.X * fVar67) +
                                       local_1028.W * fVar52 + fVar53;
                          fVar67 = local_1248 * local_1248 + local_121c * local_121c +
                                   local_1240 * local_1240;
                          if (fVar67 != __real_3f800000) {
                            if (fVar42 <= fVar67) {
                              fVar67 = __real_3f800000 / SQRT(fVar67);
                              local_121c = fVar67 * local_121c;
                              local_1248 = fVar67 * local_1248;
                              local_1240 = fVar67 * local_1240;
                            }
                            else {
                              local_1248 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                              local_1240 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                              local_121c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                              local_e10 = uVar54;
                            }
                          }
                          iVar23 = ((int)local_1294 - (int)local_1298) + 1;
                          if (iVar23 < 1) {
                            iVar23 = 0;
                          }
                          else {
                            local_1224 = local_1224 * 0xbb38435 + 0x3619636b;
                            iVar23 = (int)(((float)(local_1224 >> 9 | 0x3f800000) - __real_3f800000)
                                          * (float)iVar23);
                          }
                          uVar38 = iVar23 + (int)local_1298;
                          iVar23 = 0;
                          fVar67 = __real_3f800000;
                          if (0 < (int)uVar38) {
                            local_10c0 = __real_40490fdb / (float)(int)uVar38;
                            local_1090 = local_121c * local_121c + local_1248 * local_1248 +
                                         local_1240 * local_1240;
                            do {
                              local_1218 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                              uVar63 = local_1234;
                              uVar65 = fVar59;
                              uVar66 = local_1220;
                              if ((fVar62 != fVar67) &&
                                 (uVar63 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                 uVar65 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                                 uVar66 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                                 fVar42 <= fVar62)) {
                                fVar53 = fVar67 / SQRT(fVar62);
                                uVar66 = local_1220 * fVar53;
                                uVar63 = local_1234 * fVar53;
                                uVar65 = fVar59 * fVar53;
                              }
                              fVar53 = local_10c0 * (float)iVar23;
                              if (fVar53 < __real_00000000) {
                                fVar62 = fVar53 * __real_3e22f983 - __real_3f000000;
                              }
                              else {
                                fVar62 = fVar53 * __real_3e22f983 + __real_3f000000;
                              }
                              fVar53 = fVar53 - (float)(longlong)fVar62 * __real_40c90fdb;
                              if (fVar53 <= __real_3fc90fdb) {
                                fVar62 = fVar67;
                                if (fVar53 < __real_bfc90fdb) {
                                  fVar53 = __real_c0490fdb - fVar53;
                                  fVar62 = __real_bf800000;
                                }
                              }
                              else {
                                fVar53 = __real_40490fdb - fVar53;
                                fVar62 = __real_bf800000;
                              }
                              fVar42 = fVar53 * fVar53;
                              fVar53 = (((((__real_3638b88e - fVar42 * __real_32cd365b) * fVar42 -
                                          __real_39500bf1) * fVar42 + ___real_3c088886) * fVar42 -
                                        __real_3e2aaaab) * fVar42 + fVar67) * fVar53;
                              fVar62 = (((((__real_37cfb4c2 - fVar42 * ___real_348bdd11) * fVar42 -
                                          ___real_3ab609aa) * fVar42 + ___real_3d2aaaa3) * fVar42 -
                                        __real_3f000000) * fVar42 + fVar67) * fVar62;
                              fVar42 = (float)uVar66 * fVar53;
                              fVar52 = (float)uVar63 * fVar53;
                              fVar53 = (float)uVar65 * fVar53;
                              uVar65 = local_1248;
                              uVar66 = local_1240;
                              uVar63 = local_121c;
                              if ((local_1090 != fVar67) &&
                                 (uVar65 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                 uVar66 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                                 uVar63 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                                 __real_322bcc77 <= local_1090)) {
                                fVar60 = fVar67 / SQRT(local_1090);
                                uVar65 = fVar60 * local_1248;
                                uVar66 = fVar60 * local_1240;
                                uVar63 = fVar60 * local_121c;
                              }
                              fVar64 = (float)uVar66 * fVar52 - (float)uVar65 * fVar53;
                              fVar56 = (float)uVar63 * fVar53 - (float)uVar66 * fVar42;
                              fVar64 = fVar64 + fVar64;
                              fVar61 = (float)uVar65 * fVar42 - (float)uVar63 * fVar52;
                              fVar56 = fVar56 + fVar56;
                              fVar61 = fVar61 + fVar61;
                              fVar60 = (fVar61 * fVar52 - fVar56 * fVar53) +
                                       fVar64 * fVar62 + (float)uVar63;
                              local_11e0 = (fVar56 * fVar42 - fVar64 * fVar52) +
                                           fVar61 * fVar62 + (float)uVar66;
                              fVar53 = (fVar64 * fVar53 - fVar61 * fVar42) +
                                       fVar56 * fVar62 + (float)uVar65;
                              local_11e8 = CONCAT44(fVar53,fVar60);
                              if (pFVar16->OverrideAxilAngle == false) {
                                if (((local_12f0.Data <= (FScriptContainerElement *)&local_11e8) &&
                                    ((FScriptContainerElement *)&local_11e8 <
                                     local_12f0.Data + (longlong)local_12e8._4_4_ * 0xc)) &&
                                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                       (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar22)) {
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                iVar25 = (int)local_12e8;
                                if ((int)local_12e8 == local_12e8._4_4_) {
                                  iVar25 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x40c,&local_12f0,
                                                      (int *)((longlong)&local_12e8 + 4));
                                }
                                lVar40 = (longlong)iVar25;
                                local_12e8 = CONCAT44(local_12e8._4_4_,iVar25 + 1);
                                *(undefined8 *)(local_12f0.Data + lVar40 * 0xc) = local_11e8;
                                fVar53 = local_11e0;
                              }
                              else {
                                fVar62 = fVar67;
                                if (&pFVar16->AxilAngleRamp->EditorCurveData != (FRichCurve *)0x0) {
                                  fVar53 = FRichCurve::Eval(&pFVar16->AxilAngleRamp->EditorCurveData
                                                            ,fVar67 - local_10e0,0.0);
                                  auVar57._4_4_ = extraout_var_00._0_4_;
                                  auVar57._0_4_ = fVar53;
                                  auVar57._8_4_ = extraout_var_00._4_4_;
                                  auVar57._12_4_ = extraout_var_00._8_4_;
                                  if (fVar67 <= fVar53) {
                                    auVar57._0_4_ = fVar67;
                                  }
                                  if (auVar57._0_4_ <= 0.0) {
                                    auVar8._12_4_ = 0;
                                    auVar8._0_12_ = auVar57._4_12_;
                                    auVar57 = auVar8 << 0x20;
                                  }
                                  uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0.
                                                    _s_0.Y,UE::Math::TVector<float>::ZeroVector.
                                                           field0_0x0._s_0.X);
                                  fVar60 = (float)local_11e8;
                                  fVar53 = local_11e8._4_4_;
                                  fVar62 = auVar57._0_4_;
                                }
                                fVar52 = fVar53 * fVar53 + fVar60 * fVar60 + local_11e0 * local_11e0
                                ;
                                fVar42 = (float)((ulonglong)uVar54 >> 0x20);
                                if (fVar52 == fVar67) {
                                  local_11e8 = CONCAT44(fVar53,fVar60);
                                  uVar65 = fVar60;
                                  fVar61 = fVar53;
                                  uVar1 = local_11e8;
                                  local_10a0 = local_11e0;
                                }
                                else {
                                  uVar65 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                                  fVar61 = fVar42;
                                  uVar1 = uVar54;
                                  local_10a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.
                                               Z;
                                  if (__real_322bcc77 <= fVar52) {
                                    fVar67 = fVar67 / SQRT(fVar52);
                                    local_10a0 = local_11e0 * fVar67;
                                    local_10a8 = CONCAT44(fVar53 * fVar67,(undefined4)local_10a8);
                                    uVar65 = fVar60 * fVar67;
                                    fVar61 = fVar53 * fVar67;
                                    uVar1 = local_10a8;
                                  }
                                }
                                local_10a8 = uVar1;
                                fVar67 = local_1290._4_4_ * local_1290._4_4_ +
                                         (float)local_1290 * (float)local_1290 +
                                         local_1288 * local_1288;
                                if (fVar67 == __real_3f800000) {
                                  local_1094 = local_1288;
                                  local_109c = local_1290;
                                  uVar66 = (float)local_1290;
                                  uVar54 = local_109c;
                                  fVar42 = local_1290._4_4_;
                                }
                                else {
                                  uVar66 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                                  local_1094 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.
                                               Z;
                                  if (__real_322bcc77 <= fVar67) {
                                    fVar53 = __real_3f800000 / SQRT(fVar67);
                                    fVar42 = local_1290._4_4_ * fVar53;
                                    local_1094 = local_1288 * fVar53;
                                    local_109c = CONCAT44(fVar42,(undefined4)local_109c);
                                    uVar66 = (float)local_1290 * fVar53;
                                    uVar54 = local_109c;
                                  }
                                }
                                local_109c = uVar54;
                                fVar52 = fVar61 * (float)uVar66 - fVar42 * (float)uVar65;
                                fVar60 = local_1094 * (float)uVar65 - local_10a0 * (float)uVar66;
                                fVar42 = fVar42 * local_10a0 - local_1094 * fVar61;
                                fVar53 = fVar42 * fVar42 + fVar60 * fVar60 + fVar52 * fVar52;
                                uVar65 = fVar52;
                                uVar66 = fVar60;
                                uVar63 = fVar42;
                                if ((fVar53 != __real_3f800000) &&
                                   (uVar65 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                                   uVar66 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                   uVar63 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                                   __real_322bcc77 <= fVar53)) {
                                  fVar53 = __real_3f800000 / SQRT(fVar53);
                                  uVar65 = fVar52 * fVar53;
                                  uVar66 = fVar60 * fVar53;
                                  uVar63 = fVar42 * fVar53;
                                }
                                fVar53 = ((fVar62 * pFVar16->AxilAngleRampUpperValue -
                                          pFVar16->AxilAngle) * pFVar16->AxilAngleRampEffect +
                                         pFVar16->AxilAngle) * __real_3c0efa35;
                                if (fVar53 < __real_00000000) {
                                  fVar62 = fVar53 * __real_3e22f983 - __real_3f000000;
                                }
                                else {
                                  fVar62 = fVar53 * __real_3e22f983 + __real_3f000000;
                                }
                                fVar53 = fVar53 - (float)(longlong)fVar62 * __real_40c90fdb;
                                if (fVar53 <= __real_3fc90fdb) {
                                  fVar62 = __real_3f800000;
                                  if (fVar53 < __real_bfc90fdb) {
                                    fVar53 = __real_c0490fdb - fVar53;
                                    fVar62 = __real_bf800000;
                                  }
                                }
                                else {
                                  fVar53 = __real_40490fdb - fVar53;
                                  fVar62 = __real_bf800000;
                                }
                                fVar42 = fVar53 * fVar53;
                                fVar53 = (((((__real_3638b88e - fVar42 * __real_32cd365b) * fVar42 -
                                            __real_39500bf1) * fVar42 + ___real_3c088886) * fVar42 -
                                          __real_3e2aaaab) * fVar42 + __real_3f800000) * fVar53;
                                fVar52 = (float)uVar63 * fVar53;
                                fVar60 = (float)uVar66 * fVar53;
                                fVar53 = (float)uVar65 * fVar53;
                                fVar62 = (((((__real_37cfb4c2 - fVar42 * ___real_348bdd11) * fVar42
                                            - ___real_3ab609aa) * fVar42 + ___real_3d2aaaa3) *
                                           fVar42 - __real_3f000000) * fVar42 + __real_3f800000) *
                                         fVar62;
                                uVar65 = local_1290._4_4_;
                                uVar66 = local_1288;
                                uVar63 = (float)local_1290;
                                if ((fVar67 != __real_3f800000) &&
                                   (uVar65 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                   uVar66 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                                   uVar63 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                                   __real_322bcc77 <= fVar67)) {
                                  fVar67 = __real_3f800000 / SQRT(fVar67);
                                  uVar63 = (float)local_1290 * fVar67;
                                  uVar65 = local_1290._4_4_ * fVar67;
                                  uVar66 = local_1288 * fVar67;
                                }
                                fVar42 = (float)uVar66 * fVar60 - (float)uVar65 * fVar53;
                                fVar61 = (float)uVar63 * fVar53 - (float)uVar66 * fVar52;
                                fVar42 = fVar42 + fVar42;
                                fVar67 = (float)uVar65 * fVar52 - (float)uVar63 * fVar60;
                                fVar61 = fVar61 + fVar61;
                                fVar67 = fVar67 + fVar67;
                                local_1120 = (fVar67 * fVar60 - fVar61 * fVar53) +
                                             fVar42 * fVar62 + (float)uVar63;
                                local_1118 = (fVar61 * fVar52 - fVar42 * fVar60) +
                                             fVar67 * fVar62 + (float)uVar66;
                                fStack_111c = (fVar42 * fVar53 - fVar67 * fVar52) +
                                              fVar61 * fVar62 + (float)uVar65;
                                local_1218 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                                if (((local_12f0.Data <= (FScriptContainerElement *)&local_1120) &&
                                    ((FScriptContainerElement *)&local_1120 <
                                     local_12f0.Data + (longlong)local_12e8._4_4_ * 0xc)) &&
                                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                       (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar22)) {
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                iVar25 = (int)local_12e8;
                                if ((int)local_12e8 == local_12e8._4_4_) {
                                  iVar25 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x40c,&local_12f0,
                                                      (int *)((longlong)&local_12e8 + 4));
                                }
                                fVar67 = __real_3f800000;
                                lVar40 = (longlong)iVar25;
                                local_12e8 = CONCAT44(local_12e8._4_4_,iVar25 + 1);
                                *(ulonglong *)(local_12f0.Data + lVar40 * 0xc) =
                                     CONCAT44(fStack_111c,local_1120);
                                fVar53 = local_1118;
                              }
                              *(float *)(local_12f0.Data + lVar40 * 0xc + 8) = fVar53;
                              if (iVar23 != 0) {
                                uVar46 = 0;
                                if ((int)((int)local_12a0 - 1U) < (int)local_12a0) {
                                  uVar46 = ~((int)local_12a0 - 1U) >> 0x1f;
                                }
                                if ((uVar46 == 0) &&
                                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar22)) {
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                local_1108 = *(undefined8 *)
                                              (local_12a8.Data +
                                              (longlong)((int)local_12a0 + -1) * 0xc);
                                local_1100 = *(undefined4 *)
                                              (local_12a8.Data +
                                              (longlong)((int)local_12a0 + -1) * 0xc + 8);
                                uVar46 = 0;
                                if ((int)((int)local_12c0 - 1U) < (int)local_12c0) {
                                  uVar46 = ~((int)local_12c0 - 1U) >> 0x1f;
                                }
                                if (uVar46 == 0) {
                                  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                  if (bVar22) {
                                    pcVar6 = (code *)swi(3);
                                    (*pcVar6)();
                                    return;
                                  }
                                }
                                local_1250 = *(undefined4 *)
                                              (local_12c8.Data +
                                              (longlong)((int)local_12c0 + -1) * 4);
                                uVar46 = 0;
                                if ((int)((int)local_12d0 - 1U) < (int)local_12d0) {
                                  uVar46 = ~((int)local_12d0 - 1U) >> 0x1f;
                                }
                                if (uVar46 == 0) {
                                  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                  if (bVar22) {
                                    pcVar6 = (code *)swi(3);
                                    (*pcVar6)();
                                    return;
                                  }
                                }
                                local_124c = *(undefined4 *)
                                              (local_12d8.Data +
                                              (longlong)((int)local_12d0 + -1) * 4);
                                if (((local_12a8.Data <= (FScriptContainerElement *)&local_1108) &&
                                    ((FScriptContainerElement *)&local_1108 <
                                     local_12a8.Data + (longlong)local_12a0._4_4_ * 0xc)) &&
                                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                       (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar22)) {
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                if ((int)local_12a0 == local_12a0._4_4_) {
                                  iVar25 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x40c,&local_12a8,
                                                      (int *)((longlong)&local_12a0 + 4));
                                  local_12a0 = CONCAT44(local_12a0._4_4_,iVar25);
                                }
                                lVar40 = (longlong)(int)local_12a0;
                                local_12a0 = CONCAT44(local_12a0._4_4_,(int)local_12a0 + 1);
                                *(undefined8 *)(local_12a8.Data + lVar40 * 0xc) = local_1108;
                                *(undefined4 *)(local_12a8.Data + lVar40 * 0xc + 8) = local_1100;
                                if (((local_12c8.Data <= (FScriptContainerElement *)&local_1250) &&
                                    ((FScriptContainerElement *)&local_1250 <
                                     local_12c8.Data + (longlong)local_12c0._4_4_ * 4)) &&
                                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                       (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar22)) {
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                iVar25 = (int)local_12c0;
                                if ((int)local_12c0 == local_12c0._4_4_) {
                                  iVar25 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x404,&local_12c8,
                                                      (int *)((longlong)&local_12c0 + 4));
                                }
                                local_12c0 = CONCAT44(local_12c0._4_4_,iVar25 + 1);
                                *(undefined4 *)(local_12c8.Data + (longlong)iVar25 * 4) = local_1250
                                ;
                                if (((local_12d8.Data <= (FScriptContainerElement *)&local_124c) &&
                                    ((FScriptContainerElement *)&local_124c <
                                     local_12d8.Data + (longlong)local_12d0._4_4_ * 4)) &&
                                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                       (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar22)) {
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                iVar25 = (int)local_12d0;
                                if ((int)local_12d0 == local_12d0._4_4_) {
                                  iVar25 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x404,&local_12d8,
                                                      (int *)((longlong)&local_12d0 + 4));
                                }
                                local_12d0 = CONCAT44(local_12d0._4_4_,iVar25 + 1);
                                *(undefined4 *)(local_12d8.Data + (longlong)iVar25 * 4) = local_124c
                                ;
                              }
                              iVar23 = iVar23 + 1;
                              uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0
                                                .Y,UE::Math::TVector<float>::ZeroVector.field0_0x0.
                                                   _s_0.X);
                              fVar62 = local_1264;
                              uVar26 = local_10c8;
                              fVar42 = __real_322bcc77;
                            } while (iVar23 < (int)uVar38);
                          }
                          local_1244 = local_1244 + 1;
                          fVar53 = __real_322bcc77;
                          fVar61 = local_10cc;
                        }
                        if (local_fe8.ConstAttributeArray ==
                            (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                             *)0x0) {
                          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                              ,0x60,L"");
                          if (bVar22) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                        }
                        pTVar15 = local_fe8.ConstAttributeArray;
                        uVar46 = 0;
                        if ((int)uVar47 < *(int *)&(local_fe8.ConstAttributeArray)->field_0x18) {
                          uVar46 = uVar43;
                        }
                        if (uVar46 == 0) {
                          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar22) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                        }
                        lVar48 = local_10f8;
                        lVar40 = *(longlong *)&pTVar15->field_0x10;
                        if (*(int *)(lVar40 + 8 + local_10f8) < 3) {
                          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar22) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                        }
                        lVar40 = *(longlong *)(lVar40 + lVar48);
                        local_fb0 = *(undefined8 *)(lVar40 + 0x18);
                        fVar62 = *(float *)(lVar40 + 0x20);
                        if (local_fe8.ConstAttributeArray ==
                            (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                             *)0x0) {
                          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                              ,0x60,L"");
                          if (bVar22) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                        }
                        pTVar15 = local_fe8.ConstAttributeArray;
                        uVar46 = 0;
                        if ((int)uVar45 < *(int *)&(local_fe8.ConstAttributeArray)->field_0x18) {
                          uVar46 = local_12e0;
                        }
                        if (uVar46 == 0) {
                          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar22) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                        }
                        lVar48 = local_10f0;
                        lVar40 = *(longlong *)&pTVar15->field_0x10;
                        if (*(int *)(local_10f0 + 8 + lVar40) < 3) {
                          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar22) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          uVar54 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                        }
                        _local_1170 = uVar54;
                        lVar40 = *(longlong *)(lVar48 + lVar40);
                        local_e20 = *(undefined8 *)(lVar40 + 0x18);
                        fVar62 = (*(float *)(lVar40 + 0x20) - fVar62) * fVar61 + fVar62;
                        fVar59 = ((float)((ulonglong)local_e20 >> 0x20) - local_fb0._4_4_) * fVar61
                                 + local_fb0._4_4_;
                        fVar52 = ((float)local_e20 - (float)local_fb0) * fVar61 + (float)local_fb0;
                        fVar42 = fVar59 * fVar59 + fVar52 * fVar52 + fVar62 * fVar62;
                        if (fVar42 == fVar67) {
                          fStack_117c = fVar59;
                          local_1180 = fVar52;
                          local_1178 = fVar62;
                        }
                        else {
                          _local_1180 = _local_1170;
                          local_1178 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                          if (fVar53 <= fVar42) {
                            fVar42 = fVar67 / SQRT(fVar42);
                            local_1178 = fVar42 * fVar62;
                            fStack_117c = fVar42 * fVar59;
                            local_1180 = fVar42 * fVar52;
                          }
                        }
                        fVar62 = local_1290._4_4_ * local_1290._4_4_ +
                                 (float)local_1290 * (float)local_1290 + local_1288 * local_1288;
                        if (fVar62 == fVar67) {
                          _local_1170 = local_1290;
                          local_1168 = local_1288;
                        }
                        else {
                          local_1168 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                          if (fVar53 <= fVar62) {
                            fVar62 = fVar67 / SQRT(fVar62);
                            local_1168 = local_1288 * fVar62;
                            fStack_116c = local_1290._4_4_ * fVar62;
                            local_1170 = (float)local_1290 * fVar62;
                          }
                        }
                        UE::Math::TQuat<float>::FindBetweenNormals
                                  (&local_1018,(TVector<float> *)&local_1170,
                                   (TVector<float> *)&local_1180);
                        fVar59 = local_1018.Y * local_1288 - local_1018.Z * local_1290._4_4_;
                        fVar42 = local_1018.Z * (float)local_1290 - local_1018.X * local_1288;
                        fVar59 = fVar59 + fVar59;
                        fVar62 = local_1018.X * local_1290._4_4_ - local_1018.Y * (float)local_1290;
                        fVar42 = fVar42 + fVar42;
                        fVar62 = fVar62 + fVar62;
                        local_1160 = (fVar62 * local_1018.Y - fVar42 * local_1018.Z) +
                                     local_1018.W * fVar59 + (float)local_1290;
                        fStack_115c = (local_1018.Z * fVar59 - fVar62 * local_1018.X) +
                                      local_1018.W * fVar42 + local_1290._4_4_;
                        local_1158 = (fVar42 * local_1018.X - local_1018.Y * fVar59) +
                                     fVar62 * local_1018.W + local_1288;
                        uVar46 = local_1270;
                        fVar62 = local_f38;
                        if (0 < (int)uVar38) {
                          uVar39 = (ulonglong)uVar38;
                          do {
                            if (((local_1210.Data <= (FScriptContainerElement *)&local_1160) &&
                                ((FScriptContainerElement *)&local_1160 <
                                 local_1210.Data + (longlong)local_1208._4_4_ * 0xc)) &&
                               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar22)) {
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                            iVar23 = (int)local_1208;
                            if ((int)local_1208 == local_1208._4_4_) {
                              iVar23 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x40c,&local_1210,
                                                  (int *)((longlong)&local_1208 + 4));
                            }
                            local_1208 = CONCAT44(local_1208._4_4_,iVar23 + 1);
                            *(ulonglong *)(local_1210.Data + (longlong)iVar23 * 0xc) =
                                 CONCAT44(fStack_115c,local_1160);
                            *(float *)(local_1210.Data + (longlong)iVar23 * 0xc + 8) = local_1158;
                            uVar39 = uVar39 - 1;
                            uVar46 = local_1270;
                            fVar62 = local_f38;
                          } while (uVar39 != 0);
                        }
                      }
                    }
                  }
                  uVar39 = (ulonglong)local_11d8;
                  uVar41 = local_f90;
                  iVar25 = local_1244;
                } while ((int)local_11d8 < local_1260.ArrayNum + -1);
              }
              local_1270 = uVar46 + 1;
              local_11d0 = local_11d0 + 4;
              param_1 = local_10e8;
              iVar23 = local_123c;
            } while ((int)local_1270 < (int)local_1278);
          }
          FVar14 = PV::GroupNames::FoliageGroup;
          local_e30 = PV::AttributeNames::FoliagePivotPoint;
          local_e28 = PV::GroupNames::FoliageGroup;
          pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&param_1->Map,(TTuple<FName,FName> *)&local_e30);
          this = (FValueType *)&pTVar30->field_0x10;
          if (pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            this = (FValueType *)0x0;
          }
          if ((this != (FValueType *)0x0) && (this->ArrayType == FVectorType)) {
            FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector<float>_>(this);
          }
          if (local_ce8.NamesAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0) {
            local_12e0 = FManagedArrayCollection::NumElements
                                   (local_ce8.NamesAttribute.ConstCollection,
                                    local_ce8.NamesAttribute.Group);
          }
          else {
            local_12e0 = (**(code **)(*(longlong *)local_ce8.NamesAttribute.ConstAttributeArray +
                                     0x60))();
          }
          iVar25 = local_123c;
          lVar40 = (longlong)iVar23 % (longlong)(int)local_12e0;
          uVar46 = 0;
          if (0 < (int)local_12d0) {
            lVar48 = 0;
            lVar51 = 0;
            do {
              iVar23 = (int)lVar40;
              if ((param_1 == (FManagedArrayCollection *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!IsConst()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                      ,0x41,L""), bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_11d8 = FManagedArrayCollection::AddElements(param_1,1,FVar14);
              uVar47 = ~uVar46 >> 0x1f;
              local_e68.BranchId = iVar25;
              uVar26 = 0;
              if ((int)uVar46 < (int)local_12a0) {
                uVar26 = uVar47;
              }
              local_e68.NameId = iVar23;
              if ((uVar26 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_e68.PivotPoint.field0_0x0._0_8_ = *(undefined8 *)(local_12a8.Data + lVar51);
              local_e68.PivotPoint.field0_0x0._s_0.Z =
                   (float)*(undefined4 *)(local_12a8.Data + lVar51 + 8);
              uVar26 = 0;
              if ((int)uVar46 < (int)local_12e8) {
                uVar26 = uVar47;
              }
              if ((uVar26 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_e68.UpVector.field0_0x0._0_8_ = *(undefined8 *)(local_12f0.Data + lVar51);
              local_e68.UpVector.field0_0x0._s_0.Z =
                   (float)*(undefined4 *)(local_12f0.Data + lVar51 + 8);
              uVar26 = 0;
              if ((int)uVar46 < (int)local_1208) {
                uVar26 = uVar47;
              }
              if ((uVar26 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_e68.NormalVector.field0_0x0._0_8_ = *(undefined8 *)(local_1210.Data + lVar51);
              local_e68.NormalVector.field0_0x0._s_0.Z =
                   (float)*(undefined4 *)(local_1210.Data + lVar51 + 8);
              uVar26 = 0;
              if ((int)uVar46 < (int)local_12c0) {
                uVar26 = uVar47;
              }
              if ((uVar26 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_e68.Scale = *(float *)(local_12c8.Data + lVar48);
              uVar26 = 0;
              if ((int)uVar46 < (int)local_12d0) {
                uVar26 = uVar47;
              }
              if ((uVar26 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_e68.ParentBoneID = -1;
              local_e68.LengthFromRoot = *(float *)(local_12d8.Data + lVar48);
              PV::Facades::FFoliageFacade::SetFoliageEntry(&local_ce8,local_11d8,&local_e68);
              uVar46 = uVar46 + 1;
              lVar40 = (longlong)(iVar23 + 1) % (longlong)(int)local_12e0;
              lVar51 = lVar51 + 0xc;
              lVar48 = lVar48 + 4;
              param_1 = local_10e8;
              iVar23 = iVar25;
            } while ((int)uVar46 < (int)local_12d0);
          }
          if (local_1260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1260.AllocatorInstance.Data);
          }
          if (local_12c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12c8.Data);
          }
          if (local_1210.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1210.Data);
          }
          if (local_12f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12f0.Data);
          }
          if (local_12d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12d8.Data);
          }
          if (local_12a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12a8.Data);
          }
          param_3 = local_1110;
          uVar46 = local_1268;
          fVar42 = __real_41200000;
          if (local_1280.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1280.Data);
            param_3 = local_1110;
            uVar46 = local_1268;
            fVar42 = __real_41200000;
          }
        }
        local_123c = iVar23 + 1;
        fVar62 = __real_3a83126f;
        uVar26 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      } while (local_123c < local_126c);
    }
    local_198._0_8_ = 0;
    local_198._8_8_ = 0;
    local_178 = 0;
    local_170 = 0;
    local_16c = 0x80;
    local_168 = 0xffffffff;
    local_164 = 0;
    local_158 = (ForElementType<FSetElementId>)0x0;
    local_150 = 0;
    local_12b0 = 0;
    while( true ) {
      pTVar44 = local_ce8.NameIdsAttribute.ConstAttributeArray;
      if (local_ce8.NameIdsAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) {
        iVar23 = FManagedArrayCollection::NumElements
                           (local_ce8.NameIdsAttribute.ConstCollection,
                            local_ce8.NameIdsAttribute.Group);
      }
      else {
        iVar23 = (**(code **)(*(longlong *)local_ce8.NameIdsAttribute.ConstAttributeArray + 0x60))
                           (local_ce8.NameIdsAttribute.ConstAttributeArray);
      }
      if (iVar23 <= local_12b0) break;
      pFVar31 = PV::Facades::FFoliageFacade::GetFoliageEntry(&local_ce8,&local_a08,local_12b0);
      local_10d0 = pFVar31->BranchId;
      pTVar28 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<int_const_&>
                          ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            *)local_198,local_10d0,(int *)&local_10d0);
      pFVar5 = (pTVar28->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_12b0) &&
          ((FScriptContainerElement *)&local_12b0 < pFVar5 + (longlong)pTVar28->ArrayMax * 4)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar23 = pTVar28->ArrayNum;
      if (iVar23 == pTVar28->ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar28->AllocatorInstance,&pTVar28->ArrayMax);
      }
      pTVar28->ArrayNum = iVar23 + 1;
      *(int *)((pTVar28->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_12b0;
      local_12b0 = local_12b0 + 1;
    }
    local_1008.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
    local_1008._padding_._0_4_ = 0;
    local_1008._padding_._4_4_ = 1;
    local_1008.UnvisitedBitMask = 0xffffffff;
    local_1008.CurrentBitIndex = 0;
    local_1008.BaseBitIndex = 0;
    if (local_170 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1008);
    }
    uStack_11b0 = CONCAT44(local_1008._padding_._4_4_,(undefined4)local_1008._padding_);
    local_11b8 = (longlong *)local_198;
    uStack_1198 = CONCAT44(local_1008._28_4_,local_1008.BaseBitIndex);
    local_1190 = local_198._8_4_ - local_164;
    pTStack_11a8 = local_1008.Array;
    uStack_11a0 = local_1008.UnvisitedBitMask;
    uStack_119c = local_1008.CurrentBitIndex;
    uStack_ee0 = CONCAT44(local_1008.CurrentBitIndex,local_1008.UnvisitedBitMask);
    uStack_ed0._4_4_ = uStack_118c;
    uStack_ed0._0_4_ = local_1190;
    local_ee8 = local_1008.Array;
    local_ef8._0_8_ = local_11b8;
    unique0x10006c57 = uStack_11b0;
    local_ed8 = uStack_1198;
    pTVar32 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_a68,(TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),
                         local_170);
    local_11b8 = (longlong *)local_198;
    uStack_11b0 = pTVar32->_padding_;
    pTStack_11a8 = pTVar32->Array;
    uVar10 = pTVar32->UnvisitedBitMask;
    uVar11 = pTVar32->CurrentBitIndex;
    uVar12 = pTVar32->Array;
    uVar13 = pTVar32->UnvisitedBitMask;
    local_d58._24_4_ = uVar13;
    local_d58._16_8_ = uVar12;
    uStack_1198 = *(longlong *)&pTVar32->BaseBitIndex;
    local_1190 = local_198._8_4_ - local_164;
    local_d58._28_4_ = uVar11;
    uStack_d30._4_4_ = uStack_118c;
    uStack_d30._0_4_ = local_1190;
    uStack_11a0 = uVar10;
    uStack_119c = uVar11;
    local_d58._0_8_ = local_11b8;
    local_d58._8_8_ = uStack_11b0;
    local_d38 = uStack_1198;
    bVar22 = TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=
                       ((TRangedForIterator *)local_ef8,(TRangedForIterator *)local_d58);
    if (bVar22) {
      do {
        PV::Facades::FFoliageFacade::SetFoliageIdsArray
                  (&local_ce8,
                   *(int *)((longlong)uStack_ee0._4_4_ * 0x20 + *(longlong *)local_ef8._0_8_),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)local_ef8._0_8_ + 8 + (longlong)uStack_ee0._4_4_ * 0x20));
        uStack_ee0 = CONCAT44(uStack_ee0._4_4_,(uint)uStack_ee0 & ~uStack_eec);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_ef8 + 8));
        bVar22 = TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=
                           ((TRangedForIterator *)local_ef8,(TRangedForIterator *)local_d58);
        pTVar44 = local_ce8.NameIdsAttribute.ConstAttributeArray;
      } while (bVar22);
    }
    local_150 = 0;
    if (local_158 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_158);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_198);
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId358,"PVFoliageDistributorNode::EthyleneRemove",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVFoliage.cpp"
               ,0x166);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId358);
  }
  if (param_3->OverrideDistribution == false) {
    local_1048.ComparisonIndex.Value = 0;
    local_1048.Number = 0;
    TManagedArrayAccessor<UE::Math::TVector<float>_>::
    TManagedArrayAccessor<UE::Math::TVector<float>_>
              (&local_dc8,param_1,&PV::AttributeNames::FoliagePivotPoint,
               &PV::GroupNames::FoliageGroup,&local_1048);
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_1264 = 0.0;
    if (0 < local_126c) {
      do {
        fVar42 = local_1264;
        pTVar28 = PV::Facades::FBranchFacade::GetPoints(&local_528,(int)local_1264);
        local_1200.Data = (FScriptContainerElement *)0x0;
        local_11f8 = pTVar28->ArrayNum;
        lVar40 = (longlong)local_11f8;
        pFVar5 = (pTVar28->AllocatorInstance).Data;
        if (local_11f8 == 0) {
          local_11f4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_11f8,0,&local_1200,local_11f8,&local_11f4);
          memcpy(local_1200.Data,pFVar5,lVar40 << 2);
        }
        pTVar28 = PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch(&local_ce8,(int)fVar42);
        local_11c8.Data = (FScriptContainerElement *)0x0;
        local_11c0 = pTVar28->ArrayNum;
        lVar40 = (longlong)local_11c0;
        pFVar5 = (pTVar28->AllocatorInstance).Data;
        if (local_11c0 == 0) {
          local_11bc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_11c0,0,&local_11c8,local_11c0,&local_11bc);
          memcpy(local_11c8.Data,pFVar5,lVar40 << 2);
        }
        uVar41 = 0;
        local_1e8._8_4_ = 0;
        local_1e8._0_8_ = 0;
        local_1e8._8_8_ = 0;
        local_1c8 = (uint *)0x0;
        local_1c0 = 0;
        local_1bc = 0x80;
        local_1b8 = 0xffffffff;
        local_1b4 = 0;
        local_1a8 = (ForElementType<FSetElementId>)0x0;
        local_1a0 = 0;
        uVar39 = uVar41;
        if (0 < local_11f8 + -1) {
          do {
            uVar49 = 0;
            uVar46 = (uint)uVar39;
            fVar42 = (float)(uVar46 + 1);
            local_12b4 = fVar42;
            if (0 < local_11c0) {
              uVar47 = ~uVar46 >> 0x1f;
              local_1268 = ~(uint)fVar42 >> 0x1f;
              uVar39 = uVar49;
              local_12e0 = uVar47;
              do {
                uVar45 = 0;
                if ((int)uVar46 < local_11f8) {
                  uVar45 = uVar47;
                }
                if ((uVar45 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar23 = *(int *)(local_1200.Data + uVar41);
                if (((local_958.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0)
                    || (iVar23 < 0)) ||
                   (iVar25 = (**(code **)(*(longlong *)local_958.LengthFromRoot.ConstAttributeArray
                                         + 0x60))(), iVar25 <= iVar23)) {
                  pfVar33 = &DefaultLengthFromRoot;
                }
                else {
                  pfVar33 = TManagedArrayAccessor<float>::operator[]
                                      (&local_958.LengthFromRoot,iVar23);
                }
                fVar59 = *pfVar33;
                uVar45 = 0;
                if ((int)fVar42 < local_11f8) {
                  uVar45 = local_1268;
                }
                if ((uVar45 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar23 = *(int *)(local_1200.Data + uVar41 + 4);
                if (((local_958.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0)
                    || (iVar23 < 0)) ||
                   (iVar25 = (**(code **)(*(longlong *)local_958.LengthFromRoot.ConstAttributeArray
                                         + 0x60))(), iVar25 <= iVar23)) {
                  pfVar33 = &DefaultLengthFromRoot;
                }
                else {
                  pfVar33 = TManagedArrayAccessor<float>::operator[]
                                      (&local_958.LengthFromRoot,iVar23);
                }
                fVar52 = *pfVar33;
                uVar43 = (uint)uVar39;
                uVar45 = 0;
                if ((int)uVar43 < local_11c0) {
                  uVar45 = ~uVar43 >> 0x1f;
                }
                if ((uVar45 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar31 = PV::Facades::FFoliageFacade::GetFoliageEntry
                                    (&local_ce8,&local_9d0,*(int *)(local_11c8.Data + uVar49 * 4));
                fVar60 = pFVar31->LengthFromRoot;
                if ((fVar59 <= fVar60) && (fVar60 <= fVar52)) {
                  uVar45 = 0;
                  if ((int)uVar46 < local_11f8) {
                    uVar45 = uVar47;
                  }
                  if ((uVar45 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar47 = *(uint *)(local_1200.Data + uVar41);
                  if ((local_e00.ConstAttributeArray ==
                       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                          ,0x60,L""), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pTVar18 = local_e00.ConstAttributeArray;
                  uVar45 = 0;
                  if ((int)uVar47 < *(int *)&(local_e00.ConstAttributeArray)->field_0x18) {
                    uVar45 = ~uVar47 >> 0x1f;
                  }
                  if ((uVar45 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar40 = *(longlong *)&pTVar18->field_0x10;
                  if ((*(int *)(lVar40 + 8 + (longlong)(int)uVar47 * 0x10) < 5) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  fVar61 = *(float *)(*(longlong *)(lVar40 + (longlong)(int)uVar47 * 0x10) + 0x10);
                  uVar47 = 0;
                  if ((int)local_12b4 < local_11f8) {
                    uVar47 = local_1268;
                  }
                  if ((uVar47 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar47 = *(uint *)(local_1200.Data + uVar41 + 4);
                  if ((local_e00.ConstAttributeArray ==
                       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                          ,0x60,L""), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pTVar18 = local_e00.ConstAttributeArray;
                  uVar45 = 0;
                  if ((int)uVar47 < *(int *)&(local_e00.ConstAttributeArray)->field_0x18) {
                    uVar45 = ~uVar47 >> 0x1f;
                  }
                  if ((uVar45 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar40 = *(longlong *)&pTVar18->field_0x10;
                  if ((*(int *)(lVar40 + 8 + (longlong)(int)uVar47 * 0x10) < 5) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  fVar64 = *(float *)(*(longlong *)(lVar40 + (longlong)(int)uVar47 * 0x10) + 0x10);
                  if (fVar53 < (float)((uint)(fVar52 - fVar59) & uVar26)) {
                    fVar59 = (fVar60 - fVar59) / (fVar52 - fVar59);
                  }
                  else {
                    fVar59 = fVar67;
                    if (fVar60 < fVar52) {
                      fVar59 = 0.0;
                    }
                  }
                  if (fVar67 <= fVar59) {
                    fVar59 = fVar67;
                  }
                  if (fVar59 <= 0.0) {
                    fVar59 = 0.0;
                  }
                  fVar42 = local_12b4;
                  uVar47 = local_12e0;
                  if (local_1110->EthyleneThreshold <=
                      (fVar59 * (fVar61 - fVar64) + fVar64) - fVar62) {
                    uVar47 = 0;
                    if ((int)uVar43 < local_11c0) {
                      uVar47 = ~uVar43 >> 0x1f;
                    }
                    if ((uVar47 == 0) &&
                       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar22)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1e8,
                               &local_f80,(bool *)(local_11c8.Data + uVar49 * 4));
                    fVar42 = local_12b4;
                    uVar47 = local_12e0;
                  }
                }
                uVar39 = (ulonglong)(uVar43 + 1);
                uVar49 = uVar49 + 1;
              } while ((int)(uVar43 + 1) < local_11c0);
            }
            uVar41 = uVar41 + 4;
            uVar39 = (ulonglong)(uint)fVar42;
          } while ((int)fVar42 < local_11f8 + -1);
          uVar41 = (ulonglong)local_1c0;
          fVar42 = local_1264;
        }
        uVar45 = 0;
        uVar47 = 0;
        uVar43 = (uint)uVar41;
        uVar46 = 1;
        uStack_119c = uVar45;
        if (uVar43 != 0) {
          puVar35 = (uint *)(local_1e8 + 0x10);
          if (local_1c8 != (uint *)0x0) {
            puVar35 = local_1c8;
          }
          uVar46 = *puVar35;
          uVar47 = 0;
          uVar45 = 0;
          while (uVar46 == 0) {
            lVar40 = (longlong)(int)uVar45;
            uVar47 = uVar47 + 0x20;
            uVar45 = uVar45 + 1;
            uVar46 = 1;
            uStack_119c = uVar43;
            if ((int)((uVar43 - 1) + ((int)(uVar43 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar45)
            goto LAB_14da7f934;
            uVar46 = (puVar35 + 1)[lVar40];
          }
          uVar46 = -uVar46 & uVar46;
          uVar39 = (ulonglong)uVar46 * 2 + 1;
          lVar40 = 0x3f;
          if (uVar39 != 0) {
            for (; uVar39 >> lVar40 == 0; lVar40 = lVar40 + -1) {
            }
          }
          local_f7c = (int)lVar40;
          uStack_119c = local_f7c + -1 + uVar47;
          if ((int)uVar43 < (int)uStack_119c) {
            uStack_119c = uVar43;
          }
        }
LAB_14da7f934:
        local_1190 = local_1e8._8_4_ - local_1b4;
        local_11b8 = (longlong *)local_1e8;
        pTStack_11a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
        uStack_11b0 = CONCAT44(uVar46,uVar45);
        uStack_11a0 = 0xffffffff;
        uStack_eb0 = 0xffffffff;
        auStack_ec0._8_8_ = pTStack_11a8;
        uStack_eac = uStack_119c;
        uVar46 = uVar43 & 0xffffffe0;
        auStack_ec0._0_8_ = uStack_11b0;
        uStack_1198 = CONCAT44(local_a2c,uVar47);
        uStack_ea0 = CONCAT44(uStack_118c,local_1190);
        iVar23 = (int)uVar43 >> 5;
        local_ea8 = uStack_1198;
        uVar47 = uVar43;
        local_ec8 = local_11b8;
        if (((int)uVar43 < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), uVar47 = local_1c0, bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar43 != uVar47) {
          puVar35 = (uint *)(local_1e8 + 0x10);
          if (local_1c8 != (uint *)0x0) {
            puVar35 = local_1c8;
          }
          uVar45 = -1 << ((byte)uVar41 & 0x1f) & puVar35[iVar23];
          while (uVar45 == 0) {
            lVar40 = (longlong)iVar23;
            uVar46 = uVar46 + 0x20;
            iVar23 = iVar23 + 1;
            uVar43 = uVar47;
            if ((int)((uVar47 - 1) + ((int)(uVar47 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
            goto LAB_14da7fa73;
            uVar45 = (puVar35 + 1)[lVar40];
          }
          uVar39 = (ulonglong)(-uVar45 & uVar45) * 2 + 1;
          lVar40 = 0x3f;
          if (uVar39 != 0) {
            for (; uVar39 >> lVar40 == 0; lVar40 = lVar40 + -1) {
            }
          }
          local_f78 = (int)lVar40;
          uVar43 = (uVar46 - 1) + local_f78;
          if ((int)uVar47 < (int)uVar43) {
            uVar43 = uVar47;
          }
        }
LAB_14da7fa73:
        while( true ) {
          plVar17 = local_ec8;
          if ((int)local_ec8[1] - *(int *)((longlong)local_ec8 + 0x34) != (int)uStack_ea0) {
            local_12b8[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_12b8);
          }
          if (((uStack_eac == uVar43) &&
              ((TBitArray<FDefaultBitArrayAllocator> *)auStack_ec0._8_8_ ==
               (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10))) &&
             (plVar17 == (longlong *)local_1e8)) break;
          local_10b8[0] = *(undefined4 *)(*plVar17 + (longlong)(int)uStack_eac * 0xc);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_148,local_fa0,(bool *)local_10b8);
          uStack_eb0 = uStack_eb0 & ~auStack_ec0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_ec0);
        }
        local_1a0 = 0;
        if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1a8);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_1e8);
        if (local_11c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11c8.Data);
        }
        if (local_1200.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1200.Data);
        }
        local_1264 = (float)((int)fVar42 + 1);
        pTVar44 = local_ce8.NameIdsAttribute.ConstAttributeArray;
      } while ((int)local_1264 < local_126c);
    }
    if (local_dc8.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      uVar46 = FManagedArrayCollection::NumElements(local_dc8.ConstCollection,local_dc8.Group);
      lVar40 = local_148.Elements._0_8_;
      FVar37 = local_148.Hash.SecondaryData;
    }
    else {
      uVar46 = (**(code **)(*(longlong *)local_dc8.ConstAttributeArray + 0x60))();
      lVar40 = local_148.Elements._0_8_;
      FVar37 = local_148.Hash.SecondaryData;
    }
joined_r0x00014da7fbb5:
    uVar46 = uVar46 - 1;
    if (-1 < (int)uVar46) {
      pTVar44 = local_ce8.NameIdsAttribute.ConstAttributeArray;
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
        FVar36 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (FVar37 != (ForElementType<FSetElementId>)0x0) {
          FVar36 = FVar37;
        }
        for (iVar23 = *(int *)((longlong)FVar36 + (ulonglong)(local_148.HashSize - 1U & uVar46) * 4)
            ; iVar23 != -1; iVar23 = *(int *)(lVar40 + 4 + (longlong)iVar23 * 0xc)) {
          if (*(uint *)(lVar40 + (longlong)iVar23 * 0xc) == uVar46) {
            if ((local_dc8.Collection == (FManagedArrayCollection *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!IsConst()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x47,L""), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (**(code **)((local_dc8.Collection)->_padding_ + 0x20))
                      (local_dc8.Collection,&local_dc8.Group,1,uVar46);
            pTVar44 = local_ce8.NameIdsAttribute.ConstAttributeArray;
            lVar40 = local_148.Elements._0_8_;
            FVar37 = local_148.Hash.SecondaryData;
            break;
          }
        }
      }
      goto joined_r0x00014da7fbb5;
    }
    local_238._0_8_ = 0;
    local_238._8_8_ = 0;
    local_218 = (uint *)0x0;
    uVar46 = 0;
    local_210 = 0;
    local_20c = 0x80;
    local_208 = 0xffffffff;
    local_204 = 0;
    local_1f8 = (ForElementType<FSetElementId>)0x0;
    local_1f0 = 0;
    local_12ac = 0;
    while( true ) {
      if (pTVar44 == (TManagedArray<int> *)0x0) {
        iVar23 = FManagedArrayCollection::NumElements
                           (local_ce8.NameIdsAttribute.ConstCollection,
                            local_ce8.NameIdsAttribute.Group);
      }
      else {
        iVar23 = (**(code **)(*(longlong *)pTVar44 + 0x60))(pTVar44);
      }
      uVar26 = local_210;
      if (iVar23 <= local_12ac) break;
      pFVar31 = PV::Facades::FFoliageFacade::GetFoliageEntry(&local_ce8,&local_998,local_12ac);
      local_10d8 = pFVar31->BranchId;
      if (local_238._8_4_ != local_204) {
        FVar37 = (ForElementType<FSetElementId>)local_200;
        if (local_1f8 != (ForElementType<FSetElementId>)0x0) {
          FVar37 = local_1f8;
        }
        uVar26 = *(uint *)((longlong)FVar37 + (ulonglong)(local_1f0 - 1U & local_10d8) * 4);
        while (uVar26 != 0xffffffff) {
          puVar35 = (uint *)((longlong)(int)uVar26 * 0x20 + local_238._0_8_);
          if (*puVar35 == local_10d8) {
            if (puVar35 != (uint *)0x0) goto LAB_14da7fdcd;
            break;
          }
          uVar26 = puVar35[6];
        }
      }
      local_f88 = &local_10d8;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_238,(uint)&local_10c4,
                 (TKeyInitializer<int_const_&> *)(ulonglong)local_10d8,(bool *)&local_f88);
      puVar35 = (uint *)((longlong)local_10c4 * 0x20 + local_238._0_8_);
LAB_14da7fdcd:
      if (((*(int **)(puVar35 + 2) <= &local_12ac) &&
          (&local_12ac < *(int **)(puVar35 + 2) + (int)puVar35[5])) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar26 = puVar35[4];
      if (uVar26 == puVar35[5]) {
        uVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(puVar35 + 2),(int *)(puVar35 + 5));
      }
      puVar35[4] = uVar26 + 1;
      *(int *)(((ForAnyElementType *)(puVar35 + 2))->Data + (longlong)(int)uVar26 * 4) = local_12ac;
      local_12ac = local_12ac + 1;
      pTVar44 = local_ce8.NameIdsAttribute.ConstAttributeArray;
    }
    uStack_119c = uVar46;
    uVar47 = uVar46;
    if (local_210 != 0) {
      puVar35 = (uint *)(local_238 + 0x10);
      if (local_218 != (uint *)0x0) {
        puVar35 = local_218;
      }
      uVar45 = *puVar35;
      uVar47 = 0;
      uVar46 = 0;
      while (uVar45 == 0) {
        lVar40 = (longlong)(int)uVar46;
        uVar47 = uVar47 + 0x20;
        uVar46 = uVar46 + 1;
        uStack_119c = local_210;
        if ((int)((local_210 - 1) + ((int)(local_210 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar46)
        goto LAB_14da7fef9;
        uVar45 = (puVar35 + 1)[lVar40];
      }
      local_1040 = CONCAT44(local_1040._4_4_,-uVar45 & uVar45);
      uVar39 = (ulonglong)(-uVar45 & uVar45) * 2 + 1;
      lVar40 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      local_f74 = (int)lVar40;
      uStack_119c = local_f74 + -1 + uVar47;
      if ((int)local_210 < (int)uStack_119c) {
        uStack_119c = local_210;
      }
    }
LAB_14da7fef9:
    local_11b8 = (longlong *)local_238;
    uVar45 = local_210 & 0xffffffe0;
    pTStack_11a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10);
    local_1190 = local_238._8_4_ - local_204;
    uStack_11a0 = 0xffffffff;
    TStack_e90.CurrentBitIndex = uStack_119c;
    TStack_e90.UnvisitedBitMask = 0xffffffff;
    uStack_11b0 = CONCAT44((int)local_1040,uVar46);
    uStack_1198 = CONCAT44(local_a0c,uVar47);
    iVar23 = (int)local_210 >> 5;
    uStack_e70 = CONCAT44(uStack_118c,local_1190);
    bVar34 = (byte)local_210;
    TStack_e90._24_8_ = uStack_1198;
    local_e98 = local_11b8;
    TStack_e90._padding_ = uStack_11b0;
    TStack_e90.Array = pTStack_11a8;
    if (((int)local_210 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar26 != local_210) {
      puVar35 = (uint *)(local_238 + 0x10);
      if (local_218 != (uint *)0x0) {
        puVar35 = local_218;
      }
      uVar46 = -1 << (bVar34 & 0x1f) & puVar35[iVar23];
      while (uVar46 == 0) {
        lVar40 = (longlong)iVar23;
        uVar45 = uVar45 + 0x20;
        iVar23 = iVar23 + 1;
        uVar26 = local_210;
        if ((int)((local_210 - 1) + ((int)(local_210 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_14da80050;
        uVar46 = (puVar35 + 1)[lVar40];
      }
      uVar39 = (ulonglong)(-uVar46 & uVar46) * 2 + 1;
      lVar40 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      uVar26 = (uVar45 - 1) + (int)lVar40;
      if ((int)local_210 < (int)uVar26) {
        uVar26 = local_210;
      }
    }
LAB_14da80050:
    while( true ) {
      plVar17 = local_e98;
      if ((int)local_e98[1] - *(int *)((longlong)local_e98 + 0x34) != (int)uStack_e70) {
        `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_11ec);
      }
      if (((TStack_e90.CurrentBitIndex == uVar26) &&
          (TStack_e90.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10))) &&
         (plVar17 == (longlong *)local_238)) break;
      lVar40 = *plVar17;
      PV::Facades::FFoliageFacade::SetFoliageIdsArray
                (&local_ce8,*(int *)((longlong)TStack_e90.CurrentBitIndex * 0x20 + lVar40),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)
                 (lVar40 + 8 + (longlong)TStack_e90.CurrentBitIndex * 0x20));
      TStack_e90.UnvisitedBitMask = TStack_e90.UnvisitedBitMask & ~TStack_e90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e90);
    }
    local_1f0 = 0;
    if (local_1f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1f8);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_238);
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

