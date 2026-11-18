// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147b9e900

UClass * __cdecl USystemTimeTimecodeProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USystemTimeTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SystemTimeTimecodeProvider",
               &Z_Registration_Info_UClass_USystemTimeTimecodeProvider.InnerSingleton,
               StaticRegisterNativesUSystemTimeTimecodeProvider,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USystemTimeTimecodeProvider>,
               InternalVTableHelperCtorCaller<USystemTimeTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USystemTimeTimecodeProvider.InnerSingleton;
}

// USystemTimeTimecodeProvider @ 147bbdce0

USystemTimeTimecodeProvider * __thiscall
USystemTimeTimecodeProvider::USystemTimeTimecodeProvider
          (USystemTimeTimecodeProvider *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USystemTimeTimecodeProvider__6B_;
  (this->FrameRate).Numerator = 60000;
  (this->FrameRate).Denominator = 1;
  return this;
}

// USystemTimeTimecodeProvider @ 147bbdd20

USystemTimeTimecodeProvider * __thiscall
USystemTimeTimecodeProvider::USystemTimeTimecodeProvider(USystemTimeTimecodeProvider *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  (this->FrameRate).Numerator = 0x3c;
  this->_padding_ = (longlong)&___7USystemTimeTimecodeProvider__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (this->FrameRate).Denominator = 1;
  this->bGenerateFullFrame = true;
  this->bUseHighPerformanceClock = false;
  this->State = Closed;
  return this;
}

// ~USystemTimeTimecodeProvider @ 147bbfb00

void __thiscall
USystemTimeTimecodeProvider::~USystemTimeTimecodeProvider(USystemTimeTimecodeProvider *this)

