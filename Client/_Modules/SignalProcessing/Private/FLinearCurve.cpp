// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 11

// FLinearCurve @ 1444a4ca0

FLinearCurve * __thiscall
Audio::FLinearCurve::FLinearCurve
          (FLinearCurve *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FIdentityFunctor local_res8 [32];
  
  this->_padding_ = (longlong)&___7FLinearCurve_Audio__6B_;
  pTVar1 = &this->Points;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  if (pTVar1 != param_1) {
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Points).ArrayNum = param_1->ArrayNum;
    (this->Points).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  AlgoImpl::
  IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
            ((TVector2<double> *)(pTVar1->AllocatorInstance).Data,(this->Points).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return this;
}

// FLinearCurve @ 1444a4d10

FLinearCurve * __thiscall
Audio::FLinearCurve::FLinearCurve
          (FLinearCurve *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FIdentityFunctor local_res8 [8];
  
  this->_padding_ = (longlong)&___7FLinearCurve_Audio__6B_;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=(&this->Points,param_1);
  AlgoImpl::
  IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
            ((TVector2<double> *)(this->Points).AllocatorInstance.Data,(this->Points).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return this;
}

// ~FLinearCurve @ 1444a6800

void __thiscall Audio::FLinearCurve::~FLinearCurve(FLinearCurve *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddPoint @ 1444a8a90

void __thiscall Audio::FLinearCurve::AddPoint(FLinearCurve *this,TVector2<double> *param_1)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FIdentityFunctor local_res8 [8];
  
  pTVar1 = &this->Points;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Points).ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Points).ArrayNum;
  piVar2 = &(this->Points).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Points).ArrayNum = iVar7 + 1;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(double *)pFVar3 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar3 + 8) = dVar5;
  AlgoImpl::
  IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
            ((TVector2<double> *)(pTVar1->AllocatorInstance).Data,(this->Points).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// AddPoints @ 1444a8b60

void __thiscall
Audio::FLinearCurve::AddPoints
          (FLinearCurve *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FIdentityFunctor local_res8 [8];
  
  pTVar1 = &this->Points;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar2,&pTVar1->AllocatorInstance,&(this->Points).ArrayNum,
                       &(this->Points).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10,
           (param_1->AllocatorInstance).Data,(longlong)iVar2 << 4);
  }
  AlgoImpl::
  IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
            ((TVector2<double> *)(pTVar1->AllocatorInstance).Data,(this->Points).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// ClearPoints @ 1444b8440

void __thiscall Audio::FLinearCurve::ClearPoints(FLinearCurve *this)

{
  (this->Points).ArrayNum = 0;
  if ((this->Points).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Points).AllocatorInstance,0,&(this->Points).ArrayMax);
  }
  return;
}

// Eval @ 1444bd320

bool __thiscall Audio::FLinearCurve::Eval(FLinearCurve *this,float param_1,float *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  float fVar17;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 != 0) {
    if ((iVar1 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    dVar4 = (double)param_1;
    if (dVar4 < *(double *)pFVar2 || dVar4 == *(double *)pFVar2) {
      if (((this->Points).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      *param_2 = (float)*(double *)((this->Points).AllocatorInstance.Data + 8);
      return true;
    }
    iVar1 = (this->Points).ArrayNum;
    uVar13 = iVar1 - 1;
    uVar10 = 0;
    if ((int)uVar13 < iVar1) {
      uVar10 = ~uVar13 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    if (*(double *)(pFVar2 + (longlong)(int)uVar13 * 0x10) <= dVar4) {
      iVar1 = (this->Points).ArrayNum;
      uVar13 = iVar1 - 1;
      uVar10 = 0;
      if ((int)uVar13 < iVar1) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      *param_2 = (float)*(double *)
                         ((this->Points).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10 + 8);
      return true;
    }
    uVar10 = (this->Points).ArrayNum;
    uVar14 = 0;
    uVar13 = uVar14;
    uVar11 = uVar10;
    uVar12 = 0;
    if (0 < (int)uVar10) {
      do {
        uVar15 = uVar11 >> 1;
        uVar13 = uVar15 + uVar12 + (uVar11 & 1);
        if (dVar4 < *(double *)(pFVar2 + (longlong)(int)(uVar15 + uVar12) * 0x10)) {
          uVar13 = uVar12;
        }
        uVar11 = uVar15;
        uVar12 = uVar13;
      } while (uVar15 != 0);
    }
    if (((int)uVar13 <= (int)uVar10) && (0 < (int)uVar13)) {
      uVar12 = uVar13 - 1;
      uVar11 = uVar14;
      if ((int)uVar12 < (int)uVar10) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
      dVar5 = *(double *)pFVar2;
      dVar6 = *(double *)(pFVar2 + 8);
      if ((int)uVar13 < (this->Points).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
      dVar7 = *(double *)(pFVar2 + 8);
      dVar16 = *(double *)pFVar2 - dVar5;
      if (dVar16 <= __real_3e45798ee0000000) {
        dVar16 = __real_3e45798ee0000000;
      }
      fVar17 = (float)((dVar4 - dVar5) / dVar16);
      if (((fVar17 < 0.0) || (__real_3f800000 < fVar17)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Alpha >= 0.0f && Alpha <= 1.0f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioLinearCurve.cpp"
                             ,0x61,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      *param_2 = (float)((dVar7 - dVar6) * (double)fVar17 + dVar6);
      return true;
    }
  }
  return false;
}

// GetCurvePoints @ 1444bfbf0

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FLinearCurve::GetCurvePoints(FLinearCurve *this)

{
  return &this->Points;
}

// SetCurvePoints @ 1444e3260

void __thiscall
Audio::FLinearCurve::SetCurvePoints
          (FLinearCurve *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FIdentityFunctor local_res8 [8];
  
  pTVar1 = &this->Points;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Points).ArrayNum = param_1->ArrayNum;
    (this->Points).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  AlgoImpl::
  IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
            ((TVector2<double> *)(pTVar1->AllocatorInstance).Data,(this->Points).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// SetCurvePoints @ 1444e32d0

void __thiscall
Audio::FLinearCurve::SetCurvePoints
          (FLinearCurve *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FIdentityFunctor local_res8 [32];
  
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=(&this->Points,param_1);
  AlgoImpl::
  IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
            ((TVector2<double> *)(this->Points).AllocatorInstance.Data,(this->Points).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// Sort @ 1444e5df0

void __thiscall Audio::FLinearCurve::Sort(FLinearCurve *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<UE::Math::TVector2<double>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TVector2<double>,_Audio::FLinearCurve::Sort_::__l2::<lambda_1>_>_>
            ((TVector2<double> *)(this->Points).AllocatorInstance.Data,(this->Points).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return;
}

