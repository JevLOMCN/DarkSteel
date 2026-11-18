// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 9

// StaticClass @ 14603ab00

UClass * __cdecl UGenlockedTimecodeProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenlockedTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"GenlockedTimecodeProvider",
               &Z_Registration_Info_UClass_UGenlockedTimecodeProvider.InnerSingleton,
               StaticRegisterNativesUGenlockedTimecodeProvider,0x58,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGenlockedTimecodeProvider>,
               InternalVTableHelperCtorCaller<UGenlockedTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenlockedTimecodeProvider.InnerSingleton;
}

// UGenlockedTimecodeProvider @ 146040110

UGenlockedTimecodeProvider * __thiscall
UGenlockedTimecodeProvider::UGenlockedTimecodeProvider
          (UGenlockedTimecodeProvider *this,FVTableHelper *param_1)

{
  UTimecodeProvider::UTimecodeProvider((UTimecodeProvider *)this,param_1);
  this->bUseGenlockToCount = true;
  this->_padding_ = (longlong)&___7UGenlockedTimecodeProvider__6B_;
  (this->LastFrameTime).Time.FrameNumber = 0;
  (this->LastFrameTime).Time.SubFrame = 0.0;
  (this->LastFetchedFrameTime).Time.SubFrame = 0.0;
  (this->LastFrameTime).Rate.Numerator = 0x18;
  *(undefined8 *)&(this->LastFrameTime).Rate.Denominator = 1;
  (this->LastFetchedFrameTime).Rate.Numerator = 0x18;
  (this->LastFetchedFrameTime).Rate.Denominator = 1;
  return this;
}

// UGenlockedTimecodeProvider @ 146040170

UGenlockedTimecodeProvider * __thiscall
UGenlockedTimecodeProvider::UGenlockedTimecodeProvider
          (UGenlockedTimecodeProvider *this,FObjectInitializer *param_1)

{
  UTimecodeProvider::UTimecodeProvider((UTimecodeProvider *)this,param_1);
  this->bUseGenlockToCount = true;
  this->_padding_ = (longlong)&___7UGenlockedTimecodeProvider__6B_;
  (this->LastFrameTime).Time.FrameNumber = 0;
  (this->LastFrameTime).Time.SubFrame = 0.0;
  (this->LastFetchedFrameTime).Time.SubFrame = 0.0;
  (this->LastFrameTime).Rate.Numerator = 0x18;
  *(undefined8 *)&(this->LastFrameTime).Rate.Denominator = 1;
  (this->LastFetchedFrameTime).Rate.Numerator = 0x18;
  (this->LastFetchedFrameTime).Rate.Denominator = 1;
  return this;
}

// ~UGenlockedTimecodeProvider @ 1460405d0

void __thiscall
UGenlockedTimecodeProvider::~UGenlockedTimecodeProvider(UGenlockedTimecodeProvider *this)

{
  this->_padding_ = (longlong)&___7UGenlockedTimecodeProvider__6B_;
  UTimecodeProvider::~UTimecodeProvider((UTimecodeProvider *)this);
  return;
}

// CorrectFromGenlock @ 146046770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FQualifiedFrameTime * __thiscall
UGenlockedTimecodeProvider::CorrectFromGenlock
          (UGenlockedTimecodeProvider *this,FQualifiedFrameTime *__return_storage_ptr__,
          FQualifiedFrameTime *param_1,UGenlockedCustomTimeStep *param_2)

