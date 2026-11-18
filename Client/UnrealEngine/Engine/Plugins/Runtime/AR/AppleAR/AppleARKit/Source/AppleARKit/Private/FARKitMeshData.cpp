// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 6

// ~FARKitMeshData @ 14cfd0ce0

void __thiscall FARKitMeshData::~FARKitMeshData(FARKitMeshData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FARKitMeshData__6B_;
  pFVar1 = (this->AccumulatedNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DummyColorData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DummyUVData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Classifications).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TangentData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBrickDataReceipt_IMRMesh__6B_;
  return;
}

// ClearAllMeshData @ 14cfd3230

void __cdecl FARKitMeshData::ClearAllMeshData(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
           *)&CachedMeshData,0);
                    /* WARNING: Could not recover jumptable at 0x00014cfd325a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  return;
}

// GetClassificationAtLocation @ 14cfd5ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FARKitMeshData::GetClassificationAtLocation
          (FARKitMeshData *this,TVector<double> *param_1,TTransform<double> *param_2,uchar *param_3,
          TVector<double> *param_4,float param_5)

{
  double *pdVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_GetClassification> FVar17;
  FName FVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar50;
  undefined4 uVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  FColor_u_0 local_158 [2];
  FName local_150;
  FName local_148;
  double local_138;
  double dStack_130;
  double local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  TTransform<double> *local_108;
  TVector<double> *local_100;
  FName local_f8 [24];
  
  uVar21 = 2;
  uVar20 = 0;
  local_100 = param_4;
  uVar19 = 0;
  FVar17 = StatPtr_STAT_GetClassification;
  local_110 = (FScriptContainerElement *)param_3;
  local_108 = param_2;
  if (StatPtr_STAT_GetClassification == (FThreadSafeStaticStat<FStat_STAT_GetClassification>)0x0) {
    pFVar16 = ::FName::FName(local_f8,"STAT_GetClassification");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_GetClassification>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetClassification,*pFVar16,
                        L"Get Classification","STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar17;
  bVar7 = false;
  bVar8 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_158[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_158[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_150.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_150.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_150,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitMeshData.cpp"
                   ,0x4d);
        bVar7 = true;
        bVar8 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar10 = true;
      goto LAB_14cfd5c5c;
    }
  }
  bVar8 = bVar11;
  bVar7 = bVar10;
  bVar10 = false;
  FVar18 = local_148;
LAB_14cfd5c5c:
  iVar2 = (this->Classifications).ArrayNum;
  if (iVar2 != 0) {
    dVar47 = (param_2->Rotation).XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar50 = (param_2->Rotation).XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar6 = (param_2->Rotation).ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar59 = (param_2->Rotation).ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar40._8_4_ = SUB84(dVar50,0);
    auVar40._0_8_ = dVar47;
    uVar51 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar40._12_4_ = uVar51;
    dVar26 = (param_1->field0_0x0)._s_0.Z - (param_2->Translation).ZW.m128d_f64[0];
    auVar43._8_4_ = SUB84(dVar50,0);
    auVar43._0_8_ = dVar47;
    auVar43._12_4_ = uVar51;
    dVar42 = auVar40._8_8_;
    auVar37._8_4_ = SUB84(dVar59,0);
    auVar37._0_8_ = dVar6;
    auVar37._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    auVar44 = blendpd(auVar43,auVar37,2);
    dVar39 = (param_1->field0_0x0)._s_0.X - (param_2->Translation).XY.m128d_f64[0];
    dVar52 = (param_1->field0_0x0)._s_0.Y - (param_2->Translation).XY.m128d_f64[1];
    uVar51 = (undefined4)((ulonglong)dVar52 >> 0x20);
    auVar28._8_4_ = SUB84(dVar6,0);
    auVar28._0_8_ = dVar42;
    auVar28._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar63._8_4_ = SUB84(dVar52,0);
    auVar63._0_8_ = dVar39;
    auVar63._12_4_ = uVar51;
    auVar36._8_4_ = SUB84(dVar52,0);
    auVar36._0_8_ = dVar39;
    auVar36._12_4_ = uVar51;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = dVar26;
    auVar37 = blendpd(auVar36,auVar41,2);
    auVar64._0_8_ = auVar63._8_8_ * dVar47 - dVar42 * dVar39;
    auVar64._8_8_ = dVar26 * dVar50 - auVar28._8_8_ * dVar52;
    auVar38._0_8_ = auVar37._0_8_ * dVar6 - dVar26 * auVar44._0_8_;
    auVar38._8_8_ = auVar37._8_8_ * dVar59 - auVar44._8_8_ * 0.0;
    auVar37 = blendpd(auVar64,auVar38,2);
    dVar27 = auVar64._8_8_ + auVar64._8_8_;
    dVar35 = auVar38._0_8_ + auVar38._0_8_;
    uVar51 = SUB84(dVar35,0);
    uVar58 = (undefined4)((ulonglong)dVar35 >> 0x20);
    auVar65._0_8_ = auVar37._0_8_ + auVar37._0_8_;
    auVar65._8_8_ = auVar37._8_8_ + auVar37._8_8_;
    auVar60._8_4_ = uVar51;
    auVar60._0_8_ = dVar27;
    auVar60._12_4_ = uVar58;
    auVar29._8_4_ = uVar51;
    auVar29._0_8_ = dVar27;
    auVar29._12_4_ = uVar58;
    auVar53._8_4_ = uVar51;
    auVar53._0_8_ = dVar27;
    auVar53._12_4_ = uVar58;
    auVar37 = blendpd(auVar53,auVar65,2);
    auVar61._0_8_ = auVar60._8_8_ * dVar47 - dVar27 * dVar42;
    auVar61._8_8_ = auVar65._0_8_ * dVar50 - auVar29._8_8_ * dVar6;
    auVar30._8_4_ = SUB84(auVar65._8_8_,0);
    auVar30._0_8_ = auVar65._0_8_;
    auVar30._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
    auVar66._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(param_2->Scale3D).XY.m128d_f64);
    auVar66._8_4_ = _UNK_15061cc88 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
    auVar66._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
    auVar54._0_8_ = auVar37._0_8_ * dVar6 - auVar65._0_8_ * auVar44._0_8_;
    auVar54._8_8_ = auVar37._8_8_ * dVar59 - auVar30._8_8_ * auVar44._8_8_;
    auVar37 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
    lVar23 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar37._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar37._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64);
    lVar24 = -(ulonglong)(auVar66._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar25 = -(ulonglong)(auVar66._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar31._8_4_ = SUB84(auVar61._8_8_,0);
    auVar31._0_8_ = auVar61._0_8_;
    auVar31._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
    auVar67._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar44._4_4_,
                          ~(uint)lVar24 & auVar44._0_4_);
    auVar67._8_4_ = ~(uint)lVar25 & auVar44._8_4_;
    auVar67._12_4_ = ~(uint)((ulonglong)lVar25 >> 0x20) & auVar44._12_4_;
    auVar44._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar44._0_8_ = auVar37._0_8_;
    auVar44._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
    local_138 = auVar67._0_8_ * (dVar27 * dVar59 + dVar39 + auVar31._8_8_);
    dStack_130 = auVar67._8_8_ * (dVar35 * dVar59 + dVar52 + auVar54._0_8_);
    auVar44 = blendpd(auVar61,auVar54,2);
    local_128 = (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar37._4_4_,
                                 ~(uint)lVar23 & auVar37._0_4_) *
                (auVar65._0_8_ * dVar59 + dVar26 + auVar44._0_8_);
    if (((((this->BoundingBox).Min.field0_0x0._s_0.X <= local_138 &&
           local_138 != (this->BoundingBox).Min.field0_0x0._s_0.X) &&
         (local_138 < (this->BoundingBox).Max.field0_0x0._s_0.X)) &&
        (pdVar1 = &(this->BoundingBox).Min.field0_0x0._s_0.Y,
        *pdVar1 <= dStack_130 && dStack_130 != *pdVar1)) &&
       (((dStack_130 < (this->BoundingBox).Max.field0_0x0._s_0.Y &&
         (pdVar1 = &(this->BoundingBox).Min.field0_0x0._s_0.Z,
         *pdVar1 <= local_128 && local_128 != *pdVar1)) &&
        (local_128 < (this->BoundingBox).Max.field0_0x0._s_0.Z)))) {
      if (iVar2 * 3 != (this->Indices).ArrayNum) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Classifications.Num() * 3 == Indices.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitMeshData.cpp"
                            ,0x5a,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
      }
      fVar9 = __real_3eaaaaab;
      if (0 < (this->Classifications).ArrayNum) {
        uVar22 = uVar20;
        do {
          uVar13 = uVar19;
          if ((int)(uVar21 - 2) < (this->Indices).ArrayNum) {
            uVar13 = ~(uVar21 - 2) >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
          }
          uVar13 = *(uint *)((this->Indices).AllocatorInstance.Data + uVar22);
          lVar23 = (longlong)(int)uVar13;
          uVar14 = uVar19;
          if ((int)uVar13 < (this->Vertices).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
          }
          local_120 = (this->Vertices).AllocatorInstance.Data;
          uVar13 = uVar19;
          if ((int)(uVar21 - 1) < (this->Indices).ArrayNum) {
            uVar13 = ~(uVar21 - 1) >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
          }
          uVar13 = *(uint *)((this->Indices).AllocatorInstance.Data + uVar22 + 4);
          lVar24 = (longlong)(int)uVar13;
          uVar15 = 0;
          uVar14 = uVar15;
          if ((int)uVar13 < (this->Vertices).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
          }
          local_118 = (this->Vertices).AllocatorInstance.Data;
          uVar13 = uVar15;
          if ((int)uVar21 < (this->Indices).ArrayNum) {
            uVar13 = ~uVar21 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
          }
          uVar13 = *(uint *)((this->Indices).AllocatorInstance.Data + uVar22 + 8);
          lVar25 = (longlong)(int)uVar13;
          uVar14 = uVar15;
          if ((int)uVar13 < (this->Vertices).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
          }
          pFVar3 = (this->Vertices).AllocatorInstance.Data;
          dVar6 = (double)((*(float *)(local_120 + lVar23 * 0xc) +
                            *(float *)(local_118 + lVar24 * 0xc) + *(float *)(pFVar3 + lVar25 * 0xc)
                           ) * fVar9);
          dVar59 = (double)((*(float *)(local_118 + lVar24 * 0xc + 4) +
                             *(float *)(local_120 + lVar23 * 0xc + 4) +
                            *(float *)(pFVar3 + lVar25 * 0xc + 4)) * fVar9);
          dVar39 = dVar59 - dStack_130;
          dVar35 = dVar6 - local_138;
          dVar52 = (double)((*(float *)(local_118 + lVar24 * 0xc + 8) +
                             *(float *)(local_120 + lVar23 * 0xc + 8) +
                            *(float *)(pFVar3 + lVar25 * 0xc + 8)) * fVar9);
          dVar27 = dVar52 - local_128;
          uVar13 = (uint)uVar20;
          if (dVar39 * dVar39 + dVar35 * dVar35 + dVar27 * dVar27 < (double)(param_5 * param_5)) {
            if ((int)uVar13 < (this->Classifications).ArrayNum) {
              uVar15 = ~uVar13 >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar4 = (code *)swi(3);
                uVar12 = (*pcVar4)();
                return (bool)uVar12;
              }
            }
            bVar11 = true;
            *local_110 = (this->Classifications).AllocatorInstance.Data[(int)uVar13];
            auVar37 = *(undefined1 (*) [16])(local_108->Rotation).ZW.m128d_f64;
            dVar26 = auVar37._0_8_;
            dVar6 = dVar6 * (local_108->Scale3D).XY.m128d_f64[0];
            dVar59 = dVar59 * (local_108->Scale3D).XY.m128d_f64[1];
            uVar51 = (undefined4)((ulonglong)dVar59 >> 0x20);
            auVar62._0_8_ = dVar52 * (local_108->Scale3D).ZW.m128d_f64[0];
            auVar62._8_8_ = (local_108->Scale3D).ZW.m128d_f64[1] * 0.0;
            auVar44 = *(undefined1 (*) [16])(local_108->Rotation).XY.m128d_f64;
            auVar55._8_4_ = SUB84(dVar59,0);
            auVar55._0_8_ = dVar6;
            auVar55._12_4_ = uVar51;
            dVar39 = (local_108->Rotation).ZW.m128d_f64[1];
            auVar41 = blendpd(auVar44,auVar37,2);
            auVar56._0_8_ = auVar55._8_8_ * auVar44._0_8_ - auVar44._8_8_ * dVar6;
            auVar56._8_8_ = auVar62._0_8_ * auVar44._8_8_ - dVar26 * dVar59;
            auVar32._8_4_ = SUB84(dVar59,0);
            auVar32._0_8_ = dVar6;
            auVar32._12_4_ = uVar51;
            auVar44 = blendpd(auVar32,auVar62,2);
            auVar33._0_8_ = auVar44._0_8_ * dVar26 - auVar41._0_8_ * auVar62._0_8_;
            auVar33._8_8_ = auVar44._8_8_ * auVar37._8_8_ - auVar41._8_8_ * auVar62._8_8_;
            auVar44 = *(undefined1 (*) [16])(local_108->Rotation).XY.m128d_f64;
            auVar41 = blendpd(auVar56,auVar33,2);
            dVar27 = auVar56._8_8_ + auVar56._8_8_;
            dVar35 = auVar33._0_8_ + auVar33._0_8_;
            uVar51 = (undefined4)((ulonglong)dVar35 >> 0x20);
            auVar57._0_8_ = auVar41._0_8_ + auVar41._0_8_;
            auVar57._8_8_ = auVar41._8_8_ + auVar41._8_8_;
            auVar48._8_4_ = SUB84(dVar35,0);
            auVar48._0_8_ = dVar27;
            auVar48._12_4_ = uVar51;
            auVar45._8_4_ = SUB84(dVar35,0);
            auVar45._0_8_ = dVar27;
            auVar45._12_4_ = uVar51;
            auVar41 = blendpd(auVar45,auVar57,2);
            auVar49._0_8_ = auVar48._8_8_ * auVar44._0_8_ - auVar44._8_8_ * dVar27;
            auVar49._8_8_ = auVar57._0_8_ * auVar44._8_8_ - dVar26 * dVar35;
            auVar34._8_4_ = SUB84(auVar49._8_8_,0);
            auVar34._0_8_ = auVar49._0_8_;
            auVar34._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
            auVar44 = blendpd(auVar44,auVar37,2);
            auVar46._0_8_ = auVar41._0_8_ * dVar26 - auVar44._0_8_ * auVar57._0_8_;
            auVar46._8_8_ = auVar41._8_8_ * auVar37._8_8_ - auVar44._8_8_ * auVar57._8_8_;
            auVar37 = blendpd(auVar49,auVar46,2);
            dVar35 = dVar35 * dVar39 + dVar59 + auVar46._0_8_ +
                     (local_108->Translation).XY.m128d_f64[1];
            dVar59 = (local_108->Translation).ZW.m128d_f64[0];
            auVar5._8_4_ = SUB84(dVar35,0);
            auVar5._0_8_ = dVar27 * dVar39 + dVar6 + auVar34._8_8_ +
                           (local_108->Translation).XY.m128d_f64[0];
            auVar5._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
            *(undefined1 (*) [16])&local_100->field0_0x0 = auVar5;
            *(double *)((longlong)&local_100->field0_0x0 + 0x10) =
                 auVar57._0_8_ * dVar39 + auVar62._0_8_ + auVar37._0_8_ + dVar59;
            goto LAB_14cfd6205;
          }
          uVar20 = (ulonglong)(uVar13 + 1);
          uVar21 = uVar21 + 3;
          uVar22 = uVar22 + 0xc;
        } while ((int)(uVar13 + 1) < (this->Classifications).ArrayNum);
      }
    }
  }
  bVar11 = false;
LAB_14cfd6205:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return bVar11;
}

// GetMeshData @ 14cfd6e00

TSharedPtr<FARKitMeshData,1> * __cdecl
FARKitMeshData::GetMeshData(TSharedPtr<FARKitMeshData,1> *__return_storage_ptr__,FGuid *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  ulong64 uVar4;
  undefined8 *puVar5;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
                      *)&CachedMeshData,(uint)uVar4,param_1);
  if (iVar3 != -1) {
    lVar1 = CachedMeshData._0_8_ + (longlong)iVar3 * 0x28;
    puVar5 = (undefined8 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      __return_storage_ptr__->Object = (FARKitMeshData *)*puVar5;
      pTVar2 = (TReferenceControllerBase<1> *)puVar5[1];
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FARKitMeshData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// RemoveMeshData @ 14cfdcca0

void __cdecl FARKitMeshData::RemoveMeshData(FGuid *param_1)

{
  ulong64 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  if (CachedMeshData._8_4_ != CachedMeshData._52_4_) {
    uVar1 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
                         *)&CachedMeshData,(uint)uVar1,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014cfdccee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  return;
}

// UpdateMRMesh @ 14cfdf930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FARKitMeshData::UpdateMRMesh
          (TTransform<double> *param_1,TSharedPtr<FARKitMeshData,1> *param_2,
          UMRMeshComponent *param_3)

{
  code *pcVar1;
  FARKitMeshData *pFVar2;
  bool bVar3;
  TMatrix<double> *pTVar4;
  undefined1 auStack_1e8 [32];
  FARKitMeshData *local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  undefined8 local_1a8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_1a0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_198;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *local_190;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_188;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  FARKitMeshData *local_138;
  TReferenceControllerBase<1> *local_130;
  undefined8 local_128;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_120;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_118;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *local_110;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_108;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_100;
  TVector<double>_u_0 local_f8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (param_3 != (UMRMeshComponent *)0x0) {
    USceneComponent::SetRelativeTransform
              ((USceneComponent *)param_3,param_1,false,(FHitResult *)0x0,None);
    pcVar1 = *(code **)(*(longlong *)&param_3->field_0x548 + 0x18);
    local_138 = param_2->Object;
    local_130 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_130->SharedReferenceCount = (atomic<int>)((int)local_130->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_128 = 0;
    if (param_2->Object == (FARKitMeshData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_120 = &param_2->Object->Vertices;
    if (param_2->Object == (FARKitMeshData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_118 = &param_2->Object->DummyUVData;
    if (param_2->Object == (FARKitMeshData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_110 = &param_2->Object->TangentData;
    if (param_2->Object == (FARKitMeshData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_108 = &param_2->Object->DummyColorData;
    if (param_2->Object == (FARKitMeshData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_100 = &param_2->Object->Indices;
    if (param_2->Object == (FARKitMeshData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = param_2->Object;
    pTVar4 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_b8);
    UE::Math::TBox<double>::TransformBy(&pFVar2->BoundingBox,(TBox<double> *)&local_f8._s_0,pTVar4);
    local_1b8 = local_138;
    local_1b0 = local_130;
    local_1a8 = local_128;
    local_1a0 = local_120;
    local_198 = local_118;
    local_190 = local_110;
    local_188 = local_108;
    local_178 = local_f8._s_0.X;
    dStack_170 = local_f8._s_0.Y;
    local_180 = local_100;
    local_168 = local_f8._s_0.Z;
    uStack_160 = uStack_e0;
    local_130 = (TReferenceControllerBase<1> *)0x0;
    local_138 = (FARKitMeshData *)0x0;
    local_158 = local_d8;
    uStack_154 = uStack_d4;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
    local_148 = local_c8;
    (*pcVar1)(&param_3->field_0x548,&local_1b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

