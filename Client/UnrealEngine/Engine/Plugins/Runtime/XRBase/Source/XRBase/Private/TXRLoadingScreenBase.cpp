// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 10

// AddSplash @ 14cf82660

void __thiscall
TXRLoadingScreenBase<FSplashData>::AddSplash
          (TXRLoadingScreenBase<FSplashData> *this,FSplashDesc *param_1)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FSplashDesc *this_00;
  
  iVar3 = (this->Splashes).ArrayNum;
  piVar1 = &(this->Splashes).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x100,0x10,&(this->Splashes).AllocatorInstance,piVar1);
  }
  (this->Splashes).ArrayNum = iVar3 + 1;
  this_00 = (FSplashDesc *)((this->Splashes).AllocatorInstance.Data + (longlong)iVar3 * 0x100);
  IXRLoadingScreen::FSplashDesc::FSplashDesc(this_00,param_1);
  *(undefined4 *)this_00[1].Transform.Rotation.XY.m128d_f64 = 0;
  iVar3 = (this->Splashes).ArrayNum;
  uVar5 = iVar3 - 1;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x50);
  uVar4 = 0;
  if ((int)uVar5 < iVar3) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014cf8273a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (this,(this->Splashes).AllocatorInstance.Data +
                  (longlong)((this->Splashes).ArrayNum + -1) * 0x100);
  return;
}

// ClearSplashes @ 14cf845d0

void __thiscall
TXRLoadingScreenBase<FSplashData>::ClearSplashes(TXRLoadingScreenBase<FSplashData> *this)

{
  TArray<FSplashData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FSplashData *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pTVar1 = &this->Splashes;
  if (this->bShowing != false) {
    iVar3 = (this->Splashes).ArrayNum;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar5 = pFVar6 + (longlong)iVar3 * 0x100;
    while( true ) {
      if ((this->Splashes).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FSplashData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar6 == pFVar5) break;
      (**(code **)(this->_padding_ + 0x48))(this,pFVar6);
      pFVar6 = pFVar6 + 0x100;
    }
  }
  piVar2 = &(this->Splashes).ArrayMax;
  pFVar4 = (FSplashData *)(pTVar1->AllocatorInstance).Data;
  iVar3 = (this->Splashes).ArrayNum;
  if (-1 < (this->Splashes).ArrayMax) {
    DestructItems<FSplashData,int>(pFVar4,iVar3);
    (this->Splashes).ArrayNum = 0;
    return;
  }
  DestructItems<FSplashData,int>(pFVar4,iVar3);
  (this->Splashes).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,0x10,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  return;
}