{
  code *pcVar1;
  FFrameRate FVar2;
  FFrameTime FVar3;
  bool bVar4;
  uint uVar5;
  FQualifiedFrameTime *pFVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  int local_res18;
  int iStackX_1c;
  
  if ((param_2 == (UGenlockedCustomTimeStep *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Genlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\GenlockedTimecodeProvider.cpp"
                         ,0x37,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FQualifiedFrameTime *)(*pcVar1)();
    return pFVar6;
  }
  (**(code **)(param_2->_padding_ + 0x2e8))(param_2,&local_res18);
  auVar10._0_8_ = (double)(param_1->Rate).Numerator / (double)(param_1->Rate).Denominator;
  auVar10._8_8_ = 0;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)auVar10._0_8_ >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(auVar10._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar9 = ((double)local_res18 / (double)iStackX_1c) / auVar10._0_8_;
    dVar7 = FMath::RoundHalfFromZero(dVar9);
    dVar9 = dVar7 - dVar9;
    if (((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f847ae147ae147b) &&
       (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      uVar5 = (**(code **)(param_2->_padding_ + 0x2f0))(param_2);
      dVar12 = (double)(param_1->Time).SubFrame + (double)(param_1->Time).FrameNumber.Value +
               (double)uVar5 / dVar7;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar12;
      auVar10 = roundpd(auVar10,auVar8,1);
      dVar7 = auVar10._0_8_;
      dVar9 = dVar7;
      if (__real_41dfffffffc00000 <= dVar7) {
        dVar9 = __real_41dfffffffc00000;
      }
      fVar11 = (float)(dVar12 - dVar7);
      if (dVar9 <= __real_c1e0000000000000) {
        dVar9 = __real_c1e0000000000000;
      }
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      FVar3.SubFrame = fVar11;
      FVar3.FrameNumber.Value = (int)dVar9;
      __return_storage_ptr__->Time = FVar3;
      __return_storage_ptr__->Rate = param_1->Rate;
      return __return_storage_ptr__;
    }
  }
  FVar2 = param_1->Rate;
  __return_storage_ptr__->Time = param_1->Time;
  __return_storage_ptr__->Rate = FVar2;
  return __return_storage_ptr__;
}

// FetchAndUpdate @ 14604bb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGenlockedTimecodeProvider::FetchAndUpdate(UGenlockedTimecodeProvider *this)

{
  FQualifiedFrameTime *pFVar1;
  FFrameRate FVar2;
  UEngineCustomTimeStep *pUVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  FFrameRate FVar6;
  FFrameNumber FVar7;
  FFrameTime FVar8;
  char cVar9;
  int iVar10;
  UClass *pUVar11;
  FFrameTime *pFVar12;
  int *piVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  FFrameTime local_res8;
  FFrameTime local_res10;
  FFrameTime local_48;
  int iStack_40;
  int iStack_3c;
  undefined1 local_38 [48];
  
  local_48.FrameNumber.Value = 0;
  local_48.SubFrame = 0.0;
  iStack_40 = 0x18;
  bVar4 = false;
  iStack_3c = 1;
  cVar9 = (**(code **)(this->_padding_ + 0x2b0))(this,&local_48);
  if (cVar9 != '\0') {
    FVar2 = (this->LastFetchedFrameTime).Rate;
    local_res10 = local_48;
    FVar8 = local_res10;
    local_res8 = (this->LastFetchedFrameTime).Time;
    iVar10 = FVar2.Denominator;
    local_res10.SubFrame = local_48.SubFrame;
    FVar6.Denominator = iStack_3c;
    FVar6.Numerator = iStack_40;
    (this->LastFetchedFrameTime).Time = local_48;
    (this->LastFetchedFrameTime).Rate = FVar6;
    dVar20 = ((double)((longlong)iVar10 * (longlong)local_res8.FrameNumber.Value.Value) +
             (double)iVar10 * (double)local_res8.SubFrame) / (double)FVar2.Numerator -
             ((double)((longlong)iStack_3c * (longlong)local_48.FrameNumber.Value) +
             (double)iStack_3c * (double)local_res10.SubFrame) / (double)iStack_40;
    dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    bVar4 = __real_3f50624dd2f1a9fc < dVar20;
    local_res10 = FVar8;
    if (__real_3f50624dd2f1a9fc < dVar20) {
      (this->LastFrameTime).Time = local_48;
      (this->LastFrameTime).Rate = FVar6;
    }
  }
  if (((this->bUseGenlockToCount != false) && (GEngine != (UEngine *)0x0)) &&
     (pUVar3 = (GEngine->CustomTimeStep).field0_0x0.DebugPtr, pUVar3 != (UEngineCustomTimeStep *)0x0
     )) {
    pUVar11 = UGenlockedCustomTimeStep::StaticClass();
    iVar10 = (int)pUVar11->_padding_;
    if (((iVar10 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
         &pUVar11->_padding_)) &&
       ((cVar9 = (**(code **)(*(longlong *)pUVar3 + 0x2f8))(pUVar3), cVar9 != '\0' &&
        (iVar10 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3), iVar10 != 1)))) {
      pFVar1 = &this->LastFrameTime;
      if (!bVar4) {
        pFVar12 = (FFrameTime *)(**(code **)(this->_padding_ + 0x2f8))(this,local_38,pFVar1,pUVar3);
        FVar7.Value = pFVar12[1].FrameNumber.Value;
        fVar16 = pFVar12[1].SubFrame;
        pFVar1->Time = *pFVar12;
        (this->LastFrameTime).Rate.Numerator = FVar7.Value;
        (this->LastFrameTime).Rate.Denominator = (int)fVar16;
      }
      piVar13 = (int *)(**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3,&local_res8);
      auVar19._0_8_ = (double)*piVar13 / (double)piVar13[1];
      auVar19._8_8_ = 0;
      dVar20 = (double)(this->LastFrameTime).Rate.Numerator /
               (double)(this->LastFrameTime).Rate.Denominator - auVar19._0_8_;
      if (__real_3f847ae147ae147b <
          (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3,&local_res8);
        dVar20 = (double)(this->LastFrameTime).Rate.Numerator /
                 (double)(this->LastFrameTime).Rate.Denominator;
        if (__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          dVar20 = ((double)local_res8.FrameNumber.Value / (double)(int)local_res8.SubFrame) /
                   dVar20;
          dVar14 = FMath::RoundHalfFromZero(dVar20);
          dVar20 = dVar14 - dVar20;
          if ((double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f847ae147ae147b) {
            (this->LastFrameTime).Rate.Numerator =
                 (int)((double)(this->LastFrameTime).Rate.Numerator * dVar14);
            dVar14 = ((double)(this->LastFrameTime).Time.SubFrame +
                     (double)(pFVar1->Time).FrameNumber.Value) * dVar14;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = dVar14;
            auVar19 = roundpd(auVar19,auVar15,1);
            dVar18 = auVar19._0_8_;
            dVar20 = dVar18;
            if (__real_41dfffffffc00000 <= dVar18) {
              dVar20 = __real_41dfffffffc00000;
            }
            fVar16 = (float)(dVar14 - dVar18);
            if (dVar20 <= __real_c1e0000000000000) {
              dVar20 = __real_c1e0000000000000;
            }
            if (::FFrameTime::MaxSubframe <= fVar16) {
              fVar16 = ::FFrameTime::MaxSubframe;
            }
            auVar17 = ZEXT416((uint)fVar16);
            if (fVar16 <= 0.0) {
              auVar17 = ZEXT416(0) << 0x20;
            }
            if (::FFrameTime::MaxSubframe <= auVar17._0_4_) {
              auVar17._0_4_ = ::FFrameTime::MaxSubframe;
            }
            if (auVar17._0_4_ <= 0.0) {
              auVar5._12_4_ = 0;
              auVar5._0_12_ = auVar17._4_12_;
              auVar17 = auVar5 << 0x20;
            }
            local_res8.SubFrame = auVar17._0_4_;
            local_res8.FrameNumber.Value = (int)dVar20;
            pFVar1->Time = local_res8;
          }
        }
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14604ce40

UClass * __cdecl UGenlockedTimecodeProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenlockedTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"GenlockedTimecodeProvider",
               &Z_Registration_Info_UClass_UGenlockedTimecodeProvider.InnerSingleton,
               StaticRegisterNativesUGenlockedTimecodeProvider,0x58,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGenlockedTimecodeProvider>,
               InternalVTableHelperCtorCaller<UGenlockedTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenlockedTimecodeProvider.InnerSingleton;
}

// GetQualifiedFrameTime @ 14604d1f0

FQualifiedFrameTime * __thiscall
UGenlockedTimecodeProvider::GetQualifiedFrameTime
          (UGenlockedTimecodeProvider *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  FFrameRate FVar1;
  
  FVar1 = (this->LastFrameTime).Rate;
  __return_storage_ptr__->Time = (this->LastFrameTime).Time;
  __return_storage_ptr__->Rate = FVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGenlockedTimecodeProvider @ 14604fdd0

void __cdecl UGenlockedTimecodeProvider::StaticRegisterNativesUGenlockedTimecodeProvider(void)

{
  return;
}

