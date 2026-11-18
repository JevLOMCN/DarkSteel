// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// StaticStruct @ 145f22de0

UScriptStruct * __cdecl FHeightmapTextureEdgeSnapshot::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHeightmapTextureEdgeSnapshot.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FHeightmapTextureEdgeSnapshot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHeightmapTextureEdgeSnapshot,(UObject *)pUVar1,
                         L"HeightmapTextureEdgeSnapshot");
  }
  return Z_Registration_Info_UScriptStruct_FHeightmapTextureEdgeSnapshot.OuterSingleton;
}

// operator() @ 145f281a0

void __thiscall
`FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::<lambda_1>::
operator()(void *this,FHeightmapTexel *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar16 = __real_3ff0000000000000;
  dVar1 = *(double *)((longlong)this + 0x18);
  lVar8 = (longlong)*(int *)this;
  dVar18 = *(double *)((longlong)this + 0x10);
  dVar14 = *(double *)((longlong)this + 8);
  dVar4 = (double)(((float)((uint)(param_1->field0_0x0).Data[2] * 0x100 +
                           (uint)(param_1->field0_0x0).Data[1]) - __real_47000000) * __real_3c000000
                  ) * dVar1;
  dVar7 = (double)(((float)((uint)param_1[lVar8].field0_0x0.Data[2] * 0x100 +
                           (uint)param_1[lVar8].field0_0x0.Data[1]) - __real_47000000) *
                  __real_3c000000) * dVar1;
  dVar13 = (double)(((float)((uint)param_1[1].field0_0x0.Data[2] * 0x100 +
                            (uint)param_1[1].field0_0x0.Data[1]) - __real_47000000) *
                   __real_3c000000) * dVar1;
  uVar9 = SUB84(dVar14,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)dVar14 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar1 = (double)(((float)((uint)param_1[lVar8 + 1].field0_0x0.Data[2] * 0x100 +
                           (uint)param_1[lVar8 + 1].field0_0x0.Data[1]) - __real_47000000) *
                  __real_3c000000) * dVar1;
  dVar17 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar18,0) ^ (uint)__xmm_80000000000000008000000000000000);
  uVar5 = (dVar13 - dVar4) * dVar17;
  dVar17 = dVar17 * (double)CONCAT44(uVar11,uVar9);
  uVar6 = (dVar1 - dVar13) * (double)CONCAT44(uVar11,uVar9);
  dVar13 = (double)uVar6 * (double)uVar6 + (double)uVar5 * (double)uVar5 + dVar17 * dVar17;
  if (dVar13 != __real_3ff0000000000000) {
    if (dVar13 < __real_3e45798ee0000000) {
      uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar12 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      goto LAB_145f2832c;
    }
    dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
    uVar5 = (double)uVar5 * dVar13;
    uVar6 = (double)uVar6 * dVar13;
    dVar17 = dVar17 * dVar13;
  }
  uVar10 = SUB84(dVar17,0);
  uVar12 = (undefined4)((ulonglong)dVar17 >> 0x20);
LAB_145f2832c:
  auVar2._8_4_ = (int)uVar6;
  auVar2._0_8_ = uVar5;
  auVar2._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined1 (*) [16])&param_2->field0_0x0 = auVar2;
  (param_2->field0_0x0)._s_0.Z = (double)CONCAT44(uVar12,uVar10);
  dVar13 = (dVar7 - dVar1) * dVar18;
  dVar1 = (dVar4 - dVar7) * dVar14;
  dVar18 = dVar18 * dVar14;
  dVar14 = dVar1 * dVar1 + dVar13 * dVar13 + dVar18 * dVar18;
  uVar15 = dVar18;
  uVar5 = dVar13;
  uVar6 = dVar1;
  if ((dVar14 != dVar16) &&
     (uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar14)) {
    dVar16 = dVar16 / SQRT(dVar14);
    uVar15 = dVar18 * dVar16;
    uVar5 = dVar16 * dVar13;
    uVar6 = dVar16 * dVar1;
  }
  auVar3._8_4_ = (int)uVar6;
  auVar3._0_8_ = uVar5;
  auVar3._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined1 (*) [16])&param_3->field0_0x0 = auVar3;
  (param_3->field0_0x0)._s_0.Z = (double)uVar15;
  return;
}

// CaptureEdgeDataFromTextureData_Internal @ 145f29010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __thiscall
FHeightmapTextureEdgeSnapshot::CaptureEdgeDataFromTextureData_Internal
          (FHeightmapTextureEdgeSnapshot *this,
          TArrayView<UE::Landscape::FHeightmapTexel,__int64> *param_1,int param_2,
          TVector<double> *param_3)

{
  FHeightmapTexel *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  EDirectionIndex EVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId621,
               "FHeightmapTextureEdgeSnapshot::CaptureEdgeDataFromTextureData_Internal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
               ,0x26d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId621);
  }
  if ((param_1->ArrayNum != (longlong)(param_2 * param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHeightmapTextureData.Num() == InEdgeLength * InEdgeLength",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x270,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->EdgeLength != param_2) {
    this->EdgeLength = param_2;
    uVar3 = param_2 * 2;
    if ((int)uVar3 < 4) {
      iVar6 = 0;
    }
    else {
      if (((uVar3 & uVar3 - 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(MipEdgeLength & (MipEdgeLength - 1)) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                             ,0x102,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar5 = 0;
      if (uVar3 != 0) {
        iVar5 = iVar6;
      }
      iVar6 = uVar3 + iVar5 * -2;
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->EdgeData,iVar6 * 4,Default);
  }
  pFVar1 = param_1->DataPtr;
  EVar7 = Bottom;
  do {
    CaptureSingleEdgeDataAndComputeNormalsAndHashes(this,pFVar1,EVar7,param_3);
    EVar7 = EVar7 + BottomRight;
  } while (EVar7 != Count);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CaptureSingleEdgeDataAndComputeNormalsAndHashes @ 145f29170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __thiscall
FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes
          (FHeightmapTextureEdgeSnapshot *this,FHeightmapTexel *param_1,EDirectionIndex param_2,
          TVector<double> *param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FXxHash64 FVar9;
  int iVar10;
  int iVar11;
  FHeightmapTexel_u_0_s_2 *pFVar12;
  byte *pbVar13;
  uint uVar14;
  double *pdVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  FHeightmapTexel_u_0_s_2 *pFVar20;
  FHeightmapTextureEdgeSnapshot *this_00;
  FHeightmapTexel_u_0 FVar21;
  ulong64 uVar22;
  uchar *puVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStackY_3758 [32];
  TVector<double>_u_0 local_36f8;
  TVector<double>_u_0 local_36e0;
  uint local_36c8;
  int local_36c4;
  FHeightmapTexel_u_0_s_2 *local_36c0;
  int local_36b8 [2];
  double local_36b0;
  double dStack_36a8;
  double local_36a0;
  FHeightmapTextureEdgeSnapshot *local_3698;
  TVector<double>_u_0 local_3690;
  TVector<double>_u_0 local_3670;
  int local_3658;
  longlong local_3650;
  TArrayView<UE::Landscape::FHeightmapTexel,int> local_3640;
  TArrayView<UE::Landscape::FHeightmapTexel,int> local_3630 [2];
  double local_3610;
  double local_35f8;
  double local_35e8;
  double local_35e0;
  double local_35d8;
  undefined1 local_35c0 [8];
  double adStack_35b8 [1535];
  int local_5c0 [16];
  FXxHash64Builder local_580;
  FXxHash64Builder local_340;
  ulonglong local_100;
  
  local_100 = __security_cookie.value ^ (ulonglong)auStackY_3758;
  iVar7 = this->EdgeLength;
  local_3698 = this;
  if ((BottomLeft < param_2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(EdgeIndex >= EEdgeIndex::First) && (EdgeIndex <= EEdgeIndex::Last)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x9f,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar11 = iVar7 + -1;
  iVar10 = iVar11;
  if (2 < (param_2 - TopRight & 7)) {
    iVar10 = 0;
  }
  if (2 < (param_2 - BottomRight & 7)) {
    iVar11 = 0;
  }
  iVar11 = iVar10 * iVar7 + iVar11;
  if ((param_2 & BottomRight) == Bottom) {
    local_36c8 = iVar7 - 2;
    uVar22 = (ulong64)local_36c8;
    if ((param_2 & TopRight) == Bottom) {
      iVar7 = 1;
    }
    iVar11 = iVar7 + iVar11;
  }
  else {
    uVar22 = 1;
    local_36c8 = 1;
  }
  local_36a0 = (param_3->field0_0x0)._s_0.Z;
  iVar7 = local_3698->EdgeLength;
  pFVar20 = (FHeightmapTexel_u_0_s_2 *)(param_1 + iVar11);
  local_36b0 = (param_3->field0_0x0)._s_0.X;
  dStack_36a8 = (param_3->field0_0x0)._s_0.Y;
  uVar16 = (uint)uVar22;
  local_36c4 = iVar7;
  local_36c0 = pFVar20;
  local_36b8[0] = iVar7;
  if ((param_2 & BottomRight) == Bottom) {
    GetEdgeData(local_3698,&local_3640,param_2,0);
    local_3650 = CONCAT44(local_3640.DataPtr._4_4_,local_3640.DataPtr._0_4_);
    if ((uVar16 != local_3640.ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceCount == LocalEdgeData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                           ,0x1e0,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar14 = 0;
    local_5c0[1] = 0x200;
    local_5c0[0] = 0;
    if ((int)uVar16 < 1) {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar22);
      }
    }
    else {
      iVar7 = UE::Core::Private::
              ReallocGrow<0,TFixedAllocator<512>::ForElementType<UE::Math::TVector<double>_>_>
                        (0x18,8,uVar16,(ForElementType<UE::Math::TVector<double>_> *)local_35c0,
                         local_5c0,local_5c0 + 1);
      memset(local_35c0 + (longlong)iVar7 * 0x18,0,(longlong)(int)uVar16 * 0x18);
      iVar7 = local_36c4;
    }
    iVar11 = local_5c0[0];
    uVar33 = SUB84(__real_3ff0000000000000,0);
    uVar34 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar39 = SUB84(__real_3e45798ee0000000,0);
    uVar40 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    if (param_2 == Bottom) {
      pFVar12 = pFVar20 + -1;
      `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
      <lambda_1>::operator()
                (local_36b8,(FHeightmapTexel *)pFVar12,(TVector<double> *)&local_36f8._s_0,
                 (TVector<double> *)&local_36e0._s_0);
      if ((iVar11 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      dVar3 = local_36a0;
      dVar2 = dStack_36a8;
      dVar24 = local_36b0;
      uVar14 = 0;
      local_35c0 = (undefined1  [8])((double)local_35c0 + local_36f8._s_0.X);
      adStack_35b8[0] = adStack_35b8[0] + local_36f8._s_0.Y;
      adStack_35b8[1] = adStack_35b8[1] + local_36f8._s_0.Z;
      if (0 < (int)(uVar16 - 1)) {
        pdVar15 = adStack_35b8;
        uVar18 = (ulonglong)dStack_36a8 >> 0x20;
        uVar5 = (ulonglong)local_36b0 >> 0x20;
        uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar34 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
        uVar39 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar40 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        pFVar20 = pFVar12;
        uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        do {
          pdVar15 = pdVar15 + 3;
          pFVar12 = pFVar20 + 1;
          lVar19 = (longlong)local_36b8[0];
          uVar37 = (uint)__xmm_80000000000000008000000000000000;
          uVar38 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          dVar27 = (double)CONCAT44((uint)uVar5 ^ uVar38,SUB84(dVar24,0) ^ uVar37);
          dVar30 = (double)CONCAT44((uint)uVar18 ^ uVar38,SUB84(dVar2,0) ^ uVar37);
          dVar29 = (double)(((float)((uint)pFVar20[lVar19 + 1].HeightH * 0x100 +
                                    (uint)pFVar20[lVar19 + 1].HeightL) - __real_47000000) *
                           __real_3c000000) * dVar3;
          dVar26 = (double)(((float)((uint)pFVar20[1].HeightH * 0x100 + (uint)pFVar20[1].HeightL) -
                            __real_47000000) * __real_3c000000) * dVar3;
          dVar25 = (double)(((float)((uint)pFVar20[2].HeightH * 0x100 + (uint)pFVar20[2].HeightL) -
                            __real_47000000) * __real_3c000000) * dVar3;
          dVar4 = (dVar25 - dVar26) * dVar30;
          dVar30 = dVar30 * dVar27;
          dVar28 = (double)(((float)((uint)pFVar20[lVar19 + 2].HeightH * 0x100 +
                                    (uint)pFVar20[lVar19 + 2].HeightL) - __real_47000000) *
                           __real_3c000000) * dVar3;
          dVar27 = (dVar28 - dVar25) * dVar27;
          dVar25 = dVar27 * dVar27 + dVar4 * dVar4 + dVar30 * dVar30;
          local_36f8._s_0.Z = dVar30;
          local_36f8._s_0.X = dVar4;
          local_36f8._s_0.Y = dVar27;
          if ((dVar25 != __real_3ff0000000000000) &&
             (local_36f8._s_0.Z = (double)uVar32,
             local_36f8._s_0.X = (double)CONCAT44(uVar40,uVar39),
             local_36f8._s_0.Y = (double)CONCAT44(uVar34,uVar33), __real_3e45798ee0000000 <= dVar25)
             ) {
            local_35e8 = __real_3ff0000000000000 / SQRT(dVar25);
            local_36f8._s_0.Z = dVar30 * local_35e8;
            local_36f8._s_0.X = dVar4 * local_35e8;
            local_36f8._s_0.Y = dVar27 * local_35e8;
          }
          dVar4 = (dVar29 - dVar26) * dVar24;
          dVar29 = (dVar28 - dVar29) * dVar2;
          dVar26 = dVar2 * dVar24;
          uVar35 = SUB84(dVar4,0) ^ uVar37;
          uVar36 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar38;
          uVar37 = SUB84(dVar29,0) ^ uVar37;
          uVar38 = (uint)((ulonglong)dVar29 >> 0x20) ^ uVar38;
          dVar29 = (double)CONCAT44(uVar36,uVar35) * (double)CONCAT44(uVar36,uVar35) +
                   (double)CONCAT44(uVar38,uVar37) * (double)CONCAT44(uVar38,uVar37) +
                   dVar26 * dVar26;
          local_36e0._s_0.Z = dVar26;
          local_36e0._s_0.Y = (double)CONCAT44(uVar36,uVar35);
          local_36e0._s_0.X = (double)CONCAT44(uVar38,uVar37);
          if ((dVar29 != __real_3ff0000000000000) &&
             (local_36e0._s_0.Z = (double)uVar32,
             local_36e0._s_0.Y = (double)CONCAT44(uVar34,uVar33),
             local_36e0._s_0.X = (double)CONCAT44(uVar40,uVar39), __real_3e45798ee0000000 <= dVar29)
             ) {
            local_35e0 = __real_3ff0000000000000 / SQRT(dVar29);
            local_36e0._s_0.Z = dVar26 * local_35e0;
            local_36e0._s_0.Y = (double)CONCAT44(uVar36,uVar35) * local_35e0;
            local_36e0._s_0.X = (double)CONCAT44(uVar38,uVar37) * local_35e0;
          }
          dVar26 = local_36e0._s_0.Z + local_36f8._s_0.Z;
          dVar28 = local_36e0._s_0.X + local_36f8._s_0.X;
          dVar29 = local_36e0._s_0.Y + local_36f8._s_0.Y;
          uVar37 = 0;
          if ((int)uVar14 < iVar11) {
            uVar37 = ~uVar14 >> 0x1f;
          }
          local_3610 = local_36e0._s_0.Z;
          local_35f8 = local_36f8._s_0.Z;
          if (uVar37 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar39 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar40 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar34 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          uVar14 = uVar14 + 1;
          pdVar15[-4] = dVar28 + pdVar15[-4];
          pdVar15[-3] = dVar29 + pdVar15[-3];
          pdVar15[-2] = dVar26 + pdVar15[-2];
          uVar37 = 0;
          if ((int)uVar14 < local_5c0[0]) {
            uVar37 = ~uVar14 >> 0x1f;
          }
          if (uVar37 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar39 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar40 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar34 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          pdVar15[-1] = local_36f8._s_0.X + pdVar15[-1];
          *pdVar15 = local_36f8._s_0.Y + *pdVar15;
          pdVar15[1] = local_36f8._s_0.Z + pdVar15[1];
          pFVar20 = pFVar12;
          iVar11 = local_5c0[0];
        } while ((int)uVar14 < (int)(uVar16 - 1));
        uVar33 = SUB84(__real_3ff0000000000000,0);
        uVar34 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        uVar39 = SUB84(__real_3e45798ee0000000,0);
        uVar40 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        pFVar20 = local_36c0;
      }
      `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
      <lambda_1>::operator()
                (local_36b8,(FHeightmapTexel *)(pFVar12 + 1),(TVector<double> *)&local_36f8._s_0,
                 (TVector<double> *)&local_36e0._s_0);
      uVar16 = uVar16 - 1;
      dVar24 = local_36f8._s_0.X + local_36e0._s_0.X;
      dVar2 = local_36f8._s_0.Y + local_36e0._s_0.Y;
      dVar3 = local_36f8._s_0.Z + local_36e0._s_0.Z;
      uVar14 = 0;
      if ((int)uVar16 < iVar11) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
LAB_145f2a2e7:
      lVar19 = (longlong)(int)uVar16;
      dVar26 = adStack_35b8[lVar19 * 3];
      dVar29 = adStack_35b8[lVar19 * 3 + 1];
      *(double *)(local_35c0 + lVar19 * 0x18) = dVar24 + *(double *)(local_35c0 + lVar19 * 0x18);
      adStack_35b8[lVar19 * 3] = dVar2 + dVar26;
      adStack_35b8[lVar19 * 3 + 1] = dVar3 + dVar29;
    }
    else if (param_2 == Right) {
      pFVar12 = pFVar20 + -(longlong)(iVar7 + 1);
      `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
      <lambda_1>::operator()
                (local_36b8,(FHeightmapTexel *)pFVar12,(TVector<double> *)&local_36f8._s_0,
                 (TVector<double> *)&local_36e0._s_0);
      dVar24 = local_36f8._s_0.X + local_36e0._s_0.X;
      dVar2 = local_36f8._s_0.Y + local_36e0._s_0.Y;
      dVar3 = local_36f8._s_0.Z + local_36e0._s_0.Z;
      if ((iVar11 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_35c0 = (undefined1  [8])((double)local_35c0 + dVar24);
      adStack_35b8[0] = adStack_35b8[0] + dVar2;
      iVar8 = local_36c8 - 1;
      adStack_35b8[1] = adStack_35b8[1] + dVar3;
      iVar10 = iVar7;
      if (0 < iVar8) {
        pdVar15 = adStack_35b8;
        do {
          pdVar15 = pdVar15 + 3;
          pFVar12 = pFVar12 + iVar7;
          `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
          <lambda_1>::operator()
                    (local_36b8,(FHeightmapTexel *)pFVar12,(TVector<double> *)&local_36f8._s_0,
                     (TVector<double> *)&local_36e0._s_0);
          uVar16 = 0;
          if ((int)uVar14 < iVar11) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar14 = uVar14 + 1;
          dVar24 = local_36f8._s_0.X + local_36e0._s_0.X;
          pdVar15[-4] = local_36f8._s_0.X + pdVar15[-4];
          dVar2 = local_36f8._s_0.Y + local_36e0._s_0.Y;
          pdVar15[-3] = local_36f8._s_0.Y + pdVar15[-3];
          dVar3 = local_36f8._s_0.Z + local_36e0._s_0.Z;
          pdVar15[-2] = local_36f8._s_0.Z + pdVar15[-2];
          uVar16 = 0;
          if ((int)uVar14 < local_5c0[0]) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pdVar15[-1] = dVar24 + pdVar15[-1];
          *pdVar15 = dVar2 + *pdVar15;
          pdVar15[1] = dVar3 + pdVar15[1];
          pFVar20 = local_36c0;
          iVar11 = local_5c0[0];
          iVar10 = local_36c4;
        } while ((int)uVar14 < iVar8);
      }
      `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
      <lambda_1>::operator()
                (local_36b8,(FHeightmapTexel *)(pFVar12 + iVar10),
                 (TVector<double> *)&local_36f8._s_0,(TVector<double> *)&local_36e0._s_0);
      uVar14 = local_36c8 - 1;
      uVar16 = 0;
      if ((int)uVar14 < iVar11) {
        uVar16 = ~uVar14 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar19 = (longlong)(int)uVar14;
      dVar24 = adStack_35b8[lVar19 * 3];
      *(double *)(local_35c0 + lVar19 * 0x18) =
           local_36f8._s_0.X + *(double *)(local_35c0 + lVar19 * 0x18);
      dVar2 = adStack_35b8[lVar19 * 3 + 1];
      adStack_35b8[lVar19 * 3] = local_36f8._s_0.Y + dVar24;
      adStack_35b8[lVar19 * 3 + 1] = local_36f8._s_0.Z + dVar2;
    }
    else if (param_2 == CornerCount) {
      pFVar12 = pFVar20 + -(longlong)(iVar7 + 1);
      `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
      <lambda_1>::operator()
                (local_36b8,(FHeightmapTexel *)pFVar12,(TVector<double> *)&local_36f8._s_0,
                 (TVector<double> *)&local_36e0._s_0);
      dVar24 = local_36f8._s_0.X + local_36e0._s_0.X;
      dVar2 = local_36f8._s_0.Y + local_36e0._s_0.Y;
      dVar3 = local_36f8._s_0.Z + local_36e0._s_0.Z;
      if ((iVar11 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar16 = 0;
      local_35c0 = (undefined1  [8])((double)local_35c0 + dVar24);
      adStack_35b8[0] = adStack_35b8[0] + dVar2;
      uVar14 = local_36c8 - 1;
      adStack_35b8[1] = adStack_35b8[1] + dVar3;
      if (0 < (int)uVar14) {
        pdVar15 = adStack_35b8;
        do {
          pdVar15 = pdVar15 + 3;
          pFVar12 = pFVar12 + 1;
          `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
          <lambda_1>::operator()
                    (local_36b8,(FHeightmapTexel *)pFVar12,(TVector<double> *)&local_36f8._s_0,
                     (TVector<double> *)&local_36e0._s_0);
          uVar37 = 0;
          if ((int)uVar16 < iVar11) {
            uVar37 = ~uVar16 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar16 = uVar16 + 1;
          dVar24 = local_36f8._s_0.X + local_36e0._s_0.X;
          dVar2 = local_36f8._s_0.Y + local_36e0._s_0.Y;
          dVar3 = local_36f8._s_0.Z + local_36e0._s_0.Z;
          pdVar15[-4] = local_36e0._s_0.X + pdVar15[-4];
          pdVar15[-3] = local_36e0._s_0.Y + pdVar15[-3];
          pdVar15[-2] = local_36e0._s_0.Z + pdVar15[-2];
          uVar37 = 0;
          if ((int)uVar16 < local_5c0[0]) {
            uVar37 = ~uVar16 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pdVar15[-1] = dVar24 + pdVar15[-1];
          *pdVar15 = dVar2 + *pdVar15;
          pdVar15[1] = dVar3 + pdVar15[1];
          iVar11 = local_5c0[0];
        } while ((int)uVar16 < (int)uVar14);
      }
      `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
      <lambda_1>::operator()
                (local_36b8,(FHeightmapTexel *)(pFVar12 + 1),(TVector<double> *)&local_36f8._s_0,
                 (TVector<double> *)&local_36e0._s_0);
      uVar16 = 0;
      if ((int)uVar14 < iVar11) {
        uVar16 = ~uVar14 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar19 = (longlong)(int)uVar14;
      dVar24 = adStack_35b8[lVar19 * 3];
      *(double *)(local_35c0 + lVar19 * 0x18) =
           local_36e0._s_0.X + *(double *)(local_35c0 + lVar19 * 0x18);
      dVar2 = adStack_35b8[lVar19 * 3 + 1];
      adStack_35b8[lVar19 * 3] = local_36e0._s_0.Y + dVar24;
      adStack_35b8[lVar19 * 3 + 1] = local_36e0._s_0.Z + dVar2;
    }
    else if (param_2 == LastEdge) {
      lVar19 = (longlong)iVar7;
      pFVar20 = local_36c0 + -lVar19;
      `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
      <lambda_1>::operator()
                (local_36b8,(FHeightmapTexel *)pFVar20,(TVector<double> *)&local_36f8._s_0,
                 (TVector<double> *)&local_36e0._s_0);
      if ((iVar11 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar14 = 0;
      local_35c0 = (undefined1  [8])((double)local_35c0 + local_36e0._s_0.X);
      adStack_35b8[0] = adStack_35b8[0] + local_36e0._s_0.Y;
      uVar16 = local_36c8 - 1;
      adStack_35b8[1] = adStack_35b8[1] + local_36e0._s_0.Z;
      if (0 < (int)uVar16) {
        pdVar15 = adStack_35b8;
        do {
          pdVar15 = pdVar15 + 3;
          pFVar20 = pFVar20 + lVar19;
          `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
          <lambda_1>::operator()
                    (local_36b8,(FHeightmapTexel *)pFVar20,(TVector<double> *)&local_36f8._s_0,
                     (TVector<double> *)&local_36e0._s_0);
          dVar24 = local_36f8._s_0.X + local_36e0._s_0.X;
          dVar2 = local_36f8._s_0.Y + local_36e0._s_0.Y;
          dVar3 = local_36f8._s_0.Z + local_36e0._s_0.Z;
          uVar37 = 0;
          if ((int)uVar14 < iVar11) {
            uVar37 = ~uVar14 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar14 = uVar14 + 1;
          pdVar15[-4] = dVar24 + pdVar15[-4];
          pdVar15[-3] = dVar2 + pdVar15[-3];
          pdVar15[-2] = dVar3 + pdVar15[-2];
          uVar37 = 0;
          if ((int)uVar14 < local_5c0[0]) {
            uVar37 = ~uVar14 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pdVar15[-1] = local_36e0._s_0.X + pdVar15[-1];
          *pdVar15 = local_36e0._s_0.Y + *pdVar15;
          pdVar15[1] = local_36e0._s_0.Z + pdVar15[1];
          iVar11 = local_5c0[0];
        } while ((int)uVar14 < (int)uVar16);
      }
      `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
      <lambda_1>::operator()
                (local_36b8,(FHeightmapTexel *)(pFVar20 + lVar19),
                 (TVector<double> *)&local_36f8._s_0,(TVector<double> *)&local_36e0._s_0);
      dVar24 = local_36f8._s_0.X + local_36e0._s_0.X;
      dVar2 = local_36f8._s_0.Y + local_36e0._s_0.Y;
      dVar3 = local_36f8._s_0.Z + local_36e0._s_0.Z;
      uVar14 = 0;
      if ((int)uVar16 < iVar11) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      pFVar20 = local_36c0;
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         pFVar20 = local_36c0, bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_145f2a2e7;
    }
    iVar7 = local_5c0[0];
    iVar11 = local_36c4;
    if ((param_2 & TopRight) == Bottom) {
      iVar11 = 1;
    }
    FXxHash64Builder::Reset(&local_580);
    FXxHash64Builder::Reset(&local_340);
    dVar3 = __real_405fdfffe0000000;
    dVar2 = __real_405fe00000000000;
    dVar24 = __real_3fe0000000000000;
    local_36c0 = (FHeightmapTexel_u_0_s_2 *)(longlong)(int)local_36c8;
    uVar16 = 0;
    if (0 < (longlong)local_36c0) {
      pdVar15 = (double *)local_35c0;
      puVar23 = (uchar *)(local_3650 + 2);
      do {
        uVar14 = 0;
        if ((int)uVar16 < iVar7) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        dVar26 = *pdVar15;
        dVar29 = pdVar15[1];
        dVar28 = dVar29 * dVar29 + dVar26 * dVar26 + pdVar15[2] * pdVar15[2];
        if (dVar28 == (double)CONCAT44(uVar34,uVar33)) {
          local_3610 = pdVar15[2];
          uVar32 = pdVar15[1];
          uVar31 = *pdVar15;
        }
        else if ((double)CONCAT44(uVar40,uVar39) <= dVar28) {
          local_35d8 = (double)CONCAT44(uVar34,uVar33) / SQRT(dVar28);
          uVar31 = dVar26 * local_35d8;
          uVar32 = dVar29 * local_35d8;
        }
        else {
          local_3610 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
        dVar29 = (double)uVar31 * dVar2 + dVar3;
        dVar26 = (double)uVar32 * dVar2 + dVar3;
        puVar23[-2] = (uchar)((int)ROUND(dVar29 + dVar29 + dVar24) >> 1);
        puVar23[1] = (uchar)((int)ROUND(dVar26 + dVar26 + dVar24) >> 1);
        *puVar23 = pFVar20->HeightH;
        puVar23[-1] = pFVar20->HeightL;
        FXxHash64Builder::Update(&local_580,pFVar20,4);
        FXxHash64Builder::Update(&local_340,puVar23 + -2,4);
        puVar23 = puVar23 + 4;
        pFVar20 = pFVar20 + iVar11;
        uVar16 = uVar16 + 1;
        pdVar15 = pdVar15 + 3;
        local_36c0 = (FHeightmapTexel_u_0_s_2 *)((longlong)local_36c0 + -1);
      } while (local_36c0 != (FHeightmapTexel_u_0_s_2 *)0x0);
      local_36c0 = (FHeightmapTexel_u_0_s_2 *)0x0;
    }
    iVar11 = 1;
    FVar9 = FXxHash64Builder::Finalize(&local_580);
    FVar21 = *(FHeightmapTexel_u_0 *)FVar9.Hash;
    FVar9 = FXxHash64Builder::Finalize(&local_340);
    this_00 = local_3698;
    uVar16 = *(uint *)FVar9.Hash;
    iVar7 = 1;
    if (local_3698->EdgeLength != 0) {
      iVar7 = local_3698->EdgeLength;
    }
    uVar18 = (ulonglong)(iVar7 - 1) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_3658 = (int)lVar19;
    iVar7 = local_3658 + -1;
    uVar33 = local_3640.DataPtr._0_4_;
    uVar34 = local_3640.DataPtr._4_4_;
    uVar14 = local_3640.ArrayNum;
    if (1 < iVar7) {
      do {
        GetEdgeData(this_00,local_3630,param_2,iVar11);
        uVar14 = (int)(uVar14 - 2) / 2;
        uVar18 = (ulonglong)uVar14;
        if ((uVar14 != local_3630[0].ArrayNum) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("MipEdgeLength == MipEdgeData.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                               ,0x24a,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (0 < (int)uVar14) {
          pbVar13 = (byte *)(CONCAT44(uVar34,uVar33) + 4);
          puVar17 = (undefined1 *)
                    (CONCAT44(local_3630[0].DataPtr._4_4_,local_3630[0].DataPtr._0_4_) + 1);
          do {
            puVar17[-1] = (char)((uint)pbVar13[4] + (uint)*pbVar13 >> 1);
            puVar17[2] = (char)((uint)pbVar13[7] + (uint)pbVar13[3] >> 1);
            uVar14 = ((uint)pbVar13[6] + (uint)pbVar13[2]) * 0x100 + (uint)pbVar13[5] +
                     (uint)pbVar13[1] >> 1;
            *puVar17 = (char)uVar14;
            puVar17[1] = (char)(uVar14 >> 8);
            uVar18 = uVar18 - 1;
            pbVar13 = pbVar13 + 8;
            puVar17 = puVar17 + 4;
          } while (uVar18 != 0);
        }
        iVar11 = iVar11 + 1;
        uVar33 = local_3630[0].DataPtr._0_4_;
        uVar34 = local_3630[0].DataPtr._4_4_;
        uVar14 = local_3630[0].ArrayNum;
      } while (iVar11 < iVar7);
    }
    goto LAB_145f2a677;
  }
  if ((uVar16 != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceCount == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x1b5,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 == BottomRight) {
    `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
    <lambda_1>::operator()
              (local_36b8,(FHeightmapTexel *)(pFVar20 + -1),(TVector<double> *)&local_3690._s_0,
               (TVector<double> *)&local_3670._s_0);
  }
  else if (param_2 == TopRight) {
    pFVar12 = pFVar20 + -(longlong)(iVar7 + 1);
LAB_145f2936e:
    `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
    <lambda_1>::operator()
              (local_36b8,(FHeightmapTexel *)pFVar12,(TVector<double> *)&local_3690._s_0,
               (TVector<double> *)&local_3670._s_0);
    local_3690._s_0.Z = local_3690._s_0.Z + local_3670._s_0.Z;
    local_3690._s_0.X = local_3690._s_0.X + local_3670._s_0.X;
    local_3690._s_0.Y = local_3690._s_0.Y + local_3670._s_0.Y;
  }
  else if (param_2 == TopLeft) {
    `FHeightmapTextureEdgeSnapshot::CaptureSingleEdgeDataAndComputeNormalsAndHashes'::__l2::
    <lambda_1>::operator()
              (local_36b8,(FHeightmapTexel *)(pFVar20 + -(longlong)iVar7),
               (TVector<double> *)&local_3690._s_0,(TVector<double> *)&local_3670._s_0);
    local_3690._s_0.Z = local_3670._s_0.Z;
    local_3690._s_0.X = local_3670._s_0.X;
    local_3690._s_0.Y = local_3670._s_0.Y;
  }
  else {
    pFVar12 = pFVar20;
    if (param_2 == BottomLeft) goto LAB_145f2936e;
  }
  dVar24 = local_3690._s_0.Y * local_3690._s_0.Y + local_3690._s_0.X * local_3690._s_0.X +
           local_3690._s_0.Z * local_3690._s_0.Z;
  uVar32 = local_3690._s_0.X;
  uVar31 = local_3690._s_0.Y;
  if ((dVar24 != __real_3ff0000000000000) &&
     (uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar24)) {
    uVar32 = local_3690._s_0.X * (__real_3ff0000000000000 / SQRT(dVar24));
    uVar31 = local_3690._s_0.Y * (__real_3ff0000000000000 / SQRT(dVar24));
  }
  FVar21._s_2 = *pFVar20;
  uVar16 = ((((int)ROUND((double)uVar31 * __real_405fe00000000000 + ___real_406fefffe0000000 +
                         (double)uVar31 * __real_405fe00000000000) >> 1 & 0xffU) << 8 |
            (uint)pFVar20->HeightH) << 8 | (uint)pFVar20->HeightL) << 8 |
           (int)ROUND((double)uVar32 * __real_405fe00000000000 + ___real_406fefffe0000000 +
                      (double)uVar32 * __real_405fe00000000000) >> 1 & 0xffU;
  this_00 = local_3698;
LAB_145f2a677:
  ((FHeightmapTexel_u_0 *)((this_00->InitialEdgeHashes).Elements + param_2))->_s_2 =
       (FHeightmapTexel_u_0_s_2)FVar21;
  (this_00->SnapshotEdgeHashes).Elements[param_2] = uVar16;
  return;
}

// CompareEdges @ 145f2aba0

EDirectionFlags __thiscall
FHeightmapTextureEdgeSnapshot::CompareEdges
          (FHeightmapTextureEdgeSnapshot *this,FHeightmapTextureEdgeSnapshot *param_1)

{
  byte bVar1;
  TStaticArray<unsigned_int,8,4294967295> *pTVar2;
  EDirectionFlags EVar3;
  
  EVar3 = None;
  bVar1 = 0;
  pTVar2 = &this->SnapshotEdgeHashes;
  do {
    if ((pTVar2->Elements[0] != *(uint *)(((longlong)param_1 - (longlong)this) + (longlong)pTVar2))
       || (pTVar2[1].Elements[0] !=
           *(uint *)(((longlong)param_1 - (longlong)this) + 0x20 + (longlong)pTVar2))) {
      EVar3 = EVar3 | '\x01' << (bVar1 & 0x1f);
    }
    bVar1 = bVar1 + 1;
    pTVar2 = (TStaticArray<unsigned_int,8,4294967295> *)(pTVar2->Elements + 1);
  } while (bVar1 != 8);
  return EVar3;
}

// CreateEdgeSnapshotFromTextureData @ 145f2b910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

TSharedRef<FHeightmapTextureEdgeSnapshot,1> * __cdecl
FHeightmapTextureEdgeSnapshot::CreateEdgeSnapshotFromTextureData
          (TSharedRef<FHeightmapTextureEdgeSnapshot,1> *__return_storage_ptr__,
          TArrayView<UE::Landscape::FHeightmapTexel,__int64> *param_1,int param_2,
          TVector<double> *param_3)

{
  FHeightmapTextureEdgeSnapshot *this;
  FHeightmapTexel *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  TSharedRef<FHeightmapTextureEdgeSnapshot,1> *pTVar5;
  int iVar6;
  int iVar7;
  EDirectionIndex EVar8;
  bool bVar9;
  bool bVar10;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId300,
               "ULandscapeHeightmapTextureEdgeSnapshot::CreateEdgeDataFromTextureData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
               ,300);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId300);
  }
  MakeShared<FHeightmapTextureEdgeSnapshot,1>(__return_storage_ptr__);
  this = __return_storage_ptr__->Object;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId621,
               "FHeightmapTextureEdgeSnapshot::CaptureEdgeDataFromTextureData_Internal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
               ,0x26d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId621);
  }
  if ((param_1->ArrayNum != (longlong)(param_2 * param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHeightmapTextureData.Num() == InEdgeLength * InEdgeLength",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x270,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FHeightmapTextureEdgeSnapshot,1> *)(*pcVar2)();
    return pTVar5;
  }
  if (this->EdgeLength != param_2) {
    this->EdgeLength = param_2;
    uVar3 = param_2 * 2;
    if ((int)uVar3 < 4) {
      iVar7 = 0;
    }
    else {
      if (((uVar3 & uVar3 - 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(MipEdgeLength & (MipEdgeLength - 1)) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                             ,0x102,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FHeightmapTextureEdgeSnapshot,1> *)(*pcVar2)();
        return pTVar5;
      }
      iVar7 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar6 = 0;
      if (uVar3 != 0) {
        iVar6 = iVar7;
      }
      iVar7 = uVar3 + iVar6 * -2;
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->EdgeData,iVar7 * 4,Default);
  }
  pFVar1 = param_1->DataPtr;
  EVar8 = Bottom;
  do {
    CaptureSingleEdgeDataAndComputeNormalsAndHashes(this,pFVar1,EVar8,param_3);
    EVar8 = EVar8 + BottomRight;
  } while (EVar8 != Count);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetCornerData @ 145f2df70

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

FHeightmapTexel __thiscall
FHeightmapTextureEdgeSnapshot::GetCornerData
          (FHeightmapTextureEdgeSnapshot *this,EDirectionIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  FHeightmapTexel_u_0 FVar3;
  undefined7 in_register_00000011;
  byte in_R8B;
  
  if (7 < in_R8B) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCornerIndex >= EEdgeIndex::First) && (InCornerIndex <= EEdgeIndex::Last)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x121,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Data32 = (*pcVar1)();
      return (FHeightmapTexel_u_0)(FHeightmapTexel_u_0)FVar3._s_2;
    }
  }
  if ((in_R8B & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDiagonalCorner(InCornerIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Data32 = (*pcVar1)();
      return (FHeightmapTexel_u_0)(FHeightmapTexel_u_0)FVar3._s_2;
    }
  }
  *(uint *)CONCAT71(in_register_00000011,param_1) = (this->SnapshotEdgeHashes).Elements[in_R8B];
  return (FHeightmapTexel)SUB84((uint *)CONCAT71(in_register_00000011,param_1),0);
}

// GetEdgeData @ 145f2e200

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

TArrayView<UE::Landscape::FHeightmapTexel,int> * __thiscall
FHeightmapTextureEdgeSnapshot::GetEdgeData
          (FHeightmapTextureEdgeSnapshot *this,
          TArrayView<UE::Landscape::FHeightmapTexel,int> *__return_storage_ptr__,
          EDirectionIndex param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::Landscape::FHeightmapTexel,int> *pTVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (BottomLeft < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InEdgeIndex >= EEdgeIndex::First) && (InEdgeIndex <= EEdgeIndex::Last)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x111,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Landscape::FHeightmapTexel,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if ((param_1 & BottomRight) != Bottom) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsDiagonalCorner(InEdgeIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x112,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Landscape::FHeightmapTexel,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  iVar1 = (this->EdgeData).ArrayNum;
  uVar9 = this->EdgeLength >> ((byte)param_2 & 0x1f);
  if ((int)uVar9 < 4) {
    iVar7 = 0;
  }
  else {
    if ((uVar9 & uVar9 - 1) != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(MipEdgeLength & (MipEdgeLength - 1)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x102,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Landscape::FHeightmapTexel,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    iVar7 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar6 = 0;
    if (uVar9 != 0) {
      iVar6 = iVar7;
    }
    iVar7 = uVar9 + iVar6 * -2;
  }
  iVar6 = uVar9 - 2;
  uVar9 = (uint)(param_1 >> 1) * ((int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2) + iVar7;
  if ((this->EdgeData).ArrayNum < (int)(uVar9 + iVar6)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirOffset + MipOffset + EdgeCount <= EdgeData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x119,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Landscape::FHeightmapTexel,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  uVar8 = 0;
  if ((int)uVar9 < (this->EdgeData).ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Landscape::FHeightmapTexel,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->EdgeData).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar6;
  __return_storage_ptr__->DataPtr = (FHeightmapTexel *)(pFVar2 + (longlong)(int)uVar9 * 4);
  if (iVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Landscape::FHeightmapTexel,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// ResizeForEdgeLength @ 145f330b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FHeightmapTextureEdgeSnapshot::ResizeForEdgeLength(FHeightmapTextureEdgeSnapshot *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (this->EdgeLength != param_1) {
    uVar2 = param_1 * 2;
    this->EdgeLength = param_1;
    if ((int)uVar2 < 4) {
      iVar5 = 0;
    }
    else {
      if ((uVar2 & uVar2 - 1) != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(MipEdgeLength & (MipEdgeLength - 1)) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                           ,0x102,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar5 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar4 = 0;
      if (uVar2 != 0) {
        iVar4 = iVar5;
      }
      iVar5 = uVar2 + iVar4 * -2;
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->EdgeData,iVar5 * 4,Default);
  }
  return;
}