// GetStatId @ 14cf90d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
TXRLoadingScreenBase<FSplashData>::GetStatId(TXRLoadingScreenBase<FSplashData> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_virtual_struct_TStatId___cdecl_TXRLoadingScreenBase<FSplashData>::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_virtual_struct_TStatId___cdecl_TXRLoadingScreenBase<FSplashData>::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_virtual_struct_TStatId___cdecl_TXRLoadingScreenBase<FSplashData>::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FDefaultXRLoadingScreen = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FDefaultXRLoadingScreen");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`protected:_virtual_struct_TStatId___cdecl_TXRLoadingScreenBase<FSplashData>::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FDefaultXRLoadingScreen,*pFVar1,L"FDefaultXRLoadingScreen",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`protected:_virtual_struct_TStatId___cdecl_TXRLoadingScreenBase<FSplashData>::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FDefaultXRLoadingScreen;
  if (_StatPtr_FDefaultXRLoadingScreen == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FDefaultXRLoadingScreen");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`protected:_virtual_struct_TStatId___cdecl_TXRLoadingScreenBase<FSplashData>::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FDefaultXRLoadingScreen,*pFVar1,L"FDefaultXRLoadingScreen",
                       "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true
                       ,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 14cf914f0

ETickableTickType __thiscall
TXRLoadingScreenBase<FSplashData>::GetTickableTickType(TXRLoadingScreenBase<FSplashData> *this)

{
  return (*(char *)&(this->HMDOrientation).W == '\0') + Always;
}

// HideLoadingScreen @ 14cf92590

void __thiscall
TXRLoadingScreenBase<FSplashData>::HideLoadingScreen(TXRLoadingScreenBase<FSplashData> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (this->bShowing != false) {
    iVar1 = (this->Splashes).ArrayNum;
    pFVar3 = (this->Splashes).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar1 * 0x100;
    while( true ) {
      if ((this->Splashes).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSplashData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar3 == pFVar2) break;
      (**(code **)(this->_padding_ + 0x40))(this,pFVar3);
      pFVar3 = pFVar3 + 0x100;
    }
    FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->_padding_,Never);
    this->bShowing = false;
  }
  return;
}

// IsShown @ 14cf932e0

bool __thiscall TXRLoadingScreenBase<FSplashData>::IsShown(TXRLoadingScreenBase<FSplashData> *this)

{
  return this->bShowing;
}

// IsTickableInEditor @ 14cf93390

bool __thiscall
TXRLoadingScreenBase<FSplashData>::IsTickableInEditor(TXRLoadingScreenBase<FSplashData> *this)

{
  return true;
}

// IsTickableWhenPaused @ 14cf933a0

bool __thiscall
TXRLoadingScreenBase<FSplashData>::IsTickableWhenPaused(TXRLoadingScreenBase<FSplashData> *this)

{
  return true;
}

// ShowLoadingScreen @ 14cf9bc70

void __thiscall
TXRLoadingScreenBase<FSplashData>::ShowLoadingScreen(TXRLoadingScreenBase<FSplashData> *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  LARGE_INTEGER LVar10;
  TQuat<double> *pTVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  LARGE_INTEGER local_res8;
  TRotator<double> local_98;
  undefined1 local_80 [24];
  TQuat<double> local_68;
  TQuat<double> local_48 [2];
  
  local_68.X._0_4_ = UE::Math::TQuat<double>::Identity.X._0_4_;
  local_68.X._4_4_ = UE::Math::TQuat<double>::Identity.X._4_4_;
  local_68.Y._0_4_ = UE::Math::TQuat<double>::Identity.Y._0_4_;
  local_68.Y._4_4_ = UE::Math::TQuat<double>::Identity.Y._4_4_;
  local_68.Z = UE::Math::TQuat<double>::Identity.Z;
  local_68.W = UE::Math::TQuat<double>::Identity.W;
  (**(code **)((longlong)*this->TrackingSystem + 0x58))(this->TrackingSystem,0,&local_68,local_80);
  UE::Math::TRotator<double>::TRotator<double>(&local_98,&local_68);
  local_98.Pitch = 0.0;
  local_98.Roll = 0.0;
  pTVar11 = UE::Math::TRotator<double>::Quaternion(&local_98,local_48);
  LVar10 = __real_3e45798ee0000000;
  local_res8 = __real_3e45798ee0000000;
  dVar6 = pTVar11->Z;
  dVar7 = pTVar11->W;
  dVar4 = pTVar11->Y;
  (this->HMDOrientation).X = pTVar11->X;
  (this->HMDOrientation).Y = dVar4;
  (this->HMDOrientation).Z = dVar6;
  (this->HMDOrientation).W = dVar7;
  dVar8 = (this->HMDOrientation).X;
  dVar9 = (this->HMDOrientation).Y;
  dVar16 = dVar6 * dVar6 + dVar8 * dVar8;
  dVar18 = dVar7 * dVar7 + dVar9 * dVar9;
  dVar4 = dVar18 + dVar16;
  dVar16 = dVar16 + dVar18;
  auVar20._8_4_ = SUB84(dVar16,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  auVar20 = sqrtpd(in_XMM4,auVar20);
  uVar14 = -(ulonglong)((double)LVar10 <= dVar4);
  uVar15 = -(ulonglong)((double)LVar10 <= dVar16);
  uVar23 = (uint)(uVar14 >> 0x20);
  uVar24 = (uint)(uVar15 >> 0x20);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar22._0_8_ = uVar14 & (ulonglong)(auVar21._0_8_ * dVar8);
  uVar5 = uVar15 & (ulonglong)(auVar21._8_8_ * dVar9);
  auVar22._8_4_ = (undefined4)uVar5;
  auVar22._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar21._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar21._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar21._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
  (this->HMDOrientation).X = (double)SUB168(auVar22 | auVar21,0);
  (this->HMDOrientation).Y = (double)SUB168(auVar22 | auVar21,8);
  auVar17._0_8_ = (ulonglong)(auVar20._0_8_ * dVar6) & uVar14;
  uVar5 = (ulonglong)(auVar20._8_8_ * dVar7) & uVar15;
  auVar17._8_4_ = (undefined4)uVar5;
  auVar17._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar19._0_4_ = ~(uint)uVar14 & SUB84((double)fVar2,0);
  auVar19._4_4_ = ~uVar23 & (uint)((ulonglong)(double)fVar2 >> 0x20);
  auVar19._8_4_ = ~(uint)uVar15 & SUB84((double)fVar3,0);
  auVar19._12_4_ = ~uVar24 & (uint)((ulonglong)(double)fVar3 >> 0x20);
  (this->HMDOrientation).Z = (double)SUB168(auVar19 | auVar17,0);
  (this->HMDOrientation).W = (double)SUB168(auVar19 | auVar17,8);
  iVar1 = (this->Splashes).ArrayNum;
  pFVar13 = (this->Splashes).AllocatorInstance.Data;
  pFVar12 = pFVar13 + (longlong)iVar1 * 0x100;
  while( true ) {
    if ((this->Splashes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSplashData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar13 == pFVar12) break;
    (**(code **)(this->_padding_ + 0x38))(this,pFVar13);
    pFVar13 = pFVar13 + 0x100;
  }
  if (this->bShowing == false) {
    this->bShowing = true;
    FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->_padding_,Always);
    QueryPerformanceCounter(&local_res8);
    this->LastTimeInSeconds =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return;
}

// Tick @ 14cf9d660

void __thiscall
TXRLoadingScreenBase<FSplashData>::Tick(TXRLoadingScreenBase<FSplashData> *this,float param_1)

{
  float fVar1;
  int iVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  fVar1 = *(float *)((longlong)&(this->HMDOrientation).W + 4);
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if ((double)(fVar1 + fVar1) < dVar3 - *(double *)&this->bShowing) {
    lVar4 = this->_padding_;
    iVar2 = *(int *)&(this->Splashes).AllocatorInstance.Data;
    lVar5 = (longlong)iVar2 * 0x100 + lVar4;
    while( true ) {
      if (*(int *)&(this->Splashes).AllocatorInstance.Data != iVar2) {
        `TCheckedPointerIterator<FSplashData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (lVar4 == lVar5) break;
      (**(code **)((longlong)this[-1].LastTimeInSeconds + 0x58))(&this[-1].LastTimeInSeconds,lVar4);
      lVar4 = lVar4 + 0x100;
    }
    *(double *)&this->bShowing = dVar3;
  }
  return;
}

