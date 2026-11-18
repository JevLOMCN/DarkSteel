// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DecompressRotation<1> @ 1474295b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimationCompression_PerTrackUtils::DecompressRotation<1>
          (int param_1,int param_2,TQuat<float> *param_3,uchar *param_4,uchar *param_5)

{
  ushort uVar1;
  uint uVar2;
  TQuat<float> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TQuat<float> local_48 [4];
  
  fVar7 = __real_38000100;
  if (param_1 == 2) {
    fVar9 = __real_46fffe00;
    if ((param_2 & 1U) != 0) {
      uVar1 = *(ushort *)param_5;
      param_5 = param_5 + 2;
      fVar9 = (float)uVar1;
    }
    fVar8 = __real_46fffe00;
    if ((param_2 & 2U) != 0) {
      uVar1 = *(ushort *)param_5;
      param_5 = (uchar *)((longlong)param_5 + 2);
      fVar8 = (float)uVar1;
    }
    fVar6 = __real_46fffe00;
    if ((param_2 & 4U) != 0) {
      fVar6 = (float)*(ushort *)param_5;
    }
    fVar6 = fVar6 - __real_46fffe00;
    fVar9 = fVar9 - __real_46fffe00;
    fVar8 = fVar8 - __real_46fffe00;
    fVar10 = ((__real_3f800000 - fVar9 * fVar9 * __real_30800200) - fVar8 * fVar8 * __real_30800200)
             - fVar6 * fVar6 * __real_30800200;
    fVar4 = 0.0;
    if (0.0 <= fVar10) {
      fVar4 = SQRT(fVar10);
    }
    fVar8 = fVar8 * __real_38000100;
    param_3->X = fVar9 * __real_38000100;
    param_3->Y = fVar8;
    param_3->Z = fVar6 * fVar7;
    param_3->W = fVar4;
    return;
  }
  if (param_1 == 1) {
    fVar7 = *(float *)param_5;
    fVar9 = *(float *)(param_5 + 4);
    fVar8 = *(float *)(param_5 + 8);
    fVar6 = 0.0;
    fVar4 = ((__real_3f800000 - fVar7 * fVar7) - fVar9 * fVar9) - fVar8 * fVar8;
    if (0.0 < fVar4) {
      fVar6 = SQRT(fVar4);
    }
    param_3->X = fVar7;
    param_3->Y = fVar9;
    param_3->Z = fVar8;
    param_3->W = fVar6;
    return;
  }
  if (param_1 == 3) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar4 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    if ((param_2 & 1U) != 0) {
      fVar7 = *(float *)param_4;
      fVar9 = *(float *)(param_4 + 4);
      param_4 = param_4 + 8;
    }
    if ((param_2 & 2U) != 0) {
      fVar8 = *(float *)param_4;
      fVar6 = *(float *)((longlong)param_4 + 4);
      param_4 = (uchar *)((longlong)param_4 + 8);
    }
    if ((param_2 & 4U) != 0) {
      fVar4 = *(float *)param_4;
      fVar10 = *(float *)((longlong)param_4 + 4);
    }
    uVar2 = *(uint *)param_5;
    fVar7 = (float)(int)((uVar2 >> 0x15) - 0x3ff) * __real_3a802008 * fVar9 + fVar7;
    fVar8 = (float)(int)((uVar2 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * fVar6 + fVar8;
    fVar4 = (float)(int)((uVar2 & 0x3ff) - 0x1ff) * ___real_3b004020 * fVar10 + fVar4;
    fVar9 = ((__real_3f800000 - fVar7 * fVar7) - fVar8 * fVar8) - fVar4 * fVar4;
    if (0.0 < fVar9) {
      fVar5 = SQRT(fVar9);
    }
    param_3->X = fVar7;
    param_3->Y = fVar8;
    param_3->Z = fVar4;
    param_3->W = fVar5;
    return;
  }
  if (param_1 != 5) {
    if (param_1 == 4) {
      pTVar3 = FQuatFixed32NoW::ToQuat<1>(local_48,(uint *)param_5);
      fVar7 = pTVar3->Y;
      fVar9 = pTVar3->Z;
      fVar8 = pTVar3->W;
      param_3->X = pTVar3->X;
      param_3->Y = fVar7;
      param_3->Z = fVar9;
      param_3->W = fVar8;
      return;
    }
    if (param_1 != 6) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_static_void___cdecl_FAnimationCompression_PerTrackUtils::DecompressRotation<1>(int,int,UE::Math::TQuat<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                  ::__l37::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      *param_3 = UE::Math::TQuat<float>::Identity;
      return;
    }
    *param_3 = UE::Math::TQuat<float>::Identity;
    return;
  }
  pTVar3 = FQuatFloat32NoW::ToQuat<1>(local_48,(uint *)param_5);
  fVar7 = pTVar3->Y;
  fVar9 = pTVar3->Z;
  fVar8 = pTVar3->W;
  param_3->X = pTVar3->X;
  param_3->Y = fVar7;
  param_3->Z = fVar9;
  param_3->W = fVar8;
  return;
}

// DecompressScale<1> @ 147429900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimationCompression_PerTrackUtils::DecompressScale<1>
          (int param_1,int param_2,TVector<float> *param_3,uchar *param_4,uchar *param_5)

{
  ushort uVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 != 1) {
    if (param_1 == 3) {
      fVar9 = 0.0;
      fVar4 = 0.0;
      fVar7 = 0.0;
      fVar5 = 0.0;
      fVar8 = 0.0;
      fVar6 = 0.0;
      if ((param_2 & 1U) != 0) {
        fVar4 = *(float *)param_4;
        fVar8 = *(float *)(param_4 + 4);
        param_4 = param_4 + 8;
      }
      if ((param_2 & 2U) != 0) {
        fVar7 = *(float *)param_4;
        fVar9 = *(float *)((longlong)param_4 + 4);
        param_4 = (uchar *)((longlong)param_4 + 8);
      }
      if ((param_2 & 4U) != 0) {
        fVar5 = *(float *)param_4;
        fVar6 = *(float *)((longlong)param_4 + 4);
      }
      uVar2 = *(uint *)param_5;
      (param_3->field0_0x0)._s_0.X =
           (float)(int)((uVar2 & 0x3ff) - 0x1ff) * ___real_3b004020 * fVar8 + fVar4;
      fVar4 = __real_3a802008;
      (param_3->field0_0x0)._s_0.Y =
           (float)(int)((uVar2 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * fVar9 + fVar7;
      (param_3->field0_0x0)._s_0.Z = (float)(int)((uVar2 >> 0x15) - 0x3ff) * fVar4 * fVar6 + fVar5;
      return;
    }
    if (param_1 != 2) {
      if (param_1 != 6) {
        UE::Logging::Private::BasicFatalLog
                  (&`public:_static_void___cdecl_FAnimationCompression_PerTrackUtils::DecompressScale<1>(int,int,UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                    ::__l64::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        *(undefined8 *)&param_3->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        return;
      }
      *(undefined8 *)&param_3->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      return;
    }
    fVar4 = 0.0;
    if ((param_2 & 1U) == 0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)(int)(*(ushort *)param_5 - 0xff);
      param_5 = param_5 + 2;
    }
    (param_3->field0_0x0)._s_0.X = fVar8;
    if ((param_2 & 2U) == 0) {
      fVar8 = 0.0;
    }
    else {
      uVar1 = *(ushort *)param_5;
      param_5 = (uchar *)((longlong)param_5 + 2);
      fVar8 = (float)(int)(uVar1 - 0xff);
    }
    (param_3->field0_0x0)._s_0.Y = fVar8;
    if ((param_2 & 4U) != 0) {
      fVar4 = (float)(int)(*(ushort *)param_5 - 0xff);
    }
    (param_3->field0_0x0)._s_0.Z = fVar4;
    return;
  }
  if ((param_2 & 7U) == 0) {
    fVar4 = *(float *)(param_5 + 8);
    *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)param_5;
    (param_3->field0_0x0)._s_0.Z = fVar4;
    return;
  }
  fVar4 = 0.0;
  if ((param_2 & 1U) == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = *(float *)param_5;
  }
  (param_3->field0_0x0)._s_0.X = fVar8;
  pfVar3 = (float *)(param_5 + 4);
  if ((param_2 & 1U) == 0) {
    pfVar3 = (float *)param_5;
  }
  if ((param_2 & 2U) != 0) {
    fVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
  }
  (param_3->field0_0x0)._s_0.Y = fVar4;
  if ((param_2 & 4U) == 0) {
    (param_3->field0_0x0)._s_0.Z = 0.0;
    return;
  }
  (param_3->field0_0x0)._s_0.Z = *pfVar3;
  return;
}

// DecompressTranslation<1> @ 147429b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimationCompression_PerTrackUtils::DecompressTranslation<1>
          (int param_1,int param_2,TVector<float> *param_3,uchar *param_4,uchar *param_5)

{
  ushort uVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 != 1) {
    if (param_1 == 3) {
      fVar9 = 0.0;
      fVar4 = 0.0;
      fVar7 = 0.0;
      fVar5 = 0.0;
      fVar8 = 0.0;
      fVar6 = 0.0;
      if ((param_2 & 1U) != 0) {
        fVar4 = *(float *)param_4;
        fVar8 = *(float *)(param_4 + 4);
        param_4 = param_4 + 8;
      }
      if ((param_2 & 2U) != 0) {
        fVar7 = *(float *)param_4;
        fVar9 = *(float *)((longlong)param_4 + 4);
        param_4 = (uchar *)((longlong)param_4 + 8);
      }
      if ((param_2 & 4U) != 0) {
        fVar5 = *(float *)param_4;
        fVar6 = *(float *)((longlong)param_4 + 4);
      }
      uVar2 = *(uint *)param_5;
      (param_3->field0_0x0)._s_0.X =
           (float)(int)((uVar2 & 0x3ff) - 0x1ff) * ___real_3b004020 * fVar8 + fVar4;
      fVar4 = __real_3a802008;
      (param_3->field0_0x0)._s_0.Y =
           (float)(int)((uVar2 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * fVar9 + fVar7;
      (param_3->field0_0x0)._s_0.Z = (float)(int)((uVar2 >> 0x15) - 0x3ff) * fVar4 * fVar6 + fVar5;
      return;
    }
    if (param_1 != 2) {
      if (param_1 != 6) {
        UE::Logging::Private::BasicFatalLog
                  (&`public:_static_void___cdecl_FAnimationCompression_PerTrackUtils::DecompressTranslation<1>(int,int,UE::Math::TVector<float>&___ptr64,unsigned_char_const*___ptr64___restrict,unsigned_char_const*___ptr64___restrict)'
                    ::__l64::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        *(undefined8 *)&param_3->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        return;
      }
      *(undefined8 *)&param_3->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      return;
    }
    fVar4 = 0.0;
    if ((param_2 & 1U) == 0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)(int)(*(ushort *)param_5 - 0xff);
      param_5 = param_5 + 2;
    }
    (param_3->field0_0x0)._s_0.X = fVar8;
    if ((param_2 & 2U) == 0) {
      fVar8 = 0.0;
    }
    else {
      uVar1 = *(ushort *)param_5;
      param_5 = (uchar *)((longlong)param_5 + 2);
      fVar8 = (float)(int)(uVar1 - 0xff);
    }
    (param_3->field0_0x0)._s_0.Y = fVar8;
    if ((param_2 & 4U) != 0) {
      fVar4 = (float)(int)(*(ushort *)param_5 - 0xff);
    }
    (param_3->field0_0x0)._s_0.Z = fVar4;
    return;
  }
  if ((param_2 & 7U) == 0) {
    fVar4 = *(float *)(param_5 + 8);
    *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)param_5;
    (param_3->field0_0x0)._s_0.Z = fVar4;
    return;
  }
  fVar4 = 0.0;
  if ((param_2 & 1U) == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = *(float *)param_5;
  }
  (param_3->field0_0x0)._s_0.X = fVar8;
  pfVar3 = (float *)(param_5 + 4);
  if ((param_2 & 1U) == 0) {
    pfVar3 = (float *)param_5;
  }
  if ((param_2 & 2U) != 0) {
    fVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
  }
  (param_3->field0_0x0)._s_0.Y = fVar4;
  if ((param_2 & 4U) == 0) {
    (param_3->field0_0x0)._s_0.Z = 0.0;
    return;
  }
  (param_3->field0_0x0)._s_0.Z = *pfVar3;
  return;
}