{
  this->_padding_ = (longlong)&___7UTimecodeProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateFrameTimeFromHighPerformanceClock @ 147bddee0

FFrameTime __cdecl
USystemTimeTimecodeProvider::GenerateFrameTimeFromHighPerformanceClock(FFrameRate param_1)

{
  int iVar1;
  undefined8 in_RDX;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  LARGE_INTEGER local_res8;
  undefined8 local_res10;
  
  local_res10 = in_RDX;
  QueryPerformanceCounter(&local_res8);
  dVar2 = fmod((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000 + HighPerformanceClockDelta,__real_40f5180000000000);
  dVar3 = (dVar2 * (double)(int)in_RDX) / (double)local_res10._4_4_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar3;
  auVar6 = roundpd(in_XMM3,auVar6,1);
  dVar2 = auVar6._0_8_;
  dVar3 = dVar3 - dVar2;
  if (__real_41dfffffffc00000 <= dVar2) {
    dVar2 = __real_41dfffffffc00000;
  }
  if (dVar2 <= __real_c1e0000000000000) {
    dVar2 = __real_c1e0000000000000;
  }
  iVar1 = (int)dVar3;
  fVar4 = (float)dVar3 - (float)iVar1;
  fVar5 = fVar4;
  if ((0.0 < fVar4) && (fVar5 = ::FFrameTime::MaxSubframe, fVar4 <= ::FFrameTime::MaxSubframe)) {
    fVar5 = fVar4;
  }
  fVar4 = ::FFrameTime::MaxSubframe;
  if (fVar5 <= ::FFrameTime::MaxSubframe) {
    fVar4 = fVar5;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(int *)param_1 = (int)dVar2 + iVar1;
  *(float *)((longlong)param_1 + 4) = fVar4;
  return (FFrameTime)param_1;
}

// GenerateFrameTimeFromSystemTime @ 147bddfd0

FFrameTime __cdecl USystemTimeTimecodeProvider::GenerateFrameTimeFromSystemTime(FFrameRate param_1)

{
  int iVar1;
  undefined8 in_RDX;
  double dVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  float fVar6;
  longlong local_res8;
  int iStackX_14;
  
  FDateTime::Now();
  iStackX_14 = (int)((ulonglong)in_RDX >> 0x20);
  dVar4 = ((double)(local_res8 % 864000000000) * (double)(int)in_RDX * __real_3e7ad7f29abcaf48) /
          (double)iStackX_14;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  auVar3 = roundpd(in_XMM2,auVar3,1);
  dVar2 = auVar3._0_8_;
  dVar4 = dVar4 - dVar2;
  if (__real_41dfffffffc00000 <= dVar2) {
    dVar2 = __real_41dfffffffc00000;
  }
  if (dVar2 <= __real_c1e0000000000000) {
    dVar2 = __real_c1e0000000000000;
  }
  iVar1 = (int)dVar4;
  fVar5 = (float)dVar4 - (float)iVar1;
  fVar6 = fVar5;
  if ((0.0 < fVar5) && (fVar6 = ::FFrameTime::MaxSubframe, fVar5 <= ::FFrameTime::MaxSubframe)) {
    fVar6 = fVar5;
  }
  fVar5 = ::FFrameTime::MaxSubframe;
  if (fVar6 <= ::FFrameTime::MaxSubframe) {
    fVar5 = fVar6;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(int *)param_1 = (int)dVar2 + iVar1;
  *(float *)((longlong)param_1 + 4) = fVar5;
  return (FFrameTime)param_1;
}

// GenerateTimecodeFromHighPerformanceClock @ 147bde0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTimecode * __cdecl
USystemTimeTimecodeProvider::GenerateTimecodeFromHighPerformanceClock
          (FTimecode *__return_storage_ptr__,FFrameRate param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined3 uVar5;
  bool bVar6;
  FTimecode *pFVar7;
  double dVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  LARGE_INTEGER local_res8;
  FFrameRate local_res10;
  FTimecode local_38 [2];
  
  local_res10 = param_1;
  QueryPerformanceCounter(&local_res8);
  dVar8 = fmod((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
               FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000 +
               HighPerformanceClockDelta,__real_40f5180000000000);
  auVar9._0_8_ = dVar8 * __real_416312d000000000 + __real_3fe0000000000000;
  auVar9._8_8_ = extraout_XMM0_Qb;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auVar9._0_8_;
  auVar9 = roundpd(auVar9,auVar11,1);
  dVar8 = (double)param_1.Numerator / (double)local_res10.Denominator;
  if (((double)CONCAT44((uint)((ulonglong)(dVar8 - ___real_403df853e2556b29) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8 - ___real_403df853e2556b29,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a) ||
     (auVar10._0_8_ =
           (double)CONCAT44((uint)((ulonglong)(dVar8 - ___real_404df853e2556b29) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar8 - ___real_404df853e2556b29,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff), auVar10._8_8_ = 0,
     auVar10._0_8_ <= __real_3e45798ee2308c3a)) {
    bVar6 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported();
    auVar10 = extraout_XMM0;
    if (bVar6) {
      bVar6 = true;
      goto LAB_147bde188;
    }
  }
  bVar6 = false;
LAB_147bde188:
  __return_storage_ptr__->Subframe = 0.0;
  auVar12._0_8_ =
       (double)(longlong)auVar9._0_8_ * dVar8 * __real_3e7ad7f29abcaf48 + __real_3fe0000000000000;
  auVar12._8_8_ = 0;
  auVar9 = roundpd(auVar10,auVar12,1);
  local_res8.s.LowPart = (DWORD)auVar9._0_8_;
  pFVar7 = FTimecode::FromFrameNumber(local_38,(FFrameNumber *)&local_res8.s,&local_res10,bVar6);
  iVar1 = pFVar7->Minutes;
  iVar2 = pFVar7->Seconds;
  iVar3 = pFVar7->Frames;
  fVar4 = pFVar7->Subframe;
  bVar6 = pFVar7->bDropFrameFormat;
  uVar5 = *(undefined3 *)&pFVar7->field_0x15;
  __return_storage_ptr__->Hours = pFVar7->Hours;
  __return_storage_ptr__->Minutes = iVar1;
  __return_storage_ptr__->Seconds = iVar2;
  __return_storage_ptr__->Frames = iVar3;
  __return_storage_ptr__->Subframe = fVar4;
  __return_storage_ptr__->bDropFrameFormat = bVar6;
  *(undefined3 *)&__return_storage_ptr__->field_0x15 = uVar5;
  return __return_storage_ptr__;
}

// GenerateTimecodeFromSystemTime @ 147bde200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTimecode * __cdecl
USystemTimeTimecodeProvider::GenerateTimecodeFromSystemTime
          (FTimecode *__return_storage_ptr__,FFrameRate param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined3 uVar5;
  bool bVar6;
  FTimecode *pFVar7;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  FFrameNumber local_res8 [2];
  FFrameRate local_res10;
  longlong local_res18;
  FTimecode local_48 [2];
  
  local_res10 = param_1;
  FDateTime::Now();
  dVar10 = (double)param_1.Numerator / (double)local_res10.Denominator;
  if (((double)CONCAT44((uint)((ulonglong)(dVar10 - ___real_403df853e2556b29) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar10 - ___real_403df853e2556b29,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a) ||
     (auVar8._0_8_ = (double)CONCAT44((uint)((ulonglong)(dVar10 - ___real_404df853e2556b29) >> 0x20)
                                      & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar10 - ___real_404df853e2556b29,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff),
     auVar8._8_8_ = 0, auVar8._0_8_ <= __real_3e45798ee2308c3a)) {
    bVar6 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported();
    auVar8 = extraout_XMM0;
    if (bVar6) {
      bVar6 = true;
      goto LAB_147bde29a;
    }
  }
  bVar6 = false;
LAB_147bde29a:
  __return_storage_ptr__->Subframe = 0.0;
  auVar9._0_8_ = (double)(local_res18 % 864000000000) * dVar10 * __real_3e7ad7f29abcaf48 +
                 __real_3fe0000000000000;
  auVar9._8_8_ = 0;
  auVar8 = roundpd(auVar8,auVar9,1);
  local_res8[0].Value = (int)auVar8._0_8_;
  pFVar7 = FTimecode::FromFrameNumber(local_48,local_res8,&local_res10,bVar6);
  iVar1 = pFVar7->Minutes;
  iVar2 = pFVar7->Seconds;
  iVar3 = pFVar7->Frames;
  fVar4 = pFVar7->Subframe;
  bVar6 = pFVar7->bDropFrameFormat;
  uVar5 = *(undefined3 *)&pFVar7->field_0x15;
  __return_storage_ptr__->Hours = pFVar7->Hours;
  __return_storage_ptr__->Minutes = iVar1;
  __return_storage_ptr__->Seconds = iVar2;
  __return_storage_ptr__->Frames = iVar3;
  __return_storage_ptr__->Subframe = fVar4;
  __return_storage_ptr__->bDropFrameFormat = bVar6;
  *(undefined3 *)&__return_storage_ptr__->field_0x15 = uVar5;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147be5f30

UClass * __cdecl USystemTimeTimecodeProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USystemTimeTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SystemTimeTimecodeProvider",
               &Z_Registration_Info_UClass_USystemTimeTimecodeProvider.InnerSingleton,
               StaticRegisterNativesUSystemTimeTimecodeProvider,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USystemTimeTimecodeProvider>,
               InternalVTableHelperCtorCaller<USystemTimeTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USystemTimeTimecodeProvider.InnerSingleton;
}

// GetQualifiedFrameTime @ 147be6440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FQualifiedFrameTime * __thiscall
USystemTimeTimecodeProvider::GetQualifiedFrameTime
          (USystemTimeTimecodeProvider *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  FFrameRate *pFVar1;
  FFrameRate FVar2;
  FFrameTime FVar3;
  bool bVar4;
  FTimecode *pFVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  FFrameRate *pFVar9;
  double dVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM3 [16];
  LARGE_INTEGER local_res8;
  FFrameRate local_res10;
  FFrameRate local_res18 [2];
  FTimecode local_78;
  FTimecode local_60 [2];
  undefined1 auVar16 [16];
  
  pFVar1 = &this->FrameRate;
  FVar2 = *pFVar1;
  iVar8 = FVar2.Numerator;
  iVar6 = FVar2.Denominator;
  if (this->bGenerateFullFrame == false) {
    if (this->bUseHighPerformanceClock == false) {
      FDateTime::Now();
      dVar10 = ((double)(CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) % 864000000000) *
                (double)iVar8 * __real_3e7ad7f29abcaf48) / (double)iVar6;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar10;
      auVar12 = roundpd(in_XMM2,auVar12,1);
      dVar14 = auVar12._0_8_;
      dVar10 = dVar10 - dVar14;
      if (__real_41dfffffffc00000 <= dVar14) {
        dVar14 = __real_41dfffffffc00000;
      }
      if (dVar14 <= __real_c1e0000000000000) {
        dVar14 = __real_c1e0000000000000;
      }
      iVar6 = (int)dVar10;
      local_res8.s.HighPart = (LONG)((float)dVar10 - (float)iVar6);
      if ((0.0 < (float)local_res8.s.HighPart) &&
         (::FFrameTime::MaxSubframe <= (float)local_res8.s.HighPart)) {
        local_res8.s.HighPart = (LONG)::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= (float)local_res8.s.HighPart) {
        local_res8.s.HighPart = (LONG)::FFrameTime::MaxSubframe;
      }
      if ((float)local_res8.s.HighPart <= 0.0) {
        local_res8.s.HighPart = (LONG)0.0;
      }
    }
    else {
      QueryPerformanceCounter(&local_res8);
      dVar14 = fmod((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                    FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000 +
                    HighPerformanceClockDelta,__real_40f5180000000000);
      dVar10 = (dVar14 * (double)iVar8) / (double)iVar6;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar10;
      auVar12 = roundpd(in_XMM3,auVar17,1);
      dVar14 = auVar12._0_8_;
      dVar10 = dVar10 - dVar14;
      if (__real_41dfffffffc00000 <= dVar14) {
        dVar14 = __real_41dfffffffc00000;
      }
      if (dVar14 <= __real_c1e0000000000000) {
        dVar14 = __real_c1e0000000000000;
      }
      iVar6 = (int)dVar10;
      local_res8.s.HighPart = (LONG)((float)dVar10 - (float)iVar6);
      if ((0.0 < (float)local_res8.s.HighPart) &&
         (::FFrameTime::MaxSubframe <= (float)local_res8.s.HighPart)) {
        local_res8.s.HighPart = (LONG)::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= (float)local_res8.s.HighPart) {
        local_res8.s.HighPart = (LONG)::FFrameTime::MaxSubframe;
      }
      if ((float)local_res8.s.HighPart <= 0.0) {
        local_res8.s.HighPart = (LONG)0.0;
      }
    }
    FVar3.SubFrame = (float)local_res8.s.HighPart;
    FVar3.FrameNumber.Value = iVar6 + (int)dVar14;
    __return_storage_ptr__->Time = FVar3;
    __return_storage_ptr__->Rate = *pFVar1;
  }
  else {
    if (this->bUseHighPerformanceClock == false) {
      local_res18[0] = FVar2;
      FDateTime::Now();
      lVar7 = (longlong)local_res10 % 864000000000;
      dVar14 = (double)iVar8 / (double)iVar6;
      if (((__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)(dVar14 - ___real_403df853e2556b29) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar14 - ___real_403df853e2556b29,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
          (auVar13._0_8_ =
                (double)CONCAT44((uint)((ulonglong)(dVar14 - ___real_404df853e2556b29) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar14 - ___real_404df853e2556b29,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff), auVar13._8_8_ = 0,
          __real_3e45798ee2308c3a < auVar13._0_8_)) ||
         (bVar4 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported(),
         auVar13 = extraout_XMM0_00, !bVar4)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pFVar9 = local_res18;
      dVar14 = (double)lVar7 * dVar14 * __real_3e7ad7f29abcaf48 + __real_3fe0000000000000;
    }
    else {
      local_res10 = FVar2;
      QueryPerformanceCounter(&local_res8);
      dVar10 = fmod((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                    FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000 +
                    HighPerformanceClockDelta,__real_40f5180000000000);
      dVar14 = __real_3fe0000000000000;
      auVar11._0_8_ = dVar10 * __real_416312d000000000 + __real_3fe0000000000000;
      auVar11._8_8_ = extraout_XMM0_Qb;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar11._0_8_;
      auVar12 = roundpd(auVar11,auVar15,1);
      dVar10 = (double)iVar8 / (double)iVar6;
      if (((__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)(dVar10 - ___real_403df853e2556b29) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar10 - ___real_403df853e2556b29,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
          (auVar13._0_8_ =
                (double)CONCAT44((uint)((ulonglong)(dVar10 - ___real_404df853e2556b29) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar10 - ___real_404df853e2556b29,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff), auVar13._8_8_ = 0,
          __real_3e45798ee2308c3a < auVar13._0_8_)) ||
         (bVar4 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported(), auVar13 = extraout_XMM0,
         !bVar4)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pFVar9 = &local_res10;
      dVar14 = (double)(longlong)auVar12._0_8_ * dVar10 * __real_3e7ad7f29abcaf48 + dVar14;
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar14;
    auVar12 = roundpd(auVar13,auVar16,1);
    local_res8.s.LowPart = (DWORD)auVar12._0_8_;
    pFVar5 = FTimecode::FromFrameNumber(local_60,(FFrameNumber *)&local_res8.s,pFVar9,bVar4);
    local_78.Hours = pFVar5->Hours;
    local_78.Minutes = pFVar5->Minutes;
    local_78.Seconds = pFVar5->Seconds;
    local_78.Frames = pFVar5->Frames;
    local_78.Subframe = pFVar5->Subframe;
    local_78.bDropFrameFormat = pFVar5->bDropFrameFormat;
    local_78._21_3_ = *(undefined3 *)&pFVar5->field_0x15;
    ::FQualifiedFrameTime::FQualifiedFrameTime(__return_storage_ptr__,&local_78,pFVar1);
  }
  return __return_storage_ptr__;
}

// GetSynchronizationState @ 147bebbf0

ETimecodeProviderSynchronizationState __thiscall
USystemTimeTimecodeProvider::GetSynchronizationState(USystemTimeTimecodeProvider *this)

{
  return this->State;
}

// Initialize @ 147beffc0

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
USystemTimeTimecodeProvider::Initialize(USystemTimeTimecodeProvider *this,UEngine *param_1)

{
  this->State = Synchronized;
  return true;
}

// Shutdown @ 147c021d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
USystemTimeTimecodeProvider::Shutdown(USystemTimeTimecodeProvider *this,UEngine *param_1)

{
  this->State = Closed;
  return;
}

// StaticRegisterNativesUSystemTimeTimecodeProvider @ 147c03800

void __cdecl USystemTimeTimecodeProvider::StaticRegisterNativesUSystemTimeTimecodeProvider(void)

{
  return;
}

